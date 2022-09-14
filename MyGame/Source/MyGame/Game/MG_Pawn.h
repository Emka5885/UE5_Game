// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "MG_Pawn.generated.h"

UCLASS()
class MYGAME_API AMG_Pawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMG_Pawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Define Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* Mesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent* Camera;

	// VARIABLES //
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MoveForce = 500.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float JumpImpulse = 500.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxJumpCount = 1;

public:

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void ChangeLevel();

private:

	// FUNCTIONS //
	void MoveY(float Value);
	void MoveX(float Value);
	void Jump();
	void BackToMainMenu();

	int32 JumpCount = 0;

	TArray<FString> levels;
};

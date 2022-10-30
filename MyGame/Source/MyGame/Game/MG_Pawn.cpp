// Fill out your copyright notice in the Description page of Project Settings.


#include "MG_Pawn.h"


// Sets default values
AMG_Pawn::AMG_Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Create Components - Before this step the won't exist on our Actor, they've only been defined.
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");

	// Set the Root Component to be our Mesh.
	RootComponent = Mesh;
	// Attach the SpringArm to Mesh, Spring will now follow the Mesh transform.   //T³umaczenie - (attach) "przytwierdzaæ"
	SpringArm->SetupAttachment(Mesh);
	// Attach the Camera to the SpringArm, Camera will now follow the SpringArm transform.
	Camera->SetupAttachment(SpringArm);

	// Set physics to True
	Mesh->SetSimulatePhysics(true);

	levels.Add("MainMenuLevel");
	levels.Add("GameLevel1");
	levels.Add("GameLevel2");
}

// Called when the game starts or when spawned
void AMG_Pawn::BeginPlay()
{
	Super::BeginPlay();

	// Account for mass in MoveForce
	MoveForce *= Mesh->GetMass();
	JumpImpulse *= Mesh->GetMass();
}

// Called to bind functionality to input
void AMG_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Custom Input Axis Bindings.
	InputComponent->BindAxis("MoveX", this, &AMG_Pawn::MoveX);
	InputComponent->BindAxis("MoveY", this, &AMG_Pawn::MoveY);
	// Custom Action Binding.
	InputComponent->BindAction("DayNight", IE_Pressed, this, &AMG_Pawn::DayNight);   // ?
	InputComponent->BindAction("Jump", IE_Pressed, this, &AMG_Pawn::Jump);
	InputComponent->BindAction("BackToMainMenu", IE_Pressed, this, &AMG_Pawn::BackToMainMenu);
	
}

void AMG_Pawn::DayNight()
{
	FString current = GetWorld()->GetMapName();
	current.RemoveFromStart(GetWorld()->StreamingLevelsPrefix);

	for (int i = 1; i < levels.Num(); i++)
	{
		if (current != levels[i])
		{
			UGameplayStatics::OpenLevel(GetWorld(), FName(levels[i]));
			std::cout << "dziala" << std::endl;
			break;
		}
	}
}

void AMG_Pawn::MoveY(float Value)
{
	// Get The Right vector of the camera as it doesn't rotate and move the player in this direction based on the input and MoveForce.
	const FVector Y = Camera->GetRightVector() * MoveForce * Value;
	Mesh->AddForce(Y);
}

void AMG_Pawn::MoveX(float Value)
{
	const FVector X = Camera->GetForwardVector() * MoveForce * Value;
	Mesh->AddForce(X);
}

void AMG_Pawn::Jump()
{
	// Cap the number of jumps we can make.   //T³umaczenie - (cap) "ogranicz"
	if (JumpCount >= MaxJumpCount) { return; }
	//// Apply an impulse to the Mesh in the Z Axis.
	Mesh->AddImpulse(FVector(0, 0, JumpImpulse));
	// Track how many times we've jumped.   //T³umaczenie - (track) "œledŸ"
	JumpCount++;
}

void AMG_Pawn::BackToMainMenu()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName(levels[0]));
}

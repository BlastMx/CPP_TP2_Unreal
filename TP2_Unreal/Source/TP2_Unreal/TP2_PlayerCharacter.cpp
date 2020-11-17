// Fill out your copyright notice in the Description page of Project Settings.


#include "TP2_PlayerCharacter.h"

// Sets default values
ATP2_PlayerCharacter::ATP2_PlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 600.0f;
	GetCharacterMovement()->AirControl = 0.2f;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);

	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->bUsePawnControlRotation;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	FollowCamera->bUsePawnControlRotation = false;
}

// Called when the game starts or when spawned
void ATP2_PlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATP2_PlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATP2_PlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAxis("MoveForward", this, &ATP2_PlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATP2_PlayerCharacter::MoveRight);

	Jump(PlayerInputComponent);
	StopJumping(PlayerInputComponent);

	/*PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &ACharacter::Crouch(true));
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &ACharacter::UnCrouch());
	
	if (GetKeyState('SpaceBar') & 0x8000)
	{
		Jump(PlayerInputComponent);
	}
	else if (GetKeyState('SpaceBar') & 0x8000)
	{
		StopJumping(PlayerInputComponent);
	}*/
}

void ATP2_PlayerCharacter::MoveForward(float Axis)
{
	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(Direction, Axis);
}

void ATP2_PlayerCharacter::MoveRight(float Axis)
{
	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(Direction, Axis);
}

void ATP2_PlayerCharacter::Jump(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);

	//ATP2_AnimationInstance* AnimInstance = Cast<ATP2_AnimationInstance>();

	//AnimInstance->IsInAir = false;
}

void ATP2_PlayerCharacter::StopJumping(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayCharacter.h"

// Sets default values
APlayCharacter::APlayCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}


void APlayCharacter::LeftMove()
{
	// SetActorRelativeLocation(FVector::LeftVector);
}

void APlayCharacter::RightMove() 
{
	// SetActorLocation(FVector::RightVector);
	// SetActorRelativeLocation(FVector::RightVector);
}
void APlayCharacter::ForwardMove() 
{

}
void APlayCharacter::BackMove() 
{

}
//
//void APlayCharacter::InputMove(FKey _Key) 
//{
//
//}
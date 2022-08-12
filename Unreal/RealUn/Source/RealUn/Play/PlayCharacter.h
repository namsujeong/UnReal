// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayCharacter.generated.h"

UCLASS()
class REALUN_API APlayCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayCharacter();

	//UFUNCTION(BlueprintCallable, Category = RealUn)
	//void InputMove(FKey _Key);

	UFUNCTION(BlueprintCallable, Category = RealUn)
	void LeftMove();

	UFUNCTION(BlueprintCallable, Category = RealUn)
	void RightMove();

	UFUNCTION(BlueprintCallable, Category = RealUn)
	void ForwardMove();

	UFUNCTION(BlueprintCallable, Category = RealUn)
	void BackMove();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

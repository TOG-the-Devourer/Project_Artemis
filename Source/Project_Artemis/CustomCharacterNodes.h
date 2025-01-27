// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "CustomCharacterNodes.generated.h"


UCLASS()
class PROJECT_ARTEMIS_API ACustomCharacterNodes : public ACharacter
{
	GENERATED_BODY()

		

public:
	// Sets default values for this character's properties
	ACustomCharacterNodes();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	// Mouse Set Position Function
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", FriendlyName = "Set Mouse XY", BlueprintInternalUseOnly = "false"), Category = "Mouse Options")
		void SetMousePosition(float LocationX, float LocationY);
	
	//// Mouse Set Cursor Show/Hide and Toggle Mouse Over Events - Simultaneously
	//UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", FriendlyName = "Mouse Show/Hide & Toggle Events", BlueprintInternalUseOnly = "false"), Category = "Mouse Options")
	//	void SetMouseShowHideAndToggleEvents(const )
	//	
	//	void SetMousePosition(float LocationX, float LocationY);

};

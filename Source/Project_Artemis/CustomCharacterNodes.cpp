// Fill out your copyright notice in the Description page of Project Settings.

#include "Project_Artemis.h"
#include "CustomCharacterNodes.h"


// Sets default values
ACustomCharacterNodes::ACustomCharacterNodes()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACustomCharacterNodes::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACustomCharacterNodes::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ACustomCharacterNodes::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

// Provides way to set position of the Mouse Cursor
void ACustomCharacterNodes::SetMousePosition(float LocationX, float LocationY)
{
	
	auto PlayerController = CastChecked<APlayerController>(Controller);
	FViewport* v = CastChecked<ULocalPlayer>(PlayerController->Player)->ViewportClient->Viewport;

	int intX = (int)LocationX;
	int intY = (int)LocationY;
	v->SetMouse(intX, intY);
}


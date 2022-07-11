// Fill out your copyright notice in the Description page of Project Settings.


#include "TestPlayerController.h"

// Sets default values
ATestPlayerController::ATestPlayerController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ATestPlayerController::BeginPlay()
{
	Super::BeginPlay();
	bEnableClickEvents = true;
}

// Called every frame
void ATestPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	bShowMouseCursor = true;

}

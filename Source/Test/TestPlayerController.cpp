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
	bEnableClickEvents = true; //打开监听点击事件的开关
	bEnableMouseOverEvents = true; //打开监听鼠标悬停事件的开关
}

// Called every frame
void ATestPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	bShowMouseCursor = true;

}

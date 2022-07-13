// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AMyActor::NotifyActorOnClicked(FKey ButtonPressed) 
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("Click"));

	double NowTime = FDateTime::Now().GetTimeOfDay().GetTotalSeconds();

	// 是否处于双击测试阶段
	if (IsInDoubleClickTest) {
		// 如果已经处于双击测试阶段，则比较此刻与上一次鼠标点击是的时间间隔
		if (NowTime - LastClickTime < DoubleClickTestPadding) {
			//如果间隔足够小，就触发双击事件并退出双击测试阶段
			OnDoubleClick();
			IsInDoubleClickTest = false;
		}
	}
	else {
		// 如果不处于双击测试阶段，则进入双击测试阶段
		IsInDoubleClickTest = true;
	}
	// 每次鼠标点击，都要记录点击的时刻
	LastClickTime = NowTime;
}

void AMyActor::OnDoubleClick()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("DoubleClick"));
}


void AMyActor::NotifyActorBeginCursorOver()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, TEXT("BeginCursorOver"));
}

void AMyActor::NotifyActorEndCursorOver()
{
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, TEXT("EndCursorOver"));
}
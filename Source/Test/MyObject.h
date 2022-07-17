// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyObject.generated.h"

/**
 * 
 */
UCLASS()
class TEST_API UMyObject : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetName(FString InName);

	UFUNCTION(BlueprintCallable)
	FString GetName();

private:
	UPROPERTY()
	FString Name;
};

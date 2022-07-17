// Fill out your copyright notice in the Description page of Project Settings.


#include "MyObject.h"

void UMyObject::SetName(FString InName)
{
	Name = InName;
}

FString UMyObject::GetName()
{
	return Name;
}
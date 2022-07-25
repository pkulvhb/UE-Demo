// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class TEST_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Event when this actor is clicked by the mouse when using the clickable interface. */
	virtual void NotifyActorOnClicked(FKey ButtonPressed = EKeys::LeftMouseButton) override;

	// Event when this actor has the mouse moved over it with the clickable interface.
	virtual void NotifyActorBeginCursorOver() override;

	// Event when this actor has the mouse moved off of it with the clickable interface.
	virtual void NotifyActorEndCursorOver() override;

	/**
	 *	Event when this actor overlaps another actor, for example a player walking into a trigger.
	 *	For events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.
	 *	@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.
	 */
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	/**
	 *	Event when an actor no longer overlaps another actor, and they have separated.
	 *	@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.
	 */
	virtual void NotifyActorEndOverlap(AActor* OtherActor) override;

private:
	UPROPERTY()
		float DoubleClickTestPadding = 0.3f;

	UPROPERTY()
		float LastClickTime = 0;

	UPROPERTY()
		bool IsInDoubleClickTest = false;

	void OnDoubleClick();

};

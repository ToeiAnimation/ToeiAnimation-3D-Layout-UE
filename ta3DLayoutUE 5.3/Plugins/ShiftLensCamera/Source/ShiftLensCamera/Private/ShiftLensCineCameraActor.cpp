// Fill out your copyright notice in the Description page of Project Settings.

#include "ShiftLensCineCameraActor.h"
#include "ShiftLensCineCameraComponent.h"

//
AShiftLensCineCameraActor::AShiftLensCineCameraActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer
		.SetDefaultSubobjectClass<UShiftLensCineCameraComponent>(TEXT("CameraComponent"))
	)
{
	ShiftLensCineCameraComponent = Cast<UShiftLensCineCameraComponent>(GetCineCameraComponent());

	SetActorTickEnabled(true);
	//this->ShiftLens = 0.0f;
}

//
void AShiftLensCineCameraActor::Tick(float DeltaTime)
{
	UpdateShiftLens();
	Super::Tick(DeltaTime);
}

/** Get shift lens value from shift lens camera component. */
float AShiftLensCineCameraActor::GetShiftLensX()
{
	return this->ShiftLensCineCameraComponent->ShiftLensX;
}

/** Get shift lens value from shift lens camera component. */
float AShiftLensCineCameraActor::GetShiftLens()
{
	return this->ShiftLensCineCameraComponent->ShiftLensY;
}

/** Update shift lens value. */
void AShiftLensCineCameraActor::UpdateShiftLensX()
{
	this->ShiftLensCineCameraComponent->UpdateShiftLensX();
}

/** Update shift lens value. */
void AShiftLensCineCameraActor::UpdateShiftLens()
{
	this->ShiftLensCineCameraComponent->UpdateShiftLens();
}

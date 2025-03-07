// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "ShiftLensCineCameraActor.generated.h"

UCLASS(ClassGroup = Common, hideCategories = (Input, Rendering, AutoPlayerActivation), showcategories = ("Input|MouseInput", "Input|TouchInput"), Blueprintable)
class SHIFTLENSCAMERA_API AShiftLensCineCameraActor : public ACineCameraActor
{
	GENERATED_BODY()

public:
	AShiftLensCineCameraActor(const FObjectInitializer& ObjectInitializer);

	virtual void Tick(float DeltaTime) override;

	/** Get shift lens value from shift lens camera component. */
	UFUNCTION(BlueprintCallable, Category = "Cine Camera")
		float GetShiftLensX();

	/** Update shift lens value. */
	UFUNCTION(BlueprintCallable, Category = "Cine Camera")
		void UpdateShiftLensX();

	/** Get shift lens value from shift lens camera component. */
	UFUNCTION(BlueprintCallable, Category = "Cine Camera")
		float GetShiftLens();

	/** Update shift lens value. */
	UFUNCTION(BlueprintCallable, Category = "Cine Camera")
		void UpdateShiftLens();

	/** Returns the CineCameraComponent of this CineCamera. */
	UFUNCTION(BlueprintCallable, Category = "Cine Camera")
		UShiftLensCineCameraComponent* GetShiftLensCineCameraComponent() const { return ShiftLensCineCameraComponent; }

private:
	/** Returns CineCameraComponent subobject. */
	class UShiftLensCineCameraComponent* ShiftLensCineCameraComponent;

};

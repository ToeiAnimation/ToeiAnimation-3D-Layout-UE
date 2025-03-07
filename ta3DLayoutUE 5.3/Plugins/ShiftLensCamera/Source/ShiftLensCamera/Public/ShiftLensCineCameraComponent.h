// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CineCameraComponent.h"
#include "ShiftLensCineCameraComponent.generated.h"

UCLASS(HideCategories = (Mobility, Rendering, LOD), Blueprintable, ClassGroup = Camera, meta = (BlueprintSpawnableComponent))
class SHIFTLENSCAMERA_API UShiftLensCineCameraComponent : public UCineCameraComponent
{
	GENERATED_BODY()

public:
	
	virtual void GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView) override;

	UShiftLensCineCameraComponent();

	UPROPERTY(Interp, BlueprintSetter = SetShiftLensX, EditAnywhere, BlueprintReadWrite, Category = "Current Camera Settings")
		float ShiftLensX;
	UFUNCTION(BlueprintCallable, Category = "Current Camera Settings")
		virtual void SetShiftLensX(float InShiftLensX);

	UPROPERTY(Interp, BlueprintSetter = SetShiftLens, EditAnywhere, BlueprintReadWrite, Category = "Current Camera Settings")
		float ShiftLensY;
	UFUNCTION(BlueprintCallable, Category = "Current Camera Settings")
		virtual void SetShiftLens(float InShiftLens);	

	/** If it is true, camera keep horizontal. */
	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Current Camera Settings")
		uint8 KeepHorizontal : 1;

	/** Update shift lens X value. */
	UFUNCTION(BlueprintCallable, Category = "Current Camera Settings")
		void UpdateShiftLensX();

	/** Update shift lens value. */
	UFUNCTION(BlueprintCallable, Category = "Current Camera Settings")
		void UpdateShiftLens();

};

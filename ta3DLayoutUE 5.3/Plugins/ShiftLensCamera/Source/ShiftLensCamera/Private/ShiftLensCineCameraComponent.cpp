// Fill out your copyright notice in the Description page of Project Settings.
 

#include "ShiftLensCineCameraComponent.h"

UShiftLensCineCameraComponent::UShiftLensCineCameraComponent()
	: Super()
{
}

void UShiftLensCineCameraComponent::GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView)
{
	Super::GetCameraView(DeltaTime, DesiredView);

	// Update shift lens X
	DesiredView.OffCenterProjectionOffset.X = this->ShiftLensX;
	UpdateShiftLensX();

	// Update shift lens
	DesiredView.OffCenterProjectionOffset.Y = this->ShiftLensY;
	UpdateShiftLens();

	// Keep Horizontaltal
	if (KeepHorizontal) {
		DesiredView.Rotation.Pitch = 0.0f;
	}
}

/** Set shift lens value. */
void UShiftLensCineCameraComponent::SetShiftLens(float InShiftLens)
{
	ShiftLensY = InShiftLens;
}

/** Set shift lens value. */
void UShiftLensCineCameraComponent::SetShiftLensX(float InShiftLensX)
{
	ShiftLensX = InShiftLensX;
}

/** Update shift lens value. */
void UShiftLensCineCameraComponent::UpdateShiftLens()
{
	// For editor.
	AActor* Owner = GetOwner();
	APawn* OwningPawn = Cast<APawn>(GetOwner());
	AController* OwningController = OwningPawn ? OwningPawn->GetController() : nullptr;
	if (OwningController && OwningController->IsLocalPlayerController())
	{
		APlayerController* PlayerController = Cast<APlayerController>(OwningController);
		FLocalPlayerContext Context(PlayerController);
		ULocalPlayer* LocalPlayer = Context.GetLocalPlayer();
		if (LocalPlayer)
		{
			//			UShiftLensLocalPlayer* ShiftLensLocalPlayer = Cast<UShiftLensLocalPlayer>(LocalPlayer);
			//			if (ShiftLensLocalPlayer)
			//			{
			//				ShiftLensLocalPlayer->SetShiftLens(this->ShiftLens);
			//			}
		}
	}

	// For playing.
	UWorld* World = Owner->GetWorld();
	for (FConstPlayerControllerIterator Iterator = World->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		APlayerController* PlayerController = Iterator->Get();
		if (PlayerController && PlayerController->PlayerCameraManager)
		{
			//AActor* ViewTarget = PlayerController->GetViewTarget();
			//if (ViewTarget == this)
			//{
			ULocalPlayer* LocalPlayer = PlayerController->GetLocalPlayer();
			if (LocalPlayer)
			{
				//				UShiftLensLocalPlayer* ShiftLensLocalPlayer = Cast<UShiftLensLocalPlayer>(LocalPlayer);
				//				if (ShiftLensLocalPlayer)
				//				{
				//					ShiftLensLocalPlayer->SetShiftLens(this->ShiftLens);
				//				}
			}
			//}
		}
	}
}

/** Update shift lens X value. */
void UShiftLensCineCameraComponent::UpdateShiftLensX()
{
	// For editor.
	AActor* Owner = GetOwner();
	APawn* OwningPawn = Cast<APawn>(GetOwner());
	AController* OwningController = OwningPawn ? OwningPawn->GetController() : nullptr;
	if (OwningController && OwningController->IsLocalPlayerController())
	{
		APlayerController* PlayerController = Cast<APlayerController>(OwningController);
		FLocalPlayerContext Context(PlayerController);
		ULocalPlayer* LocalPlayer = Context.GetLocalPlayer();
		if (LocalPlayer)
		{
			//			UShiftLensLocalPlayer* ShiftLensXLocalPlayer = Cast<UShiftLensXLocalPlayer>(LocalPlayer);
			//			if (ShiftLensXLocalPlayer)
			//			{
			//				ShiftLensXLocalPlayer->SetShiftLensX(this->ShiftLensX);
			//			}
		}
	}

	// For playing.
	UWorld* World = Owner->GetWorld();
	for (FConstPlayerControllerIterator Iterator = World->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		APlayerController* PlayerController = Iterator->Get();
		if (PlayerController && PlayerController->PlayerCameraManager)
		{
			//AActor* ViewTarget = PlayerController->GetViewTarget();
			//if (ViewTarget == this)
			//{
			ULocalPlayer* LocalPlayer = PlayerController->GetLocalPlayer();
			if (LocalPlayer)
			{
				//				UShiftLensXLocalPlayer* ShiftLensLocalXPlayer = Cast<UShiftLensXLocalPlayer>(LocalPlayer);
				//				if (ShiftLensXLocalPlayer)
				//				{
				//					ShiftLensXLocalPlayer->SetShiftLensX(this->ShiftLensX);
				//				}
			}
			//}
		}
	}
}


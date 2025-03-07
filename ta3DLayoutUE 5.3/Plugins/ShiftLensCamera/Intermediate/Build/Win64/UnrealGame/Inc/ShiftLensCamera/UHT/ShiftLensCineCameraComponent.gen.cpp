// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShiftLensCamera/Public/ShiftLensCineCameraComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShiftLensCineCameraComponent() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent();
	SHIFTLENSCAMERA_API UClass* Z_Construct_UClass_UShiftLensCineCameraComponent();
	SHIFTLENSCAMERA_API UClass* Z_Construct_UClass_UShiftLensCineCameraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShiftLensCamera();
// End Cross Module References
	DEFINE_FUNCTION(UShiftLensCineCameraComponent::execUpdateShiftLens)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateShiftLens();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShiftLensCineCameraComponent::execUpdateShiftLensX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateShiftLensX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShiftLensCineCameraComponent::execSetShiftLens)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InShiftLens);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShiftLens(Z_Param_InShiftLens);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShiftLensCineCameraComponent::execSetShiftLensX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InShiftLensX);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShiftLensX(Z_Param_InShiftLensX);
		P_NATIVE_END;
	}
	void UShiftLensCineCameraComponent::StaticRegisterNativesUShiftLensCineCameraComponent()
	{
		UClass* Class = UShiftLensCineCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetShiftLens", &UShiftLensCineCameraComponent::execSetShiftLens },
			{ "SetShiftLensX", &UShiftLensCineCameraComponent::execSetShiftLensX },
			{ "UpdateShiftLens", &UShiftLensCineCameraComponent::execUpdateShiftLens },
			{ "UpdateShiftLensX", &UShiftLensCineCameraComponent::execUpdateShiftLensX },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLens_Statics
	{
		struct ShiftLensCineCameraComponent_eventSetShiftLens_Parms
		{
			float InShiftLens;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InShiftLens;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLens_Statics::NewProp_InShiftLens = { "InShiftLens", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShiftLensCineCameraComponent_eventSetShiftLens_Parms, InShiftLens), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLens_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLens_Statics::NewProp_InShiftLens,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLens_Statics::Function_MetaDataParams[] = {
		{ "Category", "Current Camera Settings" },
		{ "ModuleRelativePath", "Public/ShiftLensCineCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShiftLensCineCameraComponent, nullptr, "SetShiftLens", nullptr, nullptr, Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLens_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLens_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLens_Statics::ShiftLensCineCameraComponent_eventSetShiftLens_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLens_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLens_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLens_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLens_Statics::ShiftLensCineCameraComponent_eventSetShiftLens_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLens()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLens_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLensX_Statics
	{
		struct ShiftLensCineCameraComponent_eventSetShiftLensX_Parms
		{
			float InShiftLensX;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InShiftLensX;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLensX_Statics::NewProp_InShiftLensX = { "InShiftLensX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShiftLensCineCameraComponent_eventSetShiftLensX_Parms, InShiftLensX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLensX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLensX_Statics::NewProp_InShiftLensX,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLensX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Current Camera Settings" },
		{ "ModuleRelativePath", "Public/ShiftLensCineCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLensX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShiftLensCineCameraComponent, nullptr, "SetShiftLensX", nullptr, nullptr, Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLensX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLensX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLensX_Statics::ShiftLensCineCameraComponent_eventSetShiftLensX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLensX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLensX_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLensX_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLensX_Statics::ShiftLensCineCameraComponent_eventSetShiftLensX_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLensX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLensX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShiftLensCineCameraComponent_UpdateShiftLens_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShiftLensCineCameraComponent_UpdateShiftLens_Statics::Function_MetaDataParams[] = {
		{ "Category", "Current Camera Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Update shift lens value. */" },
#endif
		{ "ModuleRelativePath", "Public/ShiftLensCineCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update shift lens value." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShiftLensCineCameraComponent_UpdateShiftLens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShiftLensCineCameraComponent, nullptr, "UpdateShiftLens", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShiftLensCineCameraComponent_UpdateShiftLens_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShiftLensCineCameraComponent_UpdateShiftLens_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UShiftLensCineCameraComponent_UpdateShiftLens()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShiftLensCineCameraComponent_UpdateShiftLens_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShiftLensCineCameraComponent_UpdateShiftLensX_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShiftLensCineCameraComponent_UpdateShiftLensX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Current Camera Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Update shift lens X value. */" },
#endif
		{ "ModuleRelativePath", "Public/ShiftLensCineCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update shift lens X value." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShiftLensCineCameraComponent_UpdateShiftLensX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShiftLensCineCameraComponent, nullptr, "UpdateShiftLensX", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShiftLensCineCameraComponent_UpdateShiftLensX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShiftLensCineCameraComponent_UpdateShiftLensX_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UShiftLensCineCameraComponent_UpdateShiftLensX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShiftLensCineCameraComponent_UpdateShiftLensX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShiftLensCineCameraComponent);
	UClass* Z_Construct_UClass_UShiftLensCineCameraComponent_NoRegister()
	{
		return UShiftLensCineCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UShiftLensCineCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShiftLensX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShiftLensX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShiftLensY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShiftLensY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeepHorizontal_MetaData[];
#endif
		static void NewProp_KeepHorizontal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_KeepHorizontal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCineCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ShiftLensCamera,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLens, "SetShiftLens" }, // 3721934084
		{ &Z_Construct_UFunction_UShiftLensCineCameraComponent_SetShiftLensX, "SetShiftLensX" }, // 217531542
		{ &Z_Construct_UFunction_UShiftLensCineCameraComponent_UpdateShiftLens, "UpdateShiftLens" }, // 3506466655
		{ &Z_Construct_UFunction_UShiftLensCineCameraComponent_UpdateShiftLensX, "UpdateShiftLensX" }, // 69606867
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Camera" },
		{ "HideCategories", "Mobility Rendering LOD CameraSettings Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "HideFunctions", "SetFieldOfView SetAspectRatio" },
		{ "IncludePath", "ShiftLensCineCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ShiftLensCineCameraComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::NewProp_ShiftLensX_MetaData[] = {
		{ "BlueprintSetter", "SetShiftLensX" },
		{ "Category", "Current Camera Settings" },
		{ "ModuleRelativePath", "Public/ShiftLensCineCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::NewProp_ShiftLensX = { "ShiftLensX", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShiftLensCineCameraComponent, ShiftLensX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::NewProp_ShiftLensX_MetaData), Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::NewProp_ShiftLensX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::NewProp_ShiftLensY_MetaData[] = {
		{ "BlueprintSetter", "SetShiftLens" },
		{ "Category", "Current Camera Settings" },
		{ "ModuleRelativePath", "Public/ShiftLensCineCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::NewProp_ShiftLensY = { "ShiftLensY", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShiftLensCineCameraComponent, ShiftLensY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::NewProp_ShiftLensY_MetaData), Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::NewProp_ShiftLensY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::NewProp_KeepHorizontal_MetaData[] = {
		{ "Category", "Current Camera Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If it is true, camera keep horizontal. */" },
#endif
		{ "ModuleRelativePath", "Public/ShiftLensCineCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If it is true, camera keep horizontal." },
#endif
	};
#endif
	void Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::NewProp_KeepHorizontal_SetBit(void* Obj)
	{
		((UShiftLensCineCameraComponent*)Obj)->KeepHorizontal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::NewProp_KeepHorizontal = { "KeepHorizontal", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UShiftLensCineCameraComponent), &Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::NewProp_KeepHorizontal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::NewProp_KeepHorizontal_MetaData), Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::NewProp_KeepHorizontal_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::NewProp_ShiftLensX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::NewProp_ShiftLensY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::NewProp_KeepHorizontal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShiftLensCineCameraComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::ClassParams = {
		&UShiftLensCineCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UShiftLensCineCameraComponent()
	{
		if (!Z_Registration_Info_UClass_UShiftLensCineCameraComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShiftLensCineCameraComponent.OuterSingleton, Z_Construct_UClass_UShiftLensCineCameraComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShiftLensCineCameraComponent.OuterSingleton;
	}
	template<> SHIFTLENSCAMERA_API UClass* StaticClass<UShiftLensCineCameraComponent>()
	{
		return UShiftLensCineCameraComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShiftLensCineCameraComponent);
	UShiftLensCineCameraComponent::~UShiftLensCineCameraComponent() {}
	struct Z_CompiledInDeferFile_FID_ta3DLayoutUE_5_3_Plugins_ShiftLensCamera_Source_ShiftLensCamera_Public_ShiftLensCineCameraComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ta3DLayoutUE_5_3_Plugins_ShiftLensCamera_Source_ShiftLensCamera_Public_ShiftLensCineCameraComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShiftLensCineCameraComponent, UShiftLensCineCameraComponent::StaticClass, TEXT("UShiftLensCineCameraComponent"), &Z_Registration_Info_UClass_UShiftLensCineCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShiftLensCineCameraComponent), 2623982891U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ta3DLayoutUE_5_3_Plugins_ShiftLensCamera_Source_ShiftLensCamera_Public_ShiftLensCineCameraComponent_h_2615456439(TEXT("/Script/ShiftLensCamera"),
		Z_CompiledInDeferFile_FID_ta3DLayoutUE_5_3_Plugins_ShiftLensCamera_Source_ShiftLensCamera_Public_ShiftLensCineCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ta3DLayoutUE_5_3_Plugins_ShiftLensCamera_Source_ShiftLensCamera_Public_ShiftLensCineCameraComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

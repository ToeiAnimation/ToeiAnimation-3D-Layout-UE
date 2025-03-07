// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShiftLensCamera/Public/ShiftLensCineCameraActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShiftLensCineCameraActor() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
	SHIFTLENSCAMERA_API UClass* Z_Construct_UClass_AShiftLensCineCameraActor();
	SHIFTLENSCAMERA_API UClass* Z_Construct_UClass_AShiftLensCineCameraActor_NoRegister();
	SHIFTLENSCAMERA_API UClass* Z_Construct_UClass_UShiftLensCineCameraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShiftLensCamera();
// End Cross Module References
	DEFINE_FUNCTION(AShiftLensCineCameraActor::execGetShiftLensCineCameraComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UShiftLensCineCameraComponent**)Z_Param__Result=P_THIS->GetShiftLensCineCameraComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShiftLensCineCameraActor::execUpdateShiftLens)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateShiftLens();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShiftLensCineCameraActor::execGetShiftLens)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetShiftLens();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShiftLensCineCameraActor::execUpdateShiftLensX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateShiftLensX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShiftLensCineCameraActor::execGetShiftLensX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetShiftLensX();
		P_NATIVE_END;
	}
	void AShiftLensCineCameraActor::StaticRegisterNativesAShiftLensCineCameraActor()
	{
		UClass* Class = AShiftLensCineCameraActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetShiftLens", &AShiftLensCineCameraActor::execGetShiftLens },
			{ "GetShiftLensCineCameraComponent", &AShiftLensCineCameraActor::execGetShiftLensCineCameraComponent },
			{ "GetShiftLensX", &AShiftLensCineCameraActor::execGetShiftLensX },
			{ "UpdateShiftLens", &AShiftLensCineCameraActor::execUpdateShiftLens },
			{ "UpdateShiftLensX", &AShiftLensCineCameraActor::execUpdateShiftLensX },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLens_Statics
	{
		struct ShiftLensCineCameraActor_eventGetShiftLens_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLens_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShiftLensCineCameraActor_eventGetShiftLens_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLens_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLens_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLens_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get shift lens value from shift lens camera component. */" },
#endif
		{ "ModuleRelativePath", "Public/ShiftLensCineCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get shift lens value from shift lens camera component." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShiftLensCineCameraActor, nullptr, "GetShiftLens", nullptr, nullptr, Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLens_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLens_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLens_Statics::ShiftLensCineCameraActor_eventGetShiftLens_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLens_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLens_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLens_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLens_Statics::ShiftLensCineCameraActor_eventGetShiftLens_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLens()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLens_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensCineCameraComponent_Statics
	{
		struct ShiftLensCineCameraActor_eventGetShiftLensCineCameraComponent_Parms
		{
			UShiftLensCineCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensCineCameraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensCineCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShiftLensCineCameraActor_eventGetShiftLensCineCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UShiftLensCineCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensCineCameraComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensCineCameraComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensCineCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensCineCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensCineCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the CineCameraComponent of this CineCamera. */" },
#endif
		{ "ModuleRelativePath", "Public/ShiftLensCineCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the CineCameraComponent of this CineCamera." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensCineCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShiftLensCineCameraActor, nullptr, "GetShiftLensCineCameraComponent", nullptr, nullptr, Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensCineCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensCineCameraComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensCineCameraComponent_Statics::ShiftLensCineCameraActor_eventGetShiftLensCineCameraComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensCineCameraComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensCineCameraComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensCineCameraComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensCineCameraComponent_Statics::ShiftLensCineCameraActor_eventGetShiftLensCineCameraComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensCineCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensCineCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensX_Statics
	{
		struct ShiftLensCineCameraActor_eventGetShiftLensX_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShiftLensCineCameraActor_eventGetShiftLensX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get shift lens value from shift lens camera component. */" },
#endif
		{ "ModuleRelativePath", "Public/ShiftLensCineCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get shift lens value from shift lens camera component." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShiftLensCineCameraActor, nullptr, "GetShiftLensX", nullptr, nullptr, Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensX_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensX_Statics::ShiftLensCineCameraActor_eventGetShiftLensX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensX_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensX_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensX_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensX_Statics::ShiftLensCineCameraActor_eventGetShiftLensX_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShiftLensCineCameraActor_UpdateShiftLens_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShiftLensCineCameraActor_UpdateShiftLens_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Update shift lens value. */" },
#endif
		{ "ModuleRelativePath", "Public/ShiftLensCineCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update shift lens value." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShiftLensCineCameraActor_UpdateShiftLens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShiftLensCineCameraActor, nullptr, "UpdateShiftLens", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShiftLensCineCameraActor_UpdateShiftLens_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShiftLensCineCameraActor_UpdateShiftLens_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AShiftLensCineCameraActor_UpdateShiftLens()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShiftLensCineCameraActor_UpdateShiftLens_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShiftLensCineCameraActor_UpdateShiftLensX_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShiftLensCineCameraActor_UpdateShiftLensX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Update shift lens value. */" },
#endif
		{ "ModuleRelativePath", "Public/ShiftLensCineCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update shift lens value." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShiftLensCineCameraActor_UpdateShiftLensX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShiftLensCineCameraActor, nullptr, "UpdateShiftLensX", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShiftLensCineCameraActor_UpdateShiftLensX_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShiftLensCineCameraActor_UpdateShiftLensX_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AShiftLensCineCameraActor_UpdateShiftLensX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShiftLensCineCameraActor_UpdateShiftLensX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShiftLensCineCameraActor);
	UClass* Z_Construct_UClass_AShiftLensCineCameraActor_NoRegister()
	{
		return AShiftLensCineCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_AShiftLensCineCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShiftLensCineCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACineCameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShiftLensCamera,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShiftLensCineCameraActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AShiftLensCineCameraActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLens, "GetShiftLens" }, // 422894510
		{ &Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensCineCameraComponent, "GetShiftLensCineCameraComponent" }, // 3824033629
		{ &Z_Construct_UFunction_AShiftLensCineCameraActor_GetShiftLensX, "GetShiftLensX" }, // 2845199939
		{ &Z_Construct_UFunction_AShiftLensCineCameraActor_UpdateShiftLens, "UpdateShiftLens" }, // 1952734319
		{ &Z_Construct_UFunction_AShiftLensCineCameraActor_UpdateShiftLensX, "UpdateShiftLensX" }, // 916289459
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShiftLensCineCameraActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShiftLensCineCameraActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Common" },
		{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "ShiftLensCineCameraActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ShiftLensCineCameraActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShiftLensCineCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShiftLensCineCameraActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShiftLensCineCameraActor_Statics::ClassParams = {
		&AShiftLensCineCameraActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShiftLensCineCameraActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AShiftLensCineCameraActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AShiftLensCineCameraActor()
	{
		if (!Z_Registration_Info_UClass_AShiftLensCineCameraActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShiftLensCineCameraActor.OuterSingleton, Z_Construct_UClass_AShiftLensCineCameraActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShiftLensCineCameraActor.OuterSingleton;
	}
	template<> SHIFTLENSCAMERA_API UClass* StaticClass<AShiftLensCineCameraActor>()
	{
		return AShiftLensCineCameraActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShiftLensCineCameraActor);
	AShiftLensCineCameraActor::~AShiftLensCineCameraActor() {}
	struct Z_CompiledInDeferFile_FID_MyPluginX_Plugins_ShiftLensCamera_Source_ShiftLensCamera_Public_ShiftLensCineCameraActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPluginX_Plugins_ShiftLensCamera_Source_ShiftLensCamera_Public_ShiftLensCineCameraActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShiftLensCineCameraActor, AShiftLensCineCameraActor::StaticClass, TEXT("AShiftLensCineCameraActor"), &Z_Registration_Info_UClass_AShiftLensCineCameraActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShiftLensCineCameraActor), 1318285509U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPluginX_Plugins_ShiftLensCamera_Source_ShiftLensCamera_Public_ShiftLensCineCameraActor_h_175665890(TEXT("/Script/ShiftLensCamera"),
		Z_CompiledInDeferFile_FID_MyPluginX_Plugins_ShiftLensCamera_Source_ShiftLensCamera_Public_ShiftLensCineCameraActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPluginX_Plugins_ShiftLensCamera_Source_ShiftLensCamera_Public_ShiftLensCineCameraActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

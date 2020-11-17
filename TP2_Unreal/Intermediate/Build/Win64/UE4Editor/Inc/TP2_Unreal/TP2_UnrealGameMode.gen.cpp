// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_Unreal/TP2_UnrealGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP2_UnrealGameMode() {}
// Cross Module References
	TP2_UNREAL_API UClass* Z_Construct_UClass_ATP2_UnrealGameMode_NoRegister();
	TP2_UNREAL_API UClass* Z_Construct_UClass_ATP2_UnrealGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TP2_Unreal();
// End Cross Module References
	void ATP2_UnrealGameMode::StaticRegisterNativesATP2_UnrealGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATP2_UnrealGameMode_NoRegister()
	{
		return ATP2_UnrealGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATP2_UnrealGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP2_UnrealGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TP2_Unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP2_UnrealGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TP2_UnrealGameMode.h" },
		{ "ModuleRelativePath", "TP2_UnrealGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP2_UnrealGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP2_UnrealGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP2_UnrealGameMode_Statics::ClassParams = {
		&ATP2_UnrealGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATP2_UnrealGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATP2_UnrealGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP2_UnrealGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP2_UnrealGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP2_UnrealGameMode, 2823101135);
	template<> TP2_UNREAL_API UClass* StaticClass<ATP2_UnrealGameMode>()
	{
		return ATP2_UnrealGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP2_UnrealGameMode(Z_Construct_UClass_ATP2_UnrealGameMode, &ATP2_UnrealGameMode::StaticClass, TEXT("/Script/TP2_Unreal"), TEXT("ATP2_UnrealGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP2_UnrealGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

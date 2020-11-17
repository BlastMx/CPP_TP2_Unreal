// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP2_Unreal/TP2_AnimationInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP2_AnimationInstance() {}
// Cross Module References
	TP2_UNREAL_API UClass* Z_Construct_UClass_UTP2_AnimationInstance_NoRegister();
	TP2_UNREAL_API UClass* Z_Construct_UClass_UTP2_AnimationInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TP2_Unreal();
// End Cross Module References
	void UTP2_AnimationInstance::StaticRegisterNativesUTP2_AnimationInstance()
	{
	}
	UClass* Z_Construct_UClass_UTP2_AnimationInstance_NoRegister()
	{
		return UTP2_AnimationInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTP2_AnimationInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCrouch_MetaData[];
#endif
		static void NewProp_IsCrouch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCrouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInAir_MetaData[];
#endif
		static void NewProp_IsInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTP2_AnimationInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TP2_Unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP2_AnimationInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance AnimInstance" },
		{ "IncludePath", "TP2_AnimationInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TP2_AnimationInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP2_AnimationInstance_Statics::NewProp_IsCrouch_MetaData[] = {
		{ "Category", "Generic" },
		{ "ModuleRelativePath", "TP2_AnimationInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTP2_AnimationInstance_Statics::NewProp_IsCrouch_SetBit(void* Obj)
	{
		((UTP2_AnimationInstance*)Obj)->IsCrouch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTP2_AnimationInstance_Statics::NewProp_IsCrouch = { "IsCrouch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTP2_AnimationInstance), &Z_Construct_UClass_UTP2_AnimationInstance_Statics::NewProp_IsCrouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTP2_AnimationInstance_Statics::NewProp_IsCrouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTP2_AnimationInstance_Statics::NewProp_IsCrouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP2_AnimationInstance_Statics::NewProp_IsInAir_MetaData[] = {
		{ "Category", "Generic" },
		{ "ModuleRelativePath", "TP2_AnimationInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTP2_AnimationInstance_Statics::NewProp_IsInAir_SetBit(void* Obj)
	{
		((UTP2_AnimationInstance*)Obj)->IsInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTP2_AnimationInstance_Statics::NewProp_IsInAir = { "IsInAir", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTP2_AnimationInstance), &Z_Construct_UClass_UTP2_AnimationInstance_Statics::NewProp_IsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTP2_AnimationInstance_Statics::NewProp_IsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTP2_AnimationInstance_Statics::NewProp_IsInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP2_AnimationInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Generic" },
		{ "ModuleRelativePath", "TP2_AnimationInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTP2_AnimationInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTP2_AnimationInstance, Speed), METADATA_PARAMS(Z_Construct_UClass_UTP2_AnimationInstance_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTP2_AnimationInstance_Statics::NewProp_Speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTP2_AnimationInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP2_AnimationInstance_Statics::NewProp_IsCrouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP2_AnimationInstance_Statics::NewProp_IsInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP2_AnimationInstance_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTP2_AnimationInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTP2_AnimationInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTP2_AnimationInstance_Statics::ClassParams = {
		&UTP2_AnimationInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTP2_AnimationInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTP2_AnimationInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTP2_AnimationInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTP2_AnimationInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTP2_AnimationInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTP2_AnimationInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTP2_AnimationInstance, 3950860759);
	template<> TP2_UNREAL_API UClass* StaticClass<UTP2_AnimationInstance>()
	{
		return UTP2_AnimationInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTP2_AnimationInstance(Z_Construct_UClass_UTP2_AnimationInstance, &UTP2_AnimationInstance::StaticClass, TEXT("/Script/TP2_Unreal"), TEXT("UTP2_AnimationInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTP2_AnimationInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

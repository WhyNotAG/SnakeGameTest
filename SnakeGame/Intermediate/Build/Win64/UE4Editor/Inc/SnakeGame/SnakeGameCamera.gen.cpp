// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/Public/SnakeGameCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeGameCamera() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeGameCamera_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeGameCamera();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeGameActor_NoRegister();
// End Cross Module References
	void ASnakeGameCamera::StaticRegisterNativesASnakeGameCamera()
	{
	}
	UClass* Z_Construct_UClass_ASnakeGameCamera_NoRegister()
	{
		return ASnakeGameCamera::StaticClass();
	}
	struct Z_Construct_UClass_ASnakeGameCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxRootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxRootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SGActorSubclass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SGActorSubclass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SGActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SGActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnakeGameCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeGameCamera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SnakeGameCamera.h" },
		{ "ModuleRelativePath", "Public/SnakeGameCamera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_BoxRootComponent_MetaData[] = {
		{ "Category", "SnakeGameCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SnakeGameCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_BoxRootComponent = { "BoxRootComponent", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeGameCamera, BoxRootComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_BoxRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_BoxRootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "SnakeGameCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SnakeGameCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeGameCamera, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "SnakeGameCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SnakeGameCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeGameCamera, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_SGActorSubclass_MetaData[] = {
		{ "Category", "SnakeGameCamera" },
		{ "ModuleRelativePath", "Public/SnakeGameCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_SGActorSubclass = { "SGActorSubclass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeGameCamera, SGActorSubclass), Z_Construct_UClass_ASnakeGameActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_SGActorSubclass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_SGActorSubclass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_SGActor_MetaData[] = {
		{ "Category", "SnakeGameCamera" },
		{ "ModuleRelativePath", "Public/SnakeGameCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_SGActor = { "SGActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeGameCamera, SGActor), Z_Construct_UClass_ASnakeGameActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_SGActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_SGActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_ArmLength_MetaData[] = {
		{ "Category", "SnakeGameCamera" },
		{ "ModuleRelativePath", "Public/SnakeGameCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_ArmLength = { "ArmLength", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakeGameCamera, ArmLength), METADATA_PARAMS(Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_ArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_ArmLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakeGameCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_BoxRootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_SpringArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_SGActorSubclass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_SGActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeGameCamera_Statics::NewProp_ArmLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnakeGameCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeGameCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASnakeGameCamera_Statics::ClassParams = {
		&ASnakeGameCamera::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASnakeGameCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASnakeGameCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnakeGameCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASnakeGameCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASnakeGameCamera, 2547064820);
	template<> SNAKEGAME_API UClass* StaticClass<ASnakeGameCamera>()
	{
		return ASnakeGameCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASnakeGameCamera(Z_Construct_UClass_ASnakeGameCamera, &ASnakeGameCamera::StaticClass, TEXT("/Script/SnakeGame"), TEXT("ASnakeGameCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeGameCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_SnakeGameCamera_generated_h
#error "SnakeGameCamera.generated.h already included, missing '#pragma once' in SnakeGameCamera.h"
#endif
#define SNAKEGAME_SnakeGameCamera_generated_h

#define SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_SPARSE_DATA
#define SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_RPC_WRAPPERS
#define SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeGameCamera(); \
	friend struct Z_Construct_UClass_ASnakeGameCamera_Statics; \
public: \
	DECLARE_CLASS(ASnakeGameCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(ASnakeGameCamera)


#define SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_INCLASS \
private: \
	static void StaticRegisterNativesASnakeGameCamera(); \
	friend struct Z_Construct_UClass_ASnakeGameCamera_Statics; \
public: \
	DECLARE_CLASS(ASnakeGameCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(ASnakeGameCamera)


#define SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnakeGameCamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnakeGameCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeGameCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeGameCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeGameCamera(ASnakeGameCamera&&); \
	NO_API ASnakeGameCamera(const ASnakeGameCamera&); \
public:


#define SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeGameCamera(ASnakeGameCamera&&); \
	NO_API ASnakeGameCamera(const ASnakeGameCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeGameCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeGameCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakeGameCamera)


#define SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxRootComponent() { return STRUCT_OFFSET(ASnakeGameCamera, BoxRootComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ASnakeGameCamera, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__SpringArmComponent() { return STRUCT_OFFSET(ASnakeGameCamera, SpringArmComponent); } \
	FORCEINLINE static uint32 __PPO__SGActorSubclass() { return STRUCT_OFFSET(ASnakeGameCamera, SGActorSubclass); } \
	FORCEINLINE static uint32 __PPO__SGActor() { return STRUCT_OFFSET(ASnakeGameCamera, SGActor); } \
	FORCEINLINE static uint32 __PPO__ArmLength() { return STRUCT_OFFSET(ASnakeGameCamera, ArmLength); }


#define SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_16_PROLOG
#define SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_SPARSE_DATA \
	SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_RPC_WRAPPERS \
	SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_INCLASS \
	SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_SPARSE_DATA \
	SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_INCLASS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class ASnakeGameCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeGame_Source_SnakeGame_Public_SnakeGameCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

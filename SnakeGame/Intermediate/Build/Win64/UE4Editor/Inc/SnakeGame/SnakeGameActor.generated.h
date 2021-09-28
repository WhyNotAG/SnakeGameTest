// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SNAKEGAME_SnakeGameActor_generated_h
#error "SnakeGameActor.generated.h already included, missing '#pragma once' in SnakeGameActor.h"
#endif
#define SNAKEGAME_SnakeGameActor_generated_h

#define SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_SPARSE_DATA
#define SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeGameActor(); \
	friend struct Z_Construct_UClass_ASnakeGameActor_Statics; \
public: \
	DECLARE_CLASS(ASnakeGameActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(ASnakeGameActor)


#define SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASnakeGameActor(); \
	friend struct Z_Construct_UClass_ASnakeGameActor_Statics; \
public: \
	DECLARE_CLASS(ASnakeGameActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(ASnakeGameActor)


#define SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnakeGameActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnakeGameActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeGameActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeGameActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeGameActor(ASnakeGameActor&&); \
	NO_API ASnakeGameActor(const ASnakeGameActor&); \
public:


#define SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeGameActor(ASnakeGameActor&&); \
	NO_API ASnakeGameActor(const ASnakeGameActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeGameActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeGameActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakeGameActor)


#define SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Step() { return STRUCT_OFFSET(ASnakeGameActor, Step); } \
	FORCEINLINE static uint32 __PPO__Head() { return STRUCT_OFFSET(ASnakeGameActor, Head); } \
	FORCEINLINE static uint32 __PPO__TailClass() { return STRUCT_OFFSET(ASnakeGameActor, TailClass); } \
	FORCEINLINE static uint32 __PPO__DirectionMove() { return STRUCT_OFFSET(ASnakeGameActor, DirectionMove); }


#define SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_14_PROLOG
#define SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_SPARSE_DATA \
	SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_RPC_WRAPPERS \
	SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_INCLASS \
	SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_SPARSE_DATA \
	SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_INCLASS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class ASnakeGameActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeGame_Source_SnakeGame_Public_SnakeGameActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

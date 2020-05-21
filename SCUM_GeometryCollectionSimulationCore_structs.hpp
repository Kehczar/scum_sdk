#pragma once

// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GeometryCollectionSimulationCore.EEmissionPatternTypeEnum
enum class EEmissionPatternTypeEnum : uint8_t
{
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_First_Frame = 0,
	None                           = 1,
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_On_Demand = 2
};


// Enum GeometryCollectionSimulationCore.EInitialVelocityTypeEnum
enum class EInitialVelocityTypeEnum : uint8_t
{
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_User_Defined = 0,
	None                           = 1,
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_None = 2
};


// Enum GeometryCollectionSimulationCore.EGeometryCollectionPhysicsTypeEnum
enum class EGeometryCollectionPhysicsTypeEnum : uint8_t
{
	EGeometryCollectionPhysicsTypeEnum__Chaos_AngularVelocity = 0,
	None                           = 1,
	EGeometryCollectionPhysicsTypeEnum__Chaos_DynamicState = 2,
	neByteProperty‘IntProperty  = 3,
	EGeometryCollectionPhysicsTypeEnum__Chaos_LinearVelocity = 4,
	ByteProperty‘IntProperty    = 5,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InitialAngularVelocity = 6,
	ByteProperty                   = 7,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InitialLinearVelocity = 8,
	teProperty‘IntProperty        = 9
};


// Enum GeometryCollectionSimulationCore.EObjectStateTypeEnum
enum class EObjectStateTypeEnum : uint8_t
{
	EObjectStateTypeEnum__Chaos_NONE = 0,
	None                           = 1,
	EObjectStateTypeEnum__Chaos_Object_Sleeping = 2,
	neByteProperty‘IntProperty  = 3,
	EObjectStateTypeEnum__Chaos_Object_Kinematic = 4,
	ByteProperty‘IntProperty    = 5,
	EObjectStateTypeEnum__Chaos_Object_Static = 6
};


// Enum GeometryCollectionSimulationCore.EImplicitTypeEnum
enum class EImplicitTypeEnum : uint8_t
{
	EImplicitTypeEnum__Chaos_Implicit_Box = 0,
	None                           = 1,
	EImplicitTypeEnum__Chaos_Implicit_Sphere = 2,
	neByteProperty‘IntProperty  = 3,
	EImplicitTypeEnum__Chaos_Implicit_Capsule = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum GeometryCollectionSimulationCore.ECollisionTypeEnum
enum class ECollisionTypeEnum : uint8_t
{
	ECollisionTypeEnum__Chaos_Volumetric = 0,
	None                           = 1,
	ECollisionTypeEnum__Chaos_Surface_Volumetric = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

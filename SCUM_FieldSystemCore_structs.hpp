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

// Enum FieldSystemCore.EFieldPhysicsDefaultFields
enum class EFieldPhysicsDefaultFields : uint8_t
{
	Field_RadialIntMask            = 0,
	None                           = 1,
	Field_RadialFalloff            = 2,
	neByteProperty‘IntProperty  = 3,
	Field_UniformVector            = 4,
	ByteProperty‘IntProperty    = 5,
	Field_RadialVector             = 6,
	ByteProperty                   = 7,
	Field_RadialVectorFalloff      = 8,
	teProperty‘IntProperty        = 9,
	Field_EFieldPhysicsDefaultFields_Max = 10,
	Property‘IntProperty          = 11,
	Field_MAX                      = 12,
	operty‘IntProperty            = 13,
	None01                         = 14,
	None02                         = 15,
	None03                         = 16,
	None04                         = 17,
	None05                         = 18,
	None06                         = 19,
	None07                         = 20,
	None08                         = 21,
	None09                         = 22,
	None10                         = 23,
	None11                         = 24,
	None12                         = 25,
	None13                         = 26,
	None14                         = 27
};


// Enum FieldSystemCore.EFieldPhysicsType
enum class EFieldPhysicsType : uint8_t
{
	Field_None                     = 0,
	None                           = 1,
	Field_DynamicState             = 2,
	neByteProperty‘IntProperty  = 3,
	Field_LinearForce              = 4,
	ByteProperty‘IntProperty    = 5,
	Field_ExternalClusterStrain    = 6,
	ByteProperty                   = 7,
	Field_Kill                     = 8,
	teProperty‘IntProperty        = 9,
	Field_LinearVelocity           = 10,
	Property‘IntProperty          = 11,
	Field_AngularVelociy           = 12,
	operty‘IntProperty            = 13,
	Field_AngularTorque            = 14,
	erty‘IntProperty              = 15,
	Field_InternalClusterStrain    = 16,
	ty‘IntProperty                = 17
};


// Enum FieldSystemCore.EFieldFalloffType
enum class EFieldFalloffType : uint8_t
{
	Field_FallOff_None             = 0,
	None                           = 1,
	Field_Falloff_Linear           = 2,
	neByteProperty‘IntProperty  = 3,
	Field_Falloff_Inverse          = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum FieldSystemCore.EFieldResolutionType
enum class EFieldResolutionType : uint8_t
{
	Field_Resolution_Minimal       = 0,
	None                           = 1,
	Field_Resolution_DisabledParents = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum FieldSystemCore.EFieldCullingOperationType
enum class EFieldCullingOperationType : uint8_t
{
	Field_Culling_Inside           = 0,
	None                           = 1,
	Field_Culling_Outside          = 2,
	neByteProperty‘IntProperty  = 3,
	Field_Culling_Operation_Max    = 4,
	ByteProperty‘IntProperty    = 5,
	Field_Culling_MAX              = 6,
	ByteProperty                   = 7,
	None01                         = 8,
	None02                         = 9,
	None03                         = 10,
	None04                         = 11,
	None05                         = 12,
	None06                         = 13,
	None07                         = 14,
	None08                         = 15,
	None09                         = 16,
	None10                         = 17,
	None11                         = 18,
	None12                         = 19,
	None13                         = 20,
	None14                         = 21,
	None15                         = 22,
	None16                         = 23
};


// Enum FieldSystemCore.EFieldOperationType
enum class EFieldOperationType : uint8_t
{
	Field_Multiply                 = 0,
	None                           = 1,
	Field_Divide                   = 2,
	neByteProperty‘IntProperty  = 3,
	Field_Add                      = 4
};


// Enum FieldSystemCore.ESetMaskConditionType
enum class ESetMaskConditionType : uint8_t
{
	Field_Set_Always               = 0,
	None                           = 1,
	Field_Set_IFF_NOT_Interior     = 2,
	neByteProperty‘IntProperty  = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Enum ModelingOperators.ENormalCalculationMethod
enum class ENormalCalculationMethod : uint8_t
{
	ENormalCalculationMethod__AreaWeighted = 0,
	None                           = 1,
	ENormalCalculationMethod__AngleWeighted = 2,
	neByteProperty‘IntProperty  = 3,
	ENormalCalculationMethod__AreaAngleWeighting = 4,
	ByteProperty‘IntProperty    = 5,
	ENormalCalculationMethod__ENormalCalculationMethod_MAX = 6,
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


// Enum ModelingOperators.ERemeshSmoothingType
enum class ERemeshSmoothingType : uint8_t
{
	ERemeshSmoothingType__Uniform  = 0,
	None                           = 1,
	ERemeshSmoothingType__Cotangent = 2,
	neByteProperty‘IntProperty  = 3,
	ERemeshSmoothingType__MeanValue = 4,
	ByteProperty‘IntProperty    = 5,
	ERemeshSmoothingType__ERemeshSmoothingType_MAX = 6,
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


// Enum ModelingOperators.EUVProjectionMethod
enum class EUVProjectionMethod : uint8_t
{
	EUVProjectionMethod__Cube      = 0,
	None                           = 1,
	EUVProjectionMethod__Cylinder  = 2,
	neByteProperty‘IntProperty  = 3,
	EUVProjectionMethod__Plane     = 4,
	ByteProperty‘IntProperty    = 5,
	EUVProjectionMethod__EUVProjectionMethod_MAX = 6,
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



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

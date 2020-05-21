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

// Enum MagicLeapPlanes.EMagicLeapPlaneQueryFlags
enum class EMagicLeapPlaneQueryFlags : uint8_t
{
	EMagicLeapPlaneQueryFlags__Vertical = 0,
	None                           = 1,
	EMagicLeapPlaneQueryFlags__Horizontal = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapPlaneQueryFlags__Arbitrary = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapPlaneQueryFlags__OrientToGravity = 6,
	ByteProperty                   = 7,
	EMagicLeapPlaneQueryFlags__PreferInner = 8,
	teProperty‘IntProperty        = 9
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapPlanes.MagicLeapPolygon
// 0x0010
struct FMagicLeapPolygon
{
	TArray<struct FVector>                             Vertices;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundary
// 0x0020
struct FMagicLeapPlaneBoundary
{
	struct FMagicLeapPolygon                           Polygon;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	TArray<struct FMagicLeapPolygon>                   Holes;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundaries
// 0x0020
struct FMagicLeapPlaneBoundaries
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FMagicLeapPlaneBoundary>             Boundaries;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneResult
// 0x0050
struct FMagicLeapPlaneResult
{
	struct FVector                                     PlanePosition;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    PlaneOrientation;                                         // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ContentOrientation;                                       // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PlaneDimensions;                                          // 0x0024(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<EMagicLeapPlaneQueryFlags>                  PlaneFlags;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FGuid                                       ID;                                                       // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlanesQuery
// 0x0050
struct FMagicLeapPlanesQuery
{
	TArray<EMagicLeapPlaneQueryFlags>                  Flags;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UBoxComponent*                               SearchVolume;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MaxResults;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinHoleLength;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPlaneArea;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SearchVolumePosition;                                     // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       SearchVolumeOrientation;                                  // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SearchVolumeExtents;                                      // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

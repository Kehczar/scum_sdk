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

// Enum MagicLeapAR.ELuminARLineTraceChannel
enum class ELuminARLineTraceChannel : uint8_t
{
	ELuminARLineTraceChannel__None = 0,
	None                           = 1,
	ELuminARLineTraceChannel__FeaturePoint = 2,
	neByteProperty‘IntProperty  = 3,
	ELuminARLineTraceChannel__InfinitePlane = 4,
	ByteProperty‘IntProperty    = 5,
	ELuminARLineTraceChannel__PlaneUsingExtent = 6,
	teProperty‘IntProperty        = 7,
	ELuminARLineTraceChannel__PlaneUsingBoundaryPolygon = 8,
	ty‘IntProperty                = 9,
	ELuminARLineTraceChannel__FeaturePointWithSurfaceNormal = 10,
	
                              = 11,
	ELuminARLineTraceChannel__ELuminARLineTraceChannel_MAX = 12,
	BoolProperty                   = 13,
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


// Enum MagicLeapAR.ELuminARTrackingState
enum class ELuminARTrackingState : uint8_t
{
	ELuminARTrackingState__Tracking = 0,
	None                           = 1,
	ELuminARTrackingState__NotTracking = 2,
	neByteProperty‘IntProperty  = 3,
	ELuminARTrackingState__StoppedTracking = 4,
	ByteProperty‘IntProperty    = 5,
	ELuminARTrackingState__ELuminARTrackingState_MAX = 6,
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


// Enum MagicLeapAR.ELuminARFunctionStatus
enum class ELuminARFunctionStatus : uint8_t
{
	ELuminARFunctionStatus__Success = 0,
	None                           = 1,
	ELuminARFunctionStatus__Fatal  = 2,
	neByteProperty‘IntProperty  = 3,
	ELuminARFunctionStatus__SessionPaused = 4,
	ByteProperty‘IntProperty    = 5,
	ELuminARFunctionStatus__NotTracking = 6,
	ByteProperty                   = 7,
	ELuminARFunctionStatus__ResourceExhausted = 8,
	teProperty‘IntProperty        = 9,
	ELuminARFunctionStatus__NotAvailable = 10,
	Property‘IntProperty          = 11,
	ELuminARFunctionStatus__InvalidType = 12,
	operty‘IntProperty            = 13,
	ELuminARFunctionStatus__Unknown = 14,
	erty‘IntProperty              = 15,
	ELuminARFunctionStatus__ELuminARFunctionStatus_MAX = 16,
	ty‘IntProperty                = 17,
	None01                         = 18,
	None02                         = 19,
	None03                         = 20,
	None04                         = 21,
	None05                         = 22,
	None06                         = 23,
	None07                         = 24,
	None08                         = 25,
	None09                         = 26,
	None10                         = 27
};


// Enum MagicLeapAR.ELuminARAvailability
enum class ELuminARAvailability : uint8_t
{
	ELuminARAvailability__UnknownError = 0,
	None                           = 1,
	ELuminARAvailability__SupportedInstalled = 2,
	tyŒMapProperty                = 3,
	ELuminARAvailability__ELuminARAvailability_MAX = 4,
	[Error]                        = 5,
	None01                         = 6,
	None02                         = 7,
	None03                         = 8,
	None04                         = 9,
	None05                         = 10,
	None06                         = 11,
	None07                         = 12,
	None08                         = 13,
	None09                         = 14,
	None10                         = 15,
	None11                         = 16,
	None12                         = 17,
	None13                         = 18,
	None14                         = 19
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapAR.LuminARLightEstimate
// 0x0014
struct FLuminARLightEstimate
{
	bool                                               bIsValid;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              PixelIntensity;                                           // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RGBScaleFactor;                                           // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus
enum class EMagicLeapEyeTrackingCalibrationStatus : uint8_t
{
	EMagicLeapEyeTrackingCalibrationStatus__None = 0,
	None                           = 1,
	EMagicLeapEyeTrackingCalibrationStatus__Bad = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapEyeTrackingCalibrationStatus__Good = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapEyeTrackingCalibrationStatus__EMagicLeapEyeTrackingCalibrationStatus_MAX = 6,
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


// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus
enum class EMagicLeapEyeTrackingStatus : uint8_t
{
	EMagicLeapEyeTrackingStatus__NotConnected = 0,
	None                           = 1,
	EMagicLeapEyeTrackingStatus__Disabled = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapEyeTrackingStatus__UserNotPresent = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapEyeTrackingStatus__UserPresent = 6,
	ByteProperty                   = 7,
	EMagicLeapEyeTrackingStatus__UserPresentAndWatchingWindow = 8,
	teProperty‘IntProperty        = 9,
	EMagicLeapEyeTrackingStatus__EMagicLeapEyeTrackingStatus_MAX = 10,
	Property‘IntProperty          = 11,
	None01                         = 12,
	None02                         = 13,
	None03                         = 14,
	None04                         = 15,
	None05                         = 16,
	None06                         = 17,
	None07                         = 18,
	None08                         = 19,
	None09                         = 20,
	None10                         = 21,
	None11                         = 22,
	None12                         = 23
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapEyeTracker.MagicLeapFixationComfort
// 0x0008
struct FMagicLeapFixationComfort
{
	bool                                               FixationDepthIsUncomfortable;                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FixationDepthViolationHasOccurred;                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              RemainingTimeAtUncomfortableDepth;                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MagicLeapEyeTracker.MagicLeapEyeBlinkState
// 0x0002
struct FMagicLeapEyeBlinkState
{
	bool                                               LeftEyeBlinked;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RightEyeBlinked;                                          // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Enum HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint8_t
{
	EXRTrackedDeviceType__HeadMountedDisplay = 0,
	None                           = 1,
	EXRTrackedDeviceType__Controller = 2,
	neByteProperty‘IntProperty  = 3,
	EXRTrackedDeviceType__TrackingReference = 4,
	ByteProperty‘IntProperty    = 5,
	EXRTrackedDeviceType__Other    = 6,
	ByteProperty                   = 7,
	EXRTrackedDeviceType__Invalid  = 8,
	[Error]                        = 9,
	EXRTrackedDeviceType__Any      = 10,
	Sphere                         = 11,
	EXRTrackedDeviceType__EXRTrackedDeviceType_MAX = 12,
	hereÊ                          = 13,
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


// Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled = 0,
	None                           = 1,
	ESpectatorScreenMode__SingleEyeLetterboxed = 2,
	neByteProperty‘IntProperty  = 3,
	ESpectatorScreenMode__Undistorted = 4,
	ByteProperty‘IntProperty    = 5,
	ESpectatorScreenMode__Distorted = 6,
	ByteProperty                   = 7,
	ESpectatorScreenMode__SingleEye = 8,
	teProperty‘IntProperty        = 9,
	ESpectatorScreenMode__SingleEyeCroppedToFill = 10,
	Property‘IntProperty          = 11,
	ESpectatorScreenMode__Texture  = 12,
	operty‘IntProperty            = 13,
	ESpectatorScreenMode__TexturePlusEye = 14,
	erty‘IntProperty              = 15,
	ESpectatorScreenMode__ESpectatorScreenMode_MAX = 16,
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


// Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8_t
{
	EHMDWornState__Unknown         = 0,
	None                           = 1,
	EHMDWornState__Worn            = 2,
	neByteProperty‘IntProperty  = 3,
	EHMDWornState__NotWorn         = 4,
	ByteProperty‘IntProperty    = 5,
	EHMDWornState__EHMDWornState_MAX = 6,
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


// Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor      = 0,
	None                           = 1,
	EHMDTrackingOrigin__Eye        = 2,
	neByteProperty‘IntProperty  = 3,
	EHMDTrackingOrigin__Stage      = 4,
	ByteProperty‘IntProperty    = 5,
	EHMDTrackingOrigin__EHMDTrackingOrigin_MAX = 6,
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


// Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation = 0,
	None                           = 1,
	EOrientPositionSelector__Position = 2,
	neByteProperty‘IntProperty  = 3,
	EOrientPositionSelector__OrientationAndPosition = 4,
	ByteProperty‘IntProperty    = 5,
	EOrientPositionSelector__EOrientPositionSelector_MAX = 6,
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


// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked    = 0,
	None                           = 1,
	ETrackingStatus__InertialOnly  = 2,
	neByteProperty‘IntProperty  = 3,
	ETrackingStatus__Tracked       = 4,
	ByteProperty‘IntProperty    = 5,
	ETrackingStatus__ETrackingStatus_MAX = 6,
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



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HeadMountedDisplay.XRDeviceId
// 0x000C
struct FXRDeviceId
{
	struct FName                                       SystemName;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DeviceID;                                                 // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

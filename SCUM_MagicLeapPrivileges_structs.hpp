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

// Enum MagicLeapPrivileges.EMagicLeapPrivilege
enum class EMagicLeapPrivilege : uint8_t
{
	EMagicLeapPrivilege__Invalid   = 0,
	None                           = 1,
	EMagicLeapPrivilege__BatteryInfo = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapPrivilege__CameraCapture = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapPrivilege__WorldReconstruction = 6,
	ByteProperty                   = 7,
	EMagicLeapPrivilege__InAppPurchase = 8,
	teProperty‘IntProperty        = 9,
	EMagicLeapPrivilege__AudioCaptureMic = 10,
	Property‘IntProperty          = 11,
	EMagicLeapPrivilege__DrmCertificates = 12,
	operty‘IntProperty            = 13,
	EMagicLeapPrivilege__Occlusion = 14,
	erty‘IntProperty              = 15,
	EMagicLeapPrivilege__LowLatencyLightwear = 16,
	ty‘IntProperty                = 17,
	EMagicLeapPrivilege__Internet  = 18,
	[Error]                        = 19,
	EMagicLeapPrivilege__IdentityRead = 20,
	IntProperty                    = 21,
	EMagicLeapPrivilege__BackgroundDownload = 22,
	tProperty                      = 23,
	EMagicLeapPrivilege__BackgroundUpload = 24,
	roperty                        = 25,
	EMagicLeapPrivilege__MediaDrm  = 26,
	perty                          = 27,
	EMagicLeapPrivilege__Media     = 28,
	rty                            = 29,
	EMagicLeapPrivilege__MediaMetadata = 30,
	y                              = 31,
	EMagicLeapPrivilege__PowerInfo = 32,
	
                              = 33,
	EMagicLeapPrivilege__LocalAreaNetwork = 34,
	BoolProperty                   = 35
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Enum LuminRuntimeSettings.ELuminPrivilege
enum class ELuminPrivilege : uint8_t
{
	ELuminPrivilege__Invalid       = 0,
	None                           = 1,
	ELuminPrivilege__BatteryInfo   = 2,
	neByteProperty‘IntProperty  = 3,
	ELuminPrivilege__CameraCapture = 4,
	ByteProperty‘IntProperty    = 5,
	ELuminPrivilege__WorldReconstruction = 6,
	ByteProperty                   = 7,
	ELuminPrivilege__InAppPurchase = 8,
	teProperty‘IntProperty        = 9,
	ELuminPrivilege__AudioCaptureMic = 10,
	Property‘IntProperty          = 11,
	ELuminPrivilege__DrmCertificates = 12,
	operty‘IntProperty            = 13,
	ELuminPrivilege__Occlusion     = 14,
	erty‘IntProperty              = 15,
	ELuminPrivilege__LowLatencyLightwear = 16,
	ty‘IntProperty                = 17,
	ELuminPrivilege__Internet      = 18,
	[Error]                        = 19,
	ELuminPrivilege__IdentityRead  = 20,
	IntProperty                    = 21,
	ELuminPrivilege__BackgroundDownload = 22,
	tProperty                      = 23,
	ELuminPrivilege__BackgroundUpload = 24,
	roperty                        = 25,
	ELuminPrivilege__MediaDrm      = 26,
	perty                          = 27,
	ELuminPrivilege__Media         = 28,
	rty                            = 29,
	ELuminPrivilege__MediaMetadata = 30,
	y                              = 31,
	ELuminPrivilege__PowerInfo     = 32,
	
                              = 33,
	ELuminPrivilege__LocalAreaNetwork = 34,
	BoolProperty                   = 35
};


// Enum LuminRuntimeSettings.ELuminFrameTimingHint
enum class ELuminFrameTimingHint : uint8_t
{
	ELuminFrameTimingHint__Unspecified = 0,
	None                           = 1,
	ELuminFrameTimingHint__Maximum = 2,
	neByteProperty‘IntProperty  = 3,
	ELuminFrameTimingHint__FPS     = 4,
	ByteProperty‘IntProperty    = 5,
	ELuminFrameTimingHint__FPS01   = 6,
	ByteProperty                   = 7,
	ELuminFrameTimingHint__ELuminFrameTimingHint_MAX = 8,
	teProperty‘IntProperty        = 9,
	None01                         = 10,
	None02                         = 11,
	None03                         = 12,
	None04                         = 13,
	None05                         = 14,
	None06                         = 15,
	None07                         = 16,
	None08                         = 17,
	None09                         = 18,
	None10                         = 19,
	None11                         = 20,
	None12                         = 21,
	None13                         = 22,
	None14                         = 23
};


// Enum LuminRuntimeSettings.ELuminComponentType
enum class ELuminComponentType : uint8_t
{
	ELuminComponentType__Universe  = 0,
	None                           = 1,
	ELuminComponentType__Fullscreen = 2,
	neByteProperty‘IntProperty  = 3,
	ELuminComponentType__SearchProvider = 4,
	ByteProperty‘IntProperty    = 5,
	ELuminComponentType__MusicService = 6,
	ByteProperty                   = 7,
	ELuminComponentType__Screens   = 8,
	teProperty‘IntProperty        = 9,
	ELuminComponentType__ScreensImmersive = 10,
	Property‘IntProperty          = 11,
	ELuminComponentType__Console   = 12,
	operty‘IntProperty            = 13,
	ELuminComponentType__SystemUI  = 14,
	erty‘IntProperty              = 15,
	ELuminComponentType__ELuminComponentType_MAX = 16,
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


// Enum LuminRuntimeSettings.ELuminComponentSubElementType
enum class ELuminComponentSubElementType : uint8_t
{
	ELuminComponentSubElementType__FileExtension = 0,
	None                           = 1,
	ELuminComponentSubElementType__MimeType = 2,
	neByteProperty‘IntProperty  = 3,
	ELuminComponentSubElementType__Mode = 4,
	ByteProperty‘IntProperty    = 5,
	ELuminComponentSubElementType__MusicAttribute = 6,
	ByteProperty                   = 7,
	ELuminComponentSubElementType__Schema = 8,
	teProperty‘IntProperty        = 9,
	ELuminComponentSubElementType__ELuminComponentSubElementType_MAX = 10,
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

// ScriptStruct LuminRuntimeSettings.LuminComponentSubElement
// 0x0018
struct FLuminComponentSubElement
{
	ELuminComponentSubElementType                      ElementType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Value;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
};

// ScriptStruct LuminRuntimeSettings.LuminComponentElement
// 0x0048
struct FLuminComponentElement
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     VisibleName;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     ExecutableName;                                           // 0x0020(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	ELuminComponentType                                ComponentType;                                            // 0x0030(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TArray<struct FLuminComponentSubElement>           ExtraComponentSubElements;                                // 0x0038(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

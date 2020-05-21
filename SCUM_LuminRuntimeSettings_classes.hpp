#pragma once

// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LuminRuntimeSettings.LuminRuntimeSettings
// 0x0100 (0x0128 - 0x0028)
class ULuminRuntimeSettings : public UObject
{
public:
	struct FString                                     PackageName;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     ApplicationDisplayName;                                   // 0x0038(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	bool                                               bIsScreensApp;                                            // 0x0048(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	ELuminFrameTimingHint                              FrameTimingHint;                                          // 0x0049(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bProtectedContent;                                        // 0x004A(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUseMobileRendering;                                      // 0x004B(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUseVulkan;                                               // 0x004C(0x0001) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FFilePath                                   Certificate;                                              // 0x0050(0x0010) (Edit, Config, GlobalConfig)
	struct FDirectoryPath                              IconModelPath;                                            // 0x0060(0x0010) (Edit, Config, GlobalConfig)
	struct FDirectoryPath                              IconPortalPath;                                           // 0x0070(0x0010) (Edit, Config, GlobalConfig)
	int                                                VersionCode;                                              // 0x0080(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                MinimumAPILevel;                                          // 0x0084(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TArray<ELuminPrivilege>                            AppPrivileges;                                            // 0x0088(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	TArray<struct FLuminComponentSubElement>           ExtraComponentSubElements;                                // 0x0098(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	TArray<struct FLuminComponentElement>              ExtraComponentElements;                                   // 0x00A8(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FString                                     SpatializationPlugin;                                     // 0x00B8(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     ReverbPlugin;                                             // 0x00C8(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     OcclusionPlugin;                                          // 0x00D8(0x0010) (Edit, ZeroConstructor, Config)
	int                                                SoundCueCookQualityIndex;                                 // 0x00E8(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bRemoveDebugInfo;                                         // 0x00EC(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	struct FDirectoryPath                              VulkanValidationLayerLibs;                                // 0x00F0(0x0010) (Edit, Config, GlobalConfig)
	bool                                               bFrameVignette;                                           // 0x0100(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData02[0x27];                                      // 0x0101(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LuminRuntimeSettings.LuminRuntimeSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

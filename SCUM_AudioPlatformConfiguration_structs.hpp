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

// Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
enum class ESoundwaveSampleRateSettings : uint8_t
{
	ESoundwaveSampleRateSettings__Max = 0,
	None                           = 1,
	ESoundwaveSampleRateSettings__High = 2,
	neByteProperty‘IntProperty  = 3,
	ESoundwaveSampleRateSettings__Medium = 4,
	ByteProperty‘IntProperty    = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
// 0x0010
struct FPlatformRuntimeAudioCompressionOverrides
{
	bool                                               bOverrideCompressionTimes;                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DurationThreshold;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumRandomBranches;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SoundCueQualityIndex;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

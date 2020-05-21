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

// Enum OceanPlugin.EFollowMethod
enum class EFollowMethod : uint8_t
{
	LookAtLocation                 = 0,
	None                           = 1,
	FollowCamera                   = 2,
	neByteProperty‘IntProperty  = 3,
	FollowPawn                     = 4,
	ByteProperty‘IntProperty    = 5,
	Stationary                     = 6,
	ByteProperty                   = 7,
	EFollowMethod_MAX              = 8,
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



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OceanPlugin.ForceTriangle
// 0x006C
struct FForceTriangle
{
	unsigned char                                      UnknownData00[0x6C];                                      // 0x0000(0x006C) MISSED OFFSET
};

// ScriptStruct OceanPlugin.BuoyancyVertex
// 0x0010
struct FBuoyancyVertex
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct OceanPlugin.StructBoneOverride
// 0x0010
struct FStructBoneOverride
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TestRadius;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OceanPlugin.WaveParameter
// 0x0014
struct FWaveParameter
{
	float                                              Rotation;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Amplitude;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Steepness;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OceanPlugin.WaveSetParameters
// 0x00A0
struct FWaveSetParameters
{
	struct FWaveParameter                              Wave01;                                                   // 0x0000(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave02;                                                   // 0x0014(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave03;                                                   // 0x0028(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave04;                                                   // 0x003C(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave05;                                                   // 0x0050(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave06;                                                   // 0x0064(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave07;                                                   // 0x0078(0x0014) (Edit, BlueprintVisible)
	struct FWaveParameter                              Wave08;                                                   // 0x008C(0x0014) (Edit, BlueprintVisible)
};

// ScriptStruct OceanPlugin.TimeDate
// 0x001C
struct FTimeDate
{
	int                                                Millisecond;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Second;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Minute;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Hour;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Day;                                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Month;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Year;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

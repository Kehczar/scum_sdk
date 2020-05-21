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

// Enum VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8_t
{
	EPropertyValueCategory__Undefined = 0,
	None                           = 1,
	EPropertyValueCategory__Generic = 2,
	neByteProperty‘IntProperty  = 3,
	EPropertyValueCategory__RelativeLocation = 4,
	ByteProperty‘IntProperty    = 5,
	EPropertyValueCategory__RelativeRotation = 6,
	teProperty‘IntProperty        = 7,
	EPropertyValueCategory__RelativeScale3D = 8,
	ty‘IntProperty                = 9
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VariantManagerContent.CapturedPropSegment
// 0x0028
struct FCapturedPropSegment
{
	struct FString                                     PropertyName;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                PropertyIndex;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     ComponentName;                                            // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct VariantManagerContent.FunctionCaller
// 0x0008
struct FFunctionCaller
{
	struct FName                                       FunctionName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

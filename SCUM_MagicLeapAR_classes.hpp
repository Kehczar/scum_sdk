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

// Class MagicLeapAR.LuminARUObjectManager
// 0x0100 (0x0128 - 0x0028)
class ULuminARUObjectManager : public UObject
{
public:
	TArray<class UARPin*>                              AllAnchors;                                               // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0038(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapAR.LuminARUObjectManager");
		return ptr;
	}

};


// Class MagicLeapAR.LuminARSessionFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapAR.LuminARSessionFunctionLibrary");
		return ptr;
	}

};


// Class MagicLeapAR.LuminARFrameFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapAR.LuminARFrameFunctionLibrary");
		return ptr;
	}

};


// Class MagicLeapAR.LuminARSessionConfig
// 0x0030 (0x00D8 - 0x00A8)
class ULuminARSessionConfig : public UARSessionConfig
{
public:
	int                                                MaxPlaneQueryResults;                                     // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinPlaneArea;                                             // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bArbitraryOrientationPlaneDetection;                      // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	struct FVector                                     PlaneSearchExtents;                                       // 0x00B4(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<EMagicLeapPlaneQueryFlags>                  PlaneQueryFlags;                                          // 0x00C0(0x0010) (Edit, ZeroConstructor)
	bool                                               bDiscardZeroExtentPlanes;                                 // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapAR.LuminARSessionConfig");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

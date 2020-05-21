#pragma once

// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SkyLight_Blueprint.SkyLight_Blueprint_C.ReceiveBeginPlay
struct ASkyLight_Blueprint_C_ReceiveBeginPlay_Params
{
};

// Function SkyLight_Blueprint.SkyLight_Blueprint_C.ReceiveTick
struct ASkyLight_Blueprint_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkyLight_Blueprint.SkyLight_Blueprint_C.ExecuteUbergraph_SkyLight_Blueprint
struct ASkyLight_Blueprint_C_ExecuteUbergraph_SkyLight_Blueprint_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

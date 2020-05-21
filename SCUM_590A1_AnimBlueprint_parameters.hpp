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

// Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.AnimGraph
struct U590A1_AnimBlueprint_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.BlueprintUpdateAnimation
struct U590A1_AnimBlueprint_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.ExecuteUbergraph_590A1_AnimBlueprint
struct U590A1_AnimBlueprint_C_ExecuteUbergraph_590A1_AnimBlueprint_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

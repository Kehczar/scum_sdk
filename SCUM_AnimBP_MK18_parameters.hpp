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

// Function AnimBP_MK18.AnimBP_MK18_C.AnimGraph
struct UAnimBP_MK18_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function AnimBP_MK18.AnimBP_MK18_C.BlueprintUpdateAnimation
struct UAnimBP_MK18_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimBP_MK18.AnimBP_MK18_C.ExecuteUbergraph_AnimBP_MK18
struct UAnimBP_MK18_C_ExecuteUbergraph_AnimBP_MK18_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

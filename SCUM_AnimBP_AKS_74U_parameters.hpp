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

// Function AnimBP_AKS_74U.AnimBP_AKS_74U_C.AnimGraph
struct UAnimBP_AKS_74U_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function AnimBP_AKS_74U.AnimBP_AKS_74U_C.BlueprintUpdateAnimation
struct UAnimBP_AKS_74U_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimBP_AKS_74U.AnimBP_AKS_74U_C.ExecuteUbergraph_AnimBP_AKS_74U
struct UAnimBP_AKS_74U_C_ExecuteUbergraph_AnimBP_AKS_74U_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

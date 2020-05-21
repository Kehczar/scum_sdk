// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimBP_ImprovisedRifle9mm.AnimBP_ImprovisedRifle9mm_C.AnimGraph
// (Net, NetReliable, Exec, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UAnimBP_ImprovisedRifle9mm_C::STATIC_AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_ImprovisedRifle9mm.AnimBP_ImprovisedRifle9mm_C.AnimGraph");

	UAnimBP_ImprovisedRifle9mm_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnimBP_ImprovisedRifle9mm.AnimBP_ImprovisedRifle9mm_C.ExecuteUbergraph_AnimBP_ImprovisedRifle9mm
// (Static, NetMulticast, NetServer, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_ImprovisedRifle9mm_C::STATIC_ExecuteUbergraph_AnimBP_ImprovisedRifle9mm(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_ImprovisedRifle9mm.AnimBP_ImprovisedRifle9mm_C.ExecuteUbergraph_AnimBP_ImprovisedRifle9mm");

	UAnimBP_ImprovisedRifle9mm_C_ExecuteUbergraph_AnimBP_ImprovisedRifle9mm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

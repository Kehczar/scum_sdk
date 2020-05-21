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

// Function AnimBP_ImprovisedPistol50cal.AnimBP_ImprovisedPistol50cal_C.AnimGraph
// (NetRequest, Exec, Event, NetMulticast, NetServer, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UAnimBP_ImprovisedPistol50cal_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_ImprovisedPistol50cal.AnimBP_ImprovisedPistol50cal_C.AnimGraph");

	UAnimBP_ImprovisedPistol50cal_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnimBP_ImprovisedPistol50cal.AnimBP_ImprovisedPistol50cal_C.ExecuteUbergraph_AnimBP_ImprovisedPistol50cal
// (Net, NetReliable, Exec, Native, NetMulticast, NetServer, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_ImprovisedPistol50cal_C::ExecuteUbergraph_AnimBP_ImprovisedPistol50cal(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_ImprovisedPistol50cal.AnimBP_ImprovisedPistol50cal_C.ExecuteUbergraph_AnimBP_ImprovisedPistol50cal");

	UAnimBP_ImprovisedPistol50cal_C_ExecuteUbergraph_AnimBP_ImprovisedPistol50cal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

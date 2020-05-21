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

// Function ABP_WireCutters.ABP_WireCutters_C.AnimGraph
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UABP_WireCutters_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_WireCutters.ABP_WireCutters_C.AnimGraph");

	UABP_WireCutters_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_WireCutters.ABP_WireCutters_C.ExecuteUbergraph_ABP_WireCutters
// (Net, Exec, Native, Event, MulticastDelegate, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_WireCutters_C::ExecuteUbergraph_ABP_WireCutters(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_WireCutters.ABP_WireCutters_C.ExecuteUbergraph_ABP_WireCutters");

	UABP_WireCutters_C_ExecuteUbergraph_ABP_WireCutters_Params params;
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

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

// Function ABP_ImpBow.ABP_ImpBow_C.AnimGraph
// (NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UABP_ImpBow_C::STATIC_AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_ImpBow.ABP_ImpBow_C.AnimGraph");

	UABP_ImpBow_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_ImpBow.ABP_ImpBow_C.ExecuteUbergraph_ABP_ImpBow
// (NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_ImpBow_C::STATIC_ExecuteUbergraph_ABP_ImpBow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_ImpBow.ABP_ImpBow_C.ExecuteUbergraph_ABP_ImpBow");

	UABP_ImpBow_C_ExecuteUbergraph_ABP_ImpBow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

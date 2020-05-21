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

// Function ABP_FlareGun.ABP_FlareGun_C.AnimGraph
// (NetRequest, Exec, NetResponse, Static, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UABP_FlareGun_C::STATIC_AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FlareGun.ABP_FlareGun_C.AnimGraph");

	UABP_FlareGun_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_FlareGun.ABP_FlareGun_C.ExecuteUbergraph_ABP_FlareGun
// (Net, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_FlareGun_C::STATIC_ExecuteUbergraph_ABP_FlareGun(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FlareGun.ABP_FlareGun_C.ExecuteUbergraph_ABP_FlareGun");

	UABP_FlareGun_C_ExecuteUbergraph_ABP_FlareGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

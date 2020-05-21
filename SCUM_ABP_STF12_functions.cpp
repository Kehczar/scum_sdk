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

// Function ABP_STF12.ABP_STF12_C.AnimGraph
// (NetReliable, NetRequest, Exec, Event, MulticastDelegate, Public, Protected, NetServer)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UABP_STF12_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_STF12.ABP_STF12_C.AnimGraph");

	UABP_STF12_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_STF12.ABP_STF12_C.BlueprintUpdateAnimation
// (Exec, Event, MulticastDelegate, Public, Protected, NetServer)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_STF12_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_STF12.ABP_STF12_C.BlueprintUpdateAnimation");

	UABP_STF12_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_STF12.ABP_STF12_C.ExecuteUbergraph_ABP_STF12
// (Net, NetRequest, Native, NetResponse, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_STF12_C::ExecuteUbergraph_ABP_STF12(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_STF12.ABP_STF12_C.ExecuteUbergraph_ABP_STF12");

	UABP_STF12_C_ExecuteUbergraph_ABP_STF12_Params params;
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

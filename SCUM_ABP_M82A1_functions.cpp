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

// Function ABP_M82A1.ABP_M82A1_C.AnimGraph
// (Net, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UABP_M82A1_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_M82A1.ABP_M82A1_C.AnimGraph");

	UABP_M82A1_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_M82A1.ABP_M82A1_C.BlueprintUpdateAnimation
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_M82A1_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_M82A1.ABP_M82A1_C.BlueprintUpdateAnimation");

	UABP_M82A1_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_M82A1.ABP_M82A1_C.ExecuteUbergraph_ABP_M82A1
// (Net, NetReliable, NetResponse, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_M82A1_C::STATIC_ExecuteUbergraph_ABP_M82A1(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_M82A1.ABP_M82A1_C.ExecuteUbergraph_ABP_M82A1");

	UABP_M82A1_C_ExecuteUbergraph_ABP_M82A1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

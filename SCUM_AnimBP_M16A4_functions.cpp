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

// Function AnimBP_M16A4.AnimBP_M16A4_C.AnimGraph
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UAnimBP_M16A4_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_M16A4.AnimBP_M16A4_C.AnimGraph");

	UAnimBP_M16A4_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnimBP_M16A4.AnimBP_M16A4_C.BlueprintUpdateAnimation
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_M16A4_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_M16A4.AnimBP_M16A4_C.BlueprintUpdateAnimation");

	UAnimBP_M16A4_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_M16A4.AnimBP_M16A4_C.ExecuteUbergraph_AnimBP_M16A4
// (Net, Exec, Event, NetResponse, Static, Private, Delegate, HasOutParms, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_M16A4_C::STATIC_ExecuteUbergraph_AnimBP_M16A4(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_M16A4.AnimBP_M16A4_C.ExecuteUbergraph_AnimBP_M16A4");

	UAnimBP_M16A4_C_ExecuteUbergraph_AnimBP_M16A4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function AnimBP_MosinNagant.AnimBP_MosinNagant_C.AnimGraph
// (Net, NetMulticast, Public, Protected, Delegate, HasDefaults, NetClient)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UAnimBP_MosinNagant_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_MosinNagant.AnimBP_MosinNagant_C.AnimGraph");

	UAnimBP_MosinNagant_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnimBP_MosinNagant.AnimBP_MosinNagant_C.ExecuteUbergraph_AnimBP_MosinNagant
// (NetReliable, Exec, Native, Event, NetResponse, Static, Public, Protected, Delegate, HasDefaults, NetClient)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_MosinNagant_C::STATIC_ExecuteUbergraph_AnimBP_MosinNagant(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_MosinNagant.AnimBP_MosinNagant_C.ExecuteUbergraph_AnimBP_MosinNagant");

	UAnimBP_MosinNagant_C_ExecuteUbergraph_AnimBP_MosinNagant_Params params;
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

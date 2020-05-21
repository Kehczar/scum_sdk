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

// Function AnimBP_AK47.AnimBP_AK47_C.AnimGraph
// (Net, NetRequest, Event, NetResponse, Static, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UAnimBP_AK47_C::STATIC_AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_AK47.AnimBP_AK47_C.AnimGraph");

	UAnimBP_AK47_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnimBP_AK47.AnimBP_AK47_C.ExecuteUbergraph_AnimBP_AK47
// (Net, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_AK47_C::STATIC_ExecuteUbergraph_AnimBP_AK47(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_AK47.AnimBP_AK47_C.ExecuteUbergraph_AnimBP_AK47");

	UAnimBP_AK47_C_ExecuteUbergraph_AnimBP_AK47_Params params;
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

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

// Function AnimBP_MK18.AnimBP_MK18_C.AnimGraph
// (Net, NetReliable, NetRequest, Exec, Native, Static, Public, Protected, Delegate, HasDefaults, NetClient)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UAnimBP_MK18_C::STATIC_AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_MK18.AnimBP_MK18_C.AnimGraph");

	UAnimBP_MK18_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnimBP_MK18.AnimBP_MK18_C.BlueprintUpdateAnimation
// (Net, NetRequest, Exec, Static, Public, Protected, Delegate, HasDefaults, NetClient)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_MK18_C::STATIC_BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_MK18.AnimBP_MK18_C.BlueprintUpdateAnimation");

	UAnimBP_MK18_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_MK18.AnimBP_MK18_C.ExecuteUbergraph_AnimBP_MK18
// (Net, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_MK18_C::STATIC_ExecuteUbergraph_AnimBP_MK18(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_MK18.AnimBP_MK18_C.ExecuteUbergraph_AnimBP_MK18");

	UAnimBP_MK18_C_ExecuteUbergraph_AnimBP_MK18_Params params;
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

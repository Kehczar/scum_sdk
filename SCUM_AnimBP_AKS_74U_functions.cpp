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

// Function AnimBP_AKS_74U.AnimBP_AKS_74U_C.AnimGraph
// (Net, NetReliable, NetRequest, Exec, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UAnimBP_AKS_74U_C::STATIC_AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_AKS_74U.AnimBP_AKS_74U_C.AnimGraph");

	UAnimBP_AKS_74U_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnimBP_AKS_74U.AnimBP_AKS_74U_C.BlueprintUpdateAnimation
// (NetRequest, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_AKS_74U_C::STATIC_BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_AKS_74U.AnimBP_AKS_74U_C.BlueprintUpdateAnimation");

	UAnimBP_AKS_74U_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_AKS_74U.AnimBP_AKS_74U_C.ExecuteUbergraph_AnimBP_AKS_74U
// (Net, NetReliable, Exec, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_AKS_74U_C::STATIC_ExecuteUbergraph_AnimBP_AKS_74U(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_AKS_74U.AnimBP_AKS_74U_C.ExecuteUbergraph_AnimBP_AKS_74U");

	UAnimBP_AKS_74U_C_ExecuteUbergraph_AnimBP_AKS_74U_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

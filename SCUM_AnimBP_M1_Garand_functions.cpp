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

// Function AnimBP_M1_Garand.AnimBP_M1_Garand_C.AnimGraph
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UAnimBP_M1_Garand_C::STATIC_AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_M1_Garand.AnimBP_M1_Garand_C.AnimGraph");

	UAnimBP_M1_Garand_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnimBP_M1_Garand.AnimBP_M1_Garand_C.BlueprintUpdateAnimation
// (Net, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_M1_Garand_C::STATIC_BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_M1_Garand.AnimBP_M1_Garand_C.BlueprintUpdateAnimation");

	UAnimBP_M1_Garand_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimBP_M1_Garand.AnimBP_M1_Garand_C.ExecuteUbergraph_AnimBP_M1_Garand
// (NetRequest, Exec, Event, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_M1_Garand_C::ExecuteUbergraph_AnimBP_M1_Garand(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_M1_Garand.AnimBP_M1_Garand_C.ExecuteUbergraph_AnimBP_M1_Garand");

	UAnimBP_M1_Garand_C_ExecuteUbergraph_AnimBP_M1_Garand_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

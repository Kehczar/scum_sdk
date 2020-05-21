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

// Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.AnimGraph
// (NetRequest, Exec, Event, NetResponse, NetServer, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void U590A1_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.AnimGraph");

	U590A1_AnimBlueprint_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.BlueprintUpdateAnimation
// (Exec, Event, NetResponse, NetServer, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U590A1_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.BlueprintUpdateAnimation");

	U590A1_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.ExecuteUbergraph_590A1_AnimBlueprint
// (Event, NetResponse, NetMulticast, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U590A1_AnimBlueprint_C::ExecuteUbergraph_590A1_AnimBlueprint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_AnimBlueprint.590A1_AnimBlueprint_C.ExecuteUbergraph_590A1_AnimBlueprint");

	U590A1_AnimBlueprint_C_ExecuteUbergraph_590A1_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

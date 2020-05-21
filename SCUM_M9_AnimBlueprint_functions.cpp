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

// Function M9_AnimBlueprint.M9_AnimBlueprint_C.AnimGraph
// (NetReliable, Event, NetResponse, NetMulticast, DLLImport, BlueprintCallable)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UM9_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function M9_AnimBlueprint.M9_AnimBlueprint_C.AnimGraph");

	UM9_AnimBlueprint_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function M9_AnimBlueprint.M9_AnimBlueprint_C.ExecuteUbergraph_M9_AnimBlueprint
// (Exec, Native, NetResponse, NetMulticast, DLLImport, BlueprintCallable)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UM9_AnimBlueprint_C::ExecuteUbergraph_M9_AnimBlueprint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function M9_AnimBlueprint.M9_AnimBlueprint_C.ExecuteUbergraph_M9_AnimBlueprint");

	UM9_AnimBlueprint_C_ExecuteUbergraph_M9_AnimBlueprint_Params params;
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

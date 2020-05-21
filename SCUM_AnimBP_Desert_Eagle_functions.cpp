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

// Function AnimBP_Desert_Eagle.AnimBP_Desert_Eagle_C.AnimGraph
// (NetRequest, Native, Static, NetMulticast, DLLImport, BlueprintCallable)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UAnimBP_Desert_Eagle_C::STATIC_AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Desert_Eagle.AnimBP_Desert_Eagle_C.AnimGraph");

	UAnimBP_Desert_Eagle_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnimBP_Desert_Eagle.AnimBP_Desert_Eagle_C.ExecuteUbergraph_AnimBP_Desert_Eagle
// (Exec, Static, NetMulticast, DLLImport, BlueprintCallable)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_Desert_Eagle_C::STATIC_ExecuteUbergraph_AnimBP_Desert_Eagle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Desert_Eagle.AnimBP_Desert_Eagle_C.ExecuteUbergraph_AnimBP_Desert_Eagle");

	UAnimBP_Desert_Eagle_C_ExecuteUbergraph_AnimBP_Desert_Eagle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function AnimBP_Eder22.AnimBP_Eder22_C.AnimGraph
// (NetReliable, NetRequest, NetResponse, Static, DLLImport, BlueprintCallable)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UAnimBP_Eder22_C::STATIC_AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Eder22.AnimBP_Eder22_C.AnimGraph");

	UAnimBP_Eder22_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnimBP_Eder22.AnimBP_Eder22_C.ExecuteUbergraph_AnimBP_Eder22
// (NetReliable, Native, Event, Static, DLLImport, BlueprintCallable)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_Eder22_C::STATIC_ExecuteUbergraph_AnimBP_Eder22(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_Eder22.AnimBP_Eder22_C.ExecuteUbergraph_AnimBP_Eder22");

	UAnimBP_Eder22_C_ExecuteUbergraph_AnimBP_Eder22_Params params;
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

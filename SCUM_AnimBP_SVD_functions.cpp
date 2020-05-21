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

// Function AnimBP_SVD.AnimBP_SVD_C.AnimGraph
// (Net, Exec, Native, NetMulticast, Public, Protected, Delegate, HasDefaults, NetClient)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UAnimBP_SVD_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_SVD.AnimBP_SVD_C.AnimGraph");

	UAnimBP_SVD_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnimBP_SVD.AnimBP_SVD_C.ExecuteUbergraph_AnimBP_SVD
// (Net, Native, NetMulticast, Public, Protected, Delegate, HasDefaults, NetClient)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_SVD_C::ExecuteUbergraph_AnimBP_SVD(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_SVD.AnimBP_SVD_C.ExecuteUbergraph_AnimBP_SVD");

	UAnimBP_SVD_C_ExecuteUbergraph_AnimBP_SVD_Params params;
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

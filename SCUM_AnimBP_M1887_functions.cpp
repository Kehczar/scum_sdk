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

// Function AnimBP_M1887.AnimBP_M1887_C.AnimGraph
// (Exec, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UAnimBP_M1887_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_M1887.AnimBP_M1887_C.AnimGraph");

	UAnimBP_M1887_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function AnimBP_M1887.AnimBP_M1887_C.ExecuteUbergraph_AnimBP_M1887
// (Net, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimBP_M1887_C::STATIC_ExecuteUbergraph_AnimBP_M1887(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimBP_M1887.AnimBP_M1887_C.ExecuteUbergraph_AnimBP_M1887");

	UAnimBP_M1887_C_ExecuteUbergraph_AnimBP_M1887_Params params;
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

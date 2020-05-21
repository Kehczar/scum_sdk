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

// Function ABP_Dick_Placeholder.ABP_Dick_Placeholder_C.AnimGraph
// ()
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UABP_Dick_Placeholder_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Dick_Placeholder.ABP_Dick_Placeholder_C.AnimGraph");

	UABP_Dick_Placeholder_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_Dick_Placeholder.ABP_Dick_Placeholder_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Dick_Placeholder_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Dick_Placeholder.ABP_Dick_Placeholder_C.BlueprintUpdateAnimation");

	UABP_Dick_Placeholder_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Dick_Placeholder.ABP_Dick_Placeholder_C.BlueprintBeginPlay
// ()

void UABP_Dick_Placeholder_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Dick_Placeholder.ABP_Dick_Placeholder_C.BlueprintBeginPlay");

	UABP_Dick_Placeholder_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Dick_Placeholder.ABP_Dick_Placeholder_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dick_Placeholder_AnimGraphNode_Fabrik_97957A264606C62DC406D3975C3CF137
// ()

void UABP_Dick_Placeholder_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dick_Placeholder_AnimGraphNode_Fabrik_97957A264606C62DC406D3975C3CF137()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Dick_Placeholder.ABP_Dick_Placeholder_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dick_Placeholder_AnimGraphNode_Fabrik_97957A264606C62DC406D3975C3CF137");

	UABP_Dick_Placeholder_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dick_Placeholder_AnimGraphNode_Fabrik_97957A264606C62DC406D3975C3CF137_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Dick_Placeholder.ABP_Dick_Placeholder_C.ExecuteUbergraph_ABP_Dick_Placeholder
// ()
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Dick_Placeholder_C::ExecuteUbergraph_ABP_Dick_Placeholder(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Dick_Placeholder.ABP_Dick_Placeholder_C.ExecuteUbergraph_ABP_Dick_Placeholder");

	UABP_Dick_Placeholder_C_ExecuteUbergraph_ABP_Dick_Placeholder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

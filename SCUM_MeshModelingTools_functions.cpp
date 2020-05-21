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

// Function MeshModelingTools.MeshSpaceDeformerTool.SwapSecondaryAxis
// ()

void UMeshSpaceDeformerTool::SwapSecondaryAxis()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSpaceDeformerTool.SwapSecondaryAxis");

	UMeshSpaceDeformerTool_SwapSecondaryAxis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshModelingTools.MeshSpaceDeformerTool.AutoDetectAxes
// ()

void UMeshSpaceDeformerTool::AutoDetectAxes()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshModelingTools.MeshSpaceDeformerTool.AutoDetectAxes");

	UMeshSpaceDeformerTool_AutoDetectAxes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

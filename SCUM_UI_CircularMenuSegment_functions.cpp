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

// Function ConZ.CircularMenuSegmentWidget.UpdateVisualParameters
// ()
// Parameters:
// int*                           numberOfSegments               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         middleCutoffPercentage         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Size                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CircularMenuSegment_C::UpdateVisualParameters(int* numberOfSegments, int* Index, float* Offset, float* middleCutoffPercentage, float* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.CircularMenuSegmentWidget.UpdateVisualParameters");

	UUI_CircularMenuSegment_C_UpdateVisualParameters_Params params;
	params.numberOfSegments = numberOfSegments;
	params.Index = Index;
	params.Offset = Offset;
	params.middleCutoffPercentage = middleCutoffPercentage;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.CircularMenuSegmentWidget.CreateFromInfo
// ()
// Parameters:
// class UCircularMenuSegmentInfo** Info                           (Parm, ZeroConstructor, IsPlainOldData)
// class UCircularMenuSegmentWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCircularMenuSegmentWidget* UUI_CircularMenuSegment_C::CreateFromInfo(class UCircularMenuSegmentInfo** Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.CircularMenuSegmentWidget.CreateFromInfo");

	UUI_CircularMenuSegment_C_CreateFromInfo_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

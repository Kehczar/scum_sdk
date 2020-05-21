#pragma once

// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConZ.CircularMenuSegmentWidget.UpdateVisualParameters
struct UUI_CircularMenuSegment_C_UpdateVisualParameters_Params
{
	int*                                               numberOfSegments;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             middleCutoffPercentage;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.CircularMenuSegmentWidget.CreateFromInfo
struct UUI_CircularMenuSegment_C_CreateFromInfo_Params
{
	class UCircularMenuSegmentInfo**                   Info;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UCircularMenuSegmentWidget*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

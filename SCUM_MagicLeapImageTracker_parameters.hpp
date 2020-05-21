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

// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync
struct UMagicLeapImageTrackerComponent_SetTargetAsync_Params
{
	class UTexture2D**                                 ImageTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync
struct UMagicLeapImageTrackerComponent_RemoveTargetAsync_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
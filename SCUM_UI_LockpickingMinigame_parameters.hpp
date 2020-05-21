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

// Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.Tick
struct UUI_LockpickingMinigame_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.ShowInfo
struct UUI_LockpickingMinigame_C_ShowInfo_Params
{
};

// Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.HideInfo
struct UUI_LockpickingMinigame_C_HideInfo_Params
{
};

// Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.OnSuccess
struct UUI_LockpickingMinigame_C_OnSuccess_Params
{
};

// Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.OnFailure
struct UUI_LockpickingMinigame_C_OnFailure_Params
{
};

// Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.ExecuteUbergraph_UI_LockpickingMinigame
struct UUI_LockpickingMinigame_C_ExecuteUbergraph_UI_LockpickingMinigame_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

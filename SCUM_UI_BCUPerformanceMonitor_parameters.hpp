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

// Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.UpdateValues
struct UUI_BCUPerformanceMonitor_C_UpdateValues_Params
{
};

// Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.SetPrisoner
struct UUI_BCUPerformanceMonitor_C_SetPrisoner_Params
{
	class APrisoner**                                  Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.Tick
struct UUI_BCUPerformanceMonitor_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.Construct
struct UUI_BCUPerformanceMonitor_C_Construct_Params
{
};

// Function UI_BCUPerformanceMonitor.UI_BCUPerformanceMonitor_C.ExecuteUbergraph_UI_BCUPerformanceMonitor
struct UUI_BCUPerformanceMonitor_C_ExecuteUbergraph_UI_BCUPerformanceMonitor_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

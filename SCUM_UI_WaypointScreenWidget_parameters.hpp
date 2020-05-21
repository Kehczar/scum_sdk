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

// Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.AddWaypointWidgetToScreen
struct UUI_WaypointScreenWidget_C_AddWaypointWidgetToScreen_Params
{
	class UWaypointWidget**                            Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.RemoveWaypointWidgetFromScreen
struct UUI_WaypointScreenWidget_C_RemoveWaypointWidgetFromScreen_Params
{
	class UWaypointWidget**                            Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.ExecuteUbergraph_UI_WaypointScreenWidget
struct UUI_WaypointScreenWidget_C_ExecuteUbergraph_UI_WaypointScreenWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

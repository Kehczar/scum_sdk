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

// Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.AddWaypointWidgetToScreen
// (NetRequest, Exec, Native, Event, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWaypointWidget**        Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_WaypointScreenWidget_C::AddWaypointWidgetToScreen(class UWaypointWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.AddWaypointWidgetToScreen");

	UUI_WaypointScreenWidget_C_AddWaypointWidgetToScreen_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.RemoveWaypointWidgetFromScreen
// (NetReliable, Exec, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWaypointWidget**        Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_WaypointScreenWidget_C::STATIC_RemoveWaypointWidgetFromScreen(class UWaypointWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.RemoveWaypointWidgetFromScreen");

	UUI_WaypointScreenWidget_C_RemoveWaypointWidgetFromScreen_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.ExecuteUbergraph_UI_WaypointScreenWidget
// (Net, NetRequest, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WaypointScreenWidget_C::STATIC_ExecuteUbergraph_UI_WaypointScreenWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointScreenWidget.UI_WaypointScreenWidget_C.ExecuteUbergraph_UI_WaypointScreenWidget");

	UUI_WaypointScreenWidget_C_ExecuteUbergraph_UI_WaypointScreenWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

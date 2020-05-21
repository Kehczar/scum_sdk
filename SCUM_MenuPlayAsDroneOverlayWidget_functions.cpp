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

// Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.ToggleVisibility
// (NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UMenuPlayAsDroneOverlayWidget_C::ToggleVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.ToggleVisibility");

	UMenuPlayAsDroneOverlayWidget_C_ToggleVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.Construct
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UMenuPlayAsDroneOverlayWidget_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.Construct");

	UMenuPlayAsDroneOverlayWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.ExecuteUbergraph_MenuPlayAsDroneOverlayWidget
// (NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuPlayAsDroneOverlayWidget_C::ExecuteUbergraph_MenuPlayAsDroneOverlayWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuPlayAsDroneOverlayWidget.MenuPlayAsDroneOverlayWidget_C.ExecuteUbergraph_MenuPlayAsDroneOverlayWidget");

	UMenuPlayAsDroneOverlayWidget_C_ExecuteUbergraph_MenuPlayAsDroneOverlayWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetDropdownVisibility
// (NetReliable, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventPanelWidget_C::GetDropdownVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetDropdownVisibility");

	UUI_GameEventPanelWidget_C_GetDropdownVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.RestoreSelected
// (NetReliable, Exec, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_GameEventPanelWidget_C::RestoreSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.RestoreSelected");

	UUI_GameEventPanelWidget_C_RestoreSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.UpdateSelection
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UComboBoxString**        Dropdown                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class AGameEventBase*>  GameEvents                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString*                Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_GameEventPanelWidget_C::UpdateSelection(class UComboBoxString** Dropdown, struct FString* Selected, TArray<class AGameEventBase*>* GameEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.UpdateSelection");

	UUI_GameEventPanelWidget_C_UpdateSelection_Params params;
	params.Dropdown = Dropdown;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameEvents != nullptr)
		*GameEvents = params.GameEvents;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetSelectedEvent
// (Native, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class AGameEventBase*          gameEvent                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventPanelWidget_C::GetSelectedEvent(class AGameEventBase** gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetSelectedEvent");

	UUI_GameEventPanelWidget_C_GetSelectedEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (gameEvent != nullptr)
		*gameEvent = params.gameEvent;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetGameEventOptionString
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// class AGameEventBase**         gameEvent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OptionString                   (Parm, OutParm, ZeroConstructor)

void UUI_GameEventPanelWidget_C::STATIC_GetGameEventOptionString(class AGameEventBase** gameEvent, struct FString* OptionString)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetGameEventOptionString");

	UUI_GameEventPanelWidget_C_GetGameEventOptionString_Params params;
	params.gameEvent = gameEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionString != nullptr)
		*OptionString = params.OptionString;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.SelectEvent
// (Net, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventPanelWidget_C::STATIC_SelectEvent(int* Index, bool* Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.SelectEvent");

	UUI_GameEventPanelWidget_C_SelectEvent_Params params;
	params.Index = Index;
	params.Current = Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddCurrentEvent
// (NetReliable, NetResponse, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class AGameEventBase**         gameEvent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventPanelWidget_C::AddCurrentEvent(class AGameEventBase** gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddCurrentEvent");

	UUI_GameEventPanelWidget_C_AddCurrentEvent_Params params;
	params.gameEvent = gameEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.EmptyLists
// (NetRequest, Native, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void UUI_GameEventPanelWidget_C::EmptyLists()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.EmptyLists");

	UUI_GameEventPanelWidget_C_EmptyLists_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddAnnouncedEvent
// (Net, NetReliable, Native, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class AGameEventBase**         gameEvent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventPanelWidget_C::AddAnnouncedEvent(class AGameEventBase** gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddAnnouncedEvent");

	UUI_GameEventPanelWidget_C_AddAnnouncedEvent_Params params;
	params.gameEvent = gameEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnUpdate
// (NetReliable, Native, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void UUI_GameEventPanelWidget_C::OnUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnUpdate");

	UUI_GameEventPanelWidget_C_OnUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.Construct
// (Net, Native, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void UUI_GameEventPanelWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.Construct");

	UUI_GameEventPanelWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnOpened
// (Native, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void UUI_GameEventPanelWidget_C::OnOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnOpened");

	UUI_GameEventPanelWidget_C_OnOpened_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnClosed
// (Net, NetReliable, NetRequest, Exec, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void UUI_GameEventPanelWidget_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnClosed");

	UUI_GameEventPanelWidget_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnEventComboBoxSelectionChanged
// (Exec, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventPanelWidget_C::OnEventComboBoxSelectionChanged(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnEventComboBoxSelectionChanged");

	UUI_GameEventPanelWidget_C_OnEventComboBoxSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.ExecuteUbergraph_UI_GameEventPanelWidget
// (Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventPanelWidget_C::STATIC_ExecuteUbergraph_UI_GameEventPanelWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.ExecuteUbergraph_UI_GameEventPanelWidget");

	UUI_GameEventPanelWidget_C_ExecuteUbergraph_UI_GameEventPanelWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

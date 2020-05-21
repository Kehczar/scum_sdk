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

// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetAttachmentItems
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// TArray<class UClass*>          NewParam                       (Parm, OutParm, ZeroConstructor)

void UUI_ItemSelectionSlotWidget_C::STATIC_GetAttachmentItems(TArray<class UClass*>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetAttachmentItems");

	UUI_ItemSelectionSlotWidget_C_GetAttachmentItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSelectedIndex
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_ItemSelectionSlotWidget_C::GetSelectedIndex(int* SelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSelectedIndex");

	UUI_ItemSelectionSlotWidget_C_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSelectionCount
// (NetReliable, NetRequest, Native, Event, NetResponse, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUI_ItemSelectionSlotWidget_C::GetSelectionCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSelectionCount");

	UUI_ItemSelectionSlotWidget_C_GetSelectionCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.HasNoSelection
// (NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           NoSelection                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_ItemSelectionSlotWidget_C::HasNoSelection(bool* NoSelection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.HasNoSelection");

	UUI_ItemSelectionSlotWidget_C_HasNoSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NoSelection != nullptr)
		*NoSelection = params.NoSelection;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.ClearSelections
// (NetReliable, NetRequest, Native, Event, NetResponse, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ItemSelectionSlotWidget_C::ClearSelections()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.ClearSelections");

	UUI_ItemSelectionSlotWidget_C_ClearSelections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSupportItems
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// TArray<class UClass*>          NewParam                       (Parm, OutParm, ZeroConstructor)

void UUI_ItemSelectionSlotWidget_C::STATIC_GetSupportItems(TArray<class UClass*>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSupportItems");

	UUI_ItemSelectionSlotWidget_C_GetSupportItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetMainItem
// (NetReliable, Native, Event, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UClass*                  MainItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_ItemSelectionSlotWidget_C::GetMainItem(class UClass** MainItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetMainItem");

	UUI_ItemSelectionSlotWidget_C_GetMainItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MainItem != nullptr)
		*MainItem = params.MainItem;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Get_Box_Visibility
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_ItemSelectionSlotWidget_C::STATIC_Get_Box_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Get_Box_Visibility");

	UUI_ItemSelectionSlotWidget_C_Get_Box_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Select
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemSelectionSlotWidget_C::STATIC_Select(int* Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Select");

	UUI_ItemSelectionSlotWidget_C_Select_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.AddSelection
// (NetRequest, NetResponse, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UItemSelection**         Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemSelectionSlotWidget_C::AddSelection(class UItemSelection** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.AddSelection");

	UUI_ItemSelectionSlotWidget_C_AddSelection_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Construct
// (Net, NetRequest, Native, Event, NetResponse, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ItemSelectionSlotWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Construct");

	UUI_ItemSelectionSlotWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.OnSynchronizeProperties
// (NetRequest, Native, Event, NetResponse, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ItemSelectionSlotWidget_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.OnSynchronizeProperties");

	UUI_ItemSelectionSlotWidget_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.ExecuteUbergraph_UI_ItemSelectionSlotWidget
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemSelectionSlotWidget_C::STATIC_ExecuteUbergraph_UI_ItemSelectionSlotWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.ExecuteUbergraph_UI_ItemSelectionSlotWidget");

	UUI_ItemSelectionSlotWidget_C_ExecuteUbergraph_UI_ItemSelectionSlotWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.OnClicked__DelegateSignature
// ()

void UUI_ItemSelectionSlotWidget_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.OnClicked__DelegateSignature");

	UUI_ItemSelectionSlotWidget_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

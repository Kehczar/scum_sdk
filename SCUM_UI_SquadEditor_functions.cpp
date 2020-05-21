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

// Function UI_SquadEditor.UI_SquadEditor_C.GetBlackVisibility
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_SquadEditor_C::STATIC_GetBlackVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.GetBlackVisibility");

	UUI_SquadEditor_C_GetBlackVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_InformationTextBox
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_SquadEditor_C::STATIC_OnMouseButtonDown_InformationTextBox(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_InformationTextBox");

	UUI_SquadEditor_C_OnMouseButtonDown_InformationTextBox_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SquadEditor.UI_SquadEditor_C.UpdateOptions
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Private, Protected, NetServer)

void UUI_SquadEditor_C::UpdateOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.UpdateOptions");

	UUI_SquadEditor_C_UpdateOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_MessageTextBox
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_SquadEditor_C::OnMouseButtonDown_MessageTextBox(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_MessageTextBox");

	UUI_SquadEditor_C_OnMouseButtonDown_MessageTextBox_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SquadEditor.UI_SquadEditor_C.LoadData
// (Net, Native, Static, NetMulticast, Private, Protected, NetServer)

void UUI_SquadEditor_C::STATIC_LoadData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.LoadData");

	UUI_SquadEditor_C_LoadData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.LoadEmblem
// (Native, NetResponse, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FConZSquadEmblem*       emblem                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadEditor_C::LoadEmblem(struct FConZSquadEmblem* emblem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.LoadEmblem");

	UUI_SquadEditor_C_LoadEmblem_Params params;
	params.emblem = emblem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.SaveData
// (Net, NetRequest, Event, Private, Protected, NetServer)

void UUI_SquadEditor_C::SaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.SaveData");

	UUI_SquadEditor_C_SaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.EmblemUpdate
// (Net, Exec, Private, Protected, NetServer)
// Parameters:
// class UDropdownMenuSelectionWidget** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SquadEditor_C::EmblemUpdate(class UDropdownMenuSelectionWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.EmblemUpdate");

	UUI_SquadEditor_C_EmblemUpdate_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.ColorClicked
// (Net, NetReliable, NetResponse, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UDropdownMenuSelectionWidget** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SquadEditor_C::ColorClicked(class UDropdownMenuSelectionWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.ColorClicked");

	UUI_SquadEditor_C_ColorClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.SymbolClicked
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UDropdownMenuSelectionWidget** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SquadEditor_C::STATIC_SymbolClicked(class UDropdownMenuSelectionWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.SymbolClicked");

	UUI_SquadEditor_C_SymbolClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.BackgroundClicked
// (Net, NetReliable, NetRequest, Native, Event, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UDropdownMenuSelectionWidget** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SquadEditor_C::BackgroundClicked(class UDropdownMenuSelectionWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BackgroundClicked");

	UUI_SquadEditor_C_BackgroundClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.Construct
// (Net, NetReliable, Native, Event, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_SquadEditor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.Construct");

	UUI_SquadEditor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (NetReliable, Native, Event, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_SquadEditor_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadEditor_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (Net, Native, Event, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_SquadEditor_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadEditor_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
// (Native, Event, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_SquadEditor_C::BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");

	UUI_SquadEditor_C_BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Event, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_SquadEditor_C::BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature");

	UUI_SquadEditor_C_BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature
// (Exec, Native, Event, NetResponse, NetMulticast, Private, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_SquadEditor_C::BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature");

	UUI_SquadEditor_C_BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.ExecuteUbergraph_UI_SquadEditor
// (NetReliable, NetRequest, Exec, Event, Static, Public, HasDefaults, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadEditor_C::STATIC_ExecuteUbergraph_UI_SquadEditor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.ExecuteUbergraph_UI_SquadEditor");

	UUI_SquadEditor_C_ExecuteUbergraph_UI_SquadEditor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

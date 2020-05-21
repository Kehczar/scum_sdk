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

// Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.OnPreviewKeyDown
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_ChangeTextWidget_C::STATIC_OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.OnPreviewKeyDown");

	UUI_ChangeTextWidget_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.Construct
// (Exec, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UUI_ChangeTextWidget_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.Construct");

	UUI_ChangeTextWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature
// (Net, NetReliable, Exec, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ChangeTextWidget_C::STATIC_BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature");

	UUI_ChangeTextWidget_C_BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UUI_ChangeTextWidget_C::STATIC_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUI_ChangeTextWidget_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.SetCurrentInputText_BP
// (NetReliable, NetRequest, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_ChangeTextWidget_C::STATIC_SetCurrentInputText_BP(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.SetCurrentInputText_BP");

	UUI_ChangeTextWidget_C_SetCurrentInputText_BP_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.BndEvt__InputText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
// (Net, NetRequest, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_ChangeTextWidget_C::STATIC_BndEvt__InputText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.BndEvt__InputText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature");

	UUI_ChangeTextWidget_C_BndEvt__InputText_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.SetMaxNumberOfCharacters
// (Net, Native, Event, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ChangeTextWidget_C::SetMaxNumberOfCharacters(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.SetMaxNumberOfCharacters");

	UUI_ChangeTextWidget_C_SetMaxNumberOfCharacters_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.ExecuteUbergraph_UI_ChangeTextWidget
// (NetReliable, Exec, Native, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ChangeTextWidget_C::STATIC_ExecuteUbergraph_UI_ChangeTextWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ChangeTextWidget.UI_ChangeTextWidget_C.ExecuteUbergraph_UI_ChangeTextWidget");

	UUI_ChangeTextWidget_C_ExecuteUbergraph_UI_ChangeTextWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

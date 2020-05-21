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

// Function UI_CharacterSelection.UI_CharacterSelection_C.OnPreviewKeyDown
// (Net, NetRequest, Exec, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_CharacterSelection_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnPreviewKeyDown");

	UUI_CharacterSelection_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
// (Net, Native, Event, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterSelection_C::BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterSelection_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (Net, NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterSelection_C::BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.Construct
// (Net, Native, Event, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterSelection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.Construct");

	UUI_CharacterSelection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature
// (Exec, Native, Event, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterSelection_C::BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterSelection_C::BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature
// (Exec, Native, Event, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterSelection_C::BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature
// (NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterSelection_C::BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature");

	UUI_CharacterSelection_C_BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.OnESC
// (NetReliable, Native, Event, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterSelection_C::OnESC()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnESC");

	UUI_CharacterSelection_C_OnESC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.CancelCriminalRecord
// (Net, NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterSelection_C::CancelCriminalRecord()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.CancelCriminalRecord");

	UUI_CharacterSelection_C_CancelCriminalRecord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.CancelDeleteCharacter
// (NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterSelection_C::CancelDeleteCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.CancelDeleteCharacter");

	UUI_CharacterSelection_C_CancelDeleteCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.Back
// (Net, Exec, Native, Event, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterSelection_C::Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.Back");

	UUI_CharacterSelection_C_Back_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterDeleted
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// class UUI_CharacterSlot_C**    Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CharacterSelection_C::OnCharacterDeleted(class UUI_CharacterSlot_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterDeleted");

	UUI_CharacterSelection_C_OnCharacterDeleted_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterSelected
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UUserProfile**           UserProfile                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterSelection_C::STATIC_OnCharacterSelected(class UUserProfile** UserProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterSelected");

	UUI_CharacterSelection_C_OnCharacterSelected_Params params;
	params.UserProfile = UserProfile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSelection.UI_CharacterSelection_C.ExecuteUbergraph_UI_CharacterSelection
// (NetReliable, NetRequest, Exec, Event, NetResponse, Public, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterSelection_C::ExecuteUbergraph_UI_CharacterSelection(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSelection.UI_CharacterSelection_C.ExecuteUbergraph_UI_CharacterSelection");

	UUI_CharacterSelection_C_ExecuteUbergraph_UI_CharacterSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

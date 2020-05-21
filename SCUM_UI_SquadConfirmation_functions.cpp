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

// Function UI_SquadConfirmation.UI_SquadConfirmation_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Event, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_SquadConfirmation_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadConfirmation.UI_SquadConfirmation_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadConfirmation_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadConfirmation.UI_SquadConfirmation_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_SquadConfirmation_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadConfirmation.UI_SquadConfirmation_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadConfirmation_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadConfirmation.UI_SquadConfirmation_C.PreConstruct
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadConfirmation_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadConfirmation.UI_SquadConfirmation_C.PreConstruct");

	UUI_SquadConfirmation_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadConfirmation.UI_SquadConfirmation_C.ExecuteUbergraph_UI_SquadConfirmation
// (Net, NetReliable, NetRequest, Exec, Event, NetMulticast, Private, Protected, NetServer)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadConfirmation_C::ExecuteUbergraph_UI_SquadConfirmation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadConfirmation.UI_SquadConfirmation_C.ExecuteUbergraph_UI_SquadConfirmation");

	UUI_SquadConfirmation_C_ExecuteUbergraph_UI_SquadConfirmation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadConfirmation.UI_SquadConfirmation_C.OnCancel__DelegateSignature
// ()

void UUI_SquadConfirmation_C::OnCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadConfirmation.UI_SquadConfirmation_C.OnCancel__DelegateSignature");

	UUI_SquadConfirmation_C_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadConfirmation.UI_SquadConfirmation_C.OnConfirm__DelegateSignature
// ()

void UUI_SquadConfirmation_C::OnConfirm__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadConfirmation.UI_SquadConfirmation_C.OnConfirm__DelegateSignature");

	UUI_SquadConfirmation_C_OnConfirm__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_SquadPanel.UI_SquadPanel_C.UpdateRanking
// (Exec, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_SquadPanel_C::UpdateRanking()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateRanking");

	UUI_SquadPanel_C_UpdateRanking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadLimit
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, Private, Protected, NetServer)

void UUI_SquadPanel_C::UpdateSquadLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadLimit");

	UUI_SquadPanel_C_UpdateSquadLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.AskForConfirmation
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText*                  DialogText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FScriptDelegate*        OnConfirmEvent                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate*        OnCancelEvent                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_SquadPanel_C::AskForConfirmation(struct FText* DialogText, struct FScriptDelegate* OnConfirmEvent, struct FScriptDelegate* OnCancelEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.AskForConfirmation");

	UUI_SquadPanel_C_AskForConfirmation_Params params;
	params.DialogText = DialogText;
	params.OnConfirmEvent = OnConfirmEvent;
	params.OnCancelEvent = OnCancelEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateMemberList
// (NetRequest, Exec, Native, Event, NetMulticast, Private, Protected, NetServer)

void UUI_SquadPanel_C::UpdateMemberList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateMemberList");

	UUI_SquadPanel_C_UpdateMemberList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateElementVisibility
// (Net, NetReliable, NetResponse, NetMulticast, Private, Protected, NetServer)

void UUI_SquadPanel_C::UpdateElementVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateElementVisibility");

	UUI_SquadPanel_C_UpdateElementVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateCurrentSquadData
// (NetRequest, Native, NetResponse, Static, Private, Protected, NetServer)

void UUI_SquadPanel_C::STATIC_UpdateCurrentSquadData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateCurrentSquadData");

	UUI_SquadPanel_C_UpdateCurrentSquadData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.Update
// (Net, Exec, Native, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_SquadPanel_C::STATIC_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.Update");

	UUI_SquadPanel_C_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (Exec, Native, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_SquadPanel_C::STATIC_BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadPanel_C_BndEvt__EditButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadMemberInfo
// (Net, NetReliable, NetRequest, Native, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_SquadPanel_C::STATIC_UpdateSquadMemberInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadMemberInfo");

	UUI_SquadPanel_C_UpdateSquadMemberInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (NetReliable, NetRequest, Native, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_SquadPanel_C::STATIC_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadPanel_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (Net, NetRequest, Native, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_SquadPanel_C::STATIC_BndEvt__CreateButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadPanel_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.OnLeaveConfirm
// (NetRequest, Native, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_SquadPanel_C::STATIC_OnLeaveConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.OnLeaveConfirm");

	UUI_SquadPanel_C_OnLeaveConfirm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.OnLeaveCanceled
// (Net, NetReliable, Native, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_SquadPanel_C::STATIC_OnLeaveCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.OnLeaveCanceled");

	UUI_SquadPanel_C_OnLeaveCanceled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadRankingData
// (NetReliable, Native, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_SquadPanel_C::STATIC_UpdateSquadRankingData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadRankingData");

	UUI_SquadPanel_C_UpdateSquadRankingData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadTopData
// (Net, NetReliable, NetRequest, Exec, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_SquadPanel_C::STATIC_UpdateSquadTopData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.UpdateSquadTopData");

	UUI_SquadPanel_C_UpdateSquadTopData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.Construct
// (Net, NetReliable, NetRequest, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_SquadPanel_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.Construct");

	UUI_SquadPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadPanel.UI_SquadPanel_C.ExecuteUbergraph_UI_SquadPanel
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, Private, Protected, NetServer)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadPanel_C::STATIC_ExecuteUbergraph_UI_SquadPanel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadPanel.UI_SquadPanel_C.ExecuteUbergraph_UI_SquadPanel");

	UUI_SquadPanel_C_ExecuteUbergraph_UI_SquadPanel_Params params;
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

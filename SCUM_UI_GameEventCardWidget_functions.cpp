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

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TeamSwitchFee_Text
// (NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_TeamSwitchFee_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TeamSwitchFee_Text");

	UUI_GameEventCardWidget_C_Get_TeamSwitchFee_Text_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Cooldown_Throbber_Visiblity
// (Net, NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_Cooldown_Throbber_Visiblity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Cooldown_Throbber_Visiblity");

	UUI_GameEventCardWidget_C_Get_Cooldown_Throbber_Visiblity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EntryFeeTag_Text
// (NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_EntryFeeTag_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EntryFeeTag_Text");

	UUI_GameEventCardWidget_C_Get_EntryFeeTag_Text_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Buttons_Visibility
// (Net, NetReliable, Native, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_Buttons_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Buttons_Visibility");

	UUI_GameEventCardWidget_C_Get_Buttons_Visibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Screenshot_Brush
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_GameEventCardWidget_C::STATIC_Get_Screenshot_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Screenshot_Brush");

	UUI_GameEventCardWidget_C_Get_Screenshot_Brush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanJoinTeam
// (Net, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanJoin                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventCardWidget_C::CanJoinTeam(int* Team, bool* CanJoin)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanJoinTeam");

	UUI_GameEventCardWidget_C_CanJoinTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanJoin != nullptr)
		*CanJoin = params.CanJoin;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_SwitchTeamButton_Visibility
// (Net, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::STATIC_Get_SwitchTeamButton_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_SwitchTeamButton_Visibility");

	UUI_GameEventCardWidget_C_Get_SwitchTeamButton_Visibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.GetJoinButtonText
// (Net, Exec, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameEventCardWidget_C::GetJoinButtonText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.GetJoinButtonText");

	UUI_GameEventCardWidget_C_GetJoinButtonText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CheckPrerequisites
// (NetReliable, Native, Event, Static, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           HasEnoughFamePoints            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventCardWidget_C::STATIC_CheckPrerequisites(bool* HasEnoughFamePoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CheckPrerequisites");

	UUI_GameEventCardWidget_C_CheckPrerequisites_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasEnoughFamePoints != nullptr)
		*HasEnoughFamePoints = params.HasEnoughFamePoints;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerRegisteredForThisEvent
// (Net, NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           IsPlayerParticipatingInThisEvent (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventCardWidget_C::IsPlayerRegisteredForThisEvent(bool* IsPlayerParticipatingInThisEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerRegisteredForThisEvent");

	UUI_GameEventCardWidget_C_IsPlayerRegisteredForThisEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlayerParticipatingInThisEvent != nullptr)
		*IsPlayerParticipatingInThisEvent = params.IsPlayerParticipatingInThisEvent;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanPlayerJoin
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           preferredTeam                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanJoin                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventCardWidget_C::CanPlayerJoin(int* preferredTeam, bool* CanJoin)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanPlayerJoin");

	UUI_GameEventCardWidget_C_CanPlayerJoin_Params params;
	params.preferredTeam = preferredTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanJoin != nullptr)
		*CanJoin = params.CanJoin;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinDisabledMsgVisibility
// (Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_JoinDisabledMsgVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinDisabledMsgVisibility");

	UUI_GameEventCardWidget_C_Get_JoinDisabledMsgVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EventName
// (Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_EventName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EventName");

	UUI_GameEventCardWidget_C_Get_EventName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerParticipatingInThisEvent
// (NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           IsPlayerParticipatingInThisEvent (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventCardWidget_C::IsPlayerParticipatingInThisEvent(bool* IsPlayerParticipatingInThisEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerParticipatingInThisEvent");

	UUI_GameEventCardWidget_C_IsPlayerParticipatingInThisEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlayerParticipatingInThisEvent != nullptr)
		*IsPlayerParticipatingInThisEvent = params.IsPlayerParticipatingInThisEvent;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinRedButtonVisibility
// (Net, NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_JoinRedButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinRedButtonVisibility");

	UUI_GameEventCardWidget_C_Get_JoinRedButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinBlueButton_Visibility
// (Net, NetReliable, NetRequest, Exec, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_JoinBlueButton_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinBlueButton_Visibility");

	UUI_GameEventCardWidget_C_Get_JoinBlueButton_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeTextVisibility
// (NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_TimeTextVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeTextVisibility");

	UUI_GameEventCardWidget_C_Get_TimeTextVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LeaveButtonVisibility
// (NetReliable, Exec, Event, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_LeaveButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LeaveButtonVisibility");

	UUI_GameEventCardWidget_C_Get_LeaveButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinButtonVisibility
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventCardWidget_C::Get_JoinButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinButtonVisibility");

	UUI_GameEventCardWidget_C_Get_JoinButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_NumPlayersText
// (Net, Exec, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_NumPlayersText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_NumPlayersText");

	UUI_GameEventCardWidget_C_Get_NumPlayersText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_RoundsText
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_RoundsText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_RoundsText");

	UUI_GameEventCardWidget_C_Get_RoundsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeText
// (NetReliable, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_TimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeText");

	UUI_GameEventCardWidget_C_Get_TimeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_StatusText
// (NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_StatusText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_StatusText");

	UUI_GameEventCardWidget_C_Get_StatusText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LocationText
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_GameEventCardWidget_C::Get_LocationText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LocationText");

	UUI_GameEventCardWidget_C_Get_LocationText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (NetReliable, Exec, Event, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void UUI_GameEventCardWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_GameEventCardWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Construct
// (Net, Exec, Event, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void UUI_GameEventCardWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Construct");

	UUI_GameEventCardWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature
// (Exec, Event, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void UUI_GameEventCardWidget_C::BndEvt__LeaveButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature");

	UUI_GameEventCardWidget_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinRedButton_K2Node_ComponentBoundEvent_1256_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Event, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void UUI_GameEventCardWidget_C::BndEvt__JoinRedButton_K2Node_ComponentBoundEvent_1256_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinRedButton_K2Node_ComponentBoundEvent_1256_OnButtonClickedEvent__DelegateSignature");

	UUI_GameEventCardWidget_C_BndEvt__JoinRedButton_K2Node_ComponentBoundEvent_1256_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinBlueButton_K2Node_ComponentBoundEvent_1275_OnButtonClickedEvent__DelegateSignature
// (NetReliable, NetRequest, Event, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void UUI_GameEventCardWidget_C::BndEvt__JoinBlueButton_K2Node_ComponentBoundEvent_1275_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinBlueButton_K2Node_ComponentBoundEvent_1275_OnButtonClickedEvent__DelegateSignature");

	UUI_GameEventCardWidget_C_BndEvt__JoinBlueButton_K2Node_ComponentBoundEvent_1275_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__SwitchTeamButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature
// (Net, NetRequest, Event, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void UUI_GameEventCardWidget_C::BndEvt__SwitchTeamButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__SwitchTeamButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature");

	UUI_GameEventCardWidget_C_BndEvt__SwitchTeamButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.ExecuteUbergraph_UI_GameEventCardWidget
// (NetRequest, Exec, Native, NetMulticast, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventCardWidget_C::ExecuteUbergraph_UI_GameEventCardWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.ExecuteUbergraph_UI_GameEventCardWidget");

	UUI_GameEventCardWidget_C_ExecuteUbergraph_UI_GameEventCardWidget_Params params;
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

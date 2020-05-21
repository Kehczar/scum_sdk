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

// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventCancelBox_Visibility
// (Net, NetReliable, NetRequest, Native, NetResponse, NetMulticast, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_NotificationPanelWidget_C::Get_EventCancelBox_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventCancelBox_Visibility");

	UUI_NotificationPanelWidget_C_Get_EventCancelBox_Visibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventCancelTime
// (NetReliable, Exec, Native, Static, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_NotificationPanelWidget_C::STATIC_Get_EventCancelTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventCancelTime");

	UUI_NotificationPanelWidget_C_Get_EventCancelTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventTime_BrushColor
// (NetReliable, Native, Event, Static, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_NotificationPanelWidget_C::STATIC_Get_EventTime_BrushColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventTime_BrushColor");

	UUI_NotificationPanelWidget_C_Get_EventTime_BrushColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventBox_BrushColor
// (Net, NetReliable, Native, Event, NetResponse, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_NotificationPanelWidget_C::Get_NextEventBox_BrushColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventBox_BrushColor");

	UUI_NotificationPanelWidget_C_Get_NextEventBox_BrushColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventTimeText
// (Net, NetReliable, NetRequest, Exec, NetResponse, Private, Protected, NetServer)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_NotificationPanelWidget_C::Get_EventTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventTimeText");

	UUI_NotificationPanelWidget_C_Get_EventTimeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventTime_Visibility
// (Net, NetReliable, Exec, Native, Event, Static, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_NotificationPanelWidget_C::STATIC_Get_EventTime_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventTime_Visibility");

	UUI_NotificationPanelWidget_C_Get_EventTime_Visibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_RankLabel_Text
// (Exec, Native, Event, Static, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_NotificationPanelWidget_C::STATIC_Get_RankLabel_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_RankLabel_Text");

	UUI_NotificationPanelWidget_C_Get_RankLabel_Text_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventLocation_Text
// (NetReliable, Exec, Event, Static, Private, Protected, NetServer)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_NotificationPanelWidget_C::STATIC_Get_NextEventLocation_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventLocation_Text");

	UUI_NotificationPanelWidget_C_Get_NextEventLocation_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_FamePointsCounter_Text
// (NetRequest, Exec, Event, Static, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_NotificationPanelWidget_C::STATIC_Get_FamePointsCounter_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_FamePointsCounter_Text");

	UUI_NotificationPanelWidget_C_Get_FamePointsCounter_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventCountdown_Text
// (Net, NetReliable, Event, Static, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_NotificationPanelWidget_C::STATIC_Get_NextEventCountdown_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventCountdown_Text");

	UUI_NotificationPanelWidget_C_Get_NextEventCountdown_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventBox_Visibility
// (NetRequest, Native, Static, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_NotificationPanelWidget_C::STATIC_Get_NextEventBox_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventBox_Visibility");

	UUI_NotificationPanelWidget_C_Get_NextEventBox_Visibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.ShowNotification
// (Net, Exec, Event, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UNotificationWidget**    notification                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_NotificationPanelWidget_C::STATIC_ShowNotification(class UNotificationWidget** notification)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.ShowNotification");

	UUI_NotificationPanelWidget_C_ShowNotification_Params params;
	params.notification = notification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.ClearAllNotifications
// (Net, Exec, Event, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_NotificationPanelWidget_C::STATIC_ClearAllNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.ClearAllNotifications");

	UUI_NotificationPanelWidget_C_ClearAllNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.ExecuteUbergraph_UI_NotificationPanelWidget
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NotificationPanelWidget_C::ExecuteUbergraph_UI_NotificationPanelWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.ExecuteUbergraph_UI_NotificationPanelWidget");

	UUI_NotificationPanelWidget_C_ExecuteUbergraph_UI_NotificationPanelWidget_Params params;
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

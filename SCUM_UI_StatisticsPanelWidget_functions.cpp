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

// Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.OnPreviewKeyDown
// (Net, NetReliable, NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_StatisticsPanelWidget_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.OnPreviewKeyDown");

	UUI_StatisticsPanelWidget_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.Construct
// (NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void UUI_StatisticsPanelWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.Construct");

	UUI_StatisticsPanelWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.OnOpened
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Protected, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void UUI_StatisticsPanelWidget_C::OnOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.OnOpened");

	UUI_StatisticsPanelWidget_C_OnOpened_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.OnESC
// (Exec, Native, Event, NetResponse, MulticastDelegate, Public, Protected, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void UUI_StatisticsPanelWidget_C::OnESC()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.OnESC");

	UUI_StatisticsPanelWidget_C_OnESC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (NetReliable, NetRequest, Static, MulticastDelegate, Public, Protected, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void UUI_StatisticsPanelWidget_C::STATIC_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UUI_StatisticsPanelWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.ExecuteUbergraph_UI_StatisticsPanelWidget
// (NetRequest, Native, NetResponse, Static, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_StatisticsPanelWidget_C::STATIC_ExecuteUbergraph_UI_StatisticsPanelWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_StatisticsPanelWidget.UI_StatisticsPanelWidget_C.ExecuteUbergraph_UI_StatisticsPanelWidget");

	UUI_StatisticsPanelWidget_C_ExecuteUbergraph_UI_StatisticsPanelWidget_Params params;
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

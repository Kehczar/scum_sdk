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

// Function MinimizableWidget.MinimizableWidget_C.OnMouseDoubleClick_1
// (Net, NetReliable, NetRequest, Native, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMinimizableWidget_C::STATIC_OnMouseDoubleClick_1(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.OnMouseDoubleClick_1");

	UMinimizableWidget_C_OnMouseDoubleClick_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimizableWidget.MinimizableWidget_C.SetMinimizableWidgetSize
// (NetReliable, Exec, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D*              newMinWidgetSize               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimizableWidget_C::STATIC_SetMinimizableWidgetSize(struct FVector2D* newMinWidgetSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.SetMinimizableWidgetSize");

	UMinimizableWidget_C_SetMinimizableWidgetSize_Params params;
	params.newMinWidgetSize = newMinWidgetSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.GetMinimizableWidgetSize
// (Native, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               widgetSize                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMinimizableWidget_C::STATIC_GetMinimizableWidgetSize(struct FVector2D* widgetSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.GetMinimizableWidgetSize");

	UMinimizableWidget_C_GetMinimizableWidgetSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (widgetSize != nullptr)
		*widgetSize = params.widgetSize;
}


// Function MinimizableWidget.MinimizableWidget_C.SetAlarmColor
// (Net, Native, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool*                          shouldSetAlarmColorOn          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimizableWidget_C::STATIC_SetAlarmColor(bool* shouldSetAlarmColorOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.SetAlarmColor");

	UMinimizableWidget_C_SetAlarmColor_Params params;
	params.shouldSetAlarmColorOn = shouldSetAlarmColorOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.SetInitialIconsVisibility
// (Net, NetReliable, NetRequest, Exec, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UMinimizableWidget_C::STATIC_SetInitialIconsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.SetInitialIconsVisibility");

	UMinimizableWidget_C_SetInitialIconsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.Minimize
// (NetReliable, NetRequest, Exec, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UMinimizableWidget_C::STATIC_Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Minimize");

	UMinimizableWidget_C_Minimize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.Maximize
// (NetReliable, NetRequest, Exec, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UMinimizableWidget_C::STATIC_Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Maximize");

	UMinimizableWidget_C_Maximize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.OnMaximizeImageMouseButtonDown
// (Net, NetRequest, Exec, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMinimizableWidget_C::STATIC_OnMaximizeImageMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.OnMaximizeImageMouseButtonDown");

	UMinimizableWidget_C_OnMaximizeImageMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimizableWidget.MinimizableWidget_C.OnMinimizeImageMouseButtonDown
// (Net, NetRequest, Exec, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMinimizableWidget_C::STATIC_OnMinimizeImageMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.OnMinimizeImageMouseButtonDown");

	UMinimizableWidget_C_OnMinimizeImageMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOff
// (NetRequest, Exec, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UMinimizableWidget_C::STATIC_AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOff");

	UMinimizableWidget_C_AlarmSwitchOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOn
// (NetReliable, NetRequest, Native, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UMinimizableWidget_C::STATIC_AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOn");

	UMinimizableWidget_C_AlarmSwitchOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.Event Widget Size Changed
// (Net, NetRequest, Native, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UMinimizableWidget_C::STATIC_Event_Widget_Size_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Event Widget Size Changed");

	UMinimizableWidget_C_Event_Widget_Size_Changed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.Tick
// (Net, NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimizableWidget_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Tick");

	UMinimizableWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.Event Widget Maximized
// (NetRequest, Native, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UMinimizableWidget_C::STATIC_Event_Widget_Maximized()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Event Widget Maximized");

	UMinimizableWidget_C_Event_Widget_Maximized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.Construct
// (Net, NetReliable, Native, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UMinimizableWidget_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Construct");

	UMinimizableWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.Event Widget Minimized
// (NetReliable, Native, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UMinimizableWidget_C::STATIC_Event_Widget_Minimized()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Event Widget Minimized");

	UMinimizableWidget_C_Event_Widget_Minimized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.OnMinimize
// (Net, Native, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimizableWidget_C::STATIC_OnMinimize(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.OnMinimize");

	UMinimizableWidget_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.WindowContentSizeChanged
// (Net, Native, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UMinimizableWidget_C::STATIC_WindowContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.WindowContentSizeChanged");

	UMinimizableWidget_C_WindowContentSizeChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.AlarmOnWindowContent
// (Net, NetReliable, Exec, Native, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UMinimizableWidget_C::STATIC_AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.AlarmOnWindowContent");

	UMinimizableWidget_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.AlarmOffWindowContent
// (NetRequest, Exec, Native, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UMinimizableWidget_C::STATIC_AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.AlarmOffWindowContent");

	UMinimizableWidget_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.ExecuteUbergraph_MinimizableWidget
// (Net, NetReliable, Exec, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimizableWidget_C::STATIC_ExecuteUbergraph_MinimizableWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.ExecuteUbergraph_MinimizableWidget");

	UMinimizableWidget_C_ExecuteUbergraph_MinimizableWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature
// ()

void UMinimizableWidget_C::NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature");

	UMinimizableWidget_C_NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature
// ()

void UMinimizableWidget_C::NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature");

	UMinimizableWidget_C_NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature
// ()

void UMinimizableWidget_C::NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature");

	UMinimizableWidget_C_NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.WidgetSizeChangedEventDispatcher__DelegateSignature
// ()

void UMinimizableWidget_C::WidgetSizeChangedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.WidgetSizeChangedEventDispatcher__DelegateSignature");

	UMinimizableWidget_C_WidgetSizeChangedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function RDAMonitor.RDAMonitor_C.shouldAlarmBeOn
// (NetRequest, Exec, Native, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URDAMonitor_C::STATIC_shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.shouldAlarmBeOn");

	URDAMonitor_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function RDAMonitor.RDAMonitor_C.GetContentSize
// (NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               contentSize                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URDAMonitor_C::STATIC_GetContentSize(struct FVector2D* contentSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.GetContentSize");

	URDAMonitor_C_GetContentSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (contentSize != nullptr)
		*contentSize = params.contentSize;
}


// Function RDAMonitor.RDAMonitor_C.SetPrisonerToMonitorOnChildren
// (NetRequest, Native, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void URDAMonitor_C::SetPrisonerToMonitorOnChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.SetPrisonerToMonitorOnChildren");

	URDAMonitor_C_SetPrisonerToMonitorOnChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.Init
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void URDAMonitor_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.Init");

	URDAMonitor_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.GetTitleText
// (Exec, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText URDAMonitor_C::STATIC_GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.GetTitleText");

	URDAMonitor_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RDAMonitor.RDAMonitor_C.GetDefaultTitle
// (Net, NetReliable, NetRequest, Exec, Native, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void URDAMonitor_C::STATIC_GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.GetDefaultTitle");

	URDAMonitor_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function RDAMonitor.RDAMonitor_C.SelectCustomColor
// (NetReliable, NetRequest, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URDAMonitor_C::STATIC_SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.SelectCustomColor");

	URDAMonitor_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function RDAMonitor.RDAMonitor_C.OnMinimize
// (NetReliable, NetRequest, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URDAMonitor_C::STATIC_OnMinimize(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.OnMinimize");

	URDAMonitor_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.Construct
// (NetReliable, NetRequest, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void URDAMonitor_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.Construct");

	URDAMonitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.Tick
// (Net, NetReliable, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URDAMonitor_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.Tick");

	URDAMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.MinimizableWidgetSizeChanged
// (NetRequest, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void URDAMonitor_C::STATIC_MinimizableWidgetSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.MinimizableWidgetSizeChanged");

	URDAMonitor_C_MinimizableWidgetSizeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.RDAMonitorSizeChanged
// (Net, NetReliable, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void URDAMonitor_C::STATIC_RDAMonitorSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.RDAMonitorSizeChanged");

	URDAMonitor_C_RDAMonitorSizeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.OnPrisonerSet
// (NetReliable, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void URDAMonitor_C::STATIC_OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.OnPrisonerSet");

	URDAMonitor_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.OnRDAMonitorContentSizeChanged
// (Net, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void URDAMonitor_C::STATIC_OnRDAMonitorContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.OnRDAMonitorContentSizeChanged");

	URDAMonitor_C_OnRDAMonitorContentSizeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.WindowContentSizeChanged
// (Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void URDAMonitor_C::STATIC_WindowContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.WindowContentSizeChanged");

	URDAMonitor_C_WindowContentSizeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.AlarmOnWindowContent
// (Net, Exec, Native, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void URDAMonitor_C::STATIC_AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.AlarmOnWindowContent");

	URDAMonitor_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.AlarmOffWindowContent
// (NetReliable, Exec, Native, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void URDAMonitor_C::STATIC_AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.AlarmOffWindowContent");

	URDAMonitor_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.ExecuteUbergraph_RDAMonitor
// (Net, Exec, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URDAMonitor_C::STATIC_ExecuteUbergraph_RDAMonitor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.ExecuteUbergraph_RDAMonitor");

	URDAMonitor_C_ExecuteUbergraph_RDAMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.RDASizeChangeEventDispatcher__DelegateSignature
// ()
// Parameters:
// struct FVector2D*              newSize                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URDAMonitor_C::RDASizeChangeEventDispatcher__DelegateSignature(struct FVector2D* newSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.RDASizeChangeEventDispatcher__DelegateSignature");

	URDAMonitor_C_RDASizeChangeEventDispatcher__DelegateSignature_Params params;
	params.newSize = newSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

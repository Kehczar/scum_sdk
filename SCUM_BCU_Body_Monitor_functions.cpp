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

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.shouldAlarmBeOn
// (NetReliable, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBCU_Body_Monitor_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.shouldAlarmBeOn");

	UBCU_Body_Monitor_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetContentSize
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               contentSize                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBCU_Body_Monitor_C::STATIC_GetContentSize(struct FVector2D* contentSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetContentSize");

	UBCU_Body_Monitor_C_GetContentSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (contentSize != nullptr)
		*contentSize = params.contentSize;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetPrisonerToMonitorOnChildren
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UBCU_Body_Monitor_C::STATIC_SetPrisonerToMonitorOnChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetPrisonerToMonitorOnChildren");

	UBCU_Body_Monitor_C_SetPrisonerToMonitorOnChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetSubTitles
// (NetReliable, NetRequest, Exec, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UBCU_Body_Monitor_C::SetSubTitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetSubTitles");

	UBCU_Body_Monitor_C_SetSubTitles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetTitleText
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBCU_Body_Monitor_C::STATIC_GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetTitleText");

	UBCU_Body_Monitor_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetDefaultTitle
// (Net, NetRequest, Exec, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void UBCU_Body_Monitor_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetDefaultTitle");

	UBCU_Body_Monitor_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.SelectCustomColor
// (NetRequest, Exec, Event, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBCU_Body_Monitor_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.SelectCustomColor");

	UBCU_Body_Monitor_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmSwitchOn
// (NetRequest, Exec, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UBCU_Body_Monitor_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmSwitchOn");

	UBCU_Body_Monitor_C_AlarmSwitchOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmSwitchOff
// (Net, NetReliable, Exec, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UBCU_Body_Monitor_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmSwitchOff");

	UBCU_Body_Monitor_C_AlarmSwitchOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnSickness
// (NetReliable, Exec, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UBCU_Body_Monitor_C::AlarmOnSickness()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnSickness");

	UBCU_Body_Monitor_C_AlarmOnSickness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffSickness
// (Net, Exec, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UBCU_Body_Monitor_C::AlarmOffSickness()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffSickness");

	UBCU_Body_Monitor_C_AlarmOffSickness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnBodyCondition
// (Exec, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UBCU_Body_Monitor_C::AlarmOnBodyCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnBodyCondition");

	UBCU_Body_Monitor_C_AlarmOnBodyCondition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffBodyCondition
// (NetReliable, NetRequest, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UBCU_Body_Monitor_C::AlarmOffBodyCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffBodyCondition");

	UBCU_Body_Monitor_C_AlarmOffBodyCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.BCUBodyMonitorContentSizeChangedEvent
// (Net, NetRequest, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UBCU_Body_Monitor_C::BCUBodyMonitorContentSizeChangedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.BCUBodyMonitorContentSizeChangedEvent");

	UBCU_Body_Monitor_C_BCUBodyMonitorContentSizeChangedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.OnPrisonerSet
// (NetRequest, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UBCU_Body_Monitor_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.OnPrisonerSet");

	UBCU_Body_Monitor_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.Tick
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBCU_Body_Monitor_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.Tick");

	UBCU_Body_Monitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.Construct
// (Net, NetReliable, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UBCU_Body_Monitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.Construct");

	UBCU_Body_Monitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.OnMinimize
// (Net, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBCU_Body_Monitor_C::OnMinimize(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.OnMinimize");

	UBCU_Body_Monitor_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.WindowContentSizeChanged
// (Net, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UBCU_Body_Monitor_C::WindowContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.WindowContentSizeChanged");

	UBCU_Body_Monitor_C_WindowContentSizeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnWindowContent
// (NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UBCU_Body_Monitor_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnWindowContent");

	UBCU_Body_Monitor_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffWindowContent
// (Net, NetReliable, NetRequest, Exec, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UBCU_Body_Monitor_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffWindowContent");

	UBCU_Body_Monitor_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.ExecuteUbergraph_BCU_Body_Monitor
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBCU_Body_Monitor_C::STATIC_ExecuteUbergraph_BCU_Body_Monitor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.ExecuteUbergraph_BCU_Body_Monitor");

	UBCU_Body_Monitor_C_ExecuteUbergraph_BCU_Body_Monitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature
// ()
// Parameters:
// struct FVector2D*              Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBCU_Body_Monitor_C::BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature(struct FVector2D* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature");

	UBCU_Body_Monitor_C_BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

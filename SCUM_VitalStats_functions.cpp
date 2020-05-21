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

// Function VitalStats.VitalStats_C.isAlarmOn
// (NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           isHeartBPMAlarmOn              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalStats_C::STATIC_isAlarmOn(bool* isHeartBPMAlarmOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.isAlarmOn");

	UVitalStats_C_isAlarmOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isHeartBPMAlarmOn != nullptr)
		*isHeartBPMAlarmOn = params.isHeartBPMAlarmOn;
}


// Function VitalStats.VitalStats_C.AlarmControl
// (Net, NetReliable, NetRequest, Native, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           alarmCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStats_C::AlarmControl(int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.AlarmControl");

	UVitalStats_C_AlarmControl_Params params;
	params.alarmCode = alarmCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.DeactivateAlarm
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UVitalStats_C::DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.DeactivateAlarm");

	UVitalStats_C_DeactivateAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.ActivateAlarm
// (NetReliable, NetRequest, Exec, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UVitalStats_C::STATIC_ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.ActivateAlarm");

	UVitalStats_C_ActivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.CheckHeartBPMAlarm
// (Net, NetReliable, Exec, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           BeatsPerMinute                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalStats_C::STATIC_CheckHeartBPMAlarm(int* BeatsPerMinute, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.CheckHeartBPMAlarm");

	UVitalStats_C_CheckHeartBPMAlarm_Params params;
	params.BeatsPerMinute = BeatsPerMinute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function VitalStats.VitalStats_C.SetTextColor
// (Exec, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStats_C::STATIC_SetTextColor(struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.SetTextColor");

	UVitalStats_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.GetHeartRateBPM
// (NetReliable, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStats_C::STATIC_GetHeartRateBPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetHeartRateBPM");

	UVitalStats_C_GetHeartRateBPM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.GetHealthPercentText
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStats_C::GetHealthPercentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetHealthPercentText");

	UVitalStats_C_GetHealthPercentText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.GetHealthPercentBar
// (Net, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVitalStats_C::GetHealthPercentBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetHealthPercentBar");

	UVitalStats_C_GetHealthPercentBar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.GetStaminaPercentText
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStats_C::GetStaminaPercentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetStaminaPercentText");

	UVitalStats_C_GetStaminaPercentText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.GetStaminaPercentBar
// (Net, NetReliable, Native, Event, NetResponse, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVitalStats_C::GetStaminaPercentBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.GetStaminaPercentBar");

	UVitalStats_C_GetStaminaPercentBar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStats.VitalStats_C.Construct
// (Net, NetReliable, NetRequest, Native, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UVitalStats_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.Construct");

	UVitalStats_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.UpdateContent
// (Exec, Native, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UVitalStats_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.UpdateContent");

	UVitalStats_C_UpdateContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.AlarmOnWindowContent
// (Net, NetRequest, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UVitalStats_C::STATIC_AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.AlarmOnWindowContent");

	UVitalStats_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.Tick
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStats_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.Tick");

	UVitalStats_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStats.VitalStats_C.ExecuteUbergraph_VitalStats
// (NetReliable, Exec, Event, NetResponse, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStats_C::ExecuteUbergraph_VitalStats(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStats.VitalStats_C.ExecuteUbergraph_VitalStats");

	UVitalStats_C_ExecuteUbergraph_VitalStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

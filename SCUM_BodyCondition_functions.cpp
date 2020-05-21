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

// Function BodyCondition.BodyCondition_C.CheckBloodVolumeAlarm
// (NetRequest, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         currentBlood                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         initialBlood                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MinBlood                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBodyCondition_C::STATIC_CheckBloodVolumeAlarm(float* currentBlood, float* initialBlood, float* MinBlood, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.CheckBloodVolumeAlarm");

	UBodyCondition_C_CheckBloodVolumeAlarm_Params params;
	params.currentBlood = currentBlood;
	params.initialBlood = initialBlood;
	params.MinBlood = MinBlood;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function BodyCondition.BodyCondition_C.CheckTemperatureAlarm
// (Native, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         temperatureDeviation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Temperature                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBodyCondition_C::CheckTemperatureAlarm(float* temperatureDeviation, float* Temperature, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.CheckTemperatureAlarm");

	UBodyCondition_C_CheckTemperatureAlarm_Params params;
	params.temperatureDeviation = temperatureDeviation;
	params.Temperature = Temperature;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function BodyCondition.BodyCondition_C.CheckTeethNumberAlarm
// (NetReliable, NetRequest, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         Age                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TeethNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBodyCondition_C::STATIC_CheckTeethNumberAlarm(float* Age, float* TeethNumber, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.CheckTeethNumberAlarm");

	UBodyCondition_C_CheckTeethNumberAlarm_Params params;
	params.Age = Age;
	params.TeethNumber = TeethNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function BodyCondition.BodyCondition_C.CheckBFPAlarm
// (Native, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         bodyFatPercentage              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         bodyFatAlarmThreshold          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBodyCondition_C::STATIC_CheckBFPAlarm(float* bodyFatPercentage, float* bodyFatAlarmThreshold, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.CheckBFPAlarm");

	UBodyCondition_C_CheckBFPAlarm_Params params;
	params.bodyFatPercentage = bodyFatPercentage;
	params.bodyFatAlarmThreshold = bodyFatAlarmThreshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function BodyCondition.BodyCondition_C.Init
// (Net, NetReliable, Exec, Native, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UBodyCondition_C::STATIC_Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.Init");

	UBodyCondition_C_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.SetMeasurementUnits
// (Net, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)

void UBodyCondition_C::STATIC_SetMeasurementUnits()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.SetMeasurementUnits");

	UBodyCondition_C_SetMeasurementUnits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.UpdateParameterLines
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)

void UBodyCondition_C::STATIC_UpdateParameterLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.UpdateParameterLines");

	UBodyCondition_C_UpdateParameterLines_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.GetTitleText
// (Net, NetReliable, Native, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBodyCondition_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.GetTitleText");

	UBodyCondition_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BodyCondition.BodyCondition_C.GetDefaultTitle
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void UBodyCondition_C::STATIC_GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.GetDefaultTitle");

	UBodyCondition_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function BodyCondition.BodyCondition_C.SelectCustomColor
// (Net, NetReliable, Native, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBodyCondition_C::STATIC_SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.SelectCustomColor");

	UBodyCondition_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function BodyCondition.BodyCondition_C.OnMinimize
// (NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBodyCondition_C::STATIC_OnMinimize(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.OnMinimize");

	UBodyCondition_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.Construct
// (Exec, Event, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UBodyCondition_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.Construct");

	UBodyCondition_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.OnPrisonerSet
// (Net, NetReliable, NetRequest, Event, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UBodyCondition_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.OnPrisonerSet");

	UBodyCondition_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.UpdateContent
// (NetReliable, NetRequest, Event, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UBodyCondition_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.UpdateContent");

	UBodyCondition_C_UpdateContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.ShouldActivateAlarm
// (Net, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UBodyCondition_C::STATIC_ShouldActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.ShouldActivateAlarm");

	UBodyCondition_C_ShouldActivateAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.ShouldDeactivateAlarm
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UBodyCondition_C::STATIC_ShouldDeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.ShouldDeactivateAlarm");

	UBodyCondition_C_ShouldDeactivateAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.ShouldActivateBFPAlarm
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UBodyCondition_C::STATIC_ShouldActivateBFPAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.ShouldActivateBFPAlarm");

	UBodyCondition_C_ShouldActivateBFPAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.ExecuteUbergraph_BodyCondition
// (NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBodyCondition_C::STATIC_ExecuteUbergraph_BodyCondition(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.ExecuteUbergraph_BodyCondition");

	UBodyCondition_C_ExecuteUbergraph_BodyCondition_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.AlarmOffBodyConditionEventDispatcher__DelegateSignature
// ()

void UBodyCondition_C::AlarmOffBodyConditionEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.AlarmOffBodyConditionEventDispatcher__DelegateSignature");

	UBodyCondition_C_AlarmOffBodyConditionEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BodyCondition.BodyCondition_C.AlarmOnBodyConditionEventDispatcher__DelegateSignature
// ()

void UBodyCondition_C::AlarmOnBodyConditionEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BodyCondition.BodyCondition_C.AlarmOnBodyConditionEventDispatcher__DelegateSignature");

	UBodyCondition_C_AlarmOnBodyConditionEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

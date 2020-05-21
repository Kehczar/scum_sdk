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

// Function VitalStatsRespiration.VitalStatsRespiration_C.DisableAlarm
// (NetReliable, NetRequest, Native, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UVitalStatsRespiration_C::DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.DisableAlarm");

	UVitalStatsRespiration_C_DisableAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.EnableAlarm
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UVitalStatsRespiration_C::STATIC_EnableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.EnableAlarm");

	UVitalStatsRespiration_C_EnableAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.CheckAlarm
// (Net, Event, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UVitalStatsRespiration_C::CheckAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.CheckAlarm");

	UVitalStatsRespiration_C_CheckAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.GetRespiratoryRateInt
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int                            respiratoryRate                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalStatsRespiration_C::STATIC_GetRespiratoryRateInt(int* respiratoryRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.GetRespiratoryRateInt");

	UVitalStatsRespiration_C_GetRespiratoryRateInt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (respiratoryRate != nullptr)
		*respiratoryRate = params.respiratoryRate;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.ActivateNormalColor
// (NetRequest, Event, NetResponse, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UVitalStatsRespiration_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.ActivateNormalColor");

	UVitalStatsRespiration_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.ActivateAlarmColor
// (Net, NetReliable, Exec, Native, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UVitalStatsRespiration_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.ActivateAlarmColor");

	UVitalStatsRespiration_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.GetBreathRate
// (Net, NetReliable, NetRequest, Event, NetResponse, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStatsRespiration_C::GetBreathRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.GetBreathRate");

	UVitalStatsRespiration_C_GetBreathRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.SetTextColor
// (Net, NetRequest, Exec, Event, NetResponse, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsRespiration_C::SetTextColor(struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.SetTextColor");

	UVitalStatsRespiration_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.Construct
// (Net, Native, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UVitalStatsRespiration_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.Construct");

	UVitalStatsRespiration_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.Tick
// (NetReliable, NetRequest, Exec, Static, NetMulticast, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsRespiration_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.Tick");

	UVitalStatsRespiration_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsRespiration.VitalStatsRespiration_C.ExecuteUbergraph_VitalStatsRespiration
// (NetRequest, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsRespiration_C::ExecuteUbergraph_VitalStatsRespiration(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsRespiration.VitalStatsRespiration_C.ExecuteUbergraph_VitalStatsRespiration");

	UVitalStatsRespiration_C_ExecuteUbergraph_VitalStatsRespiration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

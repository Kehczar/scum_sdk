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

// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.AlarmControl
// (Net, NetReliable, NetRequest, Native, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           alarmCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsBloodPressure_C::AlarmControl(int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.AlarmControl");

	UVitalStatsBloodPressure_C_AlarmControl_Params params;
	params.alarmCode = alarmCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.DeactivateAlarm
// (Native, Event, NetResponse, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UVitalStatsBloodPressure_C::DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.DeactivateAlarm");

	UVitalStatsBloodPressure_C_DeactivateAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.ActivateAlarm
// (Net, NetRequest, Exec, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UVitalStatsBloodPressure_C::ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.ActivateAlarm");

	UVitalStatsBloodPressure_C_ActivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.CheckBloodPressureAlarm
// (NetReliable, Exec, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           systolicPressure               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           diastolicPressure              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalStatsBloodPressure_C::CheckBloodPressureAlarm(int* systolicPressure, int* diastolicPressure, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.CheckBloodPressureAlarm");

	UVitalStatsBloodPressure_C_CheckBloodPressureAlarm_Params params;
	params.systolicPressure = systolicPressure;
	params.diastolicPressure = diastolicPressure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.GetBloodPressure
// (Net, Exec, Delegate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStatsBloodPressure_C::GetBloodPressure()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.GetBloodPressure");

	UVitalStatsBloodPressure_C_GetBloodPressure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.Construct
// (NetRequest, Native, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UVitalStatsBloodPressure_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.Construct");

	UVitalStatsBloodPressure_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.UpdateContent
// (Net, NetRequest, Native, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UVitalStatsBloodPressure_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.UpdateContent");

	UVitalStatsBloodPressure_C_UpdateContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.Tick
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsBloodPressure_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.Tick");

	UVitalStatsBloodPressure_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.ExecuteUbergraph_VitalStatsBloodPressure
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsBloodPressure_C::STATIC_ExecuteUbergraph_VitalStatsBloodPressure(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.ExecuteUbergraph_VitalStatsBloodPressure");

	UVitalStatsBloodPressure_C_ExecuteUbergraph_VitalStatsBloodPressure_Params params;
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

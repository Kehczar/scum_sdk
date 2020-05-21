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

// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.AlarmControl
// (NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           alarmCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URespiratoryRateMonitor_C::STATIC_AlarmControl(int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.AlarmControl");

	URespiratoryRateMonitor_C_AlarmControl_Params params;
	params.alarmCode = alarmCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.DeactivateAlarm
// (Net, NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void URespiratoryRateMonitor_C::STATIC_DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.DeactivateAlarm");

	URespiratoryRateMonitor_C_DeactivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ActivateAlarm
// (Net, NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void URespiratoryRateMonitor_C::STATIC_ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ActivateAlarm");

	URespiratoryRateMonitor_C_ActivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.CheckRespiratoryRateAlarm
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           respiratoryRate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URespiratoryRateMonitor_C::STATIC_CheckRespiratoryRateAlarm(int* respiratoryRate, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.CheckRespiratoryRateAlarm");

	URespiratoryRateMonitor_C_CheckRespiratoryRateAlarm_Params params;
	params.respiratoryRate = respiratoryRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.SetPrisonerAndLifeComponentToMonitor
// (NetRequest, Native, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class APrisoner**              prisonerToSet                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URespiratoryRateMonitor_C::STATIC_SetPrisonerAndLifeComponentToMonitor(class APrisoner** prisonerToSet, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.SetPrisonerAndLifeComponentToMonitor");

	URespiratoryRateMonitor_C_SetPrisonerAndLifeComponentToMonitor_Params params;
	params.prisonerToSet = prisonerToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ProvideRespiratoryRateExtremes
// (Net, Native, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   respiratoryRateExtremes        (Parm, OutParm)

void URespiratoryRateMonitor_C::STATIC_ProvideRespiratoryRateExtremes(struct FText* respiratoryRateExtremes)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ProvideRespiratoryRateExtremes");

	URespiratoryRateMonitor_C_ProvideRespiratoryRateExtremes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (respiratoryRateExtremes != nullptr)
		*respiratoryRateExtremes = params.respiratoryRateExtremes;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.Construct
// (Net, Exec, Native, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void URespiratoryRateMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.Construct");

	URespiratoryRateMonitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.Tick
// (Net, NetRequest, Native, Event, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URespiratoryRateMonitor_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.Tick");

	URespiratoryRateMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ExecuteUbergraph_RespiratoryRateMonitor
// (Native, Event, NetResponse, NetMulticast, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URespiratoryRateMonitor_C::ExecuteUbergraph_RespiratoryRateMonitor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ExecuteUbergraph_RespiratoryRateMonitor");

	URespiratoryRateMonitor_C_ExecuteUbergraph_RespiratoryRateMonitor_Params params;
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

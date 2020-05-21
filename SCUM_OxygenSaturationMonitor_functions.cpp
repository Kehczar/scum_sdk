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

// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.AlarmControl
// (Exec, Native, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           alarmCode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOxygenSaturationMonitor_C::AlarmControl(int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.AlarmControl");

	UOxygenSaturationMonitor_C_AlarmControl_Params params;
	params.alarmCode = alarmCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.DeactivateAlarm
// (Net, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UOxygenSaturationMonitor_C::STATIC_DeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.DeactivateAlarm");

	UOxygenSaturationMonitor_C_DeactivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ActivateAlarm
// (NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UOxygenSaturationMonitor_C::STATIC_ActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ActivateAlarm");

	UOxygenSaturationMonitor_C_ActivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.CheckBloodOxygenationAlarm
// (Event, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         oxygenationLevel               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOxygenSaturationMonitor_C::STATIC_CheckBloodOxygenationAlarm(float* oxygenationLevel, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.CheckBloodOxygenationAlarm");

	UOxygenSaturationMonitor_C_CheckBloodOxygenationAlarm_Params params;
	params.oxygenationLevel = oxygenationLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.SetPrisonerAndLifeComponentToMonitor
// (Net, NetRequest, Exec, Native, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class APrisoner**              prisonerToSet                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOxygenSaturationMonitor_C::STATIC_SetPrisonerAndLifeComponentToMonitor(class APrisoner** prisonerToSet, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.SetPrisonerAndLifeComponentToMonitor");

	UOxygenSaturationMonitor_C_SetPrisonerAndLifeComponentToMonitor_Params params;
	params.prisonerToSet = prisonerToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ProvideOxygenSaturationExtremes
// (NetReliable, Exec, Native, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   OxygenSaturationExtremes       (Parm, OutParm)

void UOxygenSaturationMonitor_C::STATIC_ProvideOxygenSaturationExtremes(struct FText* OxygenSaturationExtremes)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ProvideOxygenSaturationExtremes");

	UOxygenSaturationMonitor_C_ProvideOxygenSaturationExtremes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OxygenSaturationExtremes != nullptr)
		*OxygenSaturationExtremes = params.OxygenSaturationExtremes;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.GetHeartRateBPM
// (Net, NetReliable, Event, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOxygenSaturationMonitor_C::STATIC_GetHeartRateBPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.GetHeartRateBPM");

	UOxygenSaturationMonitor_C_GetHeartRateBPM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.Construct
// (Net, NetReliable, Exec, Native, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UOxygenSaturationMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.Construct");

	UOxygenSaturationMonitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.Tick
// (Exec, Native, Event, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOxygenSaturationMonitor_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.Tick");

	UOxygenSaturationMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.AlarmOnWindowContent
// (NetReliable, NetRequest, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UOxygenSaturationMonitor_C::STATIC_AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.AlarmOnWindowContent");

	UOxygenSaturationMonitor_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ExecuteUbergraph_OxygenSaturationMonitor
// (Net, Delegate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOxygenSaturationMonitor_C::ExecuteUbergraph_OxygenSaturationMonitor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ExecuteUbergraph_OxygenSaturationMonitor");

	UOxygenSaturationMonitor_C_ExecuteUbergraph_OxygenSaturationMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

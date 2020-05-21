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

// Function VitalsMonitor.VitalsMonitor_C.shouldAlarmBeOn
// (Net, Exec, Event, NetResponse, NetMulticast, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalsMonitor_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.shouldAlarmBeOn");

	UVitalsMonitor_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function VitalsMonitor.VitalsMonitor_C.Init
// (NetRequest, Exec, Event, Static, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UVitalsMonitor_C::STATIC_Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.Init");

	UVitalsMonitor_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalsMonitor.VitalsMonitor_C.SetPrisonerAndLifeComponentToMonitor
// (Exec, Native, Event, NetResponse, NetMulticast, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalsMonitor_C::SetPrisonerAndLifeComponentToMonitor(class APrisoner** Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.SetPrisonerAndLifeComponentToMonitor");

	UVitalsMonitor_C_SetPrisonerAndLifeComponentToMonitor_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function VitalsMonitor.VitalsMonitor_C.GetHeartRateBPM
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalsMonitor_C::GetHeartRateBPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.GetHeartRateBPM");

	UVitalsMonitor_C_GetHeartRateBPM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalsMonitor.VitalsMonitor_C.Construct
// (NetReliable, NetRequest, Exec, Native, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UVitalsMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.Construct");

	UVitalsMonitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalsMonitor.VitalsMonitor_C.Tick
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalsMonitor_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.Tick");

	UVitalsMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalsMonitor.VitalsMonitor_C.AlarmOnWindowContent
// (Net, NetReliable, NetRequest, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UVitalsMonitor_C::STATIC_AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.AlarmOnWindowContent");

	UVitalsMonitor_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalsMonitor.VitalsMonitor_C.AlarmOffWindowContent
// (Exec, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UVitalsMonitor_C::STATIC_AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.AlarmOffWindowContent");

	UVitalsMonitor_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalsMonitor.VitalsMonitor_C.ExecuteUbergraph_VitalsMonitor
// (Net, NetReliable, NetResponse, NetMulticast, MulticastDelegate, Public, HasOutParms)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalsMonitor_C::ExecuteUbergraph_VitalsMonitor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalsMonitor.VitalsMonitor_C.ExecuteUbergraph_VitalsMonitor");

	UVitalsMonitor_C_ExecuteUbergraph_VitalsMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

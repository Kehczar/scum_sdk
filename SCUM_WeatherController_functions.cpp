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

// Function WeatherController.WeatherController_C.RecaptureSkyProbe
// (NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Protected, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void AWeatherController_C::STATIC_RecaptureSkyProbe()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.RecaptureSkyProbe");

	AWeatherController_C_RecaptureSkyProbe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.LerpFactors
// (Net, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)

void AWeatherController_C::STATIC_LerpFactors()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.LerpFactors");

	AWeatherController_C_LerpFactors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.UpdateSkyParameters
// (Exec, Public, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, NetValidate)

void AWeatherController_C::UpdateSkyParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.UpdateSkyParameters");

	AWeatherController_C_UpdateSkyParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.sunCompute
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeatherController_C::STATIC_sunCompute()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.sunCompute");

	AWeatherController_C_sunCompute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.UserConstructionScript
// (Net, NetReliable, Exec, Native, Event, MulticastDelegate, Public, NetServer, DLLImport, BlueprintEvent)

void AWeatherController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.UserConstructionScript");

	AWeatherController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.NetworkSyncDayTime
// (NetReliable, NetRequest, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void AWeatherController_C::NetworkSyncDayTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.NetworkSyncDayTime");

	AWeatherController_C_NetworkSyncDayTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.StartWeatherTransition
// (Net, NetRequest, Native, Event, Static, MulticastDelegate, Public, NetServer, DLLImport, BlueprintEvent)
// Parameters:
// float*                         newStormIntensity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TransitionTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeatherController_C::STATIC_StartWeatherTransition(float* newStormIntensity, float* TransitionTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.StartWeatherTransition");

	AWeatherController_C_StartWeatherTransition_Params params;
	params.newStormIntensity = newStormIntensity;
	params.TransitionTime = TransitionTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.ReceiveTick
// (Net, NetRequest, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeatherController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.ReceiveTick");

	AWeatherController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.ReceiveBeginPlay
// (Exec, Native, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void AWeatherController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.ReceiveBeginPlay");

	AWeatherController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.Recapture
// (Net, NetReliable, NetRequest, Native, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void AWeatherController_C::Recapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.Recapture");

	AWeatherController_C_Recapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.Event_SetWindDirection
// (Net, Exec, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D*              Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeatherController_C::Event_SetWindDirection(struct FVector2D* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.Event_SetWindDirection");

	AWeatherController_C_Event_SetWindDirection_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.Event_SetWindSpeed
// (NetReliable, Exec, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeatherController_C::Event_SetWindSpeed(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.Event_SetWindSpeed");

	AWeatherController_C_Event_SetWindSpeed_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.ChangeWindDir
// (Net, Exec, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void AWeatherController_C::ChangeWindDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.ChangeWindDir");

	AWeatherController_C_ChangeWindDir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.UpdateWeatherVisuals
// (Exec, Event, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void AWeatherController_C::UpdateWeatherVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.UpdateWeatherVisuals");

	AWeatherController_C_UpdateWeatherVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeatherController.WeatherController_C.ExecuteUbergraph_WeatherController
// (Net, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeatherController_C::STATIC_ExecuteUbergraph_WeatherController(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeatherController.WeatherController_C.ExecuteUbergraph_WeatherController");

	AWeatherController_C_ExecuteUbergraph_WeatherController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

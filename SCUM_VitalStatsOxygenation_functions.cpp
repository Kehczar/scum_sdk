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

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.DisableAlarm
// (Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UVitalStatsOxygenation_C::STATIC_DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.DisableAlarm");

	UVitalStatsOxygenation_C_DisableAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.EnableAlarm
// (NetReliable, NetRequest, Native, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UVitalStatsOxygenation_C::EnableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.EnableAlarm");

	UVitalStatsOxygenation_C_EnableAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.CheckAlarm
// (Net, NetRequest, Native, NetResponse, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UVitalStatsOxygenation_C::CheckAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.CheckAlarm");

	UVitalStatsOxygenation_C_CheckAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.ActivateAlarmColor
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UVitalStatsOxygenation_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.ActivateAlarmColor");

	UVitalStatsOxygenation_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.ActivateNormalColor
// (Exec, Native, NetResponse, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UVitalStatsOxygenation_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.ActivateNormalColor");

	UVitalStatsOxygenation_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.SetBackgroundColor
// (NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor*           colorToSet                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility*              Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsOxygenation_C::STATIC_SetBackgroundColor(struct FLinearColor* colorToSet, ESlateVisibility* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.SetBackgroundColor");

	UVitalStatsOxygenation_C_SetBackgroundColor_Params params;
	params.colorToSet = colorToSet;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetOxygenSaturationLevelFloat
// (NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float                          oxygenSaturationLevel          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitalStatsOxygenation_C::STATIC_GetOxygenSaturationLevelFloat(float* oxygenSaturationLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetOxygenSaturationLevelFloat");

	UVitalStatsOxygenation_C_GetOxygenSaturationLevelFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (oxygenSaturationLevel != nullptr)
		*oxygenSaturationLevel = params.oxygenSaturationLevel;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetOxygenationLevel
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStatsOxygenation_C::GetOxygenationLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetOxygenationLevel");

	UVitalStatsOxygenation_C_GetOxygenationLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.SetTextColor
// (NetRequest, Event, NetResponse, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsOxygenation_C::SetTextColor(struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.SetTextColor");

	UVitalStatsOxygenation_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHeartRateBPM
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStatsOxygenation_C::GetHeartRateBPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHeartRateBPM");

	UVitalStatsOxygenation_C_GetHeartRateBPM_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHealthPercentText
// (Exec, Native, NetResponse, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStatsOxygenation_C::GetHealthPercentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHealthPercentText");

	UVitalStatsOxygenation_C_GetHealthPercentText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHealthPercentBar
// (NetReliable, Native, NetResponse, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVitalStatsOxygenation_C::GetHealthPercentBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHealthPercentBar");

	UVitalStatsOxygenation_C_GetHealthPercentBar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetStaminaPercentText
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitalStatsOxygenation_C::GetStaminaPercentText()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetStaminaPercentText");

	UVitalStatsOxygenation_C_GetStaminaPercentText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetStaminaPercentBar
// (NetRequest, Exec, NetResponse, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVitalStatsOxygenation_C::GetStaminaPercentBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetStaminaPercentBar");

	UVitalStatsOxygenation_C_GetStaminaPercentBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.Construct
// (Net, NetReliable, Native, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UVitalStatsOxygenation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.Construct");

	UVitalStatsOxygenation_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.Tick
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsOxygenation_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.Tick");

	UVitalStatsOxygenation_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VitalStatsOxygenation.VitalStatsOxygenation_C.ExecuteUbergraph_VitalStatsOxygenation
// (Net, NetReliable, Native, Event, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitalStatsOxygenation_C::ExecuteUbergraph_VitalStatsOxygenation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VitalStatsOxygenation.VitalStatsOxygenation_C.ExecuteUbergraph_VitalStatsOxygenation");

	UVitalStatsOxygenation_C_ExecuteUbergraph_VitalStatsOxygenation_Params params;
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

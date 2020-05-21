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

// Function UI_CircularParameter.UI_CircularParameter_C.GetPercentageSecond
// (NetReliable, NetRequest, Native, NetResponse, Static, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float                          percentageSecond               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::STATIC_GetPercentageSecond(float* percentageSecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.GetPercentageSecond");

	UUI_CircularParameter_C_GetPercentageSecond_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (percentageSecond != nullptr)
		*percentageSecond = params.percentageSecond;
}


// Function UI_CircularParameter.UI_CircularParameter_C.DisableAlarm
// (Native, NetResponse, Static, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CircularParameter_C::STATIC_DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.DisableAlarm");

	UUI_CircularParameter_C_DisableAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.EnableAlarm
// (NetReliable, Native, NetResponse, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool*                          above                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::EnableAlarm(bool* above)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.EnableAlarm");

	UUI_CircularParameter_C_EnableAlarm_Params params;
	params.above = above;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.CheckAlarm
// (Net, NetResponse, Static, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CircularParameter_C::STATIC_CheckAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.CheckAlarm");

	UUI_CircularParameter_C_CheckAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetDescriptionText
// (Net, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText*                  Description                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CircularParameter_C::STATIC_SetDescriptionText(struct FText* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetDescriptionText");

	UUI_CircularParameter_C_SetDescriptionText_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetMeasurementUnit
// (Net, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText*                  unit                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CircularParameter_C::STATIC_SetMeasurementUnit(struct FText* unit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetMeasurementUnit");

	UUI_CircularParameter_C_SetMeasurementUnit_Params params;
	params.unit = unit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.GetMaxValue
// (Net, NetReliable, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_CircularParameter_C::STATIC_GetMaxValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.GetMaxValue");

	UUI_CircularParameter_C_GetMaxValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CircularParameter.UI_CircularParameter_C.GetCurrentValue
// (Exec, Native, Event, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_CircularParameter_C::GetCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.GetCurrentValue");

	UUI_CircularParameter_C_GetCurrentValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CircularParameter.UI_CircularParameter_C.GetPercentage
// (NetRequest, Exec, Native, NetResponse, Static, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUI_CircularParameter_C::STATIC_GetPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.GetPercentage");

	UUI_CircularParameter_C_GetPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CircularParameter.UI_CircularParameter_C.Tick
// (Net, NetRequest, Native, Event, Static, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.Tick");

	UUI_CircularParameter_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.Construct
// (Net, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CircularParameter_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.Construct");

	UUI_CircularParameter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetMaxValue
// (NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::STATIC_SetMaxValue(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetMaxValue");

	UUI_CircularParameter_C_SetMaxValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetCurrentValue
// (NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::STATIC_SetCurrentValue(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetCurrentValue");

	UUI_CircularParameter_C_SetCurrentValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.OnMouseEnter
// (NetReliable, Event, NetResponse, Static, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CircularParameter_C::STATIC_OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.OnMouseEnter");

	UUI_CircularParameter_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.OnSynchronizeProperties
// (Net, NetReliable, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CircularParameter_C::STATIC_OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.OnSynchronizeProperties");

	UUI_CircularParameter_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.OnMouseLeave
// (NetReliable, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CircularParameter_C::STATIC_OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.OnMouseLeave");

	UUI_CircularParameter_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.SetCurrentValueSecond
// (NetReliable, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::STATIC_SetCurrentValueSecond(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.SetCurrentValueSecond");

	UUI_CircularParameter_C_SetCurrentValueSecond_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CircularParameter.UI_CircularParameter_C.ExecuteUbergraph_UI_CircularParameter
// (Net, NetReliable, NetRequest, Exec, Event, NetMulticast, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CircularParameter_C::ExecuteUbergraph_UI_CircularParameter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CircularParameter.UI_CircularParameter_C.ExecuteUbergraph_UI_CircularParameter");

	UUI_CircularParameter_C_ExecuteUbergraph_UI_CircularParameter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

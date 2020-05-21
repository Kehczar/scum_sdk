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

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetDecimalPlacesForValue
// (NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           decimalPlacesToSet             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_SetDecimalPlacesForValue(int* decimalPlacesToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetDecimalPlacesForValue");

	UFullParameterProgressBarLine_C_SetDecimalPlacesForValue_Params params;
	params.decimalPlacesToSet = decimalPlacesToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetDecimalPlaces
// (Net, NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           decimalPlacesToSet             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_SetDecimalPlaces(int* decimalPlacesToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetDecimalPlaces");

	UFullParameterProgressBarLine_C_SetDecimalPlaces_Params params;
	params.decimalPlacesToSet = decimalPlacesToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AdjustHorizontalFillRules
// (Native, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         fillColumn0                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         fillColumn1                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         fillColumn2                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::AdjustHorizontalFillRules(float* fillColumn0, float* fillColumn1, float* fillColumn2)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AdjustHorizontalFillRules");

	UFullParameterProgressBarLine_C_AdjustHorizontalFillRules_Params params;
	params.fillColumn0 = fillColumn0;
	params.fillColumn1 = fillColumn1;
	params.fillColumn2 = fillColumn2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetPercentageText
// (NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  percentText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::STATIC_SetPercentageText(struct FText* percentText)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetPercentageText");

	UFullParameterProgressBarLine_C_SetPercentageText_Params params;
	params.percentText = percentText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdatePercentageText
// (Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UFullParameterProgressBarLine_C::UpdatePercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdatePercentageText");

	UFullParameterProgressBarLine_C_UpdatePercentageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetCurrentValueText
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  valueStr                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::STATIC_SetCurrentValueText(struct FText* valueStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetCurrentValueText");

	UFullParameterProgressBarLine_C_SetCurrentValueText_Params params;
	params.valueStr = valueStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateCurrentValueText
// (NetReliable, NetRequest, Native, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UFullParameterProgressBarLine_C::UpdateCurrentValueText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateCurrentValueText");

	UFullParameterProgressBarLine_C_UpdateCurrentValueText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateDefaultCurrentValue
// ()

void UFullParameterProgressBarLine_C::UpdateDefaultCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateDefaultCurrentValue");

	UFullParameterProgressBarLine_C_UpdateDefaultCurrentValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetMeasurementUnit
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  measurementUnit                (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::STATIC_SetMeasurementUnit(struct FText* measurementUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetMeasurementUnit");

	UFullParameterProgressBarLine_C_SetMeasurementUnit_Params params;
	params.measurementUnit = measurementUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetMeasurementUnit
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   measurementUnit                (Parm, OutParm)

void UFullParameterProgressBarLine_C::STATIC_GetMeasurementUnit(struct FText* measurementUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetMeasurementUnit");

	UFullParameterProgressBarLine_C_GetMeasurementUnit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (measurementUnit != nullptr)
		*measurementUnit = params.measurementUnit;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.IsMeasurementUnitDefault
// (Net, NetRequest, Exec, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FString*                MUString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFullParameterProgressBarLine_C::IsMeasurementUnitDefault(struct FString* MUString)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.IsMeasurementUnitDefault");

	UFullParameterProgressBarLine_C_IsMeasurementUnitDefault_Params params;
	params.MUString = MUString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateRDAValue
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_UpdateRDAValue(float* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateRDAValue");

	UFullParameterProgressBarLine_C_UpdateRDAValue_Params params;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetRDAText
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  valueStr                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::STATIC_SetRDAText(struct FText* valueStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetRDAText");

	UFullParameterProgressBarLine_C_SetRDAText_Params params;
	params.valueStr = valueStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateRDAText
// (Net, Exec, Native, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UFullParameterProgressBarLine_C::UpdateRDAText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateRDAText");

	UFullParameterProgressBarLine_C_UpdateRDAText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetRDAValue
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_SetRDAValue(float* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetRDAValue");

	UFullParameterProgressBarLine_C_SetRDAValue_Params params;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateCurrentValue
// (Net, NetReliable, NetRequest, Exec, Native, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UFullParameterProgressBarLine_C::UpdateCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateCurrentValue");

	UFullParameterProgressBarLine_C_UpdateCurrentValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetCurrentValue
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_SetCurrentValue(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetCurrentValue");

	UFullParameterProgressBarLine_C_SetCurrentValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ActivateNormalColor
// (Net, Native, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UFullParameterProgressBarLine_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ActivateNormalColor");

	UFullParameterProgressBarLine_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ActivateAlarmColor
// (Net, NetRequest, Exec, Native, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UFullParameterProgressBarLine_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ActivateAlarmColor");

	UFullParameterProgressBarLine_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetPercentageToShowText
// (Net, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UFullParameterProgressBarLine_C::GetPercentageToShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetPercentageToShowText");

	UFullParameterProgressBarLine_C_GetPercentageToShowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateNutrientTextValues
// ()

void UFullParameterProgressBarLine_C::UpdateNutrientTextValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateNutrientTextValues");

	UFullParameterProgressBarLine_C_UpdateNutrientTextValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetAlarmColor
// (NetRequest, Native, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::SetAlarmColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetAlarmColor");

	UFullParameterProgressBarLine_C_SetAlarmColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetCurrentValueTextBlock
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_GetCurrentValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetCurrentValueTextBlock");

	UFullParameterProgressBarLine_C_GetCurrentValueTextBlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfMaxValue
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::STATIC_SetColorOfMaxValue(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfMaxValue");

	UFullParameterProgressBarLine_C_SetColorOfMaxValue_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfValue
// (Net, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::STATIC_SetColorOfValue(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfValue");

	UFullParameterProgressBarLine_C_SetColorOfValue_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfParameterName
// (Net, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::STATIC_SetColorOfParameterName(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfParameterName");

	UFullParameterProgressBarLine_C_SetColorOfParameterName_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColor
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_SetColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColor");

	UFullParameterProgressBarLine_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetRDAValueTextBlock
// (Net, NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_GetRDAValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetRDAValueTextBlock");

	UFullParameterProgressBarLine_C_GetRDAValueTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetParameterNameTextBlock
// (NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_GetParameterNameTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetParameterNameTextBlock");

	UFullParameterProgressBarLine_C_GetParameterNameTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetParameterName
// (Net, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ParameterName                  (Parm, OutParm)

void UFullParameterProgressBarLine_C::STATIC_GetParameterName(struct FText* ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetParameterName");

	UFullParameterProgressBarLine_C_GetParameterName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParameterName != nullptr)
		*ParameterName = params.ParameterName;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetParameterName
// (Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ParameterName                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullParameterProgressBarLine_C::STATIC_SetParameterName(struct FText* ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetParameterName");

	UFullParameterProgressBarLine_C_SetParameterName_Params params;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnMouseButtonDownOnMinimizeParameterLine
// (Net, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFullParameterProgressBarLine_C::STATIC_OnMouseButtonDownOnMinimizeParameterLine(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnMouseButtonDownOnMinimizeParameterLine");

	UFullParameterProgressBarLine_C_OnMouseButtonDownOnMinimizeParameterLine_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnMinimize
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_OnMinimize(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnMinimize");

	UFullParameterProgressBarLine_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.Construct
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.Construct");

	UFullParameterProgressBarLine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.Tick
// (Net, NetReliable, NetRequest, Exec, Native, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.Tick");

	UFullParameterProgressBarLine_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnSynchronizeProperties
// (Net, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UFullParameterProgressBarLine_C::STATIC_OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnSynchronizeProperties");

	UFullParameterProgressBarLine_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AlarmSwitchOn
// (NetRequest, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UFullParameterProgressBarLine_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AlarmSwitchOn");

	UFullParameterProgressBarLine_C_AlarmSwitchOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AlarmSwitchOff
// (Net, NetRequest, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UFullParameterProgressBarLine_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AlarmSwitchOff");

	UFullParameterProgressBarLine_C_AlarmSwitchOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnPercentageChanged
// (Net, NetReliable, Exec, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UFullParameterProgressBarLine_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnPercentageChanged");

	UFullParameterProgressBarLine_C_OnPercentageChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ExecuteUbergraph_FullParameterProgressBarLine
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullParameterProgressBarLine_C::STATIC_ExecuteUbergraph_FullParameterProgressBarLine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ExecuteUbergraph_FullParameterProgressBarLine");

	UFullParameterProgressBarLine_C_ExecuteUbergraph_FullParameterProgressBarLine_Params params;
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

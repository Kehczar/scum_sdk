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

// Function RDANutritionLine.RDANutritionLine_C.SetValuesColor
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void URDANutritionLine_C::STATIC_SetValuesColor(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetValuesColor");

	URDANutritionLine_C_SetValuesColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.SetPercentageText
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  percentText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void URDANutritionLine_C::STATIC_SetPercentageText(struct FText* percentText)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetPercentageText");

	URDANutritionLine_C_SetPercentageText_Params params;
	params.percentText = percentText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.UpdatePercentageText
// (NetReliable, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void URDANutritionLine_C::UpdatePercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.UpdatePercentageText");

	URDANutritionLine_C_UpdatePercentageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.SetCurrentValueText
// (Net, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  valueStr                       (BlueprintVisible, BlueprintReadOnly, Parm)

void URDANutritionLine_C::STATIC_SetCurrentValueText(struct FText* valueStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetCurrentValueText");

	URDANutritionLine_C_SetCurrentValueText_Params params;
	params.valueStr = valueStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.UpdateCurrentValueText
// (Net, Exec, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void URDANutritionLine_C::UpdateCurrentValueText()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.UpdateCurrentValueText");

	URDANutritionLine_C_UpdateCurrentValueText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.UpdateDefaultCurrentValue
// ()

void URDANutritionLine_C::UpdateDefaultCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.UpdateDefaultCurrentValue");

	URDANutritionLine_C_UpdateDefaultCurrentValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.SetMeasurementUnit
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  measurementUnit                (BlueprintVisible, BlueprintReadOnly, Parm)

void URDANutritionLine_C::STATIC_SetMeasurementUnit(struct FText* measurementUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetMeasurementUnit");

	URDANutritionLine_C_SetMeasurementUnit_Params params;
	params.measurementUnit = measurementUnit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.GetMeasurementUnit
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   measurementUnit                (Parm, OutParm)

void URDANutritionLine_C::STATIC_GetMeasurementUnit(struct FText* measurementUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.GetMeasurementUnit");

	URDANutritionLine_C_GetMeasurementUnit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (measurementUnit != nullptr)
		*measurementUnit = params.measurementUnit;
}


// Function RDANutritionLine.RDANutritionLine_C.IsMeasurementUnitDefault
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FString*                MUString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URDANutritionLine_C::STATIC_IsMeasurementUnitDefault(struct FString* MUString)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.IsMeasurementUnitDefault");

	URDANutritionLine_C_IsMeasurementUnitDefault_Params params;
	params.MUString = MUString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RDANutritionLine.RDANutritionLine_C.UpdateRDAValue
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URDANutritionLine_C::STATIC_UpdateRDAValue(float* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.UpdateRDAValue");

	URDANutritionLine_C_UpdateRDAValue_Params params;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.SetRDAText
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  valueStr                       (BlueprintVisible, BlueprintReadOnly, Parm)

void URDANutritionLine_C::STATIC_SetRDAText(struct FText* valueStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetRDAText");

	URDANutritionLine_C_SetRDAText_Params params;
	params.valueStr = valueStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.UpdateRDAText
// (NetReliable, NetRequest, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void URDANutritionLine_C::UpdateRDAText()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.UpdateRDAText");

	URDANutritionLine_C_UpdateRDAText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.SetRDAValue
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URDANutritionLine_C::STATIC_SetRDAValue(float* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetRDAValue");

	URDANutritionLine_C_SetRDAValue_Params params;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.UpdateCurrentValue
// (Net, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void URDANutritionLine_C::UpdateCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.UpdateCurrentValue");

	URDANutritionLine_C_UpdateCurrentValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.SetCurrentValue
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URDANutritionLine_C::STATIC_SetCurrentValue(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetCurrentValue");

	URDANutritionLine_C_SetCurrentValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.ActivateNormalColor
// (NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void URDANutritionLine_C::STATIC_ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.ActivateNormalColor");

	URDANutritionLine_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.ActivateAlarmColor
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)

void URDANutritionLine_C::STATIC_ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.ActivateAlarmColor");

	URDANutritionLine_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.GetPercentageToShowText
// (Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText URDANutritionLine_C::GetPercentageToShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.GetPercentageToShowText");

	URDANutritionLine_C_GetPercentageToShowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RDANutritionLine.RDANutritionLine_C.UpdateNutrientTextValues
// ()

void URDANutritionLine_C::UpdateNutrientTextValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.UpdateNutrientTextValues");

	URDANutritionLine_C_UpdateNutrientTextValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.SetAlarmColor
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URDANutritionLine_C::STATIC_SetAlarmColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetAlarmColor");

	URDANutritionLine_C_SetAlarmColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.GetCurrentValueTextBlock
// (NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URDANutritionLine_C::STATIC_GetCurrentValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.GetCurrentValueTextBlock");

	URDANutritionLine_C_GetCurrentValueTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function RDANutritionLine.RDANutritionLine_C.SetColorOfMaxValue
// (Net, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void URDANutritionLine_C::STATIC_SetColorOfMaxValue(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetColorOfMaxValue");

	URDANutritionLine_C_SetColorOfMaxValue_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.SetColorOfValue
// (Net, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void URDANutritionLine_C::STATIC_SetColorOfValue(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetColorOfValue");

	URDANutritionLine_C_SetColorOfValue_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.SetColorOfParameterName
// (Net, NetReliable, Native, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void URDANutritionLine_C::SetColorOfParameterName(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetColorOfParameterName");

	URDANutritionLine_C_SetColorOfParameterName_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.SetColor
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URDANutritionLine_C::STATIC_SetColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetColor");

	URDANutritionLine_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.GetRDAValueTextBlock
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URDANutritionLine_C::STATIC_GetRDAValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.GetRDAValueTextBlock");

	URDANutritionLine_C_GetRDAValueTextBlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function RDANutritionLine.RDANutritionLine_C.GetParameterNameTextBlock
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URDANutritionLine_C::STATIC_GetParameterNameTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.GetParameterNameTextBlock");

	URDANutritionLine_C_GetParameterNameTextBlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function RDANutritionLine.RDANutritionLine_C.GetParameterName
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ParameterName                  (Parm, OutParm)

void URDANutritionLine_C::STATIC_GetParameterName(struct FText* ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.GetParameterName");

	URDANutritionLine_C_GetParameterName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParameterName != nullptr)
		*ParameterName = params.ParameterName;
}


// Function RDANutritionLine.RDANutritionLine_C.SetParameterName
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ParameterName                  (BlueprintVisible, BlueprintReadOnly, Parm)

void URDANutritionLine_C::STATIC_SetParameterName(struct FText* ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.SetParameterName");

	URDANutritionLine_C_SetParameterName_Params params;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.OnMouseButtonDownOnMinimizeParameterLine
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply URDANutritionLine_C::STATIC_OnMouseButtonDownOnMinimizeParameterLine(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.OnMouseButtonDownOnMinimizeParameterLine");

	URDANutritionLine_C_OnMouseButtonDownOnMinimizeParameterLine_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RDANutritionLine.RDANutritionLine_C.OnMinimize
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URDANutritionLine_C::STATIC_OnMinimize(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.OnMinimize");

	URDANutritionLine_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.Construct
// (Net, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void URDANutritionLine_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.Construct");

	URDANutritionLine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.Tick
// (Net, NetReliable, Exec, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URDANutritionLine_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.Tick");

	URDANutritionLine_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.OnSynchronizeProperties
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void URDANutritionLine_C::STATIC_OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.OnSynchronizeProperties");

	URDANutritionLine_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.AlarmSwitchOn
// (NetReliable, NetRequest, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void URDANutritionLine_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.AlarmSwitchOn");

	URDANutritionLine_C_AlarmSwitchOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.AlarmSwitchOff
// (Net, NetReliable, NetRequest, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void URDANutritionLine_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.AlarmSwitchOff");

	URDANutritionLine_C_AlarmSwitchOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.OnPercentageChanged
// (NetRequest, Exec, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void URDANutritionLine_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.OnPercentageChanged");

	URDANutritionLine_C_OnPercentageChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RDANutritionLine.RDANutritionLine_C.ExecuteUbergraph_RDANutritionLine
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URDANutritionLine_C::STATIC_ExecuteUbergraph_RDANutritionLine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDANutritionLine.RDANutritionLine_C.ExecuteUbergraph_RDANutritionLine");

	URDANutritionLine_C_ExecuteUbergraph_RDANutritionLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

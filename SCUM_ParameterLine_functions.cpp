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

// Function ParameterLine.ParameterLine_C.ActivateCustomAlarmColor
// (Net, NetReliable, NetRequest, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor*           LinearColor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterLine_C::ActivateCustomAlarmColor(struct FLinearColor* LinearColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.ActivateCustomAlarmColor");

	UParameterLine_C_ActivateCustomAlarmColor_Params params;
	params.LinearColor = LinearColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.AlarmControl
// (Net, NetRequest, NetResponse, Static, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           alarmColorCode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterLine_C::STATIC_AlarmControl(int* alarmColorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.AlarmControl");

	UParameterLine_C_AlarmControl_Params params;
	params.alarmColorCode = alarmColorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.ActivateNormalColor
// (NetRequest, Exec, Native, Event, Static, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UParameterLine_C::STATIC_ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.ActivateNormalColor");

	UParameterLine_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.ActivateAlarmColor
// (Net, NetRequest, Exec, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UParameterLine_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.ActivateAlarmColor");

	UParameterLine_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.SetAlarmColor
// (NetReliable, Event, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterLine_C::SetAlarmColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetAlarmColor");

	UParameterLine_C_SetAlarmColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.Update
// (Net, NetRequest, Exec, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText*                  parameterNameToSet             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  parameterValueToSet            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  maxParameterValueToSet         (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterLine_C::Update(struct FText* parameterNameToSet, struct FText* parameterValueToSet, struct FText* maxParameterValueToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.Update");

	UParameterLine_C_Update_Params params;
	params.parameterNameToSet = parameterNameToSet;
	params.parameterValueToSet = parameterValueToSet;
	params.maxParameterValueToSet = maxParameterValueToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.SetValuesColor
// (NetRequest, Exec, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterLine_C::SetValuesColor(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetValuesColor");

	UParameterLine_C_SetValuesColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.SetParameterValueText
// (NetRequest, Exec, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText*                  parameterValueText             (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterLine_C::SetParameterValueText(struct FText* parameterValueText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetParameterValueText");

	UParameterLine_C_SetParameterValueText_Params params;
	params.parameterValueText = parameterValueText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.SetMaxValueText
// (Net, NetReliable, Exec, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText*                  maxValueText                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterLine_C::SetMaxValueText(struct FText* maxValueText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetMaxValueText");

	UParameterLine_C_SetMaxValueText_Params params;
	params.maxValueText = maxValueText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.SetParameterValueSlashText
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           decimalPlaces                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterLine_C::SetParameterValueSlashText(float* Value, int* decimalPlaces)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetParameterValueSlashText");

	UParameterLine_C_SetParameterValueSlashText_Params params;
	params.Value = Value;
	params.decimalPlaces = decimalPlaces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.SetParameterValueTextDecimal
// (Net, NetReliable, Native, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           decimalPlaces                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterLine_C::SetParameterValueTextDecimal(float* Value, int* decimalPlaces)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetParameterValueTextDecimal");

	UParameterLine_C_SetParameterValueTextDecimal_Params params;
	params.Value = Value;
	params.decimalPlaces = decimalPlaces;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.GetValueTextBlock
// (NetReliable, Exec, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UParameterLine_C::GetValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.GetValueTextBlock");

	UParameterLine_C_GetValueTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function ParameterLine.ParameterLine_C.SetColorOfMaxValue
// (Net, Exec, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterLine_C::SetColorOfMaxValue(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetColorOfMaxValue");

	UParameterLine_C_SetColorOfMaxValue_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.SetColorOfValue
// (NetReliable, NetRequest, Native, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterLine_C::SetColorOfValue(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetColorOfValue");

	UParameterLine_C_SetColorOfValue_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.SetColorOfParameterName
// (NetReliable, NetRequest, Native, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterLine_C::SetColorOfParameterName(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetColorOfParameterName");

	UParameterLine_C_SetColorOfParameterName_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.SetColor
// (Net, NetRequest, Native, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterLine_C::SetColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetColor");

	UParameterLine_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.GetMaxValueTextBlock
// (NetRequest, Native, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UParameterLine_C::GetMaxValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.GetMaxValueTextBlock");

	UParameterLine_C_GetMaxValueTextBlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function ParameterLine.ParameterLine_C.GetParameterNameTextBlock
// (Net, NetReliable, Native, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UParameterLine_C::GetParameterNameTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.GetParameterNameTextBlock");

	UParameterLine_C_GetParameterNameTextBlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function ParameterLine.ParameterLine_C.GetParameterNameText
// (NetReliable, Native, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ParameterName                  (Parm, OutParm)

void UParameterLine_C::GetParameterNameText(struct FText* ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.GetParameterNameText");

	UParameterLine_C_GetParameterNameText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParameterName != nullptr)
		*ParameterName = params.ParameterName;
}


// Function ParameterLine.ParameterLine_C.SetParameterName
// (Net, Native, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText*                  ParameterName                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterLine_C::SetParameterName(struct FText* ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.SetParameterName");

	UParameterLine_C_SetParameterName_Params params;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.GetTitleText
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UParameterLine_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.GetTitleText");

	UParameterLine_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ParameterLine.ParameterLine_C.GetDefaultTitle
// (Native, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void UParameterLine_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.GetDefaultTitle");

	UParameterLine_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function ParameterLine.ParameterLine_C.OnMinimize
// (Net, NetReliable, NetRequest, Exec, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterLine_C::OnMinimize(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.OnMinimize");

	UParameterLine_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.Construct
// (Net, NetReliable, NetRequest, Exec, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UParameterLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.Construct");

	UParameterLine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterLine.ParameterLine_C.ExecuteUbergraph_ParameterLine
// (NetReliable, NetRequest, Exec, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterLine_C::ExecuteUbergraph_ParameterLine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterLine.ParameterLine_C.ExecuteUbergraph_ParameterLine");

	UParameterLine_C_ExecuteUbergraph_ParameterLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

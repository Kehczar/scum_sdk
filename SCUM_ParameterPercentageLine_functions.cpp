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

// Function ParameterPercentageLine.ParameterPercentageLine_C.ActivateNormalColor
// (NetReliable, NetRequest, Exec, Event, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UParameterPercentageLine_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.ActivateNormalColor");

	UParameterPercentageLine_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.ActivateAlarmColor
// (Net, NetReliable, Exec, Event, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UParameterPercentageLine_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.ActivateAlarmColor");

	UParameterPercentageLine_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SetAlarmColor
// (Net, NetReliable, NetRequest, Native, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterPercentageLine_C::SetAlarmColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SetAlarmColor");

	UParameterPercentageLine_C_SetAlarmColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.Update
// (NetReliable, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UParameterPercentageLine_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.Update");

	UParameterPercentageLine_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.GetValueTextBlock
// (Net, NetRequest, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UParameterPercentageLine_C::GetValueTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.GetValueTextBlock");

	UParameterPercentageLine_C_GetValueTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SetColorOfValue
// (NetReliable, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterPercentageLine_C::SetColorOfValue(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SetColorOfValue");

	UParameterPercentageLine_C_SetColorOfValue_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SetColorOfParameterName
// (Net, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UParameterPercentageLine_C::SetColorOfParameterName(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SetColorOfParameterName");

	UParameterPercentageLine_C_SetColorOfParameterName_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SetColor
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterPercentageLine_C::STATIC_SetColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SetColor");

	UParameterPercentageLine_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.GetParameterNameTextBlock
// (NetRequest, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*              textBox                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UParameterPercentageLine_C::GetParameterNameTextBlock(class UTextBlock** textBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.GetParameterNameTextBlock");

	UParameterPercentageLine_C_GetParameterNameTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (textBox != nullptr)
		*textBox = params.textBox;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.SelectCustomColor
// (Exec, Event, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UParameterPercentageLine_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.SelectCustomColor");

	UParameterPercentageLine_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.Construct
// (Net, NetReliable, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UParameterPercentageLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.Construct");

	UParameterPercentageLine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.Tick
// (Net, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterPercentageLine_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.Tick");

	UParameterPercentageLine_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.OnPercentageChanged
// (Net, NetRequest, Exec, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UParameterPercentageLine_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.OnPercentageChanged");

	UParameterPercentageLine_C_OnPercentageChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.AlarmSwitchOn
// (Exec, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UParameterPercentageLine_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.AlarmSwitchOn");

	UParameterPercentageLine_C_AlarmSwitchOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.AlarmSwitchOff
// (Net, Exec, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UParameterPercentageLine_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.AlarmSwitchOff");

	UParameterPercentageLine_C_AlarmSwitchOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParameterPercentageLine.ParameterPercentageLine_C.ExecuteUbergraph_ParameterPercentageLine
// (NetReliable, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UParameterPercentageLine_C::ExecuteUbergraph_ParameterPercentageLine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParameterPercentageLine.ParameterPercentageLine_C.ExecuteUbergraph_ParameterPercentageLine");

	UParameterPercentageLine_C_ExecuteUbergraph_ParameterPercentageLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

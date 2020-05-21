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

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShowText
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCircularProgressBarSprites_C::STATIC_GetCurrentPercentageToShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShowText");

	UCircularProgressBarSprites_C_GetCurrentPercentageToShowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShow
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float                          currentPercentageToShow        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::STATIC_GetCurrentPercentageToShow(float* currentPercentageToShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShow");

	UCircularProgressBarSprites_C_GetCurrentPercentageToShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (currentPercentageToShow != nullptr)
		*currentPercentageToShow = params.currentPercentageToShow;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCurrentPercentageToShow
// (Net, NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         percentageToShow               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::STATIC_SetCurrentPercentageToShow(float* percentageToShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCurrentPercentageToShow");

	UCircularProgressBarSprites_C_SetCurrentPercentageToShow_Params params;
	params.percentageToShow = percentageToShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetPercentageText
// (Net, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCircularProgressBarSprites_C::STATIC_GetPercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetPercentageText");

	UCircularProgressBarSprites_C_GetPercentageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextalarmColorC
// (NetRequest, Exec, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UTextBlock**             textWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCircularProgressBarSprites_C::SetTextalarmColorC(class UTextBlock** textWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextalarmColorC");

	UCircularProgressBarSprites_C_SetTextalarmColorC_Params params;
	params.textWidget = textWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextColor
// (Net, NetRequest, Static, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UTextBlock**             textWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::STATIC_SetTextColor(class UTextBlock** textWidget, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextColor");

	UCircularProgressBarSprites_C_SetTextColor_Params params;
	params.textWidget = textWidget;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateNormalColor
// (NetReliable, Native, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UCircularProgressBarSprites_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateNormalColor");

	UCircularProgressBarSprites_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCircularBarColor
// (Net, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor*           circularBarColor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::STATIC_SetCircularBarColor(struct FLinearColor* circularBarColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCircularBarColor");

	UCircularProgressBarSprites_C_SetCircularBarColor_Params params;
	params.circularBarColor = circularBarColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCircularBarColor
// (NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor            circularBarColor               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::STATIC_GetCircularBarColor(struct FLinearColor* circularBarColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCircularBarColor");

	UCircularProgressBarSprites_C_GetCircularBarColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (circularBarColor != nullptr)
		*circularBarColor = params.circularBarColor;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetOuterCircleColor
// (Net, NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor*           outerCircleColor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::STATIC_SetOuterCircleColor(struct FLinearColor* outerCircleColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetOuterCircleColor");

	UCircularProgressBarSprites_C_SetOuterCircleColor_Params params;
	params.outerCircleColor = outerCircleColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetOuterCircleColor
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor            outerCircleColor               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::STATIC_GetOuterCircleColor(struct FLinearColor* outerCircleColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetOuterCircleColor");

	UCircularProgressBarSprites_C_GetOuterCircleColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outerCircleColor != nullptr)
		*outerCircleColor = params.outerCircleColor;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetNormalColor
// (Net, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor            NormalColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::STATIC_GetNormalColor(struct FLinearColor* NormalColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetNormalColor");

	UCircularProgressBarSprites_C_GetNormalColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NormalColor != nullptr)
		*NormalColor = params.NormalColor;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetNormalColor
// (Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor*           NormalColor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::STATIC_SetNormalColor(struct FLinearColor* NormalColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetNormalColor");

	UCircularProgressBarSprites_C_SetNormalColor_Params params;
	params.NormalColor = NormalColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetAlarmColor
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor            AlarmColor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::STATIC_GetAlarmColor(struct FLinearColor* AlarmColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetAlarmColor");

	UCircularProgressBarSprites_C_GetAlarmColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AlarmColor != nullptr)
		*AlarmColor = params.AlarmColor;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetAlarmColor
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor*           AlarmColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::STATIC_SetAlarmColor(struct FLinearColor* AlarmColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetAlarmColor");

	UCircularProgressBarSprites_C_SetAlarmColor_Params params;
	params.AlarmColor = AlarmColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateAlarmColor
// (NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UCircularProgressBarSprites_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateAlarmColor");

	UCircularProgressBarSprites_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.UpdatePercentageArc
// (Net, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UCircularProgressBarSprites_C::STATIC_UpdatePercentageArc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.UpdatePercentageArc");

	UCircularProgressBarSprites_C_UpdatePercentageArc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetImageAlarmColor
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UImage**                 ImageWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCircularProgressBarSprites_C::STATIC_SetImageAlarmColor(class UImage** ImageWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetImageAlarmColor");

	UCircularProgressBarSprites_C_SetImageAlarmColor_Params params;
	params.ImageWidget = ImageWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnPercentageChanged
// (Net, Exec, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UCircularProgressBarSprites_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnPercentageChanged");

	UCircularProgressBarSprites_C_OnPercentageChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOn
// (NetReliable, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UCircularProgressBarSprites_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOn");

	UCircularProgressBarSprites_C_AlarmSwitchOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOff
// (Net, NetReliable, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UCircularProgressBarSprites_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOff");

	UCircularProgressBarSprites_C_AlarmSwitchOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.Tick
// (NetReliable, Static, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.Tick");

	UCircularProgressBarSprites_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.Construct
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UCircularProgressBarSprites_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.Construct");

	UCircularProgressBarSprites_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnSynchronizeProperties
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UCircularProgressBarSprites_C::STATIC_OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnSynchronizeProperties");

	UCircularProgressBarSprites_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.ExecuteUbergraph_CircularProgressBarSprites
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::ExecuteUbergraph_CircularProgressBarSprites(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.ExecuteUbergraph_CircularProgressBarSprites");

	UCircularProgressBarSprites_C_ExecuteUbergraph_CircularProgressBarSprites_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

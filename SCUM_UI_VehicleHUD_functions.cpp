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

// Function UI_VehicleHUD.UI_VehicleHUD_C.GetBatteryAmountIndicatorVisibility
// (NetRequest, Event, NetResponse, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_VehicleHUD_C::GetBatteryAmountIndicatorVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VehicleHUD.UI_VehicleHUD_C.GetBatteryAmountIndicatorVisibility");

	UUI_VehicleHUD_C_GetBatteryAmountIndicatorVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_VehicleHUD.UI_VehicleHUD_C.GetFuelAmountIndicatorVisibility
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_VehicleHUD_C::GetFuelAmountIndicatorVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VehicleHUD.UI_VehicleHUD_C.GetFuelAmountIndicatorVisibility");

	UUI_VehicleHUD_C_GetFuelAmountIndicatorVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_VehicleHUD.UI_VehicleHUD_C.GetHealthBarCaption
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Private, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_VehicleHUD_C::GetHealthBarCaption()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VehicleHUD.UI_VehicleHUD_C.GetHealthBarCaption");

	UUI_VehicleHUD_C_GetHealthBarCaption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_VehicleHUD.UI_VehicleHUD_C.GetMainVisibility
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_VehicleHUD_C::GetMainVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VehicleHUD.UI_VehicleHUD_C.GetMainVisibility");

	UUI_VehicleHUD_C_GetMainVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_VehicleHUD.UI_VehicleHUD_C.Tick
// (Net, NetReliable, NetRequest, Event, NetResponse, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VehicleHUD_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VehicleHUD.UI_VehicleHUD_C.Tick");

	UUI_VehicleHUD_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VehicleHUD.UI_VehicleHUD_C.ExecuteUbergraph_UI_VehicleHUD
// (Net, NetRequest, Exec, Static, Private, Protected, NetServer)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VehicleHUD_C::STATIC_ExecuteUbergraph_UI_VehicleHUD(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VehicleHUD.UI_VehicleHUD_C.ExecuteUbergraph_UI_VehicleHUD");

	UUI_VehicleHUD_C_ExecuteUbergraph_UI_VehicleHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

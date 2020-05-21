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

// Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.UpdateSicknesses
// (Exec, Native, Event, NetResponse, Static, Private, Protected, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_BCUBodyMonitor_C::STATIC_UpdateSicknesses()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.UpdateSicknesses");

	UUI_BCUBodyMonitor_C_UpdateSicknesses_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.UpdateValues
// (Net, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UUI_BCUBodyMonitor_C::UpdateValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.UpdateValues");

	UUI_BCUBodyMonitor_C_UpdateValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.SetPrisoner
// (Net, NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUBodyMonitor_C::SetPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.SetPrisoner");

	UUI_BCUBodyMonitor_C_SetPrisoner_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.Tick
// (NetReliable, NetRequest, NetResponse, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUBodyMonitor_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.Tick");

	UUI_BCUBodyMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.Construct
// (NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_BCUBodyMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.Construct");

	UUI_BCUBodyMonitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.ExecuteUbergraph_UI_BCUBodyMonitor
// (NetReliable, NetRequest, Event, Static, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUBodyMonitor_C::STATIC_ExecuteUbergraph_UI_BCUBodyMonitor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.ExecuteUbergraph_UI_BCUBodyMonitor");

	UUI_BCUBodyMonitor_C_ExecuteUbergraph_UI_BCUBodyMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

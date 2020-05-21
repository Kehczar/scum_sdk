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

// Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.SetPrisoner
// (Net, NetReliable, NetRequest, Native, Event, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CaloriesMonitor_C::SetPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.SetPrisoner");

	UUI_CaloriesMonitor_C_SetPrisoner_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.Update
// (NetRequest, Exec, Event, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CaloriesMonitor_C::STATIC_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.Update");

	UUI_CaloriesMonitor_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.Tick
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CaloriesMonitor_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.Tick");

	UUI_CaloriesMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.ExecuteUbergraph_UI_CaloriesMonitor
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CaloriesMonitor_C::STATIC_ExecuteUbergraph_UI_CaloriesMonitor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.ExecuteUbergraph_UI_CaloriesMonitor");

	UUI_CaloriesMonitor_C_ExecuteUbergraph_UI_CaloriesMonitor_Params params;
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

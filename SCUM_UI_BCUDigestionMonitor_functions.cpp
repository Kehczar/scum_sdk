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

// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.UpdateDigestions
// (NetRequest, Native, Event, NetResponse, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void UUI_BCUDigestionMonitor_C::UpdateDigestions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.UpdateDigestions");

	UUI_BCUDigestionMonitor_C_UpdateDigestions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.Update
// (Net, NetReliable, Exec, NetResponse, NetMulticast, Public, HasOutParms, HasDefaults)

void UUI_BCUDigestionMonitor_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.Update");

	UUI_BCUDigestionMonitor_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.SetPrisoner
// (NetReliable, Exec, Static, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintEvent)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUDigestionMonitor_C::STATIC_SetPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.SetPrisoner");

	UUI_BCUDigestionMonitor_C_SetPrisoner_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.Tick
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetClient, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUDigestionMonitor_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.Tick");

	UUI_BCUDigestionMonitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.ExecuteUbergraph_UI_BCUDigestionMonitor
// (NetReliable, NetRequest, Native, Event, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BCUDigestionMonitor_C::ExecuteUbergraph_UI_BCUDigestionMonitor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.ExecuteUbergraph_UI_BCUDigestionMonitor");

	UUI_BCUDigestionMonitor_C_ExecuteUbergraph_UI_BCUDigestionMonitor_Params params;
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

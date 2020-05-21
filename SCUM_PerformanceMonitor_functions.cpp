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

// Function PerformanceMonitor.PerformanceMonitor_C.shouldAlarmBeOn
// (Net, NetRequest, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPerformanceMonitor_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.shouldAlarmBeOn");

	UPerformanceMonitor_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function PerformanceMonitor.PerformanceMonitor_C.GetContentSize
// (Net, NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               contentSize                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPerformanceMonitor_C::STATIC_GetContentSize(struct FVector2D* contentSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.GetContentSize");

	UPerformanceMonitor_C_GetContentSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (contentSize != nullptr)
		*contentSize = params.contentSize;
}


// Function PerformanceMonitor.PerformanceMonitor_C.OnPrisonerSet
// (NetReliable, NetRequest, Exec, Native, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UPerformanceMonitor_C::STATIC_OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.OnPrisonerSet");

	UPerformanceMonitor_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceMonitor.PerformanceMonitor_C.Construct
// (Net, NetRequest, Exec, Native, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UPerformanceMonitor_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.Construct");

	UPerformanceMonitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceMonitor.PerformanceMonitor_C.WindowContentSizeChanged
// (NetRequest, Exec, Native, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UPerformanceMonitor_C::STATIC_WindowContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.WindowContentSizeChanged");

	UPerformanceMonitor_C_WindowContentSizeChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceMonitor.PerformanceMonitor_C.AlarmOnWindowContent
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UPerformanceMonitor_C::STATIC_AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.AlarmOnWindowContent");

	UPerformanceMonitor_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceMonitor.PerformanceMonitor_C.AlarmOffWindowContent
// (Exec, Native, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UPerformanceMonitor_C::STATIC_AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.AlarmOffWindowContent");

	UPerformanceMonitor_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceMonitor.PerformanceMonitor_C.ExecuteUbergraph_PerformanceMonitor
// (Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerformanceMonitor_C::STATIC_ExecuteUbergraph_PerformanceMonitor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceMonitor.PerformanceMonitor_C.ExecuteUbergraph_PerformanceMonitor");

	UPerformanceMonitor_C_ExecuteUbergraph_PerformanceMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

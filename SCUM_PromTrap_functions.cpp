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

// Function PromTrap.PromTrap_C.TriggeredMovement__FinishedFunc
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, HasOutParms, NetClient, DLLImport)

void APromTrap_C::STATIC_TriggeredMovement__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.TriggeredMovement__FinishedFunc");

	APromTrap_C_TriggeredMovement__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PromTrap.PromTrap_C.TriggeredMovement__UpdateFunc
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, HasOutParms, NetClient, DLLImport)

void APromTrap_C::STATIC_TriggeredMovement__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.TriggeredMovement__UpdateFunc");

	APromTrap_C_TriggeredMovement__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PromTrap.PromTrap_C.BP_OnDisarmed
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, HasOutParms, NetClient, DLLImport)

void APromTrap_C::STATIC_BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.BP_OnDisarmed");

	APromTrap_C_BP_OnDisarmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PromTrap.PromTrap_C.BP_OnArmed
// (NetReliable, Exec, Native, Event, NetResponse, Static, HasOutParms, NetClient, DLLImport)

void APromTrap_C::STATIC_BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.BP_OnArmed");

	APromTrap_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PromTrap.PromTrap_C.BP_OnTriggered
// (NetRequest, Exec, Native, Event, NetResponse, Static, HasOutParms, NetClient, DLLImport)

void APromTrap_C::STATIC_BP_OnTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.BP_OnTriggered");

	APromTrap_C_BP_OnTriggered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PromTrap.PromTrap_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, HasOutParms, NetClient, DLLImport)

void APromTrap_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.ReceiveBeginPlay");

	APromTrap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PromTrap.PromTrap_C.ExecuteUbergraph_PromTrap
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APromTrap_C::STATIC_ExecuteUbergraph_PromTrap(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.ExecuteUbergraph_PromTrap");

	APromTrap_C_ExecuteUbergraph_PromTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

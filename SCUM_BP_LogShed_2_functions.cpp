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

// Function BP_LogShed_2.BP_LogShed_1_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_LogShed_1_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LogShed_2.BP_LogShed_1_C.ReceiveBeginPlay");

	ABP_LogShed_1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LogShed_2.BP_LogShed_1_C.BP_OnNumContainedItemsChanged
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, Public, Protected, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           numContainedItems              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LogShed_1_C::STATIC_BP_OnNumContainedItemsChanged(int* numContainedItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LogShed_2.BP_LogShed_1_C.BP_OnNumContainedItemsChanged");

	ABP_LogShed_1_C_BP_OnNumContainedItemsChanged_Params params;
	params.numContainedItems = numContainedItems;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LogShed_2.BP_LogShed_1_C.ExecuteUbergraph_BP_LogShed_2
// (Exec, Native, Event, Static, MulticastDelegate, Public, Protected, Delegate, BlueprintEvent, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LogShed_1_C::STATIC_ExecuteUbergraph_BP_LogShed_2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LogShed_2.BP_LogShed_1_C.ExecuteUbergraph_BP_LogShed_2");

	ABP_LogShed_1_C_ExecuteUbergraph_BP_LogShed_2_Params params;
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

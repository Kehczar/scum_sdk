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

// Function BP_LogShed_3.BP_LogShed_2_C.ReceiveBeginPlay
// (NetRequest, Exec, Event, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_LogShed_2_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LogShed_3.BP_LogShed_2_C.ReceiveBeginPlay");

	ABP_LogShed_2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LogShed_3.BP_LogShed_2_C.ExecuteUbergraph_BP_LogShed_3
// (Net, NetReliable, Exec, Event, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LogShed_2_C::STATIC_ExecuteUbergraph_BP_LogShed_3(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LogShed_3.BP_LogShed_2_C.ExecuteUbergraph_BP_LogShed_3");

	ABP_LogShed_2_C_ExecuteUbergraph_BP_LogShed_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

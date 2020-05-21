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

// Function BP_M9.BP_M9_C.CanSwitchFiringMode
// (NetRequest, Exec, Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_M9_C::STATIC_CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M9.BP_M9_C.CanSwitchFiringMode");

	ABP_M9_C_CanSwitchFiringMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_M9.BP_M9_C.ReceiveBeginPlay
// (Net, NetReliable, Exec, Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void ABP_M9_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M9.BP_M9_C.ReceiveBeginPlay");

	ABP_M9_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_M9.BP_M9_C.ExecuteUbergraph_BP_M9
// (NetReliable, Exec, Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_M9_C::STATIC_ExecuteUbergraph_BP_M9(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M9.BP_M9_C.ExecuteUbergraph_BP_M9");

	ABP_M9_C_ExecuteUbergraph_BP_M9_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

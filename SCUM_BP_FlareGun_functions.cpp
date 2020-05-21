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

// Function BP_FlareGun.BP_FlareGun_C.CanSwitchFiringMode
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_FlareGun_C::STATIC_CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlareGun.BP_FlareGun_C.CanSwitchFiringMode");

	ABP_FlareGun_C_CanSwitchFiringMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FlareGun.BP_FlareGun_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void ABP_FlareGun_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlareGun.BP_FlareGun_C.ReceiveBeginPlay");

	ABP_FlareGun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FlareGun.BP_FlareGun_C.ExecuteUbergraph_BP_FlareGun
// (NetRequest, Exec, Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FlareGun_C::STATIC_ExecuteUbergraph_BP_FlareGun(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlareGun.BP_FlareGun_C.ExecuteUbergraph_BP_FlareGun");

	ABP_FlareGun_C_ExecuteUbergraph_BP_FlareGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

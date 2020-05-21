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

// Function BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C.CanSwitchFiringMode
// (NetReliable, NetRequest, Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABPC_Weapon_98k_Karabiner_EVENT_C::STATIC_CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C.CanSwitchFiringMode");

	ABPC_Weapon_98k_Karabiner_EVENT_C_CanSwitchFiringMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C.GetAmmoReloadCapacity
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class AAmmunitionItem**        ammo                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABPC_Weapon_98k_Karabiner_EVENT_C::STATIC_GetAmmoReloadCapacity(class AAmmunitionItem** ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C.GetAmmoReloadCapacity");

	ABPC_Weapon_98k_Karabiner_EVENT_C_GetAmmoReloadCapacity_Params params;
	params.ammo = ammo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C.ReceiveBeginPlay
// (Net, NetRequest, Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void ABPC_Weapon_98k_Karabiner_EVENT_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C.ReceiveBeginPlay");

	ABPC_Weapon_98k_Karabiner_EVENT_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C.ExecuteUbergraph_BP_Weapon_98k_Karabiner
// (NetRequest, Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPC_Weapon_98k_Karabiner_EVENT_C::STATIC_ExecuteUbergraph_BP_Weapon_98k_Karabiner(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C.ExecuteUbergraph_BP_Weapon_98k_Karabiner");

	ABPC_Weapon_98k_Karabiner_EVENT_C_ExecuteUbergraph_BP_Weapon_98k_Karabiner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

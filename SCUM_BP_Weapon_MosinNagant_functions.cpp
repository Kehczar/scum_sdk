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

// Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.CanSwitchFiringMode
// (Net, NetRequest, Event, NetResponse, Static, HasOutParms, NetClient, DLLImport)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weapon_MosinNagant_C::STATIC_CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.CanSwitchFiringMode");

	ABP_Weapon_MosinNagant_C_CanSwitchFiringMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.GetAmmoReloadCapacity
// (Net, Event, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class AAmmunitionItem**        ammo                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_Weapon_MosinNagant_C::GetAmmoReloadCapacity(class AAmmunitionItem** ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.GetAmmoReloadCapacity");

	ABP_Weapon_MosinNagant_C_GetAmmoReloadCapacity_Params params;
	params.ammo = ammo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.ReceiveBeginPlay
// (NetRequest, Event, NetResponse, Static, HasOutParms, NetClient, DLLImport)

void ABP_Weapon_MosinNagant_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.ReceiveBeginPlay");

	ABP_Weapon_MosinNagant_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.ExecuteUbergraph_BP_Weapon_MosinNagant
// (Net, NetReliable, NetRequest, Exec, Native, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_MosinNagant_C::ExecuteUbergraph_BP_Weapon_MosinNagant(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MosinNagant.BP_Weapon_MosinNagant_C.ExecuteUbergraph_BP_Weapon_MosinNagant");

	ABP_Weapon_MosinNagant_C_ExecuteUbergraph_BP_Weapon_MosinNagant_Params params;
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

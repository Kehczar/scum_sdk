#pragma once

// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C.CanSwitchFiringMode
struct ABPC_Weapon_98k_Karabiner_EVENT_C_CanSwitchFiringMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C.GetAmmoReloadCapacity
struct ABPC_Weapon_98k_Karabiner_EVENT_C_GetAmmoReloadCapacity_Params
{
	class AAmmunitionItem**                            ammo;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C.ReceiveBeginPlay
struct ABPC_Weapon_98k_Karabiner_EVENT_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C.ExecuteUbergraph_BP_Weapon_98k_Karabiner
struct ABPC_Weapon_98k_Karabiner_EVENT_C_ExecuteUbergraph_BP_Weapon_98k_Karabiner_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

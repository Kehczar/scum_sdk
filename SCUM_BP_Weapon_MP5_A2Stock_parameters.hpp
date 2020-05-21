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

// Function ConZ.WeaponAttachment.Unequip
struct ABP_Weapon_MP5_A2Stock_C_Unequip_Params
{
};

// Function ConZ.WeaponAttachment.GetStaticMeshWhenAttached
struct ABP_Weapon_MP5_A2Stock_C_GetStaticMeshWhenAttached_Params
{
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponAttachment.GetShakinessModifier
struct ABP_Weapon_MP5_A2Stock_C_GetShakinessModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponAttachment.GetOwningWeapon
struct ABP_Weapon_MP5_A2Stock_C_GetOwningWeapon_Params
{
	class AWeapon*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponAttachment.Equip
struct ABP_Weapon_MP5_A2Stock_C_Equip_Params
{
	class AWeapon**                                    Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

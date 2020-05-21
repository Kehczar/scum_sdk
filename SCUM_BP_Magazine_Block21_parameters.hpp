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

// Function ConZ.WeaponAttachmentMagazine.SetAmmoCount
struct ABP_Magazine_Block21_C_SetAmmoCount_Params
{
	int*                                               Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponAttachmentMagazine.Server_InsertCartridgeIntoMagazine
struct ABP_Magazine_Block21_C_Server_InsertCartridgeIntoMagazine_Params
{
	class AAmmunitionItem**                            ammo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponAttachmentMagazine.OnRep_AmmoCountOwnerHelper
struct ABP_Magazine_Block21_C_OnRep_AmmoCountOwnerHelper_Params
{
};

// Function ConZ.WeaponAttachmentMagazine.OnRep_AmmoCount
struct ABP_Magazine_Block21_C_OnRep_AmmoCount_Params
{
};

// Function ConZ.WeaponAttachmentMagazine.OnAmmoChangedEvent
struct ABP_Magazine_Block21_C_OnAmmoChangedEvent_Params
{
};

// Function ConZ.WeaponAttachmentMagazine.Multicast_SetLoadedVariables
struct ABP_Magazine_Block21_C_Multicast_SetLoadedVariables_Params
{
	int*                                               ammoCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponAttachmentMagazine.GetProjectileClass
struct ABP_Magazine_Block21_C_GetProjectileClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponAttachmentMagazine.GetCapacity
struct ABP_Magazine_Block21_C_GetCapacity_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponAttachmentMagazine.GetAmmoCount
struct ABP_Magazine_Block21_C_GetAmmoCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponAttachmentMagazine.AddAmmo
struct ABP_Magazine_Block21_C_AddAmmo_Params
{
	int*                                               Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

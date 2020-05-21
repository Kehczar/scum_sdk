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

// Function ConZ.WeaponAttachmentMagazine.SetAmmoCount
// ()
// Parameters:
// int*                           Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Magazine_AKS_74U_C::SetAmmoCount(int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponAttachmentMagazine.SetAmmoCount");

	ABP_Magazine_AKS_74U_C_SetAmmoCount_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.WeaponAttachmentMagazine.Server_InsertCartridgeIntoMagazine
// ()
// Parameters:
// class AAmmunitionItem**        ammo                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Magazine_AKS_74U_C::Server_InsertCartridgeIntoMagazine(class AAmmunitionItem** ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponAttachmentMagazine.Server_InsertCartridgeIntoMagazine");

	ABP_Magazine_AKS_74U_C_Server_InsertCartridgeIntoMagazine_Params params;
	params.ammo = ammo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.WeaponAttachmentMagazine.OnRep_AmmoCountOwnerHelper
// ()

void ABP_Magazine_AKS_74U_C::OnRep_AmmoCountOwnerHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponAttachmentMagazine.OnRep_AmmoCountOwnerHelper");

	ABP_Magazine_AKS_74U_C_OnRep_AmmoCountOwnerHelper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.WeaponAttachmentMagazine.OnRep_AmmoCount
// ()

void ABP_Magazine_AKS_74U_C::OnRep_AmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponAttachmentMagazine.OnRep_AmmoCount");

	ABP_Magazine_AKS_74U_C_OnRep_AmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.WeaponAttachmentMagazine.OnAmmoChangedEvent
// ()

void ABP_Magazine_AKS_74U_C::OnAmmoChangedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponAttachmentMagazine.OnAmmoChangedEvent");

	ABP_Magazine_AKS_74U_C_OnAmmoChangedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.WeaponAttachmentMagazine.Multicast_SetLoadedVariables
// ()
// Parameters:
// int*                           ammoCount                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Magazine_AKS_74U_C::Multicast_SetLoadedVariables(int* ammoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponAttachmentMagazine.Multicast_SetLoadedVariables");

	ABP_Magazine_AKS_74U_C_Multicast_SetLoadedVariables_Params params;
	params.ammoCount = ammoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.WeaponAttachmentMagazine.GetProjectileClass
// ()
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ABP_Magazine_AKS_74U_C::GetProjectileClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponAttachmentMagazine.GetProjectileClass");

	ABP_Magazine_AKS_74U_C_GetProjectileClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.WeaponAttachmentMagazine.GetCapacity
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_Magazine_AKS_74U_C::GetCapacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponAttachmentMagazine.GetCapacity");

	ABP_Magazine_AKS_74U_C_GetCapacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.WeaponAttachmentMagazine.GetAmmoCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_Magazine_AKS_74U_C::GetAmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponAttachmentMagazine.GetAmmoCount");

	ABP_Magazine_AKS_74U_C_GetAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.WeaponAttachmentMagazine.AddAmmo
// ()
// Parameters:
// int*                           Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Magazine_AKS_74U_C::AddAmmo(int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponAttachmentMagazine.AddAmmo");

	ABP_Magazine_AKS_74U_C_AddAmmo_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

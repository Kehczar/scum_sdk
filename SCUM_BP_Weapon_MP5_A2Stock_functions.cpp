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

// Function ConZ.WeaponAttachment.Unequip
// ()

void ABP_Weapon_MP5_A2Stock_C::Unequip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponAttachment.Unequip");

	ABP_Weapon_MP5_A2Stock_C_Unequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.WeaponAttachment.GetStaticMeshWhenAttached
// ()
// Parameters:
// class UStaticMesh*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStaticMesh* ABP_Weapon_MP5_A2Stock_C::GetStaticMeshWhenAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponAttachment.GetStaticMeshWhenAttached");

	ABP_Weapon_MP5_A2Stock_C_GetStaticMeshWhenAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.WeaponAttachment.GetShakinessModifier
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_Weapon_MP5_A2Stock_C::GetShakinessModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponAttachment.GetShakinessModifier");

	ABP_Weapon_MP5_A2Stock_C_GetShakinessModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.WeaponAttachment.GetOwningWeapon
// ()
// Parameters:
// class AWeapon*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWeapon* ABP_Weapon_MP5_A2Stock_C::GetOwningWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponAttachment.GetOwningWeapon");

	ABP_Weapon_MP5_A2Stock_C_GetOwningWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.WeaponAttachment.Equip
// ()
// Parameters:
// class AWeapon**                Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_MP5_A2Stock_C::Equip(class AWeapon** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponAttachment.Equip");

	ABP_Weapon_MP5_A2Stock_C_Equip_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

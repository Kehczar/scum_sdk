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

// Function BP_Weapon_MK18.BP_Weapon_MK18_C.ReceiveBeginPlay
struct ABP_Weapon_MK18_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weapon_MK18.BP_Weapon_MK18_C.OnAttachmentAdded
struct ABP_Weapon_MK18_C_OnAttachmentAdded_Params
{
	class AWeapon**                                    sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment**                          Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_MK18.BP_Weapon_MK18_C.OnAttachmentRemoved
struct ABP_Weapon_MK18_C_OnAttachmentRemoved_Params
{
	class AWeapon**                                    sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment**                          Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_MK18.BP_Weapon_MK18_C.ExecuteUbergraph_BP_Weapon_MK18
struct ABP_Weapon_MK18_C_ExecuteUbergraph_BP_Weapon_MK18_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.CanSwitchFiringMode
struct ABPC_Weapon_SDASS_C_CanSwitchFiringMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.GetWidgetDisplayInfo
struct ABPC_Weapon_SDASS_C_GetWidgetDisplayInfo_Params
{
	struct FWidgetDisplayInfo                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.FillUpWithAmmo
struct ABPC_Weapon_SDASS_C_FillUpWithAmmo_Params
{
};

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.ReceiveBeginPlay
struct ABPC_Weapon_SDASS_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.OnAttachmentAdded
struct ABPC_Weapon_SDASS_C_OnAttachmentAdded_Params
{
	class AWeapon**                                    sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment**                          Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.OnAttachmentRemoved
struct ABPC_Weapon_SDASS_C_OnAttachmentRemoved_Params
{
	class AWeapon**                                    sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment**                          Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_590A11.BP_Weapon_590A11_C.ExecuteUbergraph_BP_Weapon_590A11
struct ABPC_Weapon_SDASS_C_ExecuteUbergraph_BP_Weapon_590A11_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

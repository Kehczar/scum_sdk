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

// Function BP_WeaponSightBase.BP_WeaponSightBase_C.OnAttachedToItem
struct ABP_WeaponSights_MRO_Red_Dot_C_OnAttachedToItem_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponSightBase.BP_WeaponSightBase_C.OnDetachedFromItem
struct ABP_WeaponSights_MRO_Red_Dot_C_OnDetachedFromItem_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponSightBase.BP_WeaponSightBase_C.ExecuteUbergraph_BP_WeaponSightBase
struct ABP_WeaponSights_MRO_Red_Dot_C_ExecuteUbergraph_BP_WeaponSightBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

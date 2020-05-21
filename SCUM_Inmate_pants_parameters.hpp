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

// Function ConZ.ClothesItem.UpdateMaterialParamsOnClients
struct AInmate_pants_C_UpdateMaterialParamsOnClients_Params
{
};

// Function ConZ.ClothesItem.SetDirtiness
struct AInmate_pants_C_SetDirtiness_Params
{
	float*                                             dirtiness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.ClothesItem.OnRep_MaterialParameters
struct AInmate_pants_C_OnRep_MaterialParameters_Params
{
};

// Function ConZ.ClothesItem.GetWarmth
struct AInmate_pants_C_GetWarmth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ClothesItem.GetCapacityY
struct AInmate_pants_C_GetCapacityY_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.ClothesItem.GetCapacityX
struct AInmate_pants_C_GetCapacityX_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

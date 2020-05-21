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

// Function ConZ.WeaponActionReloadSequence.SetNextMontageSectionFromPrevious
struct UBP_AS_Val_InsertMag_C_SetNextMontageSectionFromPrevious_Params
{
	struct FName*                                      previousSection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NextSection;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponActionReloadSequence.SetNextMontageSection
struct UBP_AS_Val_InsertMag_C_SetNextMontageSection_Params
{
	struct FName*                                      NextSection;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponActionReloadSequence.OnMontageEnded
struct UBP_AS_Val_InsertMag_C_OnMontageEnded_Params
{
	class UAnimMontage**                               Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              interrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponActionReloadSequence.OnMontageBlendingOutStarted
struct UBP_AS_Val_InsertMag_C_OnMontageBlendingOutStarted_Params
{
	class UAnimMontage**                               Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              interrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponActionReloadSequence.GetReloadData
struct UBP_AS_Val_InsertMag_C_GetReloadData_Params
{
	struct FWeaponReloadData                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConZ.WeaponActionReloadSequence.GetActiveAnimationWeapon
struct UBP_AS_Val_InsertMag_C_GetActiveAnimationWeapon_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponActionReloadSequence.GetActiveAnimationBody
struct UBP_AS_Val_InsertMag_C_GetActiveAnimationBody_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponActionReloadSequence.ExecuteUsingData
struct UBP_AS_Val_InsertMag_C_ExecuteUsingData_Params
{
	struct FWeaponReloadData*                          Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponActionReloadSequence.End
struct UBP_AS_Val_InsertMag_C_End_Params
{
	bool*                                              Regular;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.WeaponActionReloadSequence.CanInterrupt
struct UBP_AS_Val_InsertMag_C_CanInterrupt_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ConZ.WeaponActionReloadSequence.CanExecuteUsingData
struct UBP_AS_Val_InsertMag_C_CanExecuteUsingData_Params
{
	struct FWeaponReloadData*                          Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

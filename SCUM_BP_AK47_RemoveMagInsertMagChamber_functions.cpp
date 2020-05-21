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

// Function ConZ.WeaponActionReloadSequence.SetNextMontageSectionFromPrevious
// ()
// Parameters:
// struct FName*                  previousSection                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NextSection                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_AK47_RemoveMagInsertMagChamber_C::SetNextMontageSectionFromPrevious(struct FName* previousSection, struct FName* NextSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponActionReloadSequence.SetNextMontageSectionFromPrevious");

	UBP_AK47_RemoveMagInsertMagChamber_C_SetNextMontageSectionFromPrevious_Params params;
	params.previousSection = previousSection;
	params.NextSection = NextSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.WeaponActionReloadSequence.SetNextMontageSection
// ()
// Parameters:
// struct FName*                  NextSection                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_AK47_RemoveMagInsertMagChamber_C::SetNextMontageSection(struct FName* NextSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponActionReloadSequence.SetNextMontageSection");

	UBP_AK47_RemoveMagInsertMagChamber_C_SetNextMontageSection_Params params;
	params.NextSection = NextSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.WeaponActionReloadSequence.OnMontageEnded
// ()
// Parameters:
// class UAnimMontage**           Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          interrupted                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_AK47_RemoveMagInsertMagChamber_C::OnMontageEnded(class UAnimMontage** Montage, bool* interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponActionReloadSequence.OnMontageEnded");

	UBP_AK47_RemoveMagInsertMagChamber_C_OnMontageEnded_Params params;
	params.Montage = Montage;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.WeaponActionReloadSequence.OnMontageBlendingOutStarted
// ()
// Parameters:
// class UAnimMontage**           Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          interrupted                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_AK47_RemoveMagInsertMagChamber_C::OnMontageBlendingOutStarted(class UAnimMontage** Montage, bool* interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponActionReloadSequence.OnMontageBlendingOutStarted");

	UBP_AK47_RemoveMagInsertMagChamber_C_OnMontageBlendingOutStarted_Params params;
	params.Montage = Montage;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.WeaponActionReloadSequence.GetReloadData
// ()
// Parameters:
// struct FWeaponReloadData       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWeaponReloadData UBP_AK47_RemoveMagInsertMagChamber_C::GetReloadData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponActionReloadSequence.GetReloadData");

	UBP_AK47_RemoveMagInsertMagChamber_C_GetReloadData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.WeaponActionReloadSequence.GetActiveAnimationWeapon
// ()
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* UBP_AK47_RemoveMagInsertMagChamber_C::GetActiveAnimationWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponActionReloadSequence.GetActiveAnimationWeapon");

	UBP_AK47_RemoveMagInsertMagChamber_C_GetActiveAnimationWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.WeaponActionReloadSequence.GetActiveAnimationBody
// ()
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* UBP_AK47_RemoveMagInsertMagChamber_C::GetActiveAnimationBody()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponActionReloadSequence.GetActiveAnimationBody");

	UBP_AK47_RemoveMagInsertMagChamber_C_GetActiveAnimationBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.WeaponActionReloadSequence.ExecuteUsingData
// ()
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_AK47_RemoveMagInsertMagChamber_C::ExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponActionReloadSequence.ExecuteUsingData");

	UBP_AK47_RemoveMagInsertMagChamber_C_ExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.WeaponActionReloadSequence.End
// ()
// Parameters:
// bool*                          Regular                        (Parm, ZeroConstructor, IsPlainOldData)

void UBP_AK47_RemoveMagInsertMagChamber_C::End(bool* Regular)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponActionReloadSequence.End");

	UBP_AK47_RemoveMagInsertMagChamber_C_End_Params params;
	params.Regular = Regular;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.WeaponActionReloadSequence.CanInterrupt
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AK47_RemoveMagInsertMagChamber_C::CanInterrupt()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponActionReloadSequence.CanInterrupt");

	UBP_AK47_RemoveMagInsertMagChamber_C_CanInterrupt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.WeaponActionReloadSequence.CanExecuteUsingData
// ()
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_AK47_RemoveMagInsertMagChamber_C::CanExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponActionReloadSequence.CanExecuteUsingData");

	UBP_AK47_RemoveMagInsertMagChamber_C_CanExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function ConZ.FlareItem.SwitchPointLight
// ()
// Parameters:
// bool*                          turnOn                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FlareItem_Green_C::SwitchPointLight(bool* turnOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FlareItem.SwitchPointLight");

	ABP_FlareItem_Green_C_SwitchPointLight_Params params;
	params.turnOn = turnOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.FlareItem.SetState
// ()
// Parameters:
// EFlareIgniteState*             State                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FlareItem_Green_C::SetState(EFlareIgniteState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FlareItem.SetState");

	ABP_FlareItem_Green_C_SetState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.FlareItem.RequestPrisonerIgniteFlare
// ()
// Parameters:
// class APrisoner**              Prisoner                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FlareItem_Green_C::RequestPrisonerIgniteFlare(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FlareItem.RequestPrisonerIgniteFlare");

	ABP_FlareItem_Green_C_RequestPrisonerIgniteFlare_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.FlareItem.OnRep_State
// ()

void ABP_FlareItem_Green_C::OnRep_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FlareItem.OnRep_State");

	ABP_FlareItem_Green_C_OnRep_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.FlareItem.IsBurning
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_FlareItem_Green_C::IsBurning()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FlareItem.IsBurning");

	ABP_FlareItem_Green_C_IsBurning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.FlareItem.Ignite
// ()

void ABP_FlareItem_Green_C::Ignite()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FlareItem.Ignite");

	ABP_FlareItem_Green_C_Ignite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.FlareItem.GetState
// ()
// Parameters:
// EFlareIgniteState              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EFlareIgniteState ABP_FlareItem_Green_C::GetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FlareItem.GetState");

	ABP_FlareItem_Green_C_GetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.CanSwitchFiringMode
// (Net, Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weapon_Improvised_Handgun_C::STATIC_CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.CanSwitchFiringMode");

	ABP_Weapon_Improvised_Handgun_C_CanSwitchFiringMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.ReceiveBeginPlay
// (Event, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void ABP_Weapon_Improvised_Handgun_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.ReceiveBeginPlay");

	ABP_Weapon_Improvised_Handgun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.ExecuteUbergraph_BP_Weapon_Improvised_Handgun
// (Net, NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_Improvised_Handgun_C::STATIC_ExecuteUbergraph_BP_Weapon_Improvised_Handgun(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.ExecuteUbergraph_BP_Weapon_Improvised_Handgun");

	ABP_Weapon_Improvised_Handgun_C_ExecuteUbergraph_BP_Weapon_Improvised_Handgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

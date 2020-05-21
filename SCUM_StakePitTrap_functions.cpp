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

// Function StakePitTrap.StakePitTrap_C.BP_OnTriggered
// (NetReliable, NetRequest, Exec, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)

void AStakePitTrap_C::BP_OnTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function StakePitTrap.StakePitTrap_C.BP_OnTriggered");

	AStakePitTrap_C_BP_OnTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StakePitTrap.StakePitTrap_C.BP_OnArmed
// (NetRequest, Exec, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)

void AStakePitTrap_C::BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function StakePitTrap.StakePitTrap_C.BP_OnArmed");

	AStakePitTrap_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StakePitTrap.StakePitTrap_C.BP_OnRefueled
// (Net, NetRequest, Exec, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)

void AStakePitTrap_C::BP_OnRefueled()
{
	static auto fn = UObject::FindObject<UFunction>("Function StakePitTrap.StakePitTrap_C.BP_OnRefueled");

	AStakePitTrap_C_BP_OnRefueled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StakePitTrap.StakePitTrap_C.ExecuteUbergraph_StakePitTrap
// (Exec, Static, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStakePitTrap_C::STATIC_ExecuteUbergraph_StakePitTrap(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StakePitTrap.StakePitTrap_C.ExecuteUbergraph_StakePitTrap");

	AStakePitTrap_C_ExecuteUbergraph_StakePitTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

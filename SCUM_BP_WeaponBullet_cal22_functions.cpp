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

// Function BP_WeaponBullet_cal22.BP_WeaponBullet_cal22_C.ReceiveBeginPlay
// (Net, NetReliable, NetRequest, Event, Static, NetServer, HasOutParms, HasDefaults, BlueprintCallable)

void ABP_WeaponBullet_cal22_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_cal22.BP_WeaponBullet_cal22_C.ReceiveBeginPlay");

	ABP_WeaponBullet_cal22_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_cal22.BP_WeaponBullet_cal22_C.ExecuteUbergraph_BP_WeaponBullet_cal22
// (Exec, Event, Static, NetServer, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_cal22_C::STATIC_ExecuteUbergraph_BP_WeaponBullet_cal22(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_cal22.BP_WeaponBullet_cal22_C.ExecuteUbergraph_BP_WeaponBullet_cal22");

	ABP_WeaponBullet_cal22_C_ExecuteUbergraph_BP_WeaponBullet_cal22_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
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

// Function BP_WeaponBullet_762x54FMJ.BP_WeaponBullet_762x54FMJ_C.ReceiveBeginPlay
// ()

void ABP_WeaponBullet_762x54FMJ_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_762x54FMJ.BP_WeaponBullet_762x54FMJ_C.ReceiveBeginPlay");

	ABP_WeaponBullet_762x54FMJ_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_762x54FMJ.BP_WeaponBullet_762x54FMJ_C.ExecuteUbergraph_BP_WeaponBullet_762x54FMJ
// ()
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_762x54FMJ_C::ExecuteUbergraph_BP_WeaponBullet_762x54FMJ(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_762x54FMJ.BP_WeaponBullet_762x54FMJ_C.ExecuteUbergraph_BP_WeaponBullet_762x54FMJ");

	ABP_WeaponBullet_762x54FMJ_C_ExecuteUbergraph_BP_WeaponBullet_762x54FMJ_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

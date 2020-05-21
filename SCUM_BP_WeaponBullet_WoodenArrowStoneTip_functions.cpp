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

// Function BP_WeaponBullet_WoodenArrowStoneTip.BP_WeaponBullet_WoodenArrowStoneTip_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Exec, Event, NetMulticast, Private, HasOutParms, NetClient, DLLImport, BlueprintPure, NetValidate)

void ABP_WeaponBullet_WoodenArrowStoneTip_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_WoodenArrowStoneTip.BP_WeaponBullet_WoodenArrowStoneTip_C.ReceiveBeginPlay");

	ABP_WeaponBullet_WoodenArrowStoneTip_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_WoodenArrowStoneTip.BP_WeaponBullet_WoodenArrowStoneTip_C.ExecuteUbergraph_BP_WeaponBullet_WoodenArrowStoneTip
// (Net, Native, Event, NetMulticast, Private, HasOutParms, NetClient, DLLImport, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_WoodenArrowStoneTip_C::ExecuteUbergraph_BP_WeaponBullet_WoodenArrowStoneTip(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_WoodenArrowStoneTip.BP_WeaponBullet_WoodenArrowStoneTip_C.ExecuteUbergraph_BP_WeaponBullet_WoodenArrowStoneTip");

	ABP_WeaponBullet_WoodenArrowStoneTip_C_ExecuteUbergraph_BP_WeaponBullet_WoodenArrowStoneTip_Params params;
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

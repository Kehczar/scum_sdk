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

// Function BP_WeaponBullet_50BMG.BP_WeaponBullet_50BMG_C.ReceiveBeginPlay
// (Net, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)

void ABP_WeaponBullet_50BMG_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_50BMG.BP_WeaponBullet_50BMG_C.ReceiveBeginPlay");

	ABP_WeaponBullet_50BMG_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_50BMG.BP_WeaponBullet_50BMG_C.ExecuteUbergraph_BP_WeaponBullet_50BMG
// (Net, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_50BMG_C::ExecuteUbergraph_BP_WeaponBullet_50BMG(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_50BMG.BP_WeaponBullet_50BMG_C.ExecuteUbergraph_BP_WeaponBullet_50BMG");

	ABP_WeaponBullet_50BMG_C_ExecuteUbergraph_BP_WeaponBullet_50BMG_Params params;
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

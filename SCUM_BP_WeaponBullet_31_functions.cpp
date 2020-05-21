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

// Function BP_WeaponBullet_31.BP_WeaponBullet_30_C.ReceiveBeginPlay
// (Net, NetReliable, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)

void ABP_WeaponBullet_30_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_31.BP_WeaponBullet_30_C.ReceiveBeginPlay");

	ABP_WeaponBullet_30_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_31.BP_WeaponBullet_30_C.ExecuteUbergraph_BP_WeaponBullet_31
// (NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_30_C::STATIC_ExecuteUbergraph_BP_WeaponBullet_31(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_31.BP_WeaponBullet_30_C.ExecuteUbergraph_BP_WeaponBullet_31");

	ABP_WeaponBullet_30_C_ExecuteUbergraph_BP_WeaponBullet_31_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

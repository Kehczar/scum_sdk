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

// Function BP_WeaponBullet_12Gauge_Flare.BP_WeaponBullet_12Gauge_Flare_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)

void ABP_WeaponBullet_12Gauge_Flare_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_12Gauge_Flare.BP_WeaponBullet_12Gauge_Flare_C.ReceiveBeginPlay");

	ABP_WeaponBullet_12Gauge_Flare_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_12Gauge_Flare.BP_WeaponBullet_12Gauge_Flare_C.ExecuteUbergraph_BP_WeaponBullet_12Gauge_Flare
// (Net, NetRequest, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_12Gauge_Flare_C::ExecuteUbergraph_BP_WeaponBullet_12Gauge_Flare(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_12Gauge_Flare.BP_WeaponBullet_12Gauge_Flare_C.ExecuteUbergraph_BP_WeaponBullet_12Gauge_Flare");

	ABP_WeaponBullet_12Gauge_Flare_C_ExecuteUbergraph_BP_WeaponBullet_12Gauge_Flare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

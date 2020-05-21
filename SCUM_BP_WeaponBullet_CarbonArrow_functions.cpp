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

// Function BP_WeaponBullet_CarbonArrow.BP_WeaponBullet_CarbonArrow_C.ReceiveBeginPlay
// (Exec, Native, Event, Static, NetMulticast, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable)

void ABP_WeaponBullet_CarbonArrow_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_CarbonArrow.BP_WeaponBullet_CarbonArrow_C.ReceiveBeginPlay");

	ABP_WeaponBullet_CarbonArrow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponBullet_CarbonArrow.BP_WeaponBullet_CarbonArrow_C.ExecuteUbergraph_BP_WeaponBullet_CarbonArrow
// (Exec, Native, Event, Static, NetMulticast, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintCallable)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponBullet_CarbonArrow_C::STATIC_ExecuteUbergraph_BP_WeaponBullet_CarbonArrow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponBullet_CarbonArrow.BP_WeaponBullet_CarbonArrow_C.ExecuteUbergraph_BP_WeaponBullet_CarbonArrow");

	ABP_WeaponBullet_CarbonArrow_C_ExecuteUbergraph_BP_WeaponBullet_CarbonArrow_Params params;
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

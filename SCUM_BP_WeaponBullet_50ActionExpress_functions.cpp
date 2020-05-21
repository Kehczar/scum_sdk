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

// Function ConZ.Projectile.OnStop
// ()
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_WeaponBullet_50ActionExpress_C::OnStop(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Projectile.OnStop");

	ABP_WeaponBullet_50ActionExpress_C_OnStop_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

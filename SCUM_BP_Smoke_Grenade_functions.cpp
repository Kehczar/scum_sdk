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

// Function ConZ.SmokeGrenadeItem.Multicast_PlayEffects
// ()
// Parameters:
// struct FVector*                ZeroBasedLcoation              (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator*               Rotation                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_Smoke_Grenade_C::Multicast_PlayEffects(struct FVector* ZeroBasedLcoation, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.SmokeGrenadeItem.Multicast_PlayEffects");

	ABP_Smoke_Grenade_C_Multicast_PlayEffects_Params params;
	params.ZeroBasedLcoation = ZeroBasedLcoation;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

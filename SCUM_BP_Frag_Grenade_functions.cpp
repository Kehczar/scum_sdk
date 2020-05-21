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

// Function ConZ.FragGrenadeItem.Multicast_PlayEffects
// ()
// Parameters:
// struct FVector*                ZeroBasedLocation              (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_Frag_Grenade_C::Multicast_PlayEffects(struct FVector* ZeroBasedLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FragGrenadeItem.Multicast_PlayEffects");

	ABP_Frag_Grenade_C_Multicast_PlayEffects_Params params;
	params.ZeroBasedLocation = ZeroBasedLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

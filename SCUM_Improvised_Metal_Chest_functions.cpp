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

// Function ConZ.ChestItem.NetMulticast_PlayLockAddedEffects
// ()

void AImprovised_Metal_Chest_C::NetMulticast_PlayLockAddedEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.ChestItem.NetMulticast_PlayLockAddedEffects");

	AImprovised_Metal_Chest_C_NetMulticast_PlayLockAddedEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

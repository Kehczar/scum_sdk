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

// Function ConZ.FlashbangItem.Multicast_PlayEffects
// ()
// Parameters:
// struct FVector*                zeroBasedFlashbangLocation     (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_Flashbang_C::Multicast_PlayEffects(struct FVector* zeroBasedFlashbangLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FlashbangItem.Multicast_PlayEffects");

	ABP_Flashbang_C_Multicast_PlayEffects_Params params;
	params.zeroBasedFlashbangLocation = zeroBasedFlashbangLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function ConZ.AmmunitionBoxItem.OnRep_AmmoCount
// ()

void ACal7_62x51mm_Ammobox_Open_2_C::OnRep_AmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.AmmunitionBoxItem.OnRep_AmmoCount");

	ACal7_62x51mm_Ammobox_Open_2_C_OnRep_AmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

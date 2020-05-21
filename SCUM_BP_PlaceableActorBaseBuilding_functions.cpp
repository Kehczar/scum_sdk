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

// Function ConZ.PlaceableActorBaseBuilding.OnRep_ReplicatedFirstPointLocation
// ()

void ABP_PlaceableActorBaseBuilding_C::OnRep_ReplicatedFirstPointLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.PlaceableActorBaseBuilding.OnRep_ReplicatedFirstPointLocation");

	ABP_PlaceableActorBaseBuilding_C_OnRep_ReplicatedFirstPointLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.PlaceableActorBaseBuilding.OnRep_PlacementSubState
// ()

void ABP_PlaceableActorBaseBuilding_C::OnRep_PlacementSubState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.PlaceableActorBaseBuilding.OnRep_PlacementSubState");

	ABP_PlaceableActorBaseBuilding_C_OnRep_PlacementSubState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

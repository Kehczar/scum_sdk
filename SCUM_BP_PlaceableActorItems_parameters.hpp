#pragma once

// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConZ.PlaceableActorBase.Server_UpdateState
struct ABP_PlaceableActorItems_C_Server_UpdateState_Params
{
	struct FPlaceableActorStateReplicationHelper*      State;                                                    // (ConstParm, Parm, ReferenceParm)
};

// Function ConZ.PlaceableActorBase.Server_Place
struct ABP_PlaceableActorItems_C_Server_Place_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.PlaceableActorBase.OnRep_ReplicatedRotation
struct ABP_PlaceableActorItems_C_OnRep_ReplicatedRotation_Params
{
};

// Function ConZ.PlaceableActorBase.OnRep_ReplicatedPlacedLocation
struct ABP_PlaceableActorItems_C_OnRep_ReplicatedPlacedLocation_Params
{
};

// Function ConZ.PlaceableActorBase.OnRep_ReplicatedLocation
struct ABP_PlaceableActorItems_C_OnRep_ReplicatedLocation_Params
{
};

// Function ConZ.PlaceableActorBase.OnRep_PlacementState
struct ABP_PlaceableActorItems_C_OnRep_PlacementState_Params
{
};

// Function ConZ.PlaceableActorBase.OnRep_Ingredients
struct ABP_PlaceableActorItems_C_OnRep_Ingredients_Params
{
};

// Function ConZ.PlaceableActorBase.OnRep_IngredientMultiplier
struct ABP_PlaceableActorItems_C_OnRep_IngredientMultiplier_Params
{
};

// Function ConZ.PlaceableActorBase.OnRep_Id
struct ABP_PlaceableActorItems_C_OnRep_Id_Params
{
};

// Function ConZ.PlaceableActorBase.OnRep_CraftingIndex
struct ABP_PlaceableActorItems_C_OnRep_CraftingIndex_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

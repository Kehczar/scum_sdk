#pragma once

// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlaceableActorItems.BP_PlaceableActorItems_C
// 0x0000 (0x0470 - 0x0470)
class ABP_PlaceableActorItems_C : public APlaceableActorItems
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlaceableActorItems.BP_PlaceableActorItems_C");
		return ptr;
	}


	void Server_UpdateState(struct FPlaceableActorStateReplicationHelper* State);
	void Server_Place(struct FVector* Location, struct FRotator* Rotation);
	void OnRep_ReplicatedRotation();
	void OnRep_ReplicatedPlacedLocation();
	void OnRep_ReplicatedLocation();
	void OnRep_PlacementState();
	void OnRep_Ingredients();
	void OnRep_IngredientMultiplier();
	void OnRep_Id();
	void OnRep_CraftingIndex();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

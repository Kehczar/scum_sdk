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

// BlueprintGeneratedClass BP_PlaceableActorBaseBuilding.BP_PlaceableActorBaseBuilding_C
// 0x0000 (0x04E8 - 0x04E8)
class ABP_PlaceableActorBaseBuilding_C : public APlaceableActorBaseBuilding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlaceableActorBaseBuilding.BP_PlaceableActorBaseBuilding_C");
		return ptr;
	}


	void OnRep_ReplicatedFirstPointLocation();
	void OnRep_PlacementSubState();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_BoxProximityTriggerComponent.BP_BoxProximityTriggerComponent_C
// 0x0000 (0x04A0 - 0x04A0)
class UBP_BoxProximityTriggerComponent_C : public UBoxProximityTriggerComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BoxProximityTriggerComponent.BP_BoxProximityTriggerComponent_C");
		return ptr;
	}


	void BoxComponent_OnComponentEndOverlap(class UPrimitiveComponent** activatedComp, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex);
	void BoxComponent_OnComponentBeginOverlap(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

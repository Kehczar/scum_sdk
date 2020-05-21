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

// BlueprintGeneratedClass BP_DroneAIController.BP_DroneAIController_C
// 0x0000 (0x0678 - 0x0678)
class ABP_DroneAIController_C : public ADroneAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DroneAIController.BP_DroneAIController_C");
		return ptr;
	}


	void SensingComponent_OnHearNoise(class APawn** NoiseInstigator, struct FVector* Location, float* Volume);
	void NavigationResultHandler(struct FDoNNavigationQueryData* QueryData);
	void FollowCharacter(class ACharacter** characterToFollow);
	void FindWayTo(struct FVector* Destination);
	void DynamicCollisionListener(struct FDonNavigationDynamicCollisionPayload* CollisionData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

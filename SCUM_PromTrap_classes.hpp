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

// BlueprintGeneratedClass PromTrap.PromTrap_C
// 0x0038 (0x0848 - 0x0810)
class APromTrap_C : public AExplosiveTrapItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0810(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        ArmedLight;                                               // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_BoxProximityTriggerComponent_C*          BoxProximityTrigger;                                      // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     TriggeredMovement_PromTrapTriggerCurve_E937A8874F7B8AC6150893BF78948185;// 0x0828(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TriggeredMovement__Direction_E937A8874F7B8AC6150893BF78948185;// 0x0834(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0835(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TriggeredMovement;                                        // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LIGHT_ON_TIME;                                            // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LIGHT_OFF_TIME;                                           // 0x0844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PromTrap.PromTrap_C");
		return ptr;
	}


	void STATIC_TriggeredMovement__FinishedFunc();
	void STATIC_TriggeredMovement__UpdateFunc();
	void STATIC_BP_OnDisarmed();
	void STATIC_BP_OnArmed();
	void STATIC_BP_OnTriggered();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_PromTrap(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

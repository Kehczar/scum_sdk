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

// BlueprintGeneratedClass BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C
// 0x0020 (0x0380 - 0x0360)
class ABP_Survival_Blueprints_PlaceShelter_Objective_C : public ABlueprintableItemObjective
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDialogueData*                               DialogueData;                                             // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AMissionDialogueManager*                     DialogueManager;                                          // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C");
		return ptr;
	}


	void STATIC_GetPrisoner(class APrisoner** Prisoner);
	void STATIC_AddToDialogueQueue(EDialogEvent* DialogueEvent);
	void OnObjectiveStarted();
	void OnTabModeOpened(ETabMode* tabMode);
	void STATIC_ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_Survival_Storage_CreatePlanks_Objective.BP_Survival_Storage_CreatePlanks_Objective_C
// 0x0008 (0x0368 - 0x0360)
class ABP_Survival_Storage_CreatePlanks_Objective_C : public AChoppingObjective
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Survival_Storage_CreatePlanks_Objective.BP_Survival_Storage_CreatePlanks_Objective_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

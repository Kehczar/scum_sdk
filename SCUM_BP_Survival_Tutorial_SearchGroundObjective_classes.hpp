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

// BlueprintGeneratedClass BP_Survival_Tutorial_SearchGroundObjective.BP_Survival_Tutorial_SearchGroundObjective_C
// 0x0008 (0x0340 - 0x0338)
class ABP_Survival_Tutorial_SearchGroundObjective_C : public ASearchGroundObjective
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Survival_Tutorial_SearchGroundObjective.BP_Survival_Tutorial_SearchGroundObjective_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

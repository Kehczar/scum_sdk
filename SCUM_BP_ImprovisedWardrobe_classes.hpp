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

// BlueprintGeneratedClass BP_ImprovisedWardrobe.BP_ImprovisedWardrobe_C
// 0x0000 (0x06E0 - 0x06E0)
class ABP_ImprovisedWardrobe_C : public AStorageItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ImprovisedWardrobe.BP_ImprovisedWardrobe_C");
		return ptr;
	}


	void NetMulticast_PlayLockAddedEffects();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
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

// BlueprintGeneratedClass Improved_Wooden_Chest.Improved_Wooden_Chest_C
// 0x0000 (0x06E0 - 0x06E0)
class AImproved_Wooden_Chest_C : public AChestItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Improved_Wooden_Chest.Improved_Wooden_Chest_C");
		return ptr;
	}


	void NetMulticast_PlayLockAddedEffects();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
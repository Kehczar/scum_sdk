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

// BlueprintGeneratedClass Backpack_01_05.Backpack_01_05_C
// 0x0000 (0x0730 - 0x0730)
class ABackpack_01_05_C : public AClothesItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Backpack_01_05.Backpack_01_05_C");
		return ptr;
	}


	void UpdateMaterialParamsOnClients();
	void SetDirtiness(float* dirtiness);
	void OnRep_MaterialParameters();
	int GetWarmth();
	int GetCapacityY();
	int GetCapacityX();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

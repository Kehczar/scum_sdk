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

// BlueprintGeneratedClass Cal_9x39mm.Cal_9x39mm_C
// 0x0000 (0x0688 - 0x0688)
class ACal_9x39mm_C : public AAmmunitionItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cal_9x39mm.Cal_9x39mm_C");
		return ptr;
	}


	void SetAmmoCount(int* count, bool* replicateToOwner);
	void OnRep_AmmoCountOwnerHelper();
	void OnRep_AmmoCount();
	int GetAmmoCount();
	void Client_SetAmmoCount(int* count);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

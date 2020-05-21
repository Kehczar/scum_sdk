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

// BlueprintGeneratedClass BPC_Weapon_MosinNagant_EVENT.BPC_Weapon_MosinNagant_EVENT_C
// 0x0000 (0x12B0 - 0x12B0)
class ABPC_Weapon_MosinNagant_EVENT_C : public ABP_Weapon_MosinNagant_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Weapon_MosinNagant_EVENT.BPC_Weapon_MosinNagant_EVENT_C");
		return ptr;
	}


	bool STATIC_CanSwitchFiringMode();
	int GetAmmoReloadCapacity(class AAmmunitionItem** ammo);
	void STATIC_ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Weapon_MosinNagant(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

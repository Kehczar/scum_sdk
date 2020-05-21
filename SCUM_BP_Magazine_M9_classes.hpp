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

// BlueprintGeneratedClass BP_Magazine_M9.BP_Magazine_M9_C
// 0x0000 (0x06A8 - 0x06A8)
class ABP_Magazine_M9_C : public AWeaponAttachmentMagazine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Magazine_M9.BP_Magazine_M9_C");
		return ptr;
	}


	void SetAmmoCount(int* Amount);
	void Server_InsertCartridgeIntoMagazine(class AAmmunitionItem** ammo);
	void OnRep_AmmoCountOwnerHelper();
	void OnRep_AmmoCount();
	void OnAmmoChangedEvent();
	void Multicast_SetLoadedVariables(int* ammoCount);
	class UClass* GetProjectileClass();
	int GetCapacity();
	int GetAmmoCount();
	void AddAmmo(int* Amount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

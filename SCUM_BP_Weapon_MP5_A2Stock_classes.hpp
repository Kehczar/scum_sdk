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

// BlueprintGeneratedClass BP_Weapon_MP5_A2Stock.BP_Weapon_MP5_A2Stock_C
// 0x0000 (0x0690 - 0x0690)
class ABP_Weapon_MP5_A2Stock_C : public AWeaponAttachment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_MP5_A2Stock.BP_Weapon_MP5_A2Stock_C");
		return ptr;
	}


	void Unequip();
	class UStaticMesh* GetStaticMeshWhenAttached();
	float GetShakinessModifier();
	class AWeapon* GetOwningWeapon();
	void Equip(class AWeapon** Weapon);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

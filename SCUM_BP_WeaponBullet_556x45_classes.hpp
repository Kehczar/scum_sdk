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

// BlueprintGeneratedClass BP_WeaponBullet_556x45.BP_WeaponBullet_556x45_C
// 0x0000 (0x03E8 - 0x03E8)
class ABP_WeaponBullet_556x45_C : public AProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBullet_556x45.BP_WeaponBullet_556x45_C");
		return ptr;
	}


	void OnStop(struct FHitResult* HitResult);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
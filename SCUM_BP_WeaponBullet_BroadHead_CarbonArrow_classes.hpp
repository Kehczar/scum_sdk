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

// BlueprintGeneratedClass BP_WeaponBullet_BroadHead_CarbonArrow.BP_WeaponBullet_BroadHead_CarbonArrow_C
// 0x0010 (0x0430 - 0x0420)
class ABP_WeaponBullet_BroadHead_CarbonArrow_C : public AProjectileArrow
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBullet_BroadHead_CarbonArrow.BP_WeaponBullet_BroadHead_CarbonArrow_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BP_WeaponBullet_BroadHead_CarbonArrow(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

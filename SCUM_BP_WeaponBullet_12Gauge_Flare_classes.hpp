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

// BlueprintGeneratedClass BP_WeaponBullet_12Gauge_Flare.BP_WeaponBullet_12Gauge_Flare_C
// 0x0010 (0x0410 - 0x0400)
class ABP_WeaponBullet_12Gauge_Flare_C : public AProjectileFlare
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                                Ak_Flare;                                                 // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponBullet_12Gauge_Flare.BP_WeaponBullet_12Gauge_Flare_C");
		return ptr;
	}


	void STATIC_ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WeaponBullet_12Gauge_Flare(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

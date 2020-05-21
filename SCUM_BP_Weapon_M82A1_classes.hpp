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

// BlueprintGeneratedClass BP_Weapon_M82A1.BP_Weapon_M82A1_C
// 0x0018 (0x1268 - 0x1250)
class ABP_Weapon_M82A1_C : public AWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x1258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MuzzleHideAlpha;                                          // 0x1260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IronSightsHideAlpha;                                      // 0x1264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_M82A1.BP_Weapon_M82A1_C");
		return ptr;
	}


	bool STATIC_GetIgnoreSupportingHandIK();
	bool STATIC_CanSwitchFiringMode();
	void STATIC_ReceiveTick(float* DeltaSeconds);
	void STATIC_ReceiveBeginPlay();
	void STATIC_OnAttachmentAdded(class AWeapon** sender, class AWeaponAttachment** Attachment);
	void OnAttachmentRemoved(class AWeapon** sender, class AWeaponAttachment** Attachment);
	void STATIC_ExecuteUbergraph_BP_Weapon_M82A1(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

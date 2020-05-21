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

// BlueprintGeneratedClass BP_Weapon_AKS_74U.BP_Weapon_AKS_74U_C
// 0x0014 (0x1264 - 0x1250)
class ABP_Weapon_AKS_74U_C : public AWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x1258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IronSightsHideAlpha;                                      // 0x1260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_AKS_74U.BP_Weapon_AKS_74U_C");
		return ptr;
	}


	bool CanAddAttachment(class AWeaponAttachment** Attachment);
	void STATIC_ReceiveBeginPlay();
	void STATIC_OnAttachmentAdded(class AWeapon** sender, class AWeaponAttachment** Attachment);
	void OnAttachmentRemoved(class AWeapon** sender, class AWeaponAttachment** Attachment);
	void STATIC_ExecuteUbergraph_BP_Weapon_AKS_74U(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

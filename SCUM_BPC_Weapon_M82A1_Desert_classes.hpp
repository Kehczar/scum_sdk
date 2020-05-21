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

// BlueprintGeneratedClass BPC_Weapon_M82A1_Desert.BPC_Weapon_M82A1_Desert_C
// 0x0000 (0x1268 - 0x1268)
class ABPC_Weapon_M82A1_Desert_C : public ABP_Weapon_M82A1_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Weapon_M82A1_Desert.BPC_Weapon_M82A1_Desert_C");
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

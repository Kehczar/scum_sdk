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

// BlueprintGeneratedClass BPC_Weapon_SDASS.BPC_Weapon_SDASS_C
// 0x0000 (0x1264 - 0x1264)
class ABPC_Weapon_SDASS_C : public ABP_Weapon_590A11_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Weapon_SDASS.BPC_Weapon_SDASS_C");
		return ptr;
	}


	bool STATIC_CanSwitchFiringMode();
	struct FWidgetDisplayInfo GetWidgetDisplayInfo();
	void STATIC_FillUpWithAmmo();
	void STATIC_ReceiveBeginPlay();
	void OnAttachmentAdded(class AWeapon** sender, class AWeaponAttachment** Attachment);
	void OnAttachmentRemoved(class AWeapon** sender, class AWeaponAttachment** Attachment);
	void STATIC_ExecuteUbergraph_BP_Weapon_590A11(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_AK47_RemoveMagInsertMagChamber.BP_AK47_RemoveMagInsertMagChamber_C
// 0x0000 (0x0088 - 0x0088)
class UBP_AK47_RemoveMagInsertMagChamber_C : public URemoveMagazineInsertMagazine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AK47_RemoveMagInsertMagChamber.BP_AK47_RemoveMagInsertMagChamber_C");
		return ptr;
	}


	void SetNextMontageSectionFromPrevious(struct FName* previousSection, struct FName* NextSection);
	void SetNextMontageSection(struct FName* NextSection);
	void OnMontageEnded(class UAnimMontage** Montage, bool* interrupted);
	void OnMontageBlendingOutStarted(class UAnimMontage** Montage, bool* interrupted);
	struct FWeaponReloadData GetReloadData();
	class UAnimMontage* GetActiveAnimationWeapon();
	class UAnimMontage* GetActiveAnimationBody();
	float ExecuteUsingData(struct FWeaponReloadData* Data);
	void End(bool* Regular);
	bool CanInterrupt();
	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

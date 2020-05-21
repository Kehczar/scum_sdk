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

// BlueprintGeneratedClass BP_M1_OpenEjectBulletInsertClip.BP_M1_OpenEjectBulletInsertClip_C
// 0x000C (0x0094 - 0x0088)
class UBP_M1_OpenEjectBulletInsertClip_C : public UInsertMagazine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0088(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                loadedAmmoCount;                                          // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M1_OpenEjectBulletInsertClip.BP_M1_OpenEjectBulletInsertClip_C");
		return ptr;
	}


	float STATIC_ExecuteUsingData(struct FWeaponReloadData* Data);
	bool STATIC_CanExecuteUsingData(struct FWeaponReloadData* Data);
	void STATIC_ExecuteUbergraph_BP_M1_OpenEjectBulletInsertClip(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

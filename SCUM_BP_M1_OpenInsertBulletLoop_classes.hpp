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

// BlueprintGeneratedClass BP_M1_OpenInsertBulletLoop.BP_M1_OpenInsertBulletLoop_C
// 0x000C (0x00A4 - 0x0098)
class UBP_M1_OpenInsertBulletLoop_C : public UInsertCartridgeIntoMagazine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                loadedAmmoCount;                                          // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M1_OpenInsertBulletLoop.BP_M1_OpenInsertBulletLoop_C");
		return ptr;
	}


	float STATIC_ExecuteUsingData(struct FWeaponReloadData* Data);
	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
	void STATIC_OnActionAnimNotify(ECharacterActionNotifyType* notifyType);
	void ExecuteUbergraph_BP_M1_OpenInsertBulletLoop(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

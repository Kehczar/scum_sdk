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

// BlueprintGeneratedClass M1887_Reload_Event_ChamberEmpty.M1887_Reload_Event_ChamberEmpty_C
// 0x0010 (0x00A8 - 0x0098)
class UM1887_Reload_Event_ChamberEmpty_C : public UInsertCartridge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                loadedAmmoCount;                                          // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxAmmoCount;                                             // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass M1887_Reload_Event_ChamberEmpty.M1887_Reload_Event_ChamberEmpty_C");
		return ptr;
	}


	float ExecuteUsingData(struct FWeaponReloadData* Data);
	bool CanExecuteUsingData(struct FWeaponReloadData* Data);
	void STATIC_OnActionAnimNotify(ECharacterActionNotifyType* notifyType);
	void ExecuteUbergraph_M1887_Reload_Event_ChamberEmpty(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

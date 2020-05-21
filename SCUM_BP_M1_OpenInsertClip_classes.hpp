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

// BlueprintGeneratedClass BP_M1_OpenInsertClip.BP_M1_OpenInsertClip_C
// 0x0008 (0x0090 - 0x0088)
class UBP_M1_OpenInsertClip_C : public UInsertMagazine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0088(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M1_OpenInsertClip.BP_M1_OpenInsertClip_C");
		return ptr;
	}


	bool STATIC_CanExecuteUsingData(struct FWeaponReloadData* Data);
	void STATIC_OnActionAnimNotify(ECharacterActionNotifyType* notifyType);
	void STATIC_ExecuteUbergraph_BP_M1_OpenInsertClip(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_Eder22_Reload_Event_Opened.BP_Eder22_Reload_Event_Opened_C
// 0x000C (0x0094 - 0x0088)
class UBP_Eder22_Reload_Event_Opened_C : public UEventInsertMagazine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0088(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                MaxAmmoCount;                                             // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Eder22_Reload_Event_Opened.BP_Eder22_Reload_Event_Opened_C");
		return ptr;
	}


	void STATIC_OnActionAnimNotify(ECharacterActionNotifyType* notifyType);
	void STATIC_ExecuteUbergraph_BP_Eder22_Reload_Event_Opened(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

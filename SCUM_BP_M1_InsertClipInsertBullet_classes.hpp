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

// BlueprintGeneratedClass BP_M1_InsertClipInsertBullet.BP_M1_InsertClipInsertBullet_C
// 0x0004 (0x009C - 0x0098)
class UBP_M1_InsertClipInsertBullet_C : public UInsertMagazineInsertCartridge
{
public:
	int                                                loadedAmmoCount;                                          // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M1_InsertClipInsertBullet.BP_M1_InsertClipInsertBullet_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

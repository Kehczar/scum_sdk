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

// BlueprintGeneratedClass BP_WeaponSights_M16A4_FoldingSights.BP_WeaponSights_M16A4_FoldingSights_C
// 0x0000 (0x06B0 - 0x06B0)
class ABP_WeaponSights_M16A4_FoldingSights_C : public ABP_WeaponSightBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponSights_M16A4_FoldingSights.BP_WeaponSights_M16A4_FoldingSights_C");
		return ptr;
	}


	void OnAttachedToItem(class AItem** Item);
	void OnDetachedFromItem(class AItem** Item);
	void ExecuteUbergraph_BP_WeaponSightBase(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_Block21.BP_Block21_C
// 0x0010 (0x1260 - 0x1250)
class ABP_Block21_C : public AWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x1258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Block21.BP_Block21_C");
		return ptr;
	}


	bool STATIC_CanSwitchFiringMode();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BP_Block21(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

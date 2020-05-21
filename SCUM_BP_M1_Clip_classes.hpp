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

// BlueprintGeneratedClass BP_M1_Clip.BP_M1_Clip_C
// 0x0088 (0x0730 - 0x06A8)
class ABP_M1_Clip_C : public AWeaponAttachmentMagazine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTexture2D*                                  EmptyIcon;                                                // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FInteractionStruct                          EquipInteraction;                                         // 0x06B8(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FInteractionStruct>                  ReturnInteraction;                                        // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M1_Clip.BP_M1_Clip_C");
		return ptr;
	}


	TArray<struct FInteractionStruct> GetInteractionsWithItem(class UObject** User, class AItem** Item);
	EInteractionState GetStateForInteractionWithItem(class AItem** Item);
	struct FInteractionStruct STATIC_GetDefaultInteractionForPrisoner(class APrisoner** Prisoner, struct FInteractionQueryParameters* Params);
	void STATIC_ReceiveBeginPlay();
	void STATIC_OnAmmoChangedEvent();
	void STATIC_OnDetachedFromItem(class AItem** Item);
	void STATIC_ExecuteUbergraph_BP_M1_Clip(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

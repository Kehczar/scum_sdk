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

// BlueprintGeneratedClass BP_WeaponFlashlight_M9.BP_WeaponFlashlight_M9_C
// 0x0010 (0x06C0 - 0x06B0)
class ABP_WeaponFlashlight_M9_C : public AWeaponAttachmentFlashlight
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponFlashlight_M9.BP_WeaponFlashlight_M9_C");
		return ptr;
	}


	void BndEvt__SpotLight_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent** Component, bool* bReset);
	void STATIC_ExecuteUbergraph_BP_WeaponFlashlight_M9(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_ImprovisedFlashlight.BP_ImprovisedFlashlight_C
// 0x0008 (0x0708 - 0x0700)
class ABP_ImprovisedFlashlight_C : public AWeaponAttachmentUniversalFlashlight
{
public:
	class USpotLightComponent*                         SpotLight;                                                // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ImprovisedFlashlight.BP_ImprovisedFlashlight_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

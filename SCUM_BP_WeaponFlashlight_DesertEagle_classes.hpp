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

// BlueprintGeneratedClass BP_WeaponFlashlight_DesertEagle.BP_WeaponFlashlight_DesertEagle_C
// 0x0008 (0x06B8 - 0x06B0)
class ABP_WeaponFlashlight_DesertEagle_C : public AWeaponAttachmentFlashlight
{
public:
	class USpotLightComponent*                         SpotLight;                                                // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponFlashlight_DesertEagle.BP_WeaponFlashlight_DesertEagle_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

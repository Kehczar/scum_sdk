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

// BlueprintGeneratedClass BP_BombDefusalMinigame.BP_BombDefusalMinigame_C
// 0x0008 (0x04C0 - 0x04B8)
class ABP_BombDefusalMinigame_C : public ABombDefusalMinigame
{
public:
	class USpotLightComponent*                         SpotLight;                                                // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BombDefusalMinigame.BP_BombDefusalMinigame_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

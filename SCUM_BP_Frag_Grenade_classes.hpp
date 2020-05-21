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

// BlueprintGeneratedClass BP_Frag_Grenade.BP_Frag_Grenade_C
// 0x0000 (0x06B0 - 0x06B0)
class ABP_Frag_Grenade_C : public AFragGrenadeItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Frag_Grenade.BP_Frag_Grenade_C");
		return ptr;
	}


	void Multicast_PlayEffects(struct FVector* ZeroBasedLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

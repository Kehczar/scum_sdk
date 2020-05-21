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

// BlueprintGeneratedClass BP_CTFFlagStand.BP_CTFFlagStand_C
// 0x0000 (0x0238 - 0x0238)
class ABP_CTFFlagStand_C : public ACTFFlagStand
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CTFFlagStand.BP_CTFFlagStand_C");
		return ptr;
	}


	void OnRep_LightColor();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

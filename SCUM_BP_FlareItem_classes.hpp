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

// BlueprintGeneratedClass BP_FlareItem.BP_FlareItem_C
// 0x0000 (0x0708 - 0x0708)
class ABP_FlareItem_C : public AFlareItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FlareItem.BP_FlareItem_C");
		return ptr;
	}


	void SwitchPointLight(bool* turnOn);
	void SetState(EFlareIgniteState* State);
	void RequestPrisonerIgniteFlare(class APrisoner** Prisoner);
	void OnRep_State();
	bool IsBurning();
	void Ignite();
	EFlareIgniteState GetState();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

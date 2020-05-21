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

// BlueprintGeneratedClass BP_Mound.BP_Mound_C
// 0x0000 (0x06C0 - 0x06C0)
class ABP_Mound_C : public AMoundItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mound.BP_Mound_C");
		return ptr;
	}


	void OnRep_SurfaceType();
	void OnRep_StartFadeDistance();
	void OnRep_OwnerProfileId();
	void OnRep_EndFadeDistance();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

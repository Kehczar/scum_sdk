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

// BlueprintGeneratedClass BP_WeaponScope_M82A1_Black.BP_WeaponScope_M82A1_Black_C
// 0x0000 (0x07A8 - 0x07A8)
class ABP_WeaponScope_M82A1_Black_C : public AWeaponAttachmentScope
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponScope_M82A1_Black.BP_WeaponScope_M82A1_Black_C");
		return ptr;
	}


	void SetZoomLevelOnServer(int* zoomLevel);
	void SetWindageOnServer(int* Windage);
	void SetLoadedVariablesOnClient(int* zoomLevel, int* Windage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
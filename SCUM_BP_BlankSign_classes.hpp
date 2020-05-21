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

// BlueprintGeneratedClass BP_BlankSign.BP_BlankSign_C
// 0x0000 (0x06C8 - 0x06C8)
class ABP_BlankSign_C : public AItemWithText
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BlankSign.BP_BlankSign_C");
		return ptr;
	}


	void OnTextAccepted(class APrisoner** User, struct FText* Text);
	void OnRep_Text();
	void OnLocalPrisonerPanelsClosed_ItemWithText();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

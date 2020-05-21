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

// BlueprintGeneratedClass NightVisionGoggles_Test.NightVisionGoggles_Test_C
// 0x0000 (0x0760 - 0x0760)
class ANightVisionGoggles_Test_C : public ANightVisionGogglesItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NightVisionGoggles_Test.NightVisionGoggles_Test_C");
		return ptr;
	}


	void SetActivatedOnServer(bool* Value);
	void OnRep_Activated();
	void ActivatedChangedEvent__DelegateSignature(class ANightVisionGogglesItem** sender);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass CustomGUIWindow.CustomGUIWindow_C
// 0x0020 (0x0268 - 0x0248)
class UCustomGUIWindow_C : public UDesignableUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       _title;                                                   // 0x0250(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomGUIWindow.CustomGUIWindow_C");
		return ptr;
	}


	void STATIC_GetTitle(struct FText* Title);
	void STATIC_SetTitle(struct FText* titleToSet);
	void STATIC_AlarmOnWindowContent();
	void STATIC_AlarmOffWindowContent();
	void STATIC_ExecuteUbergraph_CustomGUIWindow(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

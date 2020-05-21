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

// WidgetBlueprintGeneratedClass UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C
// 0x02C8 (0x0518 - 0x0250)
class UUI_TooltipOverviewTextElement_C : public UItemTooltipPanelElement
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UExtendedRichTextBlock*                      ExtendedRichTextBlock_1;                                  // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       TextFormat;                                               // 0x0260(0x0028) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0278(0x0268) (Edit, BlueprintVisible)
	struct FSlateColor                                 Color;                                                    // 0x04E0(0x0028) (Edit, BlueprintVisible)
	int                                                MinimumIntegralDigits;                                    // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaximumIntegralDigits;                                    // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinimumFractionalDigits;                                  // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaximumFractionalDigits;                                  // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C");
		return ptr;
	}


	void OnTextDataChanged(struct FText* Value);
	void PreConstruct(bool* IsDesignTime);
	void OnNumberDataChanged(float* Value);
	void ExecuteUbergraph_UI_TooltipOverviewTextElement(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

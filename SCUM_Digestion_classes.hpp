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

// WidgetBlueprintGeneratedClass Digestion.Digestion_C
// 0x0079 (0x0341 - 0x02C8)
class UDigestion_C : public UMonitoredWindowsContent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParameterLine_C*                            DigestionLineLeft;                                        // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UParameterLine_C*                            DigestionLineRight;                                       // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBoxContentLeft;                                   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBoxContentRight;                                  // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                                _color;                                                   // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       _defaultTitle;                                            // 0x0300(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                _digestionItemsCount;                                     // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x031C(0x0004) MISSED OFFSET
	TArray<class UParameterLine_C*>                    _digestionLines;                                          // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USickness*>                           _digestionItemsArray;                                     // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               _hasDigestionItemsCountChanged;                           // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Digestion.Digestion_C");
		return ptr;
	}


	void HasContentSizeChanged(int* oldDigestionItemCount, int* newDigestionItemCount, bool* contentSizeChanged);
	void PrintArrayOfDigestionItems(TArray<class UDigestionItem*>* digestionItemsTArray);
	void UpdateDigestionItemsCount();
	void DigestionItemToText(class UDigestionItem** digestionItemRef, struct FText* digestionItemName, struct FText* digestionItemID, struct FText* digestionItemWeight);
	void FillDigestionLine(class UParameterLine_C** digestionLineRef, class UDigestionItem** digestionItemRef);
	void CreateDigestionLine(class UDigestionItem** digestionItemRef, class UParameterLine_C** digestionParameterLine);
	void STATIC_ShowDigestion(ESlateVisibility* Visibility);
	void STATIC_InitDigestionItems();
	void AddDigestionLine(int* Index, class UParameterLine_C** digestionLineRef);
	void CreateDigestionLineFromText(struct FText* digestionItemName, struct FText* digestionItemID, struct FText* digestionItemWeightRemained, class UParameterLine_C** digestionLine);
	void GetDigestionItems(TArray<class UDigestionItem*>* digestionItemsTArrayRef);
	void STATIC_SetDigestionCount(int* digestionItemsCountToSet);
	void ClearDigestionLines();
	void CountDigestionItems(int* numberOfDigestionItems);
	void STATIC_HasDigestionCountChanged(bool* sicknessCountChanged);
	void UpdateDigestion();
	struct FText GetTitleText();
	void STATIC_GetDefaultTitle(struct FText* defaultTitle);
	void SelectCustomColor(struct FLinearColor* Color);
	void Construct();
	void STATIC_OnMinimize(bool* shouldMinimize);
	void OnPrisonerSet();
	void UpdateContent();
	void ExecuteUbergraph_Digestion(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

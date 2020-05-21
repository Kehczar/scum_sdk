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

// WidgetBlueprintGeneratedClass ParameterLine.ParameterLine_C
// 0x00A8 (0x0330 - 0x0288)
class UParameterLine_C : public UWindowsContent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  TextMaxValue;                                             // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextParameterName;                                        // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextValue;                                                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      UnderscoreLImage;                                         // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                                _defaultMaxValueColor;                                    // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       _defaultTitle;                                            // 0x02C0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       _parameterName;                                           // 0x02D8(0x0028) (Edit, BlueprintVisible)
	struct FText                                       _parameterValueText;                                      // 0x02F0(0x0028) (Edit, BlueprintVisible)
	struct FText                                       _maxValueText;                                            // 0x0308(0x0028) (Edit, BlueprintVisible)
	struct FLinearColor                                _defaultValueColor;                                       // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ParameterLine.ParameterLine_C");
		return ptr;
	}


	void ActivateCustomAlarmColor(struct FLinearColor* LinearColor);
	void STATIC_AlarmControl(int* alarmColorCode);
	void STATIC_ActivateNormalColor();
	void ActivateAlarmColor();
	void SetAlarmColor(struct FLinearColor* Color);
	void Update(struct FText* parameterNameToSet, struct FText* parameterValueToSet, struct FText* maxParameterValueToSet);
	void SetValuesColor(struct FSlateColor* Color);
	void SetParameterValueText(struct FText* parameterValueText);
	void SetMaxValueText(struct FText* maxValueText);
	void SetParameterValueSlashText(float* Value, int* decimalPlaces);
	void SetParameterValueTextDecimal(float* Value, int* decimalPlaces);
	void GetValueTextBlock(class UTextBlock** textBox);
	void SetColorOfMaxValue(struct FSlateColor* Color);
	void SetColorOfValue(struct FSlateColor* Color);
	void SetColorOfParameterName(struct FSlateColor* Color);
	void SetColor(struct FLinearColor* Color);
	void GetMaxValueTextBlock(class UTextBlock** textBox);
	void GetParameterNameTextBlock(class UTextBlock** textBox);
	void GetParameterNameText(struct FText* ParameterName);
	void SetParameterName(struct FText* ParameterName);
	struct FText GetTitleText();
	void GetDefaultTitle(struct FText* defaultTitle);
	void OnMinimize(bool* shouldMinimize);
	void Construct();
	void ExecuteUbergraph_ParameterLine(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

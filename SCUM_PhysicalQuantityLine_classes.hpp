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

// WidgetBlueprintGeneratedClass PhysicalQuantityLine.PhysicalQuantityLine_C
// 0x0088 (0x02B8 - 0x0230)
class UPhysicalQuantityLine_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  TextMaxValue;                                             // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextMeasuremenUnit;                                       // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextValue;                                                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       _parameterValueText;                                      // 0x0250(0x0028) (Edit, BlueprintVisible)
	struct FText                                       _maxValueText;                                            // 0x0268(0x0028) (Edit, BlueprintVisible)
	struct FText                                       _measurementUnit;                                         // 0x0280(0x0028) (Edit, BlueprintVisible)
	struct FLinearColor                                _maxValueColor;                                           // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                _valueColor;                                              // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PhysicalQuantityLine.PhysicalQuantityLine_C");
		return ptr;
	}


	void SetValueColor(struct FLinearColor* maxValueLinearColorToSet);
	void GetValueColor(struct FLinearColor* maxValueColor);
	void SetMaxValueColor(struct FLinearColor* maxValueLinearColorToSet);
	void GetMaxValueColor(struct FLinearColor* maxValueColor);
	void SetMeasurementUnit(struct FText* measurementUnitToSet);
	void GetMeasurementUnit(struct FText* measurementUnit);
	void SetMaxValueText(struct FText* maxValueTextToSet);
	void GetMaxValueText(struct FText* maxValueTxt);
	void SetParameterValueText(struct FText* paramValueTextToSet);
	void GetParameterValueText(struct FText* parameterValueTxt);
	void Construct();
	void STATIC_ExecuteUbergraph_PhysicalQuantityLine(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

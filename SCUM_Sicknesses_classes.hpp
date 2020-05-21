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

// WidgetBlueprintGeneratedClass Sicknesses.Sicknesses_C
// 0x0090 (0x0358 - 0x02C8)
class USicknesses_C : public UMonitoredWindowsContent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParameterLine_C*                            SicknessLine;                                             // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBoxContent;                                       // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                                _color;                                                   // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       _defaultTitle;                                            // 0x02F0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                _sicknessCount;                                           // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	TArray<class UParameterLine_C*>                    _sicknessLines;                                           // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USickness*>                           _sicknessesArray;                                         // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               _hasSicknessCountChanged;                                 // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0331(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    AlarmOnSicknessesEventDispatcher;                         // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AlarmOffSicknessesEventDispatcher;                        // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Sicknesses.Sicknesses_C");
		return ptr;
	}


	void HasContentSizeChanged(int* oldSicknessCount, int* newSicknessCount, bool* contentSizeChanged);
	void CheckForAlarms(int* previousSicknessCount, int* sicknessCount);
	void UpdateSicknessCount();
	void STATIC_SicknessToText(class USickness** sicknessRef, struct FText* sicknessName, struct FText* sicknessState, struct FText* sicknessPhase);
	void STATIC_FillSicknessLine(class UParameterLine_C** sicknessLineRef, class USickness** Sickness);
	void UpdateSicknessLine();
	void STATIC_CreateSicknessLine(class USickness** sicknessRef, class UParameterLine_C** sicknessParameterLine);
	void STATIC_ShowSickness(ESlateVisibility* Visibility);
	void STATIC_InitSicknesses();
	void STATIC_AddSicknessLine(class UParameterLine_C** sicknessLineRef);
	void STATIC_CreateSicknessLineFromText(struct FText* sicknessName, struct FText* SicknessTextValue, struct FText* SicknessMaxValue, class UParameterLine_C** SicknessLine);
	TArray<class USickness*> STATIC_GetSicknesses();
	void STATIC_SetSicknessCount(int* sicknessCountToSet);
	void ClearSicknessLines();
	void STATIC_CountSicknesses(int* numberOfSicknesses);
	void STATIC_HasSicknessCountChanged(bool* sicknessCountChanged);
	void STATIC_UpdateSicknesses();
	struct FText STATIC_GetTitleText();
	void STATIC_GetDefaultTitle(struct FText* defaultTitle);
	void STATIC_SelectCustomColor(struct FLinearColor* Color);
	void Construct();
	void STATIC_OnMinimize(bool* shouldMinimize);
	void OnPrisonerSet();
	void UpdateContent();
	void STATIC_SicknessEmergedShouldActivateAlarm();
	void STATIC_SicknessGoneShouldDeactivateAlarm();
	void STATIC_ExecuteUbergraph_Sicknesses(int* EntryPoint);
	void AlarmOffSicknessesEventDispatcher__DelegateSignature();
	void AlarmOnSicknessesEventDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

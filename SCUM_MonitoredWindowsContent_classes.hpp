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

// WidgetBlueprintGeneratedClass MonitoredWindowsContent.MonitoredWindowsContent_C
// 0x0040 (0x02C8 - 0x0288)
class UMonitoredWindowsContent_C : public UWindowsContent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class APrisoner*                                   _prisoner;                                                // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               _isPrisonerSet;                                           // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	struct FTimerHandle                                _updateContentTimer;                                      // 0x02A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasToolTip;                                               // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET
	struct FText                                       ToolTip;                                                  // 0x02B0(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MonitoredWindowsContent.MonitoredWindowsContent_C");
		return ptr;
	}


	void GetUpdateContentTimer(struct FTimerHandle* updateContentTimer);
	void STATIC_IsBCUDataInitialized(bool* IsBCUDataInitialized);
	void NotifyParentOnAlarmSwitchedOff();
	void NotifyParentOnAlarmRaised();
	void STATIC_IsPrisonerLifeComponentValid(bool* isLifeComponentValid);
	void GetPrisoner(class APrisoner** Prisoner);
	void STATIC_SetDefaultPrisonerToMonitor(bool* Success);
	void SetPrisonerToMonitor(class APrisoner** Prisoner, bool* Success);
	void GetDefaultPrisoner(class APrisoner** Prisoner);
	void OnPrisonerSet();
	void UpdateContent();
	void Construct();
	void ExecuteUbergraph_MonitoredWindowsContent(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

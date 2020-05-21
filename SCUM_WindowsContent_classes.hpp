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

// WidgetBlueprintGeneratedClass WindowsContent.WindowsContent_C
// 0x0020 (0x0288 - 0x0268)
class UWindowsContent_C : public UCustomGUIWindow_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCustomGUIWindow_C*                          _parentWindow;                                            // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UCustomGUIWindow_C*>                  _childrenWindows;                                         // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WindowsContent.WindowsContent_C");
		return ptr;
	}


	void STATIC_GetChildrenWindows(TArray<class UCustomGUIWindow_C*>* childrenWidgets);
	void AddChildWindow(class UCustomGUIWindow_C** childWindowRef);
	void STATIC_NotifyParentOnAlarmSwitchedOffOnContent();
	void STATIC_NotifyParentOnAlarmRaisedOnContent();
	void STATIC_NotifyParentOnWindowsContentSizeChanged();
	void STATIC_SetParentWindow(class UCustomGUIWindow_C** parentWindowToSet);
	void STATIC_GetParentWindow(class UCustomGUIWindow_C** parentWindow);
	void STATIC_WindowContentSizeChanged();
	void STATIC_ExecuteUbergraph_WindowsContent(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

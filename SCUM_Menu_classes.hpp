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

// BlueprintGeneratedClass Menu.Menu_C
// 0x0038 (0x0258 - 0x0220)
class AMenu_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMenuPlayAsDroneOverlayWidget_C*             DroneOverlayWidget;                                       // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ASceneCapture2D*                             HeadCapture_ExecuteUbergraph_Menu_RefProperty;            // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
	class AWeatherController_C*                        WeatherController_ExecuteUbergraph_Menu_RefProperty;      // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_Prisoner_C*                              BP_Prisoner_4136_ExecuteUbergraph_Menu_RefProperty;       // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      FollowsCursorActor_ExecuteUbergraph_Menu_RefProperty;     // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          GlobalPostProcessVolume_0_EdGraph_0_RefProperty;          // 0x0250(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Menu.Menu_C");
		return ptr;
	}


	void UpdateDroneVisual();
	void InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1(struct FKey* Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void STATIC_Recapture();
	void STATIC_ExecuteUbergraph_Menu(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

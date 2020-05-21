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

// BlueprintGeneratedClass BP_Wristwatch.BP_Wristwatch_C
// 0x0018 (0x0240 - 0x0228)
class ABP_Wristwatch_C : public AWristwatch
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            FaceWidget;                                               // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Wristwatch.BP_Wristwatch_C");
		return ptr;
	}


	void UpdateFatnessLeannessVisuals();
	void UserConstructionScript();
	void SetTime(float* Value);
	void ReceiveBeginPlay();
	void ToggleDisplayVisibility(bool* Visiblity);
	void SetDisplayBrightness(float* Value);
	void ExecuteUbergraph_BP_Wristwatch(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

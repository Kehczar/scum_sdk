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

// AnimBlueprintGeneratedClass AnimBP_MK18.AnimBP_MK18_C
// 0x08B5 (0x0B45 - 0x0290)
class UAnimBP_MK18_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A809B4B5423B7737C65CD48CB3160DD1;      // 0x0298(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6593C4E34E523832B6F6769BB975B6AC;// 0x02C8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9910579448AC2484643F9AA76299C6E9;// 0x0368(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D3E676804DF70078154A029B6D0885B9;// 0x03E0(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E5CA96BB435D9AEE737DC282292E4AC6;      // 0x0458(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6FE9C59B4347691B7F123694BFDBB3D4;// 0x04A0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_27CFEEB940EF7999E9A43FB6754E5502;// 0x0558(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B6FC05EB4C4A3ACC320DC9921948BB06;// 0x0660(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A1B19B75444ADF08139B3EBCCFC2F4C4;// 0x0680(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_04152CE0499E568B4262D2BD082F629A;      // 0x06A0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D89F54794E6EB04CEF7DF8A78C2EB009;      // 0x06E8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BC494F9145AA6363F5C17B92DDC91CA4;      // 0x0730(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_43650EFD4748C9CD82AFC0BB642A2735;// 0x0778(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5B1687FD497E7E0EABF3A0BEA0711237;// 0x0828(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AF080AFA450E29EAB1800FB4F37C6642;// 0x0850(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0104328B4FBFF9BB3DD09AA24944B552;// 0x0878(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5D47F15D4C6E1CB875C9DEBAEA336943;// 0x08A0(0x00A0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_68EEE88748BFC7F656320383A89F6107;// 0x0940(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D8579E764BFC7F578C2F1483889063E5;      // 0x09F0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F9A8D7654674B991BEFDAD9150E08742;      // 0x0A38(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B439E1AB437A313462382998B3372062;      // 0x0A80(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_903166434FB48E88283B98AF27468523;// 0x0AC8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_41CCC5E04E0132A7645464ACBB90A5E4;// 0x0AF0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B5FC97034835B587BA57AF9566C744F0;// 0x0B18(0x0028)
	float                                              IronSightsHideAlpha;                                      // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasMagazine;                                              // 0x0B44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_MK18.AnimBP_MK18_C");
		return ptr;
	}


	void STATIC_AnimGraph(struct FPoseLink* AnimGraph);
	void STATIC_BlueprintUpdateAnimation(float* DeltaTimeX);
	void STATIC_ExecuteUbergraph_AnimBP_MK18(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

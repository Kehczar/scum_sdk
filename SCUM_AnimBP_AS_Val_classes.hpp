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

// AnimBlueprintGeneratedClass AnimBP_AS_Val.AnimBP_AS_Val_C
// 0x04C8 (0x0758 - 0x0290)
class UAnimBP_AS_Val_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DB691FE642829B00FB8DD8808E61ABCC;      // 0x0298(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_017C009443C2D30668E028A04D5586B0;      // 0x02C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9355BC2B463FE8F92C72298588660954;      // 0x0310(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1404999049070C27C3F0FFB00BAEC8BB;      // 0x0358(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_0F8876474E3EB0FBF5879EB20112E3A2;// 0x03A0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BC6AE7CC422C46B7AD69D18346A298EF;      // 0x0450(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3C11BD3A4E7CCAF40D56679C57D6BCCC;// 0x0498(0x00B8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DD9622034B016E269653E38AF7417FEA;// 0x0550(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DBABCB5046237712574209B6562618DD;// 0x05C8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_89E4A55B4699A52C8AF1978B1AB58DDB;// 0x05F0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C16F748A42DD6C3F2BB495B5D3D4B1AC;// 0x0618(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5F1BC7134D94A89501925797CE6D4AA5;// 0x0640(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5E879A0C4F65AA10199CE6A4A9A1590E;// 0x06E0(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_AS_Val.AnimBP_AS_Val_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AnimBP_AS_Val(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

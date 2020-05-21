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

// AnimBlueprintGeneratedClass AnimBP_ImprovisedPistol50cal.AnimBP_ImprovisedPistol50cal_C
// 0x03B0 (0x0640 - 0x0290)
class UAnimBP_ImprovisedPistol50cal_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_23EF430E4BC0C3F72C92CFBD1E146B10;      // 0x0298(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E538BC9D46A797F1210F99856655C474;      // 0x02C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7C92A46F4A9D17BB555715A83513C00C;      // 0x0310(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_233925A04E11B5C509BC30BFDFFA4F0A;      // 0x0358(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AECD4EA14D23EF31BE2223824E020B23;      // 0x03A0(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_8748030C4D56C77B75B6F8BE53AF2EA6;// 0x03E8(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F0BFF94548AD9AF98847BBA6C5F19278;// 0x0498(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5129497C495FB4DFA81D5C8466E0BA7B;// 0x04C0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1F2A759C4FAA9C68F3D39DA590FC71A9;// 0x04E8(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0C4AAB5843AAC42A1EB7139423AB2D53;// 0x0510(0x00B8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_592BCFE845FCA293A32A359873EE0209;// 0x05C8(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_ImprovisedPistol50cal.AnimBP_ImprovisedPistol50cal_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_AnimBP_ImprovisedPistol50cal(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

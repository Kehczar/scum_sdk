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

// AnimBlueprintGeneratedClass AnimBP_M1887.AnimBP_M1887_C
// 0x04C8 (0x0758 - 0x0290)
class UAnimBP_M1887_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E8DE8CEA4898D415F5D9E7BD8B8A12FE;      // 0x0298(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4717EFBC485B98277C22FD9B4024C89F;      // 0x02C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CF08EEEF4193CA50727E40BDFDFF6D70;      // 0x0310(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_30341EDC4005FF78A60D79A00D11776B;      // 0x0358(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2EA3C1784A96EC13EED29D956A036F9C;      // 0x03A0(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_0EEB33BE4F1351D6D0198887A0E69B31;// 0x03E8(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C362131E46A8E51D332600ABF5E352D1;// 0x0498(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A3FA9BC34B6BA744E3528CB824C1D43D;// 0x0550(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1C8F9E2C4B973EC080F01BA2AA7FF79B;// 0x0578(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B12EFDF949A91607BCD4D790161DA04B;// 0x05A0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C73B9CB94F6DF84859BC4DBFA3953F8F;// 0x05C8(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B9A0E62F4E174252A6508B96E358EC8B;// 0x0640(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ABE5860B4FE88816F6145D830103B393;// 0x06E0(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_M1887.AnimBP_M1887_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void STATIC_ExecuteUbergraph_AnimBP_M1887(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

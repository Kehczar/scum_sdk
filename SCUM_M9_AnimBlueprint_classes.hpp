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

// AnimBlueprintGeneratedClass M9_AnimBlueprint.M9_AnimBlueprint_C
// 0x04C8 (0x0758 - 0x0290)
class UM9_AnimBlueprint_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_54689EA6489D5413E4480FB2D3CE8144;      // 0x0298(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E3DE50234B01B9218AE3009B1E68FF78;// 0x02C8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FA52BD564E4930F288437D9657B700FE;      // 0x0340(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0E0FB12546F4D38F6FA791BBFF0DD171;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D3F0659B41D4F97FB684009B6FC82D31;      // 0x03D0(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_209CF5C74050B1ACEF314D87A460AC84;// 0x0418(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A1D641CA449A504961F0FE859587DFD1;      // 0x04C8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_70D906734C5E99EE3208459D5D792AC0;// 0x0510(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_026EFC6D4F1FB074C8B3418D003F772B;// 0x05B0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C904773F40278A77606FE3979C8773C5;// 0x0668(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_ED1A642A448886543AAAA3945D436C5A;// 0x0690(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DD6602A6487A71FE8B9D0095CB4C7585;// 0x06B8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_70EC20E942CB950F802AE98D27EBDDC6;// 0x06E0(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M9_AnimBlueprint.M9_AnimBlueprint_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M9_AnimBlueprint(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

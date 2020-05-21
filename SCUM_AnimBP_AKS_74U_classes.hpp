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

// AnimBlueprintGeneratedClass AnimBP_AKS_74U.AnimBP_AKS_74U_C
// 0x08B4 (0x0B44 - 0x0290)
class UAnimBP_AKS_74U_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9957B56D4ECF19F6C271D7BBAD9B0764;      // 0x0298(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_275EBD1E4C0607B2FEBE2294B32BFA75;      // 0x02C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_96BA225E4F3665B1F0D8E99BC579FF69;      // 0x0310(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_ACDC4B4846E8F1C133AAF7A0D9898E65;      // 0x0358(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_A410198E491529D79243C9B392E5AF8A;// 0x03A0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_790D3383498700C73F712A9BA6A84FC7;      // 0x0450(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B96D106845FBC3EE3DAB778E435402C9;// 0x0498(0x00B8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_84B5B7BC4997B098139BDCB8ADE4045E;// 0x0550(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8573EED64209F9800014BFA511AB4CE6;// 0x05C8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9320009D4301B1B2966241A05D7016E3;// 0x05F0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2944351B429E639F442EB2BCC094822D;// 0x0618(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5776B9914AC5CFC06C3AE6B838EC8E65;// 0x0640(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F757EF7643FE603957D919A091040AD4;// 0x06E0(0x0078)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_23F30FFD4C2F66EBC99D01A878391CBA;// 0x0758(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A516F1D74D9DB181895AFFBF768CD046;// 0x0860(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9AEDD9CF42A67B4579E326BF95A4BCB6;// 0x0880(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BCAC5C5349CB7CBC40C1BB84A9B64BFB;      // 0x08A0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B9CB061E4D40951C886FA8BC17C6EDD0;      // 0x08E8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_487C0B5C4BF6309CDBBDF4AC8A3A727C;      // 0x0930(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_F24C7AB64A3DB25F69078584A586E22E;// 0x0978(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B982A9434348C011861F0FBD6FC462F3;// 0x0A28(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_15960DBF459B771BEAEC0785730FE752;// 0x0A50(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3FDB60D84B2DC830BF010C9AA458706E;// 0x0A78(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0DACF6C1466DC186137D6AA207487AE9;// 0x0AA0(0x00A0)
	float                                              IronSightsHideAlpha;                                      // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_AKS_74U.AnimBP_AKS_74U_C");
		return ptr;
	}


	void STATIC_AnimGraph(struct FPoseLink* AnimGraph);
	void STATIC_BlueprintUpdateAnimation(float* DeltaTimeX);
	void STATIC_ExecuteUbergraph_AnimBP_AKS_74U(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// AnimBlueprintGeneratedClass AnimBP_M1_Garand.AnimBP_M1_Garand_C
// 0x08B4 (0x0B44 - 0x0290)
class UAnimBP_M1_Garand_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6F71B4C7423C95033A5C87A899B0AE29;      // 0x0298(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8294A27F44603971F65B4AA3275AC367;// 0x02C8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_691755064022CD1D993437B08F3558C2;      // 0x0340(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_79EB480F4ED06C783E5B86A362D43861;// 0x0388(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8A2B163847006A5819849C9892867A35;// 0x0400(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3DA257674074096421533B966A347072;      // 0x04A0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F7FB8E9945CB5CD5585EF0B4FF6A04E8;      // 0x04E8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DAF9C17E4713A7671A5F65B74E70EF4F;      // 0x0530(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3729C5464B0DF27BCE3D2889ABF2AEA1;// 0x0578(0x00B8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_29A75D9D44E7D309501EAC9E3447B978;// 0x0630(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BBA56529494844AC826F538A029C6D7A;// 0x06E0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_57F0E76F4A6C212A1A2083A0F8D678DF;// 0x0708(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_73918AA54FEA39C01E86DC9140B62004;// 0x0730(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3A70404C4F7B83CCBD5135A03F9E4E3A;// 0x0758(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_EB7B3A0745701C06608B379D5BAA8588;// 0x0860(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_017A45CB414C2EC6A2FC87A8AFD6DDD2;// 0x0880(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D4D64879460D8ADA338F37BA36D97AA5;      // 0x08A0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5C6BEDB04BCAF2D4E6716D84A203DE52;      // 0x08E8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_ADF2D13F45EDF8182589C489F998BFA9;      // 0x0930(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_640F68034A18FD4AE16DAC9D7FA16547;// 0x0978(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2892E3924312622DF88F90BEF27E68B9;// 0x0A28(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_57B96C204A65672CA4039293FCD19741;// 0x0A50(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D34EBBA14646A8BA756F7B9E636C6D22;// 0x0A78(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BF471F704A49032187886695F6150AFE;// 0x0AA0(0x00A0)
	float                                              IronSightsHideAlpha;                                      // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_M1_Garand.AnimBP_M1_Garand_C");
		return ptr;
	}


	void STATIC_AnimGraph(struct FPoseLink* AnimGraph);
	void STATIC_BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AnimBP_M1_Garand(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

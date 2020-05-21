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

// AnimBlueprintGeneratedClass ABP_M82A1.ABP_M82A1_C
// 0x0C01 (0x0E91 - 0x0290)
class UABP_M82A1_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B4C26A524C3A879BEEAAE2B87246E1DE;      // 0x0298(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9AFEF8874A57DC71D9F927B72BC85D16;// 0x02C8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2B6B9BF54582B20495D295A837F36208;// 0x0368(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DCA9F66C4D6CF2C62CC518A49395799E;// 0x03E0(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C2F862444A230AA06306D2A77BAFF736;      // 0x0458(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2A8C60C2470C03EA91EE759783737F93;// 0x04A0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E6E5ECBD4B8CE58946488995DE33F277;// 0x0558(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D1E9B1E04FDE799522F888BB8782AFD9;// 0x0660(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_95DDDABE4EA1F1259903EEB3BBAA24C8;// 0x0680(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0A62989242B02583C8C353893D6CCE52;      // 0x06A0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1E65462248CA9EBF7C40F8AB90110A18;      // 0x06E8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2425C32145119E1B0B7473B78462F93E;      // 0x0730(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_1DB6EF2F41DBC3E9C7D73EB54A0395DB;// 0x0778(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_59647FC843824CCB97DC47A6137ECDA7;// 0x0828(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9BA85DF44579CC7F881019917B0B0A1C;// 0x0850(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A0C7C32241402F62B8829FB5BD526B4C;// 0x0878(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FD9BB3B840188F19CD8A7DA5AB092933;// 0x08A0(0x00A0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_B04A3FFA4DAE2C0F46682AAFA031252F;// 0x0940(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_09863C7C4D8EA3A05341C1844DF7EFBA;      // 0x09F0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_ED233319401DD1A491C895AE8B529F7E;      // 0x0A38(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A274EFD64EF0DCD9B86288B875B6F817;      // 0x0A80(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5511535A4C1AB55A33BD608315099CE9;// 0x0AC8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_82A4473F4877E96E78A2988233917C1A;// 0x0AF0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FC30B461410776CB95640582E169F3F5;// 0x0B18(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_49BF05564F34BAD2F0A1C884BD058475;// 0x0B40(0x0108)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7C2612E442534660CDC488A3141836B4;// 0x0C48(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E9C7462A400CC451A84FBDBD6139B143;// 0x0CF8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C729EF474D79817CE6B3518357F84425;// 0x0D98(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A3049DA64231C4549A2B61BAC28E7600;// 0x0E10(0x0078)
	float                                              MuzzleHideAlpha;                                          // 0x0E88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IronSightsHideAlpha;                                      // 0x0E8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasMagazine;                                              // 0x0E90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_M82A1.ABP_M82A1_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void STATIC_ExecuteUbergraph_ABP_M82A1(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

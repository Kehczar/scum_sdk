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

// AnimBlueprintGeneratedClass ABP_Dick_Placeholder.ABP_Dick_Placeholder_C
// 0x0851 (0x0AC1 - 0x0270)
class UABP_Dick_Placeholder_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2A5A301C467D40D5F3121F9E53F5E420;      // 0x0278(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A3AF193D4E173862242D8EBBC183DB56;// 0x02A8(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C6D8051749F37D6A38E9588B4D6F632D;// 0x0348(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0368(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_97957A264606C62DC406D3975C3CF137;    // 0x0370(0x0190)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_EE8417DF480228976C276EB431423018;// 0x0500(0x0010)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0D611B1646B160A24734E7B95E5F8360;// 0x0510(0x0020)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_65307BAE4AA4247B84AE02A884293AE2;// 0x0530(0x0010)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_11BD75DF44CC1F6ED5DC1B953F398CD8; // 0x0540(0x0560)
	bool                                               EnabledIK;                                                // 0x0AA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0AA1(0x0003) MISSED OFFSET
	struct FVector                                     _targetIK;                                                // 0x0AA4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPenisInHands;                                           // 0x0AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0AB1(0x0003) MISSED OFFSET
	struct FVector                                     _handsIK;                                                 // 0x0AB4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInRange;                                                // 0x0AC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Dick_Placeholder.ABP_Dick_Placeholder_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintBeginPlay();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dick_Placeholder_AnimGraphNode_Fabrik_97957A264606C62DC406D3975C3CF137();
	void ExecuteUbergraph_ABP_Dick_Placeholder(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// AnimBlueprintGeneratedClass AnimBP_MP5.AnimBP_MP5_C
// 0x0614 (0x08A4 - 0x0290)
class UAnimBP_MP5_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_14D0526B4330C5B420E0899D55673CEE;      // 0x0298(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C71440D041A1A3CA5E1EA5935326905D;      // 0x02C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C77A62B84399B5C4E0CCFE957C198051;      // 0x0310(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CEDCDC874B2798D3EC433EBAB2940451;      // 0x0358(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_9988D62C49C9382968F37EA9797C20AB;// 0x03A0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7D58550644F9BCC0AAD16FAE46A3986C;      // 0x0450(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A6D12CA742F470267277ACA0985FC5D4;// 0x0498(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CA64D5A94B0A317E851990877BCC925C;// 0x0550(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FABA7B384E748C31C1A7A189B7D10980;// 0x0578(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_37A06538484225DD89B05CAE1221990F;// 0x05A0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F288C8354A3154CCC554CCB17F184557;// 0x05C8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_997D269E44BB49E9F7943492A3BD76B6;// 0x0668(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9F8846044F48E7321BC1F0BE4387EF4D;// 0x06E0(0x0078)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6548B5C24340251B3E1555964B9AD21F;// 0x0758(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_167CD3F745A693D57ECF028A7C885C0B;// 0x0860(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_EB8D611E41D62AE04EF0D3817810480F;// 0x0880(0x0020)
	float                                              IronSightsHideAlpha;                                      // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_MP5.AnimBP_MP5_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AnimBP_MP5(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

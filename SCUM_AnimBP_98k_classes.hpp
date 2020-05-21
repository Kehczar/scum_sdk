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

// AnimBlueprintGeneratedClass AnimBP_98k.AnimBP_98k_C
// 0x03B0 (0x0640 - 0x0290)
class UAnimBP_98k_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0F708E3748A18B419AA1E0882F8AEEE4;      // 0x0298(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_891236CB49838C106F263CAFF772BD33;      // 0x02C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_73EA1C70497B7D45194EB2900A8A9039;      // 0x0310(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_16E9936349121663A4A2D3B82235A53E;      // 0x0358(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BDFFBD16451874BA67144D9DCF11F2EC;      // 0x03A0(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2BAD4FEA4B914AF61DC15A8DC18AEE30;// 0x03E8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3050F5514C3F59F31232FA9D9DC6DEF0;// 0x0498(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4A50A33E46C805E02C119C8EBD7AA8A6;// 0x0510(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1E01117546A6779B535CFE92B5475CC8;// 0x05C8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B60841D948F211EB1D0B6084BC1D8CF1;// 0x05F0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_05E163AE4AA696AEA356C3B0BC5084FA;// 0x0618(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_98k.AnimBP_98k_C");
		return ptr;
	}


	void STATIC_AnimGraph(struct FPoseLink* AnimGraph);
	void STATIC_ExecuteUbergraph_AnimBP_98k(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

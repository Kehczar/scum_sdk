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

// AnimBlueprintGeneratedClass ABP_WireCutters.ABP_WireCutters_C
// 0x0098 (0x0308 - 0x0270)
class UABP_WireCutters_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2FD1880A497BB5B3F85D0BBB2B25C9CA;      // 0x0278(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_E2C5ED4046165503F441B299F9722454;// 0x02A8(0x0018)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A554059449E6F4C2213809ACD8F5DA49;      // 0x02C0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_WireCutters.ABP_WireCutters_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_WireCutters(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

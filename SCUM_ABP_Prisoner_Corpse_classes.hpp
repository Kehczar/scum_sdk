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

// AnimBlueprintGeneratedClass ABP_Prisoner_Corpse.ABP_Prisoner_Corpse_C
// 0x00B0 (0x0320 - 0x0270)
class UABP_Prisoner_Corpse_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CE8B49574B94CF76562F6B83F66C3949;      // 0x0278(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66EA83E9479A6433740E5682F7CE49BE;// 0x02A8(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Prisoner_Corpse.ABP_Prisoner_Corpse_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_Prisoner_Corpse(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

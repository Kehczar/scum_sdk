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

// AnimBlueprintGeneratedClass ABP_RecurveBow.ABP_RecurveBow_C
// 0x0700 (0x09B0 - 0x02B0)
class UABP_RecurveBow_C : public UWeaponBowAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7B6C0BBB43B1B23F7C9229880C0E4AFD;      // 0x02B8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_772416FC4A493266CFC6DDB68C681BF2;      // 0x02E8(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_DFEE4DA0468E3FC5F1FEA480E40D8941;// 0x0330(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0C41964C428B1CC25ACC778A70CC0DEE;      // 0x03E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FD4E7C5544E6700AA4118CBAAD7F66DF;// 0x0428(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B309A4E84F9C0E1AB0E418A8F427BFD8;      // 0x04A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8476389847679FBDBA9E22B94BEC40A7;// 0x04E8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_98BC4A8F431377712B0859A925E349B3;      // 0x0560(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E0B3C6DB4B7FDAD7440FF7B6F03E18E6;// 0x05A8(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_365914264491D9C6BB6F5DB54EE129A4;// 0x0620(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_92A0E4F54761CBBB92FCDCA874E4A4A8;      // 0x06D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_89F17B484C0E41C9FBABC881FE344F86;// 0x0718(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_65FB8A434F04B8BD834817958C09868B;      // 0x0790(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5C77F5A847FC405E14CD9EAAF24C8FEB;// 0x07D8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_207BFB4845866CCB66D412B87B6D2EA2;      // 0x0850(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_412570A1495126AED2A3C48354535811;// 0x0898(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DBEF1CCA4F449E5C5FF4BC9F4F219B81;// 0x0910(0x00A0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_RecurveBow.ABP_RecurveBow_C");
		return ptr;
	}


	void STATIC_AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_RecurveBow(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

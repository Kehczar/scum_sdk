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

// AnimBlueprintGeneratedClass ABP_ImpBow.ABP_ImpBow_C
// 0x0A30 (0x0CE0 - 0x02B0)
class UABP_ImpBow_C : public UWeaponBowAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E7AC62BB43027BFC9DA8B8A80E322BDF;      // 0x02B8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F66076D348ED8EA6C6E9C0BEBC55AE3E;      // 0x02E8(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_78D1E9494663CA6A2E0C30A3F2143D9B;// 0x0330(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_610418F748E9F7C4B71EAC852D6025CA;      // 0x03E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_58C0132C42B2707ECA93DF9B11A623D8;// 0x0428(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_18FE19494C12EDF78CA07E8592D4E446;      // 0x04A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_53BB1AF0403D6092259B0BA4EE0305BB;// 0x04E8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2165669A44107B2F3B4D1DACDD29F12C;      // 0x0560(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_61CCCA61454907A51ADA8CB5776CD363;// 0x05A8(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_86FCABB541201D7500F416A24B773D00;// 0x0620(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_109262E345B5E1C60A79B99545456250;      // 0x06D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9D30289D4F2DE89FA378C89AC5380883;// 0x0718(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_642794974E39FCB7E1AAC38D0FE860B1;      // 0x0790(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0826564B4614A09D286EA290B4D3FC79;// 0x07D8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7421863E45E8E236B9D101B2DBA556A4;      // 0x0850(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_46D14C0A4A52443D7695258979001F76;// 0x0898(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_331AC3E6415A02194111D9B10FFC7552;// 0x0910(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9011B8E54D371B8C9203BA83EBEB946A;// 0x09B0(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_96A89FA34139BC9B9CD45BA334E84FC5;// 0x0A28(0x00C8)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_C86820F24E0A1B857B96989A0456E41A;    // 0x0AF0(0x01B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_26A1847C44DB036D3E37B6A6BF58049A;// 0x0CA0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_515B1C5F492C0E4464EAA8B257CCE4C9;// 0x0CC0(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_ImpBow.ABP_ImpBow_C");
		return ptr;
	}


	void STATIC_AnimGraph(struct FPoseLink* AnimGraph);
	void STATIC_ExecuteUbergraph_ABP_ImpBow(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

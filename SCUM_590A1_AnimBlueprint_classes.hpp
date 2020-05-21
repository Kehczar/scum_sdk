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

// AnimBlueprintGeneratedClass 590A1_AnimBlueprint.590A1_AnimBlueprint_C
// 0x04FC (0x078C - 0x0290)
class U590A1_AnimBlueprint_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A0732F514E41CDA70A189DB2A8587585;      // 0x0298(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_20D921744FF7B8D5AE28BBB0697A9B4F;      // 0x02C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_585B30A942EDA8D801F80393698207FD;      // 0x0310(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_44AF5F3B41C866CB84DAD5A10B4B4418;      // 0x0358(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_89A79703467B580947D221946A82A8AF;// 0x03A0(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_50E692354EBA154388B849A682E906BB;// 0x0450(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_532CC22A404D8A510E58188E48BDEAF3;// 0x0508(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E5DA40B948B50684FFC35296AB743A9F;// 0x0530(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1B20A9D24ACB672001FA4EA6F62D8E67;// 0x0558(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_00D30FED4EB482B7C3EBE3A2EB48E44C;// 0x0580(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6051BB2F409D40687D1863BEE15AF182;      // 0x05F8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_561A74914456A1C12221C48F1B74D990;// 0x0640(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_122D40834A8B1A8276E558A18F9CB098;// 0x0748(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_679F031C4DC345D9CD9615BC145E6EE9;// 0x0768(0x0020)
	float                                              IronSightsHideAlpha;                                      // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass 590A1_AnimBlueprint.590A1_AnimBlueprint_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_590A1_AnimBlueprint(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

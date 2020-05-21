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

// AnimBlueprintGeneratedClass ABP_FlareGun.ABP_FlareGun_C
// 0x0768 (0x09F8 - 0x0290)
class UABP_FlareGun_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E2CD7DB145B2FFAC8C224FA1C685728D;      // 0x0298(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F7D34D48480BD8DC8FA08986DD316A3F;// 0x02C8(0x00B8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EB8B771B40325C492482C6B23DE002D5;// 0x0380(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8F56E5614643F4D7D5AAD2AA22167A48;// 0x03F8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_79F43B9E4698B8AF30D4AC9720468397;      // 0x0470(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7EDA254645D14F1DB6B55AA161606D34;      // 0x04B8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_96BCD62749B23AFB806C1DB11489A527;      // 0x0500(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7DE38D0A4B59EA671677A0A0A5014229;      // 0x0548(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_97AF8B964FBA7F814E47C3813019342C;// 0x0590(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CCC4FD1D42CC4BF774FFCDB5B13B00C8;// 0x0640(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5C5A5C6843C6F1963A08939A349D91E3;// 0x0668(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_07191779482CEE2484701E8FBA355AB8;// 0x0690(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FD740D0B43202D1314C686942E8CBA8C;// 0x06B8(0x00A0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_158EBF7146449F799F06049203F3A0EF;// 0x0758(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_28D38B25488AEA8F765955BDE66D6118;      // 0x0808(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D598AF6C429EE3BD6AC61895000B0726;      // 0x0850(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_17BCABF841031FDC316405A19C5A42D7;      // 0x0898(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1741308A4E88EFD883DFB898AE9FF0B7;// 0x08E0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0F54C0ED48ED463F61535396455D4A1B;// 0x0908(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0BEC0551422AF4ED6E6699A73BDF3A3B;// 0x0930(0x0028)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_DD2BBA704D7773209FD6AB9E5651EAE3;// 0x0958(0x00A0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_FlareGun.ABP_FlareGun_C");
		return ptr;
	}


	void STATIC_AnimGraph(struct FPoseLink* AnimGraph);
	void STATIC_ExecuteUbergraph_ABP_FlareGun(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

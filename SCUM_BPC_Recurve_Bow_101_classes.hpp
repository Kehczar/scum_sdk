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

// BlueprintGeneratedClass BPC_Recurve_Bow_101.BPC_Recurve_Bow_100_C
// 0x0000 (0x16A8 - 0x16A8)
class ABPC_Recurve_Bow_100_C : public ARecurve_Bow_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Recurve_Bow_101.BPC_Recurve_Bow_100_C");
		return ptr;
	}


	void STATIC_ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Recurve_Bow(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

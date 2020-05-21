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

// BlueprintGeneratedClass Fireworks_Big.Fireworks_Big_C
// 0x0000 (0x0760 - 0x0760)
class AFireworks_Big_C : public AFireworks_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Fireworks_Big.Fireworks_Big_C");
		return ptr;
	}


	void STATIC_LaunchShell();
	void STATIC_ExecuteUbergraph_Fireworks_Small(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_ExplosionCameraShake.BP_ExplosionCameraShake_C
// 0x0000 (0x0160 - 0x0160)
class UBP_ExplosionCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExplosionCameraShake.BP_ExplosionCameraShake_C");
		return ptr;
	}


	void ReceiveStopShake(bool* bImmediately);
	void ReceivePlayShake(float* Scale);
	bool ReceiveIsFinished();
	void BlueprintUpdateCameraShake(float* DeltaTime, float* Alpha, struct FMinimalViewInfo* POV, struct FMinimalViewInfo* ModifiedPOV);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

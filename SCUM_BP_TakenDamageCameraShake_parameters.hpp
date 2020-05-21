#pragma once

// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Engine.CameraShake.ReceiveStopShake
struct UBP_TakenDamageCameraShake_C_ReceiveStopShake_Params
{
	bool*                                              bImmediately;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CameraShake.ReceivePlayShake
struct UBP_TakenDamageCameraShake_C_ReceivePlayShake_Params
{
	float*                                             Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.CameraShake.ReceiveIsFinished
struct UBP_TakenDamageCameraShake_C_ReceiveIsFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.CameraShake.BlueprintUpdateCameraShake
struct UBP_TakenDamageCameraShake_C_BlueprintUpdateCameraShake_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMinimalViewInfo*                           POV;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FMinimalViewInfo                            ModifiedPOV;                                              // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

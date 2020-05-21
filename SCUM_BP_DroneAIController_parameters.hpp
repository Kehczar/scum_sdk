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

// Function ConZ.DroneAIController.SensingComponent_OnHearNoise
struct ABP_DroneAIController_C_SensingComponent_OnHearNoise_Params
{
	class APawn**                                      NoiseInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.DroneAIController.NavigationResultHandler
struct ABP_DroneAIController_C_NavigationResultHandler_Params
{
	struct FDoNNavigationQueryData*                    QueryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.DroneAIController.FollowCharacter
struct ABP_DroneAIController_C_FollowCharacter_Params
{
	class ACharacter**                                 characterToFollow;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.DroneAIController.FindWayTo
struct ABP_DroneAIController_C_FindWayTo_Params
{
	struct FVector*                                    Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConZ.DroneAIController.DynamicCollisionListener
struct ABP_DroneAIController_C_DynamicCollisionListener_Params
{
	struct FDonNavigationDynamicCollisionPayload*      CollisionData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

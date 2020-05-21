// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConZ.DroneAIController.SensingComponent_OnHearNoise
// ()
// Parameters:
// class APawn**                  NoiseInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DroneAIController_C::SensingComponent_OnHearNoise(class APawn** NoiseInstigator, struct FVector* Location, float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.DroneAIController.SensingComponent_OnHearNoise");

	ABP_DroneAIController_C_SensingComponent_OnHearNoise_Params params;
	params.NoiseInstigator = NoiseInstigator;
	params.Location = Location;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.DroneAIController.NavigationResultHandler
// ()
// Parameters:
// struct FDoNNavigationQueryData* QueryData                      (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_DroneAIController_C::NavigationResultHandler(struct FDoNNavigationQueryData* QueryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.DroneAIController.NavigationResultHandler");

	ABP_DroneAIController_C_NavigationResultHandler_Params params;
	params.QueryData = QueryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.DroneAIController.FollowCharacter
// ()
// Parameters:
// class ACharacter**             characterToFollow              (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DroneAIController_C::FollowCharacter(class ACharacter** characterToFollow)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.DroneAIController.FollowCharacter");

	ABP_DroneAIController_C_FollowCharacter_Params params;
	params.characterToFollow = characterToFollow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.DroneAIController.FindWayTo
// ()
// Parameters:
// struct FVector*                Destination                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DroneAIController_C::FindWayTo(struct FVector* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.DroneAIController.FindWayTo");

	ABP_DroneAIController_C_FindWayTo_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.DroneAIController.DynamicCollisionListener
// ()
// Parameters:
// struct FDonNavigationDynamicCollisionPayload* CollisionData                  (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_DroneAIController_C::DynamicCollisionListener(struct FDonNavigationDynamicCollisionPayload* CollisionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.DroneAIController.DynamicCollisionListener");

	ABP_DroneAIController_C_DynamicCollisionListener_Params params;
	params.CollisionData = CollisionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

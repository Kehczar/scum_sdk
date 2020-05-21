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

// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
// ()
// Parameters:
// TArray<struct FChaosTrailingEventData> TrailingEvents                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// EChaosTrailingSortMethod*      SortMethod                     (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::SortTrailingEvents(EChaosTrailingSortMethod* SortMethod, TArray<struct FChaosTrailingEventData>* TrailingEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents");

	UChaosDestructionListener_SortTrailingEvents_Params params;
	params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TrailingEvents != nullptr)
		*TrailingEvents = params.TrailingEvents;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
// ()
// Parameters:
// TArray<struct FChaosCollisionEventData> CollisionEvents                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// EChaosCollisionSortMethod*     SortMethod                     (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::SortCollisionEvents(EChaosCollisionSortMethod* SortMethod, TArray<struct FChaosCollisionEventData>* CollisionEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents");

	UChaosDestructionListener_SortCollisionEvents_Params params;
	params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CollisionEvents != nullptr)
		*CollisionEvents = params.CollisionEvents;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
// ()
// Parameters:
// TArray<struct FChaosBreakingEventData> BreakingEvents                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// EChaosBreakingSortMethod*      SortMethod                     (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::SortBreakingEvents(EChaosBreakingSortMethod* SortMethod, TArray<struct FChaosBreakingEventData>* BreakingEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents");

	UChaosDestructionListener_SortBreakingEvents_Params params;
	params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BreakingEvents != nullptr)
		*BreakingEvents = params.BreakingEvents;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
// ()
// Parameters:
// struct FChaosTrailingEventRequestSettings* InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void UChaosDestructionListener::SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings* InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings");

	UChaosDestructionListener_SetTrailingEventRequestSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
// ()
// Parameters:
// bool*                          bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::SetTrailingEventEnabled(bool* bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled");

	UChaosDestructionListener_SetTrailingEventEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
// ()
// Parameters:
// struct FChaosCollisionEventRequestSettings* InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void UChaosDestructionListener::SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings* InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings");

	UChaosDestructionListener_SetCollisionEventRequestSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
// ()
// Parameters:
// bool*                          bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::SetCollisionEventEnabled(bool* bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled");

	UChaosDestructionListener_SetCollisionEventEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
// ()
// Parameters:
// struct FChaosBreakingEventRequestSettings* InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)

void UChaosDestructionListener::SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings* InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings");

	UChaosDestructionListener_SetBreakingEventRequestSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
// ()
// Parameters:
// bool*                          bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::SetBreakingEventEnabled(bool* bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled");

	UChaosDestructionListener_SetBreakingEventEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
// ()
// Parameters:
// class AGeometryCollectionActor** GeometryCollectionActor        (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::RemoveGeometryCollectionActor(class AGeometryCollectionActor** GeometryCollectionActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor");

	UChaosDestructionListener_RemoveGeometryCollectionActor_Params params;
	params.GeometryCollectionActor = GeometryCollectionActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
// ()
// Parameters:
// class AChaosSolverActor**      ChaosSolverActor               (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::RemoveChaosSolverActor(class AChaosSolverActor** ChaosSolverActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor");

	UChaosDestructionListener_RemoveChaosSolverActor_Params params;
	params.ChaosSolverActor = ChaosSolverActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UChaosDestructionListener::IsEventListening()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening");

	UChaosDestructionListener_IsEventListening_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
// ()
// Parameters:
// class AGeometryCollectionActor** GeometryCollectionActor        (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::AddGeometryCollectionActor(class AGeometryCollectionActor** GeometryCollectionActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor");

	UChaosDestructionListener_AddGeometryCollectionActor_Params params;
	params.GeometryCollectionActor = GeometryCollectionActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
// ()
// Parameters:
// class AChaosSolverActor**      ChaosSolverActor               (Parm, ZeroConstructor, IsPlainOldData)

void UChaosDestructionListener::AddChaosSolverActor(class AChaosSolverActor** ChaosSolverActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor");

	UChaosDestructionListener_AddChaosSolverActor_Params params;
	params.ChaosSolverActor = ChaosSolverActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
// ()
// Parameters:
// struct FVector*                Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGeometryCollectionActor::RaycastSingle(struct FVector* Start, struct FVector* End, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle");

	AGeometryCollectionActor_RaycastSingle_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
// ()
// Parameters:
// bool*                          bNewNotifyBreaks               (Parm, ZeroConstructor, IsPlainOldData)

void UGeometryCollectionComponent::SetNotifyBreaks(bool* bNewNotifyBreaks)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks");

	UGeometryCollectionComponent_SetNotifyBreaks_Params params;
	params.bNewNotifyBreaks = bNewNotifyBreaks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
// ()
// Parameters:
// struct FChaosPhysicsCollisionInfo* CollisionInfo                  (ConstParm, Parm, OutParm, ReferenceParm)

void UGeometryCollectionComponent::ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo* CollisionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision");

	UGeometryCollectionComponent_ReceivePhysicsCollision_Params params;
	params.CollisionInfo = CollisionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
// ()
// Parameters:
// class UGeometryCollectionComponent** FracturedComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent** FracturedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature");

	UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params params;
	params.FracturedComponent = FracturedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
// ()
// Parameters:
// class UGeometryCollectionComponent** FracturedComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent** FracturedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature");

	UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params params;
	params.FracturedComponent = FracturedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
// ()
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// EGeometryCollectionPhysicsTypeEnum* Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemMetaData**   MetaData                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFieldNodeBase**         Field                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGeometryCollectionComponent::ApplyPhysicsField(bool* Enabled, EGeometryCollectionPhysicsTypeEnum* Target, class UFieldSystemMetaData** MetaData, class UFieldNodeBase** Field)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField");

	UGeometryCollectionComponent_ApplyPhysicsField_Params params;
	params.Enabled = Enabled;
	params.Target = Target;
	params.MetaData = MetaData;
	params.Field = Field;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
// ()
// Parameters:
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Position                       (Parm, ZeroConstructor, IsPlainOldData)

void UGeometryCollectionComponent::ApplyKinematicField(float* Radius, struct FVector* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField");

	UGeometryCollectionComponent_ApplyKinematicField_Params params;
	params.Radius = Radius;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
// ()
// Parameters:
// struct FChaosPhysicsCollisionInfo* CollisionInfo                  (ConstParm, Parm, OutParm, ReferenceParm)

void USkeletalMeshSimulationComponent::ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo* CollisionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision");

	USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Params params;
	params.CollisionInfo = CollisionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
// ()
// Parameters:
// struct FChaosPhysicsCollisionInfo* CollisionInfo                  (ConstParm, Parm, OutParm, ReferenceParm)

void UStaticMeshSimulationComponent::ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo* CollisionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision");

	UStaticMeshSimulationComponent_ReceivePhysicsCollision_Params params;
	params.CollisionInfo = CollisionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
// ()

void UStaticMeshSimulationComponent::ForceRecreatePhysicsState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState");

	UStaticMeshSimulationComponent_ForceRecreatePhysicsState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

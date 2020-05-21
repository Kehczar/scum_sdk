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

// Function Engine.ActorComponent.ToggleActive
// ()

void UMagicLeapHandMeshingComponent::ToggleActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.ToggleActive");

	UMagicLeapHandMeshingComponent_ToggleActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetTickGroup
// ()
// Parameters:
// TEnumAsByte<ETickingGroup>*    NewTickGroup                   (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapHandMeshingComponent::SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.SetTickGroup");

	UMagicLeapHandMeshingComponent_SetTickGroup_Params params;
	params.NewTickGroup = NewTickGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetTickableWhenPaused
// ()
// Parameters:
// bool*                          bTickableWhenPaused            (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapHandMeshingComponent::SetTickableWhenPaused(bool* bTickableWhenPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.SetTickableWhenPaused");

	UMagicLeapHandMeshingComponent_SetTickableWhenPaused_Params params;
	params.bTickableWhenPaused = bTickableWhenPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetIsReplicated
// ()
// Parameters:
// bool*                          ShouldReplicate                (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapHandMeshingComponent::SetIsReplicated(bool* ShouldReplicate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.SetIsReplicated");

	UMagicLeapHandMeshingComponent_SetIsReplicated_Params params;
	params.ShouldReplicate = ShouldReplicate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetComponentTickInterval
// ()
// Parameters:
// float*                         TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapHandMeshingComponent::SetComponentTickInterval(float* TickInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.SetComponentTickInterval");

	UMagicLeapHandMeshingComponent_SetComponentTickInterval_Params params;
	params.TickInterval = TickInterval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetComponentTickEnabled
// ()
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapHandMeshingComponent::SetComponentTickEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.SetComponentTickEnabled");

	UMagicLeapHandMeshingComponent_SetComponentTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetAutoActivate
// ()
// Parameters:
// bool*                          bNewAutoActivate               (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapHandMeshingComponent::SetAutoActivate(bool* bNewAutoActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.SetAutoActivate");

	UMagicLeapHandMeshingComponent_SetAutoActivate_Params params;
	params.bNewAutoActivate = bNewAutoActivate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.SetActive
// ()
// Parameters:
// bool*                          bNewActive                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapHandMeshingComponent::SetActive(bool* bNewActive, bool* bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.SetActive");

	UMagicLeapHandMeshingComponent_SetActive_Params params;
	params.bNewActive = bNewActive;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
// ()
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMagicLeapHandMeshingComponent::RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.RemoveTickPrerequisiteComponent");

	UMagicLeapHandMeshingComponent_RemoveTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.RemoveTickPrerequisiteActor
// ()
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapHandMeshingComponent::RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.RemoveTickPrerequisiteActor");

	UMagicLeapHandMeshingComponent_RemoveTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapHandMeshingComponent::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.ReceiveTick");

	UMagicLeapHandMeshingComponent_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapHandMeshingComponent::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.ReceiveEndPlay");

	UMagicLeapHandMeshingComponent_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ReceiveBeginPlay
// ()

void UMagicLeapHandMeshingComponent::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.ReceiveBeginPlay");

	UMagicLeapHandMeshingComponent_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.OnRep_IsActive
// ()

void UMagicLeapHandMeshingComponent::OnRep_IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.OnRep_IsActive");

	UMagicLeapHandMeshingComponent_OnRep_IsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.K2_DestroyComponent
// ()
// Parameters:
// class UObject**                Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapHandMeshingComponent::K2_DestroyComponent(class UObject** Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.K2_DestroyComponent");

	UMagicLeapHandMeshingComponent_K2_DestroyComponent_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.IsComponentTickEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandMeshingComponent::IsComponentTickEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.IsComponentTickEnabled");

	UMagicLeapHandMeshingComponent_IsComponentTickEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.IsBeingDestroyed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandMeshingComponent::IsBeingDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.IsBeingDestroyed");

	UMagicLeapHandMeshingComponent_IsBeingDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.IsActive
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandMeshingComponent::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.IsActive");

	UMagicLeapHandMeshingComponent_IsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.GetOwner
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UMagicLeapHandMeshingComponent::GetOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.GetOwner");

	UMagicLeapHandMeshingComponent_GetOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.GetComponentTickInterval
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMagicLeapHandMeshingComponent::GetComponentTickInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.GetComponentTickInterval");

	UMagicLeapHandMeshingComponent_GetComponentTickInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.Deactivate
// ()

void UMagicLeapHandMeshingComponent::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.Deactivate");

	UMagicLeapHandMeshingComponent_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.ComponentHasTag
// ()
// Parameters:
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHandMeshingComponent::ComponentHasTag(struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.ComponentHasTag");

	UMagicLeapHandMeshingComponent_ComponentHasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.ActorComponent.AddTickPrerequisiteComponent
// ()
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMagicLeapHandMeshingComponent::AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.AddTickPrerequisiteComponent");

	UMagicLeapHandMeshingComponent_AddTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.AddTickPrerequisiteActor
// ()
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapHandMeshingComponent::AddTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.AddTickPrerequisiteActor");

	UMagicLeapHandMeshingComponent_AddTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.ActorComponent.Activate
// ()
// Parameters:
// bool*                          bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapHandMeshingComponent::Activate(bool* bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.ActorComponent.Activate");

	UMagicLeapHandMeshingComponent_Activate_Params params;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

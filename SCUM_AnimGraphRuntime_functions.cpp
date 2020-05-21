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

// Function Engine.AnimInstance.UnlockAIResources
// ()
// Parameters:
// bool*                          bUnlockMovement                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UnlockAILogic                  (Parm, ZeroConstructor, IsPlainOldData)

void UAnimCustomInstance::UnlockAIResources(bool* bUnlockMovement, bool* UnlockAILogic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.UnlockAIResources");

	UAnimCustomInstance_UnlockAIResources_Params params;
	params.bUnlockMovement = bUnlockMovement;
	params.UnlockAILogic = UnlockAILogic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.UnlinkAnimClassLayers
// ()
// Parameters:
// class UClass**                 InClass                        (Parm, ZeroConstructor, IsPlainOldData)

void UAnimCustomInstance::UnlinkAnimClassLayers(class UClass** InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.UnlinkAnimClassLayers");

	UAnimCustomInstance_UnlinkAnimClassLayers_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.TryGetPawnOwner
// ()
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* UAnimCustomInstance::TryGetPawnOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.TryGetPawnOwner");

	UAnimCustomInstance_TryGetPawnOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.StopSlotAnimation
// ()
// Parameters:
// float*                         InBlendOutTime                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SlotNodeName                   (Parm, ZeroConstructor, IsPlainOldData)

void UAnimCustomInstance::StopSlotAnimation(float* InBlendOutTime, struct FName* SlotNodeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.StopSlotAnimation");

	UAnimCustomInstance_StopSlotAnimation_Params params;
	params.InBlendOutTime = InBlendOutTime;
	params.SlotNodeName = SlotNodeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.SnapshotPose
// ()
// Parameters:
// struct FPoseSnapshot           Snapshot                       (Parm, OutParm, ReferenceParm)

void UAnimCustomInstance::SnapshotPose(struct FPoseSnapshot* Snapshot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.SnapshotPose");

	UAnimCustomInstance_SnapshotPose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Snapshot != nullptr)
		*Snapshot = params.Snapshot;
}


// Function Engine.AnimInstance.SetRootMotionMode
// ()
// Parameters:
// TEnumAsByte<ERootMotionMode>*  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAnimCustomInstance::SetRootMotionMode(TEnumAsByte<ERootMotionMode>* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.SetRootMotionMode");

	UAnimCustomInstance_SetRootMotionMode_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.SetMorphTarget
// ()
// Parameters:
// struct FName*                  MorphTargetName                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAnimCustomInstance::SetMorphTarget(struct FName* MorphTargetName, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.SetMorphTarget");

	UAnimCustomInstance_SetMorphTarget_Params params;
	params.MorphTargetName = MorphTargetName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.SavePoseSnapshot
// ()
// Parameters:
// struct FName*                  SnapshotName                   (Parm, ZeroConstructor, IsPlainOldData)

void UAnimCustomInstance::SavePoseSnapshot(struct FName* SnapshotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.SavePoseSnapshot");

	UAnimCustomInstance_SavePoseSnapshot_Params params;
	params.SnapshotName = SnapshotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.ResetDynamics
// ()
// Parameters:
// ETeleportType*                 InTeleportType                 (Parm, ZeroConstructor, IsPlainOldData)

void UAnimCustomInstance::ResetDynamics(ETeleportType* InTeleportType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.ResetDynamics");

	UAnimCustomInstance_ResetDynamics_Params params;
	params.InTeleportType = InTeleportType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage
// ()
// Parameters:
// class UAnimSequenceBase**      Asset                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SlotNodeName                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendInTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendOutTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LoopCount                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendOutTriggerTime            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InTimeToStartMontageAt         (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* UAnimCustomInstance::PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase** Asset, struct FName* SlotNodeName, float* BlendInTime, float* BlendOutTime, float* InPlayRate, int* LoopCount, float* BlendOutTriggerTime, float* InTimeToStartMontageAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage");

	UAnimCustomInstance_PlaySlotAnimationAsDynamicMontage_Params params;
	params.Asset = Asset;
	params.SlotNodeName = SlotNodeName;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.InPlayRate = InPlayRate;
	params.LoopCount = LoopCount;
	params.BlendOutTriggerTime = BlendOutTriggerTime;
	params.InTimeToStartMontageAt = InTimeToStartMontageAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.PlaySlotAnimation
// ()
// Parameters:
// class UAnimSequenceBase**      Asset                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SlotNodeName                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendInTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendOutTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LoopCount                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::PlaySlotAnimation(class UAnimSequenceBase** Asset, struct FName* SlotNodeName, float* BlendInTime, float* BlendOutTime, float* InPlayRate, int* LoopCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.PlaySlotAnimation");

	UAnimCustomInstance_PlaySlotAnimation_Params params;
	params.Asset = Asset;
	params.SlotNodeName = SlotNodeName;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.InPlayRate = InPlayRate;
	params.LoopCount = LoopCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_Stop
// ()
// Parameters:
// float*                         InBlendOutTime                 (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnimCustomInstance::Montage_Stop(float* InBlendOutTime, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_Stop");

	UAnimCustomInstance_Montage_Stop_Params params;
	params.InBlendOutTime = InBlendOutTime;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_SetPosition
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewPosition                    (Parm, ZeroConstructor, IsPlainOldData)

void UAnimCustomInstance::Montage_SetPosition(class UAnimMontage** Montage, float* NewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_SetPosition");

	UAnimCustomInstance_Montage_SetPosition_Params params;
	params.Montage = Montage;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_SetPlayRate
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewPlayRate                    (Parm, ZeroConstructor, IsPlainOldData)

void UAnimCustomInstance::Montage_SetPlayRate(class UAnimMontage** Montage, float* NewPlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_SetPlayRate");

	UAnimCustomInstance_Montage_SetPlayRate_Params params;
	params.Montage = Montage;
	params.NewPlayRate = NewPlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_SetNextSection
// ()
// Parameters:
// struct FName*                  SectionNameToChange            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NextSection                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnimCustomInstance::Montage_SetNextSection(struct FName* SectionNameToChange, struct FName* NextSection, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_SetNextSection");

	UAnimCustomInstance_Montage_SetNextSection_Params params;
	params.SectionNameToChange = SectionNameToChange;
	params.NextSection = NextSection;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_Resume
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnimCustomInstance::Montage_Resume(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_Resume");

	UAnimCustomInstance_Montage_Resume_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_Play
// ()
// Parameters:
// class UAnimMontage**           MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// EMontagePlayReturnType*        ReturnValueType                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InTimeToStartMontageAt         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bStopAllMontages               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::Montage_Play(class UAnimMontage** MontageToPlay, float* InPlayRate, EMontagePlayReturnType* ReturnValueType, float* InTimeToStartMontageAt, bool* bStopAllMontages)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_Play");

	UAnimCustomInstance_Montage_Play_Params params;
	params.MontageToPlay = MontageToPlay;
	params.InPlayRate = InPlayRate;
	params.ReturnValueType = ReturnValueType;
	params.InTimeToStartMontageAt = InTimeToStartMontageAt;
	params.bStopAllMontages = bStopAllMontages;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_Pause
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnimCustomInstance::Montage_Pause(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_Pause");

	UAnimCustomInstance_Montage_Pause_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_JumpToSectionsEnd
// ()
// Parameters:
// struct FName*                  SectionName                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnimCustomInstance::Montage_JumpToSectionsEnd(struct FName* SectionName, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_JumpToSectionsEnd");

	UAnimCustomInstance_Montage_JumpToSectionsEnd_Params params;
	params.SectionName = SectionName;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_JumpToSection
// ()
// Parameters:
// struct FName*                  SectionName                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnimCustomInstance::Montage_JumpToSection(struct FName* SectionName, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_JumpToSection");

	UAnimCustomInstance_Montage_JumpToSection_Params params;
	params.SectionName = SectionName;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_IsPlaying
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimCustomInstance::Montage_IsPlaying(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_IsPlaying");

	UAnimCustomInstance_Montage_IsPlaying_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_IsActive
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimCustomInstance::Montage_IsActive(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_IsActive");

	UAnimCustomInstance_Montage_IsActive_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetPosition
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::Montage_GetPosition(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetPosition");

	UAnimCustomInstance_Montage_GetPosition_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetPlayRate
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::Montage_GetPlayRate(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetPlayRate");

	UAnimCustomInstance_Montage_GetPlayRate_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetIsStopped
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimCustomInstance::Montage_GetIsStopped(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetIsStopped");

	UAnimCustomInstance_Montage_GetIsStopped_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetCurrentSection
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UAnimCustomInstance::Montage_GetCurrentSection(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetCurrentSection");

	UAnimCustomInstance_Montage_GetCurrentSection_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetBlendTime
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::Montage_GetBlendTime(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetBlendTime");

	UAnimCustomInstance_Montage_GetBlendTime_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.LockAIResources
// ()
// Parameters:
// bool*                          bLockMovement                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          LockAILogic                    (Parm, ZeroConstructor, IsPlainOldData)

void UAnimCustomInstance::LockAIResources(bool* bLockMovement, bool* LockAILogic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.LockAIResources");

	UAnimCustomInstance_LockAIResources_Params params;
	params.bLockMovement = bLockMovement;
	params.LockAILogic = LockAILogic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.LinkAnimGraphByTag
// ()
// Parameters:
// struct FName*                  InTag                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 InClass                        (Parm, ZeroConstructor, IsPlainOldData)

void UAnimCustomInstance::LinkAnimGraphByTag(struct FName* InTag, class UClass** InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.LinkAnimGraphByTag");

	UAnimCustomInstance_LinkAnimGraphByTag_Params params;
	params.InTag = InTag;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.LinkAnimClassLayers
// ()
// Parameters:
// class UClass**                 InClass                        (Parm, ZeroConstructor, IsPlainOldData)

void UAnimCustomInstance::LinkAnimClassLayers(class UClass** InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.LinkAnimClassLayers");

	UAnimCustomInstance_LinkAnimClassLayers_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.IsSyncGroupBetweenMarkers
// ()
// Parameters:
// struct FName*                  InSyncGroupName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PreviousMarker                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NextMarker                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRespectMarkerOrder            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimCustomInstance::IsSyncGroupBetweenMarkers(struct FName* InSyncGroupName, struct FName* PreviousMarker, struct FName* NextMarker, bool* bRespectMarkerOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.IsSyncGroupBetweenMarkers");

	UAnimCustomInstance_IsSyncGroupBetweenMarkers_Params params;
	params.InSyncGroupName = InSyncGroupName;
	params.PreviousMarker = PreviousMarker;
	params.NextMarker = NextMarker;
	params.bRespectMarkerOrder = bRespectMarkerOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.IsPlayingSlotAnimation
// ()
// Parameters:
// class UAnimSequenceBase**      Asset                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SlotNodeName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimCustomInstance::IsPlayingSlotAnimation(class UAnimSequenceBase** Asset, struct FName* SlotNodeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.IsPlayingSlotAnimation");

	UAnimCustomInstance_IsPlayingSlotAnimation_Params params;
	params.Asset = Asset;
	params.SlotNodeName = SlotNodeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.IsAnyMontagePlaying
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimCustomInstance::IsAnyMontagePlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.IsAnyMontagePlaying");

	UAnimCustomInstance_IsAnyMontagePlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.HasMarkerBeenHitThisFrame
// ()
// Parameters:
// struct FName*                  SyncGroup                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  MarkerName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimCustomInstance::HasMarkerBeenHitThisFrame(struct FName* SyncGroup, struct FName* MarkerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.HasMarkerBeenHitThisFrame");

	UAnimCustomInstance_HasMarkerBeenHitThisFrame_Params params;
	params.SyncGroup = SyncGroup;
	params.MarkerName = MarkerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetTimeToClosestMarker
// ()
// Parameters:
// struct FName*                  SyncGroup                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  MarkerName                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutMarkerTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimCustomInstance::GetTimeToClosestMarker(struct FName* SyncGroup, struct FName* MarkerName, float* OutMarkerTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetTimeToClosestMarker");

	UAnimCustomInstance_GetTimeToClosestMarker_Params params;
	params.SyncGroup = SyncGroup;
	params.MarkerName = MarkerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMarkerTime != nullptr)
		*OutMarkerTime = params.OutMarkerTime;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetSyncGroupPosition
// ()
// Parameters:
// struct FName*                  InSyncGroupName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FMarkerSyncAnimPosition ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMarkerSyncAnimPosition UAnimCustomInstance::GetSyncGroupPosition(struct FName* InSyncGroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetSyncGroupPosition");

	UAnimCustomInstance_GetSyncGroupPosition_Params params;
	params.InSyncGroupName = InSyncGroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::GetRelevantAnimTimeRemainingFraction(int* MachineIndex, int* StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction");

	UAnimCustomInstance_GetRelevantAnimTimeRemainingFraction_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTimeRemaining
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::GetRelevantAnimTimeRemaining(int* MachineIndex, int* StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimTimeRemaining");

	UAnimCustomInstance_GetRelevantAnimTimeRemaining_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTimeFraction
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::GetRelevantAnimTimeFraction(int* MachineIndex, int* StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimTimeFraction");

	UAnimCustomInstance_GetRelevantAnimTimeFraction_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTime
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::GetRelevantAnimTime(int* MachineIndex, int* StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimTime");

	UAnimCustomInstance_GetRelevantAnimTime_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimLength
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::GetRelevantAnimLength(int* MachineIndex, int* StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimLength");

	UAnimCustomInstance_GetRelevantAnimLength_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetOwningComponent
// ()
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* UAnimCustomInstance::GetOwningComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetOwningComponent");

	UAnimCustomInstance_GetOwningComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetOwningActor
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAnimCustomInstance::GetOwningActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetOwningActor");

	UAnimCustomInstance_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByGroup
// ()
// Parameters:
// struct FName*                  InGroup                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimInstance* UAnimCustomInstance::GetLinkedAnimLayerInstanceByGroup(struct FName* InGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByGroup");

	UAnimCustomInstance_GetLinkedAnimLayerInstanceByGroup_Params params;
	params.InGroup = InGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByClass
// ()
// Parameters:
// class UClass**                 InClass                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimInstance* UAnimCustomInstance::GetLinkedAnimLayerInstanceByClass(class UClass** InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByClass");

	UAnimCustomInstance_GetLinkedAnimLayerInstanceByClass_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetLinkedAnimGraphInstancesByTag
// ()
// Parameters:
// struct FName*                  InTag                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimInstance*>   OutLinkedInstances             (Parm, OutParm, ZeroConstructor)

void UAnimCustomInstance::GetLinkedAnimGraphInstancesByTag(struct FName* InTag, TArray<class UAnimInstance*>* OutLinkedInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetLinkedAnimGraphInstancesByTag");

	UAnimCustomInstance_GetLinkedAnimGraphInstancesByTag_Params params;
	params.InTag = InTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLinkedInstances != nullptr)
		*OutLinkedInstances = params.OutLinkedInstances;
}


// Function Engine.AnimInstance.GetLinkedAnimGraphInstanceByTag
// ()
// Parameters:
// struct FName*                  InTag                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimInstance* UAnimCustomInstance::GetLinkedAnimGraphInstanceByTag(struct FName* InTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetLinkedAnimGraphInstanceByTag");

	UAnimCustomInstance_GetLinkedAnimGraphInstanceByTag_Params params;
	params.InTag = InTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TransitionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::GetInstanceTransitionTimeElapsedFraction(int* MachineIndex, int* TransitionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction");

	UAnimCustomInstance_GetInstanceTransitionTimeElapsedFraction_Params params;
	params.MachineIndex = MachineIndex;
	params.TransitionIndex = TransitionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TransitionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::GetInstanceTransitionTimeElapsed(int* MachineIndex, int* TransitionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed");

	UAnimCustomInstance_GetInstanceTransitionTimeElapsed_Params params;
	params.MachineIndex = MachineIndex;
	params.TransitionIndex = TransitionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TransitionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::GetInstanceTransitionCrossfadeDuration(int* MachineIndex, int* TransitionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration");

	UAnimCustomInstance_GetInstanceTransitionCrossfadeDuration_Params params;
	params.MachineIndex = MachineIndex;
	params.TransitionIndex = TransitionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceStateWeight
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::GetInstanceStateWeight(int* MachineIndex, int* StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceStateWeight");

	UAnimCustomInstance_GetInstanceStateWeight_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceMachineWeight
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::GetInstanceMachineWeight(int* MachineIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceMachineWeight");

	UAnimCustomInstance_GetInstanceMachineWeight_Params params;
	params.MachineIndex = MachineIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::GetInstanceCurrentStateElapsedTime(int* MachineIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime");

	UAnimCustomInstance_GetInstanceCurrentStateElapsedTime_Params params;
	params.MachineIndex = MachineIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction
// ()
// Parameters:
// int*                           AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::GetInstanceAssetPlayerTimeFromEndFraction(int* AssetPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction");

	UAnimCustomInstance_GetInstanceAssetPlayerTimeFromEndFraction_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd
// ()
// Parameters:
// int*                           AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::GetInstanceAssetPlayerTimeFromEnd(int* AssetPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd");

	UAnimCustomInstance_GetInstanceAssetPlayerTimeFromEnd_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction
// ()
// Parameters:
// int*                           AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::GetInstanceAssetPlayerTimeFraction(int* AssetPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction");

	UAnimCustomInstance_GetInstanceAssetPlayerTimeFraction_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTime
// ()
// Parameters:
// int*                           AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::GetInstanceAssetPlayerTime(int* AssetPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerTime");

	UAnimCustomInstance_GetInstanceAssetPlayerTime_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerLength
// ()
// Parameters:
// int*                           AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::GetInstanceAssetPlayerLength(int* AssetPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerLength");

	UAnimCustomInstance_GetInstanceAssetPlayerLength_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetCurveValue
// ()
// Parameters:
// struct FName*                  CurveName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::GetCurveValue(struct FName* CurveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetCurveValue");

	UAnimCustomInstance_GetCurveValue_Params params;
	params.CurveName = CurveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetCurrentStateName
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UAnimCustomInstance::GetCurrentStateName(int* MachineIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetCurrentStateName");

	UAnimCustomInstance_GetCurrentStateName_Params params;
	params.MachineIndex = MachineIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetCurrentActiveMontage
// ()
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* UAnimCustomInstance::GetCurrentActiveMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetCurrentActiveMontage");

	UAnimCustomInstance_GetCurrentActiveMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetAllCurveNames
// ()
// Parameters:
// TArray<struct FName>           OutNames                       (Parm, OutParm, ZeroConstructor)

void UAnimCustomInstance::GetAllCurveNames(TArray<struct FName>* OutNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetAllCurveNames");

	UAnimCustomInstance_GetAllCurveNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNames != nullptr)
		*OutNames = params.OutNames;
}


// Function Engine.AnimInstance.GetActiveCurveNames
// ()
// Parameters:
// EAnimCurveType*                CurveType                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           OutNames                       (Parm, OutParm, ZeroConstructor)

void UAnimCustomInstance::GetActiveCurveNames(EAnimCurveType* CurveType, TArray<struct FName>* OutNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetActiveCurveNames");

	UAnimCustomInstance_GetActiveCurveNames_Params params;
	params.CurveType = CurveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNames != nullptr)
		*OutNames = params.OutNames;
}


// Function Engine.AnimInstance.ClearMorphTargets
// ()

void UAnimCustomInstance::ClearMorphTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.ClearMorphTargets");

	UAnimCustomInstance_ClearMorphTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.CalculateDirection
// ()
// Parameters:
// struct FVector*                Velocity                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator*               BaseRotation                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimCustomInstance::CalculateDirection(struct FVector* Velocity, struct FRotator* BaseRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.CalculateDirection");

	UAnimCustomInstance_CalculateDirection_Params params;
	params.Velocity = Velocity;
	params.BaseRotation = BaseRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UAnimCustomInstance::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.BlueprintUpdateAnimation");

	UAnimCustomInstance_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.BlueprintPostEvaluateAnimation
// ()

void UAnimCustomInstance::BlueprintPostEvaluateAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.BlueprintPostEvaluateAnimation");

	UAnimCustomInstance_BlueprintPostEvaluateAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.BlueprintInitializeAnimation
// ()

void UAnimCustomInstance::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.BlueprintInitializeAnimation");

	UAnimCustomInstance_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.BlueprintBeginPlay
// ()

void UAnimCustomInstance::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.BlueprintBeginPlay");

	UAnimCustomInstance_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.UnlockAIResources
// ()
// Parameters:
// bool*                          bUnlockMovement                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UnlockAILogic                  (Parm, ZeroConstructor, IsPlainOldData)

void UAnimSequencerInstance::UnlockAIResources(bool* bUnlockMovement, bool* UnlockAILogic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.UnlockAIResources");

	UAnimSequencerInstance_UnlockAIResources_Params params;
	params.bUnlockMovement = bUnlockMovement;
	params.UnlockAILogic = UnlockAILogic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.UnlinkAnimClassLayers
// ()
// Parameters:
// class UClass**                 InClass                        (Parm, ZeroConstructor, IsPlainOldData)

void UAnimSequencerInstance::UnlinkAnimClassLayers(class UClass** InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.UnlinkAnimClassLayers");

	UAnimSequencerInstance_UnlinkAnimClassLayers_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.TryGetPawnOwner
// ()
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* UAnimSequencerInstance::TryGetPawnOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.TryGetPawnOwner");

	UAnimSequencerInstance_TryGetPawnOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.StopSlotAnimation
// ()
// Parameters:
// float*                         InBlendOutTime                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SlotNodeName                   (Parm, ZeroConstructor, IsPlainOldData)

void UAnimSequencerInstance::StopSlotAnimation(float* InBlendOutTime, struct FName* SlotNodeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.StopSlotAnimation");

	UAnimSequencerInstance_StopSlotAnimation_Params params;
	params.InBlendOutTime = InBlendOutTime;
	params.SlotNodeName = SlotNodeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.SnapshotPose
// ()
// Parameters:
// struct FPoseSnapshot           Snapshot                       (Parm, OutParm, ReferenceParm)

void UAnimSequencerInstance::SnapshotPose(struct FPoseSnapshot* Snapshot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.SnapshotPose");

	UAnimSequencerInstance_SnapshotPose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Snapshot != nullptr)
		*Snapshot = params.Snapshot;
}


// Function Engine.AnimInstance.SetRootMotionMode
// ()
// Parameters:
// TEnumAsByte<ERootMotionMode>*  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAnimSequencerInstance::SetRootMotionMode(TEnumAsByte<ERootMotionMode>* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.SetRootMotionMode");

	UAnimSequencerInstance_SetRootMotionMode_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.SetMorphTarget
// ()
// Parameters:
// struct FName*                  MorphTargetName                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAnimSequencerInstance::SetMorphTarget(struct FName* MorphTargetName, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.SetMorphTarget");

	UAnimSequencerInstance_SetMorphTarget_Params params;
	params.MorphTargetName = MorphTargetName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.SavePoseSnapshot
// ()
// Parameters:
// struct FName*                  SnapshotName                   (Parm, ZeroConstructor, IsPlainOldData)

void UAnimSequencerInstance::SavePoseSnapshot(struct FName* SnapshotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.SavePoseSnapshot");

	UAnimSequencerInstance_SavePoseSnapshot_Params params;
	params.SnapshotName = SnapshotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.ResetDynamics
// ()
// Parameters:
// ETeleportType*                 InTeleportType                 (Parm, ZeroConstructor, IsPlainOldData)

void UAnimSequencerInstance::ResetDynamics(ETeleportType* InTeleportType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.ResetDynamics");

	UAnimSequencerInstance_ResetDynamics_Params params;
	params.InTeleportType = InTeleportType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage
// ()
// Parameters:
// class UAnimSequenceBase**      Asset                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SlotNodeName                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendInTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendOutTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LoopCount                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendOutTriggerTime            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InTimeToStartMontageAt         (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* UAnimSequencerInstance::PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase** Asset, struct FName* SlotNodeName, float* BlendInTime, float* BlendOutTime, float* InPlayRate, int* LoopCount, float* BlendOutTriggerTime, float* InTimeToStartMontageAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage");

	UAnimSequencerInstance_PlaySlotAnimationAsDynamicMontage_Params params;
	params.Asset = Asset;
	params.SlotNodeName = SlotNodeName;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.InPlayRate = InPlayRate;
	params.LoopCount = LoopCount;
	params.BlendOutTriggerTime = BlendOutTriggerTime;
	params.InTimeToStartMontageAt = InTimeToStartMontageAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.PlaySlotAnimation
// ()
// Parameters:
// class UAnimSequenceBase**      Asset                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SlotNodeName                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendInTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendOutTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LoopCount                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::PlaySlotAnimation(class UAnimSequenceBase** Asset, struct FName* SlotNodeName, float* BlendInTime, float* BlendOutTime, float* InPlayRate, int* LoopCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.PlaySlotAnimation");

	UAnimSequencerInstance_PlaySlotAnimation_Params params;
	params.Asset = Asset;
	params.SlotNodeName = SlotNodeName;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.InPlayRate = InPlayRate;
	params.LoopCount = LoopCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_Stop
// ()
// Parameters:
// float*                         InBlendOutTime                 (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnimSequencerInstance::Montage_Stop(float* InBlendOutTime, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_Stop");

	UAnimSequencerInstance_Montage_Stop_Params params;
	params.InBlendOutTime = InBlendOutTime;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_SetPosition
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewPosition                    (Parm, ZeroConstructor, IsPlainOldData)

void UAnimSequencerInstance::Montage_SetPosition(class UAnimMontage** Montage, float* NewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_SetPosition");

	UAnimSequencerInstance_Montage_SetPosition_Params params;
	params.Montage = Montage;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_SetPlayRate
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewPlayRate                    (Parm, ZeroConstructor, IsPlainOldData)

void UAnimSequencerInstance::Montage_SetPlayRate(class UAnimMontage** Montage, float* NewPlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_SetPlayRate");

	UAnimSequencerInstance_Montage_SetPlayRate_Params params;
	params.Montage = Montage;
	params.NewPlayRate = NewPlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_SetNextSection
// ()
// Parameters:
// struct FName*                  SectionNameToChange            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NextSection                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnimSequencerInstance::Montage_SetNextSection(struct FName* SectionNameToChange, struct FName* NextSection, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_SetNextSection");

	UAnimSequencerInstance_Montage_SetNextSection_Params params;
	params.SectionNameToChange = SectionNameToChange;
	params.NextSection = NextSection;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_Resume
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnimSequencerInstance::Montage_Resume(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_Resume");

	UAnimSequencerInstance_Montage_Resume_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_Play
// ()
// Parameters:
// class UAnimMontage**           MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// EMontagePlayReturnType*        ReturnValueType                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InTimeToStartMontageAt         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bStopAllMontages               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::Montage_Play(class UAnimMontage** MontageToPlay, float* InPlayRate, EMontagePlayReturnType* ReturnValueType, float* InTimeToStartMontageAt, bool* bStopAllMontages)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_Play");

	UAnimSequencerInstance_Montage_Play_Params params;
	params.MontageToPlay = MontageToPlay;
	params.InPlayRate = InPlayRate;
	params.ReturnValueType = ReturnValueType;
	params.InTimeToStartMontageAt = InTimeToStartMontageAt;
	params.bStopAllMontages = bStopAllMontages;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_Pause
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnimSequencerInstance::Montage_Pause(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_Pause");

	UAnimSequencerInstance_Montage_Pause_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_JumpToSectionsEnd
// ()
// Parameters:
// struct FName*                  SectionName                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnimSequencerInstance::Montage_JumpToSectionsEnd(struct FName* SectionName, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_JumpToSectionsEnd");

	UAnimSequencerInstance_Montage_JumpToSectionsEnd_Params params;
	params.SectionName = SectionName;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_JumpToSection
// ()
// Parameters:
// struct FName*                  SectionName                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAnimSequencerInstance::Montage_JumpToSection(struct FName* SectionName, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_JumpToSection");

	UAnimSequencerInstance_Montage_JumpToSection_Params params;
	params.SectionName = SectionName;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_IsPlaying
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimSequencerInstance::Montage_IsPlaying(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_IsPlaying");

	UAnimSequencerInstance_Montage_IsPlaying_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_IsActive
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimSequencerInstance::Montage_IsActive(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_IsActive");

	UAnimSequencerInstance_Montage_IsActive_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetPosition
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::Montage_GetPosition(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetPosition");

	UAnimSequencerInstance_Montage_GetPosition_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetPlayRate
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::Montage_GetPlayRate(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetPlayRate");

	UAnimSequencerInstance_Montage_GetPlayRate_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetIsStopped
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimSequencerInstance::Montage_GetIsStopped(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetIsStopped");

	UAnimSequencerInstance_Montage_GetIsStopped_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetCurrentSection
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UAnimSequencerInstance::Montage_GetCurrentSection(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetCurrentSection");

	UAnimSequencerInstance_Montage_GetCurrentSection_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetBlendTime
// ()
// Parameters:
// class UAnimMontage**           Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::Montage_GetBlendTime(class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetBlendTime");

	UAnimSequencerInstance_Montage_GetBlendTime_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.LockAIResources
// ()
// Parameters:
// bool*                          bLockMovement                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          LockAILogic                    (Parm, ZeroConstructor, IsPlainOldData)

void UAnimSequencerInstance::LockAIResources(bool* bLockMovement, bool* LockAILogic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.LockAIResources");

	UAnimSequencerInstance_LockAIResources_Params params;
	params.bLockMovement = bLockMovement;
	params.LockAILogic = LockAILogic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.LinkAnimGraphByTag
// ()
// Parameters:
// struct FName*                  InTag                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 InClass                        (Parm, ZeroConstructor, IsPlainOldData)

void UAnimSequencerInstance::LinkAnimGraphByTag(struct FName* InTag, class UClass** InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.LinkAnimGraphByTag");

	UAnimSequencerInstance_LinkAnimGraphByTag_Params params;
	params.InTag = InTag;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.LinkAnimClassLayers
// ()
// Parameters:
// class UClass**                 InClass                        (Parm, ZeroConstructor, IsPlainOldData)

void UAnimSequencerInstance::LinkAnimClassLayers(class UClass** InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.LinkAnimClassLayers");

	UAnimSequencerInstance_LinkAnimClassLayers_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.IsSyncGroupBetweenMarkers
// ()
// Parameters:
// struct FName*                  InSyncGroupName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PreviousMarker                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NextMarker                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRespectMarkerOrder            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimSequencerInstance::IsSyncGroupBetweenMarkers(struct FName* InSyncGroupName, struct FName* PreviousMarker, struct FName* NextMarker, bool* bRespectMarkerOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.IsSyncGroupBetweenMarkers");

	UAnimSequencerInstance_IsSyncGroupBetweenMarkers_Params params;
	params.InSyncGroupName = InSyncGroupName;
	params.PreviousMarker = PreviousMarker;
	params.NextMarker = NextMarker;
	params.bRespectMarkerOrder = bRespectMarkerOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.IsPlayingSlotAnimation
// ()
// Parameters:
// class UAnimSequenceBase**      Asset                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SlotNodeName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimSequencerInstance::IsPlayingSlotAnimation(class UAnimSequenceBase** Asset, struct FName* SlotNodeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.IsPlayingSlotAnimation");

	UAnimSequencerInstance_IsPlayingSlotAnimation_Params params;
	params.Asset = Asset;
	params.SlotNodeName = SlotNodeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.IsAnyMontagePlaying
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimSequencerInstance::IsAnyMontagePlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.IsAnyMontagePlaying");

	UAnimSequencerInstance_IsAnyMontagePlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.HasMarkerBeenHitThisFrame
// ()
// Parameters:
// struct FName*                  SyncGroup                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  MarkerName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimSequencerInstance::HasMarkerBeenHitThisFrame(struct FName* SyncGroup, struct FName* MarkerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.HasMarkerBeenHitThisFrame");

	UAnimSequencerInstance_HasMarkerBeenHitThisFrame_Params params;
	params.SyncGroup = SyncGroup;
	params.MarkerName = MarkerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetTimeToClosestMarker
// ()
// Parameters:
// struct FName*                  SyncGroup                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  MarkerName                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutMarkerTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimSequencerInstance::GetTimeToClosestMarker(struct FName* SyncGroup, struct FName* MarkerName, float* OutMarkerTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetTimeToClosestMarker");

	UAnimSequencerInstance_GetTimeToClosestMarker_Params params;
	params.SyncGroup = SyncGroup;
	params.MarkerName = MarkerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMarkerTime != nullptr)
		*OutMarkerTime = params.OutMarkerTime;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetSyncGroupPosition
// ()
// Parameters:
// struct FName*                  InSyncGroupName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FMarkerSyncAnimPosition ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMarkerSyncAnimPosition UAnimSequencerInstance::GetSyncGroupPosition(struct FName* InSyncGroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetSyncGroupPosition");

	UAnimSequencerInstance_GetSyncGroupPosition_Params params;
	params.InSyncGroupName = InSyncGroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::GetRelevantAnimTimeRemainingFraction(int* MachineIndex, int* StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction");

	UAnimSequencerInstance_GetRelevantAnimTimeRemainingFraction_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTimeRemaining
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::GetRelevantAnimTimeRemaining(int* MachineIndex, int* StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimTimeRemaining");

	UAnimSequencerInstance_GetRelevantAnimTimeRemaining_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTimeFraction
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::GetRelevantAnimTimeFraction(int* MachineIndex, int* StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimTimeFraction");

	UAnimSequencerInstance_GetRelevantAnimTimeFraction_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTime
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::GetRelevantAnimTime(int* MachineIndex, int* StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimTime");

	UAnimSequencerInstance_GetRelevantAnimTime_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimLength
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::GetRelevantAnimLength(int* MachineIndex, int* StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimLength");

	UAnimSequencerInstance_GetRelevantAnimLength_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetOwningComponent
// ()
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* UAnimSequencerInstance::GetOwningComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetOwningComponent");

	UAnimSequencerInstance_GetOwningComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetOwningActor
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAnimSequencerInstance::GetOwningActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetOwningActor");

	UAnimSequencerInstance_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByGroup
// ()
// Parameters:
// struct FName*                  InGroup                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimInstance* UAnimSequencerInstance::GetLinkedAnimLayerInstanceByGroup(struct FName* InGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByGroup");

	UAnimSequencerInstance_GetLinkedAnimLayerInstanceByGroup_Params params;
	params.InGroup = InGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByClass
// ()
// Parameters:
// class UClass**                 InClass                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimInstance* UAnimSequencerInstance::GetLinkedAnimLayerInstanceByClass(class UClass** InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByClass");

	UAnimSequencerInstance_GetLinkedAnimLayerInstanceByClass_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetLinkedAnimGraphInstancesByTag
// ()
// Parameters:
// struct FName*                  InTag                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimInstance*>   OutLinkedInstances             (Parm, OutParm, ZeroConstructor)

void UAnimSequencerInstance::GetLinkedAnimGraphInstancesByTag(struct FName* InTag, TArray<class UAnimInstance*>* OutLinkedInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetLinkedAnimGraphInstancesByTag");

	UAnimSequencerInstance_GetLinkedAnimGraphInstancesByTag_Params params;
	params.InTag = InTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLinkedInstances != nullptr)
		*OutLinkedInstances = params.OutLinkedInstances;
}


// Function Engine.AnimInstance.GetLinkedAnimGraphInstanceByTag
// ()
// Parameters:
// struct FName*                  InTag                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimInstance* UAnimSequencerInstance::GetLinkedAnimGraphInstanceByTag(struct FName* InTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetLinkedAnimGraphInstanceByTag");

	UAnimSequencerInstance_GetLinkedAnimGraphInstanceByTag_Params params;
	params.InTag = InTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TransitionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::GetInstanceTransitionTimeElapsedFraction(int* MachineIndex, int* TransitionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction");

	UAnimSequencerInstance_GetInstanceTransitionTimeElapsedFraction_Params params;
	params.MachineIndex = MachineIndex;
	params.TransitionIndex = TransitionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TransitionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::GetInstanceTransitionTimeElapsed(int* MachineIndex, int* TransitionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed");

	UAnimSequencerInstance_GetInstanceTransitionTimeElapsed_Params params;
	params.MachineIndex = MachineIndex;
	params.TransitionIndex = TransitionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TransitionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::GetInstanceTransitionCrossfadeDuration(int* MachineIndex, int* TransitionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration");

	UAnimSequencerInstance_GetInstanceTransitionCrossfadeDuration_Params params;
	params.MachineIndex = MachineIndex;
	params.TransitionIndex = TransitionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceStateWeight
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::GetInstanceStateWeight(int* MachineIndex, int* StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceStateWeight");

	UAnimSequencerInstance_GetInstanceStateWeight_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceMachineWeight
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::GetInstanceMachineWeight(int* MachineIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceMachineWeight");

	UAnimSequencerInstance_GetInstanceMachineWeight_Params params;
	params.MachineIndex = MachineIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::GetInstanceCurrentStateElapsedTime(int* MachineIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime");

	UAnimSequencerInstance_GetInstanceCurrentStateElapsedTime_Params params;
	params.MachineIndex = MachineIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction
// ()
// Parameters:
// int*                           AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::GetInstanceAssetPlayerTimeFromEndFraction(int* AssetPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction");

	UAnimSequencerInstance_GetInstanceAssetPlayerTimeFromEndFraction_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd
// ()
// Parameters:
// int*                           AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::GetInstanceAssetPlayerTimeFromEnd(int* AssetPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd");

	UAnimSequencerInstance_GetInstanceAssetPlayerTimeFromEnd_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction
// ()
// Parameters:
// int*                           AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::GetInstanceAssetPlayerTimeFraction(int* AssetPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction");

	UAnimSequencerInstance_GetInstanceAssetPlayerTimeFraction_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTime
// ()
// Parameters:
// int*                           AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::GetInstanceAssetPlayerTime(int* AssetPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerTime");

	UAnimSequencerInstance_GetInstanceAssetPlayerTime_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerLength
// ()
// Parameters:
// int*                           AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::GetInstanceAssetPlayerLength(int* AssetPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerLength");

	UAnimSequencerInstance_GetInstanceAssetPlayerLength_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetCurveValue
// ()
// Parameters:
// struct FName*                  CurveName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::GetCurveValue(struct FName* CurveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetCurveValue");

	UAnimSequencerInstance_GetCurveValue_Params params;
	params.CurveName = CurveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetCurrentStateName
// ()
// Parameters:
// int*                           MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UAnimSequencerInstance::GetCurrentStateName(int* MachineIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetCurrentStateName");

	UAnimSequencerInstance_GetCurrentStateName_Params params;
	params.MachineIndex = MachineIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetCurrentActiveMontage
// ()
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* UAnimSequencerInstance::GetCurrentActiveMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetCurrentActiveMontage");

	UAnimSequencerInstance_GetCurrentActiveMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetAllCurveNames
// ()
// Parameters:
// TArray<struct FName>           OutNames                       (Parm, OutParm, ZeroConstructor)

void UAnimSequencerInstance::GetAllCurveNames(TArray<struct FName>* OutNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetAllCurveNames");

	UAnimSequencerInstance_GetAllCurveNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNames != nullptr)
		*OutNames = params.OutNames;
}


// Function Engine.AnimInstance.GetActiveCurveNames
// ()
// Parameters:
// EAnimCurveType*                CurveType                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           OutNames                       (Parm, OutParm, ZeroConstructor)

void UAnimSequencerInstance::GetActiveCurveNames(EAnimCurveType* CurveType, TArray<struct FName>* OutNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetActiveCurveNames");

	UAnimSequencerInstance_GetActiveCurveNames_Params params;
	params.CurveType = CurveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNames != nullptr)
		*OutNames = params.OutNames;
}


// Function Engine.AnimInstance.ClearMorphTargets
// ()

void UAnimSequencerInstance::ClearMorphTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.ClearMorphTargets");

	UAnimSequencerInstance_ClearMorphTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.CalculateDirection
// ()
// Parameters:
// struct FVector*                Velocity                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator*               BaseRotation                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnimSequencerInstance::CalculateDirection(struct FVector* Velocity, struct FRotator* BaseRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.CalculateDirection");

	UAnimSequencerInstance_CalculateDirection_Params params;
	params.Velocity = Velocity;
	params.BaseRotation = BaseRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UAnimSequencerInstance::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.BlueprintUpdateAnimation");

	UAnimSequencerInstance_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.BlueprintPostEvaluateAnimation
// ()

void UAnimSequencerInstance::BlueprintPostEvaluateAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.BlueprintPostEvaluateAnimation");

	UAnimSequencerInstance_BlueprintPostEvaluateAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.BlueprintInitializeAnimation
// ()

void UAnimSequencerInstance::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.BlueprintInitializeAnimation");

	UAnimSequencerInstance_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.BlueprintBeginPlay
// ()

void UAnimSequencerInstance::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.BlueprintBeginPlay");

	UAnimSequencerInstance_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
// ()
// Parameters:
// struct FName*                  NotifyName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload    (ConstParm, Parm, OutParm, ReferenceParm)

void UPlayMontageCallbackProxy::OnNotifyEndReceived(struct FName* NotifyName, struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived");

	UPlayMontageCallbackProxy_OnNotifyEndReceived_Params params;
	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// ()
// Parameters:
// struct FName*                  NotifyName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload    (ConstParm, Parm, OutParm, ReferenceParm)

void UPlayMontageCallbackProxy::OnNotifyBeginReceived(struct FName* NotifyName, struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived");

	UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params params;
	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// ()
// Parameters:
// class UAnimMontage**           Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage** Montage, bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded");

	UPlayMontageCallbackProxy_OnMontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
// ()
// Parameters:
// class UAnimMontage**           Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)

void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage** Montage, bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut");

	UPlayMontageCallbackProxy_OnMontageBlendingOut_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
// ()
// Parameters:
// class USkeletalMeshComponent** InSkeletalMeshComponent        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimMontage**           MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         StartingPosition               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  StartingSection                (Parm, ZeroConstructor, IsPlainOldData)
// class UPlayMontageCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(class USkeletalMeshComponent** InSkeletalMeshComponent, class UAnimMontage** MontageToPlay, float* PlayRate, float* StartingPosition, struct FName* StartingSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage");

	UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params params;
	params.InSkeletalMeshComponent = InSkeletalMeshComponent;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

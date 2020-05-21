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

// Class AnimGraphRuntime.AnimCustomInstance
// 0x0000 (0x0270 - 0x0270)
class UAnimCustomInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimCustomInstance");
		return ptr;
	}


	void UnlockAIResources(bool* bUnlockMovement, bool* UnlockAILogic);
	void UnlinkAnimClassLayers(class UClass** InClass);
	class APawn* TryGetPawnOwner();
	void StopSlotAnimation(float* InBlendOutTime, struct FName* SlotNodeName);
	void SnapshotPose(struct FPoseSnapshot* Snapshot);
	void SetRootMotionMode(TEnumAsByte<ERootMotionMode>* Value);
	void SetMorphTarget(struct FName* MorphTargetName, float* Value);
	void SavePoseSnapshot(struct FName* SnapshotName);
	void ResetDynamics(ETeleportType* InTeleportType);
	class UAnimMontage* PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase** Asset, struct FName* SlotNodeName, float* BlendInTime, float* BlendOutTime, float* InPlayRate, int* LoopCount, float* BlendOutTriggerTime, float* InTimeToStartMontageAt);
	float PlaySlotAnimation(class UAnimSequenceBase** Asset, struct FName* SlotNodeName, float* BlendInTime, float* BlendOutTime, float* InPlayRate, int* LoopCount);
	void Montage_Stop(float* InBlendOutTime, class UAnimMontage** Montage);
	void Montage_SetPosition(class UAnimMontage** Montage, float* NewPosition);
	void Montage_SetPlayRate(class UAnimMontage** Montage, float* NewPlayRate);
	void Montage_SetNextSection(struct FName* SectionNameToChange, struct FName* NextSection, class UAnimMontage** Montage);
	void Montage_Resume(class UAnimMontage** Montage);
	float Montage_Play(class UAnimMontage** MontageToPlay, float* InPlayRate, EMontagePlayReturnType* ReturnValueType, float* InTimeToStartMontageAt, bool* bStopAllMontages);
	void Montage_Pause(class UAnimMontage** Montage);
	void Montage_JumpToSectionsEnd(struct FName* SectionName, class UAnimMontage** Montage);
	void Montage_JumpToSection(struct FName* SectionName, class UAnimMontage** Montage);
	bool Montage_IsPlaying(class UAnimMontage** Montage);
	bool Montage_IsActive(class UAnimMontage** Montage);
	float Montage_GetPosition(class UAnimMontage** Montage);
	float Montage_GetPlayRate(class UAnimMontage** Montage);
	bool Montage_GetIsStopped(class UAnimMontage** Montage);
	struct FName Montage_GetCurrentSection(class UAnimMontage** Montage);
	float Montage_GetBlendTime(class UAnimMontage** Montage);
	void LockAIResources(bool* bLockMovement, bool* LockAILogic);
	void LinkAnimGraphByTag(struct FName* InTag, class UClass** InClass);
	void LinkAnimClassLayers(class UClass** InClass);
	bool IsSyncGroupBetweenMarkers(struct FName* InSyncGroupName, struct FName* PreviousMarker, struct FName* NextMarker, bool* bRespectMarkerOrder);
	bool IsPlayingSlotAnimation(class UAnimSequenceBase** Asset, struct FName* SlotNodeName);
	bool IsAnyMontagePlaying();
	bool HasMarkerBeenHitThisFrame(struct FName* SyncGroup, struct FName* MarkerName);
	bool GetTimeToClosestMarker(struct FName* SyncGroup, struct FName* MarkerName, float* OutMarkerTime);
	struct FMarkerSyncAnimPosition GetSyncGroupPosition(struct FName* InSyncGroupName);
	float GetRelevantAnimTimeRemainingFraction(int* MachineIndex, int* StateIndex);
	float GetRelevantAnimTimeRemaining(int* MachineIndex, int* StateIndex);
	float GetRelevantAnimTimeFraction(int* MachineIndex, int* StateIndex);
	float GetRelevantAnimTime(int* MachineIndex, int* StateIndex);
	float GetRelevantAnimLength(int* MachineIndex, int* StateIndex);
	class USkeletalMeshComponent* GetOwningComponent();
	class AActor* GetOwningActor();
	class UAnimInstance* GetLinkedAnimLayerInstanceByGroup(struct FName* InGroup);
	class UAnimInstance* GetLinkedAnimLayerInstanceByClass(class UClass** InClass);
	void GetLinkedAnimGraphInstancesByTag(struct FName* InTag, TArray<class UAnimInstance*>* OutLinkedInstances);
	class UAnimInstance* GetLinkedAnimGraphInstanceByTag(struct FName* InTag);
	float GetInstanceTransitionTimeElapsedFraction(int* MachineIndex, int* TransitionIndex);
	float GetInstanceTransitionTimeElapsed(int* MachineIndex, int* TransitionIndex);
	float GetInstanceTransitionCrossfadeDuration(int* MachineIndex, int* TransitionIndex);
	float GetInstanceStateWeight(int* MachineIndex, int* StateIndex);
	float GetInstanceMachineWeight(int* MachineIndex);
	float GetInstanceCurrentStateElapsedTime(int* MachineIndex);
	float GetInstanceAssetPlayerTimeFromEndFraction(int* AssetPlayerIndex);
	float GetInstanceAssetPlayerTimeFromEnd(int* AssetPlayerIndex);
	float GetInstanceAssetPlayerTimeFraction(int* AssetPlayerIndex);
	float GetInstanceAssetPlayerTime(int* AssetPlayerIndex);
	float GetInstanceAssetPlayerLength(int* AssetPlayerIndex);
	float GetCurveValue(struct FName* CurveName);
	struct FName GetCurrentStateName(int* MachineIndex);
	class UAnimMontage* GetCurrentActiveMontage();
	void GetAllCurveNames(TArray<struct FName>* OutNames);
	void GetActiveCurveNames(EAnimCurveType* CurveType, TArray<struct FName>* OutNames);
	void ClearMorphTargets();
	float CalculateDirection(struct FVector* Velocity, struct FRotator* BaseRotation);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintPostEvaluateAnimation();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
};


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotify");
		return ptr;
	}

};


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// 0x0008 (0x0038 - 0x0030)
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	struct FName                                       NotifyName;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow");
		return ptr;
	}

};


// Class AnimGraphRuntime.AnimSequencerInstance
// 0x0000 (0x0270 - 0x0270)
class UAnimSequencerInstance : public UAnimCustomInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimSequencerInstance");
		return ptr;
	}


	void UnlockAIResources(bool* bUnlockMovement, bool* UnlockAILogic);
	void UnlinkAnimClassLayers(class UClass** InClass);
	class APawn* TryGetPawnOwner();
	void StopSlotAnimation(float* InBlendOutTime, struct FName* SlotNodeName);
	void SnapshotPose(struct FPoseSnapshot* Snapshot);
	void SetRootMotionMode(TEnumAsByte<ERootMotionMode>* Value);
	void SetMorphTarget(struct FName* MorphTargetName, float* Value);
	void SavePoseSnapshot(struct FName* SnapshotName);
	void ResetDynamics(ETeleportType* InTeleportType);
	class UAnimMontage* PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase** Asset, struct FName* SlotNodeName, float* BlendInTime, float* BlendOutTime, float* InPlayRate, int* LoopCount, float* BlendOutTriggerTime, float* InTimeToStartMontageAt);
	float PlaySlotAnimation(class UAnimSequenceBase** Asset, struct FName* SlotNodeName, float* BlendInTime, float* BlendOutTime, float* InPlayRate, int* LoopCount);
	void Montage_Stop(float* InBlendOutTime, class UAnimMontage** Montage);
	void Montage_SetPosition(class UAnimMontage** Montage, float* NewPosition);
	void Montage_SetPlayRate(class UAnimMontage** Montage, float* NewPlayRate);
	void Montage_SetNextSection(struct FName* SectionNameToChange, struct FName* NextSection, class UAnimMontage** Montage);
	void Montage_Resume(class UAnimMontage** Montage);
	float Montage_Play(class UAnimMontage** MontageToPlay, float* InPlayRate, EMontagePlayReturnType* ReturnValueType, float* InTimeToStartMontageAt, bool* bStopAllMontages);
	void Montage_Pause(class UAnimMontage** Montage);
	void Montage_JumpToSectionsEnd(struct FName* SectionName, class UAnimMontage** Montage);
	void Montage_JumpToSection(struct FName* SectionName, class UAnimMontage** Montage);
	bool Montage_IsPlaying(class UAnimMontage** Montage);
	bool Montage_IsActive(class UAnimMontage** Montage);
	float Montage_GetPosition(class UAnimMontage** Montage);
	float Montage_GetPlayRate(class UAnimMontage** Montage);
	bool Montage_GetIsStopped(class UAnimMontage** Montage);
	struct FName Montage_GetCurrentSection(class UAnimMontage** Montage);
	float Montage_GetBlendTime(class UAnimMontage** Montage);
	void LockAIResources(bool* bLockMovement, bool* LockAILogic);
	void LinkAnimGraphByTag(struct FName* InTag, class UClass** InClass);
	void LinkAnimClassLayers(class UClass** InClass);
	bool IsSyncGroupBetweenMarkers(struct FName* InSyncGroupName, struct FName* PreviousMarker, struct FName* NextMarker, bool* bRespectMarkerOrder);
	bool IsPlayingSlotAnimation(class UAnimSequenceBase** Asset, struct FName* SlotNodeName);
	bool IsAnyMontagePlaying();
	bool HasMarkerBeenHitThisFrame(struct FName* SyncGroup, struct FName* MarkerName);
	bool GetTimeToClosestMarker(struct FName* SyncGroup, struct FName* MarkerName, float* OutMarkerTime);
	struct FMarkerSyncAnimPosition GetSyncGroupPosition(struct FName* InSyncGroupName);
	float GetRelevantAnimTimeRemainingFraction(int* MachineIndex, int* StateIndex);
	float GetRelevantAnimTimeRemaining(int* MachineIndex, int* StateIndex);
	float GetRelevantAnimTimeFraction(int* MachineIndex, int* StateIndex);
	float GetRelevantAnimTime(int* MachineIndex, int* StateIndex);
	float GetRelevantAnimLength(int* MachineIndex, int* StateIndex);
	class USkeletalMeshComponent* GetOwningComponent();
	class AActor* GetOwningActor();
	class UAnimInstance* GetLinkedAnimLayerInstanceByGroup(struct FName* InGroup);
	class UAnimInstance* GetLinkedAnimLayerInstanceByClass(class UClass** InClass);
	void GetLinkedAnimGraphInstancesByTag(struct FName* InTag, TArray<class UAnimInstance*>* OutLinkedInstances);
	class UAnimInstance* GetLinkedAnimGraphInstanceByTag(struct FName* InTag);
	float GetInstanceTransitionTimeElapsedFraction(int* MachineIndex, int* TransitionIndex);
	float GetInstanceTransitionTimeElapsed(int* MachineIndex, int* TransitionIndex);
	float GetInstanceTransitionCrossfadeDuration(int* MachineIndex, int* TransitionIndex);
	float GetInstanceStateWeight(int* MachineIndex, int* StateIndex);
	float GetInstanceMachineWeight(int* MachineIndex);
	float GetInstanceCurrentStateElapsedTime(int* MachineIndex);
	float GetInstanceAssetPlayerTimeFromEndFraction(int* AssetPlayerIndex);
	float GetInstanceAssetPlayerTimeFromEnd(int* AssetPlayerIndex);
	float GetInstanceAssetPlayerTimeFraction(int* AssetPlayerIndex);
	float GetInstanceAssetPlayerTime(int* AssetPlayerIndex);
	float GetInstanceAssetPlayerLength(int* AssetPlayerIndex);
	float GetCurveValue(struct FName* CurveName);
	struct FName GetCurrentStateName(int* MachineIndex);
	class UAnimMontage* GetCurrentActiveMontage();
	void GetAllCurveNames(TArray<struct FName>* OutNames);
	void GetActiveCurveNames(EAnimCurveType* CurveType, TArray<struct FName>* OutNames);
	void ClearMorphTargets();
	float CalculateDirection(struct FVector* Velocity, struct FRotator* BaseRotation);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintPostEvaluateAnimation();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
};


// Class AnimGraphRuntime.KismetAnimationLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.KismetAnimationLibrary");
		return ptr;
	}

};


// Class AnimGraphRuntime.PlayMontageCallbackProxy
// 0x0080 (0x00A8 - 0x0028)
class UPlayMontageCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnCompleted;                                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBlendOut;                                               // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterrupted;                                            // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyBegin;                                            // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyEnd;                                              // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0078(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.PlayMontageCallbackProxy");
		return ptr;
	}


	void OnNotifyEndReceived(struct FName* NotifyName, struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload);
	void OnNotifyBeginReceived(struct FName* NotifyName, struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload);
	void OnMontageEnded(class UAnimMontage** Montage, bool* bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage** Montage, bool* bInterrupted);
	class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent** InSkeletalMeshComponent, class UAnimMontage** MontageToPlay, float* PlayRate, float* StartingPosition, struct FName* StartingSection);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

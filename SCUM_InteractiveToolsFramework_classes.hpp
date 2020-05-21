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

// Class InteractiveToolsFramework.InteractiveGizmoBuilder
// 0x0000 (0x0028 - 0x0028)
class UInteractiveGizmoBuilder : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveGizmo
// 0x0010 (0x0038 - 0x0028)
class UInteractiveGizmo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UInputBehaviorSet*                           InputBehaviors;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InternalToolFrameworkActor
// 0x0000 (0x0218 - 0x0218)
class AInternalToolFrameworkActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InternalToolFrameworkActor");
		return ptr;
	}


	bool WasRecentlyRendered(float* Tolerance);
	void UserConstructionScript();
	void TearOff();
	void SnapRootComponentTo(class AActor** InParentActor, struct FName* InSocketName);
	void SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup);
	void SetTickableWhenPaused(bool* bTickableWhenPaused);
	void SetReplicates(bool* bInReplicates);
	void SetReplicateMovement(bool* bInReplicateMovement);
	void SetOwner(class AActor** NewOwner);
	void SetNetDormancy(TEnumAsByte<ENetDormancy>* NewDormancy);
	void SetLifeSpan(float* InLifespan);
	void SetActorTickInterval(float* TickInterval);
	void SetActorTickEnabled(bool* bEnabled);
	void SetActorScale3D(struct FVector* NewScale3D);
	void SetActorRelativeScale3D(struct FVector* NewRelativeScale);
	void SetActorHiddenInGame(bool* bNewHidden);
	void SetActorEnableCollision(bool* bNewActorEnableCollision);
	void RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser);
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ReceiveActorOnReleased(struct FKey* ButtonReleased);
	void ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnClicked(struct FKey* ButtonPressed);
	void ReceiveActorEndOverlap(class AActor** OtherActor);
	void ReceiveActorEndCursorOver();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ReceiveActorBeginCursorOver();
	void PrestreamTextures(float* Seconds, bool* bEnableStreaming, int* CinematicTextureGroups);
	void OnRep_ReplicateMovement();
	void OnRep_ReplicatedMovement();
	void OnRep_Owner();
	void OnRep_Instigator();
	void OnRep_AttachmentReplication();
	void MakeNoise(float* Loudness, class APawn** NoiseInstigator, struct FVector* NoiseLocation, float* MaxRange, struct FName* Tag);
	class UMaterialInstanceDynamic* MakeMIDForMaterial(class UMaterialInterface** Parent);
	bool K2_TeleportTo(struct FVector* DestLocation, struct FRotator* DestRotation);
	bool K2_SetActorTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorRotation(struct FRotator* NewRotation, bool* bTeleportPhysics);
	void K2_SetActorRelativeTransform(struct FTransform* NewRelativeTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeRotation(struct FRotator* NewRelativeRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeLocation(struct FVector* NewRelativeLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocationAndRotation(struct FVector* NewLocation, struct FRotator* NewRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocation(struct FVector* NewLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_OnReset();
	void K2_OnEndViewTarget(class APlayerController** PC);
	void K2_OnBecomeViewTarget(class APlayerController** PC);
	class USceneComponent* K2_GetRootComponent();
	TArray<class UActorComponent*> K2_GetComponentsByClass(class UClass** ComponentClass);
	struct FRotator K2_GetActorRotation();
	struct FVector K2_GetActorLocation();
	void K2_DetachFromActor(EDetachmentRule* LocationRule, EDetachmentRule* RotationRule, EDetachmentRule* ScaleRule);
	void K2_DestroyComponent(class UActorComponent** Component);
	void K2_DestroyActor();
	void K2_AttachToComponent(class USceneComponent** Parent, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies);
	void K2_AttachToActor(class AActor** ParentActor, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies);
	void K2_AttachRootComponentToActor(class AActor** InParentActor, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies);
	void K2_AttachRootComponentTo(class USceneComponent** InParent, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies);
	void K2_AddActorWorldTransform(struct FTransform* DeltaTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool IsOverlappingActor(class AActor** Other);
	bool IsChildActor();
	bool IsActorTickEnabled();
	bool IsActorBeingDestroyed();
	bool HasAuthority();
	float GetVerticalDistanceTo(class AActor** OtherActor);
	struct FVector GetVelocity();
	struct FTransform GetTransform();
	bool GetTickableWhenPaused();
	float GetSquaredDistanceTo(class AActor** OtherActor);
	TEnumAsByte<ENetRole> GetRemoteRole();
	class UChildActorComponent* GetParentComponent();
	class AActor* GetParentActor();
	class AActor* GetOwner();
	void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents);
	void GetOverlappingActors(class UClass** ClassFilter, TArray<class AActor*>* OverlappingActors);
	TEnumAsByte<ENetRole> GetLocalRole();
	float GetLifeSpan();
	class AController* GetInstigatorController();
	class APawn* GetInstigator();
	struct FVector GetInputVectorAxisValue(struct FKey* InputAxisKey);
	float GetInputAxisValue(struct FName* InputAxisName);
	float GetInputAxisKeyValue(struct FKey* InputAxisKey);
	float GetHorizontalDotProductTo(class AActor** OtherActor);
	float GetHorizontalDistanceTo(class AActor** OtherActor);
	float GetGameTimeSinceCreation();
	float GetDotProductTo(class AActor** OtherActor);
	float GetDistanceTo(class AActor** OtherActor);
	TArray<class UActorComponent*> GetComponentsByTag(class UClass** ComponentClass, struct FName* Tag);
	TArray<class UActorComponent*> GetComponentsByInterface(class UClass** Interface);
	class UActorComponent* GetComponentByClass(class UClass** ComponentClass);
	struct FName GetAttachParentSocketName();
	class AActor* GetAttachParentActor();
	void GetAttachedActors(bool* bResetArray, TArray<class AActor*>* OutActors);
	void GetAllChildActors(bool* bIncludeDescendants, TArray<class AActor*>* ChildActors);
	struct FVector GetActorUpVector();
	float GetActorTimeDilation();
	float GetActorTickInterval();
	struct FVector GetActorScale3D();
	struct FVector GetActorRightVector();
	struct FVector GetActorRelativeScale3D();
	struct FVector GetActorForwardVector();
	void GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
	bool GetActorEnableCollision();
	void GetActorBounds(bool* bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent);
	void ForceNetUpdate();
	void FlushNetDormancy();
	void EnableInput(class APlayerController** PlayerController);
	void DisableInput(class APlayerController** PlayerController);
	void DetachRootComponentFromParent(bool* bMaintainWorldPosition);
	void AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor** PrerequisiteActor);
	class UActorComponent* AddComponent(struct FName* TemplateName, bool* bManualAttachment, struct FTransform* RelativeTransform, class UObject** ComponentTemplateContext);
	bool ActorHasTag(struct FName* Tag);
};


// Class InteractiveToolsFramework.InteractiveToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UInteractiveToolBuilder : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveToolPropertySet
// 0x0020 (0x0048 - 0x0028)
class UInteractiveToolPropertySet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	class UObject*                                     CachedProperties;                                         // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolPropertySet");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveTool
// 0x0028 (0x0050 - 0x0028)
class UInteractiveTool : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UInputBehaviorSet*                           InputBehaviors;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ToolPropertyObjects;                                      // 0x0038(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleClickTool
// 0x0008 (0x0058 - 0x0050)
class USingleClickTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleSelectionTool
// 0x0008 (0x0058 - 0x0050)
class USingleSelectionTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleSelectionTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MeshSurfacePointTool
// 0x0010 (0x0068 - 0x0058)
class UMeshSurfacePointTool : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointToolBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MultiSelectionTool
// 0x0010 (0x0060 - 0x0050)
class UMultiSelectionTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MultiSelectionTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InputBehavior
// 0x0008 (0x0030 - 0x0028)
class UInputBehavior : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AnyButtonInputBehavior
// 0x0008 (0x0038 - 0x0030)
class UAnyButtonInputBehavior : public UInputBehavior
{
public:
	int                                                ButtonNumber;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.AnyButtonInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
// 0x0000 (0x0028 - 0x0028)
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisAngleGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisAngleGizmo
// 0x00B8 (0x00F0 - 0x0038)
class UAxisAngleGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoFloatParameterSource> AngleSource;                                              // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoClickTarget>          HitTarget;                                                // 0x0068(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoStateTarget>          StateTarget;                                              // 0x0078(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bInInteraction;                                           // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FVector                                     RotationOrigin;                                           // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationAxis;                                             // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationPlaneX;                                           // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationPlaneY;                                           // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionStartPoint;                                    // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionCurPoint;                                      // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              InteractionStartAngle;                                    // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InteractionCurAngle;                                      // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x00DC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisAngleGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// 0x0000 (0x0028 - 0x0028)
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisPositionGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisPositionGizmo
// 0x00A0 (0x00D8 - 0x0038)
class UAxisPositionGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoFloatParameterSource> ParameterSource;                                          // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoClickTarget>          HitTarget;                                                // 0x0068(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoStateTarget>          StateTarget;                                              // 0x0078(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bInInteraction;                                           // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FVector                                     InteractionOrigin;                                        // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionAxis;                                          // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionStartPoint;                                    // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionCurPoint;                                      // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              InteractionStartParameter;                                // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InteractionCurParameter;                                  // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x00C4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisPositionGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoConstantAxisSource
// 0x0020 (0x0048 - 0x0028)
class UGizmoConstantAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoConstantAxisSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoWorldAxisSource
// 0x0018 (0x0040 - 0x0028)
class UGizmoWorldAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                AxisIndex;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoWorldAxisSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoComponentAxisSource
// 0x0018 (0x0040 - 0x0028)
class UGizmoComponentAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class USceneComponent*                             Component;                                                // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                AxisIndex;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bLocalAxes;                                               // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentAxisSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ClickDragInputBehavior
// 0x00B8 (0x00F0 - 0x0038)
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0038(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ClickDragToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UClickDragToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragToolBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ClickDragTool
// 0x0008 (0x0058 - 0x0050)
class UClickDragTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoActor
// 0x0000 (0x0218 - 0x0218)
class AGizmoActor : public AInternalToolFrameworkActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoActor");
		return ptr;
	}


	bool WasRecentlyRendered(float* Tolerance);
	void UserConstructionScript();
	void TearOff();
	void SnapRootComponentTo(class AActor** InParentActor, struct FName* InSocketName);
	void SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup);
	void SetTickableWhenPaused(bool* bTickableWhenPaused);
	void SetReplicates(bool* bInReplicates);
	void SetReplicateMovement(bool* bInReplicateMovement);
	void SetOwner(class AActor** NewOwner);
	void SetNetDormancy(TEnumAsByte<ENetDormancy>* NewDormancy);
	void SetLifeSpan(float* InLifespan);
	void SetActorTickInterval(float* TickInterval);
	void SetActorTickEnabled(bool* bEnabled);
	void SetActorScale3D(struct FVector* NewScale3D);
	void SetActorRelativeScale3D(struct FVector* NewRelativeScale);
	void SetActorHiddenInGame(bool* bNewHidden);
	void SetActorEnableCollision(bool* bNewActorEnableCollision);
	void RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser);
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ReceiveActorOnReleased(struct FKey* ButtonReleased);
	void ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex>* FingerIndex);
	void ReceiveActorOnClicked(struct FKey* ButtonPressed);
	void ReceiveActorEndOverlap(class AActor** OtherActor);
	void ReceiveActorEndCursorOver();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ReceiveActorBeginCursorOver();
	void PrestreamTextures(float* Seconds, bool* bEnableStreaming, int* CinematicTextureGroups);
	void OnRep_ReplicateMovement();
	void OnRep_ReplicatedMovement();
	void OnRep_Owner();
	void OnRep_Instigator();
	void OnRep_AttachmentReplication();
	void MakeNoise(float* Loudness, class APawn** NoiseInstigator, struct FVector* NoiseLocation, float* MaxRange, struct FName* Tag);
	class UMaterialInstanceDynamic* MakeMIDForMaterial(class UMaterialInterface** Parent);
	bool K2_TeleportTo(struct FVector* DestLocation, struct FRotator* DestRotation);
	bool K2_SetActorTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorRotation(struct FRotator* NewRotation, bool* bTeleportPhysics);
	void K2_SetActorRelativeTransform(struct FTransform* NewRelativeTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeRotation(struct FRotator* NewRelativeRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeLocation(struct FVector* NewRelativeLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocationAndRotation(struct FVector* NewLocation, struct FRotator* NewRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocation(struct FVector* NewLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_OnReset();
	void K2_OnEndViewTarget(class APlayerController** PC);
	void K2_OnBecomeViewTarget(class APlayerController** PC);
	class USceneComponent* K2_GetRootComponent();
	TArray<class UActorComponent*> K2_GetComponentsByClass(class UClass** ComponentClass);
	struct FRotator K2_GetActorRotation();
	struct FVector K2_GetActorLocation();
	void K2_DetachFromActor(EDetachmentRule* LocationRule, EDetachmentRule* RotationRule, EDetachmentRule* ScaleRule);
	void K2_DestroyComponent(class UActorComponent** Component);
	void K2_DestroyActor();
	void K2_AttachToComponent(class USceneComponent** Parent, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies);
	void K2_AttachToActor(class AActor** ParentActor, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies);
	void K2_AttachRootComponentToActor(class AActor** InParentActor, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies);
	void K2_AttachRootComponentTo(class USceneComponent** InParent, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies);
	void K2_AddActorWorldTransform(struct FTransform* DeltaTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult);
	bool IsOverlappingActor(class AActor** Other);
	bool IsChildActor();
	bool IsActorTickEnabled();
	bool IsActorBeingDestroyed();
	bool HasAuthority();
	float GetVerticalDistanceTo(class AActor** OtherActor);
	struct FVector GetVelocity();
	struct FTransform GetTransform();
	bool GetTickableWhenPaused();
	float GetSquaredDistanceTo(class AActor** OtherActor);
	TEnumAsByte<ENetRole> GetRemoteRole();
	class UChildActorComponent* GetParentComponent();
	class AActor* GetParentActor();
	class AActor* GetOwner();
	void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents);
	void GetOverlappingActors(class UClass** ClassFilter, TArray<class AActor*>* OverlappingActors);
	TEnumAsByte<ENetRole> GetLocalRole();
	float GetLifeSpan();
	class AController* GetInstigatorController();
	class APawn* GetInstigator();
	struct FVector GetInputVectorAxisValue(struct FKey* InputAxisKey);
	float GetInputAxisValue(struct FName* InputAxisName);
	float GetInputAxisKeyValue(struct FKey* InputAxisKey);
	float GetHorizontalDotProductTo(class AActor** OtherActor);
	float GetHorizontalDistanceTo(class AActor** OtherActor);
	float GetGameTimeSinceCreation();
	float GetDotProductTo(class AActor** OtherActor);
	float GetDistanceTo(class AActor** OtherActor);
	TArray<class UActorComponent*> GetComponentsByTag(class UClass** ComponentClass, struct FName* Tag);
	TArray<class UActorComponent*> GetComponentsByInterface(class UClass** Interface);
	class UActorComponent* GetComponentByClass(class UClass** ComponentClass);
	struct FName GetAttachParentSocketName();
	class AActor* GetAttachParentActor();
	void GetAttachedActors(bool* bResetArray, TArray<class AActor*>* OutActors);
	void GetAllChildActors(bool* bIncludeDescendants, TArray<class AActor*>* ChildActors);
	struct FVector GetActorUpVector();
	float GetActorTimeDilation();
	float GetActorTickInterval();
	struct FVector GetActorScale3D();
	struct FVector GetActorRightVector();
	struct FVector GetActorRelativeScale3D();
	struct FVector GetActorForwardVector();
	void GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
	bool GetActorEnableCollision();
	void GetActorBounds(bool* bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent);
	void ForceNetUpdate();
	void FlushNetDormancy();
	void EnableInput(class APlayerController** PlayerController);
	void DisableInput(class APlayerController** PlayerController);
	void DetachRootComponentFromParent(bool* bMaintainWorldPosition);
	void AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor** PrerequisiteActor);
	class UActorComponent* AddComponent(struct FName* TemplateName, bool* bManualAttachment, struct FTransform* RelativeTransform, class UObject** ComponentTemplateContext);
	bool ActorHasTag(struct FName* Tag);
};


// Class InteractiveToolsFramework.GizmoBaseComponent
// 0x0020 (0x0400 - 0x03E0)
class UGizmoBaseComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET
	float                                              HoverSizeMultiplier;                                      // 0x03E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PixelHitDistanceThreshold;                                // 0x03EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseComponent");
		return ptr;
	}


	void UpdateWorldLocalState(bool* bWorldIn);
	void UpdateHoverState(bool* bHoveringIn);
};


// Class InteractiveToolsFramework.GizmoArrowComponent
// 0x0020 (0x0420 - 0x0400)
class UGizmoArrowComponent : public UGizmoBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0400(0x0004) MISSED OFFSET
	float                                              Gap;                                                      // 0x0404(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0408(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x040C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0410(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoArrowComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoCircleComponent
// 0x0020 (0x0420 - 0x0400)
class UGizmoCircleComponent : public UGizmoBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0400(0x0004) MISSED OFFSET
	float                                              Radius;                                                   // 0x0404(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0408(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSides;                                                 // 0x040C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bViewAligned;                                             // 0x0410(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyAllowFrontFacingHits;                                // 0x0411(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0412(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoCircleComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoTransformSource
// 0x0000 (0x0028 - 0x0028)
class UGizmoTransformSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoAxisSource
// 0x0000 (0x0028 - 0x0028)
class UGizmoAxisSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoClickTarget
// 0x0000 (0x0028 - 0x0028)
class UGizmoClickTarget : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoClickTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoStateTarget
// 0x0000 (0x0028 - 0x0028)
class UGizmoStateTarget : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoStateTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoFloatParameterSource
// 0x0000 (0x0028 - 0x0028)
class UGizmoFloatParameterSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoFloatParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoVec2ParameterSource
// 0x0000 (0x0028 - 0x0028)
class UGizmoVec2ParameterSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoVec2ParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoRectangleComponent
// 0x0030 (0x0430 - 0x0400)
class UGizmoRectangleComponent : public UGizmoBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0400(0x0004) MISSED OFFSET
	struct FVector                                     DirectionY;                                               // 0x0404(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OffsetX;                                                  // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OffsetY;                                                  // 0x0414(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LengthX;                                                  // 0x0418(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LengthY;                                                  // 0x041C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0420(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0424(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoRectangleComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLambdaHitTarget
// 0x0088 (0x00B0 - 0x0028)
class UGizmoLambdaHitTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLambdaHitTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoComponentHitTarget
// 0x0058 (0x0080 - 0x0028)
class UGizmoComponentHitTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         Component;                                                // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0038(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentHitTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InputBehaviorSet
// 0x0010 (0x0038 - 0x0028)
class UInputBehaviorSet : public UObject
{
public:
	TArray<struct FBehaviorInfo>                       Behaviors;                                                // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehaviorSet");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InputBehaviorSource
// 0x0000 (0x0028 - 0x0028)
class UInputBehaviorSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehaviorSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InputRouter
// 0x0088 (0x00B0 - 0x0028)
class UInputRouter : public UObject
{
public:
	bool                                               bAutoInvalidateOnHover;                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoInvalidateOnCapture;                                 // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x002A(0x000E) MISSED OFFSET
	class UInputBehaviorSet*                           ActiveInputBehaviors;                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0040(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InputRouter");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveGizmoManager
// 0x0090 (0x00B8 - 0x0028)
class UInteractiveGizmoManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FActiveGizmo>                        ActiveGizmos;                                             // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
	TMap<struct FString, class UInteractiveGizmoBuilder*> GizmoBuilders;                                            // 0x0058(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmoManager");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ToolContextTransactionProvider
// 0x0000 (0x0028 - 0x0028)
class UToolContextTransactionProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.ToolContextTransactionProvider");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveToolManager
// 0x00C0 (0x00E8 - 0x0028)
class UInteractiveToolManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UInteractiveTool*                            ActiveLeftTool;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInteractiveTool*                            ActiveRightTool;                                          // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0040(0x0048) MISSED OFFSET
	TMap<struct FString, class UInteractiveToolBuilder*> ToolBuilders;                                             // 0x0088(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolManager");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ToolFrameworkComponent
// 0x0000 (0x0028 - 0x0028)
class UToolFrameworkComponent : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.ToolFrameworkComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveToolsContext
// 0x0018 (0x0040 - 0x0028)
class UInteractiveToolsContext : public UObject
{
public:
	class UInputRouter*                                InputRouter;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInteractiveToolManager*                     ToolManager;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInteractiveGizmoManager*                    GizmoManager;                                             // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolsContext");
		return ptr;
	}

};


// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// 0x00E0 (0x0110 - 0x0030)
class UKeyAsModifierInputBehavior : public UInputBehavior
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0030(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.KeyAsModifierInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MeshSurfacePointToolMouseBehavior
// 0x0028 (0x0060 - 0x0038)
class UMeshSurfacePointToolMouseBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointToolMouseBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MouseHoverBehavior
// 0x0068 (0x0098 - 0x0030)
class UMouseHoverBehavior : public UInputBehavior
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0030(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MouseHoverBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// 0x00B8 (0x00F0 - 0x0038)
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0038(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MultiClickSequenceInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// 0x0020 (0x0048 - 0x0028)
class UGizmoBaseFloatParameterSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseFloatParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// 0x0010 (0x0058 - 0x0048)
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	float                                              Value;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGizmoFloatParameterChange                  LastChange;                                               // 0x004C(0x0008)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLocalFloatParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// 0x0020 (0x0048 - 0x0028)
class UGizmoBaseVec2ParameterSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// 0x0018 (0x0060 - 0x0048)
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	struct FVector2D                                   Value;                                                    // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGizmoVec2ParameterChange                   LastChange;                                               // 0x0050(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// 0x0078 (0x00C0 - 0x0048)
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Parameter;                                                // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGizmoFloatParameterChange                  LastChange;                                               // 0x006C(0x0008)
	struct FVector                                     CurTranslationAxis;                                       // 0x0074(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurTranslationOrigin;                                     // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x0090(0x0030) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// 0x0098 (0x00E0 - 0x0048)
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Parameter;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGizmoVec2ParameterChange                   LastChange;                                               // 0x0070(0x0010)
	struct FVector                                     CurTranslationOrigin;                                     // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurTranslationNormal;                                     // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurTranslationAxisX;                                      // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurTranslationAxisY;                                      // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InitialTransform;                                         // 0x00B0(0x0030) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// 0x0078 (0x00C0 - 0x0048)
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGizmoFloatParameterChange                  LastChange;                                               // 0x006C(0x0008)
	struct FVector                                     CurRotationAxis;                                          // 0x0074(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurRotationOrigin;                                        // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FTransform                                  InitialTransform;                                         // 0x0090(0x0030) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisRotationParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// 0x0000 (0x0028 - 0x0028)
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.PlanePositionGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.PlanePositionGizmo
// 0x00C0 (0x00F8 - 0x0038)
class UPlanePositionGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoVec2ParameterSource>  ParameterSource;                                          // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoClickTarget>          HitTarget;                                                // 0x0068(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoStateTarget>          StateTarget;                                              // 0x0078(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bInInteraction;                                           // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FVector                                     InteractionOrigin;                                        // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionNormal;                                        // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionAxisX;                                         // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionAxisY;                                         // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionStartPoint;                                    // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionCurPoint;                                      // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InteractionStartParameter;                                // 0x00D4(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InteractionCurParameter;                                  // 0x00DC(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x00E4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.PlanePositionGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SelectionSet
// 0x0018 (0x0040 - 0x0028)
class USelectionSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.SelectionSet");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MeshSelectionSet
// 0x0040 (0x0080 - 0x0040)
class UMeshSelectionSet : public USelectionSet
{
public:
	TArray<int>                                        Vertices;                                                 // 0x0040(0x0010) (ZeroConstructor)
	TArray<int>                                        Edges;                                                    // 0x0050(0x0010) (ZeroConstructor)
	TArray<int>                                        Faces;                                                    // 0x0060(0x0010) (ZeroConstructor)
	TArray<int>                                        Groups;                                                   // 0x0070(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSelectionSet");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleClickInputBehavior
// 0x0058 (0x0090 - 0x0038)
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET
	bool                                               HitTestOnRelease;                                         // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0081(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleClickToolBuilder
// 0x0000 (0x0028 - 0x0028)
class USingleClickToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickToolBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoNilStateTarget
// 0x0008 (0x0030 - 0x0028)
class UGizmoNilStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoNilStateTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLambdaStateTarget
// 0x0088 (0x00B0 - 0x0028)
class UGizmoLambdaStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLambdaStateTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// 0x0030 (0x0058 - 0x0028)
class UGizmoObjectModifyStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoObjectModifyStateTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// 0x00A8 (0x00D0 - 0x0028)
class UGizmoTransformChangeStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	TScriptInterface<class UToolContextTransactionProvider> TransactionManager;                                       // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0060(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformChangeStateTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformGizmoActor
// 0x0048 (0x0260 - 0x0218)
class ATransformGizmoActor : public AGizmoActor
{
public:
	class UPrimitiveComponent*                         TranslateX;                                               // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateY;                                               // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateZ;                                               // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateYZ;                                              // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateXZ;                                              // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateXY;                                              // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         RotateX;                                                  // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         RotateY;                                                  // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         RotateZ;                                                  // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmoActor");
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformGizmoBuilder
// 0x0098 (0x00C0 - 0x0028)
class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformGizmo
// 0x00E8 (0x0120 - 0x0038)
class UTransformGizmo : public UInteractiveGizmo
{
public:
	class UTransformProxy*                             ActiveTarget;                                             // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0040(0x0090) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 ActiveComponents;                                         // 0x00D0(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UInteractiveGizmo*>                   ActiveGizmos;                                             // 0x00E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET
	class UGizmoComponentAxisSource*                   AxisXSource;                                              // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoComponentAxisSource*                   AxisYSource;                                              // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoComponentAxisSource*                   AxisZSource;                                              // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoTransformChangeStateTarget*            StateTarget;                                              // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformProxy
// 0x0098 (0x00C0 - 0x0028)
class UTransformProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	bool                                               bRotatePerObject;                                         // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSetPivotMode;                                            // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1E];                                      // 0x0042(0x001E) MISSED OFFSET
	struct FTransform                                  SharedTransform;                                          // 0x0060(0x0030) (IsPlainOldData)
	struct FTransform                                  InitialSharedTransform;                                   // 0x0090(0x0030) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformProxy");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBaseTransformSource
// 0x0020 (0x0048 - 0x0028)
class UGizmoBaseTransformSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseTransformSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// 0x0010 (0x0058 - 0x0048)
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
public:
	class USceneComponent*                             Component;                                                // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bModifyComponentOnTransform;                              // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentWorldTransformSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// 0x0008 (0x0050 - 0x0048)
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{
public:
	class UTransformProxy*                             Proxy;                                                    // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformProxyTransformSource");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

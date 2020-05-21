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

// Class Foliage.FoliageInstancedStaticMeshComponent
// 0x0020 (0x0610 - 0x05F0)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05F0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInstanceTakeRadialDamage;                               // 0x05F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0608(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageInstancedStaticMeshComponent");
		return ptr;
	}

};


// Class Foliage.FoliageStatistics
// 0x0000 (0x0028 - 0x0028)
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageStatistics");
		return ptr;
	}

};


// Class Foliage.FoliageType
// 0x0338 (0x0360 - 0x0028)
class UFoliageType : public UObject
{
public:
	struct FGuid                                       UpdateGuid;                                               // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DensityAdjustmentFactor;                                  // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSingleInstanceModeOverrideRadius;                        // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              SingleInstanceModeRadius;                                 // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EFoliageScaling                                    Scaling;                                                  // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FFloatInterval                              ScaleX;                                                   // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleY;                                                   // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleZ;                                                   // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFoliageVertexColorChannelMask              VertexColorMaskByChannel[0x4];                            // 0x0068(0x000C) (Edit)
	TEnumAsByte<EFoliageVertexColorMask>               VertexColorMask;                                          // 0x0098(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              VertexColorMaskThreshold;                                 // 0x009C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      VertexColorMaskInvert : 1;                                // 0x00A0(0x0001) (Deprecated)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	struct FFloatInterval                              ZOffset;                                                  // 0x00A4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AlignToNormal : 1;                                        // 0x00AC(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	float                                              AlignMaxAngle;                                            // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RandomYaw : 1;                                            // 0x00B4(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	float                                              RandomPitchAngle;                                         // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              GroundSlopeAngle;                                         // 0x00BC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              Height;                                                   // 0x00C4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	TArray<struct FName>                               LandscapeLayers;                                          // 0x00D0(0x0010) (Edit, ZeroConstructor)
	float                                              MinimumLayerWeight;                                       // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	TArray<struct FName>                               ExclusionLandscapeLayers;                                 // 0x00E8(0x0010) (Edit, ZeroConstructor)
	float                                              MinimumExclusionLayerWeight;                              // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LandscapeLayer;                                           // 0x00FC(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      CollisionWithWorld : 1;                                   // 0x0104(0x0001) (Edit)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	struct FVector                                     CollisionScale;                                           // 0x0108(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoxSphereBounds                            MeshBounds;                                               // 0x0114(0x001C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LowBoundOriginRadius;                                     // 0x0130(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    Mobility;                                                 // 0x013C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	struct FInt32Interval                              CullDistance;                                             // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableStaticLighting : 1;                                // 0x0148(0x0001) (Deprecated)
	unsigned char                                      CastShadow : 1;                                           // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAffectDynamicIndirectLighting : 1;                       // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAffectDistanceFieldLighting : 1;                         // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastDynamicShadow : 1;                                   // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bReceivesDecals : 1;                                      // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOverrideLightMapRes : 1;                                 // 0x0149(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData10[0x2];                                       // 0x014A(0x0002) MISSED OFFSET
	int                                                OverriddenLightMapRes;                                    // 0x014C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ELightmapType                                      LightmapType;                                             // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	unsigned char                                      bUseAsOccluder : 1;                                       // 0x0154(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0155(0x0003) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x0158(0x0110) (Edit)
	TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry;                                  // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLightingChannels                           LightingChannels;                                         // 0x0269(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData13[0x2];                                       // 0x026A(0x0002) MISSED OFFSET
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x026C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData14[0x3];                                       // 0x026D(0x0003) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x0270(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TranslucencySortPriority;                                 // 0x0274(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShadeRadius;                                              // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSteps;                                                 // 0x0280(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialSeedDensity;                                       // 0x0284(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AverageSpreadDistance;                                    // 0x0288(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpreadVariance;                                           // 0x028C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SeedsPerStep;                                             // 0x0290(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DistributionSeed;                                         // 0x0294(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInitialSeedOffset;                                     // 0x0298(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanGrowInShade;                                          // 0x029C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnsInShade;                                           // 0x029D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x029E(0x0002) MISSED OFFSET
	float                                              MaxInitialAge;                                            // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAge;                                                   // 0x02A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverlapPriority;                                          // 0x02A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ProceduralScale;                                          // 0x02AC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          ScaleCurve;                                               // 0x02B8(0x0088) (Edit)
	int                                                ChangeCount;                                              // 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReapplyDensity : 1;                                       // 0x0344(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRadius : 1;                                        // 0x0344(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyAlignToNormal : 1;                                 // 0x0344(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRandomYaw : 1;                                     // 0x0344(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaling : 1;                                       // 0x0344(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaleX : 1;                                        // 0x0344(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaleY : 1;                                        // 0x0344(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyScaleZ : 1;                                        // 0x0344(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyRandomPitchAngle : 1;                              // 0x0345(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyGroundSlope : 1;                                   // 0x0345(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyHeight : 1;                                        // 0x0345(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyLandscapeLayers : 1;                               // 0x0345(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyZOffset : 1;                                       // 0x0345(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyCollisionWithWorld : 1;                            // 0x0345(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ReapplyVertexColorMask : 1;                               // 0x0345(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bEnableDensityScaling : 1;                                // 0x0345(0x0001) (Edit)
	unsigned char                                      UnknownData17[0x2];                                       // 0x0346(0x0002) MISSED OFFSET
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                   // 0x0348(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                VirtualTextureCullMips;                                   // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                             // 0x035C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x035D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType");
		return ptr;
	}

};


// Class Foliage.FoliageType_Actor
// 0x0010 (0x0370 - 0x0360)
class UFoliageType_Actor : public UFoliageType
{
public:
	class UClass*                                      ActorClass;                                               // 0x0360(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldAttachToBaseComponent;                             // 0x0368(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0369(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType_Actor");
		return ptr;
	}

};


// Class Foliage.FoliageType_InstancedStaticMesh
// 0x0020 (0x0380 - 0x0360)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	class UStaticMesh*                                 Mesh;                                                     // 0x0360(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x0368(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      ComponentClass;                                           // 0x0378(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType_InstancedStaticMesh");
		return ptr;
	}

};


// Class Foliage.InstancedFoliageActor
// 0x0050 (0x0268 - 0x0218)
class AInstancedFoliageActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0218(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InstancedFoliageActor");
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


// Class Foliage.InteractiveFoliageActor
// 0x0060 (0x0288 - 0x0228)
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     TouchingActorEntryPosition;                               // 0x0230(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     FoliageVelocity;                                          // 0x023C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     FoliageForce;                                             // 0x0248(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     FoliagePosition;                                          // 0x0254(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FoliageDamageImpulseScale;                                // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageTouchImpulseScale;                                 // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageStiffness;                                         // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageStiffnessQuadratic;                                // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageDamping;                                           // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDamageImpulse;                                         // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTouchImpulse;                                          // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxForce;                                                 // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0280(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageActor");
		return ptr;
	}


	void CapsuleTouched(class UPrimitiveComponent** OverlappedComp, class AActor** Other, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* OverlapInfo);
};


// Class Foliage.InteractiveFoliageComponent
// 0x0000 (0x0470 - 0x0470)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageComponent");
		return ptr;
	}


	bool SetStaticMesh(class UStaticMesh** NewMesh);
	void SetReverseCulling(bool* ReverseCulling);
	void SetForcedLodModel(int* NewForcedLodModel);
	void SetDistanceFieldSelfShadowBias(float* NewValue);
	void OnRep_StaticMesh(class UStaticMesh** OldStaticMesh);
	void GetLocalBounds(struct FVector* Min, struct FVector* Max);
};


// Class Foliage.ProceduralFoliageBlockingVolume
// 0x0008 (0x0258 - 0x0250)
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                  // 0x0250(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageBlockingVolume");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageComponent
// 0x0028 (0x00D8 - 0x00B0)
class UProceduralFoliageComponent : public UActorComponent
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TileOverlap;                                              // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	class AVolume*                                     SpawningVolume;                                           // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ProceduralGuid;                                           // 0x00C8(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageComponent");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageSpawner
// 0x0048 (0x0070 - 0x0028)
class UProceduralFoliageSpawner : public UObject
{
public:
	int                                                randomSeed;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TileSize;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumUniqueTiles;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumQuadTreeSize;                                      // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	TArray<struct FFoliageTypeObject>                  FoliageTypes;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	bool                                               bNeedsSimulation;                                         // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0051(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageSpawner");
		return ptr;
	}


	void Simulate(int* NumSteps);
};


// Class Foliage.ProceduralFoliageTile
// 0x0130 (0x0158 - 0x0028)
class UProceduralFoliageTile : public UObject
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET
	TArray<struct FProceduralFoliageInstance>          InstancesArray;                                           // 0x00D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x78];                                      // 0x00E0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageTile");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageVolume
// 0x0008 (0x0258 - 0x0250)
class AProceduralFoliageVolume : public AVolume
{
public:
	class UProceduralFoliageComponent*                 ProceduralComponent;                                      // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageVolume");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

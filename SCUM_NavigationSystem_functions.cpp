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

// Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
// ()
// Parameters:
// struct FBox*                   Bounds                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 OldArea                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 NewArea                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ReplaceLinks                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ARecastNavMesh::K2_ReplaceAreaInTileBounds(struct FBox* Bounds, class UClass** OldArea, class UClass** NewArea, bool* ReplaceLinks)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds");

	ARecastNavMesh_K2_ReplaceAreaInTileBounds_Params params;
	params.Bounds = Bounds;
	params.OldArea = OldArea;
	params.NewArea = NewArea;
	params.ReplaceLinks = ReplaceLinks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.WasRecentlyRendered
// ()
// Parameters:
// float*                         Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ANavigationGraphNode::WasRecentlyRendered(float* Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.WasRecentlyRendered");

	ANavigationGraphNode_WasRecentlyRendered_Params params;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.UserConstructionScript
// ()

void ANavigationGraphNode::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.UserConstructionScript");

	ANavigationGraphNode_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.TearOff
// ()

void ANavigationGraphNode::TearOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.TearOff");

	ANavigationGraphNode_TearOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SnapRootComponentTo
// ()
// Parameters:
// class AActor**                 InParentActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::SnapRootComponentTo(class AActor** InParentActor, struct FName* InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SnapRootComponentTo");

	ANavigationGraphNode_SnapRootComponentTo_Params params;
	params.InParentActor = InParentActor;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTickGroup
// ()
// Parameters:
// TEnumAsByte<ETickingGroup>*    NewTickGroup                   (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetTickGroup");

	ANavigationGraphNode_SetTickGroup_Params params;
	params.NewTickGroup = NewTickGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTickableWhenPaused
// ()
// Parameters:
// bool*                          bTickableWhenPaused            (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::SetTickableWhenPaused(bool* bTickableWhenPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetTickableWhenPaused");

	ANavigationGraphNode_SetTickableWhenPaused_Params params;
	params.bTickableWhenPaused = bTickableWhenPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicates
// ()
// Parameters:
// bool*                          bInReplicates                  (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::SetReplicates(bool* bInReplicates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetReplicates");

	ANavigationGraphNode_SetReplicates_Params params;
	params.bInReplicates = bInReplicates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicateMovement
// ()
// Parameters:
// bool*                          bInReplicateMovement           (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::SetReplicateMovement(bool* bInReplicateMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetReplicateMovement");

	ANavigationGraphNode_SetReplicateMovement_Params params;
	params.bInReplicateMovement = bInReplicateMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetOwner
// ()
// Parameters:
// class AActor**                 NewOwner                       (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::SetOwner(class AActor** NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetOwner");

	ANavigationGraphNode_SetOwner_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetNetDormancy
// ()
// Parameters:
// TEnumAsByte<ENetDormancy>*     NewDormancy                    (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::SetNetDormancy(TEnumAsByte<ENetDormancy>* NewDormancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetNetDormancy");

	ANavigationGraphNode_SetNetDormancy_Params params;
	params.NewDormancy = NewDormancy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetLifeSpan
// ()
// Parameters:
// float*                         InLifespan                     (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::SetLifeSpan(float* InLifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetLifeSpan");

	ANavigationGraphNode_SetLifeSpan_Params params;
	params.InLifespan = InLifespan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickInterval
// ()
// Parameters:
// float*                         TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::SetActorTickInterval(float* TickInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorTickInterval");

	ANavigationGraphNode_SetActorTickInterval_Params params;
	params.TickInterval = TickInterval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickEnabled
// ()
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::SetActorTickEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorTickEnabled");

	ANavigationGraphNode_SetActorTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorScale3D
// ()
// Parameters:
// struct FVector*                NewScale3D                     (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::SetActorScale3D(struct FVector* NewScale3D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorScale3D");

	ANavigationGraphNode_SetActorScale3D_Params params;
	params.NewScale3D = NewScale3D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorRelativeScale3D
// ()
// Parameters:
// struct FVector*                NewRelativeScale               (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::SetActorRelativeScale3D(struct FVector* NewRelativeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorRelativeScale3D");

	ANavigationGraphNode_SetActorRelativeScale3D_Params params;
	params.NewRelativeScale = NewRelativeScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorHiddenInGame
// ()
// Parameters:
// bool*                          bNewHidden                     (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::SetActorHiddenInGame(bool* bNewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorHiddenInGame");

	ANavigationGraphNode_SetActorHiddenInGame_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorEnableCollision
// ()
// Parameters:
// bool*                          bNewActorEnableCollision       (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::SetActorEnableCollision(bool* bNewActorEnableCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorEnableCollision");

	ANavigationGraphNode_SetActorEnableCollision_Params params;
	params.bNewActorEnableCollision = bNewActorEnableCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteComponent
// ()
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ANavigationGraphNode::RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RemoveTickPrerequisiteComponent");

	ANavigationGraphNode_RemoveTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteActor
// ()
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RemoveTickPrerequisiteActor");

	ANavigationGraphNode_RemoveTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveTick");

	ANavigationGraphNode_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveRadialDamage
// ()
// Parameters:
// float*                         DamageReceived                 (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveRadialDamage");

	ANavigationGraphNode_ReceiveRadialDamage_Params params;
	params.DamageReceived = DamageReceived;
	params.DamageType = DamageType;
	params.Origin = Origin;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceivePointDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotFromDirection              (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ANavigationGraphNode::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceivePointDamage");

	ANavigationGraphNode_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveHit
// ()
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ANavigationGraphNode::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveHit");

	ANavigationGraphNode_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveEndPlay");

	ANavigationGraphNode_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveDestroyed
// ()

void ANavigationGraphNode::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveDestroyed");

	ANavigationGraphNode_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveBeginPlay
// ()

void ANavigationGraphNode::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveBeginPlay");

	ANavigationGraphNode_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveAnyDamage");

	ANavigationGraphNode_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnReleased
// ()
// Parameters:
// struct FKey*                   ButtonReleased                 (Parm)

void ANavigationGraphNode::ReceiveActorOnReleased(struct FKey* ButtonReleased)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnReleased");

	ANavigationGraphNode_ReceiveActorOnReleased_Params params;
	params.ButtonReleased = ButtonReleased;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchLeave
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchLeave");

	ANavigationGraphNode_ReceiveActorOnInputTouchLeave_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnter
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchEnter");

	ANavigationGraphNode_ReceiveActorOnInputTouchEnter_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnd
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchEnd");

	ANavigationGraphNode_ReceiveActorOnInputTouchEnd_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchBegin
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchBegin");

	ANavigationGraphNode_ReceiveActorOnInputTouchBegin_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnClicked
// ()
// Parameters:
// struct FKey*                   ButtonPressed                  (Parm)

void ANavigationGraphNode::ReceiveActorOnClicked(struct FKey* ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnClicked");

	ANavigationGraphNode_ReceiveActorOnClicked_Params params;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorEndOverlap");

	ANavigationGraphNode_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndCursorOver
// ()

void ANavigationGraphNode::ReceiveActorEndCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorEndCursorOver");

	ANavigationGraphNode_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorBeginOverlap");

	ANavigationGraphNode_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginCursorOver
// ()

void ANavigationGraphNode::ReceiveActorBeginCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorBeginCursorOver");

	ANavigationGraphNode_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PrestreamTextures
// ()
// Parameters:
// float*                         Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEnableStreaming               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CinematicTextureGroups         (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::PrestreamTextures(float* Seconds, bool* bEnableStreaming, int* CinematicTextureGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PrestreamTextures");

	ANavigationGraphNode_PrestreamTextures_Params params;
	params.Seconds = Seconds;
	params.bEnableStreaming = bEnableStreaming;
	params.CinematicTextureGroups = CinematicTextureGroups;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicateMovement
// ()

void ANavigationGraphNode::OnRep_ReplicateMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_ReplicateMovement");

	ANavigationGraphNode_OnRep_ReplicateMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicatedMovement
// ()

void ANavigationGraphNode::OnRep_ReplicatedMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_ReplicatedMovement");

	ANavigationGraphNode_OnRep_ReplicatedMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Owner
// ()

void ANavigationGraphNode::OnRep_Owner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Owner");

	ANavigationGraphNode_OnRep_Owner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Instigator
// ()

void ANavigationGraphNode::OnRep_Instigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Instigator");

	ANavigationGraphNode_OnRep_Instigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_AttachmentReplication
// ()

void ANavigationGraphNode::OnRep_AttachmentReplication()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_AttachmentReplication");

	ANavigationGraphNode_OnRep_AttachmentReplication_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.MakeNoise
// ()
// Parameters:
// float*                         Loudness                       (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  NoiseInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NoiseLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::MakeNoise(float* Loudness, class APawn** NoiseInstigator, struct FVector* NoiseLocation, float* MaxRange, struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MakeNoise");

	ANavigationGraphNode_MakeNoise_Params params;
	params.Loudness = Loudness;
	params.NoiseInstigator = NoiseInstigator;
	params.NoiseLocation = NoiseLocation;
	params.MaxRange = MaxRange;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.MakeMIDForMaterial
// ()
// Parameters:
// class UMaterialInterface**     Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* ANavigationGraphNode::MakeMIDForMaterial(class UMaterialInterface** Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MakeMIDForMaterial");

	ANavigationGraphNode_MakeMIDForMaterial_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_TeleportTo
// ()
// Parameters:
// struct FVector*                DestLocation                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               DestRotation                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ANavigationGraphNode::K2_TeleportTo(struct FVector* DestLocation, struct FRotator* DestRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_TeleportTo");

	ANavigationGraphNode_K2_TeleportTo_Params params;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorTransform
// ()
// Parameters:
// struct FTransform*             NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ANavigationGraphNode::K2_SetActorTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorTransform");

	ANavigationGraphNode_K2_SetActorTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorRotation
// ()
// Parameters:
// struct FRotator*               NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTeleportPhysics               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ANavigationGraphNode::K2_SetActorRotation(struct FRotator* NewRotation, bool* bTeleportPhysics)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRotation");

	ANavigationGraphNode_K2_SetActorRotation_Params params;
	params.NewRotation = NewRotation;
	params.bTeleportPhysics = bTeleportPhysics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorRelativeTransform
// ()
// Parameters:
// struct FTransform*             NewRelativeTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::K2_SetActorRelativeTransform(struct FTransform* NewRelativeTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeTransform");

	ANavigationGraphNode_K2_SetActorRelativeTransform_Params params;
	params.NewRelativeTransform = NewRelativeTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorRelativeRotation
// ()
// Parameters:
// struct FRotator*               NewRelativeRotation            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::K2_SetActorRelativeRotation(struct FRotator* NewRelativeRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeRotation");

	ANavigationGraphNode_K2_SetActorRelativeRotation_Params params;
	params.NewRelativeRotation = NewRelativeRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorRelativeLocation
// ()
// Parameters:
// struct FVector*                NewRelativeLocation            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::K2_SetActorRelativeLocation(struct FVector* NewRelativeLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeLocation");

	ANavigationGraphNode_K2_SetActorRelativeLocation_Params params;
	params.NewRelativeLocation = NewRelativeLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorLocationAndRotation
// ()
// Parameters:
// struct FVector*                NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ANavigationGraphNode::K2_SetActorLocationAndRotation(struct FVector* NewLocation, struct FRotator* NewRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorLocationAndRotation");

	ANavigationGraphNode_K2_SetActorLocationAndRotation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorLocation
// ()
// Parameters:
// struct FVector*                NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ANavigationGraphNode::K2_SetActorLocation(struct FVector* NewLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorLocation");

	ANavigationGraphNode_K2_SetActorLocation_Params params;
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_OnReset
// ()

void ANavigationGraphNode::K2_OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnReset");

	ANavigationGraphNode_K2_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnEndViewTarget
// ()
// Parameters:
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::K2_OnEndViewTarget(class APlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnEndViewTarget");

	ANavigationGraphNode_K2_OnEndViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnBecomeViewTarget
// ()
// Parameters:
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::K2_OnBecomeViewTarget(class APlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnBecomeViewTarget");

	ANavigationGraphNode_K2_OnBecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_GetRootComponent
// ()
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* ANavigationGraphNode::K2_GetRootComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetRootComponent");

	ANavigationGraphNode_K2_GetRootComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetComponentsByClass
// ()
// Parameters:
// class UClass**                 ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ANavigationGraphNode::K2_GetComponentsByClass(class UClass** ComponentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetComponentsByClass");

	ANavigationGraphNode_K2_GetComponentsByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorRotation
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ANavigationGraphNode::K2_GetActorRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorRotation");

	ANavigationGraphNode_K2_GetActorRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ANavigationGraphNode::K2_GetActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorLocation");

	ANavigationGraphNode_K2_GetActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_DetachFromActor
// ()
// Parameters:
// EDetachmentRule*               LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EDetachmentRule*               RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EDetachmentRule*               ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::K2_DetachFromActor(EDetachmentRule* LocationRule, EDetachmentRule* RotationRule, EDetachmentRule* ScaleRule)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DetachFromActor");

	ANavigationGraphNode_K2_DetachFromActor_Params params;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyComponent
// ()
// Parameters:
// class UActorComponent**        Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ANavigationGraphNode::K2_DestroyComponent(class UActorComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DestroyComponent");

	ANavigationGraphNode_K2_DestroyComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyActor
// ()

void ANavigationGraphNode::K2_DestroyActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DestroyActor");

	ANavigationGraphNode_K2_DestroyActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachToComponent
// ()
// Parameters:
// class USceneComponent**        Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::K2_AttachToComponent(class USceneComponent** Parent, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachToComponent");

	ANavigationGraphNode_K2_AttachToComponent_Params params;
	params.Parent = Parent;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachToActor
// ()
// Parameters:
// class AActor**                 ParentActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::K2_AttachToActor(class AActor** ParentActor, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachToActor");

	ANavigationGraphNode_K2_AttachToActor_Params params;
	params.ParentActor = ParentActor;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachRootComponentToActor
// ()
// Parameters:
// class AActor**                 InParentActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>*  AttachLocationType             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::K2_AttachRootComponentToActor(class AActor** InParentActor, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachRootComponentToActor");

	ANavigationGraphNode_K2_AttachRootComponentToActor_Params params;
	params.InParentActor = InParentActor;
	params.InSocketName = InSocketName;
	params.AttachLocationType = AttachLocationType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachRootComponentTo
// ()
// Parameters:
// class USceneComponent**        InParent                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>*  AttachLocationType             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::K2_AttachRootComponentTo(class USceneComponent** InParent, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachRootComponentTo");

	ANavigationGraphNode_K2_AttachRootComponentTo_Params params;
	params.InParent = InParent;
	params.InSocketName = InSocketName;
	params.AttachLocationType = AttachLocationType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AddActorWorldTransform
// ()
// Parameters:
// struct FTransform*             DeltaTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::K2_AddActorWorldTransform(struct FTransform* DeltaTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldTransform");

	ANavigationGraphNode_K2_AddActorWorldTransform_Params params;
	params.DeltaTransform = DeltaTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorWorldRotation
// ()
// Parameters:
// struct FRotator*               DeltaRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::K2_AddActorWorldRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldRotation");

	ANavigationGraphNode_K2_AddActorWorldRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorWorldOffset
// ()
// Parameters:
// struct FVector*                DeltaLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::K2_AddActorWorldOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldOffset");

	ANavigationGraphNode_K2_AddActorWorldOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalTransform
// ()
// Parameters:
// struct FTransform*             NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::K2_AddActorLocalTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalTransform");

	ANavigationGraphNode_K2_AddActorLocalTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalRotation
// ()
// Parameters:
// struct FRotator*               DeltaRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::K2_AddActorLocalRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalRotation");

	ANavigationGraphNode_K2_AddActorLocalRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalOffset
// ()
// Parameters:
// struct FVector*                DeltaLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::K2_AddActorLocalOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalOffset");

	ANavigationGraphNode_K2_AddActorLocalOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.IsOverlappingActor
// ()
// Parameters:
// class AActor**                 Other                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ANavigationGraphNode::IsOverlappingActor(class AActor** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsOverlappingActor");

	ANavigationGraphNode_IsOverlappingActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsChildActor
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ANavigationGraphNode::IsChildActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsChildActor");

	ANavigationGraphNode_IsChildActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorTickEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ANavigationGraphNode::IsActorTickEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsActorTickEnabled");

	ANavigationGraphNode_IsActorTickEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorBeingDestroyed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ANavigationGraphNode::IsActorBeingDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsActorBeingDestroyed");

	ANavigationGraphNode_IsActorBeingDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.HasAuthority
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ANavigationGraphNode::HasAuthority()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.HasAuthority");

	ANavigationGraphNode_HasAuthority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetVerticalDistanceTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ANavigationGraphNode::GetVerticalDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetVerticalDistanceTo");

	ANavigationGraphNode_GetVerticalDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetVelocity
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ANavigationGraphNode::GetVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetVelocity");

	ANavigationGraphNode_GetVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTransform
// ()
// Parameters:
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FTransform ANavigationGraphNode::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTransform");

	ANavigationGraphNode_GetTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTickableWhenPaused
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ANavigationGraphNode::GetTickableWhenPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTickableWhenPaused");

	ANavigationGraphNode_GetTickableWhenPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetSquaredDistanceTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ANavigationGraphNode::GetSquaredDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetSquaredDistanceTo");

	ANavigationGraphNode_GetSquaredDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetRemoteRole
// ()
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> ANavigationGraphNode::GetRemoteRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetRemoteRole");

	ANavigationGraphNode_GetRemoteRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentComponent
// ()
// Parameters:
// class UChildActorComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UChildActorComponent* ANavigationGraphNode::GetParentComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetParentComponent");

	ANavigationGraphNode_GetParentComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentActor
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ANavigationGraphNode::GetParentActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetParentActor");

	ANavigationGraphNode_GetParentActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOwner
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ANavigationGraphNode::GetOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOwner");

	ANavigationGraphNode_GetOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOverlappingComponents
// ()
// Parameters:
// TArray<class UPrimitiveComponent*> OverlappingComponents          (Parm, OutParm, ZeroConstructor)

void ANavigationGraphNode::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOverlappingComponents");

	ANavigationGraphNode_GetOverlappingComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingComponents != nullptr)
		*OverlappingComponents = params.OverlappingComponents;
}


// Function Engine.Actor.GetOverlappingActors
// ()
// Parameters:
// TArray<class AActor*>          OverlappingActors              (Parm, OutParm, ZeroConstructor)
// class UClass**                 ClassFilter                    (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::GetOverlappingActors(class UClass** ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOverlappingActors");

	ANavigationGraphNode_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}


// Function Engine.Actor.GetLocalRole
// ()
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> ANavigationGraphNode::GetLocalRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetLocalRole");

	ANavigationGraphNode_GetLocalRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetLifeSpan
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ANavigationGraphNode::GetLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetLifeSpan");

	ANavigationGraphNode_GetLifeSpan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigatorController
// ()
// Parameters:
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AController* ANavigationGraphNode::GetInstigatorController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInstigatorController");

	ANavigationGraphNode_GetInstigatorController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigator
// ()
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* ANavigationGraphNode::GetInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInstigator");

	ANavigationGraphNode_GetInstigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputVectorAxisValue
// ()
// Parameters:
// struct FKey*                   InputAxisKey                   (ConstParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ANavigationGraphNode::GetInputVectorAxisValue(struct FKey* InputAxisKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputVectorAxisValue");

	ANavigationGraphNode_GetInputVectorAxisValue_Params params;
	params.InputAxisKey = InputAxisKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputAxisValue
// ()
// Parameters:
// struct FName*                  InputAxisName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ANavigationGraphNode::GetInputAxisValue(struct FName* InputAxisName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputAxisValue");

	ANavigationGraphNode_GetInputAxisValue_Params params;
	params.InputAxisName = InputAxisName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputAxisKeyValue
// ()
// Parameters:
// struct FKey*                   InputAxisKey                   (ConstParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ANavigationGraphNode::GetInputAxisKeyValue(struct FKey* InputAxisKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputAxisKeyValue");

	ANavigationGraphNode_GetInputAxisKeyValue_Params params;
	params.InputAxisKey = InputAxisKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetHorizontalDotProductTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ANavigationGraphNode::GetHorizontalDotProductTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetHorizontalDotProductTo");

	ANavigationGraphNode_GetHorizontalDotProductTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetHorizontalDistanceTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ANavigationGraphNode::GetHorizontalDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetHorizontalDistanceTo");

	ANavigationGraphNode_GetHorizontalDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetGameTimeSinceCreation
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ANavigationGraphNode::GetGameTimeSinceCreation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetGameTimeSinceCreation");

	ANavigationGraphNode_GetGameTimeSinceCreation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetDotProductTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ANavigationGraphNode::GetDotProductTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetDotProductTo");

	ANavigationGraphNode_GetDotProductTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetDistanceTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ANavigationGraphNode::GetDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetDistanceTo");

	ANavigationGraphNode_GetDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentsByTag
// ()
// Parameters:
// class UClass**                 ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ANavigationGraphNode::GetComponentsByTag(class UClass** ComponentClass, struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentsByTag");

	ANavigationGraphNode_GetComponentsByTag_Params params;
	params.ComponentClass = ComponentClass;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentsByInterface
// ()
// Parameters:
// class UClass**                 Interface                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ANavigationGraphNode::GetComponentsByInterface(class UClass** Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentsByInterface");

	ANavigationGraphNode_GetComponentsByInterface_Params params;
	params.Interface = Interface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentByClass
// ()
// Parameters:
// class UClass**                 ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* ANavigationGraphNode::GetComponentByClass(class UClass** ComponentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentByClass");

	ANavigationGraphNode_GetComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachParentSocketName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ANavigationGraphNode::GetAttachParentSocketName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachParentSocketName");

	ANavigationGraphNode_GetAttachParentSocketName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachParentActor
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ANavigationGraphNode::GetAttachParentActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachParentActor");

	ANavigationGraphNode_GetAttachParentActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachedActors
// ()
// Parameters:
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
// bool*                          bResetArray                    (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::GetAttachedActors(bool* bResetArray, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachedActors");

	ANavigationGraphNode_GetAttachedActors_Params params;
	params.bResetArray = bResetArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function Engine.Actor.GetAllChildActors
// ()
// Parameters:
// TArray<class AActor*>          ChildActors                    (Parm, OutParm, ZeroConstructor)
// bool*                          bIncludeDescendants            (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::GetAllChildActors(bool* bIncludeDescendants, TArray<class AActor*>* ChildActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAllChildActors");

	ANavigationGraphNode_GetAllChildActors_Params params;
	params.bIncludeDescendants = bIncludeDescendants;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChildActors != nullptr)
		*ChildActors = params.ChildActors;
}


// Function Engine.Actor.GetActorUpVector
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ANavigationGraphNode::GetActorUpVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorUpVector");

	ANavigationGraphNode_GetActorUpVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTimeDilation
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ANavigationGraphNode::GetActorTimeDilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorTimeDilation");

	ANavigationGraphNode_GetActorTimeDilation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTickInterval
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ANavigationGraphNode::GetActorTickInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorTickInterval");

	ANavigationGraphNode_GetActorTickInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorScale3D
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ANavigationGraphNode::GetActorScale3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorScale3D");

	ANavigationGraphNode_GetActorScale3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRightVector
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ANavigationGraphNode::GetActorRightVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorRightVector");

	ANavigationGraphNode_GetActorRightVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRelativeScale3D
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ANavigationGraphNode::GetActorRelativeScale3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorRelativeScale3D");

	ANavigationGraphNode_GetActorRelativeScale3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorForwardVector
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ANavigationGraphNode::GetActorForwardVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorForwardVector");

	ANavigationGraphNode_GetActorForwardVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorEyesViewPoint
// ()
// Parameters:
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorEyesViewPoint");

	ANavigationGraphNode_GetActorEyesViewPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}


// Function Engine.Actor.GetActorEnableCollision
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ANavigationGraphNode::GetActorEnableCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorEnableCollision");

	ANavigationGraphNode_GetActorEnableCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorBounds
// ()
// Parameters:
// bool*                          bOnlyCollidingComponents       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::GetActorBounds(bool* bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorBounds");

	ANavigationGraphNode_GetActorBounds_Params params;
	params.bOnlyCollidingComponents = bOnlyCollidingComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}


// Function Engine.Actor.ForceNetUpdate
// ()

void ANavigationGraphNode::ForceNetUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ForceNetUpdate");

	ANavigationGraphNode_ForceNetUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.FlushNetDormancy
// ()

void ANavigationGraphNode::FlushNetDormancy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.FlushNetDormancy");

	ANavigationGraphNode_FlushNetDormancy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.EnableInput
// ()
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::EnableInput(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.EnableInput");

	ANavigationGraphNode_EnableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DisableInput
// ()
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::DisableInput(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DisableInput");

	ANavigationGraphNode_DisableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DetachRootComponentFromParent
// ()
// Parameters:
// bool*                          bMaintainWorldPosition         (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::DetachRootComponentFromParent(bool* bMaintainWorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DetachRootComponentFromParent");

	ANavigationGraphNode_DetachRootComponentFromParent_Params params;
	params.bMaintainWorldPosition = bMaintainWorldPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteComponent
// ()
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ANavigationGraphNode::AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddTickPrerequisiteComponent");

	ANavigationGraphNode_AddTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteActor
// ()
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)

void ANavigationGraphNode::AddTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddTickPrerequisiteActor");

	ANavigationGraphNode_AddTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddComponent
// ()
// Parameters:
// struct FName*                  TemplateName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bManualAttachment              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject**                ComponentTemplateContext       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* ANavigationGraphNode::AddComponent(struct FName* TemplateName, bool* bManualAttachment, struct FTransform* RelativeTransform, class UObject** ComponentTemplateContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddComponent");

	ANavigationGraphNode_AddComponent_Params params;
	params.TemplateName = TemplateName;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;
	params.ComponentTemplateContext = ComponentTemplateContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.ActorHasTag
// ()
// Parameters:
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ANavigationGraphNode::ActorHasTag(struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ActorHasTag");

	ANavigationGraphNode_ActorHasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.IsValid
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationPath::IsValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsValid");

	UNavigationPath_IsValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.IsStringPulled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationPath::IsStringPulled()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsStringPulled");

	UNavigationPath_IsStringPulled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.IsPartial
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationPath::IsPartial()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsPartial");

	UNavigationPath_IsPartial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.GetPathLength
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNavigationPath::GetPathLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathLength");

	UNavigationPath_GetPathLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.GetPathCost
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNavigationPath::GetPathCost()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathCost");

	UNavigationPath_GetPathCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.GetDebugString
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UNavigationPath::GetDebugString()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetDebugString");

	UNavigationPath_GetDebugString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
// ()
// Parameters:
// TEnumAsByte<ENavigationOptionFlag>* DoRecalculation                (Parm, ZeroConstructor, IsPlainOldData)

void UNavigationPath::EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag>* DoRecalculation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation");

	UNavigationPath_EnableRecalculationOnInvalidation_Params params;
	params.DoRecalculation = DoRecalculation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationPath.EnableDebugDrawing
// ()
// Parameters:
// bool*                          bShouldDrawDebugData           (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           PathColor                      (Parm, ZeroConstructor, IsPlainOldData)

void UNavigationPath::EnableDebugDrawing(bool* bShouldDrawDebugData, struct FLinearColor* PathColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableDebugDrawing");

	UNavigationPath_EnableDebugDrawing_Params params;
	params.bShouldDrawDebugData = bShouldDrawDebugData;
	params.PathColor = PathColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
// ()
// Parameters:
// class AActor**                 Invoker                        (Parm, ZeroConstructor, IsPlainOldData)

void UNavigationSystemV1::UnregisterNavigationInvoker(class AActor** Invoker)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker");

	UNavigationSystemV1_UnregisterNavigationInvoker_Params params;
	params.Invoker = Invoker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
// ()
// Parameters:
// class AController**            Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Goal                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UNavigationSystemV1::SimpleMoveToLocation(class AController** Controller, struct FVector* Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation");

	UNavigationSystemV1_SimpleMoveToLocation_Params params;
	params.Controller = Controller;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
// ()
// Parameters:
// class AController**            Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Goal                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UNavigationSystemV1::SimpleMoveToActor(class AController** Controller, class AActor** Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor");

	UNavigationSystemV1_SimpleMoveToActor_Params params;
	params.Controller = Controller;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
// ()
// Parameters:
// int*                           MaxNumberOfJobs                (Parm, ZeroConstructor, IsPlainOldData)

void UNavigationSystemV1::SetMaxSimultaneousTileGenerationJobsCount(int* MaxNumberOfJobs)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount");

	UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Params params;
	params.MaxNumberOfJobs = MaxNumberOfJobs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
// ()
// Parameters:
// ENavDataGatheringModeConfig*   NewMode                        (Parm, ZeroConstructor, IsPlainOldData)

void UNavigationSystemV1::SetGeometryGatheringMode(ENavDataGatheringModeConfig* NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode");

	UNavigationSystemV1_SetGeometryGatheringMode_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
// ()

void UNavigationSystemV1::ResetMaxSimultaneousTileGenerationJobsCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount");

	UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
// ()
// Parameters:
// class AActor**                 Invoker                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TileGenerationRadius           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TileRemovalRadius              (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 NavigationDataToUpdate         (Parm, ZeroConstructor, IsPlainOldData)

void UNavigationSystemV1::RegisterNavigationInvoker(class AActor** Invoker, float* TileGenerationRadius, float* TileRemovalRadius, class UClass** NavigationDataToUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker");

	UNavigationSystemV1_RegisterNavigationInvoker_Params params;
	params.Invoker = Invoker;
	params.TileGenerationRadius = TileGenerationRadius;
	params.TileRemovalRadius = TileRemovalRadius;
	params.NavigationDataToUpdate = NavigationDataToUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
// ()
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class ANavigationData**        NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                QueryExtent                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavigationSystemV1::ProjectPointToNavigation(class UObject** WorldContextObject, struct FVector* Point, class ANavigationData** NavData, class UClass** FilterClass, struct FVector* QueryExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation");

	UNavigationSystemV1_ProjectPointToNavigation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
// ()
// Parameters:
// class ANavMeshBoundsVolume**   NavVolume                      (Parm, ZeroConstructor, IsPlainOldData)

void UNavigationSystemV1::OnNavigationBoundsUpdated(class ANavMeshBoundsVolume** NavVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated");

	UNavigationSystemV1_OnNavigationBoundsUpdated_Params params;
	params.NavVolume = NavVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavigationSystemV1.NavigationRaycast
// ()
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                RayStart                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                RayEnd                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            Querier                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationSystemV1::NavigationRaycast(class UObject** WorldContextObject, struct FVector* RayStart, struct FVector* RayEnd, class UClass** FilterClass, class AController** Querier, struct FVector* HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.NavigationRaycast");

	UNavigationSystemV1_NavigationRaycast_Params params;
	params.WorldContextObject = WorldContextObject;
	params.RayStart = RayStart;
	params.RayEnd = RayEnd;
	params.FilterClass = FilterClass;
	params.Querier = Querier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
// ()
// Parameters:
// class UObject**                Object                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 OldArea                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 NewArea                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationSystemV1::K2_ReplaceAreaInOctreeData(class UObject** Object, class UClass** OldArea, class UClass** NewArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData");

	UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Params params;
	params.Object = Object;
	params.OldArea = OldArea;
	params.NewArea = NewArea;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
// ()
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ProjectedLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ANavigationData**        NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                QueryExtent                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationSystemV1::K2_ProjectPointToNavigation(class UObject** WorldContextObject, struct FVector* Point, class ANavigationData** NavData, class UClass** FilterClass, struct FVector* QueryExtent, struct FVector* ProjectedLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation");

	UNavigationSystemV1_K2_ProjectPointToNavigation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProjectedLocation != nullptr)
		*ProjectedLocation = params.ProjectedLocation;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
// ()
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 RandomLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class ANavigationData**        NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationSystemV1::K2_GetRandomReachablePointInRadius(class UObject** WorldContextObject, struct FVector* Origin, float* Radius, class ANavigationData** NavData, class UClass** FilterClass, struct FVector* RandomLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius");

	UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
// ()
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 RandomLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class ANavigationData**        NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationSystemV1::K2_GetRandomPointInNavigableRadius(class UObject** WorldContextObject, struct FVector* Origin, float* Radius, class ANavigationData** NavData, class UClass** FilterClass, struct FVector* RandomLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius");

	UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
// ()
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 RandomLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class ANavigationData**        NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationSystemV1::K2_GetRandomLocationInNavigableRadius(class UObject** WorldContextObject, struct FVector* Origin, float* Radius, class ANavigationData** NavData, class UClass** FilterClass, struct FVector* RandomLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius");

	UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
// ()
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationSystemV1::IsNavigationBeingBuiltOrLocked(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked");

	UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
// ()
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavigationSystemV1::IsNavigationBeingBuilt(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt");

	UNavigationSystemV1_IsNavigationBeingBuilt_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
// ()
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class ANavigationData**        NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavigationSystemV1::GetRandomReachablePointInRadius(class UObject** WorldContextObject, struct FVector* Origin, float* Radius, class ANavigationData** NavData, class UClass** FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius");

	UNavigationSystemV1_GetRandomReachablePointInRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
// ()
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class ANavigationData**        NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavigationSystemV1::GetRandomPointInNavigableRadius(class UObject** WorldContextObject, struct FVector* Origin, float* Radius, class ANavigationData** NavData, class UClass** FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius");

	UNavigationSystemV1_GetRandomPointInNavigableRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetPathLength
// ()
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                PathEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          PathLength                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ANavigationData**        NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENavigationQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENavigationQueryResult> UNavigationSystemV1::GetPathLength(class UObject** WorldContextObject, struct FVector* PathStart, struct FVector* PathEnd, class ANavigationData** NavData, class UClass** FilterClass, float* PathLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetPathLength");

	UNavigationSystemV1_GetPathLength_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PathLength != nullptr)
		*PathLength = params.PathLength;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetPathCost
// ()
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                PathEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          PathCost                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ANavigationData**        NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENavigationQueryResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENavigationQueryResult> UNavigationSystemV1::GetPathCost(class UObject** WorldContextObject, struct FVector* PathStart, struct FVector* PathEnd, class ANavigationData** NavData, class UClass** FilterClass, float* PathCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetPathCost");

	UNavigationSystemV1_GetPathCost_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PathCost != nullptr)
		*PathCost = params.PathCost;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
// ()
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UNavigationSystemV1*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNavigationSystemV1* UNavigationSystemV1::GetNavigationSystem(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetNavigationSystem");

	UNavigationSystemV1_GetNavigationSystem_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
// ()
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                PathEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor**                 PathfindingContext             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class UNavigationPath*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNavigationPath* UNavigationSystemV1::FindPathToLocationSynchronously(class UObject** WorldContextObject, struct FVector* PathStart, struct FVector* PathEnd, class AActor** PathfindingContext, class UClass** FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously");

	UNavigationSystemV1_FindPathToLocationSynchronously_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.PathfindingContext = PathfindingContext;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
// ()
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PathStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor**                 GoalActor                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TetherDistance                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 PathfindingContext             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class UNavigationPath*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNavigationPath* UNavigationSystemV1::FindPathToActorSynchronously(class UObject** WorldContextObject, struct FVector* PathStart, class AActor** GoalActor, float* TetherDistance, class AActor** PathfindingContext, class UClass** FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously");

	UNavigationSystemV1_FindPathToActorSynchronously_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.GoalActor = GoalActor;
	params.TetherDistance = TetherDistance;
	params.PathfindingContext = PathfindingContext;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
// ()
// Parameters:
// bool*                          bRelevant                      (Parm, ZeroConstructor, IsPlainOldData)

void UNavRelevantComponent::SetNavigationRelevancy(bool* bRelevant)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy");

	UNavRelevantComponent_SetNavigationRelevancy_Params params;
	params.bRelevant = bRelevant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.WakeRigidBody
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::WakeRigidBody(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.WakeRigidBody");

	UNavLinkRenderingComponent_WakeRigidBody_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.WakeAllRigidBodies
// ()

void UNavLinkRenderingComponent::WakeAllRigidBodies()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.WakeAllRigidBodies");

	UNavLinkRenderingComponent_WakeAllRigidBodies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetWalkableSlopeOverride
// ()
// Parameters:
// struct FWalkableSlopeOverride* NewOverride                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UNavLinkRenderingComponent::SetWalkableSlopeOverride(struct FWalkableSlopeOverride* NewOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetWalkableSlopeOverride");

	UNavLinkRenderingComponent_SetWalkableSlopeOverride_Params params;
	params.NewOverride = NewOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetUseCCD
// ()
// Parameters:
// bool*                          InUseCCD                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetUseCCD(bool* InUseCCD, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetUseCCD");

	UNavLinkRenderingComponent_SetUseCCD_Params params;
	params.InUseCCD = InUseCCD;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetTranslucentSortPriority
// ()
// Parameters:
// int*                           NewTranslucentSortPriority     (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetTranslucentSortPriority(int* NewTranslucentSortPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetTranslucentSortPriority");

	UNavLinkRenderingComponent_SetTranslucentSortPriority_Params params;
	params.NewTranslucentSortPriority = NewTranslucentSortPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights
// ()
// Parameters:
// bool*                          bNewSingleSampleShadowFromStationaryLights (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetSingleSampleShadowFromStationaryLights(bool* bNewSingleSampleShadowFromStationaryLights)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights");

	UNavLinkRenderingComponent_SetSingleSampleShadowFromStationaryLights_Params params;
	params.bNewSingleSampleShadowFromStationaryLights = bNewSingleSampleShadowFromStationaryLights;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetSimulatePhysics
// ()
// Parameters:
// bool*                          bSimulate                      (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetSimulatePhysics(bool* bSimulate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetSimulatePhysics");

	UNavLinkRenderingComponent_SetSimulatePhysics_Params params;
	params.bSimulate = bSimulate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderInMainPass
// ()
// Parameters:
// bool*                          bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetRenderInMainPass(bool* bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetRenderInMainPass");

	UNavLinkRenderingComponent_SetRenderInMainPass_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderCustomDepth
// ()
// Parameters:
// bool*                          bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetRenderCustomDepth(bool* bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetRenderCustomDepth");

	UNavLinkRenderingComponent_SetRenderCustomDepth_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetReceivesDecals
// ()
// Parameters:
// bool*                          bNewReceivesDecals             (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetReceivesDecals(bool* bNewReceivesDecals)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetReceivesDecals");

	UNavLinkRenderingComponent_SetReceivesDecals_Params params;
	params.bNewReceivesDecals = bNewReceivesDecals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysMaterialOverride
// ()
// Parameters:
// class UPhysicalMaterial**      NewPhysMaterial                (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetPhysMaterialOverride(class UPhysicalMaterial** NewPhysMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysMaterialOverride");

	UNavLinkRenderingComponent_SetPhysMaterialOverride_Params params;
	params.NewPhysMaterial = NewPhysMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians
// ()
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetPhysicsMaxAngularVelocityInRadians(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians");

	UNavLinkRenderingComponent_SetPhysicsMaxAngularVelocityInRadians_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees
// ()
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetPhysicsMaxAngularVelocityInDegrees(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees");

	UNavLinkRenderingComponent_SetPhysicsMaxAngularVelocityInDegrees_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
// ()
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetPhysicsMaxAngularVelocity(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity");

	UNavLinkRenderingComponent_SetPhysicsMaxAngularVelocity_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity
// ()
// Parameters:
// struct FVector*                NewVel                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetPhysicsLinearVelocity(struct FVector* NewVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity");

	UNavLinkRenderingComponent_SetPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians
// ()
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetPhysicsAngularVelocityInRadians(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians");

	UNavLinkRenderingComponent_SetPhysicsAngularVelocityInRadians_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees
// ()
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetPhysicsAngularVelocityInDegrees(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees");

	UNavLinkRenderingComponent_SetPhysicsAngularVelocityInDegrees_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity
// ()
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetPhysicsAngularVelocity(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity");

	UNavLinkRenderingComponent_SetPhysicsAngularVelocity_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetOwnerNoSee
// ()
// Parameters:
// bool*                          bNewOwnerNoSee                 (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetOwnerNoSee(bool* bNewOwnerNoSee)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetOwnerNoSee");

	UNavLinkRenderingComponent_SetOwnerNoSee_Params params;
	params.bNewOwnerNoSee = bNewOwnerNoSee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetOnlyOwnerSee
// ()
// Parameters:
// bool*                          bNewOnlyOwnerSee               (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetOnlyOwnerSee(bool* bNewOnlyOwnerSee)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetOnlyOwnerSee");

	UNavLinkRenderingComponent_SetOnlyOwnerSee_Params params;
	params.bNewOnlyOwnerSee = bNewOnlyOwnerSee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
// ()
// Parameters:
// bool*                          bNewNotifyRigidBodyCollision   (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetNotifyRigidBodyCollision(bool* bNewNotifyRigidBodyCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision");

	UNavLinkRenderingComponent_SetNotifyRigidBodyCollision_Params params;
	params.bNewNotifyRigidBodyCollision = bNewNotifyRigidBodyCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMaterialByName
// ()
// Parameters:
// struct FName*                  MaterialSlotName               (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetMaterialByName(struct FName* MaterialSlotName, class UMaterialInterface** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMaterialByName");

	UNavLinkRenderingComponent_SetMaterialByName_Params params;
	params.MaterialSlotName = MaterialSlotName;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMaterial
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetMaterial(int* ElementIndex, class UMaterialInterface** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMaterial");

	UNavLinkRenderingComponent_SetMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMassScale
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InMassScale                    (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetMassScale(struct FName* BoneName, float* InMassScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMassScale");

	UNavLinkRenderingComponent_SetMassScale_Params params;
	params.BoneName = BoneName;
	params.InMassScale = InMassScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMassOverrideInKg
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MassInKg                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOverrideMass                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetMassOverrideInKg(struct FName* BoneName, float* MassInKg, bool* bOverrideMass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMassOverrideInKg");

	UNavLinkRenderingComponent_SetMassOverrideInKg_Params params;
	params.BoneName = BoneName;
	params.MassInKg = MassInKg;
	params.bOverrideMass = bOverrideMass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetLinearDamping
// ()
// Parameters:
// float*                         InDamping                      (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetLinearDamping(float* InDamping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetLinearDamping");

	UNavLinkRenderingComponent_SetLinearDamping_Params params;
	params.InDamping = InDamping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetLightAttachmentsAsGroup
// ()
// Parameters:
// bool*                          bInLightAttachmentsAsGroup     (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetLightAttachmentsAsGroup(bool* bInLightAttachmentsAsGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetLightAttachmentsAsGroup");

	UNavLinkRenderingComponent_SetLightAttachmentsAsGroup_Params params;
	params.bInLightAttachmentsAsGroup = bInLightAttachmentsAsGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetGenerateOverlapEvents
// ()
// Parameters:
// bool*                          bInGenerateOverlapEvents       (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetGenerateOverlapEvents(bool* bInGenerateOverlapEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetGenerateOverlapEvents");

	UNavLinkRenderingComponent_SetGenerateOverlapEvents_Params params;
	params.bInGenerateOverlapEvents = bInGenerateOverlapEvents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetExcludeFromLightAttachmentGroup
// ()
// Parameters:
// bool*                          bInExcludeFromLightAttachmentGroup (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetExcludeFromLightAttachmentGroup(bool* bInExcludeFromLightAttachmentGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetExcludeFromLightAttachmentGroup");

	UNavLinkRenderingComponent_SetExcludeFromLightAttachmentGroup_Params params;
	params.bInExcludeFromLightAttachmentGroup = bInExcludeFromLightAttachmentGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetEnableGravity
// ()
// Parameters:
// bool*                          bGravityEnabled                (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetEnableGravity(bool* bGravityEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetEnableGravity");

	UNavLinkRenderingComponent_SetEnableGravity_Params params;
	params.bGravityEnabled = bGravityEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector4
// ()
// Parameters:
// int*                           DataIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector4*               Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetCustomPrimitiveDataVector4(int* DataIndex, struct FVector4* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector4");

	UNavLinkRenderingComponent_SetCustomPrimitiveDataVector4_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector3
// ()
// Parameters:
// int*                           DataIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetCustomPrimitiveDataVector3(int* DataIndex, struct FVector* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector3");

	UNavLinkRenderingComponent_SetCustomPrimitiveDataVector3_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector2
// ()
// Parameters:
// int*                           DataIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetCustomPrimitiveDataVector2(int* DataIndex, struct FVector2D* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector2");

	UNavLinkRenderingComponent_SetCustomPrimitiveDataVector2_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataFloat
// ()
// Parameters:
// int*                           DataIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetCustomPrimitiveDataFloat(int* DataIndex, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataFloat");

	UNavLinkRenderingComponent_SetCustomPrimitiveDataFloat_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask
// ()
// Parameters:
// ERendererStencilMask*          WriteMaskBit                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetCustomDepthStencilWriteMask(ERendererStencilMask* WriteMaskBit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask");

	UNavLinkRenderingComponent_SetCustomDepthStencilWriteMask_Params params;
	params.WriteMaskBit = WriteMaskBit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomDepthStencilValue
// ()
// Parameters:
// int*                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetCustomDepthStencilValue(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomDepthStencilValue");

	UNavLinkRenderingComponent_SetCustomDepthStencilValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCullDistance
// ()
// Parameters:
// float*                         NewCullDistance                (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetCullDistance(float* NewCullDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCullDistance");

	UNavLinkRenderingComponent_SetCullDistance_Params params;
	params.NewCullDistance = NewCullDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetConstraintMode
// ()
// Parameters:
// TEnumAsByte<EDOFMode>*         ConstraintMode                 (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetConstraintMode(TEnumAsByte<EDOFMode>* ConstraintMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetConstraintMode");

	UNavLinkRenderingComponent_SetConstraintMode_Params params;
	params.ConstraintMode = ConstraintMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionResponseToChannel
// ()
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionResponse>* NewResponse                    (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel>* Channel, TEnumAsByte<ECollisionResponse>* NewResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionResponseToChannel");

	UNavLinkRenderingComponent_SetCollisionResponseToChannel_Params params;
	params.Channel = Channel;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
// ()
// Parameters:
// TEnumAsByte<ECollisionResponse>* NewResponse                    (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse>* NewResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels");

	UNavLinkRenderingComponent_SetCollisionResponseToAllChannels_Params params;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionProfileName
// ()
// Parameters:
// struct FName*                  InCollisionProfileName         (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetCollisionProfileName(struct FName* InCollisionProfileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionProfileName");

	UNavLinkRenderingComponent_SetCollisionProfileName_Params params;
	params.InCollisionProfileName = InCollisionProfileName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionObjectType
// ()
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetCollisionObjectType(TEnumAsByte<ECollisionChannel>* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionObjectType");

	UNavLinkRenderingComponent_SetCollisionObjectType_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionEnabled
// ()
// Parameters:
// TEnumAsByte<ECollisionEnabled>* NewType                        (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetCollisionEnabled(TEnumAsByte<ECollisionEnabled>* NewType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionEnabled");

	UNavLinkRenderingComponent_SetCollisionEnabled_Params params;
	params.NewType = NewType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCenterOfMass
// ()
// Parameters:
// struct FVector*                CenterOfMassOffset             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetCenterOfMass(struct FVector* CenterOfMassOffset, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCenterOfMass");

	UNavLinkRenderingComponent_SetCenterOfMass_Params params;
	params.CenterOfMassOffset = CenterOfMassOffset;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCastShadow
// ()
// Parameters:
// bool*                          NewCastShadow                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetCastShadow(bool* NewCastShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCastShadow");

	UNavLinkRenderingComponent_SetCastShadow_Params params;
	params.NewCastShadow = NewCastShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCastInsetShadow
// ()
// Parameters:
// bool*                          bInCastInsetShadow             (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetCastInsetShadow(bool* bInCastInsetShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCastInsetShadow");

	UNavLinkRenderingComponent_SetCastInsetShadow_Params params;
	params.bInCastInsetShadow = bInCastInsetShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetBoundsScale
// ()
// Parameters:
// float*                         NewBoundsScale                 (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetBoundsScale(float* NewBoundsScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetBoundsScale");

	UNavLinkRenderingComponent_SetBoundsScale_Params params;
	params.NewBoundsScale = NewBoundsScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAngularDamping
// ()
// Parameters:
// float*                         InDamping                      (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetAngularDamping(float* InDamping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAngularDamping");

	UNavLinkRenderingComponent_SetAngularDamping_Params params;
	params.InDamping = InDamping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllUseCCD
// ()
// Parameters:
// bool*                          InUseCCD                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetAllUseCCD(bool* InUseCCD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllUseCCD");

	UNavLinkRenderingComponent_SetAllUseCCD_Params params;
	params.InUseCCD = InUseCCD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
// ()
// Parameters:
// struct FVector*                NewVel                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetAllPhysicsLinearVelocity(struct FVector* NewVel, bool* bAddToCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity");

	UNavLinkRenderingComponent_SetAllPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians
// ()
// Parameters:
// struct FVector*                NewAngVel                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetAllPhysicsAngularVelocityInRadians(struct FVector* NewAngVel, bool* bAddToCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians");

	UNavLinkRenderingComponent_SetAllPhysicsAngularVelocityInRadians_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees
// ()
// Parameters:
// struct FVector*                NewAngVel                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetAllPhysicsAngularVelocityInDegrees(struct FVector* NewAngVel, bool* bAddToCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees");

	UNavLinkRenderingComponent_SetAllPhysicsAngularVelocityInDegrees_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllMassScale
// ()
// Parameters:
// float*                         InMassScale                    (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::SetAllMassScale(float* InMassScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllMassScale");

	UNavLinkRenderingComponent_SetAllMassScale_Params params;
	params.InMassScale = InMassScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.ScaleByMomentOfInertia
// ()
// Parameters:
// struct FVector*                InputVector                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavLinkRenderingComponent::ScaleByMomentOfInertia(struct FVector* InputVector, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.ScaleByMomentOfInertia");

	UNavLinkRenderingComponent_ScaleByMomentOfInertia_Params params;
	params.InputVector = InputVector;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.PutRigidBodyToSleep
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::PutRigidBodyToSleep(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.PutRigidBodyToSleep");

	UNavLinkRenderingComponent_PutRigidBodyToSleep_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.K2_SphereTraceComponent
// ()
// Parameters:
// struct FVector*                TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavLinkRenderingComponent::K2_SphereTraceComponent(struct FVector* TraceStart, struct FVector* TraceEnd, float* SphereRadius, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_SphereTraceComponent");

	UNavLinkRenderingComponent_K2_SphereTraceComponent_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.SphereRadius = SphereRadius;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_SphereOverlapComponent
// ()
// Parameters:
// struct FVector*                InSphereCentre                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InSphereRadius                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavLinkRenderingComponent::K2_SphereOverlapComponent(struct FVector* InSphereCentre, float* InSphereRadius, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_SphereOverlapComponent");

	UNavLinkRenderingComponent_K2_SphereOverlapComponent_Params params;
	params.InSphereCentre = InSphereCentre;
	params.InSphereRadius = InSphereRadius;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_LineTraceComponent
// ()
// Parameters:
// struct FVector*                TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavLinkRenderingComponent::K2_LineTraceComponent(struct FVector* TraceStart, struct FVector* TraceEnd, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_LineTraceComponent");

	UNavLinkRenderingComponent_K2_LineTraceComponent_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavLinkRenderingComponent::K2_IsQueryCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled");

	UNavLinkRenderingComponent_K2_IsQueryCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavLinkRenderingComponent::K2_IsPhysicsCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled");

	UNavLinkRenderingComponent_K2_IsPhysicsCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsCollisionEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavLinkRenderingComponent::K2_IsCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_IsCollisionEnabled");

	UNavLinkRenderingComponent_K2_IsCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_BoxOverlapComponent
// ()
// Parameters:
// struct FVector*                InBoxCentre                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBox*                   InBox                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavLinkRenderingComponent::K2_BoxOverlapComponent(struct FVector* InBoxCentre, struct FBox* InBox, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_BoxOverlapComponent");

	UNavLinkRenderingComponent_K2_BoxOverlapComponent_Params params;
	params.InBoxCentre = InBoxCentre;
	params.InBox = InBox;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsOverlappingComponent
// ()
// Parameters:
// class UPrimitiveComponent**    OtherComp                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavLinkRenderingComponent::IsOverlappingComponent(class UPrimitiveComponent** OtherComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsOverlappingComponent");

	UNavLinkRenderingComponent_IsOverlappingComponent_Params params;
	params.OtherComp = OtherComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsOverlappingActor
// ()
// Parameters:
// class AActor**                 Other                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavLinkRenderingComponent::IsOverlappingActor(class AActor** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsOverlappingActor");

	UNavLinkRenderingComponent_IsOverlappingActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsGravityEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavLinkRenderingComponent::IsGravityEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsGravityEnabled");

	UNavLinkRenderingComponent_IsGravityEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavLinkRenderingComponent::IsAnyRigidBodyAwake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake");

	UNavLinkRenderingComponent_IsAnyRigidBodyAwake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving
// ()
// Parameters:
// class UPrimitiveComponent**    Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bShouldIgnore                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::IgnoreComponentWhenMoving(class UPrimitiveComponent** Component, bool* bShouldIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving");

	UNavLinkRenderingComponent_IgnoreComponentWhenMoving_Params params;
	params.Component = Component;
	params.bShouldIgnore = bShouldIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.IgnoreActorWhenMoving
// ()
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShouldIgnore                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::IgnoreActorWhenMoving(class AActor** Actor, bool* bShouldIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IgnoreActorWhenMoving");

	UNavLinkRenderingComponent_IgnoreActorWhenMoving_Params params;
	params.Actor = Actor;
	params.bShouldIgnore = bShouldIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.GetWalkableSlopeOverride
// ()
// Parameters:
// struct FWalkableSlopeOverride  ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FWalkableSlopeOverride UNavLinkRenderingComponent::GetWalkableSlopeOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetWalkableSlopeOverride");

	UNavLinkRenderingComponent_GetWalkableSlopeOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
// ()
// Parameters:
// struct FVector*                Point                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavLinkRenderingComponent::GetPhysicsLinearVelocityAtPoint(struct FVector* Point, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint");

	UNavLinkRenderingComponent_GetPhysicsLinearVelocityAtPoint_Params params;
	params.Point = Point;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavLinkRenderingComponent::GetPhysicsLinearVelocity(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity");

	UNavLinkRenderingComponent_GetPhysicsLinearVelocity_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavLinkRenderingComponent::GetPhysicsAngularVelocityInRadians(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians");

	UNavLinkRenderingComponent_GetPhysicsAngularVelocityInRadians_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavLinkRenderingComponent::GetPhysicsAngularVelocityInDegrees(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees");

	UNavLinkRenderingComponent_GetPhysicsAngularVelocityInDegrees_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavLinkRenderingComponent::GetPhysicsAngularVelocity(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity");

	UNavLinkRenderingComponent_GetPhysicsAngularVelocity_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetOverlappingComponents
// ()
// Parameters:
// TArray<class UPrimitiveComponent*> OutOverlappingComponents       (Parm, OutParm, ZeroConstructor)

void UNavLinkRenderingComponent::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OutOverlappingComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetOverlappingComponents");

	UNavLinkRenderingComponent_GetOverlappingComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOverlappingComponents != nullptr)
		*OutOverlappingComponents = params.OutOverlappingComponents;
}


// Function Engine.PrimitiveComponent.GetOverlappingActors
// ()
// Parameters:
// TArray<class AActor*>          OverlappingActors              (Parm, OutParm, ZeroConstructor)
// class UClass**                 ClassFilter                    (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::GetOverlappingActors(class UClass** ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetOverlappingActors");

	UNavLinkRenderingComponent_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}


// Function Engine.PrimitiveComponent.GetNumMaterials
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UNavLinkRenderingComponent::GetNumMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetNumMaterials");

	UNavLinkRenderingComponent_GetNumMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex
// ()
// Parameters:
// int*                           FaceIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SectionIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UNavLinkRenderingComponent::GetMaterialFromCollisionFaceIndex(int* FaceIndex, int* SectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex");

	UNavLinkRenderingComponent_GetMaterialFromCollisionFaceIndex_Params params;
	params.FaceIndex = FaceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SectionIndex != nullptr)
		*SectionIndex = params.SectionIndex;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMaterial
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UNavLinkRenderingComponent::GetMaterial(int* ElementIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMaterial");

	UNavLinkRenderingComponent_GetMaterial_Params params;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMassScale
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNavLinkRenderingComponent::GetMassScale(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMassScale");

	UNavLinkRenderingComponent_GetMassScale_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMass
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNavLinkRenderingComponent::GetMass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMass");

	UNavLinkRenderingComponent_GetMass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetLinearDamping
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNavLinkRenderingComponent::GetLinearDamping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetLinearDamping");

	UNavLinkRenderingComponent_GetLinearDamping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetInertiaTensor
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavLinkRenderingComponent::GetInertiaTensor(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetInertiaTensor");

	UNavLinkRenderingComponent_GetInertiaTensor_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetGenerateOverlapEvents
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavLinkRenderingComponent::GetGenerateOverlapEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetGenerateOverlapEvents");

	UNavLinkRenderingComponent_GetGenerateOverlapEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionResponseToChannel
// ()
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionResponse> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECollisionResponse> UNavLinkRenderingComponent::GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel>* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionResponseToChannel");

	UNavLinkRenderingComponent_GetCollisionResponseToChannel_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionProfileName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UNavLinkRenderingComponent::GetCollisionProfileName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionProfileName");

	UNavLinkRenderingComponent_GetCollisionProfileName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionObjectType
// ()
// Parameters:
// TEnumAsByte<ECollisionChannel> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECollisionChannel> UNavLinkRenderingComponent::GetCollisionObjectType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionObjectType");

	UNavLinkRenderingComponent_GetCollisionObjectType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionEnabled
// ()
// Parameters:
// TEnumAsByte<ECollisionEnabled> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECollisionEnabled> UNavLinkRenderingComponent::GetCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionEnabled");

	UNavLinkRenderingComponent_GetCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetClosestPointOnCollision
// ()
// Parameters:
// struct FVector*                Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 OutPointOnBody                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNavLinkRenderingComponent::GetClosestPointOnCollision(struct FVector* Point, struct FName* BoneName, struct FVector* OutPointOnBody)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetClosestPointOnCollision");

	UNavLinkRenderingComponent_GetClosestPointOnCollision_Params params;
	params.Point = Point;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPointOnBody != nullptr)
		*OutPointOnBody = params.OutPointOnBody;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCenterOfMass
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavLinkRenderingComponent::GetCenterOfMass(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCenterOfMass");

	UNavLinkRenderingComponent_GetCenterOfMass_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetAngularDamping
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNavLinkRenderingComponent::GetAngularDamping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetAngularDamping");

	UNavLinkRenderingComponent_GetAngularDamping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     SourceMaterial                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  OptionalName                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UNavLinkRenderingComponent::CreateDynamicMaterialInstance(int* ElementIndex, class UMaterialInterface** SourceMaterial, struct FName* OptionalName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance");

	UNavLinkRenderingComponent_CreateDynamicMaterialInstance_Params params;
	params.ElementIndex = ElementIndex;
	params.SourceMaterial = SourceMaterial;
	params.OptionalName = OptionalName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UNavLinkRenderingComponent::CreateAndSetMaterialInstanceDynamicFromMaterial(int* ElementIndex, class UMaterialInterface** Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial");

	UNavLinkRenderingComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UNavLinkRenderingComponent::CreateAndSetMaterialInstanceDynamic(int* ElementIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic");

	UNavLinkRenderingComponent_CreateAndSetMaterialInstanceDynamic_Params params;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents
// ()
// Parameters:
// TArray<class UPrimitiveComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPrimitiveComponent*> UNavLinkRenderingComponent::CopyArrayOfMoveIgnoreComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents");

	UNavLinkRenderingComponent_CopyArrayOfMoveIgnoreComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
// ()
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UNavLinkRenderingComponent::CopyArrayOfMoveIgnoreActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors");

	UNavLinkRenderingComponent_CopyArrayOfMoveIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents
// ()

void UNavLinkRenderingComponent::ClearMoveIgnoreComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents");

	UNavLinkRenderingComponent_ClearMoveIgnoreComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.ClearMoveIgnoreActors
// ()

void UNavLinkRenderingComponent::ClearMoveIgnoreActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.ClearMoveIgnoreActors");

	UNavLinkRenderingComponent_ClearMoveIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.CanCharacterStepUp
// ()
// Parameters:
// class APawn**                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavLinkRenderingComponent::CanCharacterStepUp(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CanCharacterStepUp");

	UNavLinkRenderingComponent_CanCharacterStepUp_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.AddTorqueInRadians
// ()
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::AddTorqueInRadians(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddTorqueInRadians");

	UNavLinkRenderingComponent_AddTorqueInRadians_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddTorqueInDegrees
// ()
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::AddTorqueInDegrees(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddTorqueInDegrees");

	UNavLinkRenderingComponent_AddTorqueInDegrees_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddTorque
// ()
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::AddTorque(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddTorque");

	UNavLinkRenderingComponent_AddTorque_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddRadialImpulse
// ()
// Parameters:
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff>* Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::AddRadialImpulse(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddRadialImpulse");

	UNavLinkRenderingComponent_AddRadialImpulse_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddRadialForce
// ()
// Parameters:
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff>* Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::AddRadialForce(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddRadialForce");

	UNavLinkRenderingComponent_AddRadialForce_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddImpulseAtLocation
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::AddImpulseAtLocation(struct FVector* Impulse, struct FVector* Location, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddImpulseAtLocation");

	UNavLinkRenderingComponent_AddImpulseAtLocation_Params params;
	params.Impulse = Impulse;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddImpulse
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::AddImpulse(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddImpulse");

	UNavLinkRenderingComponent_AddImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForceAtLocationLocal
// ()
// Parameters:
// struct FVector*                Force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::AddForceAtLocationLocal(struct FVector* Force, struct FVector* Location, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddForceAtLocationLocal");

	UNavLinkRenderingComponent_AddForceAtLocationLocal_Params params;
	params.Force = Force;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForceAtLocation
// ()
// Parameters:
// struct FVector*                Force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::AddForceAtLocation(struct FVector* Force, struct FVector* Location, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddForceAtLocation");

	UNavLinkRenderingComponent_AddForceAtLocation_Params params;
	params.Force = Force;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForce
// ()
// Parameters:
// struct FVector*                Force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::AddForce(struct FVector* Force, struct FName* BoneName, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddForce");

	UNavLinkRenderingComponent_AddForce_Params params;
	params.Force = Force;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulseInRadians
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::AddAngularImpulseInRadians(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddAngularImpulseInRadians");

	UNavLinkRenderingComponent_AddAngularImpulseInRadians_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::AddAngularImpulseInDegrees(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees");

	UNavLinkRenderingComponent_AddAngularImpulseInDegrees_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulse
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void UNavLinkRenderingComponent::AddAngularImpulse(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddAngularImpulse");

	UNavLinkRenderingComponent_AddAngularImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.WakeRigidBody
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::WakeRigidBody(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.WakeRigidBody");

	UNavMeshRenderingComponent_WakeRigidBody_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.WakeAllRigidBodies
// ()

void UNavMeshRenderingComponent::WakeAllRigidBodies()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.WakeAllRigidBodies");

	UNavMeshRenderingComponent_WakeAllRigidBodies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetWalkableSlopeOverride
// ()
// Parameters:
// struct FWalkableSlopeOverride* NewOverride                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UNavMeshRenderingComponent::SetWalkableSlopeOverride(struct FWalkableSlopeOverride* NewOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetWalkableSlopeOverride");

	UNavMeshRenderingComponent_SetWalkableSlopeOverride_Params params;
	params.NewOverride = NewOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetUseCCD
// ()
// Parameters:
// bool*                          InUseCCD                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetUseCCD(bool* InUseCCD, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetUseCCD");

	UNavMeshRenderingComponent_SetUseCCD_Params params;
	params.InUseCCD = InUseCCD;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetTranslucentSortPriority
// ()
// Parameters:
// int*                           NewTranslucentSortPriority     (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetTranslucentSortPriority(int* NewTranslucentSortPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetTranslucentSortPriority");

	UNavMeshRenderingComponent_SetTranslucentSortPriority_Params params;
	params.NewTranslucentSortPriority = NewTranslucentSortPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights
// ()
// Parameters:
// bool*                          bNewSingleSampleShadowFromStationaryLights (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetSingleSampleShadowFromStationaryLights(bool* bNewSingleSampleShadowFromStationaryLights)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights");

	UNavMeshRenderingComponent_SetSingleSampleShadowFromStationaryLights_Params params;
	params.bNewSingleSampleShadowFromStationaryLights = bNewSingleSampleShadowFromStationaryLights;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetSimulatePhysics
// ()
// Parameters:
// bool*                          bSimulate                      (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetSimulatePhysics(bool* bSimulate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetSimulatePhysics");

	UNavMeshRenderingComponent_SetSimulatePhysics_Params params;
	params.bSimulate = bSimulate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderInMainPass
// ()
// Parameters:
// bool*                          bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetRenderInMainPass(bool* bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetRenderInMainPass");

	UNavMeshRenderingComponent_SetRenderInMainPass_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderCustomDepth
// ()
// Parameters:
// bool*                          bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetRenderCustomDepth(bool* bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetRenderCustomDepth");

	UNavMeshRenderingComponent_SetRenderCustomDepth_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetReceivesDecals
// ()
// Parameters:
// bool*                          bNewReceivesDecals             (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetReceivesDecals(bool* bNewReceivesDecals)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetReceivesDecals");

	UNavMeshRenderingComponent_SetReceivesDecals_Params params;
	params.bNewReceivesDecals = bNewReceivesDecals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysMaterialOverride
// ()
// Parameters:
// class UPhysicalMaterial**      NewPhysMaterial                (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetPhysMaterialOverride(class UPhysicalMaterial** NewPhysMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysMaterialOverride");

	UNavMeshRenderingComponent_SetPhysMaterialOverride_Params params;
	params.NewPhysMaterial = NewPhysMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians
// ()
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetPhysicsMaxAngularVelocityInRadians(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians");

	UNavMeshRenderingComponent_SetPhysicsMaxAngularVelocityInRadians_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees
// ()
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetPhysicsMaxAngularVelocityInDegrees(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees");

	UNavMeshRenderingComponent_SetPhysicsMaxAngularVelocityInDegrees_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
// ()
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetPhysicsMaxAngularVelocity(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity");

	UNavMeshRenderingComponent_SetPhysicsMaxAngularVelocity_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity
// ()
// Parameters:
// struct FVector*                NewVel                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetPhysicsLinearVelocity(struct FVector* NewVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity");

	UNavMeshRenderingComponent_SetPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians
// ()
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetPhysicsAngularVelocityInRadians(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians");

	UNavMeshRenderingComponent_SetPhysicsAngularVelocityInRadians_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees
// ()
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetPhysicsAngularVelocityInDegrees(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees");

	UNavMeshRenderingComponent_SetPhysicsAngularVelocityInDegrees_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity
// ()
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetPhysicsAngularVelocity(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity");

	UNavMeshRenderingComponent_SetPhysicsAngularVelocity_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetOwnerNoSee
// ()
// Parameters:
// bool*                          bNewOwnerNoSee                 (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetOwnerNoSee(bool* bNewOwnerNoSee)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetOwnerNoSee");

	UNavMeshRenderingComponent_SetOwnerNoSee_Params params;
	params.bNewOwnerNoSee = bNewOwnerNoSee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetOnlyOwnerSee
// ()
// Parameters:
// bool*                          bNewOnlyOwnerSee               (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetOnlyOwnerSee(bool* bNewOnlyOwnerSee)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetOnlyOwnerSee");

	UNavMeshRenderingComponent_SetOnlyOwnerSee_Params params;
	params.bNewOnlyOwnerSee = bNewOnlyOwnerSee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
// ()
// Parameters:
// bool*                          bNewNotifyRigidBodyCollision   (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetNotifyRigidBodyCollision(bool* bNewNotifyRigidBodyCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision");

	UNavMeshRenderingComponent_SetNotifyRigidBodyCollision_Params params;
	params.bNewNotifyRigidBodyCollision = bNewNotifyRigidBodyCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMaterialByName
// ()
// Parameters:
// struct FName*                  MaterialSlotName               (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetMaterialByName(struct FName* MaterialSlotName, class UMaterialInterface** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMaterialByName");

	UNavMeshRenderingComponent_SetMaterialByName_Params params;
	params.MaterialSlotName = MaterialSlotName;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMaterial
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetMaterial(int* ElementIndex, class UMaterialInterface** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMaterial");

	UNavMeshRenderingComponent_SetMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMassScale
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InMassScale                    (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetMassScale(struct FName* BoneName, float* InMassScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMassScale");

	UNavMeshRenderingComponent_SetMassScale_Params params;
	params.BoneName = BoneName;
	params.InMassScale = InMassScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMassOverrideInKg
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MassInKg                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOverrideMass                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetMassOverrideInKg(struct FName* BoneName, float* MassInKg, bool* bOverrideMass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMassOverrideInKg");

	UNavMeshRenderingComponent_SetMassOverrideInKg_Params params;
	params.BoneName = BoneName;
	params.MassInKg = MassInKg;
	params.bOverrideMass = bOverrideMass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetLinearDamping
// ()
// Parameters:
// float*                         InDamping                      (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetLinearDamping(float* InDamping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetLinearDamping");

	UNavMeshRenderingComponent_SetLinearDamping_Params params;
	params.InDamping = InDamping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetLightAttachmentsAsGroup
// ()
// Parameters:
// bool*                          bInLightAttachmentsAsGroup     (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetLightAttachmentsAsGroup(bool* bInLightAttachmentsAsGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetLightAttachmentsAsGroup");

	UNavMeshRenderingComponent_SetLightAttachmentsAsGroup_Params params;
	params.bInLightAttachmentsAsGroup = bInLightAttachmentsAsGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetGenerateOverlapEvents
// ()
// Parameters:
// bool*                          bInGenerateOverlapEvents       (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetGenerateOverlapEvents(bool* bInGenerateOverlapEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetGenerateOverlapEvents");

	UNavMeshRenderingComponent_SetGenerateOverlapEvents_Params params;
	params.bInGenerateOverlapEvents = bInGenerateOverlapEvents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetExcludeFromLightAttachmentGroup
// ()
// Parameters:
// bool*                          bInExcludeFromLightAttachmentGroup (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetExcludeFromLightAttachmentGroup(bool* bInExcludeFromLightAttachmentGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetExcludeFromLightAttachmentGroup");

	UNavMeshRenderingComponent_SetExcludeFromLightAttachmentGroup_Params params;
	params.bInExcludeFromLightAttachmentGroup = bInExcludeFromLightAttachmentGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetEnableGravity
// ()
// Parameters:
// bool*                          bGravityEnabled                (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetEnableGravity(bool* bGravityEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetEnableGravity");

	UNavMeshRenderingComponent_SetEnableGravity_Params params;
	params.bGravityEnabled = bGravityEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector4
// ()
// Parameters:
// int*                           DataIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector4*               Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetCustomPrimitiveDataVector4(int* DataIndex, struct FVector4* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector4");

	UNavMeshRenderingComponent_SetCustomPrimitiveDataVector4_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector3
// ()
// Parameters:
// int*                           DataIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetCustomPrimitiveDataVector3(int* DataIndex, struct FVector* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector3");

	UNavMeshRenderingComponent_SetCustomPrimitiveDataVector3_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector2
// ()
// Parameters:
// int*                           DataIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetCustomPrimitiveDataVector2(int* DataIndex, struct FVector2D* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector2");

	UNavMeshRenderingComponent_SetCustomPrimitiveDataVector2_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataFloat
// ()
// Parameters:
// int*                           DataIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetCustomPrimitiveDataFloat(int* DataIndex, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataFloat");

	UNavMeshRenderingComponent_SetCustomPrimitiveDataFloat_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask
// ()
// Parameters:
// ERendererStencilMask*          WriteMaskBit                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetCustomDepthStencilWriteMask(ERendererStencilMask* WriteMaskBit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask");

	UNavMeshRenderingComponent_SetCustomDepthStencilWriteMask_Params params;
	params.WriteMaskBit = WriteMaskBit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomDepthStencilValue
// ()
// Parameters:
// int*                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetCustomDepthStencilValue(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomDepthStencilValue");

	UNavMeshRenderingComponent_SetCustomDepthStencilValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCullDistance
// ()
// Parameters:
// float*                         NewCullDistance                (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetCullDistance(float* NewCullDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCullDistance");

	UNavMeshRenderingComponent_SetCullDistance_Params params;
	params.NewCullDistance = NewCullDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetConstraintMode
// ()
// Parameters:
// TEnumAsByte<EDOFMode>*         ConstraintMode                 (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetConstraintMode(TEnumAsByte<EDOFMode>* ConstraintMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetConstraintMode");

	UNavMeshRenderingComponent_SetConstraintMode_Params params;
	params.ConstraintMode = ConstraintMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionResponseToChannel
// ()
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionResponse>* NewResponse                    (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel>* Channel, TEnumAsByte<ECollisionResponse>* NewResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionResponseToChannel");

	UNavMeshRenderingComponent_SetCollisionResponseToChannel_Params params;
	params.Channel = Channel;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
// ()
// Parameters:
// TEnumAsByte<ECollisionResponse>* NewResponse                    (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse>* NewResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels");

	UNavMeshRenderingComponent_SetCollisionResponseToAllChannels_Params params;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionProfileName
// ()
// Parameters:
// struct FName*                  InCollisionProfileName         (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetCollisionProfileName(struct FName* InCollisionProfileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionProfileName");

	UNavMeshRenderingComponent_SetCollisionProfileName_Params params;
	params.InCollisionProfileName = InCollisionProfileName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionObjectType
// ()
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetCollisionObjectType(TEnumAsByte<ECollisionChannel>* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionObjectType");

	UNavMeshRenderingComponent_SetCollisionObjectType_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionEnabled
// ()
// Parameters:
// TEnumAsByte<ECollisionEnabled>* NewType                        (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetCollisionEnabled(TEnumAsByte<ECollisionEnabled>* NewType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionEnabled");

	UNavMeshRenderingComponent_SetCollisionEnabled_Params params;
	params.NewType = NewType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCenterOfMass
// ()
// Parameters:
// struct FVector*                CenterOfMassOffset             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetCenterOfMass(struct FVector* CenterOfMassOffset, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCenterOfMass");

	UNavMeshRenderingComponent_SetCenterOfMass_Params params;
	params.CenterOfMassOffset = CenterOfMassOffset;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCastShadow
// ()
// Parameters:
// bool*                          NewCastShadow                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetCastShadow(bool* NewCastShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCastShadow");

	UNavMeshRenderingComponent_SetCastShadow_Params params;
	params.NewCastShadow = NewCastShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCastInsetShadow
// ()
// Parameters:
// bool*                          bInCastInsetShadow             (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetCastInsetShadow(bool* bInCastInsetShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCastInsetShadow");

	UNavMeshRenderingComponent_SetCastInsetShadow_Params params;
	params.bInCastInsetShadow = bInCastInsetShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetBoundsScale
// ()
// Parameters:
// float*                         NewBoundsScale                 (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetBoundsScale(float* NewBoundsScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetBoundsScale");

	UNavMeshRenderingComponent_SetBoundsScale_Params params;
	params.NewBoundsScale = NewBoundsScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAngularDamping
// ()
// Parameters:
// float*                         InDamping                      (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetAngularDamping(float* InDamping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAngularDamping");

	UNavMeshRenderingComponent_SetAngularDamping_Params params;
	params.InDamping = InDamping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllUseCCD
// ()
// Parameters:
// bool*                          InUseCCD                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetAllUseCCD(bool* InUseCCD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllUseCCD");

	UNavMeshRenderingComponent_SetAllUseCCD_Params params;
	params.InUseCCD = InUseCCD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
// ()
// Parameters:
// struct FVector*                NewVel                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetAllPhysicsLinearVelocity(struct FVector* NewVel, bool* bAddToCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity");

	UNavMeshRenderingComponent_SetAllPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians
// ()
// Parameters:
// struct FVector*                NewAngVel                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetAllPhysicsAngularVelocityInRadians(struct FVector* NewAngVel, bool* bAddToCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians");

	UNavMeshRenderingComponent_SetAllPhysicsAngularVelocityInRadians_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees
// ()
// Parameters:
// struct FVector*                NewAngVel                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetAllPhysicsAngularVelocityInDegrees(struct FVector* NewAngVel, bool* bAddToCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees");

	UNavMeshRenderingComponent_SetAllPhysicsAngularVelocityInDegrees_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllMassScale
// ()
// Parameters:
// float*                         InMassScale                    (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::SetAllMassScale(float* InMassScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllMassScale");

	UNavMeshRenderingComponent_SetAllMassScale_Params params;
	params.InMassScale = InMassScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.ScaleByMomentOfInertia
// ()
// Parameters:
// struct FVector*                InputVector                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavMeshRenderingComponent::ScaleByMomentOfInertia(struct FVector* InputVector, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.ScaleByMomentOfInertia");

	UNavMeshRenderingComponent_ScaleByMomentOfInertia_Params params;
	params.InputVector = InputVector;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.PutRigidBodyToSleep
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::PutRigidBodyToSleep(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.PutRigidBodyToSleep");

	UNavMeshRenderingComponent_PutRigidBodyToSleep_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.K2_SphereTraceComponent
// ()
// Parameters:
// struct FVector*                TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavMeshRenderingComponent::K2_SphereTraceComponent(struct FVector* TraceStart, struct FVector* TraceEnd, float* SphereRadius, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_SphereTraceComponent");

	UNavMeshRenderingComponent_K2_SphereTraceComponent_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.SphereRadius = SphereRadius;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_SphereOverlapComponent
// ()
// Parameters:
// struct FVector*                InSphereCentre                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InSphereRadius                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavMeshRenderingComponent::K2_SphereOverlapComponent(struct FVector* InSphereCentre, float* InSphereRadius, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_SphereOverlapComponent");

	UNavMeshRenderingComponent_K2_SphereOverlapComponent_Params params;
	params.InSphereCentre = InSphereCentre;
	params.InSphereRadius = InSphereRadius;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_LineTraceComponent
// ()
// Parameters:
// struct FVector*                TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavMeshRenderingComponent::K2_LineTraceComponent(struct FVector* TraceStart, struct FVector* TraceEnd, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_LineTraceComponent");

	UNavMeshRenderingComponent_K2_LineTraceComponent_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavMeshRenderingComponent::K2_IsQueryCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled");

	UNavMeshRenderingComponent_K2_IsQueryCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavMeshRenderingComponent::K2_IsPhysicsCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled");

	UNavMeshRenderingComponent_K2_IsPhysicsCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsCollisionEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavMeshRenderingComponent::K2_IsCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_IsCollisionEnabled");

	UNavMeshRenderingComponent_K2_IsCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_BoxOverlapComponent
// ()
// Parameters:
// struct FVector*                InBoxCentre                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBox*                   InBox                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavMeshRenderingComponent::K2_BoxOverlapComponent(struct FVector* InBoxCentre, struct FBox* InBox, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_BoxOverlapComponent");

	UNavMeshRenderingComponent_K2_BoxOverlapComponent_Params params;
	params.InBoxCentre = InBoxCentre;
	params.InBox = InBox;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsOverlappingComponent
// ()
// Parameters:
// class UPrimitiveComponent**    OtherComp                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavMeshRenderingComponent::IsOverlappingComponent(class UPrimitiveComponent** OtherComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsOverlappingComponent");

	UNavMeshRenderingComponent_IsOverlappingComponent_Params params;
	params.OtherComp = OtherComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsOverlappingActor
// ()
// Parameters:
// class AActor**                 Other                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavMeshRenderingComponent::IsOverlappingActor(class AActor** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsOverlappingActor");

	UNavMeshRenderingComponent_IsOverlappingActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsGravityEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavMeshRenderingComponent::IsGravityEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsGravityEnabled");

	UNavMeshRenderingComponent_IsGravityEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavMeshRenderingComponent::IsAnyRigidBodyAwake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake");

	UNavMeshRenderingComponent_IsAnyRigidBodyAwake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving
// ()
// Parameters:
// class UPrimitiveComponent**    Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bShouldIgnore                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::IgnoreComponentWhenMoving(class UPrimitiveComponent** Component, bool* bShouldIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving");

	UNavMeshRenderingComponent_IgnoreComponentWhenMoving_Params params;
	params.Component = Component;
	params.bShouldIgnore = bShouldIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.IgnoreActorWhenMoving
// ()
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShouldIgnore                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::IgnoreActorWhenMoving(class AActor** Actor, bool* bShouldIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IgnoreActorWhenMoving");

	UNavMeshRenderingComponent_IgnoreActorWhenMoving_Params params;
	params.Actor = Actor;
	params.bShouldIgnore = bShouldIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.GetWalkableSlopeOverride
// ()
// Parameters:
// struct FWalkableSlopeOverride  ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FWalkableSlopeOverride UNavMeshRenderingComponent::GetWalkableSlopeOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetWalkableSlopeOverride");

	UNavMeshRenderingComponent_GetWalkableSlopeOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
// ()
// Parameters:
// struct FVector*                Point                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavMeshRenderingComponent::GetPhysicsLinearVelocityAtPoint(struct FVector* Point, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint");

	UNavMeshRenderingComponent_GetPhysicsLinearVelocityAtPoint_Params params;
	params.Point = Point;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavMeshRenderingComponent::GetPhysicsLinearVelocity(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity");

	UNavMeshRenderingComponent_GetPhysicsLinearVelocity_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavMeshRenderingComponent::GetPhysicsAngularVelocityInRadians(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians");

	UNavMeshRenderingComponent_GetPhysicsAngularVelocityInRadians_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavMeshRenderingComponent::GetPhysicsAngularVelocityInDegrees(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees");

	UNavMeshRenderingComponent_GetPhysicsAngularVelocityInDegrees_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavMeshRenderingComponent::GetPhysicsAngularVelocity(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity");

	UNavMeshRenderingComponent_GetPhysicsAngularVelocity_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetOverlappingComponents
// ()
// Parameters:
// TArray<class UPrimitiveComponent*> OutOverlappingComponents       (Parm, OutParm, ZeroConstructor)

void UNavMeshRenderingComponent::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OutOverlappingComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetOverlappingComponents");

	UNavMeshRenderingComponent_GetOverlappingComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOverlappingComponents != nullptr)
		*OutOverlappingComponents = params.OutOverlappingComponents;
}


// Function Engine.PrimitiveComponent.GetOverlappingActors
// ()
// Parameters:
// TArray<class AActor*>          OverlappingActors              (Parm, OutParm, ZeroConstructor)
// class UClass**                 ClassFilter                    (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::GetOverlappingActors(class UClass** ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetOverlappingActors");

	UNavMeshRenderingComponent_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}


// Function Engine.PrimitiveComponent.GetNumMaterials
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UNavMeshRenderingComponent::GetNumMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetNumMaterials");

	UNavMeshRenderingComponent_GetNumMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex
// ()
// Parameters:
// int*                           FaceIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SectionIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UNavMeshRenderingComponent::GetMaterialFromCollisionFaceIndex(int* FaceIndex, int* SectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex");

	UNavMeshRenderingComponent_GetMaterialFromCollisionFaceIndex_Params params;
	params.FaceIndex = FaceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SectionIndex != nullptr)
		*SectionIndex = params.SectionIndex;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMaterial
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UNavMeshRenderingComponent::GetMaterial(int* ElementIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMaterial");

	UNavMeshRenderingComponent_GetMaterial_Params params;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMassScale
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNavMeshRenderingComponent::GetMassScale(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMassScale");

	UNavMeshRenderingComponent_GetMassScale_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMass
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNavMeshRenderingComponent::GetMass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMass");

	UNavMeshRenderingComponent_GetMass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetLinearDamping
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNavMeshRenderingComponent::GetLinearDamping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetLinearDamping");

	UNavMeshRenderingComponent_GetLinearDamping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetInertiaTensor
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavMeshRenderingComponent::GetInertiaTensor(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetInertiaTensor");

	UNavMeshRenderingComponent_GetInertiaTensor_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetGenerateOverlapEvents
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavMeshRenderingComponent::GetGenerateOverlapEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetGenerateOverlapEvents");

	UNavMeshRenderingComponent_GetGenerateOverlapEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionResponseToChannel
// ()
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionResponse> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECollisionResponse> UNavMeshRenderingComponent::GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel>* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionResponseToChannel");

	UNavMeshRenderingComponent_GetCollisionResponseToChannel_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionProfileName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UNavMeshRenderingComponent::GetCollisionProfileName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionProfileName");

	UNavMeshRenderingComponent_GetCollisionProfileName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionObjectType
// ()
// Parameters:
// TEnumAsByte<ECollisionChannel> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECollisionChannel> UNavMeshRenderingComponent::GetCollisionObjectType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionObjectType");

	UNavMeshRenderingComponent_GetCollisionObjectType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionEnabled
// ()
// Parameters:
// TEnumAsByte<ECollisionEnabled> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECollisionEnabled> UNavMeshRenderingComponent::GetCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionEnabled");

	UNavMeshRenderingComponent_GetCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetClosestPointOnCollision
// ()
// Parameters:
// struct FVector*                Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 OutPointOnBody                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNavMeshRenderingComponent::GetClosestPointOnCollision(struct FVector* Point, struct FName* BoneName, struct FVector* OutPointOnBody)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetClosestPointOnCollision");

	UNavMeshRenderingComponent_GetClosestPointOnCollision_Params params;
	params.Point = Point;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPointOnBody != nullptr)
		*OutPointOnBody = params.OutPointOnBody;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCenterOfMass
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavMeshRenderingComponent::GetCenterOfMass(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCenterOfMass");

	UNavMeshRenderingComponent_GetCenterOfMass_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetAngularDamping
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNavMeshRenderingComponent::GetAngularDamping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetAngularDamping");

	UNavMeshRenderingComponent_GetAngularDamping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     SourceMaterial                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  OptionalName                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UNavMeshRenderingComponent::CreateDynamicMaterialInstance(int* ElementIndex, class UMaterialInterface** SourceMaterial, struct FName* OptionalName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance");

	UNavMeshRenderingComponent_CreateDynamicMaterialInstance_Params params;
	params.ElementIndex = ElementIndex;
	params.SourceMaterial = SourceMaterial;
	params.OptionalName = OptionalName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UNavMeshRenderingComponent::CreateAndSetMaterialInstanceDynamicFromMaterial(int* ElementIndex, class UMaterialInterface** Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial");

	UNavMeshRenderingComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UNavMeshRenderingComponent::CreateAndSetMaterialInstanceDynamic(int* ElementIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic");

	UNavMeshRenderingComponent_CreateAndSetMaterialInstanceDynamic_Params params;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents
// ()
// Parameters:
// TArray<class UPrimitiveComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPrimitiveComponent*> UNavMeshRenderingComponent::CopyArrayOfMoveIgnoreComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents");

	UNavMeshRenderingComponent_CopyArrayOfMoveIgnoreComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
// ()
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UNavMeshRenderingComponent::CopyArrayOfMoveIgnoreActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors");

	UNavMeshRenderingComponent_CopyArrayOfMoveIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents
// ()

void UNavMeshRenderingComponent::ClearMoveIgnoreComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents");

	UNavMeshRenderingComponent_ClearMoveIgnoreComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.ClearMoveIgnoreActors
// ()

void UNavMeshRenderingComponent::ClearMoveIgnoreActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.ClearMoveIgnoreActors");

	UNavMeshRenderingComponent_ClearMoveIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.CanCharacterStepUp
// ()
// Parameters:
// class APawn**                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavMeshRenderingComponent::CanCharacterStepUp(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CanCharacterStepUp");

	UNavMeshRenderingComponent_CanCharacterStepUp_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.AddTorqueInRadians
// ()
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::AddTorqueInRadians(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddTorqueInRadians");

	UNavMeshRenderingComponent_AddTorqueInRadians_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddTorqueInDegrees
// ()
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::AddTorqueInDegrees(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddTorqueInDegrees");

	UNavMeshRenderingComponent_AddTorqueInDegrees_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddTorque
// ()
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::AddTorque(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddTorque");

	UNavMeshRenderingComponent_AddTorque_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddRadialImpulse
// ()
// Parameters:
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff>* Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::AddRadialImpulse(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddRadialImpulse");

	UNavMeshRenderingComponent_AddRadialImpulse_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddRadialForce
// ()
// Parameters:
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff>* Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::AddRadialForce(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddRadialForce");

	UNavMeshRenderingComponent_AddRadialForce_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddImpulseAtLocation
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::AddImpulseAtLocation(struct FVector* Impulse, struct FVector* Location, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddImpulseAtLocation");

	UNavMeshRenderingComponent_AddImpulseAtLocation_Params params;
	params.Impulse = Impulse;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddImpulse
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::AddImpulse(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddImpulse");

	UNavMeshRenderingComponent_AddImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForceAtLocationLocal
// ()
// Parameters:
// struct FVector*                Force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::AddForceAtLocationLocal(struct FVector* Force, struct FVector* Location, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddForceAtLocationLocal");

	UNavMeshRenderingComponent_AddForceAtLocationLocal_Params params;
	params.Force = Force;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForceAtLocation
// ()
// Parameters:
// struct FVector*                Force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::AddForceAtLocation(struct FVector* Force, struct FVector* Location, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddForceAtLocation");

	UNavMeshRenderingComponent_AddForceAtLocation_Params params;
	params.Force = Force;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForce
// ()
// Parameters:
// struct FVector*                Force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::AddForce(struct FVector* Force, struct FName* BoneName, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddForce");

	UNavMeshRenderingComponent_AddForce_Params params;
	params.Force = Force;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulseInRadians
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::AddAngularImpulseInRadians(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddAngularImpulseInRadians");

	UNavMeshRenderingComponent_AddAngularImpulseInRadians_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::AddAngularImpulseInDegrees(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees");

	UNavMeshRenderingComponent_AddAngularImpulseInDegrees_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulse
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void UNavMeshRenderingComponent::AddAngularImpulse(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddAngularImpulse");

	UNavMeshRenderingComponent_AddAngularImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavModifierComponent.SetAreaClass
// ()
// Parameters:
// class UClass**                 NewAreaClass                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavModifierComponent::SetAreaClass(class UClass** NewAreaClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierComponent.SetAreaClass");

	UNavModifierComponent_SetAreaClass_Params params;
	params.NewAreaClass = NewAreaClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NavigationSystem.NavModifierVolume.SetAreaClass
// ()
// Parameters:
// class UClass**                 NewAreaClass                   (Parm, ZeroConstructor, IsPlainOldData)

void ANavModifierVolume::SetAreaClass(class UClass** NewAreaClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierVolume.SetAreaClass");

	ANavModifierVolume_SetAreaClass_Params params;
	params.NewAreaClass = NewAreaClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.WakeRigidBody
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::WakeRigidBody(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.WakeRigidBody");

	UNavTestRenderingComponent_WakeRigidBody_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.WakeAllRigidBodies
// ()

void UNavTestRenderingComponent::WakeAllRigidBodies()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.WakeAllRigidBodies");

	UNavTestRenderingComponent_WakeAllRigidBodies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetWalkableSlopeOverride
// ()
// Parameters:
// struct FWalkableSlopeOverride* NewOverride                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UNavTestRenderingComponent::SetWalkableSlopeOverride(struct FWalkableSlopeOverride* NewOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetWalkableSlopeOverride");

	UNavTestRenderingComponent_SetWalkableSlopeOverride_Params params;
	params.NewOverride = NewOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetUseCCD
// ()
// Parameters:
// bool*                          InUseCCD                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetUseCCD(bool* InUseCCD, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetUseCCD");

	UNavTestRenderingComponent_SetUseCCD_Params params;
	params.InUseCCD = InUseCCD;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetTranslucentSortPriority
// ()
// Parameters:
// int*                           NewTranslucentSortPriority     (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetTranslucentSortPriority(int* NewTranslucentSortPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetTranslucentSortPriority");

	UNavTestRenderingComponent_SetTranslucentSortPriority_Params params;
	params.NewTranslucentSortPriority = NewTranslucentSortPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights
// ()
// Parameters:
// bool*                          bNewSingleSampleShadowFromStationaryLights (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetSingleSampleShadowFromStationaryLights(bool* bNewSingleSampleShadowFromStationaryLights)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights");

	UNavTestRenderingComponent_SetSingleSampleShadowFromStationaryLights_Params params;
	params.bNewSingleSampleShadowFromStationaryLights = bNewSingleSampleShadowFromStationaryLights;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetSimulatePhysics
// ()
// Parameters:
// bool*                          bSimulate                      (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetSimulatePhysics(bool* bSimulate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetSimulatePhysics");

	UNavTestRenderingComponent_SetSimulatePhysics_Params params;
	params.bSimulate = bSimulate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderInMainPass
// ()
// Parameters:
// bool*                          bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetRenderInMainPass(bool* bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetRenderInMainPass");

	UNavTestRenderingComponent_SetRenderInMainPass_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderCustomDepth
// ()
// Parameters:
// bool*                          bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetRenderCustomDepth(bool* bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetRenderCustomDepth");

	UNavTestRenderingComponent_SetRenderCustomDepth_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetReceivesDecals
// ()
// Parameters:
// bool*                          bNewReceivesDecals             (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetReceivesDecals(bool* bNewReceivesDecals)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetReceivesDecals");

	UNavTestRenderingComponent_SetReceivesDecals_Params params;
	params.bNewReceivesDecals = bNewReceivesDecals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysMaterialOverride
// ()
// Parameters:
// class UPhysicalMaterial**      NewPhysMaterial                (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetPhysMaterialOverride(class UPhysicalMaterial** NewPhysMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysMaterialOverride");

	UNavTestRenderingComponent_SetPhysMaterialOverride_Params params;
	params.NewPhysMaterial = NewPhysMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians
// ()
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetPhysicsMaxAngularVelocityInRadians(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians");

	UNavTestRenderingComponent_SetPhysicsMaxAngularVelocityInRadians_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees
// ()
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetPhysicsMaxAngularVelocityInDegrees(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees");

	UNavTestRenderingComponent_SetPhysicsMaxAngularVelocityInDegrees_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
// ()
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetPhysicsMaxAngularVelocity(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity");

	UNavTestRenderingComponent_SetPhysicsMaxAngularVelocity_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity
// ()
// Parameters:
// struct FVector*                NewVel                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetPhysicsLinearVelocity(struct FVector* NewVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity");

	UNavTestRenderingComponent_SetPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians
// ()
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetPhysicsAngularVelocityInRadians(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians");

	UNavTestRenderingComponent_SetPhysicsAngularVelocityInRadians_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees
// ()
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetPhysicsAngularVelocityInDegrees(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees");

	UNavTestRenderingComponent_SetPhysicsAngularVelocityInDegrees_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity
// ()
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetPhysicsAngularVelocity(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity");

	UNavTestRenderingComponent_SetPhysicsAngularVelocity_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetOwnerNoSee
// ()
// Parameters:
// bool*                          bNewOwnerNoSee                 (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetOwnerNoSee(bool* bNewOwnerNoSee)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetOwnerNoSee");

	UNavTestRenderingComponent_SetOwnerNoSee_Params params;
	params.bNewOwnerNoSee = bNewOwnerNoSee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetOnlyOwnerSee
// ()
// Parameters:
// bool*                          bNewOnlyOwnerSee               (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetOnlyOwnerSee(bool* bNewOnlyOwnerSee)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetOnlyOwnerSee");

	UNavTestRenderingComponent_SetOnlyOwnerSee_Params params;
	params.bNewOnlyOwnerSee = bNewOnlyOwnerSee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
// ()
// Parameters:
// bool*                          bNewNotifyRigidBodyCollision   (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetNotifyRigidBodyCollision(bool* bNewNotifyRigidBodyCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision");

	UNavTestRenderingComponent_SetNotifyRigidBodyCollision_Params params;
	params.bNewNotifyRigidBodyCollision = bNewNotifyRigidBodyCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMaterialByName
// ()
// Parameters:
// struct FName*                  MaterialSlotName               (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetMaterialByName(struct FName* MaterialSlotName, class UMaterialInterface** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMaterialByName");

	UNavTestRenderingComponent_SetMaterialByName_Params params;
	params.MaterialSlotName = MaterialSlotName;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMaterial
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetMaterial(int* ElementIndex, class UMaterialInterface** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMaterial");

	UNavTestRenderingComponent_SetMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMassScale
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InMassScale                    (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetMassScale(struct FName* BoneName, float* InMassScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMassScale");

	UNavTestRenderingComponent_SetMassScale_Params params;
	params.BoneName = BoneName;
	params.InMassScale = InMassScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMassOverrideInKg
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MassInKg                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOverrideMass                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetMassOverrideInKg(struct FName* BoneName, float* MassInKg, bool* bOverrideMass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMassOverrideInKg");

	UNavTestRenderingComponent_SetMassOverrideInKg_Params params;
	params.BoneName = BoneName;
	params.MassInKg = MassInKg;
	params.bOverrideMass = bOverrideMass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetLinearDamping
// ()
// Parameters:
// float*                         InDamping                      (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetLinearDamping(float* InDamping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetLinearDamping");

	UNavTestRenderingComponent_SetLinearDamping_Params params;
	params.InDamping = InDamping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetLightAttachmentsAsGroup
// ()
// Parameters:
// bool*                          bInLightAttachmentsAsGroup     (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetLightAttachmentsAsGroup(bool* bInLightAttachmentsAsGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetLightAttachmentsAsGroup");

	UNavTestRenderingComponent_SetLightAttachmentsAsGroup_Params params;
	params.bInLightAttachmentsAsGroup = bInLightAttachmentsAsGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetGenerateOverlapEvents
// ()
// Parameters:
// bool*                          bInGenerateOverlapEvents       (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetGenerateOverlapEvents(bool* bInGenerateOverlapEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetGenerateOverlapEvents");

	UNavTestRenderingComponent_SetGenerateOverlapEvents_Params params;
	params.bInGenerateOverlapEvents = bInGenerateOverlapEvents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetExcludeFromLightAttachmentGroup
// ()
// Parameters:
// bool*                          bInExcludeFromLightAttachmentGroup (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetExcludeFromLightAttachmentGroup(bool* bInExcludeFromLightAttachmentGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetExcludeFromLightAttachmentGroup");

	UNavTestRenderingComponent_SetExcludeFromLightAttachmentGroup_Params params;
	params.bInExcludeFromLightAttachmentGroup = bInExcludeFromLightAttachmentGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetEnableGravity
// ()
// Parameters:
// bool*                          bGravityEnabled                (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetEnableGravity(bool* bGravityEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetEnableGravity");

	UNavTestRenderingComponent_SetEnableGravity_Params params;
	params.bGravityEnabled = bGravityEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector4
// ()
// Parameters:
// int*                           DataIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector4*               Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetCustomPrimitiveDataVector4(int* DataIndex, struct FVector4* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector4");

	UNavTestRenderingComponent_SetCustomPrimitiveDataVector4_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector3
// ()
// Parameters:
// int*                           DataIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetCustomPrimitiveDataVector3(int* DataIndex, struct FVector* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector3");

	UNavTestRenderingComponent_SetCustomPrimitiveDataVector3_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector2
// ()
// Parameters:
// int*                           DataIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetCustomPrimitiveDataVector2(int* DataIndex, struct FVector2D* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector2");

	UNavTestRenderingComponent_SetCustomPrimitiveDataVector2_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataFloat
// ()
// Parameters:
// int*                           DataIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetCustomPrimitiveDataFloat(int* DataIndex, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataFloat");

	UNavTestRenderingComponent_SetCustomPrimitiveDataFloat_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask
// ()
// Parameters:
// ERendererStencilMask*          WriteMaskBit                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetCustomDepthStencilWriteMask(ERendererStencilMask* WriteMaskBit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask");

	UNavTestRenderingComponent_SetCustomDepthStencilWriteMask_Params params;
	params.WriteMaskBit = WriteMaskBit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomDepthStencilValue
// ()
// Parameters:
// int*                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetCustomDepthStencilValue(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomDepthStencilValue");

	UNavTestRenderingComponent_SetCustomDepthStencilValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCullDistance
// ()
// Parameters:
// float*                         NewCullDistance                (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetCullDistance(float* NewCullDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCullDistance");

	UNavTestRenderingComponent_SetCullDistance_Params params;
	params.NewCullDistance = NewCullDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetConstraintMode
// ()
// Parameters:
// TEnumAsByte<EDOFMode>*         ConstraintMode                 (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetConstraintMode(TEnumAsByte<EDOFMode>* ConstraintMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetConstraintMode");

	UNavTestRenderingComponent_SetConstraintMode_Params params;
	params.ConstraintMode = ConstraintMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionResponseToChannel
// ()
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionResponse>* NewResponse                    (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel>* Channel, TEnumAsByte<ECollisionResponse>* NewResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionResponseToChannel");

	UNavTestRenderingComponent_SetCollisionResponseToChannel_Params params;
	params.Channel = Channel;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
// ()
// Parameters:
// TEnumAsByte<ECollisionResponse>* NewResponse                    (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse>* NewResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels");

	UNavTestRenderingComponent_SetCollisionResponseToAllChannels_Params params;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionProfileName
// ()
// Parameters:
// struct FName*                  InCollisionProfileName         (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetCollisionProfileName(struct FName* InCollisionProfileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionProfileName");

	UNavTestRenderingComponent_SetCollisionProfileName_Params params;
	params.InCollisionProfileName = InCollisionProfileName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionObjectType
// ()
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetCollisionObjectType(TEnumAsByte<ECollisionChannel>* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionObjectType");

	UNavTestRenderingComponent_SetCollisionObjectType_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionEnabled
// ()
// Parameters:
// TEnumAsByte<ECollisionEnabled>* NewType                        (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetCollisionEnabled(TEnumAsByte<ECollisionEnabled>* NewType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionEnabled");

	UNavTestRenderingComponent_SetCollisionEnabled_Params params;
	params.NewType = NewType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCenterOfMass
// ()
// Parameters:
// struct FVector*                CenterOfMassOffset             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetCenterOfMass(struct FVector* CenterOfMassOffset, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCenterOfMass");

	UNavTestRenderingComponent_SetCenterOfMass_Params params;
	params.CenterOfMassOffset = CenterOfMassOffset;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCastShadow
// ()
// Parameters:
// bool*                          NewCastShadow                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetCastShadow(bool* NewCastShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCastShadow");

	UNavTestRenderingComponent_SetCastShadow_Params params;
	params.NewCastShadow = NewCastShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCastInsetShadow
// ()
// Parameters:
// bool*                          bInCastInsetShadow             (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetCastInsetShadow(bool* bInCastInsetShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCastInsetShadow");

	UNavTestRenderingComponent_SetCastInsetShadow_Params params;
	params.bInCastInsetShadow = bInCastInsetShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetBoundsScale
// ()
// Parameters:
// float*                         NewBoundsScale                 (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetBoundsScale(float* NewBoundsScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetBoundsScale");

	UNavTestRenderingComponent_SetBoundsScale_Params params;
	params.NewBoundsScale = NewBoundsScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAngularDamping
// ()
// Parameters:
// float*                         InDamping                      (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetAngularDamping(float* InDamping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAngularDamping");

	UNavTestRenderingComponent_SetAngularDamping_Params params;
	params.InDamping = InDamping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllUseCCD
// ()
// Parameters:
// bool*                          InUseCCD                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetAllUseCCD(bool* InUseCCD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllUseCCD");

	UNavTestRenderingComponent_SetAllUseCCD_Params params;
	params.InUseCCD = InUseCCD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
// ()
// Parameters:
// struct FVector*                NewVel                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetAllPhysicsLinearVelocity(struct FVector* NewVel, bool* bAddToCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity");

	UNavTestRenderingComponent_SetAllPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians
// ()
// Parameters:
// struct FVector*                NewAngVel                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetAllPhysicsAngularVelocityInRadians(struct FVector* NewAngVel, bool* bAddToCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians");

	UNavTestRenderingComponent_SetAllPhysicsAngularVelocityInRadians_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees
// ()
// Parameters:
// struct FVector*                NewAngVel                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetAllPhysicsAngularVelocityInDegrees(struct FVector* NewAngVel, bool* bAddToCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees");

	UNavTestRenderingComponent_SetAllPhysicsAngularVelocityInDegrees_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllMassScale
// ()
// Parameters:
// float*                         InMassScale                    (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::SetAllMassScale(float* InMassScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllMassScale");

	UNavTestRenderingComponent_SetAllMassScale_Params params;
	params.InMassScale = InMassScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.ScaleByMomentOfInertia
// ()
// Parameters:
// struct FVector*                InputVector                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavTestRenderingComponent::ScaleByMomentOfInertia(struct FVector* InputVector, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.ScaleByMomentOfInertia");

	UNavTestRenderingComponent_ScaleByMomentOfInertia_Params params;
	params.InputVector = InputVector;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.PutRigidBodyToSleep
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::PutRigidBodyToSleep(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.PutRigidBodyToSleep");

	UNavTestRenderingComponent_PutRigidBodyToSleep_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.K2_SphereTraceComponent
// ()
// Parameters:
// struct FVector*                TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavTestRenderingComponent::K2_SphereTraceComponent(struct FVector* TraceStart, struct FVector* TraceEnd, float* SphereRadius, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_SphereTraceComponent");

	UNavTestRenderingComponent_K2_SphereTraceComponent_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.SphereRadius = SphereRadius;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_SphereOverlapComponent
// ()
// Parameters:
// struct FVector*                InSphereCentre                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InSphereRadius                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavTestRenderingComponent::K2_SphereOverlapComponent(struct FVector* InSphereCentre, float* InSphereRadius, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_SphereOverlapComponent");

	UNavTestRenderingComponent_K2_SphereOverlapComponent_Params params;
	params.InSphereCentre = InSphereCentre;
	params.InSphereRadius = InSphereRadius;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_LineTraceComponent
// ()
// Parameters:
// struct FVector*                TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavTestRenderingComponent::K2_LineTraceComponent(struct FVector* TraceStart, struct FVector* TraceEnd, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_LineTraceComponent");

	UNavTestRenderingComponent_K2_LineTraceComponent_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavTestRenderingComponent::K2_IsQueryCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled");

	UNavTestRenderingComponent_K2_IsQueryCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavTestRenderingComponent::K2_IsPhysicsCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled");

	UNavTestRenderingComponent_K2_IsPhysicsCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsCollisionEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavTestRenderingComponent::K2_IsCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_IsCollisionEnabled");

	UNavTestRenderingComponent_K2_IsCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_BoxOverlapComponent
// ()
// Parameters:
// struct FVector*                InBoxCentre                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBox*                   InBox                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavTestRenderingComponent::K2_BoxOverlapComponent(struct FVector* InBoxCentre, struct FBox* InBox, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_BoxOverlapComponent");

	UNavTestRenderingComponent_K2_BoxOverlapComponent_Params params;
	params.InBoxCentre = InBoxCentre;
	params.InBox = InBox;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsOverlappingComponent
// ()
// Parameters:
// class UPrimitiveComponent**    OtherComp                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavTestRenderingComponent::IsOverlappingComponent(class UPrimitiveComponent** OtherComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsOverlappingComponent");

	UNavTestRenderingComponent_IsOverlappingComponent_Params params;
	params.OtherComp = OtherComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsOverlappingActor
// ()
// Parameters:
// class AActor**                 Other                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavTestRenderingComponent::IsOverlappingActor(class AActor** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsOverlappingActor");

	UNavTestRenderingComponent_IsOverlappingActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsGravityEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavTestRenderingComponent::IsGravityEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsGravityEnabled");

	UNavTestRenderingComponent_IsGravityEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavTestRenderingComponent::IsAnyRigidBodyAwake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake");

	UNavTestRenderingComponent_IsAnyRigidBodyAwake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving
// ()
// Parameters:
// class UPrimitiveComponent**    Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bShouldIgnore                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::IgnoreComponentWhenMoving(class UPrimitiveComponent** Component, bool* bShouldIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving");

	UNavTestRenderingComponent_IgnoreComponentWhenMoving_Params params;
	params.Component = Component;
	params.bShouldIgnore = bShouldIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.IgnoreActorWhenMoving
// ()
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShouldIgnore                  (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::IgnoreActorWhenMoving(class AActor** Actor, bool* bShouldIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IgnoreActorWhenMoving");

	UNavTestRenderingComponent_IgnoreActorWhenMoving_Params params;
	params.Actor = Actor;
	params.bShouldIgnore = bShouldIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.GetWalkableSlopeOverride
// ()
// Parameters:
// struct FWalkableSlopeOverride  ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FWalkableSlopeOverride UNavTestRenderingComponent::GetWalkableSlopeOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetWalkableSlopeOverride");

	UNavTestRenderingComponent_GetWalkableSlopeOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
// ()
// Parameters:
// struct FVector*                Point                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavTestRenderingComponent::GetPhysicsLinearVelocityAtPoint(struct FVector* Point, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint");

	UNavTestRenderingComponent_GetPhysicsLinearVelocityAtPoint_Params params;
	params.Point = Point;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavTestRenderingComponent::GetPhysicsLinearVelocity(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity");

	UNavTestRenderingComponent_GetPhysicsLinearVelocity_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavTestRenderingComponent::GetPhysicsAngularVelocityInRadians(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians");

	UNavTestRenderingComponent_GetPhysicsAngularVelocityInRadians_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavTestRenderingComponent::GetPhysicsAngularVelocityInDegrees(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees");

	UNavTestRenderingComponent_GetPhysicsAngularVelocityInDegrees_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavTestRenderingComponent::GetPhysicsAngularVelocity(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity");

	UNavTestRenderingComponent_GetPhysicsAngularVelocity_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetOverlappingComponents
// ()
// Parameters:
// TArray<class UPrimitiveComponent*> OutOverlappingComponents       (Parm, OutParm, ZeroConstructor)

void UNavTestRenderingComponent::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OutOverlappingComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetOverlappingComponents");

	UNavTestRenderingComponent_GetOverlappingComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOverlappingComponents != nullptr)
		*OutOverlappingComponents = params.OutOverlappingComponents;
}


// Function Engine.PrimitiveComponent.GetOverlappingActors
// ()
// Parameters:
// TArray<class AActor*>          OverlappingActors              (Parm, OutParm, ZeroConstructor)
// class UClass**                 ClassFilter                    (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::GetOverlappingActors(class UClass** ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetOverlappingActors");

	UNavTestRenderingComponent_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}


// Function Engine.PrimitiveComponent.GetNumMaterials
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UNavTestRenderingComponent::GetNumMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetNumMaterials");

	UNavTestRenderingComponent_GetNumMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex
// ()
// Parameters:
// int*                           FaceIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SectionIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UNavTestRenderingComponent::GetMaterialFromCollisionFaceIndex(int* FaceIndex, int* SectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex");

	UNavTestRenderingComponent_GetMaterialFromCollisionFaceIndex_Params params;
	params.FaceIndex = FaceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SectionIndex != nullptr)
		*SectionIndex = params.SectionIndex;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMaterial
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UNavTestRenderingComponent::GetMaterial(int* ElementIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMaterial");

	UNavTestRenderingComponent_GetMaterial_Params params;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMassScale
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNavTestRenderingComponent::GetMassScale(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMassScale");

	UNavTestRenderingComponent_GetMassScale_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMass
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNavTestRenderingComponent::GetMass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMass");

	UNavTestRenderingComponent_GetMass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetLinearDamping
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNavTestRenderingComponent::GetLinearDamping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetLinearDamping");

	UNavTestRenderingComponent_GetLinearDamping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetInertiaTensor
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavTestRenderingComponent::GetInertiaTensor(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetInertiaTensor");

	UNavTestRenderingComponent_GetInertiaTensor_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetGenerateOverlapEvents
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavTestRenderingComponent::GetGenerateOverlapEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetGenerateOverlapEvents");

	UNavTestRenderingComponent_GetGenerateOverlapEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionResponseToChannel
// ()
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionResponse> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECollisionResponse> UNavTestRenderingComponent::GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel>* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionResponseToChannel");

	UNavTestRenderingComponent_GetCollisionResponseToChannel_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionProfileName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UNavTestRenderingComponent::GetCollisionProfileName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionProfileName");

	UNavTestRenderingComponent_GetCollisionProfileName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionObjectType
// ()
// Parameters:
// TEnumAsByte<ECollisionChannel> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECollisionChannel> UNavTestRenderingComponent::GetCollisionObjectType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionObjectType");

	UNavTestRenderingComponent_GetCollisionObjectType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionEnabled
// ()
// Parameters:
// TEnumAsByte<ECollisionEnabled> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECollisionEnabled> UNavTestRenderingComponent::GetCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionEnabled");

	UNavTestRenderingComponent_GetCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetClosestPointOnCollision
// ()
// Parameters:
// struct FVector*                Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 OutPointOnBody                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNavTestRenderingComponent::GetClosestPointOnCollision(struct FVector* Point, struct FName* BoneName, struct FVector* OutPointOnBody)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetClosestPointOnCollision");

	UNavTestRenderingComponent_GetClosestPointOnCollision_Params params;
	params.Point = Point;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPointOnBody != nullptr)
		*OutPointOnBody = params.OutPointOnBody;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCenterOfMass
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UNavTestRenderingComponent::GetCenterOfMass(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCenterOfMass");

	UNavTestRenderingComponent_GetCenterOfMass_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetAngularDamping
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNavTestRenderingComponent::GetAngularDamping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetAngularDamping");

	UNavTestRenderingComponent_GetAngularDamping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     SourceMaterial                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  OptionalName                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UNavTestRenderingComponent::CreateDynamicMaterialInstance(int* ElementIndex, class UMaterialInterface** SourceMaterial, struct FName* OptionalName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance");

	UNavTestRenderingComponent_CreateDynamicMaterialInstance_Params params;
	params.ElementIndex = ElementIndex;
	params.SourceMaterial = SourceMaterial;
	params.OptionalName = OptionalName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UNavTestRenderingComponent::CreateAndSetMaterialInstanceDynamicFromMaterial(int* ElementIndex, class UMaterialInterface** Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial");

	UNavTestRenderingComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UNavTestRenderingComponent::CreateAndSetMaterialInstanceDynamic(int* ElementIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic");

	UNavTestRenderingComponent_CreateAndSetMaterialInstanceDynamic_Params params;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents
// ()
// Parameters:
// TArray<class UPrimitiveComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPrimitiveComponent*> UNavTestRenderingComponent::CopyArrayOfMoveIgnoreComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents");

	UNavTestRenderingComponent_CopyArrayOfMoveIgnoreComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
// ()
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UNavTestRenderingComponent::CopyArrayOfMoveIgnoreActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors");

	UNavTestRenderingComponent_CopyArrayOfMoveIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents
// ()

void UNavTestRenderingComponent::ClearMoveIgnoreComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents");

	UNavTestRenderingComponent_ClearMoveIgnoreComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.ClearMoveIgnoreActors
// ()

void UNavTestRenderingComponent::ClearMoveIgnoreActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.ClearMoveIgnoreActors");

	UNavTestRenderingComponent_ClearMoveIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.CanCharacterStepUp
// ()
// Parameters:
// class APawn**                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNavTestRenderingComponent::CanCharacterStepUp(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CanCharacterStepUp");

	UNavTestRenderingComponent_CanCharacterStepUp_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.AddTorqueInRadians
// ()
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::AddTorqueInRadians(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddTorqueInRadians");

	UNavTestRenderingComponent_AddTorqueInRadians_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddTorqueInDegrees
// ()
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::AddTorqueInDegrees(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddTorqueInDegrees");

	UNavTestRenderingComponent_AddTorqueInDegrees_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddTorque
// ()
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::AddTorque(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddTorque");

	UNavTestRenderingComponent_AddTorque_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddRadialImpulse
// ()
// Parameters:
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff>* Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::AddRadialImpulse(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddRadialImpulse");

	UNavTestRenderingComponent_AddRadialImpulse_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddRadialForce
// ()
// Parameters:
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff>* Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::AddRadialForce(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddRadialForce");

	UNavTestRenderingComponent_AddRadialForce_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddImpulseAtLocation
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::AddImpulseAtLocation(struct FVector* Impulse, struct FVector* Location, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddImpulseAtLocation");

	UNavTestRenderingComponent_AddImpulseAtLocation_Params params;
	params.Impulse = Impulse;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddImpulse
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::AddImpulse(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddImpulse");

	UNavTestRenderingComponent_AddImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForceAtLocationLocal
// ()
// Parameters:
// struct FVector*                Force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::AddForceAtLocationLocal(struct FVector* Force, struct FVector* Location, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddForceAtLocationLocal");

	UNavTestRenderingComponent_AddForceAtLocationLocal_Params params;
	params.Force = Force;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForceAtLocation
// ()
// Parameters:
// struct FVector*                Force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::AddForceAtLocation(struct FVector* Force, struct FVector* Location, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddForceAtLocation");

	UNavTestRenderingComponent_AddForceAtLocation_Params params;
	params.Force = Force;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForce
// ()
// Parameters:
// struct FVector*                Force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::AddForce(struct FVector* Force, struct FName* BoneName, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddForce");

	UNavTestRenderingComponent_AddForce_Params params;
	params.Force = Force;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulseInRadians
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::AddAngularImpulseInRadians(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddAngularImpulseInRadians");

	UNavTestRenderingComponent_AddAngularImpulseInRadians_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::AddAngularImpulseInDegrees(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees");

	UNavTestRenderingComponent_AddAngularImpulseInDegrees_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulse
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void UNavTestRenderingComponent::AddAngularImpulse(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddAngularImpulse");

	UNavTestRenderingComponent_AddAngularImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

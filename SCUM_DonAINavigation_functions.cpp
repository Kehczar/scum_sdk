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

// Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnFinish
// ()
// Parameters:
// struct FDoNNavigationQueryData* Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UBTTask_FlyTo::Pathfinding_OnFinish(struct FDoNNavigationQueryData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnFinish");

	UBTTask_FlyTo_Pathfinding_OnFinish_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnDynamicCollisionAlert
// ()
// Parameters:
// struct FDonNavigationDynamicCollisionPayload* Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UBTTask_FlyTo::Pathfinding_OnDynamicCollisionAlert(struct FDonNavigationDynamicCollisionPayload* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnDynamicCollisionAlert");

	UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.VisualizeNAVResult
// ()
// Parameters:
// TArray<struct FVector>*        PathSolution                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                Source                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Destination                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Reset                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FDoNNavigationDebugParams* DebugParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FColor*                 LineColor                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ADonNavigationManager::VisualizeNAVResult(TArray<struct FVector>* PathSolution, struct FVector* Source, struct FVector* Destination, bool* Reset, struct FDoNNavigationDebugParams* DebugParams, struct FColor* LineColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.VisualizeNAVResult");

	ADonNavigationManager_VisualizeNAVResult_Params params;
	params.PathSolution = PathSolution;
	params.Source = Source;
	params.Destination = Destination;
	params.Reset = Reset;
	params.DebugParams = DebugParams;
	params.LineColor = LineColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.VisualizeDynamicCollisionListeners
// ()
// Parameters:
// struct FScriptDelegate*        Listener                       (Parm, ZeroConstructor)
// struct FDoNNavigationQueryData* QueryData                      (ConstParm, Parm, OutParm, ReferenceParm)

void ADonNavigationManager::VisualizeDynamicCollisionListeners(struct FScriptDelegate* Listener, struct FDoNNavigationQueryData* QueryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.VisualizeDynamicCollisionListeners");

	ADonNavigationManager_VisualizeDynamicCollisionListeners_Params params;
	params.Listener = Listener;
	params.QueryData = QueryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPathIndex
// ()
// Parameters:
// struct FScriptDelegate*        ListenerToClear                (Parm, ZeroConstructor)
// struct FDoNNavigationQueryData* QueryData                      (ConstParm, Parm, OutParm, ReferenceParm)
// int*                           VolumeIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManager::StopListeningToDynamicCollisionsForPathIndex(struct FScriptDelegate* ListenerToClear, struct FDoNNavigationQueryData* QueryData, int* VolumeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPathIndex");

	ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Params params;
	params.ListenerToClear = ListenerToClear;
	params.QueryData = QueryData;
	params.VolumeIndex = VolumeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPath
// ()
// Parameters:
// struct FScriptDelegate*        ListenerToClear                (Parm, ZeroConstructor)
// struct FDoNNavigationQueryData* QueryData                      (ConstParm, Parm, OutParm, ReferenceParm)

void ADonNavigationManager::StopListeningToDynamicCollisionsForPath(struct FScriptDelegate* ListenerToClear, struct FDoNNavigationQueryData* QueryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPath");

	ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Params params;
	params.ListenerToClear = ListenerToClear;
	params.QueryData = QueryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.SchedulePathfindingTask
// ()
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Destination                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDoNNavigationQueryParams* QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FDoNNavigationDebugParams* DebugParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate*        ResultHandlerDelegate          (Parm, ZeroConstructor)
// struct FScriptDelegate*        DynamicCollisionListener       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::SchedulePathfindingTask(class AActor** Actor, struct FVector* Destination, struct FDoNNavigationQueryParams* QueryParams, struct FDoNNavigationDebugParams* DebugParams, struct FScriptDelegate* ResultHandlerDelegate, struct FScriptDelegate* DynamicCollisionListener)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.SchedulePathfindingTask");

	ADonNavigationManager_SchedulePathfindingTask_Params params;
	params.Actor = Actor;
	params.Destination = Destination;
	params.QueryParams = QueryParams;
	params.DebugParams = DebugParams;
	params.ResultHandlerDelegate = ResultHandlerDelegate;
	params.DynamicCollisionListener = DynamicCollisionListener;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.ScheduleDynamicCollisionUpdate
// ()
// Parameters:
// class UPrimitiveComponent**    Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FScriptDelegate*        ResultHandler                  (Parm, ZeroConstructor)
// struct FName*                  CustomCacheIdentifier          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplaceExistingTask           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDisableCacheUsage             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReloadCollisionCache          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseCheapBoundsCollision       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BoundsScaleFactor              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceSynchronousExecution     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDrawDebug                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::ScheduleDynamicCollisionUpdate(class UPrimitiveComponent** Mesh, struct FScriptDelegate* ResultHandler, struct FName* CustomCacheIdentifier, bool* bReplaceExistingTask, bool* bDisableCacheUsage, bool* bReloadCollisionCache, bool* bUseCheapBoundsCollision, float* BoundsScaleFactor, bool* bForceSynchronousExecution, bool* bDrawDebug)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.ScheduleDynamicCollisionUpdate");

	ADonNavigationManager_ScheduleDynamicCollisionUpdate_Params params;
	params.Mesh = Mesh;
	params.ResultHandler = ResultHandler;
	params.CustomCacheIdentifier = CustomCacheIdentifier;
	params.bReplaceExistingTask = bReplaceExistingTask;
	params.bDisableCacheUsage = bDisableCacheUsage;
	params.bReloadCollisionCache = bReloadCollisionCache;
	params.bUseCheapBoundsCollision = bUseCheapBoundsCollision;
	params.BoundsScaleFactor = BoundsScaleFactor;
	params.bForceSynchronousExecution = bForceSynchronousExecution;
	params.bDrawDebug = bDrawDebug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsMeshBoundsWithinNavigableWorld
// ()
// Parameters:
// class UPrimitiveComponent**    Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         BoundsScaleFactor              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::IsMeshBoundsWithinNavigableWorld(class UPrimitiveComponent** Mesh, float* BoundsScaleFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsMeshBoundsWithinNavigableWorld");

	ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Params params;
	params.Mesh = Mesh;
	params.BoundsScaleFactor = BoundsScaleFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsLocationWithinNavigableWorld
// ()
// Parameters:
// struct FVector*                DesiredLocation                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::IsLocationWithinNavigableWorld(struct FVector* DesiredLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsLocationWithinNavigableWorld");

	ADonNavigationManager_IsLocationWithinNavigableWorld_Params params;
	params.DesiredLocation = DesiredLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsLocationBeneathLandscape
// ()
// Parameters:
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         LineTraceHeight                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::IsLocationBeneathLandscape(struct FVector* Location, float* LineTraceHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsLocationBeneathLandscape");

	ADonNavigationManager_IsLocationBeneathLandscape_Params params;
	params.Location = Location;
	params.LineTraceHeight = LineTraceHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsDirectPathSweep
// ()
// Parameters:
// class UPrimitiveComponent**    CollisionComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool*                          bFindInitialOverlaps           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CollisionShapeInflation        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::IsDirectPathSweep(class UPrimitiveComponent** CollisionComponent, struct FVector* Start, struct FVector* End, bool* bFindInitialOverlaps, float* CollisionShapeInflation, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsDirectPathSweep");

	ADonNavigationManager_IsDirectPathSweep_Params params;
	params.CollisionComponent = CollisionComponent;
	params.Start = Start;
	params.End = End;
	params.bFindInitialOverlaps = bFindInitialOverlaps;
	params.CollisionShapeInflation = CollisionShapeInflation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsDirectPathLineTrace
// ()
// Parameters:
// struct FVector*                Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// TArray<class AActor*>*         ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bFindInitialOverlaps           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::IsDirectPathLineTrace(struct FVector* Start, struct FVector* End, TArray<class AActor*>* ActorsToIgnore, bool* bFindInitialOverlaps, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsDirectPathLineTrace");

	ADonNavigationManager_IsDirectPathLineTrace_Params params;
	params.Start = Start;
	params.End = End;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bFindInitialOverlaps = bFindInitialOverlaps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsDirectPathLineSweep
// ()
// Parameters:
// class UPrimitiveComponent**    CollisionComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool*                          bFindInitialOverlaps           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CollisionShapeInflation        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::IsDirectPathLineSweep(class UPrimitiveComponent** CollisionComponent, struct FVector* Start, struct FVector* End, bool* bFindInitialOverlaps, float* CollisionShapeInflation, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsDirectPathLineSweep");

	ADonNavigationManager_IsDirectPathLineSweep_Params params;
	params.CollisionComponent = CollisionComponent;
	params.Start = Start;
	params.End = End;
	params.bFindInitialOverlaps = bFindInitialOverlaps;
	params.CollisionShapeInflation = CollisionShapeInflation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.HasTask
// ()
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::HasTask(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.HasTask");

	ADonNavigationManager_HasTask_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.FindRandomPointFromActorInNavWorld
// ()
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundValidResult              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float*                         MaxDesiredAltitude             (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxZAngularDispacement         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxAttempts                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADonNavigationManager::FindRandomPointFromActorInNavWorld(class AActor** Actor, float* Distance, float* MaxDesiredAltitude, float* MaxZAngularDispacement, int* MaxAttempts, bool* bFoundValidResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.FindRandomPointFromActorInNavWorld");

	ADonNavigationManager_FindRandomPointFromActorInNavWorld_Params params;
	params.Actor = Actor;
	params.Distance = Distance;
	params.MaxDesiredAltitude = MaxDesiredAltitude;
	params.MaxZAngularDispacement = MaxZAngularDispacement;
	params.MaxAttempts = MaxAttempts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundValidResult != nullptr)
		*bFoundValidResult = params.bFoundValidResult;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.FindRandomPointAroundOriginInNavWorld
// ()
// Parameters:
// class AActor**                 NavigationActor                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundValidResult              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float*                         MaxDesiredAltitude             (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxZAngularDispacement         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxAttempts                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADonNavigationManager::FindRandomPointAroundOriginInNavWorld(class AActor** NavigationActor, struct FVector* Origin, float* Distance, float* MaxDesiredAltitude, float* MaxZAngularDispacement, int* MaxAttempts, bool* bFoundValidResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.FindRandomPointAroundOriginInNavWorld");

	ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Params params;
	params.NavigationActor = NavigationActor;
	params.Origin = Origin;
	params.Distance = Distance;
	params.MaxDesiredAltitude = MaxDesiredAltitude;
	params.MaxZAngularDispacement = MaxZAngularDispacement;
	params.MaxAttempts = MaxAttempts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundValidResult != nullptr)
		*bFoundValidResult = params.bFoundValidResult;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.FindPathSolution_StressTesting
// ()
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Destination                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         PathSolutionRaw                (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         PathSolutionOptimized          (Parm, OutParm, ZeroConstructor)
// struct FDoNNavigationQueryParams* QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FDoNNavigationDebugParams* DebugParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::FindPathSolution_StressTesting(class AActor** Actor, struct FVector* Destination, struct FDoNNavigationQueryParams* QueryParams, struct FDoNNavigationDebugParams* DebugParams, TArray<struct FVector>* PathSolutionRaw, TArray<struct FVector>* PathSolutionOptimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.FindPathSolution_StressTesting");

	ADonNavigationManager_FindPathSolution_StressTesting_Params params;
	params.Actor = Actor;
	params.Destination = Destination;
	params.QueryParams = QueryParams;
	params.DebugParams = DebugParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PathSolutionRaw != nullptr)
		*PathSolutionRaw = params.PathSolutionRaw;
	if (PathSolutionOptimized != nullptr)
		*PathSolutionOptimized = params.PathSolutionOptimized;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.Debug_ToggleWorldBoundaryInGame
// ()

void ADonNavigationManager::Debug_ToggleWorldBoundaryInGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_ToggleWorldBoundaryInGame");

	ADonNavigationManager_Debug_ToggleWorldBoundaryInGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.Debug_DrawVoxelCollisionProfile
// ()
// Parameters:
// class UPrimitiveComponent**    MeshOrPrimitive                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bDrawPersistent                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManager::Debug_DrawVoxelCollisionProfile(class UPrimitiveComponent** MeshOrPrimitive, bool* bDrawPersistent, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_DrawVoxelCollisionProfile");

	ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Params params;
	params.MeshOrPrimitive = MeshOrPrimitive;
	params.bDrawPersistent = bDrawPersistent;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.Debug_DrawVolumesAroundPoint
// ()
// Parameters:
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CubeSize                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          DrawPersistentLines            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         LineThickness                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAutoInitializeVolumes         (Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManager::Debug_DrawVolumesAroundPoint(struct FVector* Location, int* CubeSize, bool* DrawPersistentLines, float* Duration, float* LineThickness, bool* bAutoInitializeVolumes)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_DrawVolumesAroundPoint");

	ADonNavigationManager_Debug_DrawVolumesAroundPoint_Params params;
	params.Location = Location;
	params.CubeSize = CubeSize;
	params.DrawPersistentLines = DrawPersistentLines;
	params.Duration = Duration;
	params.LineThickness = LineThickness;
	params.bAutoInitializeVolumes = bAutoInitializeVolumes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.Debug_DrawAllVolumes
// ()
// Parameters:
// float*                         LineThickness                  (Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManager::Debug_DrawAllVolumes(float* LineThickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_DrawAllVolumes");

	ADonNavigationManager_Debug_DrawAllVolumes_Params params;
	params.LineThickness = LineThickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.Debug_ClearAllVolumes
// ()

void ADonNavigationManager::Debug_ClearAllVolumes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_ClearAllVolumes");

	ADonNavigationManager_Debug_ClearAllVolumes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.ConstructBuilder
// ()

void ADonNavigationManager::ConstructBuilder()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.ConstructBuilder");

	ADonNavigationManager_ConstructBuilder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.ClampLocationToNavigableWorld
// ()
// Parameters:
// struct FVector*                DesiredLocation                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADonNavigationManager::ClampLocationToNavigableWorld(struct FVector* DesiredLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.ClampLocationToNavigableWorld");

	ADonNavigationManager_ClampLocationToNavigableWorld_Params params;
	params.DesiredLocation = DesiredLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.CanNavigate
// ()
// Parameters:
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::CanNavigate(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.CanNavigate");

	ADonNavigationManager_CanNavigate_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.AbortPathfindingTask
// ()
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManager::AbortPathfindingTask(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.AbortPathfindingTask");

	ADonNavigationManager_AbortPathfindingTask_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.VisualizeNAVResult
// ()
// Parameters:
// TArray<struct FVector>*        PathSolution                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                Source                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Destination                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Reset                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FDoNNavigationDebugParams* DebugParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FColor*                 LineColor                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ADonNavigationManagerUnbound::VisualizeNAVResult(TArray<struct FVector>* PathSolution, struct FVector* Source, struct FVector* Destination, bool* Reset, struct FDoNNavigationDebugParams* DebugParams, struct FColor* LineColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.VisualizeNAVResult");

	ADonNavigationManagerUnbound_VisualizeNAVResult_Params params;
	params.PathSolution = PathSolution;
	params.Source = Source;
	params.Destination = Destination;
	params.Reset = Reset;
	params.DebugParams = DebugParams;
	params.LineColor = LineColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.VisualizeDynamicCollisionListeners
// ()
// Parameters:
// struct FScriptDelegate*        Listener                       (Parm, ZeroConstructor)
// struct FDoNNavigationQueryData* QueryData                      (ConstParm, Parm, OutParm, ReferenceParm)

void ADonNavigationManagerUnbound::VisualizeDynamicCollisionListeners(struct FScriptDelegate* Listener, struct FDoNNavigationQueryData* QueryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.VisualizeDynamicCollisionListeners");

	ADonNavigationManagerUnbound_VisualizeDynamicCollisionListeners_Params params;
	params.Listener = Listener;
	params.QueryData = QueryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPathIndex
// ()
// Parameters:
// struct FScriptDelegate*        ListenerToClear                (Parm, ZeroConstructor)
// struct FDoNNavigationQueryData* QueryData                      (ConstParm, Parm, OutParm, ReferenceParm)
// int*                           VolumeIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManagerUnbound::StopListeningToDynamicCollisionsForPathIndex(struct FScriptDelegate* ListenerToClear, struct FDoNNavigationQueryData* QueryData, int* VolumeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPathIndex");

	ADonNavigationManagerUnbound_StopListeningToDynamicCollisionsForPathIndex_Params params;
	params.ListenerToClear = ListenerToClear;
	params.QueryData = QueryData;
	params.VolumeIndex = VolumeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPath
// ()
// Parameters:
// struct FScriptDelegate*        ListenerToClear                (Parm, ZeroConstructor)
// struct FDoNNavigationQueryData* QueryData                      (ConstParm, Parm, OutParm, ReferenceParm)

void ADonNavigationManagerUnbound::StopListeningToDynamicCollisionsForPath(struct FScriptDelegate* ListenerToClear, struct FDoNNavigationQueryData* QueryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPath");

	ADonNavigationManagerUnbound_StopListeningToDynamicCollisionsForPath_Params params;
	params.ListenerToClear = ListenerToClear;
	params.QueryData = QueryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.SchedulePathfindingTask
// ()
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Destination                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDoNNavigationQueryParams* QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FDoNNavigationDebugParams* DebugParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate*        ResultHandlerDelegate          (Parm, ZeroConstructor)
// struct FScriptDelegate*        DynamicCollisionListener       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManagerUnbound::SchedulePathfindingTask(class AActor** Actor, struct FVector* Destination, struct FDoNNavigationQueryParams* QueryParams, struct FDoNNavigationDebugParams* DebugParams, struct FScriptDelegate* ResultHandlerDelegate, struct FScriptDelegate* DynamicCollisionListener)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.SchedulePathfindingTask");

	ADonNavigationManagerUnbound_SchedulePathfindingTask_Params params;
	params.Actor = Actor;
	params.Destination = Destination;
	params.QueryParams = QueryParams;
	params.DebugParams = DebugParams;
	params.ResultHandlerDelegate = ResultHandlerDelegate;
	params.DynamicCollisionListener = DynamicCollisionListener;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.ScheduleDynamicCollisionUpdate
// ()
// Parameters:
// class UPrimitiveComponent**    Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FScriptDelegate*        ResultHandler                  (Parm, ZeroConstructor)
// struct FName*                  CustomCacheIdentifier          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplaceExistingTask           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDisableCacheUsage             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReloadCollisionCache          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseCheapBoundsCollision       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BoundsScaleFactor              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceSynchronousExecution     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDrawDebug                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManagerUnbound::ScheduleDynamicCollisionUpdate(class UPrimitiveComponent** Mesh, struct FScriptDelegate* ResultHandler, struct FName* CustomCacheIdentifier, bool* bReplaceExistingTask, bool* bDisableCacheUsage, bool* bReloadCollisionCache, bool* bUseCheapBoundsCollision, float* BoundsScaleFactor, bool* bForceSynchronousExecution, bool* bDrawDebug)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.ScheduleDynamicCollisionUpdate");

	ADonNavigationManagerUnbound_ScheduleDynamicCollisionUpdate_Params params;
	params.Mesh = Mesh;
	params.ResultHandler = ResultHandler;
	params.CustomCacheIdentifier = CustomCacheIdentifier;
	params.bReplaceExistingTask = bReplaceExistingTask;
	params.bDisableCacheUsage = bDisableCacheUsage;
	params.bReloadCollisionCache = bReloadCollisionCache;
	params.bUseCheapBoundsCollision = bUseCheapBoundsCollision;
	params.BoundsScaleFactor = BoundsScaleFactor;
	params.bForceSynchronousExecution = bForceSynchronousExecution;
	params.bDrawDebug = bDrawDebug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsMeshBoundsWithinNavigableWorld
// ()
// Parameters:
// class UPrimitiveComponent**    Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         BoundsScaleFactor              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManagerUnbound::IsMeshBoundsWithinNavigableWorld(class UPrimitiveComponent** Mesh, float* BoundsScaleFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsMeshBoundsWithinNavigableWorld");

	ADonNavigationManagerUnbound_IsMeshBoundsWithinNavigableWorld_Params params;
	params.Mesh = Mesh;
	params.BoundsScaleFactor = BoundsScaleFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsLocationWithinNavigableWorld
// ()
// Parameters:
// struct FVector*                DesiredLocation                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManagerUnbound::IsLocationWithinNavigableWorld(struct FVector* DesiredLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsLocationWithinNavigableWorld");

	ADonNavigationManagerUnbound_IsLocationWithinNavigableWorld_Params params;
	params.DesiredLocation = DesiredLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsLocationBeneathLandscape
// ()
// Parameters:
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         LineTraceHeight                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManagerUnbound::IsLocationBeneathLandscape(struct FVector* Location, float* LineTraceHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsLocationBeneathLandscape");

	ADonNavigationManagerUnbound_IsLocationBeneathLandscape_Params params;
	params.Location = Location;
	params.LineTraceHeight = LineTraceHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsDirectPathSweep
// ()
// Parameters:
// class UPrimitiveComponent**    CollisionComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool*                          bFindInitialOverlaps           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CollisionShapeInflation        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManagerUnbound::IsDirectPathSweep(class UPrimitiveComponent** CollisionComponent, struct FVector* Start, struct FVector* End, bool* bFindInitialOverlaps, float* CollisionShapeInflation, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsDirectPathSweep");

	ADonNavigationManagerUnbound_IsDirectPathSweep_Params params;
	params.CollisionComponent = CollisionComponent;
	params.Start = Start;
	params.End = End;
	params.bFindInitialOverlaps = bFindInitialOverlaps;
	params.CollisionShapeInflation = CollisionShapeInflation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsDirectPathLineTrace
// ()
// Parameters:
// struct FVector*                Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// TArray<class AActor*>*         ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bFindInitialOverlaps           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManagerUnbound::IsDirectPathLineTrace(struct FVector* Start, struct FVector* End, TArray<class AActor*>* ActorsToIgnore, bool* bFindInitialOverlaps, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsDirectPathLineTrace");

	ADonNavigationManagerUnbound_IsDirectPathLineTrace_Params params;
	params.Start = Start;
	params.End = End;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bFindInitialOverlaps = bFindInitialOverlaps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsDirectPathLineSweep
// ()
// Parameters:
// class UPrimitiveComponent**    CollisionComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                Start                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool*                          bFindInitialOverlaps           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CollisionShapeInflation        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManagerUnbound::IsDirectPathLineSweep(class UPrimitiveComponent** CollisionComponent, struct FVector* Start, struct FVector* End, bool* bFindInitialOverlaps, float* CollisionShapeInflation, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsDirectPathLineSweep");

	ADonNavigationManagerUnbound_IsDirectPathLineSweep_Params params;
	params.CollisionComponent = CollisionComponent;
	params.Start = Start;
	params.End = End;
	params.bFindInitialOverlaps = bFindInitialOverlaps;
	params.CollisionShapeInflation = CollisionShapeInflation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.HasTask
// ()
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManagerUnbound::HasTask(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.HasTask");

	ADonNavigationManagerUnbound_HasTask_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.FindRandomPointFromActorInNavWorld
// ()
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundValidResult              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float*                         MaxDesiredAltitude             (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxZAngularDispacement         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxAttempts                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADonNavigationManagerUnbound::FindRandomPointFromActorInNavWorld(class AActor** Actor, float* Distance, float* MaxDesiredAltitude, float* MaxZAngularDispacement, int* MaxAttempts, bool* bFoundValidResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.FindRandomPointFromActorInNavWorld");

	ADonNavigationManagerUnbound_FindRandomPointFromActorInNavWorld_Params params;
	params.Actor = Actor;
	params.Distance = Distance;
	params.MaxDesiredAltitude = MaxDesiredAltitude;
	params.MaxZAngularDispacement = MaxZAngularDispacement;
	params.MaxAttempts = MaxAttempts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundValidResult != nullptr)
		*bFoundValidResult = params.bFoundValidResult;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.FindRandomPointAroundOriginInNavWorld
// ()
// Parameters:
// class AActor**                 NavigationActor                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundValidResult              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float*                         MaxDesiredAltitude             (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxZAngularDispacement         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxAttempts                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADonNavigationManagerUnbound::FindRandomPointAroundOriginInNavWorld(class AActor** NavigationActor, struct FVector* Origin, float* Distance, float* MaxDesiredAltitude, float* MaxZAngularDispacement, int* MaxAttempts, bool* bFoundValidResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.FindRandomPointAroundOriginInNavWorld");

	ADonNavigationManagerUnbound_FindRandomPointAroundOriginInNavWorld_Params params;
	params.NavigationActor = NavigationActor;
	params.Origin = Origin;
	params.Distance = Distance;
	params.MaxDesiredAltitude = MaxDesiredAltitude;
	params.MaxZAngularDispacement = MaxZAngularDispacement;
	params.MaxAttempts = MaxAttempts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundValidResult != nullptr)
		*bFoundValidResult = params.bFoundValidResult;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.FindPathSolution_StressTesting
// ()
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Destination                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         PathSolutionRaw                (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         PathSolutionOptimized          (Parm, OutParm, ZeroConstructor)
// struct FDoNNavigationQueryParams* QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FDoNNavigationDebugParams* DebugParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManagerUnbound::FindPathSolution_StressTesting(class AActor** Actor, struct FVector* Destination, struct FDoNNavigationQueryParams* QueryParams, struct FDoNNavigationDebugParams* DebugParams, TArray<struct FVector>* PathSolutionRaw, TArray<struct FVector>* PathSolutionOptimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.FindPathSolution_StressTesting");

	ADonNavigationManagerUnbound_FindPathSolution_StressTesting_Params params;
	params.Actor = Actor;
	params.Destination = Destination;
	params.QueryParams = QueryParams;
	params.DebugParams = DebugParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PathSolutionRaw != nullptr)
		*PathSolutionRaw = params.PathSolutionRaw;
	if (PathSolutionOptimized != nullptr)
		*PathSolutionOptimized = params.PathSolutionOptimized;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.Debug_ToggleWorldBoundaryInGame
// ()

void ADonNavigationManagerUnbound::Debug_ToggleWorldBoundaryInGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_ToggleWorldBoundaryInGame");

	ADonNavigationManagerUnbound_Debug_ToggleWorldBoundaryInGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.Debug_DrawVoxelCollisionProfile
// ()
// Parameters:
// class UPrimitiveComponent**    MeshOrPrimitive                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bDrawPersistent                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManagerUnbound::Debug_DrawVoxelCollisionProfile(class UPrimitiveComponent** MeshOrPrimitive, bool* bDrawPersistent, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_DrawVoxelCollisionProfile");

	ADonNavigationManagerUnbound_Debug_DrawVoxelCollisionProfile_Params params;
	params.MeshOrPrimitive = MeshOrPrimitive;
	params.bDrawPersistent = bDrawPersistent;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.Debug_DrawVolumesAroundPoint
// ()
// Parameters:
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CubeSize                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          DrawPersistentLines            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         LineThickness                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAutoInitializeVolumes         (Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManagerUnbound::Debug_DrawVolumesAroundPoint(struct FVector* Location, int* CubeSize, bool* DrawPersistentLines, float* Duration, float* LineThickness, bool* bAutoInitializeVolumes)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_DrawVolumesAroundPoint");

	ADonNavigationManagerUnbound_Debug_DrawVolumesAroundPoint_Params params;
	params.Location = Location;
	params.CubeSize = CubeSize;
	params.DrawPersistentLines = DrawPersistentLines;
	params.Duration = Duration;
	params.LineThickness = LineThickness;
	params.bAutoInitializeVolumes = bAutoInitializeVolumes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.Debug_DrawAllVolumes
// ()
// Parameters:
// float*                         LineThickness                  (Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManagerUnbound::Debug_DrawAllVolumes(float* LineThickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_DrawAllVolumes");

	ADonNavigationManagerUnbound_Debug_DrawAllVolumes_Params params;
	params.LineThickness = LineThickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.Debug_ClearAllVolumes
// ()

void ADonNavigationManagerUnbound::Debug_ClearAllVolumes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_ClearAllVolumes");

	ADonNavigationManagerUnbound_Debug_ClearAllVolumes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.ConstructBuilder
// ()

void ADonNavigationManagerUnbound::ConstructBuilder()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.ConstructBuilder");

	ADonNavigationManagerUnbound_ConstructBuilder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.ClampLocationToNavigableWorld
// ()
// Parameters:
// struct FVector*                DesiredLocation                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADonNavigationManagerUnbound::ClampLocationToNavigableWorld(struct FVector* DesiredLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.ClampLocationToNavigableWorld");

	ADonNavigationManagerUnbound_ClampLocationToNavigableWorld_Params params;
	params.DesiredLocation = DesiredLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.CanNavigate
// ()
// Parameters:
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManagerUnbound::CanNavigate(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.CanNavigate");

	ADonNavigationManagerUnbound_CanNavigate_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.AbortPathfindingTask
// ()
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManagerUnbound::AbortPathfindingTask(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.AbortPathfindingTask");

	ADonNavigationManagerUnbound_AbortPathfindingTask_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

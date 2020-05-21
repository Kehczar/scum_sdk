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

// Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnFinish
struct UBTTask_FlyTo_Pathfinding_OnFinish_Params
{
	struct FDoNNavigationQueryData*                    Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnDynamicCollisionAlert
struct UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Params
{
	struct FDonNavigationDynamicCollisionPayload*      Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DonAINavigation.DonNavigationManager.VisualizeNAVResult
struct ADonNavigationManager_VisualizeNAVResult_Params
{
	TArray<struct FVector>*                            PathSolution;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Reset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDoNNavigationDebugParams*                  DebugParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FColor*                                     LineColor;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.VisualizeDynamicCollisionListeners
struct ADonNavigationManager_VisualizeDynamicCollisionListeners_Params
{
	struct FScriptDelegate*                            Listener;                                                 // (Parm, ZeroConstructor)
	struct FDoNNavigationQueryData*                    QueryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPathIndex
struct ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Params
{
	struct FScriptDelegate*                            ListenerToClear;                                          // (Parm, ZeroConstructor)
	struct FDoNNavigationQueryData*                    QueryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int*                                               VolumeIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPath
struct ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Params
{
	struct FScriptDelegate*                            ListenerToClear;                                          // (Parm, ZeroConstructor)
	struct FDoNNavigationQueryData*                    QueryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DonAINavigation.DonNavigationManager.SchedulePathfindingTask
struct ADonNavigationManager_SchedulePathfindingTask_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDoNNavigationQueryParams*                  QueryParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FDoNNavigationDebugParams*                  DebugParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate*                            ResultHandlerDelegate;                                    // (Parm, ZeroConstructor)
	struct FScriptDelegate*                            DynamicCollisionListener;                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.ScheduleDynamicCollisionUpdate
struct ADonNavigationManager_ScheduleDynamicCollisionUpdate_Params
{
	class UPrimitiveComponent**                        Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate*                            ResultHandler;                                            // (Parm, ZeroConstructor)
	struct FName*                                      CustomCacheIdentifier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplaceExistingTask;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDisableCacheUsage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReloadCollisionCache;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUseCheapBoundsCollision;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BoundsScaleFactor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceSynchronousExecution;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDrawDebug;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.IsMeshBoundsWithinNavigableWorld
struct ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Params
{
	class UPrimitiveComponent**                        Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             BoundsScaleFactor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.IsLocationWithinNavigableWorld
struct ADonNavigationManager_IsLocationWithinNavigableWorld_Params
{
	struct FVector*                                    DesiredLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.IsLocationBeneathLandscape
struct ADonNavigationManager_IsLocationBeneathLandscape_Params
{
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             LineTraceHeight;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.IsDirectPathSweep
struct ADonNavigationManager_IsDirectPathSweep_Params
{
	class UPrimitiveComponent**                        CollisionComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool*                                              bFindInitialOverlaps;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CollisionShapeInflation;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.IsDirectPathLineTrace
struct ADonNavigationManager_IsDirectPathLineTrace_Params
{
	struct FVector*                                    Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bFindInitialOverlaps;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.IsDirectPathLineSweep
struct ADonNavigationManager_IsDirectPathLineSweep_Params
{
	class UPrimitiveComponent**                        CollisionComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool*                                              bFindInitialOverlaps;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CollisionShapeInflation;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.HasTask
struct ADonNavigationManager_HasTask_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.FindRandomPointFromActorInNavWorld
struct ADonNavigationManager_FindRandomPointFromActorInNavWorld_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundValidResult;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxDesiredAltitude;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxZAngularDispacement;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxAttempts;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.FindRandomPointAroundOriginInNavWorld
struct ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Params
{
	class AActor**                                     NavigationActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundValidResult;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxDesiredAltitude;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxZAngularDispacement;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxAttempts;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.FindPathSolution_StressTesting
struct ADonNavigationManager_FindPathSolution_StressTesting_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             PathSolutionRaw;                                          // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             PathSolutionOptimized;                                    // (Parm, OutParm, ZeroConstructor)
	struct FDoNNavigationQueryParams*                  QueryParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FDoNNavigationDebugParams*                  DebugParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.Debug_ToggleWorldBoundaryInGame
struct ADonNavigationManager_Debug_ToggleWorldBoundaryInGame_Params
{
};

// Function DonAINavigation.DonNavigationManager.Debug_DrawVoxelCollisionProfile
struct ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Params
{
	class UPrimitiveComponent**                        MeshOrPrimitive;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bDrawPersistent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.Debug_DrawVolumesAroundPoint
struct ADonNavigationManager_Debug_DrawVolumesAroundPoint_Params
{
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CubeSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DrawPersistentLines;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             LineThickness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAutoInitializeVolumes;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.Debug_DrawAllVolumes
struct ADonNavigationManager_Debug_DrawAllVolumes_Params
{
	float*                                             LineThickness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.Debug_ClearAllVolumes
struct ADonNavigationManager_Debug_ClearAllVolumes_Params
{
};

// Function DonAINavigation.DonNavigationManager.ConstructBuilder
struct ADonNavigationManager_ConstructBuilder_Params
{
};

// Function DonAINavigation.DonNavigationManager.ClampLocationToNavigableWorld
struct ADonNavigationManager_ClampLocationToNavigableWorld_Params
{
	struct FVector*                                    DesiredLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.CanNavigate
struct ADonNavigationManager_CanNavigate_Params
{
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.AbortPathfindingTask
struct ADonNavigationManager_AbortPathfindingTask_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.VisualizeNAVResult
struct ADonNavigationManagerUnbound_VisualizeNAVResult_Params
{
	TArray<struct FVector>*                            PathSolution;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Reset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDoNNavigationDebugParams*                  DebugParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FColor*                                     LineColor;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.VisualizeDynamicCollisionListeners
struct ADonNavigationManagerUnbound_VisualizeDynamicCollisionListeners_Params
{
	struct FScriptDelegate*                            Listener;                                                 // (Parm, ZeroConstructor)
	struct FDoNNavigationQueryData*                    QueryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPathIndex
struct ADonNavigationManagerUnbound_StopListeningToDynamicCollisionsForPathIndex_Params
{
	struct FScriptDelegate*                            ListenerToClear;                                          // (Parm, ZeroConstructor)
	struct FDoNNavigationQueryData*                    QueryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int*                                               VolumeIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPath
struct ADonNavigationManagerUnbound_StopListeningToDynamicCollisionsForPath_Params
{
	struct FScriptDelegate*                            ListenerToClear;                                          // (Parm, ZeroConstructor)
	struct FDoNNavigationQueryData*                    QueryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DonAINavigation.DonNavigationManager.SchedulePathfindingTask
struct ADonNavigationManagerUnbound_SchedulePathfindingTask_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDoNNavigationQueryParams*                  QueryParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FDoNNavigationDebugParams*                  DebugParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate*                            ResultHandlerDelegate;                                    // (Parm, ZeroConstructor)
	struct FScriptDelegate*                            DynamicCollisionListener;                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.ScheduleDynamicCollisionUpdate
struct ADonNavigationManagerUnbound_ScheduleDynamicCollisionUpdate_Params
{
	class UPrimitiveComponent**                        Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate*                            ResultHandler;                                            // (Parm, ZeroConstructor)
	struct FName*                                      CustomCacheIdentifier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReplaceExistingTask;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDisableCacheUsage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReloadCollisionCache;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUseCheapBoundsCollision;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BoundsScaleFactor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceSynchronousExecution;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDrawDebug;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.IsMeshBoundsWithinNavigableWorld
struct ADonNavigationManagerUnbound_IsMeshBoundsWithinNavigableWorld_Params
{
	class UPrimitiveComponent**                        Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             BoundsScaleFactor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.IsLocationWithinNavigableWorld
struct ADonNavigationManagerUnbound_IsLocationWithinNavigableWorld_Params
{
	struct FVector*                                    DesiredLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.IsLocationBeneathLandscape
struct ADonNavigationManagerUnbound_IsLocationBeneathLandscape_Params
{
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             LineTraceHeight;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.IsDirectPathSweep
struct ADonNavigationManagerUnbound_IsDirectPathSweep_Params
{
	class UPrimitiveComponent**                        CollisionComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool*                                              bFindInitialOverlaps;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CollisionShapeInflation;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.IsDirectPathLineTrace
struct ADonNavigationManagerUnbound_IsDirectPathLineTrace_Params
{
	struct FVector*                                    Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bFindInitialOverlaps;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.IsDirectPathLineSweep
struct ADonNavigationManagerUnbound_IsDirectPathLineSweep_Params
{
	class UPrimitiveComponent**                        CollisionComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool*                                              bFindInitialOverlaps;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CollisionShapeInflation;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.HasTask
struct ADonNavigationManagerUnbound_HasTask_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.FindRandomPointFromActorInNavWorld
struct ADonNavigationManagerUnbound_FindRandomPointFromActorInNavWorld_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundValidResult;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxDesiredAltitude;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxZAngularDispacement;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxAttempts;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.FindRandomPointAroundOriginInNavWorld
struct ADonNavigationManagerUnbound_FindRandomPointAroundOriginInNavWorld_Params
{
	class AActor**                                     NavigationActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundValidResult;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxDesiredAltitude;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxZAngularDispacement;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxAttempts;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.FindPathSolution_StressTesting
struct ADonNavigationManagerUnbound_FindPathSolution_StressTesting_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             PathSolutionRaw;                                          // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             PathSolutionOptimized;                                    // (Parm, OutParm, ZeroConstructor)
	struct FDoNNavigationQueryParams*                  QueryParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FDoNNavigationDebugParams*                  DebugParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.Debug_ToggleWorldBoundaryInGame
struct ADonNavigationManagerUnbound_Debug_ToggleWorldBoundaryInGame_Params
{
};

// Function DonAINavigation.DonNavigationManager.Debug_DrawVoxelCollisionProfile
struct ADonNavigationManagerUnbound_Debug_DrawVoxelCollisionProfile_Params
{
	class UPrimitiveComponent**                        MeshOrPrimitive;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bDrawPersistent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.Debug_DrawVolumesAroundPoint
struct ADonNavigationManagerUnbound_Debug_DrawVolumesAroundPoint_Params
{
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CubeSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DrawPersistentLines;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             LineThickness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAutoInitializeVolumes;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.Debug_DrawAllVolumes
struct ADonNavigationManagerUnbound_Debug_DrawAllVolumes_Params
{
	float*                                             LineThickness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.Debug_ClearAllVolumes
struct ADonNavigationManagerUnbound_Debug_ClearAllVolumes_Params
{
};

// Function DonAINavigation.DonNavigationManager.ConstructBuilder
struct ADonNavigationManagerUnbound_ConstructBuilder_Params
{
};

// Function DonAINavigation.DonNavigationManager.ClampLocationToNavigableWorld
struct ADonNavigationManagerUnbound_ClampLocationToNavigableWorld_Params
{
	struct FVector*                                    DesiredLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.CanNavigate
struct ADonNavigationManagerUnbound_CanNavigate_Params
{
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.AbortPathfindingTask
struct ADonNavigationManagerUnbound_AbortPathfindingTask_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

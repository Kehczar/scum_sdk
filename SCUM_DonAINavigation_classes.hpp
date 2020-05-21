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

// Class DonAINavigation.BTTask_FlyTo
// 0x0118 (0x0188 - 0x0070)
class UBTTask_FlyTo : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      FlightLocationKey;                                        // 0x0070(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      FlightResultKey;                                          // 0x0098(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      KeyToFlipFlopWhenTaskExits;                               // 0x00C0(0x0028) (Edit, BlueprintVisible)
	float                                              MinimumProximityRequired;                                 // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRecalcPathOnDestinationChanged : 1;                      // 0x00EC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	float                                              RecalculatePathTolerance;                                 // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FDoNNavigationQueryParams                   QueryParams;                                              // 0x00F8(0x0020) (Edit, BlueprintVisible)
	struct FBT_FlyToTarget_DebugParams                 DebugParams;                                              // 0x0118(0x0010) (Edit, BlueprintVisible)
	class ADonNavigationManager*                       NavigationManager;                                        // 0x0128(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportToDestinationUponFailure;                        // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              MaxTimeBeforeTeleport;                                    // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0138(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DonAINavigation.BTTask_FlyTo");
		return ptr;
	}


	void Pathfinding_OnFinish(struct FDoNNavigationQueryData* Data);
	void Pathfinding_OnDynamicCollisionAlert(struct FDonNavigationDynamicCollisionPayload* Data);
};


// Class DonAINavigation.DonEnvQueryTest_Navigation
// 0x0010 (0x01D0 - 0x01C0)
class UDonEnvQueryTest_Navigation : public UEnvQueryTest
{
public:
	unsigned char                                      bSearchRandomLocation : 1;                                // 0x01C0(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01C1(0x0003) MISSED OFFSET
	int                                                RandomLocationMaxAttempts;                                // 0x01C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomLocationRadius;                                     // 0x01C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DonAINavigation.DonEnvQueryTest_Navigation");
		return ptr;
	}

};


// Class DonAINavigation.DonNavigationHelper
// 0x0000 (0x0028 - 0x0028)
class UDonNavigationHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DonAINavigation.DonNavigationHelper");
		return ptr;
	}

};


// Class DonAINavigation.DonNavigationManager
// 0x6958 (0x6B70 - 0x0218)
class ADonNavigationManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1F4];                                     // 0x0218(0x01F4) MISSED OFFSET
	bool                                               bIsUnbound;                                               // 0x040C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	class USceneComponent*                             SceneComponent;                                           // 0x0410(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0418(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0420(0x0010) MISSED OFFSET
	float                                              VoxelSize;                                                // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                XGridSize;                                                // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                YGridSize;                                                // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ZGridSize;                                                // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ECollisionChannel>>             ObstacleQueryChannels;                                    // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              ActorsToIgnoreForCollision;                               // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      AutoCorrectionGuessList;                                  // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              UnrealPhyxPenetrationDepth;                               // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PerformCollisionChecksOnStartup;                          // 0x0474(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMultiThreadingEnabled;                                   // 0x0475(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0476(0x0002) MISSED OFFSET
	int                                                MaxPathSolverIterationsPerTick;                           // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCollisionSolverIterationsPerTick;                      // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPathSolverIterationsOnThread;                          // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCollisionSolverIterationsOnThread;                     // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPathSolverIterationsPerTick_Unbound;                   // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCollisionSolverIterationsPerTick_Unbound;              // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPathSolverIterationsOnThread_Unbound;                  // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCollisionSolverIterationsOnThread_Unbound;             // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               WorldBoundaryVisualizer;                                  // 0x0498(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bDisplayWorldBoundary;                                    // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayWorldBoundaryInGame;                              // 0x04A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x04A2(0x0002) MISSED OFFSET
	float                                              DebugVoxelsLineThickness;                                 // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRunDebugValidationsForDynamicCollisions;                 // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x653F];                                    // 0x04A9(0x653F) MISSED OFFSET
	unsigned char                                      UnknownData06[0x50];                                      // 0x04A9(0x0050) UNKNOWN PROPERTY: SetProperty DonAINavigation.DonNavigationManager.ActiveNavigationTaskOwners
	unsigned char                                      UnknownData07[0x50];                                      // 0x6A38(0x0050) UNKNOWN PROPERTY: SetProperty DonAINavigation.DonNavigationManager.ActiveCollisionTaskOwners
	unsigned char                                      UnknownData08[0xE8];                                      // 0x6A88(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DonAINavigation.DonNavigationManager");
		return ptr;
	}


	void VisualizeNAVResult(TArray<struct FVector>* PathSolution, struct FVector* Source, struct FVector* Destination, bool* Reset, struct FDoNNavigationDebugParams* DebugParams, struct FColor* LineColor);
	void VisualizeDynamicCollisionListeners(struct FScriptDelegate* Listener, struct FDoNNavigationQueryData* QueryData);
	void StopListeningToDynamicCollisionsForPathIndex(struct FScriptDelegate* ListenerToClear, struct FDoNNavigationQueryData* QueryData, int* VolumeIndex);
	void StopListeningToDynamicCollisionsForPath(struct FScriptDelegate* ListenerToClear, struct FDoNNavigationQueryData* QueryData);
	bool SchedulePathfindingTask(class AActor** Actor, struct FVector* Destination, struct FDoNNavigationQueryParams* QueryParams, struct FDoNNavigationDebugParams* DebugParams, struct FScriptDelegate* ResultHandlerDelegate, struct FScriptDelegate* DynamicCollisionListener);
	bool ScheduleDynamicCollisionUpdate(class UPrimitiveComponent** Mesh, struct FScriptDelegate* ResultHandler, struct FName* CustomCacheIdentifier, bool* bReplaceExistingTask, bool* bDisableCacheUsage, bool* bReloadCollisionCache, bool* bUseCheapBoundsCollision, float* BoundsScaleFactor, bool* bForceSynchronousExecution, bool* bDrawDebug);
	bool IsMeshBoundsWithinNavigableWorld(class UPrimitiveComponent** Mesh, float* BoundsScaleFactor);
	bool IsLocationWithinNavigableWorld(struct FVector* DesiredLocation);
	bool IsLocationBeneathLandscape(struct FVector* Location, float* LineTraceHeight);
	bool IsDirectPathSweep(class UPrimitiveComponent** CollisionComponent, struct FVector* Start, struct FVector* End, bool* bFindInitialOverlaps, float* CollisionShapeInflation, struct FHitResult* OutHit);
	bool IsDirectPathLineTrace(struct FVector* Start, struct FVector* End, TArray<class AActor*>* ActorsToIgnore, bool* bFindInitialOverlaps, struct FHitResult* OutHit);
	bool IsDirectPathLineSweep(class UPrimitiveComponent** CollisionComponent, struct FVector* Start, struct FVector* End, bool* bFindInitialOverlaps, float* CollisionShapeInflation, struct FHitResult* OutHit);
	bool HasTask(class AActor** Actor);
	struct FVector FindRandomPointFromActorInNavWorld(class AActor** Actor, float* Distance, float* MaxDesiredAltitude, float* MaxZAngularDispacement, int* MaxAttempts, bool* bFoundValidResult);
	struct FVector FindRandomPointAroundOriginInNavWorld(class AActor** NavigationActor, struct FVector* Origin, float* Distance, float* MaxDesiredAltitude, float* MaxZAngularDispacement, int* MaxAttempts, bool* bFoundValidResult);
	bool FindPathSolution_StressTesting(class AActor** Actor, struct FVector* Destination, struct FDoNNavigationQueryParams* QueryParams, struct FDoNNavigationDebugParams* DebugParams, TArray<struct FVector>* PathSolutionRaw, TArray<struct FVector>* PathSolutionOptimized);
	void Debug_ToggleWorldBoundaryInGame();
	void Debug_DrawVoxelCollisionProfile(class UPrimitiveComponent** MeshOrPrimitive, bool* bDrawPersistent, float* Duration);
	void Debug_DrawVolumesAroundPoint(struct FVector* Location, int* CubeSize, bool* DrawPersistentLines, float* Duration, float* LineThickness, bool* bAutoInitializeVolumes);
	void Debug_DrawAllVolumes(float* LineThickness);
	void Debug_ClearAllVolumes();
	void ConstructBuilder();
	struct FVector ClampLocationToNavigableWorld(struct FVector* DesiredLocation);
	bool CanNavigate(struct FVector* Location);
	void AbortPathfindingTask(class AActor** Actor);
};


// Class DonAINavigation.DonNavigationManagerUnbound
// 0x0000 (0x6B70 - 0x6B70)
class ADonNavigationManagerUnbound : public ADonNavigationManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DonAINavigation.DonNavigationManagerUnbound");
		return ptr;
	}


	void VisualizeNAVResult(TArray<struct FVector>* PathSolution, struct FVector* Source, struct FVector* Destination, bool* Reset, struct FDoNNavigationDebugParams* DebugParams, struct FColor* LineColor);
	void VisualizeDynamicCollisionListeners(struct FScriptDelegate* Listener, struct FDoNNavigationQueryData* QueryData);
	void StopListeningToDynamicCollisionsForPathIndex(struct FScriptDelegate* ListenerToClear, struct FDoNNavigationQueryData* QueryData, int* VolumeIndex);
	void StopListeningToDynamicCollisionsForPath(struct FScriptDelegate* ListenerToClear, struct FDoNNavigationQueryData* QueryData);
	bool SchedulePathfindingTask(class AActor** Actor, struct FVector* Destination, struct FDoNNavigationQueryParams* QueryParams, struct FDoNNavigationDebugParams* DebugParams, struct FScriptDelegate* ResultHandlerDelegate, struct FScriptDelegate* DynamicCollisionListener);
	bool ScheduleDynamicCollisionUpdate(class UPrimitiveComponent** Mesh, struct FScriptDelegate* ResultHandler, struct FName* CustomCacheIdentifier, bool* bReplaceExistingTask, bool* bDisableCacheUsage, bool* bReloadCollisionCache, bool* bUseCheapBoundsCollision, float* BoundsScaleFactor, bool* bForceSynchronousExecution, bool* bDrawDebug);
	bool IsMeshBoundsWithinNavigableWorld(class UPrimitiveComponent** Mesh, float* BoundsScaleFactor);
	bool IsLocationWithinNavigableWorld(struct FVector* DesiredLocation);
	bool IsLocationBeneathLandscape(struct FVector* Location, float* LineTraceHeight);
	bool IsDirectPathSweep(class UPrimitiveComponent** CollisionComponent, struct FVector* Start, struct FVector* End, bool* bFindInitialOverlaps, float* CollisionShapeInflation, struct FHitResult* OutHit);
	bool IsDirectPathLineTrace(struct FVector* Start, struct FVector* End, TArray<class AActor*>* ActorsToIgnore, bool* bFindInitialOverlaps, struct FHitResult* OutHit);
	bool IsDirectPathLineSweep(class UPrimitiveComponent** CollisionComponent, struct FVector* Start, struct FVector* End, bool* bFindInitialOverlaps, float* CollisionShapeInflation, struct FHitResult* OutHit);
	bool HasTask(class AActor** Actor);
	struct FVector FindRandomPointFromActorInNavWorld(class AActor** Actor, float* Distance, float* MaxDesiredAltitude, float* MaxZAngularDispacement, int* MaxAttempts, bool* bFoundValidResult);
	struct FVector FindRandomPointAroundOriginInNavWorld(class AActor** NavigationActor, struct FVector* Origin, float* Distance, float* MaxDesiredAltitude, float* MaxZAngularDispacement, int* MaxAttempts, bool* bFoundValidResult);
	bool FindPathSolution_StressTesting(class AActor** Actor, struct FVector* Destination, struct FDoNNavigationQueryParams* QueryParams, struct FDoNNavigationDebugParams* DebugParams, TArray<struct FVector>* PathSolutionRaw, TArray<struct FVector>* PathSolutionOptimized);
	void Debug_ToggleWorldBoundaryInGame();
	void Debug_DrawVoxelCollisionProfile(class UPrimitiveComponent** MeshOrPrimitive, bool* bDrawPersistent, float* Duration);
	void Debug_DrawVolumesAroundPoint(struct FVector* Location, int* CubeSize, bool* DrawPersistentLines, float* Duration, float* LineThickness, bool* bAutoInitializeVolumes);
	void Debug_DrawAllVolumes(float* LineThickness);
	void Debug_ClearAllVolumes();
	void ConstructBuilder();
	struct FVector ClampLocationToNavigableWorld(struct FVector* DesiredLocation);
	bool CanNavigate(struct FVector* Location);
	void AbortPathfindingTask(class AActor** Actor);
};


// Class DonAINavigation.DonNavigator
// 0x0000 (0x0028 - 0x0028)
class UDonNavigator : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DonAINavigation.DonNavigator");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Class GeometryCollectionEngine.ChaosDestructionListener
// 0x0230 (0x0420 - 0x01F0)
class UChaosDestructionListener : public USceneComponent
{
public:
	unsigned char                                      bIsCollisionEventListeningEnabled : 1;                    // 0x01F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsBreakingEventListeningEnabled : 1;                     // 0x01F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsTrailingEventListeningEnabled : 1;                     // 0x01F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01F1(0x0003) MISSED OFFSET
	struct FChaosCollisionEventRequestSettings         CollisionEventRequestSettings;                            // 0x01F4(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FChaosBreakingEventRequestSettings          BreakingEventRequestSettings;                             // 0x020C(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FChaosTrailingEventRequestSettings          TrailingEventRequestSettings;                             // 0x0224(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x50];                                      // 0x023C(0x0050) UNKNOWN PROPERTY: SetProperty GeometryCollectionEngine.ChaosDestructionListener.ChaosSolverActors
	unsigned char                                      UnknownData03[0x50];                                      // 0x0290(0x0050) UNKNOWN PROPERTY: SetProperty GeometryCollectionEngine.ChaosDestructionListener.GeometryCollectionActors
	struct FScriptMulticastDelegate                    OnCollisionEvents;                                        // 0x02E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBreakingEvents;                                         // 0x02F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTrailingEvents;                                         // 0x0300(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x110];                                     // 0x0310(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.ChaosDestructionListener");
		return ptr;
	}


	void SortTrailingEvents(EChaosTrailingSortMethod* SortMethod, TArray<struct FChaosTrailingEventData>* TrailingEvents);
	void SortCollisionEvents(EChaosCollisionSortMethod* SortMethod, TArray<struct FChaosCollisionEventData>* CollisionEvents);
	void SortBreakingEvents(EChaosBreakingSortMethod* SortMethod, TArray<struct FChaosBreakingEventData>* BreakingEvents);
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings* InSettings);
	void SetTrailingEventEnabled(bool* bIsEnabled);
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings* InSettings);
	void SetCollisionEventEnabled(bool* bIsEnabled);
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings* InSettings);
	void SetBreakingEventEnabled(bool* bIsEnabled);
	void RemoveGeometryCollectionActor(class AGeometryCollectionActor** GeometryCollectionActor);
	void RemoveChaosSolverActor(class AChaosSolverActor** ChaosSolverActor);
	bool IsEventListening();
	void AddGeometryCollectionActor(class AGeometryCollectionActor** GeometryCollectionActor);
	void AddChaosSolverActor(class AChaosSolverActor** ChaosSolverActor);
};


// Class GeometryCollectionEngine.GeometryCollectionActor
// 0x0010 (0x0228 - 0x0218)
class AGeometryCollectionActor : public AActor
{
public:
	class UGeometryCollectionComponent*                GeometryCollectionComponent;                              // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGeometryCollectionDebugDrawComponent*       GeometryCollectionDebugDrawComponent;                     // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionActor");
		return ptr;
	}


	bool RaycastSingle(struct FVector* Start, struct FVector* End, struct FHitResult* OutHit);
};


// Class GeometryCollectionEngine.GeometryCollectionCache
// 0x0028 (0x0050 - 0x0028)
class UGeometryCollectionCache : public UObject
{
public:
	struct FRecordedTransformTrack                     RecordedData;                                             // 0x0028(0x0010)
	class UGeometryCollection*                         SupportedCollection;                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CompatibleCollectionState;                                // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionCache");
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionComponent
// 0x03F0 (0x07F0 - 0x0400)
class UGeometryCollectionComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0400(0x0008) MISSED OFFSET
	class AChaosSolverActor*                           ChaosSolverActor;                                         // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE0];                                      // 0x0410(0x00E0) MISSED OFFSET
	class UGeometryCollection*                         RestCollection;                                           // 0x04F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData)
	TArray<class AFieldSystemActor*>                   InitializationFields;                                     // 0x04F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear)
	bool                                               Simulating;                                               // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0509(0x0007) MISSED OFFSET
	EObjectStateTypeEnum                               ObjectType;                                               // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableClustering;                                         // 0x0511(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0512(0x0002) MISSED OFFSET
	int                                                ClusterGroupIndex;                                        // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxClusterLevel;                                          // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	TArray<float>                                      DamageThreshold;                                          // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EClusterConnectionTypeEnum                         ClusterConnectionType;                                    // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	int                                                CollisionGroup;                                           // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionSampleFraction;                                  // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                         // 0x0540(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EInitialVelocityTypeEnum                           InitialVelocityType;                                      // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0549(0x0003) MISSED OFFSET
	struct FVector                                     InitialLinearVelocity;                                    // 0x054C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialAngularVelocity;                                   // 0x0558(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0564(0x0004) MISSED OFFSET
	struct FGeomComponentCacheParameters               CacheParameters;                                          // 0x0568(0x0050) (Edit)
	struct FScriptMulticastDelegate                    NotifyGeometryCollectionPhysicsStateChange;               // 0x05B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyGeometryCollectionPhysicsLoadingStateChange;        // 0x05C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData09[0x18];                                      // 0x05D8(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnChaosBreakEvent;                                        // 0x05F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              DesiredCacheTime;                                         // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	bool                                               CachePlayback;                                            // 0x0604(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0605(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnChaosPhysicsCollision;                                  // 0x0608(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bNotifyBreaks;                                            // 0x0618(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bNotifyCollisions;                                        // 0x0619(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1AE];                                     // 0x061A(0x01AE) MISSED OFFSET
	class UBodySetup*                                  DummyBodySetup;                                           // 0x07C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x20];                                      // 0x07D0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionComponent");
		return ptr;
	}


	void SetNotifyBreaks(bool* bNewNotifyBreaks);
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo* CollisionInfo);
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent** FracturedComponent);
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent** FracturedComponent);
	void ApplyPhysicsField(bool* Enabled, EGeometryCollectionPhysicsTypeEnum* Target, class UFieldSystemMetaData** MetaData, class UFieldNodeBase** Field);
	void ApplyKinematicField(float* Radius, struct FVector* Position);
};


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// 0x00E8 (0x0300 - 0x0218)
class AGeometryCollectionDebugDrawActor : public AActor
{
public:
	struct FGeometryCollectionDebugDrawWarningMessage  WarningMessage;                                           // 0x0218(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                        // 0x0220(0x0018) (Edit)
	bool                                               bDebugDrawWholeCollection;                                // 0x0238(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawHierarchy;                                      // 0x0239(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawClustering;                                     // 0x023A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGeometryCollectionDebugDrawActorHideGeometry      HideGeometry;                                             // 0x023B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyId;                                         // 0x023C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyCollision;                                  // 0x023D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCollisionAtOrigin;                                       // 0x023E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyTransform;                                  // 0x023F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyInertia;                                    // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyVelocity;                                   // 0x0241(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyForce;                                      // 0x0242(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRigidBodyInfos;                                      // 0x0243(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTransformIndex;                                      // 0x0244(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTransform;                                           // 0x0245(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowParent;                                              // 0x0246(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowLevel;                                               // 0x0247(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowConnectivityEdges;                                   // 0x0248(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowGeometryIndex;                                       // 0x0249(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowGeometryTransform;                                   // 0x024A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowBoundingBox;                                         // 0x024B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowFaces;                                               // 0x024C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowFaceIndices;                                         // 0x024D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowFaceNormals;                                         // 0x024E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowSingleFace;                                          // 0x024F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SingleFaceIndex;                                          // 0x0250(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowVertices;                                            // 0x0254(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowVertexIndices;                                       // 0x0255(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowVertexNormals;                                       // 0x0256(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseActiveVisualization;                                  // 0x0257(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PointThickness;                                           // 0x0258(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LineThickness;                                            // 0x025C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTextShadow;                                              // 0x0260(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0261(0x0003) MISSED OFFSET
	float                                              TextScale;                                                // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalScale;                                              // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AxisScale;                                                // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArrowScale;                                               // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      RigidBodyIdColor;                                         // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RigidBodyTransformScale;                                  // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      RigidBodyCollisionColor;                                  // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      RigidBodyInertiaColor;                                    // 0x0280(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      RigidBodyVelocityColor;                                   // 0x0284(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      RigidBodyForceColor;                                      // 0x0288(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      RigidBodyInfoColor;                                       // 0x028C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      TransformIndexColor;                                      // 0x0290(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TransformScale;                                           // 0x0294(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      LevelColor;                                               // 0x0298(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      ParentColor;                                              // 0x029C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConnectivityEdgeThickness;                                // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      GeometryIndexColor;                                       // 0x02A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GeometryTransformScale;                                   // 0x02A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      BoundingBoxColor;                                         // 0x02AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      FaceColor;                                                // 0x02B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      FaceIndexColor;                                           // 0x02B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      FaceNormalColor;                                          // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      SingleFaceColor;                                          // 0x02BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      VertexColor;                                              // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      VertexIndexColor;                                         // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      VertexNormalColor;                                        // 0x02C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	class UBillboardComponent*                         SpriteComponent;                                          // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x02D8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor");
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// 0x0018 (0x00C8 - 0x00B0)
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
public:
	class AGeometryCollectionDebugDrawActor*           GeometryCollectionDebugDrawActor;                         // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AGeometryCollectionRenderLevelSetActor*      GeometryCollectionRenderLevelSetActor;                    // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent");
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollection
// 0x00A8 (0x00D0 - 0x0028)
class UGeometryCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0030(0x0010) (Edit, ZeroConstructor)
	ECollisionTypeEnum                                 CollisionType;                                            // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EImplicitTypeEnum                                  ImplicitType;                                             // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	int                                                MinLevelSetResolution;                                    // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxLevelSetResolution;                                    // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MinClusterLevelSetResolution;                             // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxClusterLevelSetResolution;                             // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollisionObjectReductionPercentage;                       // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMassAsDensity;                                           // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              Mass;                                                     // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumMassClamp;                                         // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollisionParticlesFraction;                               // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaximumCollisionParticles;                                // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData;                                         // 0x0070(0x0010) (Edit, ZeroConstructor)
	bool                                               EnableRemovePiecesOnFracture;                             // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	TArray<class UMaterialInterface*>                  RemoveOnFractureMaterials;                                // 0x0088(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       PersistentGuid;                                           // 0x0098(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       StateGuid;                                                // 0x00A8(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                BoneSelectedMaterialIndex;                                // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x14];                                      // 0x00BC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollection");
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// 0x0098 (0x02B0 - 0x0218)
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
	class UVolumeTexture*                              TargetVolumeTexture;                                      // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   RayMarchMaterial;                                         // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SurfaceTolerance;                                         // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Isovalue;                                                 // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RenderVolumeBoundingBox;                                  // 0x0231(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7E];                                      // 0x0232(0x007E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor");
		return ptr;
	}

};


// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// 0x0088 (0x0138 - 0x00B0)
class USkeletalMeshSimulationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                         // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AChaosSolverActor*                           ChaosSolverActor;                                         // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               OverridePhysicsAsset;                                     // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSimulating;                                              // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNotifyCollisions;                                        // 0x00D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EObjectStateTypeEnum                               ObjectType;                                               // 0x00D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00D3(0x0001) MISSED OFFSET
	float                                              Density;                                                  // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinMass;                                                  // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxMass;                                                  // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECollisionTypeEnum                                 CollisionType;                                            // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	float                                              ImplicitShapeParticlesPerUnitArea;                        // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ImplicitShapeMinNumParticles;                             // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ImplicitShapeMaxNumParticles;                             // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinLevelSetResolution;                                    // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxLevelSetResolution;                                    // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CollisionGroup;                                           // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EInitialVelocityTypeEnum                           InitialVelocityType;                                      // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	struct FVector                                     InitialLinearVelocity;                                    // 0x0100(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialAngularVelocity;                                   // 0x010C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnChaosPhysicsCollision;                                  // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0128(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.SkeletalMeshSimulationComponent");
		return ptr;
	}


	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo* CollisionInfo);
};


// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// 0x0088 (0x0138 - 0x00B0)
class UStaticMeshSimulationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	bool                                               Simulating;                                               // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNotifyCollisions;                                        // 0x00B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EObjectStateTypeEnum                               ObjectType;                                               // 0x00BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00BB(0x0001) MISSED OFFSET
	float                                              Mass;                                                     // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECollisionTypeEnum                                 CollisionType;                                            // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EImplicitTypeEnum                                  ImplicitType;                                             // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	int                                                MinLevelSetResolution;                                    // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxLevelSetResolution;                                    // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EInitialVelocityTypeEnum                           InitialVelocityType;                                      // 0x00CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	struct FVector                                     InitialLinearVelocity;                                    // 0x00D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialAngularVelocity;                                   // 0x00DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageThreshold;                                          // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                         // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AChaosSolverActor*                           ChaosSolverActor;                                         // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnChaosPhysicsCollision;                                  // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0110(0x0010) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 SimulatedComponents;                                      // 0x0120(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.StaticMeshSimulationComponent");
		return ptr;
	}


	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo* CollisionInfo);
	void ForceRecreatePhysicsState();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
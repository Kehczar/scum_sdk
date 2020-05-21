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

// Class Paper2D.MaterialExpressionSpriteTextureSampler
// 0x0020 (0x0110 - 0x00F0)
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
public:
	bool                                               bSampleAdditionalTextures;                                // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	int                                                AdditionalSlotIndex;                                      // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       SlotDisplayName;                                          // 0x00F8(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.MaterialExpressionSpriteTextureSampler");
		return ptr;
	}

};


// Class Paper2D.PaperCharacter
// 0x0000 (0x0630 - 0x0630)
class APaperCharacter : public ACharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperCharacter");
		return ptr;
	}

};


// Class Paper2D.PaperFlipbook
// 0x0028 (0x0050 - 0x0028)
class UPaperFlipbook : public UObject
{
public:
	float                                              FramesPerSecond;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FPaperFlipbookKeyFrame>              KeyFrames;                                                // 0x0030(0x0010) (Edit, ZeroConstructor)
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFlipbookCollisionMode>                CollisionSource;                                          // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperFlipbook");
		return ptr;
	}


	bool IsValidKeyFrameIndex(int* Index);
	float GetTotalDuration();
	class UPaperSprite* GetSpriteAtTime(float* Time, bool* bClampToEnds);
	class UPaperSprite* GetSpriteAtFrame(int* FrameIndex);
	int GetNumKeyFrames();
	int GetNumFrames();
	int GetKeyFrameIndexAtTime(float* Time, bool* bClampToEnds);
};


// Class Paper2D.PaperFlipbookActor
// 0x0008 (0x0220 - 0x0218)
class APaperFlipbookActor : public AActor
{
public:
	class UPaperFlipbookComponent*                     RenderComponent;                                          // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperFlipbookActor");
		return ptr;
	}

};


// Class Paper2D.PaperFlipbookComponent
// 0x0050 (0x0450 - 0x0400)
class UPaperFlipbookComponent : public UMeshComponent
{
public:
	class UPaperFlipbook*                              SourceFlipbook;                                           // 0x0400(0x0008) (Edit, Net, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0408(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x0414(0x0001)
	unsigned char                                      bReversePlayback : 1;                                     // 0x0414(0x0001)
	unsigned char                                      bPlaying : 1;                                             // 0x0414(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	float                                              AccumulatedTime;                                          // 0x0418(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CachedFrameIndex;                                         // 0x041C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SpriteColor;                                              // 0x0420(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBodySetup*                                  CachedBodySetup;                                          // 0x0430(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnFinishedPlaying;                                        // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0448(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperFlipbookComponent");
		return ptr;
	}


	void Stop();
	void SetSpriteColor(struct FLinearColor* NewColor);
	void SetPlayRate(float* NewRate);
	void SetPlaybackPositionInFrames(int* NewFramePosition, bool* bFireEvents);
	void SetPlaybackPosition(float* NewPosition, bool* bFireEvents);
	void SetNewTime(float* NewTime);
	void SetLooping(bool* bNewLooping);
	bool SetFlipbook(class UPaperFlipbook** NewFlipbook);
	void ReverseFromEnd();
	void Reverse();
	void PlayFromStart();
	void Play();
	void OnRep_SourceFlipbook(class UPaperFlipbook** OldFlipbook);
	bool IsReversing();
	bool IsPlaying();
	bool IsLooping();
	float GetPlayRate();
	int GetPlaybackPositionInFrames();
	float GetPlaybackPosition();
	int GetFlipbookLengthInFrames();
	float GetFlipbookLength();
	float GetFlipbookFramerate();
	class UPaperFlipbook* GetFlipbook();
};


// Class Paper2D.PaperGroupedSpriteActor
// 0x0008 (0x0220 - 0x0218)
class APaperGroupedSpriteActor : public AActor
{
public:
	class UPaperGroupedSpriteComponent*                RenderComponent;                                          // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperGroupedSpriteActor");
		return ptr;
	}

};


// Class Paper2D.PaperGroupedSpriteComponent
// 0x0030 (0x0430 - 0x0400)
class UPaperGroupedSpriteComponent : public UMeshComponent
{
public:
	TArray<class UMaterialInterface*>                  InstanceMaterials;                                        // 0x0400(0x0010) (ZeroConstructor)
	TArray<struct FSpriteInstanceData>                 PerInstanceSpriteData;                                    // 0x0410(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0420(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperGroupedSpriteComponent");
		return ptr;
	}


	bool UpdateInstanceTransform(int* InstanceIndex, struct FTransform* NewInstanceTransform, bool* bWorldSpace, bool* bMarkRenderStateDirty, bool* bTeleport);
	bool UpdateInstanceColor(int* InstanceIndex, struct FLinearColor* NewInstanceColor, bool* bMarkRenderStateDirty);
	void SortInstancesAlongAxis(struct FVector* WorldSpaceSortAxis);
	bool RemoveInstance(int* InstanceIndex);
	bool GetInstanceTransform(int* InstanceIndex, bool* bWorldSpace, struct FTransform* OutInstanceTransform);
	int GetInstanceCount();
	void ClearInstances();
	int AddInstance(struct FTransform* Transform, class UPaperSprite** Sprite, bool* bWorldSpace, struct FLinearColor* Color);
};


// Class Paper2D.PaperRuntimeSettings
// 0x0008 (0x0030 - 0x0028)
class UPaperRuntimeSettings : public UObject
{
public:
	bool                                               bEnableSpriteAtlasGroups;                                 // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableTerrainSplineEditing;                              // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bResizeSpriteDataToMatchTextures;                         // 0x002A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperRuntimeSettings");
		return ptr;
	}

};


// Class Paper2D.PaperSprite
// 0x0080 (0x00A8 - 0x0028)
class UPaperSprite : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<class UTexture*>                            AdditionalSourceTextures;                                 // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FVector2D                                   BakedSourceUV;                                            // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BakedSourceDimension;                                     // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  BakedSourceTexture;                                       // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          AlternateMaterial;                                        // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPaperSpriteSocket>                  Sockets;                                                  // 0x0070(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                    // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              PixelsPerUnrealUnit;                                      // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UBodySetup*                                  BodySetup;                                                // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AlternateMaterialSplitIndex;                              // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	TArray<struct FVector4>                            BakedRenderData;                                          // 0x0098(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSprite");
		return ptr;
	}

};


// Class Paper2D.PaperSpriteActor
// 0x0008 (0x0220 - 0x0218)
class APaperSpriteActor : public AActor
{
public:
	class UPaperSpriteComponent*                       RenderComponent;                                          // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteActor");
		return ptr;
	}

};


// Class Paper2D.PaperSpriteAtlas
// 0x0000 (0x0028 - 0x0028)
class UPaperSpriteAtlas : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteAtlas");
		return ptr;
	}

};


// Class Paper2D.PaperSpriteBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteBlueprintLibrary");
		return ptr;
	}

};


// Class Paper2D.PaperSpriteComponent
// 0x0020 (0x0420 - 0x0400)
class UPaperSpriteComponent : public UMeshComponent
{
public:
	class UPaperSprite*                                SourceSprite;                                             // 0x0400(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaterialOverride;                                         // 0x0408(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                SpriteColor;                                              // 0x0410(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteComponent");
		return ptr;
	}


	void SetSpriteColor(struct FLinearColor* NewColor);
	bool SetSprite(class UPaperSprite** NewSprite);
	class UPaperSprite* GetSprite();
};


// Class Paper2D.PaperTerrainActor
// 0x0018 (0x0230 - 0x0218)
class APaperTerrainActor : public AActor
{
public:
	class USceneComponent*                             DummyRoot;                                                // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPaperTerrainSplineComponent*                SplineComponent;                                          // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPaperTerrainComponent*                      RenderComponent;                                          // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainActor");
		return ptr;
	}

};


// Class Paper2D.PaperTerrainComponent
// 0x0050 (0x0430 - 0x03E0)
class UPaperTerrainComponent : public UPrimitiveComponent
{
public:
	bool                                               bClosedSpline;                                            // 0x03E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFilledSpline;                                            // 0x03E1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03E2(0x0006) MISSED OFFSET
	class UPaperTerrainSplineComponent*                AssociatedSpline;                                         // 0x03E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                randomSeed;                                               // 0x03F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SegmentOverlapAmount;                                     // 0x03F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TerrainColor;                                             // 0x03F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ReparamStepsPerSegment;                                   // 0x0408(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                    // 0x040C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	float                                              CollisionThickness;                                       // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	class UBodySetup*                                  CachedBodySetup;                                          // 0x0418(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0420(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainComponent");
		return ptr;
	}


	void SetTerrainColor(struct FLinearColor* NewColor);
};


// Class Paper2D.PaperTerrainMaterial
// 0x0018 (0x0048 - 0x0030)
class UPaperTerrainMaterial : public UDataAsset
{
public:
	TArray<struct FPaperTerrainMaterialRule>           Rules;                                                    // 0x0030(0x0010) (Edit, ZeroConstructor)
	class UPaperSprite*                                InteriorFill;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainMaterial");
		return ptr;
	}

};


// Class Paper2D.PaperTerrainSplineComponent
// 0x0010 (0x04E0 - 0x04D0)
class UPaperTerrainSplineComponent : public USplineComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainSplineComponent");
		return ptr;
	}


	void UpdateSpline();
	void SetWorldLocationAtSplinePoint(int* PointIndex, struct FVector* InLocation);
	void SetUpVectorAtSplinePoint(int* PointIndex, struct FVector* InUpVector, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUpdateSpline);
	void SetUnselectedSplineSegmentColor(struct FLinearColor* SegmentColor);
	void SetTangentsAtSplinePoint(int* PointIndex, struct FVector* InArriveTangent, struct FVector* InLeaveTangent, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUpdateSpline);
	void SetTangentAtSplinePoint(int* PointIndex, struct FVector* InTangent, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUpdateSpline);
	void SetSplineWorldPoints(TArray<struct FVector>* Points);
	void SetSplinePointType(int* PointIndex, TEnumAsByte<ESplinePointType>* Type, bool* bUpdateSpline);
	void SetSplinePoints(TArray<struct FVector>* Points, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUpdateSpline);
	void SetSplineLocalPoints(TArray<struct FVector>* Points);
	void SetSelectedSplineSegmentColor(struct FLinearColor* SegmentColor);
	void SetLocationAtSplinePoint(int* PointIndex, struct FVector* InLocation, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUpdateSpline);
	void SetDrawDebug(bool* bShow);
	void SetDefaultUpVector(struct FVector* UpVector, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	void SetClosedLoopAtPosition(bool* bInClosedLoop, float* Key, bool* bUpdateSpline);
	void SetClosedLoop(bool* bInClosedLoop, bool* bUpdateSpline);
	void RemoveSplinePoint(int* Index, bool* bUpdateSpline);
	bool IsClosedLoop();
	struct FVector GetWorldTangentAtDistanceAlongSpline(float* Distance);
	struct FRotator GetWorldRotationAtTime(float* Time, bool* bUseConstantVelocity);
	struct FRotator GetWorldRotationAtDistanceAlongSpline(float* Distance);
	struct FVector GetWorldLocationAtTime(float* Time, bool* bUseConstantVelocity);
	struct FVector GetWorldLocationAtSplinePoint(int* PointIndex);
	struct FVector GetWorldLocationAtDistanceAlongSpline(float* Distance);
	struct FVector GetWorldDirectionAtTime(float* Time, bool* bUseConstantVelocity);
	struct FVector GetWorldDirectionAtDistanceAlongSpline(float* Distance);
	struct FVector GetVectorPropertyAtSplinePoint(int* Index, struct FName* PropertyName);
	struct FVector GetVectorPropertyAtSplineInputKey(float* InKey, struct FName* PropertyName);
	struct FVector GetUpVectorAtTime(float* Time, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseConstantVelocity);
	struct FVector GetUpVectorAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FVector GetUpVectorAtSplineInputKey(float* InKey, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FVector GetUpVectorAtDistanceAlongSpline(float* Distance, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FTransform GetTransformAtTime(float* Time, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseConstantVelocity, bool* bUseScale);
	struct FTransform GetTransformAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseScale);
	struct FTransform GetTransformAtSplineInputKey(float* InKey, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseScale);
	struct FTransform GetTransformAtDistanceAlongSpline(float* Distance, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseScale);
	struct FVector GetTangentAtTime(float* Time, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseConstantVelocity);
	struct FVector GetTangentAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FVector GetTangentAtSplineInputKey(float* InKey, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FVector GetTangentAtDistanceAlongSpline(float* Distance, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	TEnumAsByte<ESplinePointType> GetSplinePointType(int* PointIndex);
	float GetSplineLength();
	struct FVector GetScaleAtTime(float* Time, bool* bUseConstantVelocity);
	struct FVector GetScaleAtSplinePoint(int* PointIndex);
	struct FVector GetScaleAtSplineInputKey(float* InKey);
	struct FVector GetScaleAtDistanceAlongSpline(float* Distance);
	struct FRotator GetRotationAtTime(float* Time, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseConstantVelocity);
	struct FRotator GetRotationAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FRotator GetRotationAtSplineInputKey(float* InKey, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FRotator GetRotationAtDistanceAlongSpline(float* Distance, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	float GetRollAtTime(float* Time, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseConstantVelocity);
	float GetRollAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	float GetRollAtSplineInputKey(float* InKey, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	float GetRollAtDistanceAlongSpline(float* Distance, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FVector GetRightVectorAtTime(float* Time, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseConstantVelocity);
	struct FVector GetRightVectorAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FVector GetRightVectorAtSplineInputKey(float* InKey, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FVector GetRightVectorAtDistanceAlongSpline(float* Distance, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	int GetNumberOfSplineSegments();
	int GetNumberOfSplinePoints();
	struct FVector GetLocationAtTime(float* Time, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseConstantVelocity);
	struct FVector GetLocationAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FVector GetLocationAtSplineInputKey(float* InKey, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FVector GetLocationAtDistanceAlongSpline(float* Distance, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	void GetLocationAndTangentAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, struct FVector* Location, struct FVector* Tangent);
	void GetLocalLocationAndTangentAtSplinePoint(int* PointIndex, struct FVector* LocalLocation, struct FVector* LocalTangent);
	struct FVector GetLeaveTangentAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	float GetInputKeyAtDistanceAlongSpline(float* Distance);
	float GetFloatPropertyAtSplinePoint(int* Index, struct FName* PropertyName);
	float GetFloatPropertyAtSplineInputKey(float* InKey, struct FName* PropertyName);
	float GetDistanceAlongSplineAtSplinePoint(int* PointIndex);
	struct FVector GetDirectionAtTime(float* Time, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseConstantVelocity);
	struct FVector GetDirectionAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FVector GetDirectionAtSplineInputKey(float* InKey, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FVector GetDirectionAtDistanceAlongSpline(float* Distance, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FVector GetDefaultUpVector(TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FVector GetArriveTangentAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FVector FindUpVectorClosestToWorldLocation(struct FVector* WorldLocation, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FTransform FindTransformClosestToWorldLocation(struct FVector* WorldLocation, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseScale);
	struct FVector FindTangentClosestToWorldLocation(struct FVector* WorldLocation, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FVector FindScaleClosestToWorldLocation(struct FVector* WorldLocation);
	struct FRotator FindRotationClosestToWorldLocation(struct FVector* WorldLocation, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	float FindRollClosestToWorldLocation(struct FVector* WorldLocation, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FVector FindRightVectorClosestToWorldLocation(struct FVector* WorldLocation, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	struct FVector FindLocationClosestToWorldLocation(struct FVector* WorldLocation, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	float FindInputKeyClosestToWorldLocation(struct FVector* WorldLocation);
	struct FVector FindDirectionClosestToWorldLocation(struct FVector* WorldLocation, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace);
	void ClearSplinePoints(bool* bUpdateSpline);
	void AddSplineWorldPoint(struct FVector* Position);
	void AddSplinePointAtIndex(struct FVector* Position, int* Index, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUpdateSpline);
	void AddSplinePoint(struct FVector* Position, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUpdateSpline);
	void AddSplineLocalPoint(struct FVector* Position);
	void AddPoints(TArray<struct FSplinePoint>* Points, bool* bUpdateSpline);
	void AddPoint(struct FSplinePoint* Point, bool* bUpdateSpline);
};


// Class Paper2D.PaperTileLayer
// 0x0070 (0x0098 - 0x0028)
class UPaperTileLayer : public UObject
{
public:
	struct FText                                       LayerName;                                                // 0x0028(0x0028) (BlueprintVisible, BlueprintReadOnly)
	int                                                LayerWidth;                                               // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LayerHeight;                                              // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHiddenInGame : 1;                                        // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bLayerCollides : 1;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOverrideCollisionThickness : 1;                          // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOverrideCollisionOffset : 1;                             // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              CollisionThicknessOverride;                               // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollisionOffsetOverride;                                  // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LayerColor;                                               // 0x0054(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AllocatedWidth;                                           // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllocatedHeight;                                          // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FPaperTileInfo>                      AllocatedCells;                                           // 0x0070(0x0010) (ZeroConstructor)
	class UPaperTileSet*                               TileSet;                                                  // 0x0080(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<int>                                        AllocatedGrid;                                            // 0x0088(0x0010) (ZeroConstructor, Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileLayer");
		return ptr;
	}

};


// Class Paper2D.PaperTileMap
// 0x0080 (0x00A8 - 0x0028)
class UPaperTileMap : public UObject
{
public:
	int                                                MapWidth;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MapHeight;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TileWidth;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TileHeight;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PixelsPerUnrealUnit;                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SeparationPerTileX;                                       // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SeparationPerTileY;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SeparationPerLayer;                                       // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Paper2D.PaperTileMap.SelectedTileSet
	class UMaterialInterface*                          Material;                                                 // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UPaperTileLayer*>                     TileLayers;                                               // 0x0078(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	float                                              CollisionThickness;                                       // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                    // 0x008C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETileMapProjectionMode>                ProjectionMode;                                           // 0x008D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x008E(0x0002) MISSED OFFSET
	int                                                HexSideLength;                                            // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UBodySetup*                                  BodySetup;                                                // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                LayerNameIndex;                                           // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileMap");
		return ptr;
	}

};


// Class Paper2D.PaperTileMapActor
// 0x0008 (0x0220 - 0x0218)
class APaperTileMapActor : public AActor
{
public:
	class UPaperTileMapComponent*                      RenderComponent;                                          // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileMapActor");
		return ptr;
	}

};


// Class Paper2D.PaperTileMapComponent
// 0x0050 (0x0450 - 0x0400)
class UPaperTileMapComponent : public UMeshComponent
{
public:
	int                                                MapWidth;                                                 // 0x0400(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                MapHeight;                                                // 0x0404(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                TileWidth;                                                // 0x0408(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                TileHeight;                                               // 0x040C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UPaperTileSet*                               DefaultLayerTileSet;                                      // 0x0410(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0418(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<class UPaperTileLayer*>                     TileLayers;                                               // 0x0420(0x0010) (ZeroConstructor, Deprecated)
	struct FLinearColor                                TileMapColor;                                             // 0x0430(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                UseSingleLayerIndex;                                      // 0x0440(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSingleLayer;                                          // 0x0444(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0445(0x0003) MISSED OFFSET
	class UPaperTileMap*                               TileMap;                                                  // 0x0448(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileMapComponent");
		return ptr;
	}


	void SetTileMapColor(struct FLinearColor* NewColor);
	bool SetTileMap(class UPaperTileMap** NewTileMap);
	void SetTile(int* X, int* Y, int* Layer, struct FPaperTileInfo* NewValue);
	void SetLayerColor(struct FLinearColor* NewColor, int* Layer);
	void SetLayerCollision(int* Layer, bool* bHasCollision, bool* bOverrideThickness, float* CustomThickness, bool* bOverrideOffset, float* CustomOffset, bool* bRebuildCollision);
	void SetDefaultCollisionThickness(float* Thickness, bool* bRebuildCollision);
	void ResizeMap(int* NewWidthInTiles, int* NewHeightInTiles);
	void RebuildCollision();
	bool OwnsTileMap();
	void MakeTileMapEditable();
	void GetTilePolygon(int* TileX, int* TileY, int* LayerIndex, bool* bWorldSpace, TArray<struct FVector>* Points);
	struct FLinearColor GetTileMapColor();
	struct FVector GetTileCornerPosition(int* TileX, int* TileY, int* LayerIndex, bool* bWorldSpace);
	struct FVector GetTileCenterPosition(int* TileX, int* TileY, int* LayerIndex, bool* bWorldSpace);
	struct FPaperTileInfo GetTile(int* X, int* Y, int* Layer);
	void GetMapSize(int* MapWidth, int* MapHeight, int* NumLayers);
	struct FLinearColor GetLayerColor(int* Layer);
	void CreateNewTileMap(int* MapWidth, int* MapHeight, int* TileWidth, int* TileHeight, float* PixelsPerUnrealUnit, bool* bCreateLayer);
	class UPaperTileLayer* AddNewLayer();
};


// Class Paper2D.PaperTileSet
// 0x0080 (0x00A8 - 0x0028)
class UPaperTileSet : public UObject
{
public:
	struct FIntPoint                                   TileSize;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  TileSheet;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UTexture*>                            AdditionalSourceTextures;                                 // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FIntMargin                                  BorderMargin;                                             // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FIntPoint                                   PerTileSpacing;                                           // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   DrawingOffset;                                            // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WidthInTiles;                                             // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HeightInTiles;                                            // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllocatedWidth;                                           // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllocatedHeight;                                          // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPaperTileMetadata>                  PerTileData;                                              // 0x0078(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FPaperTileSetTerrain>                Terrains;                                                 // 0x0088(0x0010) (ZeroConstructor)
	int                                                TileWidth;                                                // 0x0098(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                TileHeight;                                               // 0x009C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                Margin;                                                   // 0x00A0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                Spacing;                                                  // 0x00A4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileSet");
		return ptr;
	}

};


// Class Paper2D.TileMapBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.TileMapBlueprintLibrary");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

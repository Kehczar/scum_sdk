#pragma once

// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GeometryCollectionCore.EGeometryCollectionCacheType
enum class EGeometryCollectionCacheType : uint8_t
{
	EGeometryCollectionCacheType__None = 0,
	None                           = 1,
	EGeometryCollectionCacheType__Record = 2,
	neByteProperty‘IntProperty  = 3,
	EGeometryCollectionCacheType__Play = 4,
	ByteProperty‘IntProperty    = 5,
	EGeometryCollectionCacheType__RecordAndPlay = 6,
	ByteProperty                   = 7,
	EGeometryCollectionCacheType__EGeometryCollectionCacheType_MAX = 8,
	teProperty‘IntProperty        = 9,
	None01                         = 10,
	None02                         = 11,
	None03                         = 12,
	None04                         = 13,
	None05                         = 14,
	None06                         = 15,
	None07                         = 16,
	None08                         = 17,
	None09                         = 18,
	None10                         = 19,
	None11                         = 20,
	None12                         = 21,
	None13                         = 22,
	None14                         = 23
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCollectionCore.SolverCollisionData
// 0x006C
struct FSolverCollisionData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AccumulatedImpulse;                                       // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity1;                                                // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity2;                                                // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity1;                                         // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity2;                                         // 0x0048(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Mass1;                                                    // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Mass2;                                                    // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LevelsetIndex;                                            // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndexMesh;                                        // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LevelsetIndexMesh;                                        // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GeometryCollectionCore.SolverBreakingData
// 0x0030
struct FSolverBreakingData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndexMesh;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GeometryCollectionCore.RecordedFrame
// 0x00B8
struct FRecordedFrame
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        TransformIndices;                                         // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        PreviousTransformIndices;                                 // 0x0020(0x0010) (ZeroConstructor)
	TArray<bool>                                       DisabledFlags;                                            // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FSolverCollisionData>                Collisions;                                               // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FSolverBreakingData>                 Breakings;                                                // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0060(0x0050) UNKNOWN PROPERTY: SetProperty GeometryCollectionCore.RecordedFrame.Trailings
	float                                              Timestamp;                                                // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct GeometryCollectionCore.RecordedTransformTrack
// 0x0010
struct FRecordedTransformTrack
{
	TArray<struct FRecordedFrame>                      Records;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct GeometryCollectionCore.SolverTrailingData
// 0x0030
struct FSolverTrailingData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndexMesh;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

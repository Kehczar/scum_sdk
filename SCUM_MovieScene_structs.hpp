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

// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t
{
	EMovieSceneKeyInterpolation__Auto = 0,
	None                           = 1,
	EMovieSceneKeyInterpolation__User = 2,
	neByteProperty�IntProperty  = 3,
	EMovieSceneKeyInterpolation__Break = 4,
	ByteProperty�IntProperty    = 5,
	EMovieSceneKeyInterpolation__Linear = 6,
	ByteProperty                   = 7,
	EMovieSceneKeyInterpolation__Constant = 8,
	teProperty�IntProperty        = 9,
	EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX = 10,
	Property�IntProperty          = 11,
	None01                         = 12,
	None02                         = 13,
	None03                         = 14,
	None04                         = 15,
	None05                         = 16,
	None06                         = 17,
	None07                         = 18,
	None08                         = 19,
	None09                         = 20,
	None10                         = 21,
	None11                         = 22,
	None12                         = 23
};


// Enum MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8_t
{
	EMovieSceneBlendType__Invalid  = 0,
	None                           = 1,
	EMovieSceneBlendType__Absolute = 2,
	neByteProperty�IntProperty  = 3,
	EMovieSceneBlendType__Additive = 4,
	ByteProperty�IntProperty    = 5,
	EMovieSceneBlendType__Relative = 6,
	teProperty�IntProperty        = 7,
	EMovieSceneBlendType__EMovieSceneBlendType_MAX = 8,
	Property�IntProperty          = 9,
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


// Enum MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8_t
{
	EMovieSceneBuiltInEasing__Linear = 0,
	None                           = 1,
	EMovieSceneBuiltInEasing__SinIn = 2,
	neByteProperty�IntProperty  = 3,
	EMovieSceneBuiltInEasing__SinOut = 4,
	ByteProperty�IntProperty    = 5,
	EMovieSceneBuiltInEasing__SinInOut = 6,
	ByteProperty                   = 7,
	EMovieSceneBuiltInEasing__QuadIn = 8,
	teProperty�IntProperty        = 9,
	EMovieSceneBuiltInEasing__QuadOut = 10,
	Property�IntProperty          = 11,
	EMovieSceneBuiltInEasing__QuadInOut = 12,
	operty�IntProperty            = 13,
	EMovieSceneBuiltInEasing__CubicIn = 14,
	erty�IntProperty              = 15,
	EMovieSceneBuiltInEasing__CubicOut = 16,
	ty�IntProperty                = 17,
	EMovieSceneBuiltInEasing__CubicInOut = 18,
	[Error]                        = 19,
	EMovieSceneBuiltInEasing__QuartIn = 20,
	IntProperty                    = 21,
	EMovieSceneBuiltInEasing__QuartOut = 22,
	tProperty                      = 23
};


// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t
{
	EEvaluationMethod__Static      = 0,
	None                           = 1,
	EEvaluationMethod__Swept       = 2,
	neByteProperty�IntProperty  = 3,
	EEvaluationMethod__EEvaluationMethod_MAX = 4,
	ByteProperty�IntProperty    = 5,
	None01                         = 6,
	None02                         = 7,
	None03                         = 8,
	None04                         = 9,
	None05                         = 10,
	None06                         = 11,
	None07                         = 12,
	None08                         = 13,
	None09                         = 14,
	None10                         = 15,
	None11                         = 16,
	None12                         = 17,
	None13                         = 18,
	None14                         = 19
};


// Enum MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8_t
{
	EUpdateClockSource__Tick       = 0,
	None                           = 1,
	EUpdateClockSource__Platform   = 2,
	neByteProperty�IntProperty  = 3,
	EUpdateClockSource__Audio      = 4,
	ByteProperty�IntProperty    = 5,
	EUpdateClockSource__Timecode   = 6,
	ByteProperty                   = 7,
	EUpdateClockSource__EUpdateClockSource_MAX = 8,
	teProperty�IntProperty        = 9,
	None01                         = 10,
	None02                         = 11,
	None03                         = 12,
	None04                         = 13,
	None05                         = 14,
	neByteProperty�IntProperty01 = 15,
	None06                         = 16,
	None07                         = 17,
	None08                         = 18,
	None09                         = 19,
	None10                         = 20,
	None11                         = 21,
	None12                         = 22,
	None13                         = 23
};


// Enum MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8_t
{
	EMovieSceneEvaluationType__FrameLocked = 0,
	None                           = 1,
	EMovieSceneEvaluationType__WithSubFrames = 2,
	neByteProperty�IntProperty  = 3,
	EMovieSceneEvaluationType__EMovieSceneEvaluationType_MAX = 4,
	ByteProperty�IntProperty    = 5,
	None01                         = 6,
	None02                         = 7,
	None03                         = 8,
	None04                         = 9,
	None05                         = 10,
	None06                         = 11,
	None07                         = 12,
	None08                         = 13,
	None09                         = 14,
	None10                         = 15,
	None11                         = 16,
	None12                         = 17,
	None13                         = 18,
	None14                         = 19
};


// Enum MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8_t
{
	EMovieScenePlayerStatus__Stopped = 0,
	None                           = 1,
	EMovieScenePlayerStatus__Playing = 2,
	neByteProperty�IntProperty  = 3,
	EMovieScenePlayerStatus__Recording = 4,
	ByteProperty�IntProperty    = 5,
	EMovieScenePlayerStatus__Scrubbing = 6,
	ByteProperty                   = 7
};


// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8_t
{
	EMovieSceneObjectBindingSpace__Local = 0,
	None                           = 1,
	EMovieSceneObjectBindingSpace__Root = 2,
	neByteProperty�IntProperty  = 3,
	EMovieSceneObjectBindingSpace__EMovieSceneObjectBindingSpace_MAX = 4,
	ByteProperty�IntProperty    = 5,
	None01                         = 6,
	None02                         = 7,
	None03                         = 8,
	None04                         = 9,
	None05                         = 10,
	None06                         = 11,
	None07                         = 12,
	None08                         = 13,
	None09                         = 14,
	None10                         = 15,
	None11                         = 16,
	None12                         = 17,
	None13                         = 18,
	None14                         = 19
};


// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t
{
	EMovieSceneCompletionMode__KeepState = 0,
	None                           = 1,
	EMovieSceneCompletionMode__RestoreState = 2,
	neByteProperty�IntProperty  = 3,
	EMovieSceneCompletionMode__ProjectDefault = 4,
	ByteProperty�IntProperty    = 5,
	EMovieSceneCompletionMode__EMovieSceneCompletionMode_MAX = 6,
	ByteProperty                   = 7,
	EMovieSceneBuiltInEasing__QuadIn = 8,
	teProperty�IntProperty        = 9,
	EMovieSceneBuiltInEasing__QuadOut = 10,
	Property�IntProperty          = 11,
	EMovieSceneBuiltInEasing__QuadInOut = 12,
	operty�IntProperty            = 13,
	EMovieSceneBuiltInEasing__CubicIn = 14,
	erty�IntProperty              = 15,
	EMovieSceneBuiltInEasing__CubicOut = 16,
	ty�IntProperty                = 17,
	EMovieSceneBuiltInEasing__CubicInOut = 18,
	[Error]                        = 19,
	EMovieSceneBuiltInEasing__QuartIn = 20,
	IntProperty                    = 21,
	EMovieSceneBuiltInEasing__QuartOut = 22,
	tProperty                      = 23
};


// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t
{
	ESectionEvaluationFlags__None  = 0,
	None                           = 1,
	ESectionEvaluationFlags__PreRoll = 2,
	neByteProperty�IntProperty  = 3,
	ESectionEvaluationFlags__PostRoll = 4,
	ByteProperty�IntProperty    = 5,
	ESectionEvaluationFlags__ESectionEvaluationFlags_MAX = 6,
	ByteProperty                   = 7,
	None01                         = 8,
	None02                         = 9,
	None03                         = 10,
	None04                         = 11,
	None05                         = 12,
	None06                         = 13,
	None07                         = 14,
	None08                         = 15,
	None09                         = 16,
	None10                         = 17,
	None11                         = 18,
	None12                         = 19,
	None13                         = 20,
	None14                         = 21,
	None15                         = 22,
	None16                         = 23
};


// Enum MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8_t
{
	EUpdatePositionMethod__Play    = 0,
	None                           = 1,
	EUpdatePositionMethod__Jump    = 2,
	neByteProperty�IntProperty  = 3,
	EUpdatePositionMethod__Scrub   = 4,
	ByteProperty�IntProperty    = 5,
	EUpdatePositionMethod__EUpdatePositionMethod_MAX = 6,
	ByteProperty                   = 7,
	None01                         = 8,
	None02                         = 9,
	None03                         = 10,
	None04                         = 11,
	None05                         = 12,
	None06                         = 13,
	None07                         = 14,
	None08                         = 15,
	None09                         = 16,
	None10                         = 17,
	None11                         = 18,
	None12                         = 19,
	None13                         = 20,
	None14                         = 21,
	None15                         = 22,
	None16                         = 23
};


// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t
{
	ESpawnOwnership__InnerSequence = 0,
	None                           = 1,
	ESpawnOwnership__MasterSequence = 2,
	neByteProperty�IntProperty  = 3,
	ESpawnOwnership__External      = 4,
	ByteProperty�IntProperty    = 5,
	ESpawnOwnership__ESpawnOwnership_MAX = 6,
	ByteProperty                   = 7,
	None01                         = 8,
	None02                         = 9,
	None03                         = 10,
	None04                         = 11,
	None05                         = 12,
	None06                         = 13,
	None07                         = 14,
	None08                         = 15,
	None09                         = 16,
	None10                         = 17,
	None11                         = 18,
	None12                         = 19,
	None13                         = 20,
	None14                         = 21,
	None15                         = 22,
	None16                         = 23
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// 0x0002
struct FMovieSceneSectionEvalOptions
{
	bool                                               bCanEditCompletionMode;                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EMovieSceneCompletionMode                          CompletionMode;                                           // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEasingSettings
// 0x0038
struct FMovieSceneEasingSettings
{
	int                                                AutoEaseInDuration;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoEaseOutDuration;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UMovieSceneEasingFunction>  EaseIn;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bManualEaseIn;                                            // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                ManualEaseInDuration;                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UMovieSceneEasingFunction>  EaseOut;                                                  // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bManualEaseOut;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                ManualEaseOutDuration;                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneFrameRange
// 0x0010
struct FMovieSceneFrameRange
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MovieScene.OptionalMovieSceneBlendType
// 0x0002
struct FOptionalMovieSceneBlendType
{
	EMovieSceneBlendType                               BlendType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// 0x0004
struct FMovieSceneTrackEvalOptions
{
	unsigned char                                      bCanEvaluateNearestSection : 1;                           // 0x0000(0x0001)
	unsigned char                                      bEvalNearestSection : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bEvaluateInPreroll : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bEvaluateInPostroll : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bEvaluateNearestSection : 1;                              // 0x0000(0x0001) (Deprecated)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackIdentifier
// 0x0004
struct FMovieSceneTrackIdentifier
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSegment
// 0x0058
struct FMovieSceneSegment
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrackSegments
// 0x0020
struct FMovieSceneEvaluationTrackSegments
{
	TArray<int>                                        SegmentIdentifierToIndex;                                 // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneSegment>                  SortedSegments;                                           // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.SectionEvaluationDataTree
// 0x0060
struct FSectionEvaluationDataTree
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// 0x0088
struct FMovieSceneEvalTemplatePtr
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// 0x0038
struct FMovieSceneTrackImplementationPtr
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrack
// 0x00F8
struct FMovieSceneEvaluationTrack
{
	struct FGuid                                       ObjectBindingId;                                          // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           EvaluationPriority;                                       // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData)
	EEvaluationMethod                                  EvaluationMethod;                                         // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
	struct FMovieSceneEvaluationTrackSegments          Segments;                                                 // 0x0018(0x0020)
	class UMovieSceneTrack*                            SourceTrack;                                              // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSectionEvaluationDataTree                  EvaluationTree;                                           // 0x0040(0x0060)
	TArray<struct FMovieSceneEvalTemplatePtr>          ChildTemplates;                                           // 0x00A0(0x0010) (ZeroConstructor)
	struct FMovieSceneTrackImplementationPtr           TrackTemplate;                                            // 0x00B0(0x0038)
	struct FName                                       EvaluationGroup;                                          // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEvaluateInPreroll : 1;                                   // 0x00F0(0x0001)
	unsigned char                                      bEvaluateInPostroll : 1;                                  // 0x00F0(0x0001)
	unsigned char                                      bTearDownPriority : 1;                                    // 0x00F0(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// 0x000C
struct FMovieSceneEvaluationGroupLUTIndex
{
	int                                                LUTOffset;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumInitPtrs;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumEvalPtrs;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSequenceID
// 0x0004
struct FMovieSceneSequenceID
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// 0x0008
struct FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSequenceID                       SequenceID;                                               // 0x0000(0x0004)
	struct FMovieSceneTrackIdentifier                  TrackIdentifier;                                          // 0x0004(0x0004)
};

// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
// 0x0004
struct FMovieSceneSegmentIdentifier
{
	int                                                IdentifierIndex;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// 0x0004 (0x000C - 0x0008)
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSegmentIdentifier                SegmentID;                                                // 0x0008(0x0004)
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroup
// 0x0020
struct FMovieSceneEvaluationGroup
{
	TArray<struct FMovieSceneEvaluationGroupLUTIndex>  LUTIndices;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT;                                            // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneEvaluationKey
// 0x000C
struct FMovieSceneEvaluationKey
{
	struct FMovieSceneSequenceID                       SequenceID;                                               // 0x0000(0x0004)
	struct FMovieSceneTrackIdentifier                  TrackIdentifier;                                          // 0x0004(0x0004)
	uint32_t                                           SectionIndex;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
// 0x0010
struct FMovieSceneOrderedEvaluationKey
{
	struct FMovieSceneEvaluationKey                    Key;                                                      // 0x0000(0x000C)
	uint16_t                                           SetupIndex;                                               // 0x000C(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           TearDownIndex;                                            // 0x000E(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// 0x0070
struct FMovieSceneEvaluationMetaData
{
	TArray<struct FMovieSceneSequenceID>               ActiveSequences;                                          // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneOrderedEvaluationKey>     ActiveEntities;                                           // 0x0010(0x0010) (ZeroConstructor)
	TMap<struct FMovieSceneSequenceID, uint32_t>       SubTemplateSerialNumbers;                                 // 0x0020(0x0050) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneEvaluationField
// 0x0030
struct FMovieSceneEvaluationField
{
	TArray<struct FMovieSceneFrameRange>               Ranges;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneEvaluationGroup>          Groups;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneEvaluationMetaData>       MetaData;                                                 // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneSequenceTransform
// 0x000C
struct FMovieSceneSequenceTransform
{
	float                                              TimeScale;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FFrameTime                                  Offset;                                                   // 0x0004(0x0008)
};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
// 0x0018
struct FMovieSceneSequenceInstanceDataPtr
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSubSequenceData
// 0x00A8
struct FMovieSceneSubSequenceData
{
	struct FSoftObjectPath                             Sequence;                                                 // 0x0000(0x0018) (ZeroConstructor)
	struct FMovieSceneSequenceTransform                RootToSequenceTransform;                                  // 0x0018(0x000C)
	struct FFrameRate                                  TickResolution;                                           // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneSequenceID                       DeterministicSequenceID;                                  // 0x002C(0x0004)
	struct FMovieSceneFrameRange                       PlayRange;                                                // 0x0030(0x0010)
	struct FMovieSceneFrameRange                       PreRollRange;                                             // 0x0040(0x0010)
	struct FMovieSceneFrameRange                       PostRollRange;                                            // 0x0050(0x0010)
	int                                                HierarchicalBias;                                         // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FMovieSceneSequenceInstanceDataPtr          InstanceData;                                             // 0x0068(0x0018)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
	struct FGuid                                       SubSectionSignature;                                      // 0x0088(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneSequenceTransform                OuterToInnerTransform;                                    // 0x0098(0x000C)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// 0x0018
struct FMovieSceneSequenceHierarchyNode
{
	struct FMovieSceneSequenceID                       ParentID;                                                 // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FMovieSceneSequenceID>               Children;                                                 // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// 0x00A0
struct FMovieSceneSequenceHierarchy
{
	TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences;                                             // 0x0000(0x0050) (ZeroConstructor)
	TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy;                                                // 0x0050(0x0050) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
// 0x0004
struct FMovieSceneEvaluationTemplateSerialNumber
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
// 0x00A8
struct FMovieSceneTemplateGenerationLedger
{
	struct FMovieSceneTrackIdentifier                  LastTrackIdentifier;                                      // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;                          // 0x0008(0x0050) (ZeroConstructor)
	TMap<struct FGuid, struct FMovieSceneFrameRange>   SubSectionRanges;                                         // 0x0058(0x0050) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneTrackFieldData
// 0x0060
struct FMovieSceneTrackFieldData
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSubSectionFieldData
// 0x0060
struct FMovieSceneSubSectionFieldData
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// 0x02F0
struct FMovieSceneEvaluationTemplate
{
	TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks;                                                   // 0x0000(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) MISSED OFFSET
	struct FMovieSceneEvaluationField                  EvaluationField;                                          // 0x00A0(0x0030)
	struct FMovieSceneSequenceHierarchy                Hierarchy;                                                // 0x00D0(0x00A0)
	struct FGuid                                       SequenceSignature;                                        // 0x0170(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneEvaluationTemplateSerialNumber   TemplateSerialNumber;                                     // 0x0180(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	struct FMovieSceneTemplateGenerationLedger         TemplateLedger;                                           // 0x0188(0x00A8)
	struct FMovieSceneTrackFieldData                   TrackFieldData;                                           // 0x0230(0x0060)
	struct FMovieSceneSubSectionFieldData              SubSectionFieldData;                                      // 0x0290(0x0060)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
// 0x0018
struct FMovieSceneObjectBindingID
{
	int                                                SequenceID;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	EMovieSceneObjectBindingSpace                      Space;                                                    // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FGuid                                       Guid;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
// 0x0004
struct FMovieSceneSequenceLoopCount
{
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// 0x0014
struct FMovieSceneSequencePlaybackSettings
{
	unsigned char                                      bAutoPlay : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FMovieSceneSequenceLoopCount                LoopCount;                                                // 0x0004(0x0004) (Edit, BlueprintVisible)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRandomStartTime : 1;                                     // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bRestoreState : 1;                                        // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDisableMovementInput : 1;                                // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDisableLookAtInput : 1;                                  // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bHidePlayer : 1;                                          // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bHideHud : 1;                                             // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDisableCameraCuts : 1;                                   // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPauseAtEnd : 1;                                          // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
// 0x0308
struct FMovieSceneRootEvaluationTemplateInstance
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	TMap<struct FMovieSceneSequenceID, class UObject*> DirectorInstances;                                        // 0x0018(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x2A0];                                     // 0x0068(0x02A0) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
// 0x0010
struct FMovieSceneSequenceReplProperties
{
	struct FFrameTime                                  LastKnownPosition;                                        // 0x0000(0x0008)
	TEnumAsByte<EMovieScenePlayerStatus>               LastKnownStatus;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                LastKnownNumLoops;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSpawnable
// 0x0090
struct FMovieSceneSpawnable
{
	struct FTransform                                  SpawnTransform;                                           // 0x0000(0x0030) (Edit, IsPlainOldData)
	TArray<struct FName>                               Tags;                                                     // 0x0030(0x0010) (Edit, ZeroConstructor)
	bool                                               bContinuouslyRespawn;                                     // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FGuid                                       Guid;                                                     // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0058(0x0010) (ZeroConstructor)
	class UObject*                                     ObjectTemplate;                                           // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGuid>                               ChildPossessables;                                        // 0x0070(0x0010) (ZeroConstructor)
	ESpawnOwnership                                    Ownership;                                                // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	struct FName                                       LevelName;                                                // 0x0084(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieScenePossessable
// 0x0048
struct FMovieScenePossessable
{
	TArray<struct FName>                               Tags;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       Guid;                                                     // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0020(0x0010) (ZeroConstructor)
	class UClass*                                      PossessedObjectClass;                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ParentGuid;                                               // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneBinding
// 0x0030
struct FMovieSceneBinding
{
	struct FGuid                                       ObjectGuid;                                               // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BindingName;                                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    Tracks;                                                   // 0x0020(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingIDs
// 0x0010
struct FMovieSceneObjectBindingIDs
{
	TArray<struct FMovieSceneObjectBindingID>          IDs;                                                      // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneMarkedFrame
// 0x0018
struct FMovieSceneMarkedFrame
{
	struct FFrameNumber                                FrameNumber;                                              // 0x0000(0x0004) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Label;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// 0x0024
struct FMovieSceneBindingOverrideData
{
	struct FMovieSceneObjectBindingID                  ObjectBindingId;                                          // 0x0000(0x0018) (Edit)
	TWeakObjectPtr<class UObject>                      Object;                                                   // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverridesDefault;                                        // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSectionParameters
// 0x0018
struct FMovieSceneSectionParameters
{
	struct FFrameNumber                                StartFrameOffset;                                         // 0x0000(0x0004) (Edit, BlueprintVisible)
	float                                              TimeScale;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HierarchicalBias;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // 0x000C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PrerollTime;                                              // 0x0010(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PostrollTime;                                             // 0x0014(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// 0x0010
struct FMovieSceneEvalTemplateBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvalTemplate
// 0x0010 (0x0020 - 0x0010)
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
	EMovieSceneCompletionMode                          CompletionMode;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UMovieSceneSection>           SourceSectionPtr;                                         // 0x0014(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSectionGroup
// 0x0010
struct FMovieSceneSectionGroup
{
	TArray<TWeakObjectPtr<class UMovieSceneSection>>   Sections;                                                 // 0x0000(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneTrackLabels
// 0x0010
struct FMovieSceneTrackLabels
{
	TArray<struct FString>                             Strings;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneExpansionState
// 0x0001
struct FMovieSceneExpansionState
{
	bool                                               bExpanded;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEditorData
// 0x00F0
struct FMovieSceneEditorData
{
	TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates;                                          // 0x0000(0x0050) (ZeroConstructor)
	TArray<struct FString>                             PinnedNodes;                                              // 0x0050(0x0010) (ZeroConstructor)
	double                                             ViewStart;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             ViewEnd;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             WorkStart;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             WorkEnd;                                                  // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0080(0x0050) UNKNOWN PROPERTY: SetProperty MovieScene.MovieSceneEditorData.MarkedFrames
	struct FFloatRange                                 WorkingRange;                                             // 0x00D0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FFloatRange                                 ViewRange;                                                // 0x00E0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneTimecodeSource
// 0x0018
struct FMovieSceneTimecodeSource
{
	struct FTimecode                                   Timecode;                                                 // 0x0000(0x0014) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                DeltaFrame;                                               // 0x0014(0x0004) (Edit, EditConst)
};

// ScriptStruct MovieScene.MovieSceneChannel
// 0x0008
struct FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneBoolChannel
// 0x0088 (0x0090 - 0x0008)
struct FMovieSceneBoolChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	bool                                               DefaultValue;                                             // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasDefaultValue;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	TArray<bool>                                       Values;                                                   // 0x0020(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0030(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneByteChannel
// 0x0090 (0x0098 - 0x0008)
struct FMovieSceneByteChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      DefaultValue;                                             // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasDefaultValue;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	TArray<unsigned char>                              Values;                                                   // 0x0020(0x0010) (ZeroConstructor)
	class UEnum*                                       Enum;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0038(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneKeyHandleMap
// 0x0000 (0x0060 - 0x0060)
struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
{

};

// ScriptStruct MovieScene.MovieSceneEmptyStruct
// 0x0001
struct FMovieSceneEmptyStruct
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationOperand
// 0x0014
struct FMovieSceneEvaluationOperand
{
	struct FGuid                                       ObjectBindingId;                                          // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FMovieSceneSequenceID                       SequenceID;                                               // 0x0010(0x0004)
};

// ScriptStruct MovieScene.MovieSceneSubSectionData
// 0x001C
struct FMovieSceneSubSectionData
{
	TWeakObjectPtr<class UMovieSceneSubSection>        Section;                                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       ObjectBindingId;                                          // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	ESectionEvaluationFlags                            Flags;                                                    // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTangentData
// 0x0014
struct FMovieSceneTangentData
{
	float                                              ArriveTangent;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangent;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                        // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ArriveTangentWeight;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangentWeight;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneFloatValue
// 0x001C
struct FMovieSceneFloatValue
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                              // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FMovieSceneTangentData                      Tangent;                                                  // 0x0008(0x0014) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneFloatChannel
// 0x0098 (0x00A0 - 0x0008)
struct FMovieSceneFloatChannel : public FMovieSceneChannel
{
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                       // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneFloatValue>               Values;                                                   // 0x0020(0x0010) (ZeroConstructor)
	float                                              DefaultValue;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasDefaultValue;                                         // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FMovieSceneKeyHandleMap                     KeyHandles;                                               // 0x0038(0x0060) (Transient)
	struct FFrameRate                                  TickResolution;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneIntegerChannel
// 0x0088 (0x0090 - 0x0008)
struct FMovieSceneIntegerChannel : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	int                                                DefaultValue;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasDefaultValue;                                         // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	TArray<int>                                        Values;                                                   // 0x0020(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0030(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneKeyStruct
// 0x0008
struct FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
// 0x0020 (0x0028 - 0x0008)
struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
{
	struct FFrameNumber                                Time;                                                     // 0x0008(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x000C(0x001C) MISSED OFFSET
};

// ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
// 0x0050
struct FGeneratedMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
// 0x0030
struct FMovieSceneObjectPathChannelKeyValue
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty MovieScene.MovieSceneObjectPathChannelKeyValue.SoftPtr
	class UObject*                                     HardPtr;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannel
// 0x00B8 (0x00C0 - 0x0008)
struct FMovieSceneObjectPathChannel : public FMovieSceneChannel
{
	class UClass*                                      PropertyClass;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneObjectPathChannelKeyValue> Values;                                                   // 0x0020(0x0010) (ZeroConstructor)
	struct FMovieSceneObjectPathChannelKeyValue        DefaultValue;                                             // 0x0030(0x0030)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0060(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieScenePropertySectionData
// 0x0028
struct FMovieScenePropertySectionData
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PropertyPath;                                             // 0x0008(0x0010) (ZeroConstructor)
	struct FName                                       FunctionName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NotifyFunctionName;                                       // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// 0x0028 (0x0048 - 0x0020)
struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                             // 0x0020(0x0028)
};

// ScriptStruct MovieScene.SectionEvaluationData
// 0x000C
struct FSectionEvaluationData
{
	int                                                ImplIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                ForcedTime;                                               // 0x0004(0x0004)
	ESectionEvaluationFlags                            Flags;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
// 0x0008
struct FMovieSceneSequenceInstanceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
// 0x0000 (0x0020 - 0x0020)
struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
{
	EMovieSceneCompletionMode                          CompletionMode;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UMovieSceneSection>           SourceSectionPtr;                                         // 0x0014(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
// 0x0004
struct FMovieSceneTrackDisplayOptions
{
	unsigned char                                      bShowVerticalFrames : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackImplementation
// 0x0000 (0x0010 - 0x0010)
struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

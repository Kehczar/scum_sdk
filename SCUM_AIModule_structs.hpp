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

// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t
{
	EPathFollowingResult__Success  = 0,
	None                           = 1,
	EPathFollowingResult__Blocked  = 2,
	neByteProperty‘IntProperty  = 3,
	EPathFollowingResult__OffPath  = 4,
	ByteProperty‘IntProperty    = 5,
	EPathFollowingResult__Aborted  = 6,
	ByteProperty                   = 7,
	EPathFollowingResult__Skipped_DEPRECATED = 8,
	teProperty‘IntProperty        = 9,
	EPathFollowingResult__Invalid  = 10,
	Property‘IntProperty          = 11,
	EPathFollowingResult__EPathFollowingResult_MAX = 12,
	operty‘IntProperty            = 13,
	None01                         = 14,
	None02                         = 15,
	None03                         = 16,
	None04                         = 17,
	None05                         = 18,
	None06                         = 19,
	None07                         = 20,
	None08                         = 21,
	None09                         = 22,
	None10                         = 23,
	None11                         = 24,
	None12                         = 25,
	None13                         = 26,
	None14                         = 27
};


// Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t
{
	EEnvQueryStatus__Processing    = 0,
	None                           = 1,
	EEnvQueryStatus__Success       = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvQueryStatus__Failed        = 4,
	ByteProperty‘IntProperty    = 5,
	EEnvQueryStatus__Aborted       = 6,
	ByteProperty                   = 7,
	EEnvQueryStatus__OwnerLost     = 8,
	teProperty‘IntProperty        = 9,
	EEnvQueryStatus__MissingParam  = 10,
	Property‘IntProperty          = 11,
	EEnvQueryStatus__EEnvQueryStatus_MAX = 12,
	operty‘IntProperty            = 13,
	None01                         = 14,
	None02                         = 15,
	None03                         = 16,
	None04                         = 17,
	None05                         = 18,
	None06                         = 19,
	None07                         = 20,
	None08                         = 21,
	None09                         = 22,
	None10                         = 23,
	None11                         = 24,
	None12                         = 25,
	None13                         = 26,
	None14                         = 27
};


// Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8_t
{
	EAISenseNotifyType__OnEveryPerception = 0,
	None                           = 1,
	EAISenseNotifyType__OnPerceptionChange = 2,
	neByteProperty‘IntProperty  = 3,
	EAISenseNotifyType__EAISenseNotifyType_MAX = 4,
	ByteProperty‘IntProperty    = 5,
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


// Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8_t
{
	EAITaskPriority__Lowest        = 0,
	None                           = 1,
	EAITaskPriority__Low           = 2,
	ArrayProperty                  = 3,
	EAITaskPriority__AutonomousAI  = 4,
	egateProperty                  = 5,
	EAITaskPriority__High          = 6,
	rty                            = 7,
	EAITaskPriority__Ultimate      = 8,
	[Error]                        = 9,
	EAITaskPriority__EAITaskPriority_MAX = 10,
	Sphere                         = 11,
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


// Enum AIModule.EGenericAICheck
enum class EGenericAICheck : uint8_t
{
	EGenericAICheck__Less          = 0,
	None                           = 1,
	EGenericAICheck__LessOrEqual   = 2,
	neByteProperty‘IntProperty  = 3,
	EGenericAICheck__Equal         = 4,
	ByteProperty‘IntProperty    = 5,
	EGenericAICheck__NotEqual      = 6,
	ByteProperty                   = 7
};


// Enum AIModule.EAILockSource
enum class EAILockSource : uint8_t
{
	EAILockSource__Animation       = 0,
	None                           = 1,
	EAILockSource__Logic           = 2,
	neByteProperty‘IntProperty  = 3,
	EAILockSource__Script          = 4
};


// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t
{
	EAIRequestPriority__SoftScript = 0,
	None                           = 1,
	EAIRequestPriority__Logic      = 2,
	neByteProperty‘IntProperty  = 3,
	EAIRequestPriority__HardScript = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8_t
{
	EPawnActionEventType__Invalid  = 0,
	None                           = 1,
	EPawnActionEventType__FailedToStart = 2,
	neByteProperty‘IntProperty  = 3,
	EPawnActionEventType__InstantAbort = 4,
	ByteProperty‘IntProperty    = 5,
	EPawnActionEventType__FinishedAborting = 6,
	ByteProperty                   = 7,
	EPawnActionEventType__FinishedExecution = 8,
	teProperty‘IntProperty        = 9,
	EPawnActionEventType__Push     = 10,
	Property‘IntProperty          = 11,
	EPawnActionEventType__EPawnActionEventType_MAX = 12,
	operty‘IntProperty            = 13,
	None01                         = 14,
	None02                         = 15,
	None03                         = 16,
	None04                         = 17,
	None05                         = 18,
	None06                         = 19,
	None07                         = 20,
	None08                         = 21,
	None09                         = 22,
	None10                         = 23,
	None11                         = 24,
	None12                         = 25,
	None13                         = 26,
	None14                         = 27
};


// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8_t
{
	EPawnActionResult__NotStarted  = 0,
	None                           = 1,
	EPawnActionResult__InProgress  = 2,
	neByteProperty‘IntProperty  = 3,
	EPawnActionResult__Success     = 4,
	ByteProperty‘IntProperty    = 5,
	EPawnActionResult__Failed      = 6,
	ByteProperty                   = 7,
	EPawnActionResult__Aborted     = 8,
	teProperty‘IntProperty        = 9,
	EPawnActionResult__EPawnActionResult_MAX = 10,
	Property‘IntProperty          = 11,
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


// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8_t
{
	EPawnActionAbortState__NeverStarted = 0,
	None                           = 1,
	EPawnActionAbortState__NotBeingAborted = 2,
	neByteProperty‘IntProperty  = 3,
	EPawnActionAbortState__MarkPendingAbort = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum AIModule.FAIDistanceType
enum class EFAIDistanceType : uint8_t
{
	FAIDistanceType__Distance3D    = 0,
	None                           = 1,
	FAIDistanceType__Distance2D    = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t
{
	EAIOptionFlag__Default         = 0,
	None                           = 1,
	EAIOptionFlag__Enable          = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t
{
	EBTFlowAbortMode__None         = 0,
	None                           = 1,
	EBTFlowAbortMode__LowerPriority = 2,
	neByteProperty‘IntProperty  = 3,
	EBTFlowAbortMode__Self         = 4,
	ByteProperty‘IntProperty    = 5,
	EBTFlowAbortMode__Both         = 6,
	ByteProperty                   = 7,
	EBTFlowAbortMode__EBTFlowAbortMode_MAX = 8,
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


// Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8_t
{
	EBTNodeResult__Succeeded       = 0,
	None                           = 1,
	EBTNodeResult__Failed          = 2,
	neByteProperty‘IntProperty  = 3,
	EBTNodeResult__Aborted         = 4,
	ByteProperty‘IntProperty    = 5,
	EBTNodeResult__InProgress      = 6,
	ByteProperty                   = 7,
	EBTNodeResult__EBTNodeResult_MAX = 8,
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


// Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8_t
{
	ETextKeyOperation__Equal       = 0,
	None                           = 1,
	ETextKeyOperation__NotEqual    = 2,
	neByteProperty‘IntProperty  = 3,
	ETextKeyOperation__Contain     = 4,
	ByteProperty‘IntProperty    = 5,
	ETextKeyOperation__NotContain  = 6,
	ByteProperty                   = 7,
	ETextKeyOperation__ETextKeyOperation_MAX = 8,
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


// Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t
{
	EArithmeticKeyOperation__Equal = 0,
	None                           = 1,
	EArithmeticKeyOperation__NotEqual = 2,
	neByteProperty‘IntProperty  = 3,
	EArithmeticKeyOperation__Less  = 4,
	ByteProperty‘IntProperty    = 5,
	EArithmeticKeyOperation__LessOrEqual = 6,
	ByteProperty                   = 7,
	EArithmeticKeyOperation__Greater = 8,
	teProperty‘IntProperty        = 9,
	EArithmeticKeyOperation__GreaterOrEqual = 10,
	Property‘IntProperty          = 11,
	EArithmeticKeyOperation__EArithmeticKeyOperation_MAX = 12,
	operty‘IntProperty            = 13,
	None01                         = 14,
	None02                         = 15,
	None03                         = 16,
	None04                         = 17,
	None05                         = 18,
	None06                         = 19,
	None07                         = 20,
	None08                         = 21,
	None09                         = 22,
	None10                         = 23,
	None11                         = 24,
	None12                         = 25,
	None13                         = 26,
	None14                         = 27
};


// Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t
{
	EBasicKeyOperation__Set        = 0,
	None                           = 1,
	EBasicKeyOperation__NotSet     = 2,
	neByteProperty‘IntProperty  = 3,
	EBasicKeyOperation__EBasicKeyOperation_MAX = 4,
	ByteProperty‘IntProperty    = 5,
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


// Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8_t
{
	EBTParallelMode__AbortBackground = 0,
	None                           = 1,
	EBTParallelMode__WaitForBackground = 2,
	neByteProperty‘IntProperty  = 3,
	EBTParallelMode__EBTParallelMode_MAX = 4,
	ByteProperty‘IntProperty    = 5,
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


// Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t
{
	EBTDecoratorLogic__Invalid     = 0,
	None                           = 1,
	EBTDecoratorLogic__Test        = 2,
	neByteProperty‘IntProperty  = 3,
	EBTDecoratorLogic__And         = 4,
	ByteProperty‘IntProperty    = 5,
	EBTDecoratorLogic__Or          = 6,
	ByteProperty                   = 7,
	EBTDecoratorLogic__Not         = 8,
	teProperty‘IntProperty        = 9,
	EBTDecoratorLogic__EBTDecoratorLogic_MAX = 10,
	Property‘IntProperty          = 11,
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


// Enum AIModule.EBTChildIndex
enum class EBTChildIndex : uint8_t
{
	EBTChildIndex__FirstNode       = 0,
	None                           = 1,
	EBTChildIndex__TaskNode        = 2,
	neByteProperty‘IntProperty  = 3,
	EBTChildIndex__EBTChildIndex_MAX = 4,
	ByteProperty‘IntProperty    = 5,
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


// Enum AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8_t
{
	EBTBlackboardRestart__ValueChange = 0,
	None                           = 1,
	EBTBlackboardRestart__ResultChange = 2,
	neByteProperty‘IntProperty  = 3,
	EBTBlackboardRestart__EBTBlackboardRestart_MAX = 4,
	ByteProperty‘IntProperty    = 5,
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


// Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t
{
	EBlackBoardEntryComparison__Equal = 0,
	None                           = 1,
	EBlackBoardEntryComparison__NotEqual = 2,
	neByteProperty‘IntProperty  = 3,
	EBlackBoardEntryComparison__EBlackBoardEntryComparison_MAX = 4,
	ByteProperty‘IntProperty    = 5,
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


// Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t
{
	EPathExistanceQueryType__NavmeshRaycast2D = 0,
	None                           = 1,
	EPathExistanceQueryType__HierarchicalQuery = 2,
	neByteProperty‘IntProperty  = 3,
	EPathExistanceQueryType__RegularPathFinding = 4,
	ByteProperty‘IntProperty    = 5,
	EPathExistanceQueryType__EPathExistanceQueryType_MAX = 6,
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


// Enum AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : uint8_t
{
	EPointOnCircleSpacingMethod__BySpaceBetween = 0,
	None                           = 1,
	EPointOnCircleSpacingMethod__ByNumberOfPoints = 2,
	neByteProperty‘IntProperty  = 3,
	EPointOnCircleSpacingMethod__EPointOnCircleSpacingMethod_MAX = 4,
	ByteProperty‘IntProperty    = 5,
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


// Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8_t
{
	EEQSNormalizationType__Absolute = 0,
	None                           = 1,
	EEQSNormalizationType__RelativeToScores = 2,
	neByteProperty‘IntProperty  = 3,
	EEQSNormalizationType__EEQSNormalizationType_MAX = 4,
	ByteProperty‘IntProperty    = 5,
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


// Enum AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8_t
{
	EEnvTestDistance__Distance3D   = 0,
	None                           = 1,
	EEnvTestDistance__Distance2D   = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvTestDistance__DistanceZ    = 4,
	ByteProperty‘IntProperty    = 5,
	EEnvTestDistance__DistanceAbsoluteZ = 6,
	ByteProperty                   = 7,
	EEnvTestDistance__EEnvTestDistance_MAX = 8,
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


// Enum AIModule.EEnvTestDot
enum class EEnvTestDot : uint8_t
{
	EEnvTestDot__Dot3D             = 0,
	None                           = 1,
	EEnvTestDot__Dot2D             = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvTestDot__EEnvTestDot_MAX   = 4,
	ByteProperty‘IntProperty    = 5,
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


// Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t
{
	EEnvTestPathfinding__PathExist = 0,
	None                           = 1,
	EEnvTestPathfinding__PathCost  = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvTestPathfinding__PathLength = 4,
	ByteProperty‘IntProperty    = 5,
	EEnvTestPathfinding__EEnvTestPathfinding_MAX = 6,
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


// Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t
{
	EEnvQueryTestClamping__None    = 0,
	None                           = 1,
	EEnvQueryTestClamping__SpecifiedValue = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvQueryTestClamping__FilterThreshold = 4,
	ByteProperty‘IntProperty    = 5,
	EEnvQueryTestClamping__EEnvQueryTestClamping_MAX = 6,
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


// Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8_t
{
	EEnvDirection__TwoPoints       = 0,
	None                           = 1,
	EEnvDirection__Rotation        = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvDirection__EEnvDirection_MAX = 4,
	ByteProperty‘IntProperty    = 5,
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


// Enum AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8_t
{
	EEnvOverlapShape__Box          = 0,
	None                           = 1,
	EEnvOverlapShape__Sphere       = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvOverlapShape__Capsule      = 4,
	ByteProperty‘IntProperty    = 5,
	EEnvOverlapShape__EEnvOverlapShape_MAX = 6,
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


// Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8_t
{
	EEnvTraceShape__Line           = 0,
	None                           = 1,
	EEnvTraceShape__Box            = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvTraceShape__Sphere         = 4,
	ByteProperty‘IntProperty    = 5,
	EEnvTraceShape__Capsule        = 6,
	ByteProperty                   = 7,
	EEnvTraceShape__EEnvTraceShape_MAX = 8,
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


// Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t
{
	EEnvQueryTrace__None           = 0,
	None                           = 1,
	EEnvQueryTrace__Navigation     = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvQueryTrace__Geometry       = 4,
	ByteProperty‘IntProperty    = 5,
	EEnvQueryTrace__NavigationOverLedges = 6,
	ByteProperty                   = 7,
	EEnvQueryTrace__EEnvQueryTrace_MAX = 8,
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


// Enum AIModule.EAIParamType
enum class EAIParamType : uint8_t
{
	EAIParamType__Float            = 0,
	None                           = 1,
	EAIParamType__Int              = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8_t
{
	EEnvQueryParam__Float          = 0,
	None                           = 1,
	EEnvQueryParam__Int            = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvQueryParam__Bool           = 4,
	ByteProperty‘IntProperty    = 5,
	EEnvQueryParam__EEnvQueryParam_MAX = 6,
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


// Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t
{
	EEnvQueryRunMode__SingleResult = 0,
	None                           = 1,
	EEnvQueryRunMode__RandomBest5Pct = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvQueryRunMode__RandomBest25Pct = 4,
	ByteProperty‘IntProperty    = 5,
	EEnvQueryRunMode__AllMatching  = 6,
	ByteProperty                   = 7,
	EEnvQueryRunMode__EEnvQueryRunMode_MAX = 8,
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


// Enum AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8_t
{
	EEnvTestScoreOperator__AverageScore = 0,
	None                           = 1,
	EEnvTestScoreOperator__MinScore = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvTestScoreOperator__MaxScore = 4,
	ByteProperty‘IntProperty    = 5,
	EEnvTestScoreOperator__Multiply = 6,
	ByteProperty                   = 7,
	EEnvTestScoreOperator__EEnvTestScoreOperator_MAX = 8,
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


// Enum AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8_t
{
	EEnvTestFilterOperator__AllPass = 0,
	None                           = 1,
	EEnvTestFilterOperator__AnyPass = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvTestFilterOperator__EEnvTestFilterOperator_MAX = 4,
	ByteProperty‘IntProperty    = 5,
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


// Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8_t
{
	EEnvTestCost__Low              = 0,
	None                           = 1,
	EEnvTestCost__Medium           = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvTestCost__High             = 4,
	ByteProperty‘IntProperty    = 5,
	EEnvTestCost__EEnvTestCost_MAX = 6,
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


// Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8_t
{
	EEnvTestWeight__None           = 0,
	None                           = 1,
	EEnvTestWeight__Square         = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvTestWeight__Inverse        = 4,
	ByteProperty‘IntProperty    = 5,
	EEnvTestWeight__Unused         = 6,
	ByteProperty                   = 7,
	EEnvTestWeight__Constant       = 8,
	teProperty‘IntProperty        = 9,
	EEnvTestWeight__Skip           = 10,
	Property‘IntProperty          = 11,
	EEnvTestWeight__EEnvTestWeight_MAX = 12,
	operty‘IntProperty            = 13,
	None01                         = 14,
	None02                         = 15,
	None03                         = 16,
	None04                         = 17,
	None05                         = 18,
	None06                         = 19,
	None07                         = 20,
	None08                         = 21,
	None09                         = 22,
	None10                         = 23,
	None11                         = 24,
	None12                         = 25,
	None13                         = 26,
	None14                         = 27
};


// Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t
{
	EEnvTestScoreEquation__Linear  = 0,
	None                           = 1,
	EEnvTestScoreEquation__Square  = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvTestScoreEquation__InverseLinear = 4,
	ByteProperty‘IntProperty    = 5,
	EEnvTestScoreEquation__SquareRoot = 6,
	ByteProperty                   = 7,
	EEnvTestScoreEquation__Constant = 8,
	teProperty‘IntProperty        = 9,
	EEnvTestScoreEquation__EEnvTestScoreEquation_MAX = 10,
	Property‘IntProperty          = 11,
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


// Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t
{
	EEnvTestFilterType__Minimum    = 0,
	None                           = 1,
	EEnvTestFilterType__Maximum    = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvTestFilterType__Range      = 4,
	ByteProperty‘IntProperty    = 5,
	EEnvTestFilterType__Match      = 6,
	ByteProperty                   = 7,
	EEnvTestFilterType__EEnvTestFilterType_MAX = 8,
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


// Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t
{
	EEnvTestPurpose__Filter        = 0,
	None                           = 1,
	EEnvTestPurpose__Score         = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvTestPurpose__FilterAndScore = 4,
	ByteProperty‘IntProperty    = 5,
	EEnvTestPurpose__EEnvTestPurpose_MAX = 6,
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


// Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8_t
{
	EEnvQueryHightlightMode__All   = 0,
	None                           = 1,
	EEnvQueryHightlightMode__Best5Pct = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvQueryHightlightMode__Best25Pct = 4,
	ByteProperty‘IntProperty    = 5,
	EEnvQueryHightlightMode__EEnvQueryHightlightMode_MAX = 6,
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


// Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8_t
{
	ETeamAttitude__Friendly        = 0,
	None                           = 1,
	ETeamAttitude__Neutral         = 2,
	neByteProperty‘IntProperty  = 3,
	ETeamAttitude__Hostile         = 4,
	ByteProperty‘IntProperty    = 5,
	ETeamAttitude__ETeamAttitude_MAX = 6,
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


// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t
{
	EPathFollowingRequestResult__Failed = 0,
	None                           = 1,
	EPathFollowingRequestResult__AlreadyAtGoal = 2,
	neByteProperty‘IntProperty  = 3,
	EPathFollowingRequestResult__RequestSuccessful = 4,
	ByteProperty‘IntProperty    = 5,
	EPathFollowingRequestResult__EPathFollowingRequestResult_MAX = 6,
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


// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t
{
	EPathFollowingAction__Error    = 0,
	None                           = 1,
	EPathFollowingAction__NoMove   = 2,
	neByteProperty‘IntProperty  = 3,
	EPathFollowingAction__DirectMove = 4,
	ByteProperty‘IntProperty    = 5,
	EPathFollowingAction__PartialPath = 6,
	ByteProperty                   = 7,
	EPathFollowingAction__PathToGoal = 8,
	teProperty‘IntProperty        = 9,
	EPathFollowingAction__EPathFollowingAction_MAX = 10,
	Property‘IntProperty          = 11,
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


// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t
{
	EPathFollowingStatus__Idle     = 0,
	None                           = 1,
	EPathFollowingStatus__Waiting  = 2,
	neByteProperty‘IntProperty  = 3,
	EPathFollowingStatus__Paused   = 4,
	ByteProperty‘IntProperty    = 5,
	EPathFollowingStatus__Moving   = 6,
	ByteProperty                   = 7,
	EPathFollowingStatus__EPathFollowingStatus_MAX = 8,
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


// Enum AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8_t
{
	EPawnActionFailHandling__RequireSuccess = 0,
	None                           = 1,
	EPawnActionFailHandling__IgnoreFailure = 2,
	neByteProperty‘IntProperty  = 3,
	EPawnActionFailHandling__EPawnActionFailHandling_MAX = 4,
	ByteProperty‘IntProperty    = 5,
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


// Enum AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8_t
{
	EPawnSubActionTriggeringPolicy__CopyBeforeTriggering = 0,
	None                           = 1,
	EPawnSubActionTriggeringPolicy__ReuseInstances = 2,
	neByteProperty‘IntProperty  = 3,
	EPawnSubActionTriggeringPolicy__EPawnSubActionTriggeringPolicy_MAX = 4,
	ByteProperty‘IntProperty    = 5,
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


// Enum AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8_t
{
	EPawnActionMoveMode__UsePathfinding = 0,
	None                           = 1,
	EPawnActionMoveMode__StraightLine = 2,
	neByteProperty‘IntProperty  = 3,
	EPawnActionMoveMode__EPawnActionMoveMode_MAX = 4,
	ByteProperty‘IntProperty    = 5,
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



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AIModule.AIDataProviderValue
// 0x0020
struct FAIDataProviderValue
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UProperty*                                   CachedProperty;                                           // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAIDataProvider*                             DataBinding;                                              // 0x0010(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       DataField;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AIDataProviderTypedValue
// 0x0008 (0x0028 - 0x0020)
struct FAIDataProviderTypedValue : public FAIDataProviderValue
{
	class UClass*                                      PropertyType;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AIDataProviderBoolValue
// 0x0008 (0x0030 - 0x0028)
struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue
{
	bool                                               DefaultValue;                                             // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct AIModule.AIDataProviderFloatValue
// 0x0008 (0x0030 - 0x0028)
struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue
{
	float                                              DefaultValue;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AIModule.AIRequestID
// 0x0004
struct FAIRequestID
{
	uint32_t                                           RequestID;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AIStimulus
// 0x003C
struct FAIStimulus
{
	float                                              Age;                                                      // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExpirationAge;                                            // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StimulusLocation;                                         // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReceiverLocation;                                         // 0x0018(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // 0x0024(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x002C(0x000C) MISSED OFFSET
	unsigned char                                      UnknownData01 : 1;                                        // 0x0038(0x0001)
	unsigned char                                      bSuccessfullySensed : 1;                                  // 0x0038(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
};

// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
// 0x0020
struct FActorPerceptionBlueprintInfo
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIStimulus>                         LastSensedStimuli;                                        // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      bIsHostile : 1;                                           // 0x0018(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct AIModule.AIDamageEvent
// 0x0030
struct FAIDamageEvent
{
	float                                              Amount;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AActor*                                      DamagedActor;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AINoiseEvent
// 0x0030
struct FAINoiseEvent
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FVector                                     NoiseLocation;                                            // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Loudness;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct AIModule.AIPredictionEvent
// 0x0018
struct FAIPredictionEvent
{
	class AActor*                                      Requestor;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      PredictedActor;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AIModule.AITeamStimulusEvent
// 0x0038
struct FAITeamStimulusEvent
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	class AActor*                                      Broadcaster;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Enemy;                                                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AITouchEvent
// 0x0020
struct FAITouchEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class AActor*                                      TouchReceiver;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.AISenseAffiliationFilter
// 0x0004
struct FAISenseAffiliationFilter
{
	unsigned char                                      bDetectEnemies : 1;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bDetectNeutrals : 1;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bDetectFriendlies : 1;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct AIModule.AIMoveRequest
// 0x0040
struct FAIMoveRequest
{
	class AActor*                                      GoalActor;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AIModule.BTDecoratorLogic
// 0x0004
struct FBTDecoratorLogic
{
	TEnumAsByte<EBTDecoratorLogic>                     Operation;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           Number;                                                   // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.BehaviorTreeTemplateInfo
// 0x0018
struct FBehaviorTreeTemplateInfo
{
	class UBehaviorTree*                               Asset;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBTCompositeNode*                            Template;                                                 // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AIModule.BlackboardEntry
// 0x0018
struct FBlackboardEntry
{
	struct FName                                       EntryName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlackboardKeyType*                          KeyType;                                                  // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bInstanceSynced : 1;                                      // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AIModule.BTCompositeChild
// 0x0030
struct FBTCompositeChild
{
	class UBTCompositeNode*                            ChildComposite;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBTTaskNode*                                 ChildTask;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UBTDecorator*>                        Decorators;                                               // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FBTDecoratorLogic>                   DecoratorOps;                                             // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct AIModule.BlackboardKeySelector
// 0x0028
struct FBlackboardKeySelector
{
	TArray<class UBlackboardKeyType*>                  AllowedTypes;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	struct FName                                       SelectedKeyName;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      SelectedKeyType;                                          // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)
	unsigned char                                      SelectedKeyID;                                            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	unsigned char                                      bNoneIsAllowedValue : 1;                                  // 0x0024(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct AIModule.AIDynamicParam
// 0x0038
struct FAIDynamicParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EAIParamType                                       ParamType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      BBKey;                                                    // 0x0010(0x0028) (Edit, BlueprintVisible)
};

// ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
// 0x0048
struct FEQSParametrizedQueryExecutionRequest
{
	class UEnvQuery*                                   QueryTemplate;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FBlackboardKeySelector                      EQSQueryBlackboardKey;                                    // 0x0018(0x0028) (Edit)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	unsigned char                                      bUseBBKeyForQueryTemplate : 1;                            // 0x0044(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
};

// ScriptStruct AIModule.IntervalCountdown
// 0x0008
struct FIntervalCountdown
{
	float                                              Interval;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct AIModule.EnvNamedValue
// 0x0010
struct FEnvNamedValue
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAIParamType                                       ParamType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.CrowdAvoidanceConfig
// 0x001C
struct FCrowdAvoidanceConfig
{
	float                                              VelocityBias;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DesiredVelocityWeight;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurrentVelocityWeight;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SideBiasWeight;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactTimeWeight;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactTimeRange;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CustomPatternIdx;                                         // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AdaptiveDivisions;                                        // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AdaptiveRings;                                            // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AdaptiveDepth;                                            // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
// 0x0020
struct FCrowdAvoidanceSamplingPattern
{
	TArray<float>                                      Angles;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      Radii;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AIModule.EnvTraceData
// 0x0030
struct FEnvTraceData
{
	int                                                VersionNum;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      NavigationFilter;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectDown;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectUp;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtentX;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtentY;                                                  // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtentZ;                                                  // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostProjectionVerticalOffset;                             // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                             // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     SerializedChannel;                                        // 0x0029(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvTraceShape>                        TraceShape;                                               // 0x002A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvQueryTrace>                        TraceMode;                                                // 0x002B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTraceComplex : 1;                                        // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bOnlyBlockingHits : 1;                                    // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanTraceOnNavMesh : 1;                                   // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanTraceOnGeometry : 1;                                  // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanDisableTrace : 1;                                     // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanProjectDown : 1;                                      // 0x002C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct AIModule.AIDataProviderIntValue
// 0x0008 (0x0030 - 0x0028)
struct FAIDataProviderIntValue : public FAIDataProviderTypedValue
{
	int                                                DefaultValue;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct AIModule.EnvDirection
// 0x0020
struct FEnvDirection
{
	class UClass*                                      LineFrom;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LineTo;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Rotation;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvDirection>                         DirMode;                                                  // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct AIModule.EnvQueryInstanceCache
// 0x0178
struct FEnvQueryInstanceCache
{
	class UEnvQuery*                                   Template;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x170];                                     // 0x0008(0x0170) MISSED OFFSET
};

// ScriptStruct AIModule.EnvOverlapData
// 0x0020
struct FEnvOverlapData
{
	float                                              ExtentX;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtentY;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtentZ;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ShapeOffset;                                              // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                           // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEnvOverlapShape>                      OverlapShape;                                             // 0x0019(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	unsigned char                                      bOnlyBlockingHits : 1;                                    // 0x001C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bOverlapComplex : 1;                                      // 0x001C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bSkipOverlapQuerier : 1;                                  // 0x001C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct AIModule.PawnActionStack
// 0x0008
struct FPawnActionStack
{
	class UPawnAction*                                 TopAction;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.PawnActionEvent
// 0x0018
struct FPawnActionEvent
{
	class UPawnAction*                                 Action;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AIModule.AIDataProviderStructValue
// 0x0010 (0x0030 - 0x0020)
struct FAIDataProviderStructValue : public FAIDataProviderValue
{
	class UProperty*                                   CachedProperty;                                           // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAIDataProvider*                             DataBinding;                                              // 0x0010(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       DataField;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct AIModule.AISightEvent
// 0x0018
struct FAISightEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      SeenActor;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Observer;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AIModule.EnvQueryRequest
// 0x0068
struct FEnvQueryRequest
{
	class UEnvQuery*                                   QueryTemplate;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     Owner;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWorld*                                      World;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0018(0x0050) MISSED OFFSET
};

// ScriptStruct AIModule.EnvQueryResult
// 0x0040
struct FEnvQueryResult
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	class UClass*                                      ItemType;                                                 // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0018(0x0014) MISSED OFFSET
	int                                                OptionIndex;                                              // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                QueryID;                                                  // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
};

// ScriptStruct AIModule.GenericTeamId
// 0x0001
struct FGenericTeamId
{
	unsigned char                                      TeamID;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

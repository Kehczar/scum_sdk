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

// Enum Engine.ETextGender
enum class ETextGender : uint8_t
{
	ETextGender__Masculine         = 0,
	None                           = 1,
	ETextGender__Feminine          = 2,
	neByteProperty‘IntProperty  = 3,
	ETextGender__Neuter            = 4,
	ByteProperty‘IntProperty    = 5,
	ETextGender__ETextGender_MAX   = 6,
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


// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8_t
{
	EFormatArgumentType__Int       = 0,
	None                           = 1,
	EFormatArgumentType__UInt      = 2,
	neByteProperty‘IntProperty  = 3,
	EFormatArgumentType__Float     = 4,
	ByteProperty‘IntProperty    = 5,
	EFormatArgumentType__Double    = 6,
	ByteProperty                   = 7,
	EFormatArgumentType__Text      = 8,
	teProperty‘IntProperty        = 9,
	EFormatArgumentType__Gender    = 10,
	Property‘IntProperty          = 11,
	EFormatArgumentType__EFormatArgumentType_MAX = 12,
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


// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t
{
	EEndPlayReason__Destroyed      = 0,
	None                           = 1,
	EEndPlayReason__LevelTransition = 2,
	neByteProperty‘IntProperty  = 3,
	EEndPlayReason__EndPlayInEditor = 4,
	ByteProperty‘IntProperty    = 5,
	EEndPlayReason__RemovedFromWorld = 6,
	ByteProperty                   = 7,
	EEndPlayReason__Quit           = 8,
	teProperty‘IntProperty        = 9,
	EEndPlayReason__EEndPlayReason_MAX = 10,
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


// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PrePhysics                  = 0,
	None                           = 1,
	TG_StartPhysics                = 2,
	neByteProperty‘IntProperty  = 3,
	TG_DuringPhysics               = 4,
	ByteProperty‘IntProperty    = 5,
	TG_EndPhysics                  = 6,
	ByteProperty                   = 7,
	TG_PostPhysics                 = 8,
	teProperty‘IntProperty        = 9
};


// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t
{
	EComponentCreationMethod__Native = 0,
	None                           = 1,
	EComponentCreationMethod__SimpleConstructionScript = 2,
	neByteProperty‘IntProperty  = 3,
	EComponentCreationMethod__UserConstructionScript = 4,
	ByteProperty‘IntProperty    = 5,
	EComponentCreationMethod__Instance = 6,
	ByteProperty                   = 7,
	EComponentCreationMethod__EComponentCreationMethod_MAX = 8,
	teProperty‘IntProperty        = 9,
	None01                         = 10,
	None02                         = 11,
	None03                         = 12,
	None04                         = 13,
	None05                         = 14,
	None06                         = 15,
	None07                         = 16,
	teProperty‘IntProperty01      = 17,
	None08                         = 18,
	None09                         = 19,
	None10                         = 20,
	None11                         = 21,
	None12                         = 22,
	None13                         = 23
};


// Enum Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8_t
{
	ETemperatureSeverityType__Unknown = 0,
	None                           = 1,
	ETemperatureSeverityType__Good = 2,
	neByteProperty‘IntProperty  = 3,
	ETemperatureSeverityType__Bad  = 4,
	ByteProperty‘IntProperty    = 5,
	ETemperatureSeverityType__Serious = 6,
	ByteProperty                   = 7,
	ETemperatureSeverityType__Critical = 8,
	teProperty‘IntProperty        = 9,
	ETemperatureSeverityType__NumSeverities = 10,
	Property‘IntProperty          = 11,
	ETemperatureSeverityType__ETemperatureSeverityType_MAX = 12,
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


// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8_t
{
	EPlaneConstraintAxisSetting__Custom = 0,
	None                           = 1,
	EPlaneConstraintAxisSetting__X = 2,
	neByteProperty‘IntProperty  = 3,
	EPlaneConstraintAxisSetting__Y = 4,
	ByteProperty‘IntProperty    = 5,
	EPlaneConstraintAxisSetting__Z = 6,
	ByteProperty                   = 7,
	EPlaneConstraintAxisSetting__UseGlobalPhysicsSetting = 8,
	teProperty‘IntProperty        = 9,
	EPlaneConstraintAxisSetting__EPlaneConstraintAxisSetting_MAX = 10,
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


// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8_t
{
	EInterpToBehaviourType__OneShot = 0,
	None                           = 1,
	EInterpToBehaviourType__OneShot_Reverse = 2,
	neByteProperty‘IntProperty  = 3,
	EInterpToBehaviourType__Loop_Reset = 4,
	ByteProperty‘IntProperty    = 5,
	EInterpToBehaviourType__PingPong = 6,
	ByteProperty                   = 7,
	EInterpToBehaviourType__EInterpToBehaviourType_MAX = 8,
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


// Enum Engine.ETeleportType
enum class ETeleportType : uint8_t
{
	ETeleportType__None            = 0,
	None                           = 1,
	ETeleportType__TeleportPhysics = 2,
	neByteProperty‘IntProperty  = 3,
	ETeleportType__ResetPhysics    = 4,
	ByteProperty‘IntProperty    = 5,
	ETeleportType__ETeleportType_MAX = 6,
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


// Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t
{
	PIDT_None                      = 0,
	None                           = 1,
	PIDT_Int                       = 2,
	neByteProperty‘IntProperty  = 3,
	PIDT_Float                     = 4,
	ByteProperty‘IntProperty    = 5,
	PIDT_String                    = 6
};


// Enum Engine.EMovementMode
enum class EMovementMode : uint8_t
{
	MOVE_None                      = 0,
	None                           = 1,
	MOVE_Walking                   = 2,
	neByteProperty‘IntProperty  = 3,
	MOVE_NavWalking                = 4,
	ByteProperty‘IntProperty    = 5,
	MOVE_Falling                   = 6,
	ByteProperty                   = 7
};


// Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8_t
{
	ENetworkFailure__NetDriverAlreadyExists = 0,
	None                           = 1,
	ENetworkFailure__NetDriverCreateFailure = 2,
	neByteProperty‘IntProperty  = 3,
	ENetworkFailure__NetDriverListenFailure = 4,
	ByteProperty‘IntProperty    = 5,
	ENetworkFailure__ConnectionLost = 6,
	ByteProperty                   = 7,
	ENetworkFailure__ConnectionTimeout = 8,
	teProperty‘IntProperty        = 9,
	ENetworkFailure__FailureReceived = 10,
	Property‘IntProperty          = 11
};


// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8_t
{
	ETravelFailure__NoLevel        = 0,
	None                           = 1,
	ETravelFailure__LoadMapFailure = 2,
	neByteProperty‘IntProperty  = 3,
	ETravelFailure__InvalidURL     = 4,
	ByteProperty‘IntProperty    = 5,
	ETravelFailure__PackageMissing = 6,
	ByteProperty                   = 7,
	ETravelFailure__PackageVersion = 8,
	teProperty‘IntProperty        = 9,
	ETravelFailure__NoDownload     = 10,
	Property‘IntProperty          = 11,
	ETravelFailure__TravelFailure  = 12,
	operty‘IntProperty            = 13,
	ETravelFailure__CheatCommands  = 14,
	erty‘IntProperty              = 15,
	ETravelFailure__PendingNetGameCreateFailure = 16,
	ty‘IntProperty                = 17,
	ETravelFailure__CloudSaveFailure = 18,
	[Error]                        = 19,
	ETravelFailure__ServerTravelFailure = 20,
	IntProperty                    = 21,
	ETravelFailure__ClientTravelFailure = 22,
	tProperty                      = 23,
	ETravelFailure__ETravelFailure_MAX = 24,
	roperty                        = 25,
	None01                         = 26,
	None02                         = 27,
	None03                         = 28,
	None04                         = 29,
	ty_2_Floor_Building_07_Vintage_TV_Standing_T_TV_Vintage_Standing_DefaultMaterial_Base = 30,
	None05                         = 31,
	None06                         = 32,
	None07                         = 33,
	None08                         = 34,
	None09                         = 35
};


// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8_t
{
	EScreenOrientation__Unknown    = 0,
	None                           = 1,
	EScreenOrientation__Portrait   = 2,
	neByteProperty‘IntProperty  = 3,
	EScreenOrientation__PortraitUpsideDown = 4,
	ByteProperty‘IntProperty    = 5,
	EScreenOrientation__LandscapeLeft = 6,
	ByteProperty                   = 7,
	EScreenOrientation__LandscapeRight = 8,
	teProperty‘IntProperty        = 9,
	EScreenOrientation__FaceUp     = 10,
	Property‘IntProperty          = 11,
	EScreenOrientation__FaceDown   = 12,
	operty‘IntProperty            = 13,
	EScreenOrientation__EScreenOrientation_MAX = 14,
	erty‘IntProperty              = 15,
	None01                         = 16,
	None02                         = 17,
	None03                         = 18,
	None04                         = 19,
	None05                         = 20,
	None06                         = 21,
	None07                         = 22,
	None08                         = 23,
	None09                         = 24,
	None10                         = 25,
	None11                         = 26,
	None12                         = 27
};


// Enum Engine.EApplicationState
enum class EApplicationState : uint8_t
{
	EApplicationState__Unknown     = 0,
	None                           = 1,
	EApplicationState__Inactive    = 2,
	neByteProperty‘IntProperty  = 3,
	EApplicationState__Background  = 4,
	ByteProperty‘IntProperty    = 5,
	EApplicationState__Active      = 6,
	ByteProperty                   = 7,
	EApplicationState__EApplicationState_MAX = 8,
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


// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1               = 0,
	None                           = 1,
	ObjectTypeQuery2               = 2,
	neByteProperty‘IntProperty  = 3,
	ObjectTypeQuery3               = 4,
	ByteProperty‘IntProperty    = 5,
	ObjectTypeQuery4               = 6,
	ByteProperty                   = 7,
	ObjectTypeQuery5               = 8,
	teProperty‘IntProperty        = 9,
	ObjectTypeQuery6               = 10,
	Property‘IntProperty          = 11,
	ObjectTypeQuery7               = 12,
	operty‘IntProperty            = 13,
	ObjectTypeQuery8               = 14,
	erty‘IntProperty              = 15,
	ObjectTypeQuery9               = 16,
	ty‘IntProperty                = 17,
	ObjectTypeQuery10              = 18,
	[Error]                        = 19,
	ObjectTypeQuery11              = 20,
	IntProperty                    = 21,
	ObjectTypeQuery12              = 22,
	tProperty                      = 23,
	ObjectTypeQuery13              = 24,
	roperty                        = 25,
	ObjectTypeQuery14              = 26,
	perty                          = 27,
	ObjectTypeQuery15              = 28,
	rty                            = 29,
	ObjectTypeQuery16              = 30,
	y                              = 31,
	ObjectTypeQuery17              = 32,
	
                              = 33,
	ObjectTypeQuery18              = 34,
	BoolProperty                   = 35
};


// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8_t
{
	EDrawDebugTrace__None          = 0,
	None                           = 1,
	EDrawDebugTrace__ForOneFrame   = 2,
	neByteProperty‘IntProperty  = 3,
	EDrawDebugTrace__ForDuration   = 4,
	ByteProperty‘IntProperty    = 5,
	EDrawDebugTrace__Persistent    = 6,
	ByteProperty                   = 7,
	EDrawDebugTrace__EDrawDebugTrace_MAX = 8,
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


// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1                = 0,
	None                           = 1,
	TraceTypeQuery2                = 2,
	neByteProperty‘IntProperty  = 3,
	TraceTypeQuery3                = 4,
	ByteProperty‘IntProperty    = 5,
	TraceTypeQuery4                = 6,
	ByteProperty                   = 7,
	TraceTypeQuery5                = 8,
	teProperty‘IntProperty        = 9,
	TraceTypeQuery6                = 10,
	Property‘IntProperty          = 11,
	TraceTypeQuery7                = 12,
	operty‘IntProperty            = 13,
	TraceTypeQuery8                = 14,
	erty‘IntProperty              = 15,
	TraceTypeQuery9                = 16,
	ty‘IntProperty                = 17,
	TraceTypeQuery10               = 18,
	[Error]                        = 19,
	TraceTypeQuery11               = 20,
	IntProperty                    = 21,
	TraceTypeQuery12               = 22,
	tProperty                      = 23,
	TraceTypeQuery13               = 24,
	roperty                        = 25,
	TraceTypeQuery14               = 26,
	perty                          = 27,
	TraceTypeQuery15               = 28,
	rty                            = 29,
	TraceTypeQuery16               = 30,
	y                              = 31,
	TraceTypeQuery17               = 32,
	
                              = 33,
	TraceTypeQuery18               = 34,
	BoolProperty                   = 35
};


// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8_t
{
	EMoveComponentAction__Move     = 0,
	None                           = 1,
	EMoveComponentAction__Stop     = 2,
	neByteProperty‘IntProperty  = 3,
	EMoveComponentAction__Return   = 4,
	ByteProperty‘IntProperty    = 5,
	EMoveComponentAction__EMoveComponentAction_MAX = 6,
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


// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8_t
{
	EQuitPreference__Quit          = 0,
	None                           = 1,
	EQuitPreference__Background    = 2,
	neByteProperty‘IntProperty  = 3,
	EQuitPreference__EQuitPreference_MAX = 4,
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


// Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8_t
{
	RTS_World                      = 0,
	None                           = 1,
	RTS_Actor                      = 2,
	neByteProperty‘IntProperty  = 3,
	RTS_Component                  = 4,
	ByteProperty‘IntProperty    = 5,
	RTS_ParentBoneSpace            = 6,
	ByteProperty                   = 7,
	RTS_MAX                        = 8,
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


// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8_t
{
	EAttachLocation__KeepRelativeOffset = 0,
	None                           = 1,
	EAttachLocation__KeepWorldPosition = 2,
	neByteProperty‘IntProperty  = 3,
	EAttachLocation__SnapToTarget  = 4,
	ByteProperty‘IntProperty    = 5,
	EAttachLocation__SnapToTargetIncludingScale = 6,
	ByteProperty                   = 7,
	EAttachLocation__EAttachLocation_MAX = 8,
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


// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8_t
{
	EAttachmentRule__KeepRelative  = 0,
	None                           = 1,
	EAttachmentRule__KeepWorld     = 2,
	neByteProperty‘IntProperty  = 3,
	EAttachmentRule__SnapToTarget  = 4,
	ByteProperty‘IntProperty    = 5,
	EAttachmentRule__EAttachmentRule_MAX = 6,
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


// Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8_t
{
	EDetachmentRule__KeepRelative  = 0,
	None                           = 1,
	EDetachmentRule__KeepWorld     = 2,
	neByteProperty‘IntProperty  = 3,
	EDetachmentRule__EDetachmentRule_MAX = 4,
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


// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8_t
{
	EComponentMobility__Static     = 0,
	None                           = 1,
	EComponentMobility__Stationary = 2,
	neByteProperty‘IntProperty  = 3,
	EComponentMobility__Movable    = 4,
	ByteProperty‘IntProperty    = 5,
	EComponentMobility__EComponentMobility_MAX = 6,
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


// Enum Engine.EDetailMode
enum class EDetailMode : uint8_t
{
	DM_Low                         = 0,
	None                           = 1,
	DM_Medium                      = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.ENetRole
enum class ENetRole : uint8_t
{
	ROLE_None                      = 0,
	None                           = 1,
	ROLE_SimulatedProxy            = 2,
	neByteProperty‘IntProperty  = 3,
	ROLE_AutonomousProxy           = 4
};


// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8_t
{
	DORM_Never                     = 0,
	None                           = 1,
	DORM_Awake                     = 2,
	neByteProperty‘IntProperty  = 3,
	DORM_DormantAll                = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8_t
{
	EAutoReceiveInput__Disabled    = 0,
	None                           = 1,
	EAutoReceiveInput__Player0     = 2,
	neByteProperty‘IntProperty  = 3,
	EAutoReceiveInput__Player1     = 4,
	ByteProperty‘IntProperty    = 5,
	EAutoReceiveInput__Player2     = 6,
	ByteProperty                   = 7,
	EAutoReceiveInput__Player3     = 8,
	teProperty‘IntProperty        = 9
};


// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
	ESpawnActorCollisionHandlingMethod__Undefined = 0,
	None                           = 1,
	ESpawnActorCollisionHandlingMethod__AlwaysSpawn = 2,
	neByteProperty‘IntProperty  = 3,
	ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButAlwaysSpawn = 4,
	ByteProperty‘IntProperty    = 5,
	ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButDontSpawnIfColliding = 6,
	ByteProperty                   = 7,
	ESpawnActorCollisionHandlingMethod__DontSpawnIfColliding = 8,
	teProperty‘IntProperty        = 9,
	ESpawnActorCollisionHandlingMethod__ESpawnActorCollisionHandlingMethod_MAX = 10,
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


// Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8_t
{
	ERotatorQuantization__ByteComponents = 0,
	None                           = 1,
	ERotatorQuantization__ShortComponents = 2,
	neByteProperty‘IntProperty  = 3,
	ERotatorQuantization__ERotatorQuantization_MAX = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapControllerLEDPattern__Clock03 = 6,
	ByteProperty                   = 7,
	EMagicLeapControllerLEDPattern__Clock04 = 8,
	teProperty‘IntProperty        = 9,
	EMagicLeapControllerLEDPattern__Clock05 = 10,
	Property‘IntProperty          = 11,
	EMagicLeapControllerLEDPattern__Clock06 = 12,
	operty‘IntProperty            = 13,
	EMagicLeapControllerLEDPattern__Clock07 = 14,
	erty‘IntProperty              = 15,
	EMagicLeapControllerLEDPattern__Clock08 = 16,
	ty‘IntProperty                = 17,
	EMagicLeapControllerLEDPattern__Clock09 = 18,
	[Error]                        = 19
};


// Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8_t
{
	EVectorQuantization__RoundWholeNumber = 0,
	None                           = 1,
	EVectorQuantization__RoundOneDecimal = 2,
	neByteProperty‘IntProperty  = 3,
	EVectorQuantization__RoundTwoDecimals = 4,
	ByteProperty‘IntProperty    = 5,
	EVectorQuantization__EVectorQuantization_MAX = 6,
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


// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8_t
{
	EActorUpdateOverlapsMethod__UseConfigDefault = 0,
	None                           = 1,
	EActorUpdateOverlapsMethod__AlwaysUpdate = 2,
	neByteProperty‘IntProperty  = 3,
	EActorUpdateOverlapsMethod__OnlyUpdateMovable = 4,
	ByteProperty‘IntProperty    = 5,
	EActorUpdateOverlapsMethod__NeverUpdate = 6,
	ByteProperty                   = 7,
	EActorUpdateOverlapsMethod__EActorUpdateOverlapsMethod_MAX = 8,
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


// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8_t
{
	ECameraAnimPlaySpace__CameraLocal = 0,
	None                           = 1,
	ECameraAnimPlaySpace__World    = 2,
	neByteProperty‘IntProperty  = 3,
	ECameraAnimPlaySpace__UserDefined = 4,
	ByteProperty‘IntProperty    = 5,
	ECameraAnimPlaySpace__ECameraAnimPlaySpace_MAX = 6,
	ByteProperty                   = 7,
	None01                         = 8,
	None02                         = 9,
	None03                         = 10,
	None04                         = 11,
	None05                         = 12,
	None06                         = 13,
	None07                         = 14,
	Property‘IntProperty          = 15,
	None08                         = 16,
	None09                         = 17,
	None10                         = 18,
	None11                         = 19,
	None12                         = 20,
	teProperty‘IntProperty        = 21,
	None13                         = 22,
	None14                         = 23
};


// Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                 = 0,
	None                           = 1,
	VTBlend_Cubic                  = 2,
	neByteProperty‘IntProperty  = 3,
	VTBlend_EaseIn                 = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum Engine.ETravelType
enum class ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	None                           = 1,
	TRAVEL_Partial                 = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8_t
{
	ECC_WorldStatic                = 0,
	None                           = 1,
	ECC_WorldDynamic               = 2,
	neByteProperty‘IntProperty  = 3,
	ECC_Pawn                       = 4,
	ByteProperty‘IntProperty    = 5,
	ECC_Visibility                 = 6,
	ByteProperty                   = 7,
	ECC_Camera                     = 8,
	teProperty‘IntProperty        = 9,
	ECC_PhysicsBody                = 10,
	Property‘IntProperty          = 11,
	ECC_Vehicle                    = 12,
	operty‘IntProperty            = 13,
	ECC_Destructible               = 14,
	erty‘IntProperty              = 15,
	ECC_EngineTraceChannel1        = 16,
	ty‘IntProperty                = 17,
	ECC_EngineTraceChannel2        = 18,
	[Error]                        = 19,
	ECC_EngineTraceChannel3        = 20,
	IntProperty                    = 21,
	ECC_EngineTraceChannel4        = 22,
	tProperty                      = 23,
	ECC_EngineTraceChannel5        = 24,
	roperty                        = 25,
	ECC_EngineTraceChannel6        = 26,
	perty                          = 27,
	ECC_GameTraceChannel1          = 28,
	rty                            = 29,
	ECC_GameTraceChannel2          = 30,
	y                              = 31,
	ECC_GameTraceChannel3          = 32,
	
                              = 33,
	ECC_GameTraceChannel4          = 34,
	BoolProperty                   = 35
};


// Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8_t
{
	EControllerAnalogStick__CAS_LeftStick = 0,
	None                           = 1,
	EControllerAnalogStick__CAS_RightStick = 2
};


// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t
{
	EDynamicForceFeedbackAction__Start = 0,
	None                           = 1,
	EDynamicForceFeedbackAction__Update = 2,
	neByteProperty‘IntProperty  = 3,
	EDynamicForceFeedbackAction__Stop = 4,
	ByteProperty‘IntProperty    = 5,
	EDynamicForceFeedbackAction__EDynamicForceFeedbackAction_MAX = 6,
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


// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8_t
{
	EMouseLockMode__DoNotLock      = 0,
	None                           = 1,
	EMouseLockMode__LockOnCapture  = 2,
	neByteProperty‘IntProperty  = 3,
	EMouseLockMode__LockAlways     = 4,
	ByteProperty‘IntProperty    = 5,
	EMouseLockMode__LockInFullscreen = 6,
	ByteProperty                   = 7,
	EMouseLockMode__EMouseLockMode_MAX = 8,
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


// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8_t
{
	EWindowTitleBarMode__Overlay   = 0,
	None                           = 1,
	EWindowTitleBarMode__VerticalBox = 2,
	neByteProperty‘IntProperty  = 3,
	EWindowTitleBarMode__EWindowTitleBarMode_MAX = 4,
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


// Enum Engine.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	None                           = 1,
	IE_Released                    = 2,
	neByteProperty‘IntProperty  = 3,
	IE_Repeat                      = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8_t
{
	EAutoPossessAI__Disabled       = 0,
	None                           = 1,
	EAutoPossessAI__PlacedInWorld  = 2,
	neByteProperty‘IntProperty  = 3,
	EAutoPossessAI__Spawned        = 4,
	ByteProperty‘IntProperty    = 5,
	EAutoPossessAI__PlacedInWorldOrSpawned = 6,
	ByteProperty                   = 7,
	EAutoPossessAI__EAutoPossessAI_MAX = 8,
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


// Enum Engine.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                   = 0,
	None                           = 1,
	RIF_Linear                     = 2
};


// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8_t
{
	ECollisionEnabled__NoCollision = 0,
	None                           = 1,
	ECollisionEnabled__QueryOnly   = 2,
	neByteProperty‘IntProperty  = 3,
	ECollisionEnabled__PhysicsOnly = 4,
	ByteProperty‘IntProperty    = 5,
	ECollisionEnabled__QueryAndPhysics = 6,
	ByteProperty                   = 7,
	ECollisionEnabled__ECollisionEnabled_MAX = 8,
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
	teProperty‘IntProperty01      = 21,
	None12                         = 22,
	None13                         = 23
};


// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	None                           = 1,
	ECR_Overlap                    = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default          = 0,
	None                           = 1,
	WalkableSlope_Increase         = 2,
	neByteProperty‘IntProperty  = 3,
	WalkableSlope_Decrease         = 4
};


// Enum Engine.EDOFMode
enum class EDOFMode : uint8_t
{
	EDOFMode__Default              = 0,
	None                           = 1,
	EDOFMode__SixDOF               = 2,
	neByteProperty‘IntProperty  = 3,
	EDOFMode__YZPlane              = 4,
	ByteProperty‘IntProperty    = 5,
	EDOFMode__XZPlane              = 6,
	ByteProperty                   = 7,
	EDOFMode__XYPlane              = 8,
	teProperty‘IntProperty        = 9,
	EDOFMode__CustomPlane          = 10,
	Property‘IntProperty          = 11,
	EDOFMode__None                 = 12,
	operty‘IntProperty            = 13,
	EDOFMode__EDOFMode_MAX         = 14,
	erty‘IntProperty              = 15,
	None01                         = 16,
	None02                         = 17,
	None03                         = 18,
	None04                         = 19,
	None05                         = 20,
	None06                         = 21,
	None07                         = 22,
	None08                         = 23,
	None09                         = 24,
	None10                         = 25,
	None11                         = 26,
	None12                         = 27
};


// Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8_t
{
	ERendererStencilMask__ERSM_Default = 0,
	None                           = 1,
	ERendererStencilMask__ERSM     = 2,
	neByteProperty‘IntProperty  = 3,
	ERendererStencilMask__ERSM01   = 4,
	ByteProperty‘IntProperty    = 5,
	ERendererStencilMask__ERSM02   = 6,
	ByteProperty                   = 7,
	ERendererStencilMask__ERSM03   = 8,
	teProperty‘IntProperty        = 9,
	ERendererStencilMask__ERSM04   = 10,
	Property‘IntProperty          = 11,
	ERendererStencilMask__ERSM05   = 12,
	operty‘IntProperty            = 13,
	ERendererStencilMask__ERSM06   = 14,
	erty‘IntProperty              = 15,
	ERendererStencilMask__ERSM07   = 16,
	ty‘IntProperty                = 17,
	ERendererStencilMask__ERSM08   = 18,
	[Error]                        = 19,
	ERendererStencilMask__ERSM_MAX = 20,
	IntProperty                    = 21,
	nt16PropertyBInt64Property    = 22,
	[Error]01                      = 23,
	y                              = 24,
	UInt64Property                 = 25,
	[Error]02                      = 26,
	erty_CylinderÿBoxSphereBounds = 27,
	MapProperty                    = 28,
	ect                            = 29,
	or»CoreUObject                = 30,
	t64Property                    = 31
};


// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8_t
{
	ESleepFamily__Normal           = 0,
	None                           = 1,
	ESleepFamily__Sensitive        = 2,
	neByteProperty‘IntProperty  = 3,
	ESleepFamily__Custom           = 4,
	ByteProperty‘IntProperty    = 5,
	ESleepFamily__ESleepFamily_MAX = 6,
	ByteProperty                   = 7,
	None01                         = 8,
	None02                         = 9,
	None03                         = 10,
	None04                         = 11,
	None05                         = 12,
	ByteProperty‘IntProperty01  = 13,
	None06                         = 14,
	None07                         = 15,
	None08                         = 16,
	None09                         = 17,
	None10                         = 18,
	None11                         = 19,
	None12                         = 20,
	None13                         = 21,
	None14                         = 22,
	None15                         = 23
};


// Enum Engine.ERuntimeVirtualTextureMainPassType
enum class ERuntimeVirtualTextureMainPassType : uint8_t
{
	ERuntimeVirtualTextureMainPassType__Never = 0,
	None                           = 1,
	ERuntimeVirtualTextureMainPassType__Exclusive = 2,
	neByteProperty‘IntProperty  = 3,
	ERuntimeVirtualTextureMainPassType__Always = 4,
	ByteProperty‘IntProperty    = 5,
	ERuntimeVirtualTextureMainPassType__ERuntimeVirtualTextureMainPassType_MAX = 6,
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


// Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8_t
{
	ECB_No                         = 0,
	None                           = 1,
	ECB_Yes                        = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8_t
{
	EHasCustomNavigableGeometry__No = 0,
	None                           = 1,
	EHasCustomNavigableGeometry__Yes = 2,
	neByteProperty‘IntProperty  = 3,
	EHasCustomNavigableGeometry__EvenIfNotCollidable = 4,
	ByteProperty‘IntProperty    = 5,
	EHasCustomNavigableGeometry__DontExport = 6,
	ByteProperty                   = 7,
	EHasCustomNavigableGeometry__EHasCustomNavigableGeometry_MAX = 8,
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


// Enum Engine.ELightmapType
enum class ELightmapType : uint8_t
{
	ELightmapType__Default         = 0,
	None                           = 1,
	ELightmapType__ForceSurface    = 2,
	neByteProperty‘IntProperty  = 3,
	ELightmapType__ForceVolumetric = 4,
	ByteProperty‘IntProperty    = 5,
	ELightmapType__ELightmapType_MAX = 6,
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


// Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off                       = 0,
	None                           = 1,
	ILCQ_Point                     = 2,
	neByteProperty‘IntProperty  = 3,
	ILCQ_Volume                    = 4,
	ByteProperty‘IntProperty    = 5,
	ILCQ_MAX                       = 6,
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


// Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t
{
	SDPG_World                     = 0,
	None                           = 1,
	SDPG_Foreground                = 2
};


// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle                     = 0,
	None                           = 1,
	RCCE_CycleWithOffset           = 2,
	neByteProperty‘IntProperty  = 3,
	RCCE_Oscillate                 = 4,
	ByteProperty‘IntProperty    = 5,
	RCCE_Linear                    = 6,
	ByteProperty                   = 7,
	RCCE_Constant                  = 8,
	teProperty‘IntProperty        = 9,
	RCCE_None                      = 10,
	Property‘IntProperty          = 11,
	RCCE_MAX                       = 12,
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


// Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone             = 0,
	None                           = 1,
	RCTWM_WeightedArrive           = 2,
	neByteProperty‘IntProperty  = 3,
	RCTWM_WeightedLeave            = 4,
	ByteProperty‘IntProperty    = 5,
	RCTWM_WeightedBoth             = 6,
	ByteProperty                   = 7,
	RCTWM_MAX                      = 8,
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


// Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8_t
{
	RCTM_Auto                      = 0,
	None                           = 1,
	RCTM_User                      = 2,
	neByteProperty‘IntProperty  = 3,
	RCTM_Break                     = 4,
	ByteProperty‘IntProperty    = 5,
	RCTM_None                      = 6,
	ByteProperty                   = 7,
	RCTM_MAX                       = 8,
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


// Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8_t
{
	RCIM_Linear                    = 0,
	None                           = 1,
	RCIM_Constant                  = 2,
	neByteProperty‘IntProperty  = 3,
	RCIM_Cubic                     = 4,
	ByteProperty‘IntProperty    = 5,
	RCIM_None                      = 6,
	ByteProperty                   = 7,
	RCIM_MAX                       = 8,
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


// Enum Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : uint8_t
{
	EReflectedAndRefractedRayTracedShadows__Disabled = 0,
	None                           = 1,
	EReflectedAndRefractedRayTracedShadows__Hard_shadows = 2,
	neByteProperty‘IntProperty  = 3,
	EReflectedAndRefractedRayTracedShadows__Area_shadows = 4,
	ByteProperty‘IntProperty    = 5,
	EReflectedAndRefractedRayTracedShadows__EReflectedAndRefractedRayTracedShadows_MAX = 6,
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


// Enum Engine.ETranslucencyType
enum class ETranslucencyType : uint8_t
{
	ETranslucencyType__Raster      = 0,
	None                           = 1,
	ETranslucencyType__RayTracing  = 2,
	neByteProperty‘IntProperty  = 3,
	ETranslucencyType__ETranslucencyType_MAX = 4,
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


// Enum Engine.EReflectionsType
enum class EReflectionsType : uint8_t
{
	EReflectionsType__ScreenSpace  = 0,
	None                           = 1,
	EReflectionsType__RayTracing   = 2,
	neByteProperty‘IntProperty  = 3,
	EReflectionsType__EReflectionsType_MAX = 4,
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


// Enum Engine.ERayTracingGlobalIlluminationType
enum class ERayTracingGlobalIlluminationType : uint8_t
{
	ERayTracingGlobalIlluminationType__Disabled = 0,
	None                           = 1,
	ERayTracingGlobalIlluminationType__BruteForce = 2,
	neByteProperty‘IntProperty  = 3,
	ERayTracingGlobalIlluminationType__FinalGather = 4,
	ByteProperty‘IntProperty    = 5,
	ERayTracingGlobalIlluminationType__ERayTracingGlobalIlluminationType_MAX = 6,
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


// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8_t
{
	AEM_Histogram                  = 0,
	None                           = 1,
	AEM_Basic                      = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EBloomMethod
enum class EBloomMethod : uint8_t
{
	BM_SOG                         = 0,
	None                           = 1,
	BM_FFT                         = 2
};


// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8_t
{
	EAlphaBlendOption__Linear      = 0,
	None                           = 1,
	EAlphaBlendOption__Cubic       = 2,
	neByteProperty‘IntProperty  = 3,
	EAlphaBlendOption__HermiteCubic = 4,
	ByteProperty‘IntProperty    = 5,
	EAlphaBlendOption__Sinusoidal  = 6,
	ByteProperty                   = 7,
	EAlphaBlendOption__QuadraticInOut = 8,
	teProperty‘IntProperty        = 9,
	EAlphaBlendOption__CubicInOut  = 10,
	Property‘IntProperty          = 11,
	EAlphaBlendOption__QuarticInOut = 12,
	operty‘IntProperty            = 13,
	EAlphaBlendOption__QuinticInOut = 14,
	erty‘IntProperty              = 15
};


// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8_t
{
	EAnimGroupRole__CanBeLeader    = 0,
	None                           = 1,
	EAnimGroupRole__AlwaysFollower = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimGroupRole__AlwaysLeader   = 4,
	ByteProperty‘IntProperty    = 5,
	EAnimGroupRole__TransitionLeader = 6,
	ByteProperty                   = 7,
	EAnimGroupRole__TransitionFollower = 8,
	teProperty‘IntProperty        = 9,
	EAnimGroupRole__EAnimGroupRole_MAX = 10,
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


// Enum Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t
{
	EPreviewAnimationBlueprintApplicationMethod__LinkedLayers = 0,
	None                           = 1,
	EPreviewAnimationBlueprintApplicationMethod__LinkedAnimGraph = 2,
	neByteProperty‘IntProperty  = 3,
	EPreviewAnimationBlueprintApplicationMethod__EPreviewAnimationBlueprintApplicationMethod_MAX = 4,
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


// Enum Engine.AnimationKeyFormat
enum class EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	None                           = 1,
	AKF_VariableKeyLerp            = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8_t
{
	ERawCurveTrackTypes__RCT_Float = 0,
	None                           = 1,
	ERawCurveTrackTypes__RCT_Vector = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8_t
{
	AACF_NONE                      = 0,
	None                           = 1,
	AACF_DriveMorphTarget_DEPRECATED = 2,
	neByteProperty‘IntProperty  = 3,
	AACF_DriveAttribute_DEPRECATED = 4,
	ByteProperty‘IntProperty    = 5,
	AACF_Editable                  = 6,
	teProperty‘IntProperty        = 7,
	AACF_DriveMaterial_DEPRECATED  = 8,
	ty‘IntProperty                = 9,
	AACF_Metadata                  = 10,
	
                              = 11,
	AACF_DriveTrack                = 12,
	ObjectProperty                 = 13,
	AACF_Disabled                  = 14,
	ArrayProperty                  = 15,
	AACF_MAX                       = 16,
	rayProperty                    = 17,
	None01                         = 18,
	None02                         = 19,
	None03                         = 20,
	None04                         = 21,
	None05                         = 22,
	None06                         = 23,
	None07                         = 24,
	None08                         = 25,
	None09                         = 26,
	None10                         = 27
};


// Enum Engine.AnimationCompressionFormat
enum class EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	None                           = 1,
	ACF_Float96NoW                 = 2,
	neByteProperty‘IntProperty  = 3,
	ACF_Fixed48NoW                 = 4,
	ByteProperty‘IntProperty    = 5,
	ACF_IntervalFixed32NoW         = 6,
	ByteProperty                   = 7
};


// Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8_t
{
	ABPT_None                      = 0,
	None                           = 1,
	ABPT_RefPose                   = 2,
	neByteProperty‘IntProperty  = 3,
	ABPT_AnimScaled                = 4
};


// Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8_t
{
	ERootMotionMode__NoRootMotionExtraction = 0,
	None                           = 1,
	ERootMotionMode__IgnoreRootMotion = 2,
	neByteProperty‘IntProperty  = 3,
	ERootMotionMode__RootMotionFromEverything = 4,
	ByteProperty‘IntProperty    = 5,
	ERootMotionMode__RootMotionFromMontagesOnly = 6,
	ByteProperty                   = 7,
	ERootMotionMode__ERootMotionMode_MAX = 8,
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


// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8_t
{
	ERootMotionRootLock__RefPose   = 0,
	None                           = 1,
	ERootMotionRootLock__AnimFirstFrame = 2,
	neByteProperty‘IntProperty  = 3,
	ERootMotionRootLock__Zero      = 4,
	ByteProperty‘IntProperty    = 5,
	ERootMotionRootLock__ERootMotionRootLock_MAX = 6,
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


// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8_t
{
	EMontagePlayReturnType__MontageLength = 0,
	None                           = 1,
	EMontagePlayReturnType__Duration = 2,
	neByteProperty‘IntProperty  = 3,
	EMontagePlayReturnType__EMontagePlayReturnType_MAX = 4,
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


// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8_t
{
	EDrawDebugItemType__DirectionalArrow = 0,
	None                           = 1,
	EDrawDebugItemType__Sphere     = 2,
	neByteProperty‘IntProperty  = 3,
	EDrawDebugItemType__Line       = 4,
	ByteProperty‘IntProperty    = 5,
	EDrawDebugItemType__OnScreenMessage = 6,
	ByteProperty                   = 7,
	EDrawDebugItemType__CoordinateSystem = 8,
	teProperty‘IntProperty        = 9,
	EDrawDebugItemType__EDrawDebugItemType_MAX = 10,
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


// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8_t
{
	EAnimLinkMethod__Absolute      = 0,
	None                           = 1,
	EAnimLinkMethod__Relative      = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimLinkMethod__Proportional  = 4,
	ByteProperty‘IntProperty    = 5,
	EAnimLinkMethod__EAnimLinkMethod_MAX = 6,
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


// Enum Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8_t
{
	EMontageSubStepResult__Moved   = 0,
	None                           = 1,
	EMontageSubStepResult__NotMoved = 2,
	neByteProperty‘IntProperty  = 3,
	EMontageSubStepResult__InvalidSection = 4,
	ByteProperty‘IntProperty    = 5,
	EMontageSubStepResult__InvalidMontage = 6,
	ByteProperty                   = 7,
	EMontageSubStepResult__EMontageSubStepResult_MAX = 8,
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


// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8_t
{
	EAnimNotifyEventType__Begin    = 0,
	None                           = 1,
	EAnimNotifyEventType__End      = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimNotifyEventType__EAnimNotifyEventType_MAX = 4,
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


// Enum Engine.EInertializationSpace
enum class EInertializationSpace : uint8_t
{
	EInertializationSpace__Default = 0,
	None                           = 1,
	EInertializationSpace__WorldSpace = 2,
	neByteProperty‘IntProperty  = 3,
	EInertializationSpace__WorldRotation = 4,
	ByteProperty‘IntProperty    = 5,
	EInertializationSpace__EInertializationSpace_MAX = 6,
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


// Enum Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8_t
{
	EInertializationBoneState__Invalid = 0,
	None                           = 1,
	EInertializationBoneState__Valid = 2,
	neByteProperty‘IntProperty  = 3,
	EInertializationBoneState__Excluded = 4,
	ByteProperty‘IntProperty    = 5,
	EInertializationBoneState__EInertializationBoneState_MAX = 6,
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


// Enum Engine.EInertializationState
enum class EInertializationState : uint8_t
{
	EInertializationState__Inactive = 0,
	None                           = 1,
	EInertializationState__Pending = 2,
	neByteProperty‘IntProperty  = 3,
	EInertializationState__Active  = 4,
	ByteProperty‘IntProperty    = 5,
	EInertializationState__EInertializationState_MAX = 6,
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


// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8_t
{
	EEvaluatorMode__EM_Standard    = 0,
	None                           = 1,
	EEvaluatorMode__EM_Freeze      = 2,
	neByteProperty‘IntProperty  = 3,
	EEvaluatorMode__EM_DelayedFreeze = 4,
	ByteProperty‘IntProperty    = 5,
	EEvaluatorMode__EM_MAX         = 6,
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


// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8_t
{
	EEvaluatorDataSource__EDS_SourcePose = 0,
	None                           = 1,
	EEvaluatorDataSource__EDS_DestinationPose = 2,
	neByteProperty‘IntProperty  = 3,
	EEvaluatorDataSource__EDS_MAX  = 4,
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


// Enum Engine.ECopyType
enum class ECopyType : uint8_t
{
	ECopyType__MemCopy             = 0,
	None                           = 1,
	ECopyType__BoolProperty        = 2,
	neByteProperty‘IntProperty  = 3,
	ECopyType__StructProperty      = 4,
	ByteProperty‘IntProperty    = 5,
	ECopyType__ObjectProperty      = 6,
	ByteProperty                   = 7,
	ECopyType__ECopyType_MAX       = 8,
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


// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8_t
{
	EPostCopyOperation__None       = 0,
	None                           = 1,
	EPostCopyOperation__LogicalNegateBool = 2,
	neByteProperty‘IntProperty  = 3,
	EPostCopyOperation__EPostCopyOperation_MAX = 4,
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


// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8_t
{
	EPinHidingMode__NeverAsPin     = 0,
	None                           = 1,
	EPinHidingMode__PinHiddenByDefault = 2,
	neByteProperty‘IntProperty  = 3,
	EPinHidingMode__PinShownByDefault = 4,
	ByteProperty‘IntProperty    = 5,
	EPinHidingMode__AlwaysAsPin    = 6,
	ByteProperty                   = 7,
	EPinHidingMode__EPinHidingMode_MAX = 8,
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


// Enum Engine.AnimPhysCollisionType
enum class EAnimPhysCollisionType : uint8_t
{
	AnimPhysCollisionType__CoM     = 0,
	None                           = 1,
	AnimPhysCollisionType__CustomSphere = 2,
	neByteProperty‘IntProperty  = 3,
	AnimPhysCollisionType__InnerSphere = 4,
	ByteProperty‘IntProperty    = 5,
	AnimPhysCollisionType__OuterSphere = 6,
	ByteProperty                   = 7,
	AnimPhysCollisionType__AnimPhysCollisionType_MAX = 8,
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


// Enum Engine.AnimPhysTwistAxis
enum class EAnimPhysTwistAxis : uint8_t
{
	AnimPhysTwistAxis__AxisX       = 0,
	None                           = 1,
	AnimPhysTwistAxis__AxisY       = 2,
	neByteProperty‘IntProperty  = 3,
	AnimPhysTwistAxis__AxisZ       = 4,
	ByteProperty‘IntProperty    = 5,
	AnimPhysTwistAxis__AnimPhysTwistAxis_MAX = 6,
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


// Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8_t
{
	ETAA_Default                   = 0,
	None                           = 1,
	ETAA_Finished                  = 2,
	neByteProperty‘IntProperty  = 3,
	ETAA_Looped                    = 4,
	ByteProperty‘IntProperty    = 5,
	ETAA_MAX                       = 6,
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


// Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8_t
{
	ETransitionLogicType__TLT_StandardBlend = 0,
	None                           = 1,
	ETransitionLogicType__TLT_Inertialization = 2,
	neByteProperty‘IntProperty  = 3,
	ETransitionLogicType__TLT_Custom = 4,
	ByteProperty‘IntProperty    = 5,
	ETransitionLogicType__TLT_MAX  = 6,
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


// Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8_t
{
	ETransitionBlendMode__TBM_Linear = 0,
	None                           = 1,
	ETransitionBlendMode__TBM_Cubic = 2,
	neByteProperty‘IntProperty  = 3,
	ETransitionBlendMode__TBM_MAX  = 4,
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


// Enum Engine.EComponentType
enum class EComponentType : uint8_t
{
	EComponentType__None           = 0,
	None                           = 1,
	EComponentType__TranslationX   = 2,
	neByteProperty‘IntProperty  = 3,
	EComponentType__TranslationY   = 4,
	ByteProperty‘IntProperty    = 5,
	EComponentType__TranslationZ   = 6,
	ByteProperty                   = 7,
	EComponentType__RotationX      = 8,
	teProperty‘IntProperty        = 9,
	EComponentType__RotationY      = 10,
	Property‘IntProperty          = 11
};


// Enum Engine.EAxisOption
enum class EAxisOption : uint8_t
{
	EAxisOption__X                 = 0,
	None                           = 1,
	EAxisOption__Y                 = 2,
	neByteProperty‘IntProperty  = 3,
	EAxisOption__Z                 = 4,
	ByteProperty‘IntProperty    = 5,
	EAxisOption__X_Neg             = 6,
	ByteProperty                   = 7,
	EAxisOption__Y_Neg             = 8,
	teProperty‘IntProperty        = 9,
	EAxisOption__Z_Neg             = 10,
	Property‘IntProperty          = 11,
	EAxisOption__Custom            = 12,
	operty‘IntProperty            = 13,
	EAxisOption__EAxisOption_MAX   = 14,
	erty‘IntProperty              = 15,
	None01                         = 16,
	None02                         = 17,
	None03                         = 18,
	None04                         = 19,
	None05                         = 20,
	None06                         = 21,
	None07                         = 22,
	None08                         = 23,
	None09                         = 24,
	None10                         = 25,
	None11                         = 26,
	None12                         = 27
};


// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8_t
{
	EAnimInterpolationType__Linear = 0,
	None                           = 1,
	EAnimInterpolationType__Step   = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimInterpolationType__EAnimInterpolationType_MAX = 4,
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


// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8_t
{
	ECurveBlendOption__MaxWeight   = 0,
	None                           = 1,
	ECurveBlendOption__NormalizeByWeight = 2,
	neByteProperty‘IntProperty  = 3,
	ECurveBlendOption__BlendByWeight = 4,
	ByteProperty‘IntProperty    = 5,
	ECurveBlendOption__ECurveBlendOption_MAX = 6,
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


// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8_t
{
	AAT_None                       = 0,
	None                           = 1,
	AAT_LocalSpaceBase             = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8_t
{
	ENotifyFilterType__NoFiltering = 0,
	None                           = 1,
	ENotifyFilterType__LOD         = 2,
	neByteProperty‘IntProperty  = 3,
	ENotifyFilterType__ENotifyFilterType_MAX = 4,
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


// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8_t
{
	EMontageNotifyTickType__Queued = 0,
	None                           = 1,
	EMontageNotifyTickType__BranchingPoint = 2,
	neByteProperty‘IntProperty  = 3,
	EMontageNotifyTickType__EMontageNotifyTickType_MAX = 4,
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


// Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0,
	None                           = 1,
	BRS_KeepLocalSpaceRotation     = 2,
	neByteProperty‘IntProperty  = 3,
	BRS_CopyFromTarget             = 4,
	ByteProperty‘IntProperty    = 5,
	BRS_MAX                        = 6,
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


// Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	None                           = 1,
	BCS_ComponentSpace             = 2,
	neByteProperty‘IntProperty  = 3,
	BCS_ParentBoneSpace            = 4
};


// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8_t
{
	BA_X                           = 0,
	None                           = 1,
	BA_Y                           = 2,
	neByteProperty‘IntProperty  = 3,
	BA_Z                           = 4,
	ByteProperty‘IntProperty    = 5,
	BA_MAX                         = 6,
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


// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8_t
{
	EPrimaryAssetCookRule__Unknown = 0,
	None                           = 1,
	EPrimaryAssetCookRule__NeverCook = 2,
	neByteProperty‘IntProperty  = 3,
	EPrimaryAssetCookRule__DevelopmentCook = 4,
	ByteProperty‘IntProperty    = 5,
	EPrimaryAssetCookRule__DevelopmentAlwaysCook = 6,
	ByteProperty                   = 7,
	EPrimaryAssetCookRule__AlwaysCook = 8,
	teProperty‘IntProperty        = 9,
	EPrimaryAssetCookRule__EPrimaryAssetCookRule_MAX = 10,
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


// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8_t
{
	EAttenuationShape__Sphere      = 0,
	None                           = 1,
	EAttenuationShape__Capsule     = 2,
	neByteProperty‘IntProperty  = 3,
	EAttenuationShape__Box         = 4,
	ByteProperty‘IntProperty    = 5,
	EAttenuationShape__Cone        = 6,
	ByteProperty                   = 7,
	EAttenuationShape__EAttenuationShape_MAX = 8,
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


// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8_t
{
	EAttenuationDistanceModel__Linear = 0,
	None                           = 1,
	EAttenuationDistanceModel__Logarithmic = 2,
	neByteProperty‘IntProperty  = 3,
	EAttenuationDistanceModel__Inverse = 4,
	ByteProperty‘IntProperty    = 5,
	EAttenuationDistanceModel__LogReverse = 6,
	ByteProperty                   = 7,
	EAttenuationDistanceModel__NaturalSound = 8,
	teProperty‘IntProperty        = 9,
	EAttenuationDistanceModel__Custom = 10,
	Property‘IntProperty          = 11,
	EAttenuationDistanceModel__EAttenuationDistanceModel_MAX = 12,
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


// Enum Engine.EAudioFaderCurve
enum class EAudioFaderCurve : uint8_t
{
	EAudioFaderCurve__Linear       = 0,
	None                           = 1,
	EAudioFaderCurve__Logarithmic  = 2,
	neByteProperty‘IntProperty  = 3,
	EAudioFaderCurve__SCurve       = 4,
	ByteProperty‘IntProperty    = 5,
	EAudioFaderCurve__Sin          = 6,
	ByteProperty                   = 7,
	EAudioFaderCurve__Count        = 8,
	teProperty‘IntProperty        = 9,
	EAudioFaderCurve__EAudioFaderCurve_MAX = 10,
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


// Enum Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : uint8_t
{
	EAudioComponentPlayState__Playing = 0,
	None                           = 1,
	EAudioComponentPlayState__Stopped = 2,
	neByteProperty‘IntProperty  = 3,
	EAudioComponentPlayState__Paused = 4,
	ByteProperty‘IntProperty    = 5,
	EAudioComponentPlayState__FadingIn = 6,
	ByteProperty                   = 7,
	EAudioComponentPlayState__FadingOut = 8,
	teProperty‘IntProperty        = 9,
	EAudioComponentPlayState__Count = 10,
	Property‘IntProperty          = 11,
	EAudioComponentPlayState__EAudioComponentPlayState_MAX = 12,
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


// Enum Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8_t
{
	EMonoChannelUpmixMethod__Linear = 0,
	None                           = 1,
	EMonoChannelUpmixMethod__EqualPower = 2,
	neByteProperty‘IntProperty  = 3,
	EMonoChannelUpmixMethod__FullVolume = 4,
	ByteProperty‘IntProperty    = 5,
	EMonoChannelUpmixMethod__EMonoChannelUpmixMethod_MAX = 6,
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


// Enum Engine.EPanningMethod
enum class EPanningMethod : uint8_t
{
	EPanningMethod__Linear         = 0,
	None                           = 1,
	EPanningMethod__EqualPower     = 2,
	neByteProperty‘IntProperty  = 3,
	EPanningMethod__EPanningMethod_MAX = 4,
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


// Enum Engine.EVoiceSampleRate
enum class EVoiceSampleRate : uint8_t
{
	EVoiceSampleRate__Low16000Hz   = 0,
	s_MeshSelectionToolBuilderƒ_Script_MeshModelingTools_Default__MeshSelectionToolBuilder = 1,
	EVoiceSampleRate__Normal24000Hz = 2,
	Library                        = 3,
	EVoiceSampleRate__EVoiceSampleRate_MAX = 4,
	brary                          = 5,
	None                           = 6,
	None01                         = 7,
	None02                         = 8,
	None03                         = 9,
	None04                         = 10,
	None05                         = 11,
	None06                         = 12,
	None07                         = 13,
	None08                         = 14,
	None09                         = 15,
	None10                         = 16,
	None11                         = 17,
	None12                         = 18,
	None13                         = 19
};


// Enum Engine.ReverbPreset
enum class EReverbPreset : uint8_t
{
	REVERB_Default                 = 0,
	None                           = 1,
	REVERB_Bathroom                = 2,
	neByteProperty‘IntProperty  = 3,
	REVERB_StoneRoom               = 4,
	ByteProperty‘IntProperty    = 5,
	REVERB_Auditorium              = 6,
	ByteProperty                   = 7,
	REVERB_ConcertHall             = 8,
	teProperty‘IntProperty        = 9,
	REVERB_Cave                    = 10,
	Property‘IntProperty          = 11,
	REVERB_Hallway                 = 12,
	operty‘IntProperty            = 13,
	REVERB_StoneCorridor           = 14,
	erty‘IntProperty              = 15,
	REVERB_Alley                   = 16,
	ty‘IntProperty                = 17,
	REVERB_Forest                  = 18,
	[Error]                        = 19,
	REVERB_City                    = 20,
	IntProperty                    = 21,
	REVERB_Mountains               = 22,
	tProperty                      = 23
};


// Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8_t
{
	BL_AfterTonemapping            = 0,
	None                           = 1,
	BL_BeforeTonemapping           = 2,
	neByteProperty‘IntProperty  = 3,
	BL_BeforeTranslucency          = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8_t
{
	ENotifyTriggerMode__AllAnimations = 0,
	None                           = 1,
	ENotifyTriggerMode__HighestWeightedAnimation = 2,
	neByteProperty‘IntProperty  = 3,
	ENotifyTriggerMode__None       = 4,
	ByteProperty‘IntProperty    = 5,
	ENotifyTriggerMode__ENotifyTriggerMode_MAX = 6,
	ByteProperty                   = 7,
	REVERB_ConcertHall             = 8,
	teProperty‘IntProperty        = 9,
	REVERB_Cave                    = 10,
	Property‘IntProperty          = 11,
	REVERB_Hallway                 = 12,
	operty‘IntProperty            = 13,
	REVERB_StoneCorridor           = 14,
	erty‘IntProperty              = 15,
	REVERB_Alley                   = 16,
	ty‘IntProperty                = 17,
	REVERB_Forest                  = 18,
	[Error]                        = 19,
	REVERB_City                    = 20,
	IntProperty                    = 21,
	REVERB_Mountains               = 22,
	tProperty                      = 23
};


// Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8_t
{
	BSA_None                       = 0,
	None                           = 1,
	BSA_X                          = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8_t
{
	EBlueprintNativizationFlag__Disabled = 0,
	None                           = 1,
	EBlueprintNativizationFlag__Dependency = 2,
	neByteProperty‘IntProperty  = 3,
	EBlueprintNativizationFlag__ExplicitlyEnabled = 4,
	ByteProperty‘IntProperty    = 5,
	EBlueprintNativizationFlag__EBlueprintNativizationFlag_MAX = 6,
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


// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8_t
{
	EBlueprintCompileMode__Default = 0,
	None                           = 1,
	EBlueprintCompileMode__Development = 2,
	neByteProperty‘IntProperty  = 3,
	EBlueprintCompileMode__FinalRelease = 4,
	ByteProperty‘IntProperty    = 5,
	EBlueprintCompileMode__EBlueprintCompileMode_MAX = 6,
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


// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8_t
{
	BPTYPE_Normal                  = 0,
	None                           = 1,
	BPTYPE_Const                   = 2,
	neByteProperty‘IntProperty  = 3,
	BPTYPE_MacroLibrary            = 4,
	ByteProperty‘IntProperty    = 5,
	BPTYPE_Interface               = 6
};


// Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8_t
{
	BS_Unknown                     = 0,
	None                           = 1,
	BS_Dirty                       = 2,
	neByteProperty‘IntProperty  = 3,
	BS_Error                       = 4,
	ByteProperty‘IntProperty    = 5,
	BS_UpToDate                    = 6
};


// Enum Engine.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8_t
{
	EBodyCollisionResponse__BodyCollision_Enabled = 0,
	None                           = 1,
	EBodyCollisionResponse__BodyCollision_Disabled = 2,
	neByteProperty‘IntProperty  = 3,
	EBodyCollisionResponse__BodyCollision_MAX = 4,
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


// Enum Engine.EPhysicsType
enum class EPhysicsType : uint8_t
{
	PhysType_Default               = 0,
	None                           = 1,
	PhysType_Kinematic             = 2,
	neByteProperty‘IntProperty  = 3,
	PhysType_Simulated             = 4,
	ByteProperty‘IntProperty    = 5,
	PhysType_MAX                   = 6,
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


// Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                 = 0,
	None                           = 1,
	CTF_UseSimpleAndComplex        = 2,
	neByteProperty‘IntProperty  = 3,
	CTF_UseSimpleAsComplex         = 4
};


// Enum Engine.EBrushType
enum class EBrushType : uint8_t
{
	Brush_Default                  = 0,
	None                           = 1,
	Brush_Add                      = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.ECsgOper
enum class ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	None                           = 1,
	CSG_Add                        = 2,
	neByteProperty‘IntProperty  = 3,
	CSG_Subtract                   = 4,
	ByteProperty‘IntProperty    = 5,
	CSG_Intersect                  = 6
};


// Enum Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom               = 0,
	None                           = 1,
	EOO_OffsetZero                 = 2
};


// Enum Engine.EOscillatorWaveform
enum class EOscillatorWaveform : uint8_t
{
	EOscillatorWaveform__SineWave  = 0,
	None                           = 1,
	EOscillatorWaveform__PerlinNoise = 2,
	neByteProperty‘IntProperty  = 3,
	EOscillatorWaveform__EOscillatorWaveform_MAX = 4,
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


// Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8_t
{
	ECameraAlphaBlendMode__CABM_Linear = 0,
	None                           = 1,
	ECameraAlphaBlendMode__CABM_Cubic = 2,
	neByteProperty‘IntProperty  = 3,
	ECameraAlphaBlendMode__CABM_MAX = 4,
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


// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8_t
{
	ECameraProjectionMode__Perspective = 0,
	None                           = 1,
	ECameraProjectionMode__Orthographic = 2,
	neByteProperty‘IntProperty  = 3,
	ECameraProjectionMode__ECameraProjectionMode_MAX = 4,
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


// Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete       = 0,
	None                           = 1,
	CSD_KeyValueWriteComplete      = 2,
	neByteProperty‘IntProperty  = 3,
	CSD_ValueChanged               = 4,
	ByteProperty‘IntProperty    = 5,
	CSD_DocumentQueryComplete      = 6,
	ByteProperty                   = 7
};


// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8_t
{
	EAngularDriveMode__SLERP       = 0,
	None                           = 1,
	EAngularDriveMode__TwistAndSwing = 2,
	neByteProperty‘IntProperty  = 3,
	EAngularDriveMode__EAngularDriveMode_MAX = 4,
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


// Enum Engine.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8_t
{
	LCM_Free                       = 0,
	None                           = 1,
	LCM_Limited                    = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.ECurveTableMode
enum class ECurveTableMode : uint8_t
{
	ECurveTableMode__Empty         = 0,
	None                           = 1,
	ECurveTableMode__SimpleCurves  = 2,
	neByteProperty‘IntProperty  = 3,
	ECurveTableMode__RichCurves    = 4,
	ByteProperty‘IntProperty    = 5,
	ECurveTableMode__ECurveTableMode_MAX = 6,
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


// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8_t
{
	EEvaluateCurveTableResult__RowFound = 0,
	None                           = 1,
	EEvaluateCurveTableResult__RowNotFound = 2,
	neByteProperty‘IntProperty  = 3,
	EEvaluateCurveTableResult__EEvaluateCurveTableResult_MAX = 4,
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


// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8_t
{
	EGrammaticalNumber__Singular   = 0,
	None                           = 1,
	EGrammaticalNumber__Plural     = 2,
	neByteProperty‘IntProperty  = 3,
	EGrammaticalNumber__EGrammaticalNumber_MAX = 4,
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


// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8_t
{
	EGrammaticalGender__Neuter     = 0,
	None                           = 1,
	EGrammaticalGender__Masculine  = 2,
	neByteProperty‘IntProperty  = 3,
	EGrammaticalGender__Feminine   = 4,
	ByteProperty‘IntProperty    = 5,
	EGrammaticalGender__Mixed      = 6,
	ByteProperty                   = 7,
	EGrammaticalGender__EGrammaticalGender_MAX = 8,
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


// Enum Engine.DistributionParamMode
enum class EDistributionParamMode : uint8_t
{
	DPM_Normal                     = 0,
	None                           = 1,
	DPM_Abs                        = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	None                           = 1,
	EDVMF_Different                = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	None                           = 1,
	EDVLF_XY                       = 2,
	neByteProperty‘IntProperty  = 3,
	EDVLF_XZ                       = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8_t
{
	ENodeEnabledState__Enabled     = 0,
	None                           = 1,
	ENodeEnabledState__Disabled    = 2,
	neByteProperty‘IntProperty  = 3,
	ENodeEnabledState__DevelopmentOnly = 4,
	ByteProperty‘IntProperty    = 5,
	ENodeEnabledState__ENodeEnabledState_MAX = 6,
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


// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8_t
{
	ENodeAdvancedPins__NoPins      = 0,
	None                           = 1,
	ENodeAdvancedPins__Shown       = 2,
	neByteProperty‘IntProperty  = 3,
	ENodeAdvancedPins__Hidden      = 4,
	ByteProperty‘IntProperty    = 5,
	ENodeAdvancedPins__ENodeAdvancedPins_MAX = 6,
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


// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8_t
{
	ENodeTitleType__FullTitle      = 0,
	None                           = 1,
	ENodeTitleType__ListView       = 2,
	neByteProperty‘IntProperty  = 3,
	ENodeTitleType__EditableTitle  = 4,
	ByteProperty‘IntProperty    = 5,
	ENodeTitleType__MenuTitle      = 6,
	ByteProperty                   = 7,
	ENodeTitleType__MAX_TitleTypes = 8,
	teProperty‘IntProperty        = 9,
	ENodeTitleType__ENodeTitleType_MAX = 10,
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


// Enum Engine.EPinContainerType
enum class EPinContainerType : uint8_t
{
	EPinContainerType__None        = 0,
	None                           = 1,
	EPinContainerType__Array       = 2,
	neByteProperty‘IntProperty  = 3,
	EPinContainerType__Set         = 4,
	ByteProperty‘IntProperty    = 5,
	EPinContainerType__Map         = 6,
	ByteProperty                   = 7,
	EPinContainerType__EPinContainerType_MAX = 8,
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


// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8_t
{
	EGPD_Input                     = 0,
	None                           = 1,
	EGPD_Output                    = 2
};


// Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8_t
{
	BPST_Original                  = 0,
	None                           = 1,
	BPST_VariantA                  = 2,
	neByteProperty‘IntProperty  = 3,
	BPST_MAX                       = 4,
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


// Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE          = 0,
	None                           = 1,
	CONNECT_RESPONSE_DISALLOW      = 2,
	neByteProperty‘IntProperty  = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 4,
	ByteProperty‘IntProperty    = 5,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 6
};


// Enum Engine.EGraphType
enum class EGraphType : uint8_t
{
	GT_Function                    = 0,
	None                           = 1,
	GT_Ubergraph                   = 2,
	neByteProperty‘IntProperty  = 3,
	GT_Macro                       = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum Engine.ETransitionType
enum class ETransitionType : uint8_t
{
	ETransitionType__None          = 0,
	None                           = 1,
	ETransitionType__Paused        = 2,
	neByteProperty‘IntProperty  = 3,
	ETransitionType__Loading       = 4,
	ByteProperty‘IntProperty    = 5,
	ETransitionType__Saving        = 6,
	ByteProperty                   = 7
};


// Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                  = 0,
	None                           = 1,
	FULLYLOAD_Game_PreLoadClass    = 2,
	neByteProperty‘IntProperty  = 3,
	FULLYLOAD_Game_PostLoadClass   = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8_t
{
	VMI_BrushWireframe             = 0,
	None                           = 1,
	VMI_Wireframe                  = 2,
	neByteProperty‘IntProperty  = 3,
	VMI_Unlit                      = 4,
	ByteProperty‘IntProperty    = 5,
	VMI_Lit                        = 6,
	ByteProperty                   = 7,
	VMI_Lit_DetailLighting         = 8,
	teProperty‘IntProperty        = 9,
	VMI_LightingOnly               = 10,
	Property‘IntProperty          = 11,
	VMI_LightComplexity            = 12,
	operty‘IntProperty            = 13,
	VMI_ShaderComplexity           = 14,
	ty‘IntProperty                = 15,
	VMI_LightmapDensity            = 16,
	[Error]                        = 17,
	VMI_LitLightmapDensity         = 18,
	IntProperty                    = 19,
	VMI_ReflectionOverride         = 20,
	tProperty                      = 21,
	VMI_VisualizeBuffer            = 22,
	roperty                        = 23,
	VMI_StationaryLightOverlap     = 24,
	rty                            = 25,
	VMI_CollisionPawn              = 26,
	y                              = 27
};


// Enum Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8_t
{
	EDemoPlayFailure__Generic      = 0,
	None                           = 1,
	EDemoPlayFailure__DemoNotFound = 2,
	neByteProperty‘IntProperty  = 3,
	EDemoPlayFailure__Corrupt      = 4,
	ByteProperty‘IntProperty    = 5,
	EDemoPlayFailure__InvalidVersion = 6,
	ByteProperty                   = 7,
	EDemoPlayFailure__InitBase     = 8,
	teProperty‘IntProperty        = 9
};


// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8_t
{
	ENetworkLagState__NotLagging   = 0,
	None                           = 1,
	ENetworkLagState__Lagging      = 2,
	neByteProperty‘IntProperty  = 3,
	ENetworkLagState__ENetworkLagState_MAX = 4,
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


// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8_t
{
	EMouseCaptureMode__NoCapture   = 0,
	None                           = 1,
	EMouseCaptureMode__CapturePermanently = 2,
	neByteProperty‘IntProperty  = 3,
	EMouseCaptureMode__CapturePermanently_IncludingInitialMouseDown = 4,
	ByteProperty‘IntProperty    = 5,
	EMouseCaptureMode__CaptureDuringMouseDown = 6,
	ByteProperty                   = 7,
	EMouseCaptureMode__CaptureDuringRightMouseDown = 8,
	teProperty‘IntProperty        = 9,
	EMouseCaptureMode__EMouseCaptureMode_MAX = 10,
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


// Enum Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8_t
{
	ECustomTimeStepSynchronizationState__Closed = 0,
	None                           = 1,
	ECustomTimeStepSynchronizationState__Error = 2,
	neByteProperty‘IntProperty  = 3,
	ECustomTimeStepSynchronizationState__Synchronized = 4,
	ByteProperty‘IntProperty    = 5,
	ECustomTimeStepSynchronizationState__Synchronizing = 6,
	ByteProperty                   = 7,
	ECustomTimeStepSynchronizationState__ECustomTimeStepSynchronizationState_MAX = 8,
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


// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8_t
{
	EMeshBufferAccess__Default     = 0,
	None                           = 1,
	EMeshBufferAccess__ForceCPUAndGPU = 2,
	neByteProperty‘IntProperty  = 3,
	EMeshBufferAccess__EMeshBufferAccess_MAX = 4,
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


// Enum Engine.EConstraintFrame
enum class EConstraintFrame : uint8_t
{
	EConstraintFrame__Frame1       = 0,
	None                           = 1,
	EConstraintFrame__Frame2       = 2,
	neByteProperty‘IntProperty  = 3,
	EConstraintFrame__EConstraintFrame_MAX = 4,
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


// Enum Engine.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8_t
{
	ACM_Free                       = 0,
	None                           = 1,
	ACM_Limited                    = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8_t
{
	EComponentSocketType__Invalid  = 0,
	None                           = 1,
	EComponentSocketType__Bone     = 2,
	neByteProperty‘IntProperty  = 3,
	EComponentSocketType__Socket   = 4,
	ByteProperty‘IntProperty    = 5,
	EComponentSocketType__EComponentSocketType_MAX = 6,
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


// Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8_t
{
	SurfaceType_Default            = 0,
	None                           = 1,
	SurfaceType1                   = 2,
	neByteProperty‘IntProperty  = 3,
	SurfaceType2                   = 4,
	ByteProperty‘IntProperty    = 5,
	SurfaceType3                   = 6,
	ByteProperty                   = 7,
	SurfaceType4                   = 8,
	teProperty‘IntProperty        = 9,
	SurfaceType5                   = 10,
	Property‘IntProperty          = 11,
	SurfaceType6                   = 12,
	operty‘IntProperty            = 13,
	SurfaceType7                   = 14,
	erty‘IntProperty              = 15,
	SurfaceType8                   = 16,
	ty‘IntProperty                = 17,
	SurfaceType9                   = 18,
	[Error]                        = 19,
	SurfaceType10                  = 20,
	IntProperty                    = 21,
	SurfaceType11                  = 22,
	tProperty                      = 23,
	SurfaceType12                  = 24,
	roperty                        = 25,
	SurfaceType13                  = 26,
	perty                          = 27,
	SurfaceType14                  = 28,
	rty                            = 29,
	SurfaceType15                  = 30,
	y                              = 31,
	SurfaceType16                  = 32,
	
                              = 33,
	SurfaceType17                  = 34,
	BoolProperty                   = 35,
	SurfaceType18                  = 36,
	olPropertybFloatProperty      = 37,
	SurfaceType19                  = 38,
	PropertybFloatProperty        = 39,
	SurfaceType20                  = 40,
	opertybFloatProperty          = 41,
	SurfaceType21                  = 42,
	ertybFloatProperty            = 43,
	SurfaceType22                  = 44,
	tybFloatProperty              = 45,
	SurfaceType23                  = 46,
	bFloatProperty                = 47,
	SurfaceType24                  = 48,
	FloatProperty                  = 49,
	SurfaceType25                  = 50,
	oatProperty                    = 51,
	SurfaceType26                  = 52,
	tProperty01                    = 53,
	SurfaceType27                  = 54,
	roperty01                      = 55,
	SurfaceType28                  = 56,
	perty01                        = 57,
	SurfaceType29                  = 58,
	rty01                          = 59,
	SurfaceType30                  = 60,
	y01                            = 61,
	SurfaceType31                  = 62,
	[Error]01                      = 63,
	SurfaceType32                  = 64,
	ObjectProperty                 = 65,
	SurfaceType33                  = 66,
	jectPropertyNameProperty     = 67,
	SurfaceType34                  = 68,
	ctPropertyNameProperty       = 69,
	SurfaceType35                  = 70,
	PropertyNameProperty         = 71,
	SurfaceType36                  = 72
};


// Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8_t
{
	EUpdateRateShiftBucket__ShiftBucket0 = 0,
	None                           = 1,
	EUpdateRateShiftBucket__ShiftBucket1 = 2,
	neByteProperty‘IntProperty  = 3,
	EUpdateRateShiftBucket__ShiftBucket2 = 4,
	ByteProperty‘IntProperty    = 5,
	EUpdateRateShiftBucket__ShiftBucket3 = 6,
	ByteProperty                   = 7,
	EUpdateRateShiftBucket__ShiftBucket4 = 8,
	teProperty‘IntProperty        = 9,
	EUpdateRateShiftBucket__ShiftBucket5 = 10,
	Property‘IntProperty          = 11,
	EUpdateRateShiftBucket__ShiftBucketMax = 12,
	operty‘IntProperty            = 13,
	EUpdateRateShiftBucket__EUpdateRateShiftBucket_MAX = 14,
	erty‘IntProperty              = 15,
	VMI_LightmapDensity            = 16,
	[Error]                        = 17,
	VMI_LitLightmapDensity         = 18,
	IntProperty                    = 19,
	VMI_ReflectionOverride         = 20,
	tProperty                      = 21,
	VMI_VisualizeBuffer            = 22,
	roperty                        = 23,
	VMI_StationaryLightOverlap     = 24,
	rty                            = 25,
	VMI_CollisionPawn              = 26,
	y                              = 27
};


// Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8_t
{
	SMF_None                       = 0,
	None                           = 1,
	SMF_Streamed                   = 2,
	neByteProperty‘IntProperty  = 3,
	SMF_MAX                        = 4,
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


// Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding             = 0,
	None                           = 1,
	LMPT_PrePadding                = 2,
	neByteProperty‘IntProperty  = 3,
	LMPT_NoPadding                 = 4,
	ByteProperty‘IntProperty    = 5,
	LMPT_MAX                       = 6,
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


// Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8_t
{
	ETS_EventSignature             = 0,
	None                           = 1,
	ETS_FloatSignature             = 2,
	neByteProperty‘IntProperty  = 3,
	ETS_VectorSignature            = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8_t
{
	BSIT_Average                   = 0,
	None                           = 1,
	BSIT_Linear                    = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8_t
{
	OverlapFilter_All              = 0,
	None                           = 1,
	OverlapFilter_DynamicOnly      = 2,
	neByteProperty‘IntProperty  = 3,
	OverlapFilter_StaticOnly       = 4,
	ByteProperty‘IntProperty    = 5,
	OverlapFilter_MAX              = 6,
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


// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8_t
{
	ENetworkSmoothingMode__Disabled = 0,
	None                           = 1,
	ENetworkSmoothingMode__Linear  = 2,
	neByteProperty‘IntProperty  = 3,
	ENetworkSmoothingMode__Exponential = 4,
	ByteProperty‘IntProperty    = 5,
	ENetworkSmoothingMode__Replay  = 6,
	ByteProperty                   = 7,
	ENetworkSmoothingMode__ENetworkSmoothingMode_MAX = 8,
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


// Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t
{
	Quality_Preview                = 0,
	None                           = 1,
	Quality_Medium                 = 2,
	neByteProperty‘IntProperty  = 3,
	Quality_High                   = 4
};


// Enum Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : uint8_t
{
	MSC_Less                       = 0,
	None                           = 1,
	MSC_LessEqual                  = 2,
	neByteProperty‘IntProperty  = 3,
	MSC_Greater                    = 4,
	ByteProperty‘IntProperty    = 5,
	MSC_GreaterEqual               = 6,
	ByteProperty                   = 7,
	MSC_Equal                      = 8,
	teProperty‘IntProperty        = 9
};


// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color              = 0,
	None                           = 1,
	SAMPLERTYPE_Grayscale          = 2,
	neByteProperty‘IntProperty  = 3,
	SAMPLERTYPE_Alpha              = 4,
	ByteProperty‘IntProperty    = 5,
	SAMPLERTYPE_Normal             = 6,
	ByteProperty                   = 7,
	SAMPLERTYPE_Masks              = 8,
	teProperty‘IntProperty        = 9,
	SAMPLERTYPE_DistanceFieldFont  = 10,
	Property‘IntProperty          = 11,
	SAMPLERTYPE_LinearColor        = 12,
	operty‘IntProperty            = 13,
	SAMPLERTYPE_LinearGrayscale    = 14,
	erty‘IntProperty              = 15,
	SAMPLERTYPE_Data               = 16,
	ty‘IntProperty                = 17
};


// Enum Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation             = 0,
	None                           = 1,
	MTM_FlatTessellation           = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8_t
{
	MSM_Unlit                      = 0,
	None                           = 1,
	MSM_DefaultLit                 = 2,
	neByteProperty‘IntProperty  = 3,
	MSM_Subsurface                 = 4,
	ByteProperty‘IntProperty    = 5,
	MSM_PreintegratedSkin          = 6,
	ByteProperty                   = 7,
	MSM_ClearCoat                  = 8,
	teProperty‘IntProperty        = 9,
	MSM_SubsurfaceProfile          = 10,
	Property‘IntProperty          = 11,
	MSM_TwoSidedFoliage            = 12,
	operty‘IntProperty            = 13
};


// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8_t
{
	EParticleCollisionMode__SceneDepth = 0,
	None                           = 1,
	EParticleCollisionMode__DistanceField = 2,
	neByteProperty‘IntProperty  = 3,
	EParticleCollisionMode__EParticleCollisionMode_MAX = 4,
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


// Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre     = 0,
	None                           = 1,
	ETrailWidthMode_FromFirst      = 2,
	neByteProperty‘IntProperty  = 3,
	ETrailWidthMode_FromSecond     = 4,
	ByteProperty‘IntProperty    = 5,
	ETrailWidthMode_MAX            = 6,
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


// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8_t
{
	EGBufferFormat__Force8BitsPerChannel = 0,
	None                           = 1,
	EGBufferFormat__Default        = 2,
	neByteProperty‘IntProperty  = 3,
	EGBufferFormat__HighPrecisionNormals = 4,
	ByteProperty                   = 5,
	EGBufferFormat__Force16BitsPerChannel = 6,
	Property‘IntProperty          = 7,
	EGBufferFormat__EGBufferFormat_MAX = 8,
	operty‘IntProperty            = 9,
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


// Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8_t
{
	SCCM_Overwrite                 = 0,
	None                           = 1,
	SCCM_Additive                  = 2,
	neByteProperty‘IntProperty  = 3,
	SCCM_Composite                 = 4,
	ByteProperty‘IntProperty    = 5,
	SCCM_MAX                       = 6,
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


// Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR              = 0,
	None                           = 1,
	SCS_SceneColorHDRNoAlpha       = 2,
	neByteProperty‘IntProperty  = 3,
	SCS_FinalColorLDR              = 4,
	ByteProperty‘IntProperty    = 5,
	SCS_SceneColorSceneDepth       = 6,
	ByteProperty                   = 7,
	SCS_SceneDepth                 = 8,
	teProperty‘IntProperty        = 9
};


// Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8_t
{
	ETranslucentSortPolicy__SortByDistance = 0,
	None                           = 1,
	ETranslucentSortPolicy__SortByProjectedZ = 2,
	neByteProperty‘IntProperty  = 3,
	ETranslucentSortPolicy__SortAlongAxis = 4,
	ByteProperty‘IntProperty    = 5,
	ETranslucentSortPolicy__ETranslucentSortPolicy_MAX = 6,
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


// Enum Engine.ERefractionMode
enum class ERefractionMode : uint8_t
{
	RM_IndexOfRefraction           = 0,
	None                           = 1,
	RM_PixelNormalOffset           = 2,
	neByteProperty‘IntProperty  = 3,
	RM_MAX                         = 4,
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


// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional   = 0,
	None                           = 1,
	TLM_VolumetricDirectional      = 2,
	neByteProperty‘IntProperty  = 3,
	TLM_VolumetricPerVertexNonDirectional = 4,
	ByteProperty‘IntProperty    = 5,
	TLM_VolumetricPerVertexDirectional = 6
};


// Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset           = 0,
	None                           = 1,
	SSM_Wrap_WorldGroupSettings    = 2,
	neByteProperty‘IntProperty  = 3,
	SSM_Clamp_WorldGroupSettings   = 4,
	ByteProperty‘IntProperty    = 5,
	SSM_MAX                        = 6,
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


// Enum Engine.EBlendMode
enum class EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	None                           = 1,
	BLEND_Masked                   = 2,
	neByteProperty‘IntProperty  = 3,
	BLEND_Translucent              = 4,
	ByteProperty‘IntProperty    = 5,
	BLEND_Additive                 = 6,
	ByteProperty                   = 7
};


// Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8_t
{
	OCM_Minimum                    = 0,
	None                           = 1,
	OCM_Multiply                   = 2
};


// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	None                           = 1,
	AspectRatio_MaintainXFOV       = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8_t
{
	EFontCacheType__Offline        = 0,
	None                           = 1,
	EFontCacheType__Runtime        = 2,
	neByteProperty‘IntProperty  = 3,
	EFontCacheType__EFontCacheType_MAX = 4,
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


// Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t
{
	FontICS_Default                = 0,
	None                           = 1,
	FontICS_Ansi                   = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EStandbyType
enum class EStandbyType : uint8_t
{
	STDBY_Rx                       = 0,
	None                           = 1,
	STDBY_Tx                       = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t
{
	ESuggestProjVelocityTraceOption__DoNotTrace = 0,
	None                           = 1,
	ESuggestProjVelocityTraceOption__TraceFullPath = 2,
	neByteProperty‘IntProperty  = 3,
	ESuggestProjVelocityTraceOption__OnlyTraceWhileAscending = 4,
	ByteProperty‘IntProperty    = 5,
	ESuggestProjVelocityTraceOption__ESuggestProjVelocityTraceOption_MAX = 6,
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


// Enum Engine.EWindowMode
enum class EWindowMode : uint8_t
{
	EWindowMode__Fullscreen        = 0,
	None                           = 1,
	EWindowMode__WindowedFullscreen = 2,
	neByteProperty‘IntProperty  = 3,
	EWindowMode__Windowed          = 4,
	ByteProperty‘IntProperty    = 5,
	EWindowMode__EWindowMode_MAX   = 6,
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


// Enum Engine.EImportanceWeight
enum class EImportanceWeight : uint8_t
{
	EImportanceWeight__Luminance   = 0,
	None                           = 1,
	EImportanceWeight__Red         = 2,
	neByteProperty‘IntProperty  = 3,
	EImportanceWeight__Green       = 4,
	ByteProperty‘IntProperty    = 5,
	EImportanceWeight__Blue        = 6,
	ByteProperty                   = 7,
	EImportanceWeight__Alpha       = 8,
	teProperty‘IntProperty        = 9,
	EImportanceWeight__EImportanceWeight_MAX = 10,
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


// Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner              = 0,
	None                           = 1,
	AMD_UserClosedAd               = 2
};


// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8_t
{
	EAnimAlphaInputType__Float     = 0,
	None                           = 1,
	EAnimAlphaInputType__Bool      = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimAlphaInputType__Curve     = 4,
	ByteProperty‘IntProperty    = 5,
	EAnimAlphaInputType__EAnimAlphaInputType_MAX = 6,
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


// Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8_t
{
	ETAC_Always                    = 0,
	None                           = 1,
	ETAC_GoreEnabled               = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                  = 0,
	None                           = 1,
	IMR_LookAtGroup                = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX              = 0,
	None                           = 1,
	AXIS_TranslationY              = 2,
	neByteProperty‘IntProperty  = 3,
	AXIS_TranslationZ              = 4,
	ByteProperty‘IntProperty    = 5,
	AXIS_RotationX                 = 6,
	ByteProperty                   = 7,
	AXIS_RotationY                 = 8,
	teProperty‘IntProperty        = 9,
	AXIS_RotationZ                 = 10,
	Property‘IntProperty          = 11,
	AXIS_MAX                       = 12,
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


// Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8_t
{
	ETTA_Off                       = 0,
	None                           = 1,
	ETTA_On                        = 2,
	neByteProperty‘IntProperty  = 3,
	ETTA_Toggle                    = 4
};


// Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8_t
{
	EVTC_Always                    = 0,
	None                           = 1,
	EVTC_GoreEnabled               = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8_t
{
	EVTA_Hide                      = 0,
	None                           = 1,
	EVTA_Show                      = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.ESlateGesture
enum class ESlateGesture : uint8_t
{
	ESlateGesture__None            = 0,
	None                           = 1,
	ESlateGesture__Scroll          = 2,
	neByteProperty‘IntProperty  = 3,
	ESlateGesture__Magnify         = 4,
	ByteProperty‘IntProperty    = 5,
	ESlateGesture__Swipe           = 6,
	ByteProperty                   = 7,
	ESlateGesture__Rotate          = 8,
	teProperty‘IntProperty        = 9,
	ESlateGesture__LongPress       = 10,
	Property‘IntProperty          = 11,
	ESlateGesture__ESlateGesture_MAX = 12,
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


// Enum Engine.EMatrixColumns
enum class EMatrixColumns : uint8_t
{
	EMatrixColumns__First          = 0,
	None                           = 1,
	EMatrixColumns__Second         = 2,
	neByteProperty‘IntProperty  = 3,
	EMatrixColumns__Third          = 4,
	ByteProperty‘IntProperty    = 5,
	EMatrixColumns__Fourth         = 6,
	ByteProperty                   = 7,
	EMatrixColumns__EMatrixColumns_MAX = 8,
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


// Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8_t
{
	ELerpInterpolationMode__QuatInterp = 0,
	None                           = 1,
	ELerpInterpolationMode__EulerInterp = 2,
	neByteProperty‘IntProperty  = 3,
	ELerpInterpolationMode__DualQuatInterp = 4,
	ByteProperty‘IntProperty    = 5,
	ELerpInterpolationMode__ELerpInterpolationMode_MAX = 6,
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


// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8_t
{
	EEasingFunc__Linear            = 0,
	None                           = 1,
	EEasingFunc__Step              = 2,
	neByteProperty‘IntProperty  = 3,
	EEasingFunc__SinusoidalIn      = 4,
	ByteProperty‘IntProperty    = 5,
	EEasingFunc__SinusoidalOut     = 6,
	ByteProperty                   = 7,
	EEasingFunc__SinusoidalInOut   = 8,
	teProperty‘IntProperty        = 9,
	EEasingFunc__EaseIn            = 10,
	Property‘IntProperty          = 11,
	EEasingFunc__EaseOut           = 12,
	operty‘IntProperty            = 13,
	EEasingFunc__EaseInOut         = 14,
	erty‘IntProperty              = 15,
	EEasingFunc__ExpoIn            = 16,
	ty‘IntProperty                = 17,
	EEasingFunc__ExpoOut           = 18,
	[Error]                        = 19,
	EEasingFunc__ExpoInOut         = 20,
	IntProperty                    = 21,
	EEasingFunc__CircularIn        = 22,
	tProperty                      = 23,
	EEasingFunc__CircularOut       = 24,
	roperty                        = 25,
	EEasingFunc__CircularInOut     = 26,
	perty                          = 27,
	EEasingFunc__EEasingFunc_MAX   = 28,
	rty                            = 29,
	None01                         = 30,
	None02                         = 31,
	None03                         = 32,
	None04                         = 33,
	None05                         = 34,
	None06                         = 35
};


// Enum Engine.ERoundingMode
enum class ERoundingMode : uint8_t
{
	HalfToEven                     = 0,
	None                           = 1,
	HalfFromZero                   = 2,
	neByteProperty‘IntProperty  = 3,
	HalfToZero                     = 4,
	ByteProperty‘IntProperty    = 5,
	FromZero                       = 6,
	ByteProperty                   = 7,
	ToZero                         = 8,
	teProperty‘IntProperty        = 9,
	ToNegativeInfinity             = 10,
	Property‘IntProperty          = 11,
	ToPositiveInfinity             = 12,
	operty‘IntProperty            = 13,
	ERoundingMode_MAX              = 14,
	erty‘IntProperty              = 15,
	None01                         = 16,
	None02                         = 17,
	None03                         = 18,
	None04                         = 19,
	None05                         = 20,
	None06                         = 21,
	None07                         = 22,
	None08                         = 23,
	None09                         = 24,
	None10                         = 25,
	None11                         = 26,
	None12                         = 27
};


// Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                    = 0,
	None                           = 1,
	SVB_LoadingAndVisibility       = 2,
	neByteProperty‘IntProperty  = 3,
	SVB_VisibilityBlockingOnLoad   = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8_t
{
	MDR_None                       = 0,
	None                           = 1,
	MDR_ColorNormalRoughness       = 2,
	neByteProperty‘IntProperty  = 3,
	MDR_Color                      = 4,
	ByteProperty‘IntProperty    = 5,
	MDR_ColorNormal                = 6,
	ByteProperty                   = 7,
	MDR_ColorRoughness             = 8,
	teProperty‘IntProperty        = 9
};


// Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8_t
{
	DBM_Translucent                = 0,
	None                           = 1,
	DBM_Stain                      = 2,
	neByteProperty‘IntProperty  = 3,
	DBM_Normal                     = 4,
	ByteProperty‘IntProperty    = 5,
	DBM_Emissive                   = 6,
	ByteProperty                   = 7,
	DBM_DBuffer_ColorNormalRoughness = 8,
	teProperty‘IntProperty        = 9,
	DBM_DBuffer_Color              = 10,
	Property‘IntProperty          = 11,
	DBM_DBuffer_ColorNormal        = 12,
	operty‘IntProperty            = 13,
	DBM_DBuffer_ColorRoughness     = 14,
	erty‘IntProperty              = 15,
	DBM_DBuffer_Normal             = 16,
	ty‘IntProperty                = 17
};


// Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8_t
{
	TCC_Red                        = 0,
	None                           = 1,
	TCC_Green                      = 2,
	neByteProperty‘IntProperty  = 3,
	TCC_Blue                       = 4
};


// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8_t
{
	EMaterialAttributeBlend__Blend = 0,
	None                           = 1,
	EMaterialAttributeBlend__UseA  = 2,
	neByteProperty‘IntProperty  = 3,
	EMaterialAttributeBlend__UseB  = 4,
	ByteProperty‘IntProperty    = 5,
	EMaterialAttributeBlend__EMaterialAttributeBlend_MAX = 6,
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


// Enum Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8_t
{
	EChannelMaskParameterColor__Red = 0,
	None                           = 1,
	EChannelMaskParameterColor__Green = 2,
	neByteProperty‘IntProperty  = 3,
	EChannelMaskParameterColor__Blue = 4,
	ByteProperty‘IntProperty    = 5,
	EChannelMaskParameterColor__Alpha = 6,
	ByteProperty                   = 7,
	EChannelMaskParameterColor__EChannelMaskParameterColor_MAX = 8,
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


// Enum Engine.EClampMode
enum class EClampMode : uint8_t
{
	CMODE_Clamp                    = 0,
	None                           = 1,
	CMODE_ClampMin                 = 2,
	neByteProperty‘IntProperty  = 3,
	CMODE_ClampMax                 = 4,
	ByteProperty‘IntProperty    = 5,
	CMODE_MAX                      = 6,
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


// Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1                    = 0,
	None                           = 1,
	CMOT_Float2                    = 2,
	neByteProperty‘IntProperty  = 3,
	CMOT_Float3                    = 4
};


// Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask            = 0,
	None                           = 1,
	TDOF_NearMask                  = 2,
	neByteProperty‘IntProperty  = 3,
	TDOF_FarMask                   = 4
};


// Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8_t
{
	FunctionInput_Scalar           = 0,
	None                           = 1,
	FunctionInput_Vector2          = 2,
	neByteProperty‘IntProperty  = 3,
	FunctionInput_Vector3          = 4,
	ByteProperty‘IntProperty    = 5,
	FunctionInput_Vector4          = 6,
	ByteProperty                   = 7,
	FunctionInput_Texture2D        = 8,
	teProperty‘IntProperty        = 9,
	FunctionInput_TextureCube      = 10,
	Property‘IntProperty          = 11
};


// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t
{
	NOISEFUNCTION_SimplexTex       = 0,
	None                           = 1,
	NOISEFUNCTION_GradientTex      = 2,
	neByteProperty‘IntProperty  = 3,
	NOISEFUNCTION_GradientTex3D    = 4,
	ByteProperty‘IntProperty    = 5,
	NOISEFUNCTION_GradientALU      = 6
};


// Enum Engine.ERuntimeVirtualTextureMipValueMode
enum class ERuntimeVirtualTextureMipValueMode : uint8_t
{
	RVTMVM_None                    = 0,
	None                           = 1,
	RVTMVM_MipLevel                = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8_t
{
	EMaterialSceneAttributeInputMode__Coordinates = 0,
	None                           = 1,
	EMaterialSceneAttributeInputMode__OffsetFraction = 2,
	neByteProperty‘IntProperty  = 3,
	EMaterialSceneAttributeInputMode__EMaterialSceneAttributeInputMode_MAX = 4,
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


// Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8_t
{
	STLOD_Pop                      = 0,
	None                           = 1,
	STLOD_Smooth                   = 2,
	neByteProperty‘IntProperty  = 3,
	STLOD_MAX                      = 4,
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


// Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8_t
{
	STW_None                       = 0,
	None                           = 1,
	STW_Fastest                    = 2,
	neByteProperty‘IntProperty  = 3,
	STW_Fast                       = 4,
	ByteProperty‘IntProperty    = 5,
	STW_Better                     = 6,
	ByteProperty                   = 7,
	STW_Best                       = 8,
	teProperty‘IntProperty        = 9,
	STW_Palm                       = 10,
	Property‘IntProperty          = 11,
	STW_BestPlus                   = 12,
	operty‘IntProperty            = 13,
	STW_MAX                        = 14,
	erty‘IntProperty              = 15,
	None01                         = 16,
	None02                         = 17,
	None03                         = 18,
	None04                         = 19,
	None05                         = 20,
	None06                         = 21,
	None07                         = 22,
	None08                         = 23,
	None09                         = 24,
	None10                         = 25,
	None11                         = 26,
	None12                         = 27
};


// Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8_t
{
	STG_Branch                     = 0,
	None                           = 1,
	STG_Frond                      = 2,
	neByteProperty‘IntProperty  = 3,
	STG_Leaf                       = 4,
	ByteProperty‘IntProperty    = 5,
	STG_FacingLeaf                 = 6,
	ByteProperty                   = 7,
	STG_Billboard                  = 8,
	teProperty‘IntProperty        = 9,
	STG_MAX                        = 10,
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


// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8_t
{
	TMTM_TextureSize               = 0,
	None                           = 1,
	TMTM_TexelSize                 = 2
};


// Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8_t
{
	TMVM_None                      = 0,
	None                           = 1,
	TMVM_MipLevel                  = 2,
	neByteProperty‘IntProperty  = 3,
	TMVM_MipBias                   = 4
};


// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent              = 0,
	None                           = 1,
	TRANSFORM_Local                = 2,
	neByteProperty‘IntProperty  = 3,
	TRANSFORM_World                = 4,
	ByteProperty‘IntProperty    = 5,
	TRANSFORM_View                 = 6
};


// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent        = 0,
	None                           = 1,
	TRANSFORMSOURCE_Local          = 2,
	neByteProperty‘IntProperty  = 3,
	TRANSFORMSOURCE_World          = 4,
	ByteProperty‘IntProperty    = 5,
	TRANSFORMSOURCE_View           = 6
};


// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	None                           = 1,
	TRANSFORMPOSSOURCE_World       = 2,
	neByteProperty‘IntProperty  = 3,
	TRANSFORMPOSSOURCE_TranslatedWorld = 4,
	ByteProperty‘IntProperty    = 5,
	TRANSFORMPOSSOURCE_View        = 6
};


// Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8_t
{
	VNF_CellnoiseALU               = 0,
	None                           = 1,
	VNF_VectorALU                  = 2,
	neByteProperty‘IntProperty  = 3,
	VNF_GradientALU                = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize                = 0,
	None                           = 1,
	MEVP_FieldOfView               = 2,
	neByteProperty‘IntProperty  = 3,
	MEVP_TanHalfFieldOfView        = 4,
	ByteProperty‘IntProperty    = 5,
	MEVP_ViewSize                  = 6,
	ByteProperty                   = 7,
	MEVP_WorldSpaceViewPosition    = 8,
	teProperty‘IntProperty        = 9,
	MEVP_WorldSpaceCameraPosition  = 10,
	Property‘IntProperty          = 11,
	MEVP_ViewportOffset            = 12,
	operty‘IntProperty            = 13
};


// Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default                    = 0,
	None                           = 1,
	WPT_ExcludeAllShaderOffsets    = 2,
	neByteProperty‘IntProperty  = 3,
	WPT_CameraRelative             = 4
};


// Enum Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8_t
{
	EMaterialFunctionUsage__Default = 0,
	None                           = 1,
	EMaterialFunctionUsage__MaterialLayer = 2,
	neByteProperty‘IntProperty  = 3,
	EMaterialFunctionUsage__MaterialLayerBlend = 4,
	ByteProperty‘IntProperty    = 5,
	EMaterialFunctionUsage__EMaterialFunctionUsage_MAX = 6,
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


// Enum Engine.EMaterialUsage
enum class EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh          = 0,
	None                           = 1,
	MATUSAGE_ParticleSprites       = 2,
	neByteProperty‘IntProperty  = 3,
	MATUSAGE_BeamTrails            = 4,
	ByteProperty‘IntProperty    = 5,
	MATUSAGE_MeshParticles         = 6,
	ByteProperty                   = 7,
	MATUSAGE_StaticLighting        = 8,
	teProperty‘IntProperty        = 9,
	MATUSAGE_MorphTargets          = 10,
	Property‘IntProperty          = 11,
	MATUSAGE_SplineMesh            = 12,
	operty‘IntProperty            = 13,
	MATUSAGE_InstancedStaticMeshes = 14,
	erty‘IntProperty              = 15,
	MATUSAGE_GeometryCollections   = 16,
	ty‘IntProperty                = 17
};


// Enum Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8_t
{
	LayerParameter                 = 0,
	None                           = 1,
	BlendParameter                 = 2,
	neByteProperty‘IntProperty  = 3,
	GlobalParameter                = 4,
	ByteProperty‘IntProperty    = 5,
	EMaterialParameterAssociation_MAX = 6,
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


// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8_t
{
	MaterialMergeType_Default      = 0,
	None                           = 1,
	MaterialMergeType_Simplygon    = 2,
	neByteProperty‘IntProperty  = 3,
	MaterialMergeType_MAX          = 4,
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


// Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8_t
{
	TextureSizingType_UseSingleTextureSize = 0,
	None                           = 1,
	TextureSizingType_UseAutomaticBiasedSizes = 2,
	neByteProperty‘IntProperty  = 3,
	TextureSizingType_UseManualOverrideTextureSize = 4
};


// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8_t
{
	PPI_SceneColor                 = 0,
	None                           = 1,
	PPI_SceneDepth                 = 2,
	neByteProperty‘IntProperty  = 3,
	PPI_DiffuseColor               = 4,
	ByteProperty‘IntProperty    = 5,
	PPI_SpecularColor              = 6,
	ByteProperty                   = 7,
	PPI_SubsurfaceColor            = 8,
	teProperty‘IntProperty        = 9,
	PPI_BaseColor                  = 10,
	Property‘IntProperty          = 11,
	PPI_Specular                   = 12,
	operty‘IntProperty            = 13,
	PPI_Metallic                   = 14,
	erty‘IntProperty              = 15,
	PPI_WorldNormal                = 16,
	ty‘IntProperty                = 17,
	PPI_SeparateTranslucency       = 18,
	[Error]                        = 19,
	PPI_Opacity                    = 20,
	IntProperty                    = 21,
	PPI_Roughness                  = 22,
	tProperty                      = 23,
	PPI_MaterialAO                 = 24,
	roperty                        = 25,
	PPI_CustomDepth                = 26,
	perty                          = 27,
	PPI_PostProcessInput0          = 28,
	rty                            = 29,
	PPI_PostProcessInput1          = 30,
	y                              = 31
};


// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8_t
{
	MD_Surface                     = 0,
	None                           = 1,
	MD_DeferredDecal               = 2,
	neByteProperty‘IntProperty  = 3,
	MD_LightFunction               = 4,
	ByteProperty‘IntProperty    = 5,
	MD_Volume                      = 6,
	ByteProperty                   = 7
};


// Enum Engine.EMeshInstancingReplacementMethod
enum class EMeshInstancingReplacementMethod : uint8_t
{
	EMeshInstancingReplacementMethod__RemoveOriginalActors = 0,
	None                           = 1,
	EMeshInstancingReplacementMethod__KeepOriginalActorsAsEditorOnly = 2,
	neByteProperty‘IntProperty  = 3,
	EMeshInstancingReplacementMethod__EMeshInstancingReplacementMethod_MAX = 4,
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


// Enum Engine.EUVOutput
enum class EUVOutput : uint8_t
{
	EUVOutput__DoNotOutputChannel  = 0,
	None                           = 1,
	EUVOutput__OutputChannel       = 2,
	neByteProperty‘IntProperty  = 3,
	EUVOutput__EUVOutput_MAX       = 4,
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


// Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8_t
{
	EMeshMergeType__MeshMergeType_Default = 0,
	None                           = 1,
	EMeshMergeType__MeshMergeType_MergeActor = 2,
	neByteProperty‘IntProperty  = 3,
	EMeshMergeType__MeshMergeType_MAX = 4,
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


// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8_t
{
	EMeshLODSelectionType__AllLODs = 0,
	None                           = 1,
	EMeshLODSelectionType__SpecificLOD = 2,
	neByteProperty‘IntProperty  = 3,
	EMeshLODSelectionType__CalculateLOD = 4,
	ByteProperty‘IntProperty    = 5,
	EMeshLODSelectionType__LowestDetailLOD = 6,
	ByteProperty                   = 7,
	EMeshLODSelectionType__EMeshLODSelectionType_MAX = 8,
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


// Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8_t
{
	EProxyNormalComputationMethod__AngleWeighted = 0,
	None                           = 1,
	EProxyNormalComputationMethod__AreaWeighted = 2,
	neByteProperty‘IntProperty  = 3,
	EProxyNormalComputationMethod__EqualWeighted = 4,
	ByteProperty‘IntProperty    = 5,
	EProxyNormalComputationMethod__EProxyNormalComputationMethod_MAX = 6,
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


// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8_t
{
	ELandscapeCullingPrecision__High = 0,
	None                           = 1,
	ELandscapeCullingPrecision__Medium = 2,
	neByteProperty‘IntProperty  = 3,
	ELandscapeCullingPrecision__Low = 4,
	ByteProperty‘IntProperty    = 5,
	ELandscapeCullingPrecision__ELandscapeCullingPrecision_MAX = 6,
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


// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8_t
{
	EStaticMeshReductionTerimationCriterion__Triangles = 0,
	None                           = 1,
	EStaticMeshReductionTerimationCriterion__Vertices = 2,
	neByteProperty‘IntProperty  = 3,
	EStaticMeshReductionTerimationCriterion__Any = 4,
	ByteProperty‘IntProperty    = 5,
	EStaticMeshReductionTerimationCriterion__EStaticMeshReductionTerimationCriterion_MAX = 6,
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


// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8_t
{
	EMeshFeatureImportance__Off    = 0,
	None                           = 1,
	EMeshFeatureImportance__Lowest = 2,
	neByteProperty‘IntProperty  = 3,
	EMeshFeatureImportance__Low    = 4,
	ByteProperty‘IntProperty    = 5,
	EMeshFeatureImportance__Normal = 6,
	ByteProperty                   = 7,
	EMeshFeatureImportance__High   = 8,
	teProperty‘IntProperty        = 9,
	EMeshFeatureImportance__Highest = 10,
	Property‘IntProperty          = 11,
	EMeshFeatureImportance__EMeshFeatureImportance_MAX = 12,
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


// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8_t
{
	EVertexPaintAxis__X            = 0,
	None                           = 1,
	EVertexPaintAxis__Y            = 2,
	neByteProperty‘IntProperty  = 3,
	EVertexPaintAxis__Z            = 4,
	ByteProperty‘IntProperty    = 5,
	EVertexPaintAxis__EVertexPaintAxis_MAX = 6,
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


// Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t
{
	MTR_Succeeded                  = 0,
	None                           = 1,
	MTR_Failed                     = 2,
	neByteProperty‘IntProperty  = 3,
	MTR_Canceled                   = 4
};


// Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete      = 0,
	None                           = 1,
	MTD_PurchaseComplete           = 2
};


// Enum Engine.FNavigationSystemRunMode
enum class EFNavigationSystemRunMode : uint8_t
{
	FNavigationSystemRunMode__InvalidMode = 0,
	None                           = 1,
	FNavigationSystemRunMode__GameMode = 2,
	neByteProperty‘IntProperty  = 3,
	FNavigationSystemRunMode__EditorMode = 4,
	ByteProperty‘IntProperty    = 5,
	FNavigationSystemRunMode__SimulationMode = 6,
	ByteProperty                   = 7,
	FNavigationSystemRunMode__PIEMode = 8,
	teProperty‘IntProperty        = 9,
	FNavigationSystemRunMode__FNavigationSystemRunMode_MAX = 10,
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


// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8_t
{
	ENavigationQueryResult__Invalid = 0,
	None                           = 1,
	ENavigationQueryResult__Error  = 2,
	neByteProperty‘IntProperty  = 3,
	ENavigationQueryResult__Fail   = 4,
	ByteProperty‘IntProperty    = 5,
	ENavigationQueryResult__Success = 6,
	ByteProperty                   = 7,
	ENavigationQueryResult__ENavigationQueryResult_MAX = 8,
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


// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8_t
{
	ENavPathEvent__Cleared         = 0,
	None                           = 1,
	ENavPathEvent__NewPath         = 2,
	neByteProperty‘IntProperty  = 3,
	ENavPathEvent__UpdatedDueToGoalMoved = 4,
	ByteProperty‘IntProperty    = 5,
	ENavPathEvent__UpdatedDueToNavigationChanged = 6,
	ByteProperty                   = 7,
	ENavPathEvent__Invalidated     = 8,
	teProperty‘IntProperty        = 9,
	ENavPathEvent__RePathFailed    = 10,
	Property‘IntProperty          = 11,
	ENavPathEvent__MetaPathUpdate  = 12,
	operty‘IntProperty            = 13,
	ENavPathEvent__Custom          = 14,
	erty‘IntProperty              = 15,
	ENavPathEvent__ENavPathEvent_MAX = 16,
	ty‘IntProperty                = 17,
	None01                         = 18,
	None02                         = 19,
	None03                         = 20,
	None04                         = 21,
	None05                         = 22,
	None06                         = 23,
	None07                         = 24,
	None08                         = 25,
	None09                         = 26,
	None10                         = 27
};


// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8_t
{
	ENavDataGatheringModeConfig__Invalid = 0,
	None                           = 1,
	ENavDataGatheringModeConfig__Instant = 2,
	neByteProperty‘IntProperty  = 3,
	ENavDataGatheringModeConfig__Lazy = 4,
	ByteProperty‘IntProperty    = 5,
	ENavDataGatheringModeConfig__ENavDataGatheringModeConfig_MAX = 6,
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


// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8_t
{
	ENavDataGatheringMode__Default = 0,
	None                           = 1,
	ENavDataGatheringMode__Instant = 2,
	neByteProperty‘IntProperty  = 3,
	ENavDataGatheringMode__Lazy    = 4,
	ByteProperty‘IntProperty    = 5,
	ENavDataGatheringMode__ENavDataGatheringMode_MAX = 6,
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


// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8_t
{
	ENavigationOptionFlag__Default = 0,
	None                           = 1,
	ENavigationOptionFlag__Enable  = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t
{
	ENavLinkDirection__BothWays    = 0,
	None                           = 1,
	ENavLinkDirection__LeftToRight = 2,
	neByteProperty‘IntProperty  = 3,
	ENavLinkDirection__RightToLeft = 4,
	ByteProperty‘IntProperty    = 5,
	ENavLinkDirection__ENavLinkDirection_MAX = 6,
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


// Enum Engine.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8_t
{
	EFastArraySerializerDeltaFlags__None = 0,
	None                           = 1,
	EFastArraySerializerDeltaFlags__HasBeenSerialized = 2,
	neByteProperty‘IntProperty  = 3,
	EFastArraySerializerDeltaFlags__HasDeltaBeenRequested = 4,
	ByteProperty‘IntProperty    = 5,
	EFastArraySerializerDeltaFlags__IsUsingDeltaSerialization = 6,
	teProperty‘IntProperty        = 7,
	EFastArraySerializerDeltaFlags__EFastArraySerializerDeltaFlags_MAX = 8,
	Property‘IntProperty          = 9,
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


// Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t
{
	ERM_Normal                     = 0,
	None                           = 1,
	ERM_Point                      = 2,
	neByteProperty‘IntProperty  = 3,
	ERM_Cross                      = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	None                           = 1,
	PSUVIM_Linear                  = 2,
	neByteProperty‘IntProperty  = 3,
	PSUVIM_Linear_Blend            = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t
{
	EPBM_Instant                   = 0,
	None                           = 1,
	EPBM_Interpolated              = 2
};


// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8_t
{
	EParticleSystemInsignificanceReaction__Auto = 0,
	None                           = 1,
	EParticleSystemInsignificanceReaction__Complete = 2,
	neByteProperty‘IntProperty  = 3,
	EParticleSystemInsignificanceReaction__DisableTick = 4,
	ByteProperty‘IntProperty    = 5,
	EParticleSystemInsignificanceReaction__DisableTickAndKill = 6,
	ByteProperty                   = 7,
	EParticleSystemInsignificanceReaction__Num = 8,
	teProperty‘IntProperty        = 9,
	EParticleSystemInsignificanceReaction__EParticleSystemInsignificanceReaction_MAX = 10,
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


// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8_t
{
	EParticleSignificanceLevel__Low = 0,
	None                           = 1,
	EParticleSignificanceLevel__Medium = 2,
	neByteProperty‘IntProperty  = 3,
	EParticleSignificanceLevel__High = 4,
	ByteProperty‘IntProperty    = 5,
	EParticleSignificanceLevel__Critical = 6,
	ByteProperty                   = 7,
	EParticleSignificanceLevel__Num = 8,
	teProperty‘IntProperty        = 9,
	EParticleSignificanceLevel__EParticleSignificanceLevel_MAX = 10,
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


// Enum Engine.EParticleDetailMode
enum class EParticleDetailMode : uint8_t
{
	PDM_Low                        = 0,
	None                           = 1,
	PDM_Medium                     = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                   = 0,
	None                           = 1,
	EPSSM_Sequential               = 2
};


// Enum Engine.EModuleType
enum class EModuleType : uint8_t
{
	EPMT_General                   = 0,
	None                           = 1,
	EPMT_TypeData                  = 2,
	neByteProperty‘IntProperty  = 3,
	EPMT_Beam                      = 4,
	ByteProperty‘IntProperty    = 5,
	EPMT_Trail                     = 6,
	ByteProperty                   = 7,
	EPMT_Spawn                     = 8,
	teProperty‘IntProperty        = 9
};


// Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                   = 0,
	None                           = 1,
	EAPSM_Sequential               = 2
};


// Enum Engine.Beam2SourceTargetTangentMethod
enum class EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                = 0,
	None                           = 1,
	PEB2STTM_UserSet               = 2,
	neByteProperty‘IntProperty  = 3,
	PEB2STTM_Distribution          = 4
};


// Enum Engine.Beam2SourceTargetMethod
enum class EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                = 0,
	None                           = 1,
	PEB2STM_UserSet                = 2,
	neByteProperty‘IntProperty  = 3,
	PEB2STM_Emitter                = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum Engine.BeamModifierType
enum class EBeamModifierType : uint8_t
{
	PEB2MT_Source                  = 0,
	None                           = 1,
	PEB2MT_Target                  = 2
};


// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet               = 0,
	None                           = 1,
	EPCOUM_Additive                = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                      = 0,
	None                           = 1,
	EPCC_Freeze                    = 2,
	neByteProperty‘IntProperty  = 3,
	EPCC_HaltCollisions            = 4,
	ByteProperty‘IntProperty    = 5,
	EPCC_FreezeTranslation         = 6
};


// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t
{
	EParticleCollisionResponse__Bounce = 0,
	None                           = 1,
	EParticleCollisionResponse__Stop = 2,
	neByteProperty‘IntProperty  = 3,
	EParticleCollisionResponse__Kill = 4,
	ByteProperty‘IntProperty    = 5,
	EParticleCollisionResponse__EParticleCollisionResponse_MAX = 6,
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


// Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential       = 0,
	None                           = 1,
	BONESOCKETSEL_Random           = 2
};


// Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones         = 0,
	None                           = 1,
	BONESOCKETSOURCE_Sockets       = 2
};


// Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                   = 0,
	None                           = 1,
	ELESM_Sequential               = 2
};


// Enum Engine.CylinderHeightAxis
enum class ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X             = 0,
	None                           = 1,
	PMLPC_HEIGHTAXIS_Y             = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert         = 0,
	None                           = 1,
	VERTSURFACESOURCE_Surface      = 2
};


// Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8_t
{
	EOChainMode_Add                = 0,
	None                           = 1,
	EOChainMode_Scale              = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8_t
{
	EPAL_NONE                      = 0,
	None                           = 1,
	EPAL_X                         = 2,
	neByteProperty‘IntProperty  = 3,
	EPAL_Y                         = 4,
	ByteProperty‘IntProperty    = 5,
	EPAL_Z                         = 6,
	ByteProperty                   = 7,
	EPAL_NEGATIVE_X                = 8,
	teProperty‘IntProperty        = 9,
	EPAL_NEGATIVE_Y                = 10,
	Property‘IntProperty          = 11
};


// Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet                   = 0,
	None                           = 1,
	EDPV_AutoSet                   = 2,
	neByteProperty‘IntProperty  = 3,
	EDPV_VelocityX                 = 4,
	ByteProperty‘IntProperty    = 5,
	EDPV_VelocityY                 = 6
};


// Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing               = 0,
	None                           = 1,
	ENM_Spherical                  = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8_t
{
	PSORTMODE_None                 = 0,
	None                           = 1,
	PSORTMODE_ViewProjDepth        = 2,
	neByteProperty‘IntProperty  = 3,
	PSORTMODE_DistanceToView       = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8_t
{
	EParticleUVFlipMode__None      = 0,
	None                           = 1,
	EParticleUVFlipMode__FlipUV    = 2,
	neByteProperty‘IntProperty  = 3,
	EParticleUVFlipMode__FlipUOnly = 4,
	ByteProperty‘IntProperty    = 5,
	EParticleUVFlipMode__FlipVOnly = 6,
	ByteProperty                   = 7,
	EParticleUVFlipMode__RandomFlipUV = 8,
	teProperty‘IntProperty        = 9,
	EParticleUVFlipMode__RandomFlipUOnly = 10,
	Property‘IntProperty          = 11,
	EParticleUVFlipMode__RandomFlipVOnly = 12,
	operty‘IntProperty            = 13,
	EParticleUVFlipMode__RandomFlipUVIndependent = 14,
	erty‘IntProperty              = 15,
	EParticleUVFlipMode__EParticleUVFlipMode_MAX = 16,
	ty‘IntProperty                = 17,
	None01                         = 18,
	None02                         = 19,
	None03                         = 20,
	None04                         = 21,
	None05                         = 22,
	None06                         = 23,
	None07                         = 24,
	None08                         = 25,
	None09                         = 26,
	None10                         = 27
};


// Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default               = 0,
	None                           = 1,
	PET2SRCM_Particle              = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t
{
	PEBTM_None                     = 0,
	None                           = 1,
	PEBTM_Full                     = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EBeam2Method
enum class EBeam2Method : uint8_t
{
	PEB2M_Distance                 = 0,
	None                           = 1,
	PEB2M_Target                   = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp               = 0,
	None                           = 1,
	XAxisFacing_ZUp                = 2,
	neByteProperty‘IntProperty  = 3,
	XAxisFacing_NegativeZUp        = 4,
	ByteProperty‘IntProperty    = 5,
	XAxisFacing_YUp                = 6,
	ByteProperty                   = 7,
	XAxisFacing_NegativeYUp        = 8,
	teProperty‘IntProperty        = 9,
	LockedAxis_ZAxisFacing         = 10,
	Property‘IntProperty          = 11,
	LockedAxis_NegativeZAxisFacing = 12,
	operty‘IntProperty            = 13
};


// Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP            = 0,
	None                           = 1,
	CameraFacing_ZUp               = 2,
	neByteProperty‘IntProperty  = 3,
	CameraFacing_NegativeZUp       = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	None                           = 1,
	PSMA_MeshFaceCameraWithSpin    = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp                = 0,
	None                           = 1,
	Trails_SourceUp                = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition       = 0,
	None                           = 1,
	PSA_Square                     = 2,
	neByteProperty‘IntProperty  = 3,
	PSA_Rectangle                  = 4,
	ByteProperty‘IntProperty    = 5,
	PSA_Velocity                   = 6,
	ByteProperty                   = 7
};


// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None                    = 0,
	None                           = 1,
	EPSOBM_ParticleBounds          = 2,
	neByteProperty‘IntProperty  = 3,
	EPSOBM_CustomBounds            = 4,
	ByteProperty‘IntProperty    = 5,
	EPSOBM_MAX                     = 6,
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


// Enum Engine.ParticleSystemLODMethod
enum class EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	None                           = 1,
	PARTICLESYSTEMLODMETHOD_DirectSet = 2,
	neByteProperty‘IntProperty  = 3,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 4,
	ByteProperty‘IntProperty    = 5,
	PARTICLESYSTEMLODMETHOD_MAX    = 6,
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


// Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                 = 0,
	None                           = 1,
	EPSUM_FixedTime                = 2,
	neByteProperty‘IntProperty  = 3,
	EPSUM_MAX                      = 4,
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


// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	None                           = 1,
	EPET_Spawn                     = 2,
	neByteProperty‘IntProperty  = 3,
	EPET_Death                     = 4,
	ByteProperty‘IntProperty    = 5,
	EPET_Collision                 = 6
};


// Enum Engine.ParticleReplayState
enum class EParticleReplayState : uint8_t
{
	PRS_Disabled                   = 0,
	None                           = 1,
	PRS_Capturing                  = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8_t
{
	PSPT_None                      = 0,
	None                           = 1,
	PSPT_Scalar                    = 2,
	neByteProperty‘IntProperty  = 3,
	PSPT_ScalarRand                = 4,
	ByteProperty‘IntProperty    = 5,
	PSPT_Vector                    = 6,
	ByteProperty                   = 7,
	PSPT_VectorRand                = 8,
	teProperty‘IntProperty        = 9
};


// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8_t
{
	ESettingsLockedAxis__None      = 0,
	None                           = 1,
	ESettingsLockedAxis__X         = 2,
	neByteProperty‘IntProperty  = 3,
	ESettingsLockedAxis__Y         = 4,
	ByteProperty‘IntProperty    = 5,
	ESettingsLockedAxis__Z         = 6,
	ByteProperty                   = 7,
	ESettingsLockedAxis__Invalid   = 8,
	teProperty‘IntProperty        = 9,
	ESettingsLockedAxis__ESettingsLockedAxis_MAX = 10,
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


// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8_t
{
	ESettingsDOF__Full3D           = 0,
	None                           = 1,
	ESettingsDOF__YZPlane          = 2,
	neByteProperty‘IntProperty  = 3,
	ESettingsDOF__XZPlane          = 4,
	ByteProperty‘IntProperty    = 5,
	ESettingsDOF__XYPlane          = 6,
	ByteProperty                   = 7,
	ESettingsDOF__ESettingsDOF_MAX = 8,
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


// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8_t
{
	EFrictionCombineMode__Average  = 0,
	None                           = 1,
	EFrictionCombineMode__Min      = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8_t
{
	EReflectionSourceType__CapturedScene = 0,
	None                           = 1,
	EReflectionSourceType__SpecifiedCubemap = 2,
	neByteProperty‘IntProperty  = 3,
	EReflectionSourceType__EReflectionSourceType_MAX = 4,
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


// Enum Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8_t
{
	EDefaultBackBufferPixelFormat__DBBPF_B8G8R8A8 = 0,
	None                           = 1,
	EDefaultBackBufferPixelFormat__DBBPF_A16B16G16R16_DEPRECATED = 2,
	neByteProperty‘IntProperty  = 3,
	EDefaultBackBufferPixelFormat__DBBPF_FloatRGB_DEPRECATED = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8_t
{
	EAutoExposureMethodUI__AEM_Histogram = 0,
	None                           = 1,
	EAutoExposureMethodUI__AEM_Basic = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8_t
{
	EAlphaChannelMode__Disabled    = 0,
	None                           = 1,
	EAlphaChannelMode__LinearColorSpaceOnly = 2,
	neByteProperty‘IntProperty  = 3,
	EAlphaChannelMode__AllowThroughTonemapper = 4,
	ByteProperty‘IntProperty    = 5,
	EAlphaChannelMode__EAlphaChannelMode_MAX = 6,
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


// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8_t
{
	EEarlyZPass__None              = 0,
	None                           = 1,
	EEarlyZPass__OpaqueOnly        = 2,
	neByteProperty‘IntProperty  = 3,
	EEarlyZPass__OpaqueAndMasked   = 4,
	ByteProperty‘IntProperty    = 5,
	EEarlyZPass__Auto              = 6,
	ByteProperty                   = 7,
	EEarlyZPass__EEarlyZPass_MAX   = 8,
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


// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8_t
{
	ECustomDepthStencil__Disabled  = 0,
	None                           = 1,
	ECustomDepthStencil__Enabled   = 2,
	neByteProperty‘IntProperty  = 3,
	ECustomDepthStencil__EnabledOnDemand = 4,
	ByteProperty‘IntProperty    = 5,
	ECustomDepthStencil__EnabledWithStencil = 6,
	ByteProperty                   = 7,
	ECustomDepthStencil__ECustomDepthStencil_MAX = 8,
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


// Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8_t
{
	EMobileMSAASampleCount__One    = 0,
	neByteProperty‘IntProperty  = 1,
	EMobileMSAASampleCount__Two    = 2,
	ByteProperty‘IntProperty    = 3,
	EMobileMSAASampleCount__Four   = 4,
	teProperty‘IntProperty        = 5,
	EMobileMSAASampleCount__Eight  = 6,
	ty‘IntProperty                = 7,
	EMobileMSAASampleCount__EMobileMSAASampleCount_MAX = 8,
	[Error]                        = 9,
	None                           = 10,
	None01                         = 11,
	None02                         = 12,
	None03                         = 13,
	None04                         = 14,
	None05                         = 15,
	None06                         = 16,
	None07                         = 17,
	None08                         = 18,
	None09                         = 19,
	None10                         = 20,
	None11                         = 21,
	None12                         = 22,
	None13                         = 23
};


// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8_t
{
	ECompositingSampleCount__One   = 0,
	neByteProperty‘IntProperty  = 1,
	ECompositingSampleCount__Two   = 2,
	ByteProperty‘IntProperty    = 3,
	ECompositingSampleCount__Four  = 4,
	teProperty‘IntProperty        = 5,
	ECompositingSampleCount__Eight = 6,
	ty‘IntProperty                = 7,
	ECompositingSampleCount__ECompositingSampleCount_MAX = 8,
	[Error]                        = 9,
	None                           = 10,
	None01                         = 11,
	None02                         = 12,
	None03                         = 13,
	None04                         = 14,
	None05                         = 15,
	None06                         = 16,
	None07                         = 17,
	None08                         = 18,
	None09                         = 19,
	None10                         = 20,
	None11                         = 21,
	None12                         = 22,
	None13                         = 23
};


// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8_t
{
	EClearSceneOptions__NoClear    = 0,
	None                           = 1,
	EClearSceneOptions__HardwareClear = 2,
	neByteProperty‘IntProperty  = 3,
	EClearSceneOptions__QuadAtMaxZ = 4,
	ByteProperty‘IntProperty    = 5,
	EClearSceneOptions__EClearSceneOptions_MAX = 6,
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


// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8_t
{
	EReporterLineStyle__Line       = 0,
	None                           = 1,
	EReporterLineStyle__Dash       = 2,
	neByteProperty‘IntProperty  = 3,
	EReporterLineStyle__EReporterLineStyle_MAX = 4,
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


// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8_t
{
	ELegendPosition__Outside       = 0,
	None                           = 1,
	ELegendPosition__Inside        = 2,
	neByteProperty‘IntProperty  = 3,
	ELegendPosition__ELegendPosition_MAX = 4,
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


// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8_t
{
	EGraphDataStyle__Lines         = 0,
	None                           = 1,
	EGraphDataStyle__Filled        = 2,
	neByteProperty‘IntProperty  = 3,
	EGraphDataStyle__EGraphDataStyle_MAX = 4,
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


// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8_t
{
	EGraphAxisStyle__Lines         = 0,
	None                           = 1,
	EGraphAxisStyle__Notches       = 2,
	neByteProperty‘IntProperty  = 3,
	EGraphAxisStyle__Grid          = 4,
	ByteProperty‘IntProperty    = 5,
	EGraphAxisStyle__EGraphAxisStyle_MAX = 6,
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


// Enum Engine.ERichCurveKeyTimeCompressionFormat
enum class ERichCurveKeyTimeCompressionFormat : uint8_t
{
	RCKTCF_uint16                  = 0,
	None                           = 1,
	RCKTCF_float32                 = 2,
	neByteProperty‘IntProperty  = 3,
	RCKTCF_MAX                     = 4,
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


// Enum Engine.ERichCurveCompressionFormat
enum class ERichCurveCompressionFormat : uint8_t
{
	RCCF_Empty                     = 0,
	None                           = 1,
	RCCF_Constant                  = 2,
	neByteProperty‘IntProperty  = 3,
	RCCF_Linear                    = 4,
	ByteProperty‘IntProperty    = 5,
	RCCF_Cubic                     = 6,
	ByteProperty                   = 7,
	RCCF_Mixed                     = 8,
	teProperty‘IntProperty        = 9,
	RCCF_MAX                       = 10,
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


// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8_t
{
	EConstraintTransform__Absolute = 0,
	None                           = 1,
	EConstraintTransform__Relative = 2,
	neByteProperty‘IntProperty  = 3,
	EConstraintTransform__EConstraintTransform_MAX = 4,
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


// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8_t
{
	EControlConstraint__Orientation = 0,
	None                           = 1,
	EControlConstraint__Translation = 2
};


// Enum Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8_t
{
	ERootMotionFinishVelocityMode__MaintainLastRootMotionVelocity = 0,
	None                           = 1,
	ERootMotionFinishVelocityMode__SetVelocity = 2,
	neByteProperty‘IntProperty  = 3,
	ERootMotionFinishVelocityMode__ClampVelocity = 4,
	ByteProperty‘IntProperty    = 5,
	ERootMotionFinishVelocityMode__ERootMotionFinishVelocityMode_MAX = 6,
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


// Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8_t
{
	ERootMotionSourceSettingsFlags__UseSensitiveLiftoffCheck = 0,
	neByteProperty‘IntProperty  = 1,
	ERootMotionSourceSettingsFlags__DisablePartialEndTick = 2,
	ByteProperty‘IntProperty    = 3,
	ERootMotionSourceSettingsFlags__ERootMotionSourceSettingsFlags_MAX = 4,
	ByteProperty                   = 5,
	None                           = 6,
	None01                         = 7,
	None02                         = 8,
	None03                         = 9,
	None04                         = 10,
	None05                         = 11,
	None06                         = 12,
	None07                         = 13,
	None08                         = 14,
	None09                         = 15,
	None10                         = 16,
	None11                         = 17,
	None12                         = 18,
	None13                         = 19
};


// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8_t
{
	ERootMotionSourceStatusFlags__Prepared = 0,
	neByteProperty‘IntProperty  = 1,
	ERootMotionSourceStatusFlags__Finished = 2,
	ByteProperty‘IntProperty    = 3,
	ERootMotionSourceStatusFlags__MarkedForRemoval = 4,
	teProperty‘IntProperty        = 5,
	ERootMotionSourceStatusFlags__ERootMotionSourceStatusFlags_MAX = 6,
	Property‘IntProperty          = 7,
	None                           = 8,
	None01                         = 9,
	None02                         = 10,
	None03                         = 11,
	None04                         = 12,
	None05                         = 13,
	None06                         = 14,
	None07                         = 15,
	None08                         = 16,
	None09                         = 17,
	None10                         = 18,
	None11                         = 19,
	None12                         = 20,
	None13                         = 21,
	None14                         = 22,
	None15                         = 23
};


// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8_t
{
	ERootMotionAccumulateMode__Override = 0,
	None                           = 1,
	ERootMotionAccumulateMode__Additive = 2,
	neByteProperty‘IntProperty  = 3,
	ERootMotionAccumulateMode__ERootMotionAccumulateMode_MAX = 4,
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


// Enum Engine.ERuntimeVirtualTextureDebugType
enum class ERuntimeVirtualTextureDebugType : uint8_t
{
	ERuntimeVirtualTextureDebugType__None = 0,
	None                           = 1,
	ERuntimeVirtualTextureDebugType__Debug = 2,
	neByteProperty‘IntProperty  = 3,
	ERuntimeVirtualTextureDebugType__ERuntimeVirtualTextureDebugType_MAX = 4,
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


// Enum Engine.ERuntimeVirtualTextureMaterialType
enum class ERuntimeVirtualTextureMaterialType : uint8_t
{
	ERuntimeVirtualTextureMaterialType__BaseColor = 0,
	None                           = 1,
	ERuntimeVirtualTextureMaterialType__BaseColor_Normal_DEPRECATED = 2,
	neByteProperty‘IntProperty  = 3,
	ERuntimeVirtualTextureMaterialType__BaseColor_Normal_Specular = 4,
	ByteProperty‘IntProperty    = 5,
	ERuntimeVirtualTextureMaterialType__BaseColor_Normal_Specular_YCoCg = 6,
	ByteProperty                   = 7,
	ERuntimeVirtualTextureMaterialType__WorldHeight = 8,
	teProperty‘IntProperty        = 9,
	ERuntimeVirtualTextureMaterialType__Count = 10,
	Property‘IntProperty          = 11,
	ERuntimeVirtualTextureMaterialType__ERuntimeVirtualTextureMaterialType_MAX = 12,
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


// Enum Engine.ELightUnits
enum class ELightUnits : uint8_t
{
	ELightUnits__Unitless          = 0,
	None                           = 1,
	ELightUnits__Candelas          = 2,
	neByteProperty‘IntProperty  = 3,
	ELightUnits__Lumens            = 4,
	ByteProperty‘IntProperty    = 5,
	ELightUnits__ELightUnits_MAX   = 6,
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


// Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8_t
{
	AAM_None                       = 0,
	None                           = 1,
	AAM_FXAA                       = 2,
	neByteProperty‘IntProperty  = 3,
	AAM_TemporalAA                 = 4
};


// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF                  = 0,
	None                           = 1,
	DOFM_Gaussian                  = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8_t
{
	ESceneCapturePrimitiveRenderMode__PRM_LegacySceneCapture = 0,
	None                           = 1,
	ESceneCapturePrimitiveRenderMode__PRM_RenderScenePrimitives = 2,
	neByteProperty‘IntProperty  = 3,
	ESceneCapturePrimitiveRenderMode__PRM_UseShowOnlyList = 4,
	ByteProperty‘IntProperty    = 5,
	ESceneCapturePrimitiveRenderMode__PRM_MAX = 6,
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


// Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8_t
{
	MP_EmissiveColor               = 0,
	None                           = 1,
	MP_Opacity                     = 2,
	neByteProperty‘IntProperty  = 3,
	MP_OpacityMask                 = 4,
	ByteProperty‘IntProperty    = 5,
	MP_DiffuseColor                = 6,
	ByteProperty                   = 7,
	MP_SpecularColor               = 8,
	teProperty‘IntProperty        = 9,
	MP_BaseColor                   = 10,
	Property‘IntProperty          = 11,
	MP_Metallic                    = 12,
	operty‘IntProperty            = 13,
	MP_Specular                    = 14,
	erty‘IntProperty              = 15,
	MP_Roughness                   = 16,
	ty‘IntProperty                = 17,
	MP_Normal                      = 18,
	[Error]                        = 19,
	MP_WorldPositionOffset         = 20,
	IntProperty                    = 21,
	MP_WorldDisplacement           = 22,
	tProperty                      = 23,
	MP_TessellationMultiplier      = 24,
	roperty                        = 25,
	MP_SubsurfaceColor             = 26,
	perty                          = 27,
	MP_CustomData0                 = 28,
	rty                            = 29,
	MP_CustomData1                 = 30,
	y                              = 31
};


// Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8_t
{
	EPhysicsTransformUpdateMode__SimulationUpatesComponentTransform = 0,
	None                           = 1,
	EPhysicsTransformUpdateMode__ComponentTransformIsKinematic = 2,
	neByteProperty‘IntProperty  = 3,
	EPhysicsTransformUpdateMode__EPhysicsTransformUpdateMode_MAX = 4,
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


// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8_t
{
	EAnimationMode__AnimationBlueprint = 0,
	None                           = 1,
	EAnimationMode__AnimationSingleNode = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimationMode__AnimationCustomMode = 4,
	ByteProperty‘IntProperty    = 5,
	EAnimationMode__EAnimationMode_MAX = 6,
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


// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t
{
	EKinematicBonesUpdateToPhysics__SkipSimulatingBones = 0,
	None                           = 1,
	EKinematicBonesUpdateToPhysics__SkipAllBones = 2,
	neByteProperty‘IntProperty  = 3,
	EKinematicBonesUpdateToPhysics__EKinematicBonesUpdateToPhysics_MAX = 4,
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


// Enum Engine.EClothMassMode
enum class EClothMassMode : uint8_t
{
	EClothMassMode__UniformMass    = 0,
	None                           = 1,
	EClothMassMode__TotalMass      = 2,
	neByteProperty‘IntProperty  = 3,
	EClothMassMode__Density        = 4,
	ByteProperty‘IntProperty    = 5,
	EClothMassMode__MaxClothMassMode = 6,
	ByteProperty                   = 7,
	EClothMassMode__EClothMassMode_MAX = 8,
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


// Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8_t
{
	EAnimCurveType__AttributeCurve = 0,
	None                           = 1,
	EAnimCurveType__MaterialCurve  = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimCurveType__MorphTargetCurve = 4,
	ByteProperty‘IntProperty    = 5,
	EAnimCurveType__MaxAnimCurveType = 6,
	ByteProperty                   = 7,
	EAnimCurveType__EAnimCurveType_MAX = 8,
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


// Enum Engine.ESkeletalMeshSkinningImportVersions
enum class ESkeletalMeshSkinningImportVersions : uint8_t
{
	ESkeletalMeshSkinningImportVersions__Before_Versionning = 0,
	None                           = 1,
	ESkeletalMeshSkinningImportVersions__SkeletalMeshBuildRefactor = 2,
	neByteProperty‘IntProperty  = 3,
	ESkeletalMeshSkinningImportVersions__VersionPlusOne = 4,
	ByteProperty‘IntProperty    = 5,
	ESkeletalMeshSkinningImportVersions__LatestVersion = 6,
	neByteProperty‘IntProperty01 = 7,
	ESkeletalMeshSkinningImportVersions__ESkeletalMeshSkinningImportVersions_MAX = 8,
	ByteProperty                   = 9,
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


// Enum Engine.ESkeletalMeshGeoImportVersions
enum class ESkeletalMeshGeoImportVersions : uint8_t
{
	ESkeletalMeshGeoImportVersions__Before_Versionning = 0,
	None                           = 1,
	ESkeletalMeshGeoImportVersions__SkeletalMeshBuildRefactor = 2,
	neByteProperty‘IntProperty  = 3,
	ESkeletalMeshGeoImportVersions__VersionPlusOne = 4,
	ByteProperty‘IntProperty    = 5,
	ESkeletalMeshGeoImportVersions__LatestVersion = 6,
	neByteProperty‘IntProperty01 = 7,
	ESkeletalMeshGeoImportVersions__ESkeletalMeshGeoImportVersions_MAX = 8,
	ByteProperty                   = 9,
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


// Enum Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8_t
{
	EBoneFilterActionOption__Remove = 0,
	None                           = 1,
	EBoneFilterActionOption__Keep  = 2,
	neByteProperty‘IntProperty  = 3,
	EBoneFilterActionOption__Invalid = 4,
	ByteProperty‘IntProperty    = 5,
	EBoneFilterActionOption__EBoneFilterActionOption_MAX = 6,
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


// Enum Engine.SkeletalMeshOptimizationImportance
enum class ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                       = 0,
	None                           = 1,
	SMOI_Lowest                    = 2,
	neByteProperty‘IntProperty  = 3,
	SMOI_Low                       = 4,
	ByteProperty‘IntProperty    = 5,
	SMOI_Normal                    = 6
};


// Enum Engine.SkeletalMeshOptimizationType
enum class ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	None                           = 1,
	SMOT_MaxDeviation              = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.SkeletalMeshTerminationCriterion
enum class ESkeletalMeshTerminationCriterion : uint8_t
{
	SMTC_NumOfTriangles            = 0,
	None                           = 1,
	SMTC_NumOfVerts                = 2,
	neByteProperty‘IntProperty  = 3,
	SMTC_TriangleOrVert            = 4,
	ByteProperty‘IntProperty    = 5,
	SMTC_AbsNumOfTriangles         = 6
};


// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8_t
{
	EBoneTranslationRetargetingMode__Animation = 0,
	None                           = 1,
	EBoneTranslationRetargetingMode__Skeleton = 2,
	neByteProperty‘IntProperty  = 3,
	EBoneTranslationRetargetingMode__AnimationScaled = 4,
	ByteProperty‘IntProperty    = 5,
	EBoneTranslationRetargetingMode__AnimationRelative = 6,
	ByteProperty                   = 7,
	EBoneTranslationRetargetingMode__OrientAndScale = 8,
	teProperty‘IntProperty        = 9,
	EBoneTranslationRetargetingMode__EBoneTranslationRetargetingMode_MAX = 10,
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


// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8_t
{
	EBoneSpaces__WorldSpace        = 0,
	None                           = 1,
	EBoneSpaces__ComponentSpace    = 2,
	neByteProperty‘IntProperty  = 3,
	EBoneSpaces__EBoneSpaces_MAX   = 4,
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


// Enum Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8_t
{
	EVisibilityBasedAnimTickOption__AlwaysTickPoseAndRefreshBones = 0,
	None                           = 1,
	EVisibilityBasedAnimTickOption__AlwaysTickPose = 2,
	neByteProperty‘IntProperty  = 3,
	EVisibilityBasedAnimTickOption__OnlyTickMontagesWhenNotRendered = 4,
	ByteProperty‘IntProperty    = 5,
	EVisibilityBasedAnimTickOption__OnlyTickPoseWhenRendered = 6,
	ByteProperty                   = 7,
	EVisibilityBasedAnimTickOption__EVisibilityBasedAnimTickOption_MAX = 8,
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


// Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8_t
{
	PBO_None                       = 0,
	None                           = 1,
	PBO_Term                       = 2
};


// Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent             = 0,
	None                           = 1,
	BVS_Visible                    = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8_t
{
	SLS_CapturedScene              = 0,
	None                           = 1,
	SLS_SpecifiedCubemap           = 2
};


// Enum Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8_t
{
	EReverbSendMethod__Linear      = 0,
	None                           = 1,
	EReverbSendMethod__CustomCurve = 2,
	neByteProperty‘IntProperty  = 3,
	EReverbSendMethod__Manual      = 4,
	ByteProperty‘IntProperty    = 5,
	EReverbSendMethod__EReverbSendMethod_MAX = 6,
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


// Enum Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8_t
{
	EAirAbsorptionMethod__Linear   = 0,
	None                           = 1,
	EAirAbsorptionMethod__CustomCurve = 2,
	neByteProperty‘IntProperty  = 3,
	EAirAbsorptionMethod__EAirAbsorptionMethod_MAX = 4,
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


// Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8_t
{
	SPATIALIZATION_Default         = 0,
	None                           = 1,
	SPATIALIZATION_HRTF            = 2,
	neByteProperty‘IntProperty  = 3,
	SPATIALIZATION_MAX             = 4,
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


// Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal           = 0,
	None                           = 1,
	SOUNDDISTANCE_InfiniteXYPlane  = 2,
	neByteProperty‘IntProperty  = 3,
	SOUNDDISTANCE_InfiniteXZPlane  = 4
};


// Enum Engine.EVirtualizationMode
enum class EVirtualizationMode : uint8_t
{
	EVirtualizationMode__Disabled  = 0,
	None                           = 1,
	EVirtualizationMode__PlayWhenSilent = 2,
	neByteProperty‘IntProperty  = 3,
	EVirtualizationMode__Restart   = 4,
	ByteProperty‘IntProperty    = 5,
	EVirtualizationMode__EVirtualizationMode_MAX = 6,
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


// Enum Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : uint8_t
{
	ESoundWaveLoadingBehavior__Inherited = 0,
	None                           = 1,
	ESoundWaveLoadingBehavior__RetainOnLoad = 2,
	neByteProperty‘IntProperty  = 3,
	ESoundWaveLoadingBehavior__PrimeOnLoad = 4,
	ByteProperty‘IntProperty    = 5,
	ESoundWaveLoadingBehavior__LoadOnDemand = 6,
	ByteProperty                   = 7,
	ESoundWaveLoadingBehavior__ForceInline = 8,
	teProperty‘IntProperty        = 9,
	ESoundWaveLoadingBehavior__Uninitialized = 10,
	Sphere                         = 11,
	ESoundWaveLoadingBehavior__ESoundWaveLoadingBehavior_MAX = 12,
	hereÊ                          = 13,
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


// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8_t
{
	EAudioOutputTarget__Speaker    = 0,
	None                           = 1,
	EAudioOutputTarget__Controller = 2,
	neByteProperty‘IntProperty  = 3,
	EAudioOutputTarget__ControllerFallbackToSpeaker = 4,
	ByteProperty‘IntProperty    = 5,
	EAudioOutputTarget__EAudioOutputTarget_MAX = 6,
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


// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t
{
	EMaxConcurrentResolutionRule__PreventNew = 0,
	None                           = 1,
	EMaxConcurrentResolutionRule__StopOldest = 2,
	neByteProperty‘IntProperty  = 3,
	EMaxConcurrentResolutionRule__StopFarthestThenPreventNew = 4,
	ByteProperty‘IntProperty    = 5,
	EMaxConcurrentResolutionRule__StopFarthestThenOldest = 6,
	ByteProperty                   = 7,
	EMaxConcurrentResolutionRule__StopLowestPriority = 8,
	teProperty‘IntProperty        = 9,
	EMaxConcurrentResolutionRule__StopQuietest = 10,
	Property‘IntProperty          = 11,
	EMaxConcurrentResolutionRule__StopLowestPriorityThenPreventNew = 12,
	operty‘IntProperty            = 13,
	EMaxConcurrentResolutionRule__EMaxConcurrentResolutionRule_MAX = 14,
	erty‘IntProperty              = 15,
	None01                         = 16,
	None02                         = 17,
	None03                         = 18,
	None04                         = 19,
	None05                         = 20,
	None06                         = 21,
	None07                         = 22,
	None08                         = 23,
	None09                         = 24,
	None10                         = 25,
	None11                         = 26,
	None12                         = 27
};


// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8_t
{
	SOUNDGROUP_Default             = 0,
	None                           = 1,
	SOUNDGROUP_Effects             = 2,
	neByteProperty‘IntProperty  = 3,
	SOUNDGROUP_UI                  = 4,
	ByteProperty‘IntProperty    = 5,
	SOUNDGROUP_Music               = 6,
	ByteProperty                   = 7,
	SOUNDGROUP_Voice               = 8,
	teProperty‘IntProperty        = 9,
	SOUNDGROUP_GameSoundGroup1     = 10,
	Property‘IntProperty          = 11,
	SOUNDGROUP_GameSoundGroup2     = 12,
	operty‘IntProperty            = 13,
	SOUNDGROUP_GameSoundGroup3     = 14,
	erty‘IntProperty              = 15,
	SOUNDGROUP_GameSoundGroup4     = 16,
	ty‘IntProperty                = 17,
	SOUNDGROUP_GameSoundGroup5     = 18,
	[Error]                        = 19,
	SOUNDGROUP_GameSoundGroup6     = 20,
	IntProperty                    = 21,
	SOUNDGROUP_GameSoundGroup7     = 22,
	tProperty                      = 23,
	SOUNDGROUP_GameSoundGroup8     = 24,
	roperty                        = 25,
	SOUNDGROUP_GameSoundGroup9     = 26,
	perty                          = 27
};


// Enum Engine.ModulationParamMode
enum class EModulationParamMode : uint8_t
{
	MPM_Normal                     = 0,
	None                           = 1,
	MPM_Abs                        = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8_t
{
	ESourceBusChannels__Mono       = 0,
	None                           = 1,
	ESourceBusChannels__Stereo     = 2,
	neByteProperty‘IntProperty  = 3,
	ESourceBusChannels__ESourceBusChannels_MAX = 4,
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


// Enum Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8_t
{
	ESourceBusSendLevelControlMethod__Linear = 0,
	None                           = 1,
	ESourceBusSendLevelControlMethod__CustomCurve = 2,
	neByteProperty‘IntProperty  = 3,
	ESourceBusSendLevelControlMethod__Manual = 4,
	ByteProperty‘IntProperty    = 5,
	ESourceBusSendLevelControlMethod__ESourceBusSendLevelControlMethod_MAX = 6,
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


// Enum Engine.ESubmixChannelFormat
enum class ESubmixChannelFormat : uint8_t
{
	ESubmixChannelFormat__Device   = 0,
	None                           = 1,
	ESubmixChannelFormat__Stereo   = 2,
	neByteProperty‘IntProperty  = 3,
	ESubmixChannelFormat__Quad     = 4,
	ByteProperty‘IntProperty    = 5,
	ESubmixChannelFormat__FiveDotOne = 6,
	ByteProperty                   = 7,
	ESubmixChannelFormat__SevenDotOne = 8,
	teProperty‘IntProperty        = 9,
	ESubmixChannelFormat__Ambisonics = 10,
	Property‘IntProperty          = 11,
	ESubmixChannelFormat__Count    = 12,
	operty‘IntProperty            = 13,
	ESubmixChannelFormat__ESubmixChannelFormat_MAX = 14,
	erty‘IntProperty              = 15,
	SOUNDGROUP_GameSoundGroup4     = 16,
	ty‘IntProperty                = 17,
	SOUNDGROUP_GameSoundGroup5     = 18,
	[Error]                        = 19,
	SOUNDGROUP_GameSoundGroup6     = 20,
	IntProperty                    = 21,
	SOUNDGROUP_GameSoundGroup7     = 22,
	tProperty                      = 23,
	SOUNDGROUP_GameSoundGroup8     = 24,
	roperty                        = 25,
	SOUNDGROUP_GameSoundGroup9     = 26,
	perty                          = 27
};


// Enum Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8_t
{
	ESendLevelControlMethod__Linear = 0,
	None                           = 1,
	ESendLevelControlMethod__CustomCurve = 2,
	neByteProperty‘IntProperty  = 3,
	ESendLevelControlMethod__Manual = 4,
	ByteProperty‘IntProperty    = 5,
	ESendLevelControlMethod__ESendLevelControlMethod_MAX = 6,
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


// Enum Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8_t
{
	EAudioRecordingExportType__SoundWave = 0,
	None                           = 1,
	EAudioRecordingExportType__WavFile = 2,
	neByteProperty‘IntProperty  = 3,
	EAudioRecordingExportType__EAudioRecordingExportType_MAX = 4,
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


// Enum Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8_t
{
	ESoundWaveFFTSize__VerySmall   = 0,
	None                           = 1,
	ESoundWaveFFTSize__Small       = 2,
	neByteProperty‘IntProperty  = 3,
	ESoundWaveFFTSize__Medium      = 4,
	ByteProperty‘IntProperty    = 5,
	ESoundWaveFFTSize__Large       = 6,
	ByteProperty                   = 7,
	ESoundWaveFFTSize__VeryLarge   = 8,
	teProperty‘IntProperty        = 9,
	ESoundWaveFFTSize__ESoundWaveFFTSize_MAX = 10,
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


// Enum Engine.EDecompressionType
enum class EDecompressionType : uint8_t
{
	DTYPE_Setup                    = 0,
	None                           = 1,
	DTYPE_Invalid                  = 2,
	neByteProperty‘IntProperty  = 3,
	DTYPE_Preview                  = 4,
	ByteProperty‘IntProperty    = 5,
	DTYPE_Native                   = 6,
	ByteProperty                   = 7,
	DTYPE_RealTime                 = 8,
	teProperty‘IntProperty        = 9
};


// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8_t
{
	ESplineCoordinateSpace__Local  = 0,
	None                           = 1,
	ESplineCoordinateSpace__World  = 2,
	neByteProperty‘IntProperty  = 3,
	ESplineCoordinateSpace__ESplineCoordinateSpace_MAX = 4,
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


// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8_t
{
	ESplinePointType__Linear       = 0,
	None                           = 1,
	ESplinePointType__Curve        = 2,
	neByteProperty‘IntProperty  = 3,
	ESplinePointType__Constant     = 4,
	ByteProperty‘IntProperty    = 5,
	ESplinePointType__CurveClamped = 6,
	ByteProperty                   = 7,
	ESplinePointType__CurveCustomTangent = 8,
	teProperty‘IntProperty        = 9,
	ESplinePointType__ESplinePointType_MAX = 10,
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


// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8_t
{
	ESplineMeshAxis__X             = 0,
	None                           = 1,
	ESplineMeshAxis__Y             = 2,
	neByteProperty‘IntProperty  = 3,
	ESplineMeshAxis__Z             = 4,
	ByteProperty‘IntProperty    = 5,
	ESplineMeshAxis__ESplineMeshAxis_MAX = 6,
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


// Enum Engine.EOptimizationType
enum class EOptimizationType : uint8_t
{
	OT_NumOfTriangles              = 0,
	None                           = 1,
	OT_MaxDeviation                = 2
};


// Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8_t
{
	IL_Off                         = 0,
	None                           = 1,
	IL_Lowest                      = 2,
	neByteProperty‘IntProperty  = 3,
	IL_Low                         = 4,
	ByteProperty‘IntProperty    = 5,
	IL_Normal                      = 6,
	ByteProperty                   = 7
};


// Enum Engine.ENormalMode
enum class ENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups     = 0,
	None                           = 1,
	NM_RecalculateNormals          = 2,
	neByteProperty‘IntProperty  = 3,
	NM_RecalculateNormalsSmooth    = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8_t
{
	SLSH_QuadLayer                 = 0,
	None                           = 1,
	SLSH_CylinderLayer             = 2,
	neByteProperty‘IntProperty  = 3,
	SLSH_CubemapLayer              = 4
};


// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8_t
{
	SLT_WorldLocked                = 0,
	None                           = 1,
	SLT_TrackerLocked              = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8_t
{
	OSM_Alpha                      = 0,
	None                           = 1,
	OSM_ColorBrightness            = 2,
	neByteProperty‘IntProperty  = 3,
	OSM_RedChannel                 = 4,
	ByteProperty‘IntProperty    = 5,
	OSM_GreenChannel               = 6,
	ByteProperty                   = 7,
	OSM_BlueChannel                = 8,
	teProperty‘IntProperty        = 9,
	OSM_MAX                        = 10,
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


// Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices               = 0,
	None                           = 1,
	BVC_EightVertices              = 2,
	neByteProperty‘IntProperty  = 3,
	BVC_MAX                        = 4,
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


// Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8_t
{
	EVRTA_TextTop                  = 0,
	None                           = 1,
	EVRTA_TextCenter               = 2,
	neByteProperty‘IntProperty  = 3,
	EVRTA_TextBottom               = 4,
	ByteProperty‘IntProperty    = 5,
	EVRTA_QuadTop                  = 6,
	ByteProperty                   = 7,
	EVRTA_MAX                      = 8,
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


// Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8_t
{
	EHTA_Left                      = 0,
	None                           = 1,
	EHTA_Center                    = 2,
	neByteProperty‘IntProperty  = 3,
	EHTA_Right                     = 4,
	ByteProperty‘IntProperty    = 5,
	EHTA_MAX                       = 6,
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


// Enum Engine.ETextureLossyCompressionAmount
enum class ETextureLossyCompressionAmount : uint8_t
{
	TLCA_Default                   = 0,
	None                           = 1,
	TLCA_None                      = 2,
	neByteProperty‘IntProperty  = 3,
	TLCA_Lowest                    = 4,
	ByteProperty‘IntProperty    = 5,
	TLCA_Low                       = 6,
	ByteProperty                   = 7,
	TLCA_Medium                    = 8,
	teProperty‘IntProperty        = 9,
	TLCA_High                      = 10,
	Property‘IntProperty          = 11,
	TLCA_Highest                   = 12,
	operty‘IntProperty            = 13,
	TLCA_MAX                       = 14,
	erty‘IntProperty              = 15,
	None01                         = 16,
	None02                         = 17,
	None03                         = 18,
	None04                         = 19,
	None05                         = 20,
	None06                         = 21,
	None07                         = 22,
	None08                         = 23,
	None09                         = 24,
	None10                         = 25,
	None11                         = 26,
	None12                         = 27
};


// Enum Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8_t
{
	TCQ_Default                    = 0,
	None                           = 1,
	TCQ_Lowest                     = 2,
	neByteProperty‘IntProperty  = 3,
	TCQ_Low                        = 4,
	ByteProperty‘IntProperty    = 5,
	TCQ_Medium                     = 6
};


// Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8_t
{
	TSF_Invalid                    = 0,
	None                           = 1,
	TSF_G8                         = 2,
	neByteProperty‘IntProperty  = 3,
	TSF_BGRA8                      = 4,
	ByteProperty‘IntProperty    = 5,
	TSF_BGRE8                      = 6,
	ByteProperty                   = 7,
	TSF_RGBA16                     = 8,
	teProperty‘IntProperty        = 9
};


// Enum Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8_t
{
	TSAT_Uncompressed              = 0,
	None                           = 1,
	TSAT_PNGCompressed             = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8_t
{
	TMC_ResidentMips               = 0,
	None                           = 1,
	TMC_AllMips                    = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8_t
{
	CTM_Disabled                   = 0,
	None                           = 1,
	CTM_NormalRoughnessToRed       = 2,
	neByteProperty‘IntProperty  = 3,
	CTM_NormalRoughnessToGreen     = 4,
	ByteProperty‘IntProperty    = 5
};


// Enum Engine.TextureAddress
enum class ETextureAddress : uint8_t
{
	TA_Wrap                        = 0,
	None                           = 1,
	TA_Clamp                       = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.TextureFilter
enum class ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	None                           = 1,
	TF_Bilinear                    = 2,
	neByteProperty‘IntProperty  = 3,
	TF_Trilinear                   = 4
};


// Enum Engine.TextureCompressionSettings
enum class ETextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	None                           = 1,
	TC_Normalmap                   = 2,
	neByteProperty‘IntProperty  = 3,
	TC_Masks                       = 4,
	ByteProperty‘IntProperty    = 5,
	TC_Grayscale                   = 6,
	ByteProperty                   = 7,
	TC_Displacementmap             = 8,
	teProperty‘IntProperty        = 9,
	TC_VectorDisplacementmap       = 10,
	Property‘IntProperty          = 11,
	TC_HDR                         = 12,
	operty‘IntProperty            = 13
};


// Enum Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : uint8_t
{
	ETextureMipLoadOptions__Default = 0,
	None                           = 1,
	ETextureMipLoadOptions__AllMips = 2,
	neByteProperty‘IntProperty  = 3,
	ETextureMipLoadOptions__OnlyFirstMip = 4,
	ByteProperty‘IntProperty    = 5,
	ETextureMipLoadOptions__ETextureMipLoadOptions_MAX = 6,
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


// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8_t
{
	ETextureSamplerFilter__Point   = 0,
	None                           = 1,
	ETextureSamplerFilter__Bilinear = 2,
	neByteProperty‘IntProperty  = 3,
	ETextureSamplerFilter__Trilinear = 4,
	ByteProperty‘IntProperty    = 5,
	ETextureSamplerFilter__AnisotropicPoint = 6,
	ByteProperty                   = 7,
	ETextureSamplerFilter__AnisotropicLinear = 8,
	teProperty‘IntProperty        = 9,
	ETextureSamplerFilter__ETextureSamplerFilter_MAX = 10,
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


// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8_t
{
	ETexturePowerOfTwoSetting__None = 0,
	None                           = 1,
	ETexturePowerOfTwoSetting__PadToPowerOfTwo = 2,
	neByteProperty‘IntProperty  = 3,
	ETexturePowerOfTwoSetting__PadToSquarePowerOfTwo = 4,
	ByteProperty‘IntProperty    = 5,
	ETexturePowerOfTwoSetting__ETexturePowerOfTwoSetting_MAX = 6,
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


// Enum Engine.TextureMipGenSettings
enum class ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	None                           = 1,
	TMGS_SimpleAverage             = 2,
	neByteProperty‘IntProperty  = 3,
	TMGS_Sharpen0                  = 4,
	ByteProperty‘IntProperty    = 5,
	TMGS_Sharpen1                  = 6,
	ByteProperty                   = 7,
	TMGS_Sharpen2                  = 8,
	teProperty‘IntProperty        = 9,
	TMGS_Sharpen3                  = 10,
	Property‘IntProperty          = 11,
	TMGS_Sharpen4                  = 12,
	operty‘IntProperty            = 13,
	TMGS_Sharpen5                  = 14,
	erty‘IntProperty              = 15,
	TMGS_Sharpen6                  = 16,
	ty‘IntProperty                = 17,
	TMGS_Sharpen7                  = 18,
	[Error]                        = 19,
	TMGS_Sharpen8                  = 20,
	IntProperty                    = 21,
	TMGS_Sharpen9                  = 22,
	tProperty                      = 23
};


// Enum Engine.TextureGroup
enum class ETextureGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	None                           = 1,
	TEXTUREGROUP_WorldNormalMap    = 2,
	neByteProperty‘IntProperty  = 3,
	TEXTUREGROUP_WorldSpecular     = 4,
	ByteProperty‘IntProperty    = 5,
	TEXTUREGROUP_Character         = 6,
	ByteProperty                   = 7,
	TEXTUREGROUP_CharacterNormalMap = 8,
	teProperty‘IntProperty        = 9,
	TEXTUREGROUP_CharacterSpecular = 10,
	Property‘IntProperty          = 11,
	TEXTUREGROUP_Weapon            = 12,
	operty‘IntProperty            = 13,
	TEXTUREGROUP_WeaponNormalMap   = 14,
	erty‘IntProperty              = 15,
	TEXTUREGROUP_WeaponSpecular    = 16,
	ty‘IntProperty                = 17,
	TEXTUREGROUP_Vehicle           = 18,
	[Error]                        = 19,
	TEXTUREGROUP_VehicleNormalMap  = 20,
	IntProperty                    = 21,
	TEXTUREGROUP_VehicleSpecular   = 22,
	tProperty                      = 23,
	TEXTUREGROUP_Cinematic         = 24,
	roperty                        = 25,
	TEXTUREGROUP_Effects           = 26,
	perty                          = 27,
	TEXTUREGROUP_EffectsNotFiltered = 28,
	rty                            = 29,
	TEXTUREGROUP_Skybox            = 30,
	y                              = 31,
	TEXTUREGROUP_UI                = 32,
	
                              = 33,
	TEXTUREGROUP_Lightmap          = 34,
	BoolProperty                   = 35,
	TEXTUREGROUP_RenderTarget      = 36,
	olPropertybFloatProperty      = 37,
	TEXTUREGROUP_MobileFlattened   = 38,
	PropertybFloatProperty        = 39,
	TEXTUREGROUP_ProcBuilding_Face = 40,
	opertybFloatProperty          = 41,
	TEXTUREGROUP_ProcBuilding_LightMap = 42,
	ertybFloatProperty            = 43,
	TEXTUREGROUP_Shadowmap         = 44,
	tybFloatProperty              = 45,
	TEXTUREGROUP_ColorLookupTable  = 46,
	bFloatProperty                = 47
};


// Enum Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8_t
{
	RTF_R8                         = 0,
	None                           = 1,
	RTF_RG8                        = 2,
	neByteProperty‘IntProperty  = 3,
	RTF_RGBA8                      = 4,
	ByteProperty‘IntProperty    = 5,
	RTF_RGBA8_SRGB                 = 6,
	ByteProperty                   = 7,
	RTF_R16f                       = 8,
	teProperty‘IntProperty        = 9,
	RTF_RG16f                      = 10,
	Property‘IntProperty          = 11
};


// Enum Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8_t
{
	ETimecodeProviderSynchronizationState__Closed = 0,
	None                           = 1,
	ETimecodeProviderSynchronizationState__Error = 2,
	neByteProperty‘IntProperty  = 3,
	ETimecodeProviderSynchronizationState__Synchronized = 4,
	ByteProperty‘IntProperty    = 5,
	ETimecodeProviderSynchronizationState__Synchronizing = 6,
	ByteProperty                   = 7,
	ETimecodeProviderSynchronizationState__ETimecodeProviderSynchronizationState_MAX = 8,
	teProperty‘IntProperty        = 9,
	TMGS_Sharpen3                  = 10,
	Property‘IntProperty          = 11,
	TMGS_Sharpen4                  = 12,
	operty‘IntProperty            = 13,
	TMGS_Sharpen5                  = 14,
	erty‘IntProperty              = 15,
	TMGS_Sharpen6                  = 16,
	ty‘IntProperty                = 17,
	TMGS_Sharpen7                  = 18,
	[Error]                        = 19,
	TMGS_Sharpen8                  = 20,
	IntProperty                    = 21,
	TMGS_Sharpen9                  = 22,
	tProperty                      = 23
};


// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8_t
{
	ETimelineDirection__Forward    = 0,
	None                           = 1,
	ETimelineDirection__Backward   = 2,
	neByteProperty‘IntProperty  = 3,
	ETimelineDirection__ETimelineDirection_MAX = 4,
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


// Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8_t
{
	TL_TimelineLength              = 0,
	None                           = 1,
	TL_LastKeyFrame                = 2,
	neByteProperty‘IntProperty  = 3,
	TL_MAX                         = 4,
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


// Enum Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8_t
{
	ETimeStretchCurveMapping__T_Original = 0,
	None                           = 1,
	ETimeStretchCurveMapping__T_TargetMin = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete          = 0,
	None                           = 1,
	TID_TweetUIComplete            = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t
{
	TRM_Get                        = 0,
	None                           = 1,
	TRM_Post                       = 2,
	neByteProperty‘IntProperty  = 3
};


// Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate                  = 0,
	None                           = 1,
	UDSS_Dirty                     = 2,
	neByteProperty‘IntProperty  = 3,
	UDSS_Error                     = 4
};


// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8_t
{
	EUIScalingRule__ShortestSide   = 0,
	None                           = 1,
	EUIScalingRule__LongestSide    = 2,
	neByteProperty‘IntProperty  = 3,
	EUIScalingRule__Horizontal     = 4,
	ByteProperty‘IntProperty    = 5,
	EUIScalingRule__Vertical       = 6,
	ByteProperty                   = 7,
	EUIScalingRule__Custom         = 8,
	teProperty‘IntProperty        = 9,
	EUIScalingRule__EUIScalingRule_MAX = 10,
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


// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8_t
{
	ERenderFocusRule__Always       = 0,
	None                           = 1,
	ERenderFocusRule__NonPointer   = 2,
	neByteProperty‘IntProperty  = 3,
	ERenderFocusRule__NavigationOnly = 4,
	ByteProperty‘IntProperty    = 5,
	ERenderFocusRule__Never        = 6,
	ByteProperty                   = 7,
	ERenderFocusRule__ERenderFocusRule_MAX = 8,
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


// Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude                   = 0,
	None                           = 1,
	VFCO_Revolve                   = 2
};


// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8_t
{
	EWindSourceType__Directional   = 0,
	None                           = 1,
	EWindSourceType__Point         = 2,
	neByteProperty‘IntProperty  = 3,
	EWindSourceType__EWindSourceType_MAX = 4,
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


// Enum Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8_t
{
	EPSCPoolMethod__None           = 0,
	None                           = 1,
	EPSCPoolMethod__AutoRelease    = 2,
	neByteProperty‘IntProperty  = 3,
	EPSCPoolMethod__ManualRelease  = 4,
	ByteProperty‘IntProperty    = 5,
	EPSCPoolMethod__ManualRelease_OnComplete = 6,
	ByteProperty                   = 7,
	EPSCPoolMethod__FreeInPool     = 8,
	teProperty‘IntProperty        = 9,
	EPSCPoolMethod__EPSCPoolMethod_MAX = 10,
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


// Enum Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8_t
{
	VLM_VolumetricLightmap         = 0,
	None                           = 1,
	VLM_SparseVolumeLightingSamples = 2,
	neByteProperty‘IntProperty  = 3,
	VLM_MAX                        = 4,
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


// Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive            = 0,
	None                           = 1,
	VIS_ModeratelyAggressive       = 2,
	neByteProperty‘IntProperty  = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Engine.UniqueNetIdRepl
// 0x0027 (0x0028 - 0x0001)
struct FUniqueNetIdRepl : public FUniqueNetIdWrapper
{
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
	TArray<unsigned char>                              ReplicationBytes;                                         // 0x0018(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Engine.ChannelDefinition
// 0x0028
struct FChannelDefinition
{
	struct FName                                       ChannelName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ClassName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      ChannelClass;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                StaticChannelIndex;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bTickOnCreate;                                            // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bServerOpen;                                              // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bClientOpen;                                              // 0x001E(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInitialServer;                                           // 0x001F(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInitialClient;                                           // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.TickFunction
// 0x0028
struct FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         EndTickGroup;                                             // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTickEvenWhenPaused : 1;                                  // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEverTick : 1;                                         // 0x000A(0x0001)
	unsigned char                                      bStartWithTickEnabled : 1;                                // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                          // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              TickInterval;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.ActorTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FActorTickFunction : public FTickFunction
{
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         EndTickGroup;                                             // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTickEvenWhenPaused : 1;                                  // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEverTick : 1;                                         // 0x000A(0x0001)
	unsigned char                                      bStartWithTickEnabled : 1;                                // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                          // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              TickInterval;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.RepMovement
// 0x0034
struct FRepMovement
{
	struct FVector                                     LinearVelocity;                                           // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0018(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0024(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bSimulatedPhysicSleep : 1;                                // 0x0030(0x0001) (Transient)
	unsigned char                                      bRepPhysics : 1;                                          // 0x0030(0x0001) (Transient)
	EVectorQuantization                                LocationQuantizationLevel;                                // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EVectorQuantization                                VelocityQuantizationLevel;                                // 0x0032(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ERotatorQuantization                               RotationQuantizationLevel;                                // 0x0033(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Engine.Vector_NetQuantize100
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize100 : public FVector
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct Engine.RepAttachment
// 0x0040
struct FRepAttachment
{
	class AActor*                                      AttachParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      LocationOffset;                                           // 0x0008(0x000C)
	struct FVector_NetQuantize100                      RelativeScale3D;                                          // 0x0014(0x000C)
	struct FRotator                                    RotationOffset;                                           // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class USceneComponent*                             AttachComponent;                                          // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Engine.Vector_NetQuantize
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize : public FVector
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantizeNormal : public FVector
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct Engine.HitResult
// 0x0088
struct FHitResult
{
	unsigned char                                      bBlockingHit : 1;                                         // 0x0000(0x0001)
	unsigned char                                      bStartPenetrating : 1;                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                FaceIndex;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         Location;                                                 // 0x0010(0x000C)
	struct FVector_NetQuantize                         ImpactPoint;                                              // 0x001C(0x000C)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x0028(0x000C)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             // 0x0034(0x000C)
	struct FVector_NetQuantize                         TraceStart;                                               // 0x0040(0x000C)
	struct FVector_NetQuantize                         TraceEnd;                                                 // 0x004C(0x000C)
	float                                              PenetrationDepth;                                         // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Item;                                                     // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPhysicalMaterial>            PhysMaterial;                                             // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x0070(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MyBoneName;                                               // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ActorComponentTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FActorComponentTickFunction : public FTickFunction
{
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         EndTickGroup;                                             // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTickEvenWhenPaused : 1;                                  // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEverTick : 1;                                         // 0x000A(0x0001)
	unsigned char                                      bStartWithTickEnabled : 1;                                // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                          // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              TickInterval;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.SimpleMemberReference
// 0x0020
struct FSimpleMemberReference
{
	class UObject*                                     MemberParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MemberName;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MemberGuid;                                               // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundConcurrencySettings
// 0x0020
struct FSoundConcurrencySettings
{
	int                                                MaxCount;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLimitToOwner : 1;                                        // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TEnumAsByte<EMaxConcurrentResolutionRule>          ResolutionRule;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              VolumeScale;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeScaleAttackTime;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bVolumeScaleCanRelease : 1;                               // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              VolumeScaleReleaseTime;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VoiceStealReleaseTime;                                    // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundModulation
// 0x0010
struct FSoundModulation
{
	TArray<class USoundModulationPluginSourceSettingsBase*> Settings;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.KeyHandleMap
// 0x0060
struct FKeyHandleMap
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.IndexedCurve
// 0x0068
struct FIndexedCurve
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FKeyHandleMap                               KeyHandlesToIndices;                                      // 0x0008(0x0060) (Transient)
};

// ScriptStruct Engine.RealCurve
// 0x0008 (0x0070 - 0x0068)
struct FRealCurve : public FIndexedCurve
{
	float                                              DefaultValue;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                        // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                       // 0x006D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x006E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.RichCurveKey
// 0x001C
struct FRichCurveKey
{
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              Time;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArriveTangent;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ArriveTangentWeight;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangent;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangentWeight;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RichCurve
// 0x0010 (0x0080 - 0x0070)
struct FRichCurve : public FRealCurve
{
	TArray<struct FRichCurveKey>                       Keys;                                                     // 0x0070(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.RuntimeFloatCurve
// 0x0088
struct FRuntimeFloatCurve
{
	struct FRichCurve                                  EditorCurveData;                                          // 0x0000(0x0080)
	class UCurveFloat*                                 ExternalCurve;                                            // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundSubmixSendInfo
// 0x00B0
struct FSoundSubmixSendInfo
{
	ESendLevelControlMethod                            SendLevelControlMethod;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class USoundSubmix*                                SoundSubmix;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SendLevel;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSendLevel;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSendLevel;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSendDistance;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSendDistance;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          CustomSendLevelCurve;                                     // 0x0028(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.SoundSourceBusSendInfo
// 0x00B0
struct FSoundSourceBusSendInfo
{
	ESourceBusSendLevelControlMethod                   SourceBusSendLevelControlMethod;                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class USoundSourceBus*                             SoundSourceBus;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SendLevel;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSendLevel;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSendLevel;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSendDistance;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSendDistance;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          CustomSendLevelCurve;                                     // 0x0028(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.GeomSelection
// 0x000C
struct FGeomSelection
{
	int                                                Type;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SelectionIndex;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TireFrictionScalePair
// 0x0010
struct FTireFrictionScalePair
{
	class UTireType*                                   TireType;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FrictionScale;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LevelStreamingWrapper
// 0x0008
struct FLevelStreamingWrapper
{
	class ULevelStreaming*                             StreamingLevel;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StreamingLevelsToConsider
// 0x0028
struct FStreamingLevelsToConsider
{
	TArray<struct FLevelStreamingWrapper>              StreamingLevels;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.LevelCollection
// 0x0078
struct FLevelCollection
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AGameStateBase*                              GameState;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDemoNetDriver*                              DemoNetDriver;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULevel*                                      PersistentLevel;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty Engine.LevelCollection.Levels
};

// ScriptStruct Engine.PSCPoolElem
// 0x0010
struct FPSCPoolElem
{
	class UParticleSystemComponent*                    PSC;                                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PSCPool
// 0x0038
struct FPSCPool
{
	TArray<struct FPSCPoolElem>                        FreeElements;                                             // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<class UParticleSystemComponent*>            InUseComponents_Auto;                                     // 0x0010(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UParticleSystemComponent*>            InUseComponents_Manual;                                   // 0x0020(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.WorldPSCPool
// 0x0058
struct FWorldPSCPool
{
	TMap<class UParticleSystem*, struct FPSCPool>      WorldParticleSystemPools;                                 // 0x0000(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LightingChannels
// 0x0001
struct FLightingChannels
{
	unsigned char                                      bChannel0 : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bChannel1 : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bChannel2 : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Engine.CustomPrimitiveData
// 0x0010
struct FCustomPrimitiveData
{
	TArray<float>                                      Data;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.CollisionResponseContainer
// 0x0020
struct FCollisionResponseContainer
{
	TEnumAsByte<ECollisionResponse>                    WorldStatic;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    WorldDynamic;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Pawn;                                                     // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Visibility;                                               // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Camera;                                                   // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    PhysicsBody;                                              // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Vehicle;                                                  // 0x0006(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Destructible;                                             // 0x0007(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel1;                                      // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel2;                                      // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel3;                                      // 0x000A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel4;                                      // 0x000B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel5;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel6;                                      // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel1;                                        // 0x000E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel2;                                        // 0x000F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel3;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel4;                                        // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel5;                                        // 0x0012(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel6;                                        // 0x0013(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel7;                                        // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel8;                                        // 0x0015(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel9;                                        // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel10;                                       // 0x0017(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel11;                                       // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel12;                                       // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel13;                                       // 0x001A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel14;                                       // 0x001B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel15;                                       // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel16;                                       // 0x001D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel17;                                       // 0x001E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel18;                                       // 0x001F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ResponseChannel
// 0x000C
struct FResponseChannel
{
	struct FName                                       Channel;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Response;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.CollisionResponse
// 0x0030
struct FCollisionResponse
{
	struct FCollisionResponseContainer                 ResponseToChannels;                                       // 0x0000(0x0020) (Transient)
	TArray<struct FResponseChannel>                    ResponseArray;                                            // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.WalkableSlopeOverride
// 0x0010
struct FWalkableSlopeOverride
{
	TEnumAsByte<EWalkableSlopeBehavior>                WalkableSlopeBehavior;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              WalkableSlopeAngle;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.BodyInstance
// 0x0110
struct FBodyInstance
{
	unsigned char                                      UnknownData00[0x6];                                       // 0x0000(0x0006) MISSED OFFSET
	TEnumAsByte<ECollisionChannel>                     ObjectType;                                               // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0009(0x0001) MISSED OFFSET
	ESleepFamily                                       SleepFamily;                                              // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDOFMode>                              DOFMode;                                                  // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseCCD : 1;                                              // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bNotifyRigidBodyCollision : 1;                            // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData03 : 1;                                        // 0x000C(0x0001)
	unsigned char                                      bSimulatePhysics : 1;                                     // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideMass : 1;                                        // 0x000C(0x0001) (Edit)
	unsigned char                                      bEnableGravity : 1;                                       // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAutoWeld : 1;                                            // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bStartAwake : 1;                                          // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGenerateWakeEvents : 1;                                  // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUpdateMassWhenScaleChanges : 1;                          // 0x000D(0x0001)
	unsigned char                                      bLockTranslation : 1;                                     // 0x000D(0x0001) (Edit)
	unsigned char                                      bLockRotation : 1;                                        // 0x000D(0x0001) (Edit)
	unsigned char                                      bLockXTranslation : 1;                                    // 0x000D(0x0001) (Edit)
	unsigned char                                      bLockYTranslation : 1;                                    // 0x000D(0x0001) (Edit)
	unsigned char                                      bLockZTranslation : 1;                                    // 0x000D(0x0001) (Edit)
	unsigned char                                      bLockXRotation : 1;                                       // 0x000D(0x0001) (Edit)
	unsigned char                                      bLockYRotation : 1;                                       // 0x000E(0x0001) (Edit)
	unsigned char                                      bLockZRotation : 1;                                       // 0x000E(0x0001) (Edit)
	unsigned char                                      bOverrideMaxAngularVelocity : 1;                          // 0x000E(0x0001) (Edit)
	unsigned char                                      UnknownData04 : 2;                                        // 0x000E(0x0001)
	unsigned char                                      bOverrideMaxDepenetrationVelocity : 1;                    // 0x000E(0x0001) (Edit)
	unsigned char                                      bOverrideWalkableSlopeOnInstance : 1;                     // 0x000E(0x0001) (Edit)
	unsigned char                                      bInterpolateWhenSubStepping : 1;                          // 0x000E(0x0001)
	unsigned char                                      UnknownData05[0xD];                                       // 0x000F(0x000D) MISSED OFFSET
	struct FName                                       CollisionProfileName;                                     // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PositionSolverIterationCount;                             // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      VelocitySolverIterationCount;                             // 0x0025(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	struct FCollisionResponse                          CollisionResponses;                                       // 0x0028(0x0030) (Edit)
	float                                              MaxDepenetrationVelocity;                                 // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MassInKgOverride;                                         // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	float                                              LinearDamping;                                            // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularDamping;                                           // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CustomDOFPlaneNormal;                                     // 0x0070(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     COMNudge;                                                 // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MassScale;                                                // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InertiaTensorScale;                                       // 0x008C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x10];                                      // 0x0098(0x0010) MISSED OFFSET
	struct FWalkableSlopeOverride                      WalkableSlopeOverride;                                    // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterialOverride;                                     // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularVelocity;                                       // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CustomSleepThresholdMultiplier;                           // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StabilizationThresholdMultiplier;                         // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsBlendWeight;                                       // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x40];                                      // 0x00D0(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// 0x0028
struct FSkelMeshComponentLODInfo
{
	TArray<bool>                                       HiddenMaterials;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.SkelMeshSkinWeightInfo
// 0x0028
struct FSkelMeshSkinWeightInfo
{
	int                                                Bones[0x8];                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Weights[0x8];                                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SingleAnimationPlayData
// 0x0018
struct FSingleAnimationPlayData
{
	class UAnimationAsset*                             AnimToPlay;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSavedLooping : 1;                                        // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSavedPlaying : 1;                                        // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              SavedPosition;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SavedPlayRate;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PoseSnapshot
// 0x0038
struct FPoseSnapshot
{
	TArray<struct FTransform>                          LocalTransforms;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               BoneNames;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       SkeletalMeshName;                                         // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SnapshotName;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AnimNotifyEventReference
// 0x0010
struct FAnimNotifyEventReference
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     NotifySource;                                             // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.AnimNotifyArray
// 0x0010
struct FAnimNotifyArray
{
	TArray<struct FAnimNotifyEventReference>           Notifies;                                                 // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Engine.AnimNotifyQueue
// 0x0070
struct FAnimNotifyQueue
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	TArray<struct FAnimNotifyEventReference>           AnimNotifies;                                             // 0x0010(0x0010) (ZeroConstructor, Transient)
	TMap<struct FName, struct FAnimNotifyArray>        UnfilteredMontageAnimNotifies;                            // 0x0020(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct Engine.AnimLinkableElement
// 0x0030
struct FAnimLinkableElement
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UAnimMontage*                                LinkedMontage;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SegmentIndex;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimLinkMethod>                       LinkMethod;                                               // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimLinkMethod>                       CachedLinkMethod;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	float                                              SegmentBeginTime;                                         // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SegmentLength;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LinkValue;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           LinkedSequence;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.AnimNotifyEvent
// 0x0088 (0x00B8 - 0x0030)
struct FAnimNotifyEvent : public FAnimLinkableElement
{
	float                                              DisplayTime;                                              // 0x0030(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TriggerTimeOffset;                                        // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndTriggerTimeOffset;                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TriggerWeightThreshold;                                   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       NotifyName;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimNotify*                                 Notify;                                                   // 0x0048(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimNotifyState*                            NotifyStateClass;                                         // 0x0050(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FAnimLinkableElement                        EndLink;                                                  // 0x0060(0x0030)
	bool                                               bConvertedFromBranchingPoint;                             // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMontageNotifyTickType>                MontageTickType;                                          // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0092(0x0002) MISSED OFFSET
	float                                              NotifyTriggerChance;                                      // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENotifyFilterType>                     NotifyFilterType;                                         // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                NotifyFilterLOD;                                          // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerOnDedicatedServer;                                // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerOnFollower;                                       // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00A2(0x0002) MISSED OFFSET
	int                                                TrackIndex;                                               // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.MarkerSyncAnimPosition
// 0x0014
struct FMarkerSyncAnimPosition
{
	struct FName                                       PreviousMarkerName;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NextMarkerName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              PositionBetweenMarkers;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MovementProperties
// 0x0001
struct FMovementProperties
{
	unsigned char                                      bCanCrouch : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanJump : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanWalk : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanSwim : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanFly : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.NavAgentProperties
// 0x002F (0x0030 - 0x0001)
struct FNavAgentProperties : public FMovementProperties
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AgentRadius;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AgentHeight;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AgentStepHeight;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AgentMaxSlope;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavWalkingSearchHeightScale;                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSoftClassPath                              PreferredNavData;                                         // 0x0018(0x0018) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// 0x00A8
struct FStaticMeshComponentLODInfo
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct Engine.StreamingTextureBuildInfo
// 0x000C
struct FStreamingTextureBuildInfo
{
	uint32_t                                           PackedRelativeBox;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TextureLevelIndex;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TexelFactor;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LightmassPrimitiveSettings
// 0x0018
struct FLightmassPrimitiveSettings
{
	unsigned char                                      bUseTwoSidedLighting : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bShadowIndirectOnly : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseEmissiveForStaticLighting : 1;                        // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseVertexNormalForHemisphereGather : 1;                  // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              EmissiveLightFalloffExponent;                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EmissiveLightExplicitInfluenceRadius;                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EmissiveBoost;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FullyOccludedSamplesFraction;                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// 0x0018
struct FActiveForceFeedbackEffect
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunction;                                            // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              BlendExp;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLockOutgoing : 1;                                        // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
// 0x0014
struct FUpdateLevelVisibilityLevelInfo
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Filename;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsVisible : 1;                                           // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LatentActionInfo
// 0x0018
struct FLatentActionInfo
{
	int                                                Linkage;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UUID;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ExecutionFunction;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     CallbackTarget;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.UpdateLevelStreamingLevelStatus
// 0x0010
struct FUpdateLevelStreamingLevelStatus
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                LODIndex;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bNewShouldBeLoaded : 1;                                   // 0x000C(0x0001)
	unsigned char                                      bNewShouldBeVisible : 1;                                  // 0x000C(0x0001)
	unsigned char                                      bNewShouldBlockOnLoad : 1;                                // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ForceFeedbackParameters
// 0x000C
struct FForceFeedbackParameters
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bLooping;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreTimeDilation;                                      // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPlayWhilePaused;                                         // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.MeshUVChannelInfo
// 0x0014
struct FMeshUVChannelInfo
{
	bool                                               bInitialized;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideDensities;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              LocalUVDensities[0x4];                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMaterial
// 0x0028
struct FSkeletalMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialSlotName;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMeshUVChannelInfo                          UVChannelData;                                            // 0x0010(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BoneMirrorInfo
// 0x0008
struct FBoneMirrorInfo
{
	int                                                SourceIndex;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 BoneFlipAxis;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PerPlatformFloat
// 0x0004
struct FPerPlatformFloat
{
	float                                              Default;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshBuildSettings
// 0x0010
struct FSkeletalMeshBuildSettings
{
	unsigned char                                      bRecomputeNormals : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bRecomputeTangents : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseMikkTSpace : 1;                                       // 0x0000(0x0001) (Edit)
	unsigned char                                      bComputeWeightedNormals : 1;                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bRemoveDegenerates : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseHighPrecisionTangentBasis : 1;                        // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseFullPrecisionUVs : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bBuildAdjacencyBuffer : 1;                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ThresholdPosition;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdTangentNormal;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdUV;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// 0x003C
struct FSkeletalMeshOptimizationSettings
{
	TEnumAsByte<ESkeletalMeshTerminationCriterion>     TerminationCriterion;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              NumOfTrianglesPercentage;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NumOfVertPercentage;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxNumOfTriangles;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxNumOfVerts;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviationPercentage;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationType>         ReductionMethod;                                          // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   SilhouetteImportance;                                     // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   TextureImportance;                                        // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   ShadingImportance;                                        // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   SkinningImportance;                                       // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRemapMorphTargets : 1;                                   // 0x001D(0x0001) (Edit)
	unsigned char                                      bRecalcNormals : 1;                                       // 0x001D(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	float                                              WeldingThreshold;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NormalsThreshold;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxBonesPerVertex;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnforceBoneBoundaries : 1;                               // 0x002C(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              VolumeImportance;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLockEdges : 1;                                           // 0x0034(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                BaseLOD;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BoneReference
// 0x0010
struct FBoneReference
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// 0x00B8
struct FSkeletalMeshLODInfo
{
	struct FPerPlatformFloat                           ScreenSize;                                               // 0x0000(0x0004) (Edit)
	float                                              LODHysteresis;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        LODMaterialMap;                                           // 0x0008(0x0010) (ZeroConstructor)
	struct FSkeletalMeshBuildSettings                  BuildSettings;                                            // 0x0018(0x0010) (Edit)
	struct FSkeletalMeshOptimizationSettings           ReductionSettings;                                        // 0x0028(0x003C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<struct FBoneReference>                      BonesToRemove;                                            // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<struct FBoneReference>                      BonesToPrioritize;                                        // 0x0078(0x0010) (Edit, ZeroConstructor)
	float                                              WeightOfPrioritization;                                   // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UAnimSequence*                               BakePose;                                                 // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               BakePoseOverride;                                         // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     SourceImportFilename;                                     // 0x00A0(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      bHasBeenSimplified : 1;                                   // 0x00B0(0x0001)
	unsigned char                                      bHasPerLODVertexColors : 1;                               // 0x00B0(0x0001)
	unsigned char                                      bAllowCPUAccess : 1;                                      // 0x00B0(0x0001) (Edit)
	unsigned char                                      bSupportUniformlyDistributedSampling : 1;                 // 0x00B0(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.PerPlatformInt
// 0x0004
struct FPerPlatformInt
{
	int                                                Default;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PerPlatformBool
// 0x0001
struct FPerPlatformBool
{
	bool                                               Default;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
// 0x0008
struct FSkeletalMeshSamplingRegionMaterialFilter
{
	struct FName                                       MaterialName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
// 0x000C
struct FSkeletalMeshSamplingRegionBoneFilter
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIncludeOrExclude : 1;                                    // 0x0008(0x0001) (Edit)
	unsigned char                                      bApplyToChildren : 1;                                     // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingRegion
// 0x0030
struct FSkeletalMeshSamplingRegion
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LODIndex;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSupportUniformlyDistributedSampling : 1;                 // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	TArray<struct FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters;                                          // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FSkeletalMeshSamplingRegionBoneFilter> BoneFilters;                                              // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
// 0x0048
struct FSkeletalMeshSamplingLODBuiltData
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
// 0x0078
struct FSkeletalMeshSamplingRegionBuiltData
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingBuiltData
// 0x0020
struct FSkeletalMeshSamplingBuiltData
{
	TArray<struct FSkeletalMeshSamplingLODBuiltData>   WholeMeshBuiltData;                                       // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData;                                          // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.SkeletalMeshSamplingInfo
// 0x0030
struct FSkeletalMeshSamplingInfo
{
	TArray<struct FSkeletalMeshSamplingRegion>         Regions;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FSkeletalMeshSamplingBuiltData              BuiltData;                                                // 0x0010(0x0020)
};

// ScriptStruct Engine.SkinWeightProfileInfo
// 0x0010
struct FSkinWeightProfileInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPerPlatformBool                            DefaultProfile;                                           // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FPerPlatformInt                             DefaultProfileFromLODIndex;                               // 0x000C(0x0004) (Edit)
};

// ScriptStruct Engine.ExpressionInput
// 0x000C
struct FExpressionInput
{
	int                                                OutputIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ExpressionName;                                           // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BasedMovementInfo
// 0x0030
struct FBasedMovementInfo
{
	class UPrimitiveComponent*                         MovementBase;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      Location;                                                 // 0x0010(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bServerHasBaseComponent;                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeRotation;                                        // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bServerHasVelocity;                                       // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSourceSettings
// 0x0001
struct FRootMotionSourceSettings
{
	unsigned char                                      Flags;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.Vector_NetQuantize10
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize10 : public FVector
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSourceGroup
// 0x00F8
struct alignas(8) FRootMotionSourceGroup
{
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0000(0x00E8) MISSED OFFSET
	unsigned char                                      bHasAdditiveSources : 1;                                  // 0x00E8(0x0001)
	unsigned char                                      bHasOverrideSources : 1;                                  // 0x00E8(0x0001)
	unsigned char                                      bIsAdditiveVelocityApplied : 1;                           // 0x00E8(0x0001)
	struct FRootMotionSourceSettings                   LastAccumulatedSettings;                                  // 0x00E9(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00EA(0x0002) MISSED OFFSET
	struct FVector_NetQuantize10                       LastPreAdditiveVelocity;                                  // 0x00EC(0x000C)
};

// ScriptStruct Engine.RootMotionMovementParams
// 0x0040
struct FRootMotionMovementParams
{
	bool                                               bHasRootMotion;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BlendWeight;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  RootMotionTransform;                                      // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct Engine.RepRootMotionMontage
// 0x0158
struct FRepRootMotionMontage
{
	bool                                               bIsActive;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAnimMontage*                                AnimMontage;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      Location;                                                 // 0x0014(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         MovementBase;                                             // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       MovementBaseBoneName;                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelativePosition;                                        // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeRotation;                                        // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	struct FRootMotionSourceGroup                      AuthoritativeRootMotion;                                  // 0x0048(0x00F8)
	struct FVector_NetQuantize10                       Acceleration;                                             // 0x0140(0x000C)
	struct FVector_NetQuantize10                       LinearVelocity;                                           // 0x014C(0x000C)
};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// 0x0160
struct FSimulatedRootMotionReplicatedMove
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FRepRootMotionMontage                       RootMotion;                                               // 0x0008(0x0158)
};

// ScriptStruct Engine.SplineCurves
// 0x0068
struct FSplineCurves
{
	struct FInterpCurveVector                          Position;                                                 // 0x0000(0x0018) (ZeroConstructor)
	struct FInterpCurveQuat                            Rotation;                                                 // 0x0018(0x0018) (ZeroConstructor)
	struct FInterpCurveVector                          Scale;                                                    // 0x0030(0x0018) (ZeroConstructor)
	struct FInterpCurveFloat                           ReparamTable;                                             // 0x0048(0x0018) (ZeroConstructor)
	class USplineMetadata*                             MetaData;                                                 // 0x0060(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct Engine.SplinePoint
// 0x0044
struct FSplinePoint
{
	float                                              InputKey;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ArriveTangent;                                            // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeaveTangent;                                             // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplinePointType>                      Type;                                                     // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AudioComponentParam
// 0x0020
struct FAudioComponentParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatParam;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BoolParam;                                                // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                IntParam;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class USoundWave*                                  SoundWaveParam;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BaseAttenuationSettings
// 0x00B0
struct FBaseAttenuationSettings
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	EAttenuationDistanceModel                          DistanceAlgorithm;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttenuationShape>                     AttenuationShape;                                         // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              dBAttenuationAtMax;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AttenuationShapeExtents;                                  // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConeOffset;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FalloffDistance;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          CustomAttenuationCurve;                                   // 0x0028(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.SoundAttenuationPluginSettings
// 0x0030
struct FSoundAttenuationPluginSettings
{
	TArray<class USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray;                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UOcclusionPluginSourceSettingsBase*>  OcclusionPluginSettingsArray;                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UReverbPluginSourceSettingsBase*>     ReverbPluginSettingsArray;                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.SoundAttenuationSettings
// 0x0240 (0x02F0 - 0x00B0)
struct FSoundAttenuationSettings : public FBaseAttenuationSettings
{
	unsigned char                                      bAttenuate : 1;                                           // 0x00B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSpatialize : 1;                                          // 0x00B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAttenuateWithLPF : 1;                                    // 0x00B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableListenerFocus : 1;                                 // 0x00B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableFocusInterpolation : 1;                            // 0x00B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableOcclusion : 1;                                     // 0x00B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseComplexCollisionForOcclusion : 1;                     // 0x00B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableReverbSend : 1;                                    // 0x00B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bApplyNormalizationToStereoSounds : 1;                    // 0x00B1(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableLogFrequencyScaling : 1;                           // 0x00B1(0x0001) (Edit, BlueprintVisible)
	TEnumAsByte<ESoundSpatializationAlgorithm>         SpatializationAlgorithm;                                  // 0x00B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00B3(0x0001) MISSED OFFSET
	float                                              BinauralRadius;                                           // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAirAbsorptionMethod                               AbsorptionMethod;                                         // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OcclusionTraceChannel;                                    // 0x00B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EReverbSendMethod                                  ReverbSendMethod;                                         // 0x00BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00BB(0x0001) MISSED OFFSET
	float                                              OmniRadius;                                               // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StereoSpread;                                             // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPFRadiusMin;                                             // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPFRadiusMax;                                             // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          CustomLowpassAirAbsorptionCurve;                          // 0x00D0(0x0088) (Edit, BlueprintVisible)
	struct FRuntimeFloatCurve                          CustomHighpassAirAbsorptionCurve;                         // 0x0158(0x0088) (Edit, BlueprintVisible)
	float                                              LPFFrequencyAtMin;                                        // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPFFrequencyAtMax;                                        // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HPFFrequencyAtMin;                                        // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HPFFrequencyAtMax;                                        // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusAzimuth;                                             // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonFocusAzimuth;                                          // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusDistanceScale;                                       // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonFocusDistanceScale;                                    // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusPriorityScale;                                       // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonFocusPriorityScale;                                    // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusVolumeAttenuation;                                   // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonFocusVolumeAttenuation;                                // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusAttackInterpSpeed;                                   // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusReleaseInterpSpeed;                                  // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionLowPassFilterFrequency;                          // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionVolumeAttenuation;                               // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionInterpolationTime;                               // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbWetLevelMin;                                        // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbWetLevelMax;                                        // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbDistanceMin;                                        // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbDistanceMax;                                        // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ManualReverbSendLevel;                                    // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          CustomReverbSendCurve;                                    // 0x0238(0x0088) (Edit, BlueprintVisible)
	struct FSoundAttenuationPluginSettings             PluginSettings;                                           // 0x02C0(0x0030) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.SoundWaveSpectralData
// 0x000C
struct FSoundWaveSpectralData
{
	float                                              FrequencyHz;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NormalizedMagnitude;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundWaveSpectralDataPerSound
// 0x0020
struct FSoundWaveSpectralDataPerSound
{
	TArray<struct FSoundWaveSpectralData>              SpectralData;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              PlaybackTime;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class USoundWave*                                  SoundWave;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundWaveEnvelopeDataPerSound
// 0x0010
struct FSoundWaveEnvelopeDataPerSound
{
	float                                              Envelope;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackTime;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundWave*                                  SoundWave;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FindFloorResult
// 0x0094
struct FFindFloorResult
{
	unsigned char                                      bBlockingHit : 1;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bWalkableFloor : 1;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bLineTrace : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FloorDist;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              LineDist;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // 0x000C(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.NavAvoidanceMask
// 0x0004
struct FNavAvoidanceMask
{
	unsigned char                                      bGroup0 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup1 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup2 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup3 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup4 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup5 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup6 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup7 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup8 : 1;                                              // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup9 : 1;                                              // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup10 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup11 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup12 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup13 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup14 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup15 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup16 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup17 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup18 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup19 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup20 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup21 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup22 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup23 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup24 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup25 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup26 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup27 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup28 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup29 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup30 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup31 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FCharacterMovementComponentPostPhysicsTickFunction : public FTickFunction
{
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         EndTickGroup;                                             // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTickEvenWhenPaused : 1;                                  // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEverTick : 1;                                         // 0x000A(0x0001)
	unsigned char                                      bStartWithTickEnabled : 1;                                // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                          // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              TickInterval;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.WeightedBlendable
// 0x0010
struct FWeightedBlendable
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UObject*                                     Object;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.WeightedBlendables
// 0x0010
struct FWeightedBlendables
{
	TArray<struct FWeightedBlendable>                  Array;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.PostProcessSettings
// 0x0530
struct FPostProcessSettings
{
	unsigned char                                      bOverride_WhiteTemp : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_WhiteTint : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturation : 1;                            // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorContrast : 1;                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGamma : 1;                                 // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGain : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorOffset : 1;                                // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturationShadows : 1;                     // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorContrastShadows : 1;                       // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGammaShadows : 1;                          // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGainShadows : 1;                           // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorOffsetShadows : 1;                         // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturationMidtones : 1;                    // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorContrastMidtones : 1;                      // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGammaMidtones : 1;                         // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGainMidtones : 1;                          // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorOffsetMidtones : 1;                        // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturationHighlights : 1;                  // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorContrastHighlights : 1;                    // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGammaHighlights : 1;                       // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGainHighlights : 1;                        // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorOffsetHighlights : 1;                      // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorCorrectionShadowsMax : 1;                  // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorCorrectionHighlightsMin : 1;               // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BlueCorrection : 1;                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ExpandGamut : 1;                                // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmWhitePoint : 1;                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmSaturation : 1;                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerRed : 1;                        // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerGreen : 1;                      // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerBlue : 1;                       // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmContrast : 1;                               // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmDynamicRange : 1;                           // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmHealAmount : 1;                             // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmToeAmount : 1;                              // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTint : 1;                             // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTintBlend : 1;                        // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTintAmount : 1;                       // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmSlope : 1;                                  // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmToe : 1;                                    // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmShoulder : 1;                               // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmBlackClip : 1;                              // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmWhiteClip : 1;                              // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_SceneColorTint : 1;                             // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_SceneFringeIntensity : 1;                       // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ChromaticAberrationStartOffset : 1;             // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientCubemapTint : 1;                         // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientCubemapIntensity : 1;                    // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomMethod : 1;                                // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomIntensity : 1;                             // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomThreshold : 1;                             // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom1Tint : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom1Size : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom2Size : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom2Tint : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom3Tint : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom3Size : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom4Tint : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom4Size : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom5Tint : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom5Size : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom6Tint : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom6Size : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomSizeScale : 1;                             // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionTexture : 1;                    // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionSize : 1;                       // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionCenterUV : 1;                   // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionPreFilter : 1;                  // 0x0008(0x0001) (Deprecated)
	unsigned char                                      bOverride_BloomConvolutionPreFilterMin : 1;               // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionPreFilterMax : 1;               // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionPreFilterMult : 1;              // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionBufferScale : 1;                // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMaskIntensity : 1;                     // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMaskTint : 1;                          // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMask : 1;                              // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_CameraShutterSpeed : 1;                         // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_CameraISO : 1;                                  // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMethod : 1;                         // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureLowPercent : 1;                     // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureHighPercent : 1;                    // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMinBrightness : 1;                  // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMaxBrightness : 1;                  // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureCalibrationConstant : 1;            // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureSpeedUp : 1;                        // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureSpeedDown : 1;                      // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureBias : 1;                           // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureBiasCurve : 1;                      // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_HistogramLogMin : 1;                            // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_HistogramLogMax : 1;                            // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareIntensity : 1;                         // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareTint : 1;                              // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareTints : 1;                             // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareBokehSize : 1;                         // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareBokehShape : 1;                        // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareThreshold : 1;                         // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_VignetteIntensity : 1;                          // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_GrainIntensity : 1;                             // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_GrainJitter : 1;                                // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionIntensity : 1;                  // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionStaticFraction : 1;             // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionRadius : 1;                     // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionFadeDistance : 1;               // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionFadeRadius : 1;                 // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionDistance : 1;                   // 0x000C(0x0001) (Deprecated)
	unsigned char                                      bOverride_AmbientOcclusionRadiusInWS : 1;                 // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionPower : 1;                      // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionBias : 1;                       // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionQuality : 1;                    // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipBlend : 1;                   // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipScale : 1;                   // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipThreshold : 1;               // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	unsigned char                                      bOverride_RayTracingAO : 1;                               // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingAOSamplesPerPixel : 1;                // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	unsigned char                                      bOverride_LPVIntensity : 1;                               // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVDirectionalOcclusionIntensity : 1;           // 0x0014(0x0001) (Edit)
	unsigned char                                      bOverride_LPVDirectionalOcclusionRadius : 1;              // 0x0014(0x0001) (Edit)
	unsigned char                                      bOverride_LPVDiffuseOcclusionExponent : 1;                // 0x0014(0x0001) (Edit)
	unsigned char                                      bOverride_LPVSpecularOcclusionExponent : 1;               // 0x0014(0x0001) (Edit)
	unsigned char                                      bOverride_LPVDiffuseOcclusionIntensity : 1;               // 0x0014(0x0001) (Edit)
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity : 1;              // 0x0014(0x0001) (Edit)
	unsigned char                                      bOverride_LPVSize : 1;                                    // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity : 1;             // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity : 1;                // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVGeometryVolumeBias : 1;                      // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVVplInjectionBias : 1;                        // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity : 1;              // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVFadeRange : 1;                               // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVDirectionalOcclusionFadeRange : 1;           // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_IndirectLightingColor : 1;                      // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_IndirectLightingIntensity : 1;                  // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGradingIntensity : 1;                      // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGradingLUT : 1;                            // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFocalDistance : 1;                  // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFstop : 1;                          // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldMinFstop : 1;                       // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldBladeCount : 1;                     // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldSensorWidth : 1;                    // 0x0016(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurRadius : 1;                // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurAmount : 1;                // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFocalRegion : 1;                    // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldNearTransitionRegion : 1;           // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFarTransitionRegion : 1;            // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldScale : 1;                          // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldNearBlurSize : 1;                   // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFarBlurSize : 1;                    // 0x0017(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MobileHQGaussian : 1;                           // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldOcclusion : 1;                      // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldSkyFocusDistance : 1;               // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldVignetteSize : 1;                   // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurAmount : 1;                           // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurMax : 1;                              // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurTargetFPS : 1;                        // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurPerObjectSize : 1;                    // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenPercentage : 1;                           // 0x0019(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionIntensity : 1;             // 0x0019(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionQuality : 1;               // 0x0019(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionMaxRoughness : 1;          // 0x0019(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionRoughnessScale : 1;        // 0x0019(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	unsigned char                                      bOverride_ReflectionsType : 1;                            // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingReflectionsMaxRoughness : 1;          // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingReflectionsMaxBounces : 1;            // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingReflectionsSamplesPerPixel : 1;       // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingReflectionsShadows : 1;               // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingReflectionsTranslucency : 1;          // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_TranslucencyType : 1;                           // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingTranslucencyMaxRoughness : 1;         // 0x001C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingTranslucencyRefractionRays : 1;       // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingTranslucencySamplesPerPixel : 1;      // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingTranslucencyShadows : 1;              // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingTranslucencyRefraction : 1;           // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingGI : 1;                               // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingGIMaxBounces : 1;                     // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_RayTracingGISamplesPerPixel : 1;                // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_PathTracingMaxBounces : 1;                      // 0x001D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_PathTracingSamplesPerPixel : 1;                 // 0x001E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	unsigned char                                      bMobileHQGaussian : 1;                                    // 0x0020(0x0001) (Edit, BlueprintVisible)
	TEnumAsByte<EBloomMethod>                          BloomMethod;                                              // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAutoExposureMethod>                   AutoExposureMethod;                                       // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
	float                                              WhiteTemp;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WhiteTint;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FVector4                                    ColorSaturation;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorContrast;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGamma;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGain;                                                // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorOffset;                                              // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorSaturationShadows;                                   // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorContrastShadows;                                     // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGammaShadows;                                        // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGainShadows;                                         // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorOffsetShadows;                                       // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorSaturationMidtones;                                  // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorContrastMidtones;                                    // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGammaMidtones;                                       // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGainMidtones;                                        // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorOffsetMidtones;                                      // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorSaturationHighlights;                                // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorContrastHighlights;                                  // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGammaHighlights;                                     // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorGainHighlights;                                      // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorOffsetHighlights;                                    // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColorCorrectionHighlightsMin;                             // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColorCorrectionShadowsMax;                                // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlueCorrection;                                           // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExpandGamut;                                              // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmSlope;                                                // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmToe;                                                  // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmShoulder;                                             // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmBlackClip;                                            // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmWhiteClip;                                            // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmWhitePoint;                                           // 0x0194(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmShadowTint;                                           // 0x01A4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmShadowTintBlend;                                      // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmShadowTintAmount;                                     // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmSaturation;                                           // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerRed;                                      // 0x01C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerGreen;                                    // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerBlue;                                     // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmContrast;                                             // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmToeAmount;                                            // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmHealAmount;                                           // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmDynamicRange;                                         // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SceneColorTint;                                           // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SceneFringeIntensity;                                     // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChromaticAberrationStartOffset;                           // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomIntensity;                                           // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomThreshold;                                           // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomSizeScale;                                           // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom1Size;                                               // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom2Size;                                               // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom3Size;                                               // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom4Size;                                               // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom5Size;                                               // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom6Size;                                               // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom1Tint;                                               // 0x023C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom2Tint;                                               // 0x024C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom3Tint;                                               // 0x025C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom4Tint;                                               // 0x026C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom5Tint;                                               // 0x027C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom6Tint;                                               // 0x028C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionSize;                                     // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  BloomConvolutionTexture;                                  // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BloomConvolutionCenterUV;                                 // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionPreFilterMin;                             // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionPreFilterMax;                             // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionPreFilterMult;                            // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionBufferScale;                              // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    BloomDirtMask;                                            // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomDirtMaskIntensity;                                   // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BloomDirtMaskTint;                                        // 0x02CC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AmbientCubemapTint;                                       // 0x02DC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientCubemapIntensity;                                  // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureCube*                                AmbientCubemap;                                           // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraShutterSpeed;                                       // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraISO;                                                // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFstop;                                        // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldMinFstop;                                     // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DepthOfFieldBladeCount;                                   // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureBias;                                         // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 AutoExposureBiasCurve;                                    // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureLowPercent;                                   // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureHighPercent;                                  // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureMinBrightness;                                // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureMaxBrightness;                                // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureSpeedUp;                                      // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureSpeedDown;                                    // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMin;                                          // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMax;                                          // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureCalibrationConstant;                          // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensFlareIntensity;                                       // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LensFlareTint;                                            // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensFlareBokehSize;                                       // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensFlareThreshold;                                       // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    LensFlareBokehShape;                                      // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LensFlareTints[0x8];                                      // 0x0360(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VignetteIntensity;                                        // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrainJitter;                                              // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrainIntensity;                                           // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionIntensity;                                // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionStaticFraction;                           // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionRadius;                                   // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AmbientOcclusionRadiusInWS : 1;                           // 0x03F8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	float                                              AmbientOcclusionFadeDistance;                             // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionFadeRadius;                               // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionDistance;                                 // 0x0404(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AmbientOcclusionPower;                                    // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionBias;                                     // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionQuality;                                  // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionMipBlend;                                 // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionMipScale;                                 // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionMipThreshold;                             // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RayTracingAO : 1;                                         // 0x0420(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	int                                                RayTracingAOSamplesPerPixel;                              // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IndirectLightingColor;                                    // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IndirectLightingIntensity;                                // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERayTracingGlobalIlluminationType                  RayTracingGIType;                                         // 0x043C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x043D(0x0003) MISSED OFFSET
	int                                                RayTracingGIMaxBounces;                                   // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RayTracingGISamplesPerPixel;                              // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColorGradingIntensity;                                    // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	class UTexture*                                    ColorGradingLUT;                                          // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldSensorWidth;                                  // 0x0458(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFocalDistance;                                // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldDepthBlurAmount;                              // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldDepthBlurRadius;                              // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFocalRegion;                                  // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldNearTransitionRegion;                         // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFarTransitionRegion;                          // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldScale;                                        // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldNearBlurSize;                                 // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFarBlurSize;                                  // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldOcclusion;                                    // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldSkyFocusDistance;                             // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldVignetteSize;                                 // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurAmount;                                         // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurMax;                                            // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MotionBlurTargetFPS;                                      // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurPerObjectSize;                                  // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVIntensity;                                             // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVVplInjectionBias;                                      // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSize;                                                  // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSecondaryOcclusionIntensity;                           // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSecondaryBounceIntensity;                              // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVGeometryVolumeBias;                                    // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVEmissiveInjectionIntensity;                            // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionIntensity;                         // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionRadius;                            // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDiffuseOcclusionExponent;                              // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSpecularOcclusionExponent;                             // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDiffuseOcclusionIntensity;                             // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSpecularOcclusionIntensity;                            // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EReflectionsType                                   ReflectionsType;                                          // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x04D1(0x0003) MISSED OFFSET
	float                                              ScreenSpaceReflectionIntensity;                           // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenSpaceReflectionQuality;                             // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenSpaceReflectionMaxRoughness;                        // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RayTracingReflectionsMaxRoughness;                        // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RayTracingReflectionsMaxBounces;                          // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RayTracingReflectionsSamplesPerPixel;                     // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EReflectedAndRefractedRayTracedShadows             RayTracingReflectionsShadows;                             // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RayTracingReflectionsTranslucency : 1;                    // 0x04ED(0x0001) (Edit, BlueprintVisible)
	ETranslucencyType                                  TranslucencyType;                                         // 0x04EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x04EF(0x0001) MISSED OFFSET
	float                                              RayTracingTranslucencyMaxRoughness;                       // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RayTracingTranslucencyRefractionRays;                     // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RayTracingTranslucencySamplesPerPixel;                    // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EReflectedAndRefractedRayTracedShadows             RayTracingTranslucencyShadows;                            // 0x04FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RayTracingTranslucencyRefraction : 1;                     // 0x04FD(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData12[0x2];                                       // 0x04FE(0x0002) MISSED OFFSET
	int                                                PathTracingMaxBounces;                                    // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PathTracingSamplesPerPixel;                               // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVFadeRange;                                             // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionFadeRange;                         // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenPercentage;                                         // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	struct FWeightedBlendables                         WeightedBlendables;                                       // 0x0518(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData14[0x8];                                       // 0x0528(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.MinimalViewInfo
// 0x05C0
struct FMinimalViewInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DesiredFOV;                                               // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              OrthoWidth;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrthoNearClipPlane;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrthoFarClipPlane;                                        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bConstrainAspectRatio : 1;                                // 0x0030(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseFieldOfViewForLOD : 1;                                // 0x0030(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	TEnumAsByte<ECameraProjectionMode>                 ProjectionMode;                                           // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              PostProcessBlendWeight;                                   // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0040(0x0530) (BlueprintVisible)
	struct FVector2D                                   OffCenterProjectionOffset;                                // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x48];                                      // 0x0578(0x0048) MISSED OFFSET
};

// ScriptStruct Engine.CameraCacheEntry
// 0x05D0
struct FCameraCacheEntry
{
	float                                              Timestamp;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FMinimalViewInfo                            POV;                                                      // 0x0010(0x05C0)
};

// ScriptStruct Engine.TViewTarget
// 0x05E0
struct FTViewTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FMinimalViewInfo                            POV;                                                      // 0x0010(0x05C0) (Edit, BlueprintVisible)
	class APlayerState*                                PlayerState;                                              // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05D8(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ReverbSettings
// 0x0020
struct FReverbSettings
{
	bool                                               bApplyReverb;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UReverbEffect*                               ReverbEffect;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundEffectSubmixPreset*                    ReverbPluginEffect;                                       // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InteriorSettings
// 0x0024
struct FInteriorSettings
{
	bool                                               bIsWorldSettings;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ExteriorVolume;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorTime;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorLPF;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorLPFTime;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorVolume;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorTime;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorLPF;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorLPFTime;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BroadphaseSettings
// 0x0040
struct FBroadphaseSettings
{
	bool                                               bUseMBPOnClient;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMBPOnServer;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMBPOuterBounds;                                       // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FBox                                        MBPBounds;                                                // 0x0004(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBox                                        MBPOuterBounds;                                           // 0x0020(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MBPNumSubdivs;                                            // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NetViewer
// 0x0030
struct FNetViewer
{
	class UNetConnection*                              Connection;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      InViewer;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      ViewTarget;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ViewLocation;                                             // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ViewDir;                                                  // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// 0x0040
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                                // 0x0000(0x0040) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// 0x0008
struct FInstancedStaticMeshMappingInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DebugTextInfo
// 0x0060
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SrcActorOffset;                                           // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SrcActorDesiredOffset;                                    // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DebugText;                                                // 0x0020(0x0010) (ZeroConstructor)
	float                                              TimeRemaining;                                            // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Duration;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      TextColor;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAbsoluteLocation : 1;                                    // 0x003C(0x0001)
	unsigned char                                      bKeepAttachedToActor : 1;                                 // 0x003C(0x0001)
	unsigned char                                      bDrawShadow : 1;                                          // 0x003C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FVector                                     OrigActorLocation;                                        // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UFont*                                       Font;                                                     // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FontScale;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// 0x0010
struct FLightmassMaterialInterfaceSettings
{
	float                                              EmissiveBoost;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExportResolutionScale;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCastShadowAsMasked : 1;                                  // 0x000C(0x0001) (Edit)
	unsigned char                                      bOverrideCastShadowAsMasked : 1;                          // 0x000C(0x0001)
	unsigned char                                      bOverrideEmissiveBoost : 1;                               // 0x000C(0x0001)
	unsigned char                                      bOverrideDiffuseBoost : 1;                                // 0x000C(0x0001)
	unsigned char                                      bOverrideExportResolutionScale : 1;                       // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.MaterialTextureInfo
// 0x0010
struct FMaterialTextureInfo
{
	float                                              SamplingScale;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UVChannelIndex;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TextureName;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialParameterInfo
// 0x0010
struct FMaterialParameterInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialParameterAssociation>         Association;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Index;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ScalarParameterValue
// 0x0024
struct FScalarParameterValue
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	float                                              ParameterValue;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VectorParameterValue
// 0x0030
struct FVectorParameterValue
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FLinearColor                                ParameterValue;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TextureParameterValue
// 0x0028
struct FTextureParameterValue
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	class UTexture*                                    ParameterValue;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RuntimeVirtualTextureParameterValue
// 0x0028
struct FRuntimeVirtualTextureParameterValue
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	class URuntimeVirtualTexture*                      ParameterValue;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FontParameterValue
// 0x0030
struct FFontParameterValue
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	class UFont*                                       FontValue;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FontPage;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x001C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// 0x0008
struct FMaterialInstanceBasePropertyOverrides
{
	unsigned char                                      bOverride_OpacityMaskClipValue : 1;                       // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_BlendMode : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_ShadingModel : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_DitheredLODTransition : 1;                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_CastDynamicShadowAsMasked : 1;                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_TwoSided : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      TwoSided : 1;                                             // 0x0000(0x0001) (Edit)
	unsigned char                                      DitheredLODTransition : 1;                                // 0x0000(0x0001) (Edit)
	unsigned char                                      bCastDynamicShadowAsMasked : 1;                           // 0x0001(0x0001) (Edit)
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialShadingModel>                 ShadingModel;                                             // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OpacityMaskClipValue;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticParameterBase
// 0x0024
struct FStaticParameterBase
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010)
	bool                                               bOverride;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticSwitchParameter
// 0x0004 (0x0028 - 0x0024)
struct FStaticSwitchParameter : public FStaticParameterBase
{
	bool                                               Value;                                                    // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.StaticComponentMaskParameter
// 0x0004 (0x0028 - 0x0024)
struct FStaticComponentMaskParameter : public FStaticParameterBase
{
	bool                                               R;                                                        // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               G;                                                        // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               B;                                                        // 0x0026(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               A;                                                        // 0x0027(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticTerrainLayerWeightParameter
// 0x0008 (0x002C - 0x0024)
struct FStaticTerrainLayerWeightParameter : public FStaticParameterBase
{
	int                                                WeightmapIndex;                                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bWeightBasedBlend;                                        // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.MaterialLayersFunctions
// 0x0040
struct FMaterialLayersFunctions
{
	TArray<class UMaterialFunctionInterface*>          Layers;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UMaterialFunctionInterface*>          Blends;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<bool>                                       LayerStates;                                              // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FString                                     KeyString;                                                // 0x0030(0x0010) (ZeroConstructor, Deprecated)
};

// ScriptStruct Engine.StaticMaterialLayersParameter
// 0x0044 (0x0068 - 0x0024)
struct FStaticMaterialLayersParameter : public FStaticParameterBase
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FMaterialLayersFunctions                    Value;                                                    // 0x0028(0x0040)
};

// ScriptStruct Engine.StaticParameterSet
// 0x0040
struct FStaticParameterSet
{
	TArray<struct FStaticSwitchParameter>              StaticSwitchParameters;                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FStaticComponentMaskParameter>       StaticComponentMaskParameters;                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FStaticTerrainLayerWeightParameter>  TerrainLayerWeightParameters;                             // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FStaticMaterialLayersParameter>      MaterialLayersParameters;                                 // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BPComponentClassOverride
// 0x0010
struct FBPComponentClassOverride
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      ComponentClass;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
// 0x0018
struct FBlueprintComponentChangedPropertyInfo
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UStruct*                                     PropertyScope;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintCookedComponentInstancingData
// 0x0048
struct FBlueprintCookedComponentInstancingData
{
	TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList;                                      // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x11];                                      // 0x0010(0x0011) MISSED OFFSET
	bool                                               bHasValidCookedData;                                      // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x26];                                      // 0x0022(0x0026) MISSED OFFSET
};

// ScriptStruct Engine.SoundWaveSpectralDataEntry
// 0x0008
struct FSoundWaveSpectralDataEntry
{
	float                                              Magnitude;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NormalizedMagnitude;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundWaveSpectralTimeData
// 0x0018
struct FSoundWaveSpectralTimeData
{
	TArray<struct FSoundWaveSpectralDataEntry>         Data;                                                     // 0x0000(0x0010) (ZeroConstructor)
	float                                              TimeSec;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SoundWaveEnvelopeTimeData
// 0x0008
struct FSoundWaveEnvelopeTimeData
{
	float                                              Amplitude;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeSec;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SubtitleCue
// 0x0020
struct FSubtitleCue
{
	struct FText                                       Text;                                                     // 0x0000(0x0028) (Edit)
	float                                              Time;                                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InterpolationParameter
// 0x0008
struct FInterpolationParameter
{
	float                                              InterpolationTime;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFilterInterpolationType>              InterpolationType;                                        // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneInterpolation
// 0x0014
struct FPerBoneInterpolation
{
	struct FBoneReference                              BoneReference;                                            // 0x0000(0x0010) (Edit)
	float                                              InterpolationSpeedPerSec;                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlendSample
// 0x0018
struct FBlendSample
{
	class UAnimSequence*                               Animation;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SampleValue;                                              // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RateScale;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EditorElement
// 0x0018
struct FEditorElement
{
	int                                                Indices[0x3];                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weights[0x3];                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlendParameter
// 0x0020
struct FBlendParameter
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Min;                                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GridNum;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimGroupInfo
// 0x0018
struct FAnimGroupInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BakedStateExitTransition
// 0x0020
struct FBakedStateExitTransition
{
	int                                                CanTakeDelegateIndex;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CustomResultNodeIndex;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TransitionIndex;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bDesiredTransitionReturnValue;                            // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutomaticRemainingTimeRule;                              // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	TArray<int>                                        PoseEvaluatorLinks;                                       // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BakedAnimationState
// 0x0058
struct FBakedAnimationState
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FBakedStateExitTransition>           Transitions;                                              // 0x0008(0x0010) (ZeroConstructor)
	int                                                StateRootNodeIndex;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartNotify;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndNotify;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FullyBlendedNotify;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsAConduit;                                              // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                EntryRuleNodeIndex;                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        PlayerNodeIndices;                                        // 0x0030(0x0010) (ZeroConstructor)
	TArray<int>                                        LayerNodeIndices;                                         // 0x0040(0x0010) (ZeroConstructor)
	bool                                               bAlwaysResetOnEntry;                                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AnimationStateBase
// 0x0008
struct FAnimationStateBase
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// 0x0038 (0x0040 - 0x0008)
struct FAnimationTransitionBetweenStates : public FAnimationStateBase
{
	int                                                PreviousState;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NextState;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CrossfadeDuration;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartNotify;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndNotify;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InterruptNotify;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	EAlphaBlendOption                                  BlendMode;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendProfile*                               BlendProfile;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETransitionLogicType>                  LogicType;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.BakedAnimationStateMachine
// 0x0030
struct FBakedAnimationStateMachine
{
	struct FName                                       MachineName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                InitialState;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FBakedAnimationState>                States;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FAnimationTransitionBetweenStates>   Transitions;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.CachedPoseIndices
// 0x0010
struct FCachedPoseIndices
{
	TArray<int>                                        OrderedSavedPoseNodeIndices;                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ExposedValueCopyRecord
// 0x0038
struct FExposedValueCopyRecord
{
	struct FName                                       SourcePropertyName;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceSubPropertyName;                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SourceArrayIndex;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInstanceIsTarget;                                        // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	EPostCopyOperation                                 PostCopyOperation;                                        // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	ECopyType                                          CopyType;                                                 // 0x0016(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	class UProperty*                                   DestProperty;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                DestArrayIndex;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	class UProperty*                                   CachedSourceProperty;                                     // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UProperty*                                   CachedSourceStructSubProperty;                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ExposedValueHandler
// 0x0030
struct FExposedValueHandler
{
	struct FName                                       BoundFunction;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FExposedValueCopyRecord>             CopyRecords;                                              // 0x0008(0x0010) (ZeroConstructor)
	class UFunction*                                   Function;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStructProperty*                             ValueHandlerNodeProperty;                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.GraphAssetPlayerInformation
// 0x0010
struct FGraphAssetPlayerInformation
{
	TArray<int>                                        PlayerNodeIndices;                                        // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimGraphBlendOptions
// 0x0008
struct FAnimGraphBlendOptions
{
	float                                              BlendInTime;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimBlueprintFunction
// 0x0068
struct FAnimBlueprintFunction
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Group;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                OutputPoseNodeIndex;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FName>                               InputPoseNames;                                           // 0x0018(0x0010) (ZeroConstructor)
	TArray<int>                                        InputPoseNodeIndices;                                     // 0x0028(0x0010) (ZeroConstructor)
	class UStructProperty*                             OutputPoseNodeProperty;                                   // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UStructProperty*>                     InputPoseNodeProperties;                                  // 0x0040(0x0010) (ZeroConstructor, Transient)
	TArray<class UProperty*>                           InputProperties;                                          // 0x0050(0x0010) (ZeroConstructor, Transient)
	bool                                               bImplemented;                                             // 0x0060(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SmartName
// 0x000C
struct FSmartName
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimCurveBase
// 0x0018
struct FAnimCurveBase
{
	struct FName                                       LastObservedName;                                         // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSmartName                                  Name;                                                     // 0x0008(0x000C)
	int                                                CurveTypeFlags;                                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FloatCurve
// 0x0080 (0x0098 - 0x0018)
struct FFloatCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurve;                                               // 0x0018(0x0080)
};

// ScriptStruct Engine.RawCurveTracks
// 0x0010
struct FRawCurveTracks
{
	TArray<struct FFloatCurve>                         FloatCurves;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimSegment
// 0x0020
struct FAnimSegment
{
	class UAnimSequenceBase*                           AnimReference;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartPos;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              AnimStartTime;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimEndTime;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimPlayRate;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LoopingCount;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimTrack
// 0x0010
struct FAnimTrack
{
	TArray<struct FAnimSegment>                        AnimSegments;                                             // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.AlphaBlend
// 0x0030
struct FAlphaBlend
{
	class UCurveFloat*                                 CustomCurve;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x000C(0x0018) MISSED OFFSET
	EAlphaBlendOption                                  BlendOption;                                              // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0025(0x000B) MISSED OFFSET
};

// ScriptStruct Engine.AnimSyncMarker
// 0x000C
struct FAnimSyncMarker
{
	struct FName                                       MarkerName;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MarkerSyncData
// 0x0020
struct FMarkerSyncData
{
	TArray<struct FAnimSyncMarker>                     AuthoredSyncMarkers;                                      // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CompositeSection
// 0x0028 (0x0058 - 0x0030)
struct FCompositeSection : public FAnimLinkableElement
{
	struct FName                                       SectionName;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0038(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       NextSectionName;                                          // 0x003C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<class UAnimMetaData*>                       MetaData;                                                 // 0x0048(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct Engine.SlotAnimationTrack
// 0x0018
struct FSlotAnimationTrack
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnimTrack                                  AnimTrack;                                                // 0x0008(0x0010) (Edit)
};

// ScriptStruct Engine.BranchingPoint
// 0x0010 (0x0040 - 0x0030)
struct FBranchingPoint : public FAnimLinkableElement
{
	struct FName                                       EventName;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DisplayTime;                                              // 0x0038(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TriggerTimeOffset;                                        // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BranchingPointMarker
// 0x000C
struct FBranchingPointMarker
{
	int                                                NotifyIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TriggerTime;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimNotifyEventType>                  NotifyEventType;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.TimeStretchCurveMarker
// 0x0010
struct FTimeStretchCurveMarker
{
	float                                              Time[0x3];                                                // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Alpha;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.TimeStretchCurve
// 0x0028
struct FTimeStretchCurve
{
	float                                              SamplingRate;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurveValueMinPrecision;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FTimeStretchCurveMarker>             Markers;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst)
	float                                              Sum_dT_i_by_C_i[0x3];                                     // 0x0018(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.TrackToSkeletonMap
// 0x0004
struct FTrackToSkeletonMap
{
	int                                                BoneTreeIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimSetMeshLinkup
// 0x0010
struct FAnimSetMeshLinkup
{
	TArray<int>                                        BoneToTrackTable;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.DirectoryPath
// 0x0010
struct FDirectoryPath
{
	struct FString                                     Path;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.PrimaryAssetRules
// 0x000C
struct FPrimaryAssetRules
{
	int                                                Priority;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ChunkId;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyRecursively;                                        // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EPrimaryAssetCookRule                              CookRule;                                                 // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.PrimaryAssetTypeInfo
// 0x0088
struct FPrimaryAssetTypeInfo
{
	struct FName                                       PrimaryAssetType;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty Engine.PrimaryAssetTypeInfo.AssetBaseClass
	class UClass*                                      AssetBaseClassLoaded;                                     // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasBlueprintClasses;                                     // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEditorOnly;                                            // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	TArray<struct FDirectoryPath>                      Directories;                                              // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<struct FSoftObjectPath>                     SpecificAssets;                                           // 0x0050(0x0010) (Edit, ZeroConstructor)
	struct FPrimaryAssetRules                          Rules;                                                    // 0x0060(0x000C) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FString>                             AssetScanPaths;                                           // 0x0070(0x0010) (ZeroConstructor, Transient)
	bool                                               bIsDynamicAsset;                                          // 0x0080(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                NumberOfAssets;                                           // 0x0084(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.PrimaryAssetRulesOverride
// 0x001C
struct FPrimaryAssetRulesOverride
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FPrimaryAssetRules                          Rules;                                                    // 0x0010(0x000C) (Edit)
};

// ScriptStruct Engine.PrimaryAssetRulesCustomOverride
// 0x0038
struct FPrimaryAssetRulesCustomOverride
{
	struct FPrimaryAssetType                           PrimaryAssetType;                                         // 0x0000(0x0008) (Edit, ZeroConstructor)
	struct FDirectoryPath                              FilterDirectory;                                          // 0x0008(0x0010) (Edit)
	struct FString                                     FilterString;                                             // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FPrimaryAssetRules                          Rules;                                                    // 0x0028(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AssetManagerRedirect
// 0x0020
struct FAssetManagerRedirect
{
	struct FString                                     Old;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     New;                                                      // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.AssetMapping
// 0x0010
struct FAssetMapping
{
	class UAnimationAsset*                             SourceAsset;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             TargetAsset;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AtmospherePrecomputeParameters
// 0x002C
struct FAtmospherePrecomputeParameters
{
	float                                              DensityHeight;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DecayHeight;                                              // 0x0004(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                MaxScatteringOrder;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TransmittanceTexWidth;                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TransmittanceTexHeight;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IrradianceTexWidth;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IrradianceTexHeight;                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InscatterAltitudeSampleNum;                               // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                InscatterMuNum;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InscatterMuSNum;                                          // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InscatterNuNum;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AudioQualitySettings
// 0x0020
struct FAudioQualitySettings
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0028) (Edit)
	int                                                MaxChannels;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// 0x0020
struct FEditorMapPerformanceTestDefinition
{
	struct FSoftObjectPath                             PerformanceTestmap;                                       // 0x0000(0x0018) (Edit, ZeroConstructor, Config)
	int                                                TestTimer;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FilePath
// 0x0010
struct FFilePath
{
	struct FString                                     FilePath;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.ImportFactorySettingValues
// 0x0020
struct FImportFactorySettingValues
{
	struct FString                                     SettingName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// 0x0020
struct FEditorImportWorkflowDefinition
{
	struct FFilePath                                   ImportFilePath;                                           // 0x0000(0x0010) (Edit, Config)
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                          // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// 0x0150
struct FBuildPromotionImportWorkflowSettings
{
	struct FEditorImportWorkflowDefinition             Diffuse;                                                  // 0x0000(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Normal;                                                   // 0x0020(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             StaticMesh;                                               // 0x0040(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             ReimportStaticMesh;                                       // 0x0060(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             BlendShapeMesh;                                           // 0x0080(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             MorphMesh;                                                // 0x00A0(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             SkeletalMesh;                                             // 0x00C0(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Animation;                                                // 0x00E0(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Sound;                                                    // 0x0100(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             SurroundSound;                                            // 0x0120(0x0020) (Edit, Config)
	TArray<struct FEditorImportWorkflowDefinition>     OtherAssetsToImport;                                      // 0x0140(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// 0x0060
struct FBuildPromotionOpenAssetSettings
{
	struct FFilePath                                   BlueprintAsset;                                           // 0x0000(0x0010) (Edit, Config)
	struct FFilePath                                   MaterialAsset;                                            // 0x0010(0x0010) (Edit, Config)
	struct FFilePath                                   ParticleSystemAsset;                                      // 0x0020(0x0010) (Edit, Config)
	struct FFilePath                                   SkeletalMeshAsset;                                        // 0x0030(0x0010) (Edit, Config)
	struct FFilePath                                   StaticMeshAsset;                                          // 0x0040(0x0010) (Edit, Config)
	struct FFilePath                                   TextureAsset;                                             // 0x0050(0x0010) (Edit, Config)
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// 0x0020
struct FBuildPromotionNewProjectSettings
{
	struct FDirectoryPath                              NewProjectFolderOverride;                                 // 0x0000(0x0010) (Edit)
	struct FString                                     NewProjectNameOverride;                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.BuildPromotionTestSettings
// 0x01F0
struct FBuildPromotionTestSettings
{
	struct FFilePath                                   DefaultStaticMeshAsset;                                   // 0x0000(0x0010) (Edit)
	struct FBuildPromotionImportWorkflowSettings       ImportWorkflow;                                           // 0x0010(0x0150) (Edit)
	struct FBuildPromotionOpenAssetSettings            OpenAssets;                                               // 0x0160(0x0060) (Edit)
	struct FBuildPromotionNewProjectSettings           NewProjectSettings;                                       // 0x01C0(0x0020) (Edit)
	struct FFilePath                                   SourceControlMaterial;                                    // 0x01E0(0x0010) (Edit)
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// 0x0030
struct FMaterialEditorPromotionSettings
{
	struct FFilePath                                   DefaultMaterialAsset;                                     // 0x0000(0x0010) (Edit)
	struct FFilePath                                   DefaultDiffuseTexture;                                    // 0x0010(0x0010) (Edit)
	struct FFilePath                                   DefaultNormalTexture;                                     // 0x0020(0x0010) (Edit)
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// 0x0010
struct FParticleEditorPromotionSettings
{
	struct FFilePath                                   DefaultParticleAsset;                                     // 0x0000(0x0010) (Edit)
};

// ScriptStruct Engine.BlueprintEditorPromotionSettings
// 0x0030
struct FBlueprintEditorPromotionSettings
{
	struct FFilePath                                   FirstMeshPath;                                            // 0x0000(0x0010) (Edit)
	struct FFilePath                                   SecondMeshPath;                                           // 0x0010(0x0010) (Edit)
	struct FFilePath                                   DefaultParticleAsset;                                     // 0x0020(0x0010) (Edit)
};

// ScriptStruct Engine.ExternalToolDefinition
// 0x0060
struct FExternalToolDefinition
{
	struct FString                                     ToolName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FFilePath                                   ExecutablePath;                                           // 0x0010(0x0010) (Edit, Config)
	struct FString                                     CommandLineOptions;                                       // 0x0020(0x0010) (Edit, ZeroConstructor, Config)
	struct FDirectoryPath                              WorkingDirectory;                                         // 0x0030(0x0010) (Edit, Config)
	struct FString                                     ScriptExtension;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	struct FDirectoryPath                              ScriptDirectory;                                          // 0x0050(0x0010) (Edit, Config)
};

// ScriptStruct Engine.EditorImportExportTestDefinition
// 0x0038
struct FEditorImportExportTestDefinition
{
	struct FFilePath                                   ImportFilePath;                                           // 0x0000(0x0010) (Edit, Config)
	struct FString                                     ExportFileExtension;                                      // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bSkipExport;                                              // 0x0020(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.LaunchOnTestSettings
// 0x0020
struct FLaunchOnTestSettings
{
	struct FFilePath                                   LaunchOnTestmap;                                          // 0x0000(0x0010) (Edit, Config)
	struct FString                                     DeviceID;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.BandwidthTestItem
// 0x0010
struct FBandwidthTestItem
{
	TArray<unsigned char>                              Kilobyte;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BandwidthTestGenerator
// 0x0020
struct FBandwidthTestGenerator
{
	TArray<struct FBandwidthTestItem>                  ReplicatedBuffers;                                        // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.BoneNode
// 0x0010
struct FBoneNode
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                ParentIndex;                                              // 0x0008(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EBoneTranslationRetargetingMode>       TranslationRetargetingMode;                               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.VirtualBone
// 0x0018
struct FVirtualBone
{
	struct FName                                       SourceBoneName;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetBoneName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       VirtualBoneName;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SmartNameContainer
// 0x0050
struct FSmartNameContainer
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.AnimSlotGroup
// 0x0018
struct FAnimSlotGroup
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SlotNames;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BlendProfileBoneEntry
// 0x0014
struct FBlendProfileBoneEntry
{
	struct FBoneReference                              BoneReference;                                            // 0x0000(0x0010) (Edit)
	float                                              BlendScale;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.KShapeElem
// 0x0030
struct FKShapeElem
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              RestOffset;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	unsigned char                                      bContributeToMass : 1;                                    // 0x0018(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x17];                                      // 0x0019(0x0017) MISSED OFFSET
};

// ScriptStruct Engine.KSphereElem
// 0x0010 (0x0040 - 0x0030)
struct FKSphereElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.KBoxElem
// 0x0028 (0x0058 - 0x0030)
struct FKBoxElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.KSphylElem
// 0x0020 (0x0050 - 0x0030)
struct FKSphylElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.KConvexElem
// 0x0070 (0x00A0 - 0x0030)
struct FKConvexElem : public FKShapeElem
{
	TArray<struct FVector>                             VertexData;                                               // 0x0030(0x0010) (ZeroConstructor)
	struct FBox                                        ElemBox;                                                  // 0x0040(0x001C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0060(0x0030) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.KTaperedCapsuleElem
// 0x0028 (0x0058 - 0x0030)
struct FKTaperedCapsuleElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius0;                                                  // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius1;                                                  // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.KAggregateGeom
// 0x0058
struct FKAggregateGeom
{
	TArray<struct FKSphereElem>                        SphereElems;                                              // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKBoxElem>                           BoxElems;                                                 // 0x0010(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKSphylElem>                         SphylElems;                                               // 0x0020(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKConvexElem>                        ConvexElems;                                              // 0x0030(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKTaperedCapsuleElem>                TaperedCapsuleElems;                                      // 0x0040(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.BranchFilter
// 0x000C
struct FBranchFilter
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BlendDepth;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InputBlendPose
// 0x0010
struct FInputBlendPose
{
	TArray<struct FBranchFilter>                       BranchFilters;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.BuilderPoly
// 0x0020
struct FBuilderPoly
{
	TArray<int>                                        VertexIndices;                                            // 0x0000(0x0010) (ZeroConstructor)
	int                                                Direction;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemName;                                                 // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                PolyFlags;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PooledCameraShakes
// 0x0010
struct FPooledCameraShakes
{
	TArray<class UCameraShake*>                        PooledShakes;                                             // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.FOscillator
// 0x000C
struct FFOscillator
{
	float                                              Amplitude;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInitialOscillatorOffset>              InitialOffset;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EOscillatorWaveform                                Waveform;                                                 // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible)
	struct FFOscillator                                Yaw;                                                      // 0x000C(0x000C) (Edit, BlueprintVisible)
	struct FFOscillator                                Roll;                                                     // 0x0018(0x000C) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                                        // 0x0000(0x000C) (Edit, BlueprintVisible)
	struct FFOscillator                                Y;                                                        // 0x000C(0x000C) (Edit, BlueprintVisible)
	struct FFOscillator                                Z;                                                        // 0x0018(0x000C) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.CanvasUVTri
// 0x0060
struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V0_UV;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                V0_Color;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V1_Pos;                                                   // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V1_UV;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                V1_Color;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V2_Pos;                                                   // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V2_UV;                                                    // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                V2_Color;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DelegateArray
// 0x0010
struct FDelegateArray
{
	TArray<struct FScriptDelegate>                     Delegates;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.CollisionResponseTemplate
// 0x0048
struct FCollisionResponseTemplate
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0009(0x0001) MISSED OFFSET
	bool                                               bCanModify;                                               // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x21];                                      // 0x000B(0x0021) MISSED OFFSET
	struct FName                                       ObjectTypeName;                                           // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FResponseChannel>                    CustomResponses;                                          // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.CustomChannelSetup
// 0x000C
struct FCustomChannelSetup
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    DefaultResponse;                                          // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bTraceType;                                               // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bStaticObject;                                            // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CustomProfile
// 0x0018
struct FCustomProfile
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FResponseChannel>                    CustomResponses;                                          // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.Redirector
// 0x0010
struct FRedirector
{
	struct FName                                       OldName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewName;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// 0x0018
struct FBlueprintComponentDelegateBinding
{
	struct FName                                       ComponentPropertyName;                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DelegatePropertyName;                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                                       // 0x0000(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	struct FColor                                      Out;                                                      // 0x0004(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
};

// ScriptStruct Engine.StatColorMapping
// 0x0028
struct FStatColorMapping
{
	struct FString                                     StatName;                                                 // 0x0000(0x0010) (ZeroConstructor, Config, GlobalConfig)
	TArray<struct FStatColorMapEntry>                  ColorMap;                                                 // 0x0010(0x0010) (ZeroConstructor, Config, GlobalConfig)
	unsigned char                                      DisableBlend : 1;                                         // 0x0020(0x0001) (Config, GlobalConfig)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.GameNameRedirect
// 0x0010
struct FGameNameRedirect
{
	struct FName                                       OldGameName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewGameName;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ClassRedirect
// 0x003C
struct FClassRedirect
{
	struct FName                                       ObjectName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       OldClassName;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewClassName;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       OldSubobjName;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewSubobjName;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewClassClass;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewClassPackage;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               InstanceOnly;                                             // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PluginRedirect
// 0x0020
struct FPluginRedirect
{
	struct FString                                     OldPluginName;                                            // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     NewPluginName;                                            // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.StructRedirect
// 0x0010
struct FStructRedirect
{
	struct FName                                       OldStructName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewStructName;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DropNoteInfo
// 0x0028
struct FDropNoteInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Comment;                                                  // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.NetDriverDefinition
// 0x0018
struct FNetDriverDefinition
{
	struct FName                                       DefName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DriverClassName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DriverClassNameFallback;                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DebugDisplayProperty
// 0x0020
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      WithinClass;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CullDistance;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DebugCameraControllerSettingsViewModeIndex
// 0x0010
struct FDebugCameraControllerSettingsViewModeIndex
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TEnumAsByte<EViewModeIndex>                        ViewModeIndex;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.RollbackNetStartupActorInfo
// 0x00A0
struct FRollbackNetStartupActorInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     Archetype;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
	class ULevel*                                      Level;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0030(0x0060) MISSED OFFSET
	TArray<class UObject*>                             ObjReferences;                                            // 0x0090(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.MulticastRecordOptions
// 0x0018
struct FMulticastRecordOptions
{
	struct FString                                     FuncPathName;                                             // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bServerSkip;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bClientSkip;                                              // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.TextureLODGroup
// 0x0054
struct FTextureLODGroup
{
	TEnumAsByte<ETextureGroup>                         Group;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0001(0x000B) MISSED OFFSET
	int                                                LODBias;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LODBias_Smaller;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LODBias_Smallest;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
	int                                                NumStreamedMips;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureMipGenSettings>                MipGenSettings;                                           // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                MinLODSize;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLODSize;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLODSize_Smaller;                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLODSize_Smallest;                                      // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OptionalLODBias;                                          // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OptionalMaxLODSize;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FName                                       MinMagFilter;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MipFilter;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	ETextureMipLoadOptions                             MipLoadOptions;                                           // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               DuplicateNonOptionalMips;                                 // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.DialogueContext
// 0x0018
struct FDialogueContext
{
	class UDialogueVoice*                              Speaker;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UDialogueVoice*>                      Targets;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.DialogueContextMapping
// 0x0038
struct FDialogueContextMapping
{
	struct FDialogueContext                            Context;                                                  // 0x0000(0x0018) (Edit)
	class USoundWave*                                  SoundWave;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     LocalizationKeyFormat;                                    // 0x0020(0x0010) (Edit, ZeroConstructor)
	class UDialogueSoundWaveProxy*                     Proxy;                                                    // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingSaturation;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShadowExponent;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAreaShadowsForStationaryLight;                        // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// 0x0004 (0x0010 - 0x000C)
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
	float                                              LightSourceAngle;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EdGraphTerminalType
// 0x001C
struct FEdGraphTerminalType
{
	struct FName                                       TerminalCategory;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TerminalSubCategory;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      TerminalSubCategoryObject;                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bTerminalIsConst;                                         // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bTerminalIsWeakPointer;                                   // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphPinType
// 0x0058
struct FEdGraphPinType
{
	struct FName                                       PinCategory;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       PinSubCategory;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      PinSubCategoryObject;                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSimpleMemberReference                      PinSubCategoryMemberReference;                            // 0x0018(0x0020)
	struct FEdGraphTerminalType                        PinValueType;                                             // 0x0038(0x001C)
	EPinContainerType                                  ContainerType;                                            // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsArray : 1;                                             // 0x0055(0x0001) (Deprecated)
	unsigned char                                      bIsReference : 1;                                         // 0x0055(0x0001)
	unsigned char                                      bIsConst : 1;                                             // 0x0055(0x0001)
	unsigned char                                      bIsWeakPointer : 1;                                       // 0x0055(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.ExponentialHeightFogData
// 0x000C
struct FExponentialHeightFogData
{
	float                                              FogDensity;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FogHeightFalloff;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FogHeightOffset;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FontCharacter
// 0x0018
struct FFontCharacter
{
	int                                                StartU;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StartV;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                USize;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                VSize;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TextureIndex;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                VerticalOffset;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FontImportOptionsData
// 0x00B0
struct FFontImportOptionsData
{
	struct FString                                     FontName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Height;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableAntialiasing : 1;                                  // 0x0014(0x0001) (Edit)
	unsigned char                                      bEnableBold : 1;                                          // 0x0014(0x0001) (Edit)
	unsigned char                                      bEnableItalic : 1;                                        // 0x0014(0x0001) (Edit)
	unsigned char                                      bEnableUnderline : 1;                                     // 0x0014(0x0001) (Edit)
	unsigned char                                      bAlphaOnly : 1;                                           // 0x0014(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	TEnumAsByte<EFontImportCharacterSet>               CharacterSet;                                             // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     Chars;                                                    // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FString                                     UnicodeRange;                                             // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CharsFilePath;                                            // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CharsFileWildcard;                                        // 0x0050(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bCreatePrintableOnly : 1;                                 // 0x0060(0x0001) (Edit)
	unsigned char                                      bIncludeASCIIRange : 1;                                   // 0x0060(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	struct FLinearColor                                ForegroundColor;                                          // 0x0064(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableDropShadow : 1;                                    // 0x0074(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	int                                                TexturePageWidth;                                         // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TexturePageMaxHeight;                                     // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                XPadding;                                                 // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                YPadding;                                                 // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxTop;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxBottom;                                          // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxRight;                                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxLeft;                                            // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableLegacyMode : 1;                                    // 0x0098(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                Kerning;                                                  // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseDistanceFieldAlpha : 1;                               // 0x00A0(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	int                                                DistanceFieldScaleFactor;                                 // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFieldScanRadiusScale;                             // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// 0x0000 (0x00B0 - 0x00B0)
struct FForceFeedbackAttenuationSettings : public FBaseAttenuationSettings
{
	EAttenuationDistanceModel                          DistanceAlgorithm;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttenuationShape>                     AttenuationShape;                                         // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              dBAttenuationAtMax;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AttenuationShapeExtents;                                  // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConeOffset;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FalloffDistance;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          CustomAttenuationCurve;                                   // 0x0028(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// 0x0090
struct FForceFeedbackChannelDetails
{
	unsigned char                                      bAffectsLeftLarge : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectsLeftSmall : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectsRightLarge : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectsRightSmall : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0008(0x0088) (Edit)
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// 0x0110
struct FHapticFeedbackDetails_Curve
{
	struct FRuntimeFloatCurve                          Frequency;                                                // 0x0000(0x0088) (Edit)
	struct FRuntimeFloatCurve                          Amplitude;                                                // 0x0088(0x0088) (Edit)
};

// ScriptStruct Engine.HLODProxyMesh
// 0x0030
struct FHLODProxyMesh
{
	TLazyObjectPtr<class ALODActor>                    LODActor;                                                 // 0x0000(0x001C) (Edit, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UStaticMesh*                                 StaticMesh;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       Key;                                                      // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.ComponentKey
// 0x0020
struct FComponentKey
{
	class UClass*                                      OwnerClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SCSVariableName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AssociatedGuid;                                           // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ComponentOverrideRecord
// 0x0078
struct FComponentOverrideRecord
{
	class UClass*                                      ComponentClass;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTemplate;                                        // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FComponentKey                               ComponentKey;                                             // 0x0010(0x0020)
	struct FBlueprintCookedComponentInstancingData     CookedComponentInstancingData;                            // 0x0030(0x0048)
};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// 0x0004
struct FBlueprintInputDelegateBinding
{
	unsigned char                                      bConsumeInput : 1;                                        // 0x0000(0x0001)
	unsigned char                                      bExecuteWhenPaused : 1;                                   // 0x0000(0x0001)
	unsigned char                                      bOverrideParentBinding : 1;                               // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// 0x0014 (0x0018 - 0x0004)
struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
{
	struct FName                                       InputActionName;                                          // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// 0x0010 (0x0014 - 0x0004)
struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
{
	struct FName                                       InputAxisName;                                            // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// 0x0024 (0x0028 - 0x0004)
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FKey                                        AxisKey;                                                  // 0x0008(0x0018)
	struct FName                                       FunctionNameToBind;                                       // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CachedKeyToActionInfo
// 0x0070
struct FCachedKeyToActionInfo
{
	class UPlayerInput*                                PlayerInput;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0008(0x0068) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// 0x0034 (0x0038 - 0x0004)
struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FInputChord                                 InputChord;                                               // 0x0008(0x0020)
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InputAxisProperties
// 0x0010
struct FInputAxisProperties
{
	float                                              DeadZone;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Sensitivity;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Exponent;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInvert : 1;                                              // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.InputAxisConfigEntry
// 0x0018
struct FInputAxisConfigEntry
{
	struct FName                                       AxisKeyName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FInputAxisProperties                        AxisProperties;                                           // 0x0008(0x0010) (Edit)
};

// ScriptStruct Engine.InputActionKeyMapping
// 0x0028
struct FInputActionKeyMapping
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShift : 1;                                               // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCtrl : 1;                                                // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAlt : 1;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCmd : 1;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FKey                                        Key;                                                      // 0x0010(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.InputAxisKeyMapping
// 0x0028
struct FInputAxisKeyMapping
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FKey                                        Key;                                                      // 0x0010(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.InputActionSpeechMapping
// 0x0010
struct FInputActionSpeechMapping
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SpeechKeyword;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// 0x000C (0x0010 - 0x0004)
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
{
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveEdEntry
// 0x0038
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      CurveColor;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     CurveName;                                                // 0x0010(0x0010) (ZeroConstructor)
	int                                                bHideCurve;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bColorCurve;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bFloatingPointColorCurve;                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bClamp;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClampLow;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClampHigh;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveEdTab
// 0x0030
struct FCurveEdTab
{
	struct FString                                     TabName;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FCurveEdEntry>                       Curves;                                                   // 0x0010(0x0010) (ZeroConstructor)
	float                                              ViewStartInput;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ViewEndInput;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ViewStartOutput;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ViewEndOutput;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InterpControlPoint
// 0x001C
struct FInterpControlPoint
{
	struct FVector                                     PositionControlPoint;                                     // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPositionIsRelative;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x000D(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.AnimControlTrackKey
// 0x0020
struct FAnimControlTrackKey
{
	float                                              StartTime;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAnimSequence*                               AnimSeq;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AnimStartOffset;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnimEndOffset;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnimPlayRate;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x001C(0x0001)
	unsigned char                                      bReverse : 1;                                             // 0x001C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Value : 1;                                                // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.DirectorTrackCut
// 0x0014
struct FDirectorTrackCut
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TransitionTime;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetCamGroup;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShotNumber;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EventTrackKey
// 0x000C
struct FEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EventName;                                                // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PrimitiveMaterialRef
// 0x0018
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ElementIndex;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InterpLookupPoint
// 0x000C
struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InterpLookupTrack
// 0x0010
struct FInterpLookupTrack
{
	TArray<struct FInterpLookupPoint>                  Points;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ClipIDNumber;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundTrackKey
// 0x0018
struct FSoundTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound;                                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ToggleTrackKey
// 0x0008
struct FToggleTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrackToggleAction>                    ToggleAction;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.VisibilityTrackKey
// 0x0008
struct FVisibilityTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVisibilityTrackAction>                Action;                                                   // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVisibilityTrackCondition>             ActiveCondition;                                          // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.LayerActorStats
// 0x0010
struct FLayerActorStats
{
	class UClass*                                      Type;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Total;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
// 0x0038
struct FReplicatedStaticActorDestructionInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	class UClass*                                      ObjClass;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LightmassPointLightSettings
// 0x0000 (0x000C - 0x000C)
struct FLightmassPointLightSettings : public FLightmassLightSettings
{
	float                                              IndirectLightingSaturation;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShadowExponent;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAreaShadowsForStationaryLight;                        // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInput
// 0x000C
struct FMaterialInput
{
	int                                                OutputIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ExpressionName;                                           // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ScalarMaterialInput
// 0x0000 (0x000C - 0x000C)
struct FScalarMaterialInput : public FMaterialInput
{
	int                                                OutputIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ExpressionName;                                           // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VectorMaterialInput
// 0x0000 (0x000C - 0x000C)
struct FVectorMaterialInput : public FMaterialInput
{
	int                                                OutputIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ExpressionName;                                           // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ColorMaterialInput
// 0x0000 (0x000C - 0x000C)
struct FColorMaterialInput : public FMaterialInput
{
	int                                                OutputIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ExpressionName;                                           // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialShadingModelField
// 0x0002
struct FMaterialShadingModelField
{
	uint16_t                                           ShadingModelField;                                        // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialAttributesInput
// 0x0004 (0x0010 - 0x000C)
struct FMaterialAttributesInput : public FExpressionInput
{
	int                                                PropertyConnectedBitmask;                                 // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.ShadingModelMaterialInput
// 0x0000 (0x000C - 0x000C)
struct FShadingModelMaterialInput : public FMaterialInput
{
	int                                                OutputIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ExpressionName;                                           // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialFunctionInfo
// 0x0018
struct FMaterialFunctionInfo
{
	struct FGuid                                       StateId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UMaterialFunctionInterface*                  Function;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// 0x0018
struct FMaterialParameterCollectionInfo
{
	struct FGuid                                       StateId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UMaterialParameterCollection*                ParameterCollection;                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialSpriteElement
// 0x0028
struct FMaterialSpriteElement
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DistanceToOpacityCurve;                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSizeIsInScreenSpace : 1;                                 // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              BaseSizeX;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseSizeY;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DistanceToSizeCurve;                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CustomInput
// 0x001C
struct FCustomInput
{
	struct FName                                       InputName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FExpressionInput                            Input;                                                    // 0x0008(0x000C)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0014(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CollectionParameterBase
// 0x0018
struct FCollectionParameterBase
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ID;                                                       // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollectionScalarParameter
// 0x0004 (0x001C - 0x0018)
struct FCollectionScalarParameter : public FCollectionParameterBase
{
	float                                              DefaultValue;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollectionVectorParameter
// 0x0010 (0x0028 - 0x0018)
struct FCollectionVectorParameter : public FCollectionParameterBase
{
	struct FLinearColor                                DefaultValue;                                             // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InterpGroupActorInfo
// 0x0018
struct FInterpGroupActorInfo
{
	struct FName                                       ObjectName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Actors;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Timestamp;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PurchaseInfo
// 0x0040
struct FPurchaseInfo
{
	struct FString                                     Identifier;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     DisplayDescription;                                       // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     DisplayPrice;                                             // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.NavAgentSelector
// 0x0004
struct FNavAgentSelector
{
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.NavigationLinkBase
// 0x0030
struct FNavigationLinkBase
{
	float                                              LeftProjectHeight;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFallDownLength;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
	float                                              SnapRadius;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SnapHeight;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0014(0x0004) (Edit)
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x0018(0x0001)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x0019(0x0001)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x0019(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	TEnumAsByte<ENavLinkDirection>                     Direction;                                                // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseSnapHeight : 1;                                       // 0x001D(0x0001) (Edit)
	unsigned char                                      bSnapToCheapestArea : 1;                                  // 0x001D(0x0001) (Edit)
	unsigned char                                      bCustomFlag0 : 1;                                         // 0x001D(0x0001)
	unsigned char                                      bCustomFlag1 : 1;                                         // 0x001D(0x0001)
	unsigned char                                      bCustomFlag2 : 1;                                         // 0x001D(0x0001)
	unsigned char                                      bCustomFlag3 : 1;                                         // 0x001D(0x0001)
	unsigned char                                      bCustomFlag4 : 1;                                         // 0x001D(0x0001)
	unsigned char                                      bCustomFlag5 : 1;                                         // 0x001D(0x0001)
	unsigned char                                      bCustomFlag6 : 1;                                         // 0x001E(0x0001)
	unsigned char                                      bCustomFlag7 : 1;                                         // 0x001E(0x0001)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.NavigationLink
// 0x0018 (0x0048 - 0x0030)
struct FNavigationLink : public FNavigationLinkBase
{
	struct FVector                                     Left;                                                     // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Right;                                                    // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NavigationSegmentLink
// 0x0030 (0x0060 - 0x0030)
struct FNavigationSegmentLink : public FNavigationLinkBase
{
	struct FVector                                     LeftStart;                                                // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeftEnd;                                                  // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightStart;                                               // 0x0048(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightEnd;                                                 // 0x0054(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NetworkEmulationProfileDescription
// 0x0020
struct FNetworkEmulationProfileDescription
{
	struct FString                                     ProfileName;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     ToolTip;                                                  // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.NodeItem
// 0x0040
struct FNodeItem
{
	struct FName                                       ParentName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct Engine.DistributionLookupTable
// 0x0020
struct FDistributionLookupTable
{
	float                                              TimeScale;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeBias;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Values;                                                   // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      Op;                                                       // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EntryCount;                                               // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EntryStride;                                              // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubEntryStride;                                           // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      LockFlag;                                                 // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.RawDistribution
// 0x0020
struct FRawDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0020) (ZeroConstructor)
};

// ScriptStruct Engine.RawDistributionVector
// 0x0028 (0x0048 - 0x0020)
struct FRawDistributionVector : public FRawDistribution
{
	float                                              MinValue;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinValueVec;                                              // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxValueVec;                                              // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData)
	class UDistributionVector*                         Distribution;                                             // 0x0040(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)
};

// ScriptStruct Engine.RawDistributionFloat
// 0x0010 (0x0030 - 0x0020)
struct FRawDistributionFloat : public FRawDistribution
{
	float                                              MinValue;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	class UDistributionFloat*                          Distribution;                                             // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)
};

// ScriptStruct Engine.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	unsigned char                                      bModify : 1;                                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bScale : 1;                                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bLock : 1;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ParticleRandomSeedInfo
// 0x0020
struct FParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGetSeedFromInstance : 1;                                 // 0x0008(0x0001) (Edit)
	unsigned char                                      bInstanceSeedIsIndex : 1;                                 // 0x0008(0x0001) (Edit)
	unsigned char                                      bResetSeedOnEmitterLooping : 1;                           // 0x0008(0x0001) (Edit)
	unsigned char                                      bRandomlySelectSeedArray : 1;                             // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<int>                                        RandomSeeds;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// 0x0028
struct FParticleEvent_GenerateInfo
{
	TEnumAsByte<EParticleEventType>                    Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Frequency;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ParticleFrequency;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      FirstTimeOnly : 1;                                        // 0x000C(0x0001) (Edit)
	unsigned char                                      LastTimeOnly : 1;                                         // 0x000C(0x0001) (Edit)
	unsigned char                                      UseReflectedImpactVector : 1;                             // 0x000C(0x0001) (Edit)
	unsigned char                                      bUseOrbitOffset : 1;                                      // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FName                                       CustomName;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UParticleModuleEventSendToGame*>      ParticleModuleEventsToSendToGame;                         // 0x0018(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct Engine.LocationBoneSocketInfo
// 0x0014
struct FLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	unsigned char                                      bProcessDuringSpawn : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bProcessDuringUpdate : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseEmitterTime : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.EmitterDynamicParameter
// 0x0048
struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bUseEmitterTime : 1;                                      // 0x0008(0x0001) (Edit)
	unsigned char                                      bSpawnTimeOnly : 1;                                       // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TEnumAsByte<EEmitterDynamicParameterValue>         ValueMethod;                                              // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	unsigned char                                      bScaleVelocityByParamValue : 1;                           // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FRawDistributionFloat                       ParamValue;                                               // 0x0018(0x0030) (Edit)
};

// ScriptStruct Engine.ParticleBurst
// 0x000C
struct FParticleBurst
{
	int                                                count;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CountLow;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// 0x0070
struct FGPUSpriteLocalVectorFieldInfo
{
	class UVectorField*                                Field;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	struct FRotator                                    MinInitialRotation;                                       // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    MaxInitialRotation;                                       // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationRate;                                             // 0x0058(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Tightness;                                                // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIgnoreComponentTransform : 1;                            // 0x006C(0x0001)
	unsigned char                                      bTileX : 1;                                               // 0x006C(0x0001)
	unsigned char                                      bTileY : 1;                                               // 0x006C(0x0001)
	unsigned char                                      bTileZ : 1;                                               // 0x006C(0x0001)
	unsigned char                                      bUseFixDT : 1;                                            // 0x006C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.FloatDistribution
// 0x0020
struct FFloatDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0020) (ZeroConstructor)
};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// 0x0280
struct FGPUSpriteEmitterInfo
{
	class UParticleModuleRequired*                     RequiredModule;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleModuleSpawn*                        SpawnModule;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleModuleSpawnPerUnit*                 SpawnPerUnitModule;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UParticleModule*>                     SpawnModules;                                             // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FGPUSpriteLocalVectorFieldInfo              LocalVectorField;                                         // 0x0030(0x0070)
	struct FFloatDistribution                          VectorFieldScale;                                         // 0x00A0(0x0020) (ZeroConstructor)
	struct FFloatDistribution                          DragCoefficient;                                          // 0x00C0(0x0020) (ZeroConstructor)
	struct FFloatDistribution                          PointAttractorStrength;                                   // 0x00E0(0x0020) (ZeroConstructor)
	struct FFloatDistribution                          Resilience;                                               // 0x0100(0x0020) (ZeroConstructor)
	struct FVector                                     ConstantAcceleration;                                     // 0x0120(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PointAttractorPosition;                                   // 0x012C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              PointAttractorRadiusSq;                                   // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetBase;                                          // 0x013C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetRange;                                         // 0x0148(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InvMaxSize;                                               // 0x0154(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              InvRotationRateScale;                                     // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxLifetime;                                              // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxParticleCount;                                         // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleScreenAlignment>              ScreenAlignment;                                          // 0x0168(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleAxisLock>                     LockAxisFlag;                                             // 0x0169(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x016A(0x0002) MISSED OFFSET
	unsigned char                                      bEnableCollision : 1;                                     // 0x016C(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x016D(0x0003) MISSED OFFSET
	TEnumAsByte<EParticleCollisionMode>                CollisionMode;                                            // 0x0170(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0171(0x0003) MISSED OFFSET
	unsigned char                                      bRemoveHMDRoll : 1;                                       // 0x0174(0x0001)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0175(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                             // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxFacingCameraBlendDistance;                             // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRawDistributionVector                      DynamicColor;                                             // 0x0180(0x0048)
	struct FRawDistributionFloat                       DynamicAlpha;                                             // 0x01C8(0x0030)
	struct FRawDistributionVector                      DynamicColorScale;                                        // 0x01F8(0x0048)
	struct FRawDistributionFloat                       DynamicAlphaScale;                                        // 0x0240(0x0030)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0270(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.GPUSpriteResourceData
// 0x0160
struct FGPUSpriteResourceData
{
	TArray<struct FColor>                              QuantizedColorSamples;                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedMiscSamples;                                     // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedSimulationAttrSamples;                           // 0x0020(0x0010) (ZeroConstructor)
	struct FVector4                                    ColorScale;                                               // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorBias;                                                // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    MiscScale;                                                // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    MiscBias;                                                 // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SimulationAttrCurveScale;                                 // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SimulationAttrCurveBias;                                  // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SubImageSize;                                             // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SizeBySpeed;                                              // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstantAcceleration;                                     // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetBase;                                          // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetRange;                                         // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitFrequencyBase;                                       // 0x00D4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitFrequencyRange;                                      // 0x00E0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitPhaseBase;                                           // 0x00EC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitPhaseRange;                                          // 0x00F8(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              GlobalVectorFieldScale;                                   // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GlobalVectorFieldTightness;                               // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PerParticleVectorFieldScale;                              // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PerParticleVectorFieldBias;                               // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficientScale;                                     // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficientBias;                                      // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ResilienceScale;                                          // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ResilienceBias;                                           // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadiusScale;                                     // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadiusBias;                                      // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionTimeBias;                                        // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionRandomSpread;                                    // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionRandomDistribution;                              // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OneMinusFriction;                                         // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RotationRateScale;                                        // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CameraMotionBlurAmount;                                   // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleScreenAlignment>              ScreenAlignment;                                          // 0x0144(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleAxisLock>                     LockAxisFlag;                                             // 0x0145(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0146(0x0002) MISSED OFFSET
	struct FVector2D                                   PivotOffset;                                              // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRemoveHMDRoll : 1;                                       // 0x0150(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                             // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxFacingCameraBlendDistance;                             // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemLOD
// 0x0001
struct FParticleSystemLOD
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.LODSoloTrack
// 0x0010
struct FLODSoloTrack
{
	TArray<unsigned char>                              SoloEnableSetting;                                        // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Engine.NamedEmitterMaterial
// 0x0010
struct FNamedEmitterMaterial
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ParticleSysParam
// 0x0080
struct FParticleSysParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleSysParamType>                 ParamType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Scalar;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scalar_Low;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector_Low;                                               // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0040(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.PhysicalAnimationData
// 0x0024
struct FPhysicalAnimationData
{
	struct FName                                       BodyName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsLocalSimulation : 1;                                   // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              OrientationStrength;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularVelocityStrength;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PositionStrength;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocityStrength;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLinearForce;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularForce;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PhysicalAnimationProfile
// 0x002C
struct FPhysicalAnimationProfile
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FPhysicalAnimationData                      PhysicalAnimationData;                                    // 0x0008(0x0024) (Edit)
};

// ScriptStruct Engine.ConstrainComponentPropName
// 0x0008
struct FConstrainComponentPropName
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ConstraintBaseParams
// 0x0014
struct FConstraintBaseParams
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Restitution;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ContactDistance;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSoftConstraint : 1;                                      // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LinearConstraint
// 0x0008 (0x001C - 0x0014)
struct FLinearConstraint : public FConstraintBaseParams
{
	float                                              Limit;                                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               XMotion;                                                  // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               YMotion;                                                  // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               ZMotion;                                                  // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.ConeConstraint
// 0x000C (0x0020 - 0x0014)
struct FConeConstraint : public FConstraintBaseParams
{
	float                                              Swing1LimitDegrees;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Swing2LimitDegrees;                                       // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              Swing1Motion;                                             // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              Swing2Motion;                                             // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.TwistConstraint
// 0x0008 (0x001C - 0x0014)
struct FTwistConstraint : public FConstraintBaseParams
{
	float                                              TwistLimitDegrees;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              TwistMotion;                                              // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintDrive
// 0x0010
struct FConstraintDrive
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxForce;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnablePositionDrive : 1;                                 // 0x000C(0x0001) (Edit)
	unsigned char                                      bEnableVelocityDrive : 1;                                 // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LinearDriveConstraint
// 0x004C
struct FLinearDriveConstraint
{
	struct FVector                                     PositionTarget;                                           // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelocityTarget;                                           // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FConstraintDrive                            XDrive;                                                   // 0x0018(0x0010) (Edit)
	struct FConstraintDrive                            YDrive;                                                   // 0x0028(0x0010) (Edit)
	struct FConstraintDrive                            ZDrive;                                                   // 0x0038(0x0010) (Edit)
	unsigned char                                      bEnablePositionDrive : 1;                                 // 0x0048(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AngularDriveConstraint
// 0x004C
struct FAngularDriveConstraint
{
	struct FConstraintDrive                            TwistDrive;                                               // 0x0000(0x0010) (Edit)
	struct FConstraintDrive                            SwingDrive;                                               // 0x0010(0x0010) (Edit)
	struct FConstraintDrive                            SlerpDrive;                                               // 0x0020(0x0010) (Edit)
	struct FRotator                                    OrientationTarget;                                        // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocityTarget;                                    // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularDriveMode>                     AngularDriveMode;                                         // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintProfileProperties
// 0x0104
struct FConstraintProfileProperties
{
	float                                              ProjectionLinearTolerance;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProjectionAngularTolerance;                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LinearBreakThreshold;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularBreakThreshold;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearConstraint                           LinearLimit;                                              // 0x0010(0x001C) (Edit)
	struct FConeConstraint                             ConeLimit;                                                // 0x002C(0x0020) (Edit)
	struct FTwistConstraint                            TwistLimit;                                               // 0x004C(0x001C) (Edit)
	struct FLinearDriveConstraint                      LinearDrive;                                              // 0x0068(0x004C) (Edit)
	struct FAngularDriveConstraint                     AngularDrive;                                             // 0x00B4(0x004C) (Edit)
	unsigned char                                      bDisableCollision : 1;                                    // 0x0100(0x0001) (Edit)
	unsigned char                                      bParentDominates : 1;                                     // 0x0100(0x0001) (Edit)
	unsigned char                                      bEnableProjection : 1;                                    // 0x0100(0x0001) (Edit)
	unsigned char                                      bAngularBreakable : 1;                                    // 0x0100(0x0001) (Edit)
	unsigned char                                      bLinearBreakable : 1;                                     // 0x0100(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintInstance
// 0x01B8
struct FConstraintInstance
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	struct FName                                       JointName;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ConstraintBone1;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ConstraintBone2;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos1;                                                     // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PriAxis1;                                                 // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecAxis1;                                                 // 0x0048(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos2;                                                     // 0x0054(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PriAxis2;                                                 // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecAxis2;                                                 // 0x006C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AngularRotationOffset;                                    // 0x0078(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bScaleLinearLimits : 1;                                   // 0x0084(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0085(0x0007) MISSED OFFSET
	struct FConstraintProfileProperties                ProfileInstance;                                          // 0x008C(0x0104) (Edit)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0190(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.PhysicsConstraintProfileHandle
// 0x010C
struct FPhysicsConstraintProfileHandle
{
	struct FConstraintProfileProperties                ProfileProperties;                                        // 0x0000(0x0104)
	struct FName                                       ProfileName;                                              // 0x0104(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigidBodyErrorCorrection
// 0x0034
struct FRigidBodyErrorCorrection
{
	float                                              PingExtrapolation;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PingLimit;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorPerLinearDifference;                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorPerAngularDifference;                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRestoredStateError;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLinearHardSnapDistance;                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositionLerp;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleLerp;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LinearVelocityCoefficient;                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularVelocityCoefficient;                               // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorAccumulationSeconds;                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorAccumulationDistanceSq;                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ErrorAccumulationSimilarity;                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PhysicalSurfaceName
// 0x000C
struct FPhysicalSurfaceName
{
	TEnumAsByte<EPhysicalSurface>                      Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ChaosPhysicsSettings
// 0x0003
struct FChaosPhysicsSettings
{
	EChaosThreadingMode                                DefaultThreadingModel;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EChaosSolverTickMode                               DedicatedThreadTickMode;                                  // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EChaosBufferMode                                   DedicatedThreadBufferMode;                                // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EngineShowFlagsSetting
// 0x0018
struct FEngineShowFlagsSetting
{
	struct FString                                     ShowFlagName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Enabled;                                                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.KeyBind
// 0x0030
struct FKeyBind
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Config)
	struct FString                                     Command;                                                  // 0x0018(0x0010) (ZeroConstructor, Config)
	unsigned char                                      Control : 1;                                              // 0x0028(0x0001) (Config)
	unsigned char                                      Shift : 1;                                                // 0x0028(0x0001) (Config)
	unsigned char                                      Alt : 1;                                                  // 0x0028(0x0001) (Config)
	unsigned char                                      Cmd : 1;                                                  // 0x0028(0x0001) (Config)
	unsigned char                                      bIgnoreCtrl : 1;                                          // 0x0028(0x0001) (Config)
	unsigned char                                      bIgnoreShift : 1;                                         // 0x0028(0x0001) (Config)
	unsigned char                                      bIgnoreAlt : 1;                                           // 0x0028(0x0001) (Config)
	unsigned char                                      bIgnoreCmd : 1;                                           // 0x0028(0x0001) (Config)
	unsigned char                                      bDisabled : 1;                                            // 0x0029(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.PoseData
// 0x0070
struct FPoseData
{
	TArray<struct FTransform>                          LocalSpacePose;                                           // 0x0000(0x0010) (ZeroConstructor)
	TMap<int, int>                                     TrackToBufferIndex;                                       // 0x0010(0x0050) (ZeroConstructor)
	TArray<float>                                      CurveData;                                                // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PoseDataContainer
// 0x0090
struct FPoseDataContainer
{
	TArray<struct FSmartName>                          PoseNames;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FName>                               Tracks;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TMap<struct FName, int>                            TrackMap;                                                 // 0x0020(0x0050) (ZeroConstructor, Transient)
	TArray<struct FPoseData>                           Poses;                                                    // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FAnimCurveBase>                      Curves;                                                   // 0x0080(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// 0x0028
struct FPreviewMeshCollectionEntry
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.PreviewMeshCollectionEntry.SkeletalMesh
};

// ScriptStruct Engine.CollectionReference
// 0x0008
struct FCollectionReference
{
	struct FName                                       CollectionName;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigTransformConstraint
// 0x0010
struct FRigTransformConstraint
{
	TEnumAsByte<EConstraintTransform>                  TranformType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       ParentSpace;                                              // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TransformBaseConstraint
// 0x0010
struct FTransformBaseConstraint
{
	TArray<struct FRigTransformConstraint>             TransformConstraints;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.TransformBase
// 0x0028
struct FTransformBase
{
	struct FName                                       Node;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransformBaseConstraint                    Constraints[0x2];                                         // 0x0008(0x0010) (Edit)
};

// ScriptStruct Engine.Node
// 0x0060
struct FNode
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ParentName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	struct FString                                     DisplayName;                                              // 0x0040(0x0010) (Edit, ZeroConstructor)
	bool                                               bAdvanced;                                                // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0051(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.VirtualTextureBuildSettings
// 0x000C
struct FVirtualTextureBuildSettings
{
	int                                                TileSize;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TileBorderSize;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCompressCrunch;                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCompressZlib;                                      // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.BPVariableMetaDataEntry
// 0x0018
struct FBPVariableMetaDataEntry
{
	struct FName                                       DataKey;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     DataValue;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.BoneFilter
// 0x000C
struct FBoneFilter
{
	bool                                               bExcludeSelf;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshLODGroupSettings
// 0x0080
struct FSkeletalMeshLODGroupSettings
{
	struct FPerPlatformFloat                           ScreenSize;                                               // 0x0000(0x0004) (Edit)
	float                                              LODHysteresis;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EBoneFilterActionOption                            BoneFilterActionOption;                                   // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FBoneFilter>                         BoneList;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               BonesToPrioritize;                                        // 0x0020(0x0010) (Edit, ZeroConstructor)
	float                                              WeightOfPrioritization;                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UAnimSequence*                               BakePose;                                                 // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSkeletalMeshOptimizationSettings           ReductionSettings;                                        // 0x0040(0x003C) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.TentDistribution
// 0x000C
struct FTentDistribution
{
	float                                              TipAltitude;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TipValue;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundClassProperties
// 0x0030
struct FSoundClassProperties
{
	float                                              Volume;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LowPassFilterFrequency;                                   // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StereoBleed;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LFEBleed;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VoiceCenterChannelVolume;                                 // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RadioFilterVolume;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RadioFilterVolumeThreshold;                               // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyEffects : 1;                                        // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAlwaysPlay : 1;                                          // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsUISound : 1;                                           // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bIsMusic : 1;                                             // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bReverb : 1;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              Default2DReverbSendAmount;                                // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCenterChannelOnly : 1;                                   // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bApplyAmbientVolumes : 1;                                 // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	TEnumAsByte<EAudioOutputTarget>                    OutputTarget;                                             // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESoundWaveLoadingBehavior                          LoadingBehavior;                                          // 0x002D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.PassiveSoundMixModifier
// 0x0010
struct FPassiveSoundMixModifier
{
	class USoundMix*                                   SoundMix;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinVolumeThreshold;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxVolumeThreshold;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SourceEffectChainEntry
// 0x0010
struct FSourceEffectChainEntry
{
	class USoundEffectSourcePreset*                    preset;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bBypass : 1;                                              // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SoundGroup
// 0x0020
struct FSoundGroup
{
	TEnumAsByte<ESoundGroup>                           SoundGroup;                                               // 0x0000(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     DisplayName;                                              // 0x0008(0x0010) (ZeroConstructor, Config)
	unsigned char                                      bAlwaysDecompressOnLoad : 1;                              // 0x0018(0x0001) (Config)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              DecompressedDuration;                                     // 0x001C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct Engine.AudioEQEffect
// 0x0038
struct FAudioEQEffect
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              FrequencyCenter0;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gain0;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth0;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrequencyCenter1;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gain1;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth1;                                               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrequencyCenter2;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gain2;                                                    // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth2;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrequencyCenter3;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gain3;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth3;                                               // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundClassAdjuster
// 0x0020
struct FSoundClassAdjuster
{
	class USoundClass*                                 SoundClassObject;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeAdjuster;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchAdjuster;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LowPassFilterFrequency;                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyToChildren : 1;                                     // 0x0014(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              VoiceCenterChannelVolumeAdjuster;                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.DialogueWaveParameter
// 0x0020
struct FDialogueWaveParameter
{
	class UDialogueWave*                               DialogueWave;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FDialogueContext                            Context;                                                  // 0x0008(0x0018) (Edit)
};

// ScriptStruct Engine.DistanceDatum
// 0x0014
struct FDistanceDatum
{
	float                                              FadeInDistanceStart;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeInDistanceEnd;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDistanceStart;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDistanceEnd;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ModulatorContinuousParams
// 0x0020
struct FModulatorContinuousParams
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinInput;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInput;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinOutput;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOutput;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EModulationParamMode>                  ParamMode;                                                // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartTangent;                                             // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   StartScale;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartRoll;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   StartOffset;                                              // 0x0024(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // 0x002C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   EndScale;                                                 // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndTangent;                                               // 0x0040(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndRoll;                                                  // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   EndOffset;                                                // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticMaterial
// 0x0030
struct FStaticMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialSlotName;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ImportedMaterialSlotName;                                 // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FMeshUVChannelInfo                          UVChannelData;                                            // 0x0018(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.EquirectProps
// 0x0048
struct FEquirectProps
{
	struct FBox2D                                      LeftUVRect;                                               // 0x0000(0x0014) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	struct FBox2D                                      RightUVRect;                                              // 0x0014(0x0014) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	struct FVector2D                                   LeftScale;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RightScale;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LeftBias;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RightBias;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// 0x008C
struct FSubsurfaceProfileStruct
{
	struct FLinearColor                                SurfaceAlbedo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MeanFreePathColor;                                        // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MeanFreePathDistance;                                     // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WorldUnitScale;                                           // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableBurley;                                            // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              ScatterRadius;                                            // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SubsurfaceColor;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FalloffColor;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BoundaryColorBleed;                                       // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ExtinctionScale;                                          // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NormalScale;                                              // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ScatteringDistribution;                                   // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IOR;                                                      // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Roughness0;                                               // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Roughness1;                                               // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LobeMix;                                                  // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TransmissionTintColor;                                    // 0x007C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TimelineEventEntry
// 0x0014
struct FTimelineEventEntry
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             EventFunc;                                                // 0x0004(0x0014) (ZeroConstructor, InstancedReference)
};

// ScriptStruct Engine.TimelineVectorTrack
// 0x0040
struct FTimelineVectorTrack
{
	class UCurveVector*                                VectorCurve;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x0008(0x0014) (ZeroConstructor, InstancedReference)
	struct FName                                       TrackName;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       VectorPropertyName;                                       // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStructProperty*                             VectorProperty;                                           // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.TimelineFloatTrack
// 0x0040
struct FTimelineFloatTrack
{
	class UCurveFloat*                                 FloatCurve;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x0008(0x0014) (ZeroConstructor, InstancedReference)
	struct FName                                       TrackName;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FloatPropertyName;                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFloatProperty*                              FloatProperty;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.TimelineLinearColorTrack
// 0x0040
struct FTimelineLinearColorTrack
{
	class UCurveLinearColor*                           LinearColorCurve;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x0008(0x0014) (ZeroConstructor, InstancedReference)
	struct FName                                       TrackName;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       LinearColorPropertyName;                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStructProperty*                             LinearColorProperty;                                      // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.Timeline
// 0x0098
struct FTimeline
{
	TEnumAsByte<ETimelineLengthMode>                   LengthMode;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bLooping : 1;                                             // 0x0001(0x0001)
	unsigned char                                      bReversePlayback : 1;                                     // 0x0001(0x0001)
	unsigned char                                      bPlaying : 1;                                             // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              Length;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTimelineEventEntry>                 Events;                                                   // 0x0010(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineVectorTrack>                InterpVectors;                                            // 0x0020(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineFloatTrack>                 InterpFloats;                                             // 0x0030(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineLinearColorTrack>           InterpLinearColors;                                       // 0x0040(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             TimelinePostUpdateFunc;                                   // 0x0050(0x0014) (ZeroConstructor, InstancedReference, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             TimelineFinishedFunc;                                     // 0x0060(0x0014) (ZeroConstructor, InstancedReference, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UObject>                      PropertySetObject;                                        // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       DirectionPropertyName;                                    // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	class UProperty*                                   DirectionProperty;                                        // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.TTTrackBase
// 0x0018
struct FTTTrackBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       TrackName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsExternalCurve;                                         // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.TTEventTrack
// 0x0010 (0x0028 - 0x0018)
struct FTTEventTrack : public FTTTrackBase
{
	struct FName                                       FunctionName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CurveKeys;                                                // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTPropertyTrack
// 0x0008 (0x0020 - 0x0018)
struct FTTPropertyTrack : public FTTTrackBase
{
	struct FName                                       PropertyName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTFloatTrack
// 0x0008 (0x0028 - 0x0020)
struct FTTFloatTrack : public FTTPropertyTrack
{
	class UCurveFloat*                                 CurveFloat;                                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTVectorTrack
// 0x0008 (0x0028 - 0x0020)
struct FTTVectorTrack : public FTTPropertyTrack
{
	class UCurveVector*                                CurveVector;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTLinearColorTrack
// 0x0008 (0x0028 - 0x0020)
struct FTTLinearColorTrack : public FTTPropertyTrack
{
	class UCurveLinearColor*                           CurveLinearColor;                                         // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TouchInputControl
// 0x0068
struct FTouchInputControl
{
	class UTexture2D*                                  Image1;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Image2;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Center;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   VisualSize;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ThumbSize;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InteractionSize;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InputScale;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKey                                        MainInputKey;                                             // 0x0038(0x0018) (Edit)
	struct FKey                                        AltInputKey;                                              // 0x0050(0x0018) (Edit)
};

// ScriptStruct Engine.HardwareCursorReference
// 0x0010
struct FHardwareCursorReference
{
	struct FName                                       CursorPath;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HotSpot;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VirtualTextureSpacePoolConfig
// 0x0020
struct FVirtualTextureSpacePoolConfig
{
	int                                                MinTileSize;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxTileSize;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EPixelFormat>>                  Formats;                                                  // 0x0008(0x0010) (ZeroConstructor)
	int                                                SizeInMegabyte;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSizeScale;                                          // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.VoiceSettings
// 0x0018
struct FVoiceSettings
{
	class USceneComponent*                             ComponentToAttachTo;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialProxySettings
// 0x0074
struct FMaterialProxySettings
{
	struct FIntPoint                                   TextureSize;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GutterSpace;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MetallicConstant;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RoughnessConstant;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpecularConstant;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OpacityConstant;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OpacityMaskConstant;                                      // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionConstant;                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureSizingType>                    TextureSizingType;                                        // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialMergeType>                    MaterialMergeType;                                        // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowTwoSidedMaterial : 1;                               // 0x0027(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bNormalMap : 1;                                           // 0x0027(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bMetallicMap : 1;                                         // 0x0027(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bRoughnessMap : 1;                                        // 0x0027(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSpecularMap : 1;                                         // 0x0027(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEmissiveMap : 1;                                         // 0x0027(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOpacityMap : 1;                                          // 0x0027(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOpacityMaskMap : 1;                                      // 0x0027(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAmbientOcclusionMap : 1;                                 // 0x0028(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FIntPoint                                   DiffuseTextureSize;                                       // 0x002C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   NormalTextureSize;                                        // 0x0034(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   MetallicTextureSize;                                      // 0x003C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   RoughnessTextureSize;                                     // 0x0044(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   SpecularTextureSize;                                      // 0x004C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   EmissiveTextureSize;                                      // 0x0054(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   OpacityTextureSize;                                       // 0x005C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   OpacityMaskTextureSize;                                   // 0x0064(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   AmbientOcclusionTextureSize;                              // 0x006C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshProxySettings
// 0x0094
struct FMeshProxySettings
{
	int                                                ScreenSize;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VoxelSize;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMaterialProxySettings                      MaterialSettings;                                         // 0x0008(0x0074) (Edit, BlueprintVisible)
	float                                              MergeDistance;                                            // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      UnresolvedGeometryColor;                                  // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRayCastDist;                                           // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HardAngleThreshold;                                       // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LightMapResolution;                                       // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProxyNormalComputationMethod>         NormalCalculationMethod;                                  // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeCullingPrecision>            LandscapeCullingPrecision;                                // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCalculateCorrectLODModel : 1;                            // 0x0092(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideVoxelSize : 1;                                   // 0x0092(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideTransferDistance : 1;                            // 0x0092(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseHardAngleThreshold : 1;                               // 0x0092(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bComputeLightMapResolution : 1;                           // 0x0092(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bRecalculateNormals : 1;                                  // 0x0092(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseLandscapeCulling : 1;                                 // 0x0092(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAllowAdjacency : 1;                                      // 0x0092(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAllowDistanceField : 1;                                  // 0x0093(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bReuseMeshLightmapUVs : 1;                                // 0x0093(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCreateCollision : 1;                                     // 0x0093(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAllowVertexColors : 1;                                   // 0x0093(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGenerateLightmapUVs : 1;                                 // 0x0093(0x0001) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.MeshMergingSettings
// 0x008C
struct FMeshMergingSettings
{
	int                                                TargetLightMapResolution;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EUVOutput                                          OutputUVs[0x8];                                           // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMaterialProxySettings                      MaterialSettings;                                         // 0x000C(0x0074) (Edit, BlueprintVisible)
	int                                                GutterSize;                                               // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SpecificLOD;                                              // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMeshLODSelectionType                              LODSelectionType;                                         // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGenerateLightMapUV : 1;                                  // 0x0089(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bComputedLightMapResolution : 1;                          // 0x0089(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPivotPointAtZero : 1;                                    // 0x0089(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bMergePhysicsData : 1;                                    // 0x0089(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bMergeMaterials : 1;                                      // 0x0089(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCreateMergedMaterial : 1;                                // 0x0089(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bBakeVertexDataToMesh : 1;                                // 0x0089(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseVertexDataForBakingMaterial : 1;                      // 0x0089(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseTextureBinning : 1;                                   // 0x008A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bReuseMeshLightmapUVs : 1;                                // 0x008A(0x0001) (Edit)
	unsigned char                                      bMergeEquivalentMaterials : 1;                            // 0x008A(0x0001) (Edit)
	unsigned char                                      bUseLandscapeCulling : 1;                                 // 0x008A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bIncludeImposters : 1;                                    // 0x008A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAllowDistanceField : 1;                                  // 0x008A(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x008B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.HierarchicalSimplification
// 0x0138
struct FHierarchicalSimplification
{
	float                                              TransitionScreenSize;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverrideDrawDistance;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseOverrideDrawDistance : 1;                             // 0x0008(0x0001) (Edit)
	unsigned char                                      bAllowSpecificExclusion : 1;                              // 0x0008(0x0001) (Edit)
	unsigned char                                      bSimplifyMesh : 1;                                        // 0x0008(0x0001) (Edit)
	unsigned char                                      bOnlyGenerateClustersForVolumes : 1;                      // 0x0008(0x0001) (Edit)
	unsigned char                                      bReusePreviousLevelClusters : 1;                          // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FMeshProxySettings                          ProxySetting;                                             // 0x000C(0x0094) (Edit)
	struct FMeshMergingSettings                        MergeSetting;                                             // 0x00A0(0x008C) (Edit)
	float                                              DesiredBoundRadius;                                       // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DesiredFillingPercentage;                                 // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinNumberOfActorsToBuild;                                 // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VectorDistribution
// 0x0020
struct FVectorDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0020) (ZeroConstructor)
};

// ScriptStruct Engine.Vector4Distribution
// 0x0020
struct FVector4Distribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0020) (ZeroConstructor)
};

// ScriptStruct Engine.FloatRK4SpringInterpolator
// 0x0008
struct FFloatRK4SpringInterpolator
{
	float                                              StiffnessConstant;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampeningRatio;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VectorRK4SpringInterpolator
// 0x0008
struct FVectorRK4SpringInterpolator
{
	float                                              StiffnessConstant;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampeningRatio;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FormatArgumentData
// 0x0040
struct FFormatArgumentData
{
	struct FString                                     ArgumentName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TEnumAsByte<EFormatArgumentType>                   ArgumentValueType;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FText                                       ArgumentValue;                                            // 0x0018(0x0028) (Edit, BlueprintVisible, DisableEditOnTemplate)
	int                                                ArgumentValueInt;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              ArgumentValueFloat;                                       // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	ETextGender                                        ArgumentValueGender;                                      // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.ExpressionOutput
// 0x0008
struct FExpressionOutput
{
	struct FName                                       OutputName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.Vector2MaterialInput
// 0x0000 (0x000C - 0x000C)
struct FVector2MaterialInput : public FMaterialInput
{
	int                                                OutputIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ExpressionName;                                           // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BranchingPointNotifyPayload
// 0x0020
struct FBranchingPointNotifyPayload
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.PlatformInterfaceData
// 0x0030
struct FPlatformInterfaceData
{
	struct FName                                       DataName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlatformInterfaceDataType>            Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                IntValue;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     StringValue;                                              // 0x0018(0x0010) (ZeroConstructor)
	class UObject*                                     ObjectValue;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// 0x0038
struct FPlatformInterfaceDelegateResult
{
	bool                                               bSuccessful;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FPlatformInterfaceData                      Data;                                                     // 0x0008(0x0030)
};

// ScriptStruct Engine.DebugFloatHistory
// 0x0020
struct FDebugFloatHistory
{
	TArray<float>                                      Samples;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient)
	float                                              MaxSamples;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoAdjustMinMax;                                        // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.TimerHandle
// 0x0008
struct FTimerHandle
{
	uint64_t                                           Handle;                                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.CollisionProfileName
// 0x0008
struct FCollisionProfileName
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GenericStruct
// 0x0004
struct FGenericStruct
{
	int                                                Data;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.UserActivity
// 0x0018
struct FUserActivity
{
	struct FString                                     ActionName;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DamageEvent
// 0x0010
struct FDamageEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UClass*                                      DamageTypeClass;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PointDamageEvent
// 0x0098 (0x00A8 - 0x0010)
struct FPointDamageEvent : public FDamageEvent
{
	float                                              Damage;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShotDirection;                                            // 0x0014(0x000C)
	struct FHitResult                                  HitInfo;                                                  // 0x0020(0x0088) (IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_Base
// 0x0010
struct FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.InputRange
// 0x0008
struct FInputRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InputScaleBiasClamp
// 0x0030
struct FInputScaleBiasClamp
{
	bool                                               bMapRange;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClampResult;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInterpResult;                                            // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FInputRange                                 InRange;                                                  // 0x0004(0x0008) (Edit, BlueprintVisible)
	struct FInputRange                                 OutRange;                                                 // 0x000C(0x0008) (Edit, BlueprintVisible)
	float                                              Scale;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bias;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClampMin;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClampMax;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeedIncreasing;                                    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeedDecreasing;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InputAlphaBoolBlend
// 0x0048
struct FInputAlphaBoolBlend
{
	float                                              BlendInTime;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAlphaBlendOption                                  BlendOption;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInitialized;                                             // 0x0009(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAlphaBlend                                 AlphaBlend;                                               // 0x0018(0x0030) (Transient)
};

// ScriptStruct Engine.InputScaleBias
// 0x0008
struct FInputScaleBias
{
	float                                              Scale;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bias;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PoseLinkBase
// 0x0010
struct FPoseLinkBase
{
	int                                                LinkID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.ComponentSpacePoseLink
// 0x0000 (0x0010 - 0x0010)
struct FComponentSpacePoseLink : public FPoseLinkBase
{
	int                                                LinkID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.AnimInstanceProxy
// 0x06E0
struct FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x6E0];                                     // 0x0000(0x06E0) MISSED OFFSET
};

// ScriptStruct Engine.RadialDamageParams
// 0x0014
struct FRadialDamageParams
{
	float                                              BaseDamage;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumDamage;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageFalloff;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RadialDamageEvent
// 0x0030 (0x0040 - 0x0010)
struct FRadialDamageEvent : public FDamageEvent
{
	struct FRadialDamageParams                         Params;                                                   // 0x0010(0x0014)
	struct FVector                                     Origin;                                                   // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          ComponentHits;                                            // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.KeyHandleLookupTable
// 0x0060
struct FKeyHandleLookupTable
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// 0x0020 (0x0030 - 0x0010)
struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
{
	int                                                GroupIndex;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreForRelevancyTest;                                  // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	float                                              BlendWeight;                                              // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              InternalTimeAccumulator;                                  // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PoseLink
// 0x0000 (0x0010 - 0x0010)
struct FPoseLink : public FPoseLinkBase
{
	int                                                LinkID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneBlendWeight
// 0x0008
struct FPerBoneBlendWeight
{
	int                                                SourceIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendWeight;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_Root
// 0x0020 (0x0030 - 0x0010)
struct FAnimNode_Root : public FAnimNode_Base
{
	struct FPoseLink                                   Result;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FName                                       Name;                                                     // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Group;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimCurveParam
// 0x000C
struct FAnimCurveParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.TableRowBase
// 0x0008
struct FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ActorComponentDuplicatedObjectData
// 0x0010
struct FActorComponentDuplicatedObjectData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ActorComponentInstanceData
// 0x0058
struct FActorComponentInstanceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     SourceComponentTemplate;                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	EComponentCreationMethod                           SourceComponentCreationMethod;                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                SourceComponentTypeSerializedIndex;                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              SavedProperties;                                          // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FActorComponentDuplicatedObjectData> DuplicatedObjects;                                        // 0x0028(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             ReferencedObjects;                                        // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FName>                               ReferencedNames;                                          // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.SceneComponentInstanceData
// 0x0050 (0x00A8 - 0x0058)
struct FSceneComponentInstanceData : public FActorComponentInstanceData
{
	TMap<class USceneComponent*, struct FTransform>    AttachedInstanceComponents;                               // 0x0058(0x0050) (ZeroConstructor)
};

// ScriptStruct Engine.AnimationGroupReference
// 0x000C
struct FAnimationGroupReference
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AnimGroupInstance
// 0x0070
struct FAnimGroupInstance
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct Engine.AnimTickRecord
// 0x0048
struct FAnimTickRecord
{
	class UAnimationAsset*                             SourceAsset;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.BlendFilter
// 0x0078
struct FBlendFilter
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct Engine.BlendSampleData
// 0x0040
struct FBlendSampleData
{
	int                                                SampleDataIndex;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAnimSequence*                               Animation;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              TotalWeight;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PreviousTime;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SamplePlayRate;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.AnimationRecordingSettings
// 0x0010
struct FAnimationRecordingSettings
{
	bool                                               bRecordInWorldSpace;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveRootAnimation;                                     // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoSaveAsset;                                           // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              SampleRate;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                              // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.ComponentSpacePose
// 0x0020
struct FComponentSpacePose
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               names;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.LocalSpacePose
// 0x0020
struct FLocalSpacePose
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               names;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.NamedTransform
// 0x0040
struct FNamedTransform
{
	struct FTransform                                  Value;                                                    // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.NamedColor
// 0x000C
struct FNamedColor
{
	struct FColor                                      Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NamedVector
// 0x0014
struct FNamedVector
{
	struct FVector                                     Value;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NamedFloat
// 0x000C
struct FNamedFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// 0x0018
struct FAnimParentNodeAssetOverride
{
	class UAnimationAsset*                             NewAsset;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ParentNodeGuid;                                           // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimBlueprintDebugData
// 0x0001
struct FAnimBlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.AnimationFrameSnapshot
// 0x0001
struct FAnimationFrameSnapshot
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.StateMachineDebugData
// 0x00B0
struct FStateMachineDebugData
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionExtractionStep
// 0x0010
struct FRootMotionExtractionStep
{
	class UAnimSequence*                               AnimSequence;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StartPosition;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndPosition;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CompressedSegment
// 0x0010
struct FCompressedSegment
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.VectorCurve
// 0x0180 (0x0198 - 0x0018)
struct FVectorCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurves[0x3];                                         // 0x0018(0x0080)
};

// ScriptStruct Engine.TransformCurve
// 0x04C8 (0x04E0 - 0x0018)
struct FTransformCurve : public FAnimCurveBase
{
	struct FVectorCurve                                TranslationCurve;                                         // 0x0018(0x0198)
	struct FVectorCurve                                RotationCurve;                                            // 0x01B0(0x0198)
	struct FVectorCurve                                ScaleCurve;                                               // 0x0348(0x0198)
};

// ScriptStruct Engine.SlotEvaluationPose
// 0x0040
struct FSlotEvaluationPose
{
	TEnumAsByte<EAdditiveAnimationType>                AdditiveType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.A2Pose
// 0x0010
struct FA2Pose
{
	TArray<struct FTransform>                          Bones;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.A2CSPose
// 0x0018 (0x0028 - 0x0010)
struct FA2CSPose : public FA2Pose
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	TArray<unsigned char>                              ComponentSpaceFlags;                                      // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.QueuedDrawDebugItem
// 0x0068
struct FQueuedDrawDebugItem
{
	TEnumAsByte<EDrawDebugItemType>                    ItemType;                                                 // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     StartLoc;                                                 // 0x0004(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // 0x0010(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Center;                                                   // 0x001C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0028(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Radius;                                                   // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Size;                                                     // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                Segments;                                                 // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPersistentLines;                                         // 0x0044(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              LifeTime;                                                 // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Thickness;                                                // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     Message;                                                  // 0x0050(0x0010) (ZeroConstructor, Transient)
	struct FVector2D                                   TextScale;                                                // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.AnimMontageInstance
// 0x01B0
struct FAnimMontageInstance
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
	bool                                               bPlaying;                                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              DefaultBlendTimeMultiplier;                               // 0x002C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB8];                                      // 0x0030(0x00B8) MISSED OFFSET
	TArray<int>                                        NextSections;                                             // 0x00E8(0x0010) (ZeroConstructor)
	TArray<int>                                        PrevSections;                                             // 0x00F8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0108(0x0010) MISSED OFFSET
	TArray<struct FAnimNotifyEvent>                    ActiveStateBranchingPoints;                               // 0x0118(0x0010) (ZeroConstructor, Transient)
	float                                              Position;                                                 // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAlphaBlend                                 Blend;                                                    // 0x0130(0x0030) (Transient)
	unsigned char                                      UnknownData04[0x28];                                      // 0x0160(0x0028) MISSED OFFSET
	int                                                DisableRootMotionCount;                                   // 0x0188(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x24];                                      // 0x018C(0x0024) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// 0x0038 (0x0048 - 0x0010)
struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FPoseLink                                   Additive;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible)
	float                                              Alpha;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0034(0x0008) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_CustomProperty
// 0x0048 (0x0058 - 0x0010)
struct FAnimNode_CustomProperty : public FAnimNode_Base
{
	TArray<struct FName>                               SourcePropertyNames;                                      // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FName>                               DestPropertyNames;                                        // 0x0020(0x0010) (ZeroConstructor)
	class UObject*                                     TargetInstance;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UProperty*>                           SourceProperties;                                         // 0x0038(0x0010) (ZeroConstructor, Transient)
	TArray<class UProperty*>                           DestProperties;                                           // 0x0048(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Engine.AnimNode_Inertialization
// 0x0060 (0x0070 - 0x0010)
struct FAnimNode_Inertialization : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0020(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.InertializationPoseDiff
// 0x0028
struct FInertializationPoseDiff
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.InertializationCurveDiff
// 0x0008
struct FInertializationCurveDiff
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.InertializationBoneDiff
// 0x003C
struct FInertializationBoneDiff
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct Engine.InertializationPose
// 0x0090
struct FInertializationPose
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_LinkedAnimGraph
// 0x0040 (0x0098 - 0x0058)
struct FAnimNode_LinkedAnimGraph : public FAnimNode_CustomProperty
{
	TArray<struct FPoseLink>                           InputPoses;                                               // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FName>                               InputPoseNames;                                           // 0x0068(0x0010) (ZeroConstructor)
	class UClass*                                      InstanceClass;                                            // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_LinkedAnimLayer
// 0x0010 (0x00A8 - 0x0098)
struct FAnimNode_LinkedAnimLayer : public FAnimNode_LinkedAnimGraph
{
	class UClass*                                      Interface;                                                // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Layer;                                                    // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_LinkedInputPose
// 0x0060 (0x0070 - 0x0010)
struct FAnimNode_LinkedInputPose : public FAnimNode_Base
{
	struct FName                                       Name;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Graph;                                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FPoseLink                                   InputPose;                                                // 0x0020(0x0010)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// 0x00A8 (0x00B8 - 0x0010)
struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{
	struct FPoseLink                                   Pose;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FName                                       CachePoseName;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRateBasis;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        PlayRateScaleBiasClamp;                                   // 0x0040(0x0030) (Edit, BlueprintVisible)
	float                                              StartPosition;                                            // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoopAnimation;                                           // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_StateMachine
// 0x00A0 (0x00B0 - 0x0010)
struct FAnimNode_StateMachine : public FAnimNode_Base
{
	int                                                StateMachineIndexInClass;                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxTransitionsPerFrame;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipFirstUpdateTransition;                               // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReinitializeOnBecomingRelevant;                          // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x96];                                      // 0x001A(0x0096) MISSED OFFSET
};

// ScriptStruct Engine.AnimationPotentialTransition
// 0x0030
struct FAnimationPotentialTransition
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// 0x00C8
struct FAnimationActiveTransitionEntry
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
	class UBlendProfile*                               BlendProfile;                                             // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// 0x0048 (0x0058 - 0x0010)
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0010(0x0038) MISSED OFFSET
	int                                                FramesToCachePose;                                        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TEnumAsByte<EEvaluatorDataSource>                  DataSource;                                               // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEvaluatorMode>                        EvaluatorMode;                                            // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_TransitionResult
// 0x0018 (0x0028 - 0x0010)
struct FAnimNode_TransitionResult : public FAnimNode_Base
{
	bool                                               bCanEnterTransition;                                      // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0011(0x0017) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// 0x0018 (0x0028 - 0x0010)
struct FAnimNode_UseCachedPose : public FAnimNode_Base
{
	struct FPoseLink                                   LinkToCachingNode;                                        // 0x0010(0x0010)
	struct FName                                       CachePoseName;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// 0x0010 (0x0020 - 0x0010)
struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
{
	struct FPoseLink                                   LocalPose;                                                // 0x0010(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// 0x0010 (0x0020 - 0x0010)
struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x0010(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.CompressedTrack
// 0x0038
struct FCompressedTrack
{
	TArray<unsigned char>                              ByteStream;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
	float                                              Mins[0x3];                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Ranges[0x3];                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveTrack
// 0x0018
struct FCurveTrack
{
	struct FName                                       CurveName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      CurveWeights;                                             // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ScaleTrack
// 0x0020
struct FScaleTrack
{
	TArray<struct FVector>                             ScaleKeys;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.RotationTrack
// 0x0020
struct FRotationTrack
{
	TArray<struct FQuat>                               RotKeys;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.TranslationTrack
// 0x0020
struct FTranslationTrack
{
	TArray<struct FVector>                             PosKeys;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.RawAnimSequenceTrack
// 0x0030
struct FRawAnimSequenceTrack
{
	TArray<struct FVector>                             PosKeys;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FQuat>                               RotKeys;                                                  // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             ScaleKeys;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimSequenceTrackContainer
// 0x0020
struct FAnimSequenceTrackContainer
{
	TArray<struct FRawAnimSequenceTrack>               AnimationTracks;                                          // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FName>                               TrackNames;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimSingleNodeInstanceProxy
// 0x0150 (0x0830 - 0x06E0)
struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x150];                                     // 0x06E0(0x0150) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SingleNode
// 0x0020 (0x0030 - 0x0010)
struct FAnimNode_SingleNode : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               // 0x0010(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimationTransitionRule
// 0x0010
struct FAnimationTransitionRule
{
	struct FName                                       RuleToExecute;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               TransitionReturnVal;                                      // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                TransitionIndex;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationState
// 0x0020 (0x0028 - 0x0008)
struct FAnimationState : public FAnimationStateBase
{
	TArray<struct FAnimationTransitionRule>            Transitions;                                              // 0x0008(0x0010) (ZeroConstructor)
	int                                                StateRootNodeIndex;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartNotify;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndNotify;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FullyBlendedNotify;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNotifyTrack
// 0x0038
struct FAnimNotifyTrack
{
	struct FName                                       TrackName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TrackColor;                                               // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneBlendWeights
// 0x0010
struct FPerBoneBlendWeights
{
	TArray<struct FPerBoneBlendWeight>                 BoneBlendWeights;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AssetImportInfo
// 0x0001
struct FAssetImportInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.AtmospherePrecomputeInstanceData
// 0x01E0 (0x0288 - 0x00A8)
struct FAtmospherePrecomputeInstanceData : public FSceneComponentInstanceData
{
	TMap<class USceneComponent*, struct FTransform>    AttachedInstanceComponents;                               // 0x0058(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x00A8(0x01E0) MISSED OFFSET
};

// ScriptStruct Engine.NavAvoidanceData
// 0x003C
struct FNavAvoidanceData
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct Engine.GridBlendSample
// 0x001C
struct FGridBlendSample
{
	struct FEditorElement                              GridElement;                                              // 0x0000(0x0018)
	float                                              BlendWeight;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BPEditorBookmarkNode
// 0x0038
struct FBPEditorBookmarkNode
{
	struct FGuid                                       NodeGuid;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ParentGuid;                                               // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0020(0x0028)
};

// ScriptStruct Engine.EditedDocumentInfo
// 0x0030
struct FEditedDocumentInfo
{
	struct FSoftObjectPath                             EditedObjectPath;                                         // 0x0000(0x0018) (ZeroConstructor)
	struct FVector2D                                   SavedViewOffset;                                          // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              SavedZoomAmount;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UObject*                                     EditedObject;                                             // 0x0028(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct Engine.BPInterfaceDescription
// 0x0018
struct FBPInterfaceDescription
{
	class UClass*                                      Interface;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEdGraph*>                            Graphs;                                                   // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BPVariableDescription
// 0x00D0
struct FBPVariableDescription
{
	struct FName                                       VarName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       VarGuid;                                                  // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FEdGraphPinType                             VarType;                                                  // 0x0018(0x0058) (Edit)
	struct FString                                     FriendlyName;                                             // 0x0070(0x0010) (Edit, ZeroConstructor)
	struct FText                                       Category;                                                 // 0x0080(0x0028) (Edit)
	uint64_t                                           PropertyFlags;                                            // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RepNotifyFunc;                                            // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELifetimeCondition>                    ReplicationCondition;                                     // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	TArray<struct FBPVariableMetaDataEntry>            MetaDataArray;                                            // 0x00B0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DefaultValue;                                             // 0x00C0(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.BlueprintMacroCosmeticInfo
// 0x0001
struct FBlueprintMacroCosmeticInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.CompilerNativizationOptions
// 0x0080
struct FCompilerNativizationOptions
{
	struct FName                                       PlatformName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               ServerOnlyPlatform;                                       // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ClientOnlyPlatform;                                       // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bExcludeMonolithicHeaders;                                // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
	TArray<struct FName>                               ExcludedModules;                                          // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0020(0x0050) UNKNOWN PROPERTY: SetProperty Engine.CompilerNativizationOptions.ExcludedAssets
	TArray<struct FString>                             ExcludedFolderPaths;                                      // 0x0070(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.EventGraphFastCallPair
// 0x0010
struct FEventGraphFastCallPair
{
	class UFunction*                                   FunctionToPatch;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                EventGraphCallOffset;                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintDebugData
// 0x0001
struct FBlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.PointerToUberGraphFrame
// 0x0008
struct FPointerToUberGraphFrame
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// 0x0190
struct FDebuggingInfoForSingleFunction
{
	unsigned char                                      UnknownData00[0x190];                                     // 0x0000(0x0190) MISSED OFFSET
};

// ScriptStruct Engine.NodeToCodeAssociation
// 0x0014
struct FNodeToCodeAssociation
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.AnimCurveType
// 0x0002
struct FAnimCurveType
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.BookmarkBaseJumpToSettings
// 0x0001
struct FBookmarkBaseJumpToSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.BookmarkJumpToSettings
// 0x0000 (0x0001 - 0x0001)
struct FBookmarkJumpToSettings : public FBookmarkBaseJumpToSettings
{

};

// ScriptStruct Engine.Bookmark2DJumpToSettings
// 0x0001
struct FBookmark2DJumpToSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimTransitionData
// 0x0024
struct FCachedAnimTransitionData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FromStateName;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ToStateName;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0018(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimRelevancyData
// 0x001C
struct FCachedAnimRelevancyData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0010(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimAssetPlayerData
// 0x0018
struct FCachedAnimAssetPlayerData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimStateData
// 0x001C
struct FCachedAnimStateData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0010(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimStateArray
// 0x0018
struct FCachedAnimStateArray
{
	TArray<struct FCachedAnimStateData>                States;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DummySpacerCameraTypes
// 0x0001
struct FDummySpacerCameraTypes
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.CanvasIcon
// 0x0018
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              U;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UL;                                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VL;                                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.WrappedStringElement
// 0x0018
struct FWrappedStringElement
{
	struct FString                                     Value;                                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FVector2D                                   LineExtent;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TextSizingParameters
// 0x0028
struct FTextSizingParameters
{
	float                                              DrawX;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DrawY;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DrawXL;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DrawYL;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scaling;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFont*                                       DrawFont;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SpacingAdjust;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ChildActorAttachedActorInfo
// 0x0040
struct FChildActorAttachedActorInfo
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct Engine.ChildActorComponentInstanceData
// 0x0028 (0x00D0 - 0x00A8)
struct FChildActorComponentInstanceData : public FSceneComponentInstanceData
{
	struct FName                                       ChildActorName;                                           // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FChildActorAttachedActorInfo>        AttachedActors;                                           // 0x00B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AutoCompleteNode
// 0x0028
struct FAutoCompleteNode
{
	int                                                IndexChar;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        AutoCompleteListIndices;                                  // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// 0x0208
struct FRuntimeCurveLinearColor
{
	struct FRichCurve                                  ColorCurves[0x4];                                         // 0x0000(0x0080)
	class UCurveLinearColor*                           ExternalCurve;                                            // 0x0200(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NamedCurveValue
// 0x000C
struct FNamedCurveValue
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveTableRowHandle
// 0x0010
struct FCurveTableRowHandle
{
	class UCurveTable*                                 CurveTable;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DataTableCategoryHandle
// 0x0018
struct FDataTableCategoryHandle
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ColumnName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowContents;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DataTableRowHandle
// 0x0010
struct FDataTableRowHandle
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LevelNameAndTime
// 0x0018
struct FLevelNameAndTime
{
	struct FString                                     LevelName;                                                // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           LevelChangeTimeInMS;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.GraphReference
// 0x0020
struct FGraphReference
{
	class UEdGraph*                                    MacroGraph;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlueprint*                                  GraphBlueprint;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       GraphGuid;                                                // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EdGraphPinReference
// 0x0018
struct FEdGraphPinReference
{
	TWeakObjectPtr<class UEdGraphNode>                 OwningNode;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       PinID;                                                    // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EdGraphSchemaAction
// 0x0100
struct FEdGraphSchemaAction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FText                                       MenuDescription;                                          // 0x0008(0x0028)
	struct FText                                       TooltipDescription;                                       // 0x0020(0x0028)
	struct FText                                       Category;                                                 // 0x0038(0x0028)
	struct FText                                       Keywords;                                                 // 0x0050(0x0028)
	int                                                Grouping;                                                 // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionID;                                                // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             MenuDescriptionArray;                                     // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FString>                             FullSearchTitlesArray;                                    // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FString>                             FullSearchKeywordsArray;                                  // 0x0090(0x0010) (ZeroConstructor)
	TArray<struct FString>                             FullSearchCategoryArray;                                  // 0x00A0(0x0010) (ZeroConstructor)
	TArray<struct FString>                             LocalizedMenuDescriptionArray;                            // 0x00B0(0x0010) (ZeroConstructor)
	TArray<struct FString>                             LocalizedFullSearchTitlesArray;                           // 0x00C0(0x0010) (ZeroConstructor)
	TArray<struct FString>                             LocalizedFullSearchKeywordsArray;                         // 0x00D0(0x0010) (ZeroConstructor)
	TArray<struct FString>                             LocalizedFullSearchCategoryArray;                         // 0x00E0(0x0010) (ZeroConstructor)
	struct FString                                     SearchText;                                               // 0x00F0(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// 0x0008 (0x0108 - 0x0100)
struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
{
	class UEdGraphNode*                                NodeTemplate;                                             // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ScreenMessageString
// 0x0030
struct FScreenMessageString
{
	uint64_t                                           Key;                                                      // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     ScreenMessage;                                            // 0x0008(0x0010) (ZeroConstructor, Transient)
	struct FColor                                      DisplayColor;                                             // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeToDisplay;                                            // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentTimeDisplayed;                                     // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   TextScale;                                                // 0x0024(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.URL
// 0x0068
struct FURL
{
	struct FString                                     Protocol;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Host;                                                     // 0x0010(0x0010) (ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Valid;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Map;                                                      // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     RedirectURL;                                              // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FString>                             Op;                                                       // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     Portal;                                                   // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// 0x0038
struct FFullyLoadedPackagesInfo
{
	TEnumAsByte<EFullyLoadPackageType>                 FullyLoadType;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Tag;                                                      // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FName>                               PackagesToLoad;                                           // 0x0018(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             LoadedObjects;                                            // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.LevelStreamingStatus
// 0x0010
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShouldBeLoaded : 1;                                      // 0x0008(0x0001)
	unsigned char                                      bShouldBeVisible : 1;                                     // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	uint32_t                                           LODIndex;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NamedNetDriver
// 0x0010
struct FNamedNetDriver
{
	class UNetDriver*                                  NetDriver;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.WorldContext
// 0x0280
struct FWorldContext
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0000(0x00D0) MISSED OFFSET
	struct FURL                                        LastURL;                                                  // 0x00D0(0x0068)
	struct FURL                                        LastRemoteURL;                                            // 0x0138(0x0068)
	class UPendingNetGame*                             PendingNetGame;                                           // 0x01A0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FFullyLoadedPackagesInfo>            PackagesToFullyLoad;                                      // 0x01A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01B8(0x0010) MISSED OFFSET
	TArray<class ULevel*>                              LoadedLevelsForPendingMapChange;                          // 0x01C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x18];                                      // 0x01D8(0x0018) MISSED OFFSET
	TArray<class UObjectReferencer*>                   ObjectReferencers;                                        // 0x01F0(0x0010) (ZeroConstructor)
	TArray<struct FLevelStreamingStatus>               PendingLevelStreamingStatusUpdates;                       // 0x0200(0x0010) (ZeroConstructor)
	class UGameViewportClient*                         GameViewport;                                             // 0x0210(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGameInstance*                               OwningGameInstance;                                       // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNamedNetDriver>                     ActiveNetDrivers;                                         // 0x0220(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0230(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.ExposureSettings
// 0x0008
struct FExposureSettings
{
	float                                              FixedEV100;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bFixed;                                                   // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.TickPrerequisite
// 0x0010
struct FTickPrerequisite
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.DepthFieldGlowInfo
// 0x0024
struct FDepthFieldGlowInfo
{
	unsigned char                                      bEnableGlow : 1;                                          // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                GlowColor;                                                // 0x0004(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GlowOuterRadius;                                          // 0x0014(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GlowInnerRadius;                                          // 0x001C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FontRenderInfo
// 0x0028
struct FFontRenderInfo
{
	unsigned char                                      bClipText : 1;                                            // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bEnableShadow : 1;                                        // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FDepthFieldGlowInfo                         GlowInfo;                                                 // 0x0004(0x0024) (BlueprintVisible)
};

// ScriptStruct Engine.ComponentReference
// 0x0028
struct FComponentReference
{
	class AActor*                                      OtherActor;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       ComponentProperty;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     PathToComponent;                                          // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.MeshBuildSettings
// 0x0030
struct FMeshBuildSettings
{
	unsigned char                                      bUseMikkTSpace : 1;                                       // 0x0000(0x0001) (Edit)
	unsigned char                                      bRecomputeNormals : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bRecomputeTangents : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bComputeWeightedNormals : 1;                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bRemoveDegenerates : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bBuildAdjacencyBuffer : 1;                                // 0x0000(0x0001) (Edit)
	unsigned char                                      bBuildReversedIndexBuffer : 1;                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseHighPrecisionTangentBasis : 1;                        // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseFullPrecisionUVs : 1;                                 // 0x0001(0x0001) (Edit)
	unsigned char                                      bGenerateLightmapUVs : 1;                                 // 0x0001(0x0001) (Edit)
	unsigned char                                      bGenerateDistanceFieldAsIfTwoSided : 1;                   // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                MinLightmapResolution;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SrcLightmapIndex;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DstLightmapIndex;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BuildScale;                                               // 0x0010(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     BuildScale3D;                                             // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFieldResolutionScale;                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UStaticMesh*                                 DistanceFieldReplacementMesh;                             // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.POV
// 0x001C
struct FPOV
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimUpdateRateParameters
// 0x0088
struct FAnimUpdateRateParameters
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
	EUpdateRateShiftBucket                             ShiftBucket;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInterpolateSkippedFrames : 1;                            // 0x0002(0x0001)
	unsigned char                                      bShouldUseLodMap : 1;                                     // 0x0002(0x0001)
	unsigned char                                      bShouldUseMinLod : 1;                                     // 0x0002(0x0001)
	unsigned char                                      bSkipUpdate : 1;                                          // 0x0002(0x0001)
	unsigned char                                      bSkipEvaluation : 1;                                      // 0x0002(0x0001)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	int                                                UpdateRate;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EvaluationRate;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TickedPoseOffestTime;                                     // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AdditionalTime;                                           // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	int                                                BaseNonRenderedUpdateRate;                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxEvalRateForInterpolation;                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      BaseVisibleDistanceFactorThesholds;                       // 0x0020(0x0010) (ZeroConstructor)
	TMap<int, int>                                     LODToFrameSkipMap;                                        // 0x0030(0x0050) (ZeroConstructor)
	int                                                SkippedUpdateFrames;                                      // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SkippedEvalFrames;                                        // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimSlotDesc
// 0x000C
struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NumChannels;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimSlotInfo
// 0x0018
struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ChannelWeights;                                           // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.MTDResult
// 0x0010
struct FMTDResult
{
	struct FVector                                     Direction;                                                // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.OverlapResult
// 0x0018
struct FOverlapResult
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
	unsigned char                                      bBlockingHit : 1;                                         // 0x0014(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	unsigned char                                      bDistributionEnabled : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bForceContentExport : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bInitialized : 1;                                         // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LightmassDebugOptions
// 0x0010
struct FLightmassDebugOptions
{
	unsigned char                                      bDebugMode : 1;                                           // 0x0000(0x0001) (Edit)
	unsigned char                                      bStatsEnabled : 1;                                        // 0x0000(0x0001) (Edit)
	unsigned char                                      bGatherBSPSurfacesAcrossComponents : 1;                   // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CoplanarTolerance;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseImmediateImport : 1;                                  // 0x0008(0x0001) (Edit)
	unsigned char                                      bImmediateProcessMappings : 1;                            // 0x0008(0x0001) (Edit)
	unsigned char                                      bSortMappings : 1;                                        // 0x0008(0x0001) (Edit)
	unsigned char                                      bDumpBinaryFiles : 1;                                     // 0x0008(0x0001) (Edit)
	unsigned char                                      bDebugMaterials : 1;                                      // 0x0008(0x0001) (Edit)
	unsigned char                                      bPadMappings : 1;                                         // 0x0008(0x0001) (Edit)
	unsigned char                                      bDebugPaddings : 1;                                       // 0x0008(0x0001) (Edit)
	unsigned char                                      bOnlyCalcDebugTexelMappings : 1;                          // 0x0008(0x0001) (Edit)
	unsigned char                                      bUseRandomColors : 1;                                     // 0x0009(0x0001) (Edit)
	unsigned char                                      bColorBordersGreen : 1;                                   // 0x0009(0x0001) (Edit)
	unsigned char                                      bColorByExecutionTime : 1;                                // 0x0009(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              ExecutionTimeDivisor;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BasedPosition
// 0x0038
struct FBasedPosition
{
	class AActor*                                      Base;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CachedBaseLocation;                                       // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CachedBaseRotation;                                       // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CachedTransPosition;                                      // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FractureEffect
// 0x0010
struct FFractureEffect
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigidBodyContactInfo
// 0x0030
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                                          // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ContactNormal;                                            // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              ContactPenetration;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           PhysMaterial[0x2];                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollisionImpactData
// 0x0028
struct FCollisionImpactData
{
	TArray<struct FRigidBodyContactInfo>               ContactInfos;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     TotalNormalImpulse;                                       // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TotalFrictionImpulse;                                     // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigidBodyState
// 0x0040
struct FRigidBodyState
{
	struct FVector_NetQuantize100                      Position;                                                 // 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FQuat                                       Quaternion;                                               // 0x0010(0x0010) (IsPlainOldData)
	struct FVector_NetQuantize100                      LinVel;                                                   // 0x0020(0x000C)
	struct FVector_NetQuantize100                      AngVel;                                                   // 0x002C(0x000C)
	unsigned char                                      Flags;                                                    // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.PredictProjectilePathPointData
// 0x001C
struct FPredictProjectilePathPointData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Time;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.PredictProjectilePathResult
// 0x00B8
struct FPredictProjectilePathResult
{
	TArray<struct FPredictProjectilePathPointData>     PathData;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FPredictProjectilePathPointData             LastTraceDestination;                                     // 0x0010(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FHitResult                                  HitResult;                                                // 0x002C(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PredictProjectilePathParams
// 0x0060
struct FPredictProjectilePathParams
{
	struct FVector                                     StartLocation;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LaunchVelocity;                                           // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceWithCollision;                                      // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              ProjectileRadius;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSimTime;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceWithChannel;                                        // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              ActorsToIgnore;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SimFrequency;                                             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverrideGravityZ;                                         // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              DrawDebugTime;                                            // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// 0x0018
struct FActiveHapticFeedbackEffect
{
	class UHapticFeedbackEffect_Base*                  HapticEffect;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ClusterNode
// 0x0040
struct FClusterNode
{
	struct FVector                                     BoundMin;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                FirstChild;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoundMax;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                LastChild;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FirstInstance;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastInstance;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinInstanceScale;                                         // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxInstanceScale;                                         // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ClusterNode_DEPRECATED
// 0x0028
struct FClusterNode_DEPRECATED
{
	struct FVector                                     BoundMin;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                FirstChild;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoundMax;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                LastChild;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FirstInstance;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastInstance;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundModulationParameter
// 0x0014
struct FSoundModulationParameter
{
	struct FName                                       Control;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x000C(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ImportanceTexture
// 0x0050
struct FImportanceTexture
{
	struct FIntPoint                                   Size;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NumMips;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<float>                                      MarginalCDF;                                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<float>                                      ConditionalCDF;                                           // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              TextureData;                                              // 0x0030(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class UTexture2D>                   Texture;                                                  // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EImportanceWeight>                     Weighting;                                                // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.InstancedStaticMeshLightMapInstanceData
// 0x0040
struct FInstancedStaticMeshLightMapInstanceData
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (IsPlainOldData)
	TArray<struct FGuid>                               MapBuildDataIds;                                          // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.InstancedStaticMeshComponentInstanceData
// 0x0088 (0x0130 - 0x00A8)
struct FInstancedStaticMeshComponentInstanceData : public FSceneComponentInstanceData
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FInstancedStaticMeshLightMapInstanceData    CachedStaticLighting;                                     // 0x00B0(0x0040)
	TArray<struct FInstancedStaticMeshInstanceData>    PerInstanceSMData;                                        // 0x00F0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET
	int                                                InstancingRandomSeed;                                     // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0124(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.IntegralKey
// 0x0008
struct FIntegralKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.IntegralCurve
// 0x0018 (0x0080 - 0x0068)
struct FIntegralCurve : public FIndexedCurve
{
	TArray<struct FIntegralKey>                        Keys;                                                     // 0x0068(0x0010) (Edit, ZeroConstructor)
	int                                                DefaultValue;                                             // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDefaultValueBeforeFirstKey;                           // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.InterpEdSelKey
// 0x0018
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInterpTrack*                                Track;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                KeyIndex;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              UnsnappedPosition;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CameraPreviewInfo
// 0x0030
struct FCameraPreviewInfo
{
	class UClass*                                      PawnClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AnimSeq;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class APawn*                                       PawnInst;                                                 // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.SubTrackGroup
// 0x0028
struct FSubTrackGroup
{
	struct FString                                     GroupName;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        TrackIndices;                                             // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      bIsCollapsed : 1;                                         // 0x0020(0x0001)
	unsigned char                                      bIsSelected : 1;                                          // 0x0020(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SupportedSubTrackInfo
// 0x0020
struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     SubTrackName;                                             // 0x0008(0x0010) (ZeroConstructor)
	int                                                GroupIndex;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.VectorSpringState
// 0x0018
struct FVectorSpringState
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.FloatSpringState
// 0x0008
struct FFloatSpringState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DrawToRenderTargetContext
// 0x0010
struct FDrawToRenderTargetContext
{
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LatentActionManager
// 0x0060
struct FLatentActionManager
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.LevelSimplificationDetails
// 0x0104
struct FLevelSimplificationDetails
{
	bool                                               bCreatePackagePerAsset;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DetailsPercentage;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMaterialProxySettings                      StaticMeshMaterialSettings;                               // 0x0008(0x0074) (Edit)
	bool                                               bOverrideLandscapeExportLOD;                              // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	int                                                LandscapeExportLOD;                                       // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMaterialProxySettings                      LandscapeMaterialSettings;                                // 0x0084(0x0074) (Edit)
	bool                                               bBakeFoliageToLandscape;                                  // 0x00F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBakeGrassToLandscape;                                    // 0x00F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateMeshNormalMap;                                   // 0x00FA(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateMeshMetallicMap;                                 // 0x00FB(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateMeshRoughnessMap;                                // 0x00FC(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateMeshSpecularMap;                                 // 0x00FD(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeNormalMap;                              // 0x00FE(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeMetallicMap;                            // 0x00FF(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeRoughnessMap;                           // 0x0100(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeSpecularMap;                            // 0x0101(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0102(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.StreamableTextureInstance
// 0x0028
struct FStreamableTextureInstance
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.DynamicTextureInstance
// 0x0010 (0x0038 - 0x0028)
struct FDynamicTextureInstance : public FStreamableTextureInstance
{
	class UTexture2D*                                  Texture;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAttached;                                                // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              OriginalRadius;                                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PrecomputedLightInstanceData
// 0x0058 (0x0100 - 0x00A8)
struct FPrecomputedLightInstanceData : public FSceneComponentInstanceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x00B0(0x0030) (IsPlainOldData)
	struct FGuid                                       LightGuid;                                                // 0x00E0(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                PreviewShadowMapChannel;                                  // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00F4(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.BatchedPoint
// 0x0028
struct FBatchedPoint
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              PointSize;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingLifeTime;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DepthPriority;                                            // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BatchedLine
// 0x0034
struct FBatchedLine
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingLifeTime;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DepthPriority;                                            // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ClientReceiveData
// 0x0040
struct FClientReceiveData
{
	class APlayerController*                           LocalPC;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MessageType;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MessageIndex;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     MessageString;                                            // 0x0018(0x0010) (ZeroConstructor)
	class APlayerState*                                RelatedPlayerState_2;                                     // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_3;                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ParameterGroupData
// 0x0018
struct FParameterGroupData
{
	struct FString                                     GroupName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	int                                                GroupSortPriority;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ParameterChannelNames
// 0x0060
struct FParameterChannelNames
{
	struct FText                                       R;                                                        // 0x0000(0x0028) (Edit)
	struct FText                                       G;                                                        // 0x0018(0x0028) (Edit)
	struct FText                                       B;                                                        // 0x0030(0x0028) (Edit)
	struct FText                                       A;                                                        // 0x0048(0x0028) (Edit)
};

// ScriptStruct Engine.FunctionExpressionOutput
// 0x0020
struct FFunctionExpressionOutput
{
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                                         // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       ExpressionOutputId;                                       // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FExpressionOutput                           Output;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FunctionExpressionInput
// 0x0030
struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                                          // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       ExpressionInputId;                                        // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FExpressionInput                            Input;                                                    // 0x0018(0x000C)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.ScalarParameterAtlasInstanceData
// 0x0058
struct FScalarParameterAtlasInstanceData
{
	bool                                               bIsUsedAsAtlasPosition;                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.ScalarParameterAtlasInstanceData.Curve
	unsigned char                                      UnknownData02[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.ScalarParameterAtlasInstanceData.Atlas
};

// ScriptStruct Engine.MemberReference
// 0x0038
struct FMemberReference
{
	class UObject*                                     MemberParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MemberScope;                                              // 0x0008(0x0010) (ZeroConstructor)
	struct FName                                       MemberName;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MemberGuid;                                               // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bSelfContext;                                             // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bWasDeprecated;                                           // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.MeshInstancingSettings
// 0x0018
struct FMeshInstancingSettings
{
	class UClass*                                      ActorClassToUse;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData)
	int                                                InstanceReplacementThreshold;                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMeshInstancingReplacementMethod                   MeshReplacementMethod;                                    // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipMeshesWithVertexColors;                              // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseHLODVolumes;                                          // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	class UClass*                                      ISMComponentToUse;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshReductionSettings
// 0x0024
struct FMeshReductionSettings
{
	float                                              PercentTriangles;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentVertices;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviation;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PixelError;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeldingThreshold;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HardAngleThreshold;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BaseLODModel;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                SilhouetteImportance;                                     // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                TextureImportance;                                        // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                ShadingImportance;                                        // 0x001E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRecalculateNormals : 1;                                  // 0x001F(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGenerateUniqueLightmapUVs : 1;                           // 0x001F(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bKeepSymmetry : 1;                                        // 0x001F(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bVisibilityAided : 1;                                     // 0x001F(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCullOccluded : 1;                                        // 0x001F(0x0001) (Edit, BlueprintVisible)
	EStaticMeshReductionTerimationCriterion            TerminationCriterion;                                     // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                VisibilityAggressiveness;                                 // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                VertexColorImportance;                                    // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.NameCurveKey
// 0x000C
struct FNameCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Value;                                                    // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NameCurve
// 0x0010 (0x0078 - 0x0068)
struct FNameCurve : public FIndexedCurve
{
	TArray<struct FNameCurveKey>                       Keys;                                                     // 0x0068(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.NavDataConfig
// 0x0048 (0x0078 - 0x0030)
struct FNavDataConfig : public FNavAgentProperties
{
	struct FName                                       Name;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DefaultQueryExtent;                                       // 0x003C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NavigationDataClass;                                      // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftClassProperty Engine.NavDataConfig.NavDataClass
};

// ScriptStruct Engine.PacketSimulationSettings
// 0x0030
struct FPacketSimulationSettings
{
	int                                                PktLoss;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLossMaxSize;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLossMinSize;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktOrder;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktDup;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLag;                                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLagVariance;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLagMin;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLagMax;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktIncomingLagMin;                                        // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktIncomingLagMax;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktIncomingLoss;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FastArraySerializer
// 0x0108
struct FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x54];                                      // 0x0000(0x0054) MISSED OFFSET
	int                                                ArrayReplicationKey;                                      // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0xA8];                                      // 0x0058(0x00A8) MISSED OFFSET
	EFastArraySerializerDeltaFlags                     DeltaFlags;                                               // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.FastArraySerializerItem
// 0x000C
struct FFastArraySerializerItem
{
	int                                                ReplicationID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                ReplicationKey;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                MostRecentArrayReplicationKey;                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.ParticleCurvePair
// 0x0018
struct FParticleCurvePair
{
	struct FString                                     CurveName;                                                // 0x0000(0x0010) (ZeroConstructor)
	class UObject*                                     CurveObject;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BeamTargetData
// 0x000C
struct FBeamTargetData
{
	struct FName                                       TargetName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetPercentage;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ParticleSystemWorldManagerTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FParticleSystemWorldManagerTickFunction : public FTickFunction
{
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         EndTickGroup;                                             // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTickEvenWhenPaused : 1;                                  // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEverTick : 1;                                         // 0x000A(0x0001)
	unsigned char                                      bStartWithTickEnabled : 1;                                // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                          // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              TickInterval;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemReplayFrame
// 0x0010
struct FParticleSystemReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// 0x0010
struct FParticleEmitterReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PlayerMuteList
// 0x0038
struct FPlayerMuteList
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	bool                                               bHasVoiceHandshakeCompleted;                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                VoiceChannelIdx;                                          // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PreviewAttachedObjectPair
// 0x0038
struct FPreviewAttachedObjectPair
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.PreviewAttachedObjectPair.AttachedObject
	class UObject*                                     Object;                                                   // 0x0028(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       AttachedTo;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PreviewAssetAttachContainer
// 0x0010
struct FPreviewAssetAttachContainer
{
	TArray<struct FPreviewAttachedObjectPair>          AttachedObjects;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PrimitiveComponentInstanceData
// 0x0048 (0x00F0 - 0x00A8)
struct FPrimitiveComponentInstanceData : public FSceneComponentInstanceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	struct FTransform                                  ComponentTransform;                                       // 0x00B0(0x0030) (IsPlainOldData)
	int                                                VisibilityId;                                             // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         LODParent;                                                // 0x00E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Engine.SpriteCategoryInfo
// 0x0038
struct FSpriteCategoryInfo
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0028)
	struct FText                                       Description;                                              // 0x0020(0x0028)
};

// ScriptStruct Engine.CompressedRichCurve
// 0x0018
struct FCompressedRichCurve
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSourceStatus
// 0x0001
struct FRootMotionSourceStatus
{
	unsigned char                                      Flags;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RootMotionFinishVelocitySettings
// 0x0014
struct FRootMotionFinishVelocitySettings
{
	ERootMotionFinishVelocityMode                      Mode;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     SetVelocity;                                              // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              ClampVelocity;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSource
// 0x00A0
struct FRootMotionSource
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	uint16_t                                           Priority;                                                 // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           LocalID;                                                  // 0x0012(0x0002) (ZeroConstructor, IsPlainOldData)
	ERootMotionAccumulateMode                          AccumulateMode;                                           // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FName                                       InstanceName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentTime;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PreviousTime;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRootMotionSourceStatus                     Status;                                                   // 0x0030(0x0001)
	struct FRootMotionSourceSettings                   Settings;                                                 // 0x0031(0x0001)
	bool                                               bInLocalSpace;                                            // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xD];                                       // 0x0033(0x000D) MISSED OFFSET
	struct FRootMotionMovementParams                   RootMotionParams;                                         // 0x0040(0x0040)
	struct FRootMotionFinishVelocitySettings           FinishVelocityParams;                                     // 0x0080(0x0014)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0094(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_JumpForce
// 0x0030 (0x00D0 - 0x00A0)
struct FRootMotionSource_JumpForce : public FRootMotionSource
{
	struct FRotator                                    Rotation;                                                 // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bDisableTimeout;                                          // 0x00AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
// 0x0030 (0x00D0 - 0x00A0)
struct FRootMotionSource_MoveToDynamicForce : public FRootMotionSource
{
	struct FVector                                     StartLocation;                                            // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialTargetLocation;                                    // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSource_MoveToForce
// 0x0020 (0x00C0 - 0x00A0)
struct FRootMotionSource_MoveToForce : public FRootMotionSource
{
	struct FVector                                     StartLocation;                                            // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSource_RadialForce
// 0x0040 (0x00E0 - 0x00A0)
struct FRootMotionSource_RadialForce : public FRootMotionSource
{
	struct FVector                                     Location;                                                 // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class AActor*                                      LocationActor;                                            // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPush;                                                  // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bNoZForce;                                                // 0x00B9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
	class UCurveFloat*                                 StrengthDistanceFalloff;                                  // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 StrengthOverTime;                                         // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseFixedWorldDirection;                                  // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	struct FRotator                                    FixedWorldDirection;                                      // 0x00D4(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSource_ConstantForce
// 0x0010 (0x00B0 - 0x00A0)
struct FRootMotionSource_ConstantForce : public FRootMotionSource
{
	struct FVector                                     Force;                                                    // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 StrengthOverTime;                                         // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CameraExposureSettings
// 0x0038
struct FCameraExposureSettings
{
	TEnumAsByte<EAutoExposureMethod>                   Method;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LowPercent;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighPercent;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinBrightness;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBrightness;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedUp;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedDown;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bias;                                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BiasCurve;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMin;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMax;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CalibrationConstant;                                      // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.GaussianSumBloomSettings
// 0x0084
struct FGaussianSumBloomSettings
{
	float                                              Intensity;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Threshold;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SizeScale;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Filter1Size;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Filter2Size;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Filter3Size;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Filter4Size;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Filter5Size;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Filter6Size;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Filter1Tint;                                              // 0x0024(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Filter2Tint;                                              // 0x0034(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Filter3Tint;                                              // 0x0044(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Filter4Tint;                                              // 0x0054(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Filter5Tint;                                              // 0x0064(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Filter6Tint;                                              // 0x0074(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ConvolutionBloomSettings
// 0x0028
struct FConvolutionBloomSettings
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CenterUV;                                                 // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreFilterMin;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreFilterMax;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreFilterMult;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BufferScale;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LensBloomSettings
// 0x00B8
struct FLensBloomSettings
{
	struct FGaussianSumBloomSettings                   GaussianSum;                                              // 0x0000(0x0084) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FConvolutionBloomSettings                   Convolution;                                              // 0x0088(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<EBloomMethod>                          Method;                                                   // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.LensImperfectionSettings
// 0x0020
struct FLensImperfectionSettings
{
	class UTexture*                                    DirtMask;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirtMaskIntensity;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DirtMaskTint;                                             // 0x000C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LensSettings
// 0x00E0
struct FLensSettings
{
	struct FLensBloomSettings                          Bloom;                                                    // 0x0000(0x00B8) (Edit, BlueprintVisible)
	struct FLensImperfectionSettings                   Imperfections;                                            // 0x00B8(0x0020) (Edit, BlueprintVisible)
	float                                              ChromaticAberration;                                      // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FilmStockSettings
// 0x0014
struct FFilmStockSettings
{
	float                                              Slope;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Toe;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Shoulder;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlackClip;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WhiteClip;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ColorGradePerRangeSettings
// 0x0050
struct FColorGradePerRangeSettings
{
	struct FVector4                                    Saturation;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Contrast;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Gamma;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Gain;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Offset;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ColorGradingSettings
// 0x0150
struct FColorGradingSettings
{
	struct FColorGradePerRangeSettings                 Global;                                                   // 0x0000(0x0050) (Edit, BlueprintVisible)
	struct FColorGradePerRangeSettings                 Shadows;                                                  // 0x0050(0x0050) (Edit, BlueprintVisible)
	struct FColorGradePerRangeSettings                 Midtones;                                                 // 0x00A0(0x0050) (Edit, BlueprintVisible)
	struct FColorGradePerRangeSettings                 Highlights;                                               // 0x00F0(0x0050) (Edit, BlueprintVisible)
	float                                              ShadowsMax;                                               // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighlightsMin;                                            // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SimpleCurveKey
// 0x0008
struct FSimpleCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SimpleCurve
// 0x0018 (0x0088 - 0x0070)
struct FSimpleCurve : public FRealCurve
{
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<struct FSimpleCurveKey>                     Keys;                                                     // 0x0078(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// 0x0050
struct FClothPhysicsProperties_Legacy
{
	float                                              VerticalResistance;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HorizontalResistance;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BendResistance;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ShearResistance;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TetherStiffness;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TetherLimit;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Drag;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StiffnessFrequency;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MassScale;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InertiaBlend;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionThickness;                                   // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionSquashScale;                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionStiffness;                                   // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SolverFrequency;                                          // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FiberCompression;                                         // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FiberExpansion;                                           // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FiberResistance;                                          // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ClothingAssetData_Legacy
// 0x0078
struct FClothingAssetData_Legacy
{
	struct FName                                       AssetName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ApexFileName;                                             // 0x0008(0x0010) (ZeroConstructor)
	bool                                               bClothPropertiesChanged;                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FClothPhysicsProperties_Legacy              PhysicsProperties;                                        // 0x001C(0x0050)
	unsigned char                                      UnknownData01[0xC];                                       // 0x006C(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshClothBuildParams
// 0x0058
struct FSkeletalMeshClothBuildParams
{
	TWeakObjectPtr<class UClothingAssetBase>           TargetAsset;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TargetLod;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRemapParameters;                                         // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FString                                     AssetName;                                                // 0x0010(0x0010) (Edit, ZeroConstructor)
	int                                                LODIndex;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SourceSection;                                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveFromMesh;                                          // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x0029(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.SkeletalMeshClothBuildParams.PhysicsAsset
};

// ScriptStruct Engine.BoneMirrorExport
// 0x0014
struct FBoneMirrorExport
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceBoneName;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 BoneFlipAxis;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FSkeletalMeshComponentClothTickFunction : public FTickFunction
{
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         EndTickGroup;                                             // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTickEvenWhenPaused : 1;                                  // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEverTick : 1;                                         // 0x000A(0x0001)
	unsigned char                                      bStartWithTickEnabled : 1;                                // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                          // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              TickInterval;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FSkeletalMeshComponentEndPhysicsTickFunction : public FTickFunction
{
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         EndTickGroup;                                             // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTickEvenWhenPaused : 1;                                  // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEverTick : 1;                                         // 0x000A(0x0001)
	unsigned char                                      bStartWithTickEnabled : 1;                                // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                          // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              TickInterval;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.NameMapping
// 0x0010
struct FNameMapping
{
	struct FName                                       NodeName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigConfiguration
// 0x0018
struct FRigConfiguration
{
	class URig*                                        Rig;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNameMapping>                        BoneMappingTable;                                         // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BoneReductionSetting
// 0x0010
struct FBoneReductionSetting
{
	TArray<struct FName>                               BonesToRemove;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ReferencePose
// 0x0018
struct FReferencePose
{
	struct FName                                       PoseName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          ReferencePose;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.SkeletonToMeshLinkup
// 0x0020
struct FSkeletonToMeshLinkup
{
	TArray<int>                                        SkeletonToMeshTable;                                      // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        MeshToSkeletonTable;                                      // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PrecomputedSkyLightInstanceData
// 0x00B8 (0x0160 - 0x00A8)
struct FPrecomputedSkyLightInstanceData : public FSceneComponentInstanceData
{
	struct FGuid                                       LightGuid;                                                // 0x00A8(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              AverageBrightness;                                        // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x00BC(0x00A4) MISSED OFFSET
};

// ScriptStruct Engine.SmartNameMapping
// 0x0070
struct FSmartNameMapping
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct Engine.CurveMetaData
// 0x0020
struct FCurveMetaData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.SoundClassEditorData
// 0x0008
struct FSoundClassEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StreamedAudioPlatformData
// 0x0020
struct FStreamedAudioPlatformData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.SplineInstanceData
// 0x00D8 (0x0180 - 0x00A8)
struct FSplineInstanceData : public FSceneComponentInstanceData
{
	bool                                               bSplineHasBeenEdited;                                     // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FSplineCurves                               SplineCurves;                                             // 0x00B0(0x0068)
	struct FSplineCurves                               SplineCurvesPreUCS;                                       // 0x0118(0x0068)
};

// ScriptStruct Engine.SplineMeshInstanceData
// 0x0030 (0x00D8 - 0x00A8)
struct FSplineMeshInstanceData : public FSceneComponentInstanceData
{
	struct FVector                                     StartPos;                                                 // 0x00A8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // 0x00B4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartTangent;                                             // 0x00C0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndTangent;                                               // 0x00CC(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialRemapIndex
// 0x0018
struct FMaterialRemapIndex
{
	uint32_t                                           ImportVersionKey;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        MaterialRemap;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// 0x0028
struct FAssetEditorOrbitCameraPosition
{
	bool                                               bIsSet;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     CamOrbitPoint;                                            // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CamOrbitZoom;                                             // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CamOrbitRotation;                                         // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshSectionInfo
// 0x0008
struct FMeshSectionInfo
{
	int                                                MaterialIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCastShadow;                                              // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.MeshSectionInfoMap
// 0x0050
struct FMeshSectionInfoMap
{
	TMap<uint32_t, struct FMeshSectionInfo>            Map;                                                      // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Engine.StaticMeshSourceModel
// 0x0070
struct FStaticMeshSourceModel
{
	struct FMeshBuildSettings                          BuildSettings;                                            // 0x0000(0x0030) (Edit)
	struct FMeshReductionSettings                      ReductionSettings;                                        // 0x0030(0x0024) (Edit)
	float                                              LODDistance;                                              // 0x0054(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FPerPlatformFloat                           ScreenSize;                                               // 0x0058(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     SourceImportFilename;                                     // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// 0x001C
struct FStaticMeshOptimizationSettings
{
	TEnumAsByte<EOptimizationType>                     ReductionMethod;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              NumOfTrianglesPercentage;                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviationPercentage;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeldingThreshold;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRecalcNormals;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              NormalsThreshold;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SilhouetteImportance;                                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TextureImportance;                                        // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShadingImportance;                                        // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.PaintedVertex
// 0x0020
struct FPaintedVertex
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Normal;                                                   // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticMeshVertexColorLODData
// 0x0028
struct FStaticMeshVertexColorLODData
{
	TArray<struct FPaintedVertex>                      PaintedVertices;                                          // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              VertexBufferColors;                                       // 0x0010(0x0010) (ZeroConstructor)
	uint32_t                                           LODIndex;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshComponentInstanceData
// 0x0040 (0x0130 - 0x00F0)
struct FStaticMeshComponentInstanceData : public FPrimitiveComponentInstanceData
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FStaticMeshVertexColorLODData>       VertexColorLODs;                                          // 0x00F8(0x0010) (ZeroConstructor)
	TArray<struct FGuid>                               CachedStaticLighting;                                     // 0x0108(0x0010) (ZeroConstructor)
	TArray<struct FStreamingTextureBuildInfo>          StreamingTextureData;                                     // 0x0118(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StringCurveKey
// 0x0018
struct FStringCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Value;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.StringCurve
// 0x0020 (0x0088 - 0x0068)
struct FStringCurve : public FIndexedCurve
{
	struct FString                                     DefaultValue;                                             // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<struct FStringCurveKey>                     Keys;                                                     // 0x0078(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.TextureFormatSettings
// 0x0002
struct FTextureFormatSettings
{
	TEnumAsByte<ETextureCompressionSettings>           CompressionSettings;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CompressionNoAlpha : 1;                                   // 0x0001(0x0001)
	unsigned char                                      CompressionNone : 1;                                      // 0x0001(0x0001)
	unsigned char                                      CompressionYCoCg : 1;                                     // 0x0001(0x0001)
	unsigned char                                      SRGB : 1;                                                 // 0x0001(0x0001)
};

// ScriptStruct Engine.TexturePlatformData
// 0x0030
struct FTexturePlatformData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.TextureSource
// 0x00A0
struct FTextureSource
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct Engine.TextureSourceBlock
// 0x0018
struct FTextureSourceBlock
{
	int                                                BlockX;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                BlockY;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SizeX;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SizeY;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumSlices;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumMips;                                                  // 0x0014(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.StreamingRenderAssetPrimitiveInfo
// 0x0030
struct FStreamingRenderAssetPrimitiveInfo
{
	class UStreamableRenderAsset*                      RenderAsset;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FBoxSphereBounds                            Bounds;                                                   // 0x0008(0x001C) (ZeroConstructor, IsPlainOldData)
	float                                              TexelFactor;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PackedRelativeBox;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAllowInvalidTexelFactorWhenUnregistered : 1;             // 0x002C(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.TimeStretchCurveInstance
// 0x0030
struct FTimeStretchCurveInstance
{
	bool                                               bHasValidData;                                            // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0001(0x002F) MISSED OFFSET
};

// ScriptStruct Engine.EndPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FEndPhysicsTickFunction : public FTickFunction
{
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         EndTickGroup;                                             // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTickEvenWhenPaused : 1;                                  // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEverTick : 1;                                         // 0x000A(0x0001)
	unsigned char                                      bStartWithTickEnabled : 1;                                // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                          // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              TickInterval;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.StartPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FStartPhysicsTickFunction : public FTickFunction
{
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         EndTickGroup;                                             // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTickEvenWhenPaused : 1;                                  // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEverTick : 1;                                         // 0x000A(0x0001)
	unsigned char                                      bStartWithTickEnabled : 1;                                // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                          // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              TickInterval;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.LevelViewportInfo
// 0x0020
struct FLevelViewportInfo
{
	struct FVector                                     CamPosition;                                              // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CamRotation;                                              // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              CamOrthoZoom;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               CamUpdated;                                               // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// 0x004C
struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumIndirectLightingBounces;                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSkyLightingBounces;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IndirectLightingQuality;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IndirectLightingSmoothness;                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      EnvironmentColor;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EnvironmentIntensity;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmissiveBoost;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVolumeLightingMethod>                 VolumeLightingMethod;                                     // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseAmbientOcclusion : 1;                                 // 0x0025(0x0001) (Edit)
	unsigned char                                      bGenerateAmbientOcclusionMaterialMask : 1;                // 0x0025(0x0001) (Edit)
	unsigned char                                      bVisualizeMaterialDiffuse : 1;                            // 0x0025(0x0001) (Edit)
	unsigned char                                      bVisualizeAmbientOcclusion : 1;                           // 0x0025(0x0001) (Edit)
	unsigned char                                      bCompressLightmaps : 1;                                   // 0x0025(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	float                                              VolumetricLightmapDetailCellSize;                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricLightmapMaximumBrickMemoryMb;                   // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricLightmapSphericalHarmonicSmoothing;             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeLightSamplePlacementScale;                          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DirectIlluminationOcclusionFraction;                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IndirectIlluminationOcclusionFraction;                    // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionExponent;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FullyOccludedSamplesFraction;                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOcclusionDistance;                                     // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

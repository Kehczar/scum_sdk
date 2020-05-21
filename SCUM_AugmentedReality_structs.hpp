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

// Enum AugmentedReality.EARTrackingState
enum class EARTrackingState : uint8_t
{
	EARTrackingState__Unknown      = 0,
	None                           = 1,
	EARTrackingState__Tracking     = 2,
	neByteProperty‘IntProperty  = 3,
	EARTrackingState__NotTracking  = 4,
	ByteProperty‘IntProperty    = 5,
	EARTrackingState__StoppedTracking = 6,
	ByteProperty                   = 7,
	EARTrackingState__EARTrackingState_MAX = 8,
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


// Enum AugmentedReality.EARSessionTrackingFeature
enum class EARSessionTrackingFeature : uint8_t
{
	EARSessionTrackingFeature__None = 0,
	None                           = 1,
	EARSessionTrackingFeature__PoseDetection2D = 2,
	neByteProperty‘IntProperty  = 3,
	EARSessionTrackingFeature__PersonSegmentation = 4,
	ByteProperty‘IntProperty    = 5,
	EARSessionTrackingFeature__PersonSegmentationWithDepth = 6,
	ByteProperty                   = 7,
	EARSessionTrackingFeature__EARSessionTrackingFeature_MAX = 8,
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


// Enum AugmentedReality.EARFaceTrackingUpdate
enum class EARFaceTrackingUpdate : uint8_t
{
	EARFaceTrackingUpdate__CurvesAndGeo = 0,
	None                           = 1,
	EARFaceTrackingUpdate__CurvesOnly = 2,
	neByteProperty‘IntProperty  = 3,
	EARFaceTrackingUpdate__EARFaceTrackingUpdate_MAX = 4,
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


// Enum AugmentedReality.EAREnvironmentCaptureProbeType
enum class EAREnvironmentCaptureProbeType : uint8_t
{
	EAREnvironmentCaptureProbeType__None = 0,
	None                           = 1,
	EAREnvironmentCaptureProbeType__Manual = 2,
	neByteProperty‘IntProperty  = 3,
	EAREnvironmentCaptureProbeType__Automatic = 4,
	ByteProperty‘IntProperty    = 5,
	EAREnvironmentCaptureProbeType__EAREnvironmentCaptureProbeType_MAX = 6,
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


// Enum AugmentedReality.EARFrameSyncMode
enum class EARFrameSyncMode : uint8_t
{
	EARFrameSyncMode__SyncTickWithCameraImage = 0,
	None                           = 1,
	EARFrameSyncMode__SyncTickWithoutCameraImage = 2,
	neByteProperty‘IntProperty  = 3,
	EARFrameSyncMode__EARFrameSyncMode_MAX = 4,
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


// Enum AugmentedReality.EARLightEstimationMode
enum class EARLightEstimationMode : uint8_t
{
	EARLightEstimationMode__None   = 0,
	None                           = 1,
	EARLightEstimationMode__AmbientLightEstimate = 2,
	neByteProperty‘IntProperty  = 3,
	EARLightEstimationMode__DirectionalLightEstimate = 4,
	ByteProperty‘IntProperty    = 5,
	EARLightEstimationMode__EARLightEstimationMode_MAX = 6,
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


// Enum AugmentedReality.EARPlaneDetectionMode
enum class EARPlaneDetectionMode : uint8_t
{
	EARPlaneDetectionMode__None    = 0,
	None                           = 1,
	EARPlaneDetectionMode__HorizontalPlaneDetection = 2,
	neByteProperty‘IntProperty  = 3,
	EARPlaneDetectionMode__VerticalPlaneDetection = 4,
	ByteProperty‘IntProperty    = 5,
	EARPlaneDetectionMode__EARPlaneDetectionMode_MAX = 6,
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


// Enum AugmentedReality.EARSessionType
enum class EARSessionType : uint8_t
{
	EARSessionType__None           = 0,
	None                           = 1,
	EARSessionType__Orientation    = 2,
	neByteProperty‘IntProperty  = 3,
	EARSessionType__World          = 4,
	ByteProperty‘IntProperty    = 5,
	EARSessionType__Face           = 6,
	ByteProperty                   = 7,
	EARSessionType__Image          = 8,
	teProperty‘IntProperty        = 9,
	EARSessionType__ObjectScanning = 10,
	Property‘IntProperty          = 11,
	EARSessionType__PoseTracking   = 12,
	operty‘IntProperty            = 13,
	EARSessionType__EARSessionType_MAX = 14,
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


// Enum AugmentedReality.EARWorldAlignment
enum class EARWorldAlignment : uint8_t
{
	EARWorldAlignment__Gravity     = 0,
	None                           = 1,
	EARWorldAlignment__GravityAndHeading = 2,
	neByteProperty‘IntProperty  = 3,
	EARWorldAlignment__Camera      = 4,
	ByteProperty‘IntProperty    = 5,
	EARWorldAlignment__EARWorldAlignment_MAX = 6,
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


// Enum AugmentedReality.EARDepthAccuracy
enum class EARDepthAccuracy : uint8_t
{
	EARDepthAccuracy__Unkown       = 0,
	None                           = 1,
	EARDepthAccuracy__Approximate  = 2,
	neByteProperty‘IntProperty  = 3,
	EARDepthAccuracy__Accurate     = 4,
	ByteProperty‘IntProperty    = 5,
	EARDepthAccuracy__EARDepthAccuracy_MAX = 6,
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


// Enum AugmentedReality.EARDepthQuality
enum class EARDepthQuality : uint8_t
{
	EARDepthQuality__Unkown        = 0,
	None                           = 1,
	EARDepthQuality__Low           = 2,
	neByteProperty‘IntProperty  = 3,
	EARDepthQuality__High          = 4,
	ByteProperty‘IntProperty    = 5,
	EARDepthQuality__EARDepthQuality_MAX = 6,
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


// Enum AugmentedReality.EARTextureType
enum class EARTextureType : uint8_t
{
	EARTextureType__CameraImage    = 0,
	None                           = 1,
	EARTextureType__CameraDepth    = 2,
	neByteProperty‘IntProperty  = 3,
	EARTextureType__EnvironmentCapture = 4,
	ByteProperty‘IntProperty    = 5,
	EARTextureType__EARTextureType_MAX = 6,
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


// Enum AugmentedReality.EAREye
enum class EAREye : uint8_t
{
	EAREye__LeftEye                = 0,
	None                           = 1,
	EAREye__RightEye               = 2,
	neByteProperty‘IntProperty  = 3,
	EAREye__EAREye_MAX             = 4,
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


// Enum AugmentedReality.EARFaceBlendShape
enum class EARFaceBlendShape : uint8_t
{
	EARFaceBlendShape__EyeBlinkLeft = 0,
	None                           = 1,
	EARFaceBlendShape__EyeLookDownLeft = 2,
	neByteProperty‘IntProperty  = 3,
	EARFaceBlendShape__EyeLookInLeft = 4,
	ByteProperty‘IntProperty    = 5,
	EARFaceBlendShape__EyeLookOutLeft = 6,
	ByteProperty                   = 7,
	EARFaceBlendShape__EyeLookUpLeft = 8,
	teProperty‘IntProperty        = 9,
	EARFaceBlendShape__EyeSquintLeft = 10,
	Property‘IntProperty          = 11,
	EARFaceBlendShape__EyeWideLeft = 12,
	operty‘IntProperty            = 13,
	EARFaceBlendShape__EyeBlinkRight = 14,
	erty‘IntProperty              = 15,
	EARFaceBlendShape__EyeLookDownRight = 16,
	ty‘IntProperty                = 17,
	EARFaceBlendShape__EyeLookInRight = 18,
	[Error]                        = 19,
	EARFaceBlendShape__EyeLookOutRight = 20,
	IntProperty                    = 21,
	EARFaceBlendShape__EyeLookUpRight = 22,
	tProperty                      = 23,
	EARFaceBlendShape__EyeSquintRight = 24,
	roperty                        = 25,
	EARFaceBlendShape__EyeWideRight = 26,
	perty                          = 27,
	EARFaceBlendShape__JawForward  = 28,
	rty                            = 29,
	EARFaceBlendShape__JawLeft     = 30,
	y                              = 31,
	EARFaceBlendShape__JawRight    = 32,
	
                              = 33,
	EARFaceBlendShape__JawOpen     = 34,
	BoolProperty                   = 35,
	EARFaceBlendShape__MouthClose  = 36,
	olPropertybFloatProperty      = 37,
	EARFaceBlendShape__MouthFunnel = 38,
	PropertybFloatProperty        = 39,
	EARFaceBlendShape__MouthPucker = 40,
	opertybFloatProperty          = 41,
	EARFaceBlendShape__MouthLeft   = 42,
	ertybFloatProperty            = 43,
	EARFaceBlendShape__MouthRight  = 44,
	tybFloatProperty              = 45,
	EARFaceBlendShape__MouthSmileLeft = 46,
	bFloatProperty                = 47,
	EARFaceBlendShape__MouthSmileRight = 48,
	FloatProperty                  = 49,
	EARFaceBlendShape__MouthFrownLeft = 50,
	oatProperty                    = 51,
	EARFaceBlendShape__MouthFrownRight = 52,
	tProperty01                    = 53,
	EARFaceBlendShape__MouthDimpleLeft = 54,
	roperty01                      = 55,
	EARFaceBlendShape__MouthDimpleRight = 56,
	perty01                        = 57,
	EARFaceBlendShape__MouthStretchLeft = 58,
	rty01                          = 59,
	EARFaceBlendShape__MouthStretchRight = 60,
	y01                            = 61,
	EARFaceBlendShape__MouthRollLower = 62
};


// Enum AugmentedReality.EARFaceTrackingDirection
enum class EARFaceTrackingDirection : uint8_t
{
	EARFaceTrackingDirection__FaceRelative = 0,
	None                           = 1,
	EARFaceTrackingDirection__FaceMirrored = 2,
	neByteProperty‘IntProperty  = 3,
	EARFaceTrackingDirection__EARFaceTrackingDirection_MAX = 4,
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


// Enum AugmentedReality.EARCandidateImageOrientation
enum class EARCandidateImageOrientation : uint8_t
{
	EARCandidateImageOrientation__Landscape = 0,
	None                           = 1,
	EARCandidateImageOrientation__Portrait = 2,
	neByteProperty‘IntProperty  = 3,
	EARCandidateImageOrientation__EARCandidateImageOrientation_MAX = 4,
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


// Enum AugmentedReality.EARJointTransformSpace
enum class EARJointTransformSpace : uint8_t
{
	EARJointTransformSpace__Model  = 0,
	None                           = 1,
	EARJointTransformSpace__ParentJoint = 2,
	neByteProperty‘IntProperty  = 3,
	EARJointTransformSpace__EARJointTransformSpace_MAX = 4,
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


// Enum AugmentedReality.EARObjectClassification
enum class EARObjectClassification : uint8_t
{
	EARObjectClassification__NotApplicable = 0,
	None                           = 1,
	EARObjectClassification__Unknown = 2,
	neByteProperty‘IntProperty  = 3,
	EARObjectClassification__Wall  = 4,
	ByteProperty‘IntProperty    = 5,
	EARObjectClassification__Ceiling = 6,
	ByteProperty                   = 7,
	EARObjectClassification__Floor = 8,
	teProperty‘IntProperty        = 9,
	EARObjectClassification__Table = 10,
	Property‘IntProperty          = 11
};


// Enum AugmentedReality.EARPlaneOrientation
enum class EARPlaneOrientation : uint8_t
{
	EARPlaneOrientation__Horizontal = 0,
	None                           = 1,
	EARPlaneOrientation__Vertical  = 2,
	neByteProperty‘IntProperty  = 3,
	EARPlaneOrientation__Diagonal  = 4,
	ByteProperty‘IntProperty    = 5,
	EARPlaneOrientation__EARPlaneOrientation_MAX = 6,
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


// Enum AugmentedReality.EARWorldMappingState
enum class EARWorldMappingState : uint8_t
{
	EARWorldMappingState__NotAvailable = 0,
	None                           = 1,
	EARWorldMappingState__StillMappingNotRelocalizable = 2,
	neByteProperty‘IntProperty  = 3,
	EARWorldMappingState__StillMappingRelocalizable = 4,
	ByteProperty‘IntProperty    = 5,
	EARWorldMappingState__Mapped   = 6,
	ByteProperty                   = 7,
	EARWorldMappingState__EARWorldMappingState_MAX = 8,
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


// Enum AugmentedReality.EARSessionStatus
enum class EARSessionStatus : uint8_t
{
	EARSessionStatus__NotStarted   = 0,
	None                           = 1,
	EARSessionStatus__Running      = 2,
	neByteProperty‘IntProperty  = 3,
	EARSessionStatus__NotSupported = 4,
	ByteProperty‘IntProperty    = 5,
	EARSessionStatus__FatalError   = 6,
	ByteProperty                   = 7,
	EARSessionStatus__PermissionNotGranted = 8,
	teProperty‘IntProperty        = 9,
	EARSessionStatus__UnsupportedConfiguration = 10,
	Property‘IntProperty          = 11,
	EARSessionStatus__Other        = 12,
	operty‘IntProperty            = 13,
	EARSessionStatus__EARSessionStatus_MAX = 14,
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


// Enum AugmentedReality.EARTrackingQualityReason
enum class EARTrackingQualityReason : uint8_t
{
	EARTrackingQualityReason__None = 0,
	None                           = 1,
	EARTrackingQualityReason__Initializing = 2,
	neByteProperty‘IntProperty  = 3,
	EARTrackingQualityReason__Relocalizing = 4,
	ByteProperty‘IntProperty    = 5,
	EARTrackingQualityReason__ExcessiveMotion = 6,
	ByteProperty                   = 7,
	EARTrackingQualityReason__InsufficientFeatures = 8,
	teProperty‘IntProperty        = 9,
	EARTrackingQualityReason__EARTrackingQualityReason_MAX = 10,
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


// Enum AugmentedReality.EARTrackingQuality
enum class EARTrackingQuality : uint8_t
{
	EARTrackingQuality__NotTracking = 0,
	None                           = 1,
	EARTrackingQuality__OrientationOnly = 2,
	neByteProperty‘IntProperty  = 3,
	EARTrackingQuality__OrientationAndPosition = 4,
	ByteProperty‘IntProperty    = 5,
	EARTrackingQuality__EARTrackingQuality_MAX = 6,
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


// Enum AugmentedReality.EARLineTraceChannels
enum class EARLineTraceChannels : uint8_t
{
	EARLineTraceChannels__None     = 0,
	None                           = 1,
	EARLineTraceChannels__FeaturePoint = 2,
	neByteProperty‘IntProperty  = 3,
	EARLineTraceChannels__GroundPlane = 4,
	ByteProperty‘IntProperty    = 5,
	EARLineTraceChannels__PlaneUsingExtent = 6,
	teProperty‘IntProperty        = 7,
	EARLineTraceChannels__PlaneUsingBoundaryPolygon = 8,
	ty‘IntProperty                = 9,
	EARLineTraceChannels__EARLineTraceChannels_MAX = 10,
	[Error]                        = 11,
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



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AugmentedReality.ARVideoFormat
// 0x000C
struct FARVideoFormat
{
	int                                                FPS;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AugmentedReality.ARSharedWorldReplicationState
// 0x0008
struct FARSharedWorldReplicationState
{
	int                                                PreviewImageOffset;                                       // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ARWorldOffset;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AugmentedReality.ARTraceResult
// 0x0060
struct FARTraceResult
{
	float                                              DistanceFromCamera;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	EARLineTraceChannels                               TraceChannel;                                             // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0005(0x000B) MISSED OFFSET
	struct FTransform                                  LocalToTrackingTransform;                                 // 0x0010(0x0030) (IsPlainOldData)
	class UARTrackedGeometry*                          TrackedGeometry;                                          // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0048(0x0018) MISSED OFFSET
};

// ScriptStruct AugmentedReality.ARSkeletonDefinition
// 0x0028
struct FARSkeletonDefinition
{
	int                                                NumJoints;                                                // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FName>                               JointNames;                                               // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        ParentIndices;                                            // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AugmentedReality.ARPose3D
// 0x0050
struct FARPose3D
{
	struct FARSkeletonDefinition                       SkeletonDefinition;                                       // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FTransform>                          JointTransforms;                                          // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<bool>                                       IsJointTracked;                                           // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EARJointTransformSpace                             JointTransformSpace;                                      // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct AugmentedReality.ARPose2D
// 0x0048
struct FARPose2D
{
	struct FARSkeletonDefinition                       SkeletonDefinition;                                       // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FVector2D>                           JointLocations;                                           // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<bool>                                       IsJointTracked;                                           // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct AugmentedReality.ARSessionStatus
// 0x0018
struct FARSessionStatus
{
	struct FString                                     AdditionalInfo;                                           // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EARSessionStatus                                   Status;                                                   // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

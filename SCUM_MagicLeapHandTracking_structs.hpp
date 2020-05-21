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

// Enum MagicLeapHandTracking.EMagicLeapGestureTransformSpace
enum class EMagicLeapGestureTransformSpace : uint8_t
{
	EMagicLeapGestureTransformSpace__World = 0,
	None                           = 1,
	EMagicLeapGestureTransformSpace__Hand = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapGestureTransformSpace__Tracking = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapGestureTransformSpace__EMagicLeapGestureTransformSpace_MAX = 6,
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


// Enum MagicLeapHandTracking.EMagicLeapHandTrackingGestureFilterLevel
enum class EMagicLeapHandTrackingGestureFilterLevel : uint8_t
{
	EMagicLeapHandTrackingGestureFilterLevel__NoFilter = 0,
	None                           = 1,
	EMagicLeapHandTrackingGestureFilterLevel__SlightRobustnessToFlicker = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapHandTrackingGestureFilterLevel__MoreRobustnessToFlicker = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapHandTrackingGestureFilterLevel__EMagicLeapHandTrackingGestureFilterLevel_MAX = 6,
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


// Enum MagicLeapHandTracking.EMagicLeapHandTrackingKeypointFilterLevel
enum class EMagicLeapHandTrackingKeypointFilterLevel : uint8_t
{
	EMagicLeapHandTrackingKeypointFilterLevel__NoFilter = 0,
	None                           = 1,
	EMagicLeapHandTrackingKeypointFilterLevel__SimpleSmoothing = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapHandTrackingKeypointFilterLevel__PredictiveSmoothing = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapHandTrackingKeypointFilterLevel__EMagicLeapHandTrackingKeypointFilterLevel_MAX = 6,
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


// Enum MagicLeapHandTracking.EMagicLeapHandTrackingGesture
enum class EMagicLeapHandTrackingGesture : uint8_t
{
	EMagicLeapHandTrackingGesture__Finger = 0,
	None                           = 1,
	EMagicLeapHandTrackingGesture__Fist = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapHandTrackingGesture__Pinch = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapHandTrackingGesture__Thumb = 6,
	ByteProperty                   = 7,
	EMagicLeapHandTrackingGesture__L = 8,
	teProperty‘IntProperty        = 9,
	EMagicLeapHandTrackingGesture__OpenHand = 10,
	Property‘IntProperty          = 11
};


// Enum MagicLeapHandTracking.EMagicLeapHandTrackingKeypoint
enum class EMagicLeapHandTrackingKeypoint : uint8_t
{
	EMagicLeapHandTrackingKeypoint__Thumb_Tip = 0,
	None                           = 1,
	EMagicLeapHandTrackingKeypoint__Thumb_IP = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapHandTrackingKeypoint__Thumb_MCP = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapHandTrackingKeypoint__Thumb_CMC = 6,
	ByteProperty                   = 7,
	EMagicLeapHandTrackingKeypoint__Index_Tip = 8,
	teProperty‘IntProperty        = 9,
	EMagicLeapHandTrackingKeypoint__Index_DIP = 10,
	Property‘IntProperty          = 11,
	EMagicLeapHandTrackingKeypoint__Index_PIP = 12,
	operty‘IntProperty            = 13,
	EMagicLeapHandTrackingKeypoint__Index_MCP = 14,
	erty‘IntProperty              = 15,
	EMagicLeapHandTrackingKeypoint__Middle_Tip = 16,
	ty‘IntProperty                = 17,
	EMagicLeapHandTrackingKeypoint__Middle_DIP = 18,
	[Error]                        = 19,
	EMagicLeapHandTrackingKeypoint__Middle_PIP = 20,
	IntProperty                    = 21,
	EMagicLeapHandTrackingKeypoint__Middle_MCP = 22,
	tProperty                      = 23,
	EMagicLeapHandTrackingKeypoint__Ring_Tip = 24,
	roperty                        = 25,
	EMagicLeapHandTrackingKeypoint__Ring_DIP = 26,
	perty                          = 27,
	EMagicLeapHandTrackingKeypoint__Ring_PIP = 28,
	rty                            = 29,
	EMagicLeapHandTrackingKeypoint__Ring_MCP = 30,
	y                              = 31,
	EMagicLeapHandTrackingKeypoint__Pinky_Tip = 32,
	
                              = 33,
	EMagicLeapHandTrackingKeypoint__Pinky_DIP = 34,
	BoolProperty                   = 35,
	EMagicLeapHandTrackingKeypoint__Pinky_PIP = 36,
	olPropertybFloatProperty      = 37,
	EMagicLeapHandTrackingKeypoint__Pinky_MCP = 38,
	PropertybFloatProperty        = 39,
	EMagicLeapHandTrackingKeypoint__Wrist_Center = 40,
	opertybFloatProperty          = 41,
	EMagicLeapHandTrackingKeypoint__Wrist_Ulnar = 42,
	ertybFloatProperty            = 43,
	EMagicLeapHandTrackingKeypoint__Wrist_Radial = 44,
	tybFloatProperty              = 45,
	EMagicLeapHandTrackingKeypoint__Hand_Center = 46,
	bFloatProperty                = 47,
	EMagicLeapHandTrackingKeypoint__EMagicLeapHandTrackingKeypoint_MAX = 48,
	FloatProperty                  = 49,
	None01                         = 50,
	None02                         = 51,
	None03                         = 52,
	None04                         = 53,
	None05                         = 54,
	None06                         = 55
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Enum MagicLeapController.EMagicLeapTouchpadGestureDirection
enum class EMagicLeapTouchpadGestureDirection : uint8_t
{
	EMagicLeapTouchpadGestureDirection__None = 0,
	None                           = 1,
	EMagicLeapTouchpadGestureDirection__Up = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapTouchpadGestureDirection__Down = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapTouchpadGestureDirection__Left = 6,
	ByteProperty                   = 7,
	EMagicLeapTouchpadGestureDirection__Right = 8,
	teProperty‘IntProperty        = 9
};


// Enum MagicLeapController.EMagicLeapTouchpadGestureType
enum class EMagicLeapTouchpadGestureType : uint8_t
{
	EMagicLeapTouchpadGestureType__None = 0,
	None                           = 1,
	EMagicLeapTouchpadGestureType__Tap = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapTouchpadGestureType__ForceTapDown = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapTouchpadGestureType__ForceTapUp = 6,
	ByteProperty                   = 7,
	EMagicLeapTouchpadGestureType__ForceDwell = 8,
	teProperty‘IntProperty        = 9,
	EMagicLeapTouchpadGestureType__SecondForceDown = 10,
	Property‘IntProperty          = 11
};


// Enum MagicLeapController.EMagicLeapControllerTrackingMode
enum class EMagicLeapControllerTrackingMode : uint8_t
{
	EMagicLeapControllerTrackingMode__InputService = 0,
	None                           = 1,
	EMagicLeapControllerTrackingMode__CoordinateFrameUID = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapControllerTrackingMode__EMagicLeapControllerTrackingMode_MAX = 4,
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


// Enum MagicLeapController.EMagicLeapControllerHapticIntensity
enum class EMagicLeapControllerHapticIntensity : uint8_t
{
	EMagicLeapControllerHapticIntensity__Low = 0,
	None                           = 1,
	EMagicLeapControllerHapticIntensity__Medium = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapControllerHapticIntensity__High = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapControllerHapticIntensity__EMagicLeapControllerHapticIntensity_MAX = 6,
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


// Enum MagicLeapController.EMagicLeapControllerHapticPattern
enum class EMagicLeapControllerHapticPattern : uint8_t
{
	EMagicLeapControllerHapticPattern__None = 0,
	None                           = 1,
	EMagicLeapControllerHapticPattern__Click = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapControllerHapticPattern__Bump = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapControllerHapticPattern__DoubleClick = 6,
	ByteProperty                   = 7,
	EMagicLeapControllerHapticPattern__Buzz = 8,
	teProperty‘IntProperty        = 9,
	EMagicLeapControllerHapticPattern__Tick = 10,
	Property‘IntProperty          = 11,
	EMagicLeapControllerHapticPattern__ForceDown = 12,
	operty‘IntProperty            = 13,
	EMagicLeapControllerHapticPattern__ForceUp = 14,
	erty‘IntProperty              = 15,
	EMagicLeapControllerHapticPattern__ForceDwell = 16,
	ty‘IntProperty                = 17,
	EMagicLeapControllerHapticPattern__SecondForceDown = 18,
	[Error]                        = 19,
	EMagicLeapControllerHapticPattern__EMagicLeapControllerHapticPattern_MAX = 20,
	IntProperty                    = 21,
	                               = 22,
	Editor                         = 23,
	EnumProperty                   = 24,
	Engine                         = 25,
	ty`InterfaceProperty          = 26,
	ertyàUInt32PropertyñUInt16PropertyBInt64Property = 27,
	ObjectPropertyÜUInt64PropertyàUInt32PropertyñUInt16PropertyBInt64Property = 28,
	rty                            = 29,
	PropertyÜUInt64PropertyàUInt32PropertyñUInt16PropertyBInt64Property = 30,
	ctProperty∏VectorProperty˙RotatorProperty = 31
};


// Enum MagicLeapController.EMagicLeapControllerLEDSpeed
enum class EMagicLeapControllerLEDSpeed : uint8_t
{
	EMagicLeapControllerLEDSpeed__Slow = 0,
	None                           = 1,
	EMagicLeapControllerLEDSpeed__Medium = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapControllerLEDSpeed__Fast = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapControllerLEDSpeed__EMagicLeapControllerLEDSpeed_MAX = 6,
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


// Enum MagicLeapController.EMagicLeapControllerLEDColor
enum class EMagicLeapControllerLEDColor : uint8_t
{
	EMagicLeapControllerLEDColor__BrightMissionRed = 0,
	None                           = 1,
	EMagicLeapControllerLEDColor__PastelMissionRed = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapControllerLEDColor__BrightFloridaOrange = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapControllerLEDColor__PastelFloridaOrange = 6,
	ByteProperty                   = 7,
	EMagicLeapControllerLEDColor__BrightLunaYellow = 8,
	teProperty‘IntProperty        = 9,
	EMagicLeapControllerLEDColor__PastelLunaYellow = 10,
	Property‘IntProperty          = 11,
	EMagicLeapControllerLEDColor__BrightNebulaPink = 12,
	operty‘IntProperty            = 13,
	EMagicLeapControllerLEDColor__PastelNebulaPink = 14,
	erty‘IntProperty              = 15,
	EMagicLeapControllerLEDColor__BrightCosmicPurple = 16,
	ty‘IntProperty                = 17,
	EMagicLeapControllerLEDColor__PastelCosmicPurple = 18,
	[Error]                        = 19,
	EMagicLeapControllerLEDColor__BrightMysticBlue = 20,
	IntProperty                    = 21,
	EMagicLeapControllerLEDColor__PastelMysticBlue = 22,
	tProperty                      = 23,
	EMagicLeapControllerLEDColor__BrightCelestialBlue = 24,
	roperty                        = 25,
	EMagicLeapControllerLEDColor__PastelCelestialBlue = 26,
	perty                          = 27,
	EMagicLeapControllerLEDColor__BrightShaggleGreen = 28,
	rty                            = 29,
	EMagicLeapControllerLEDColor__PastelShaggleGreen = 30,
	y                              = 31,
	EMagicLeapControllerLEDColor__EMagicLeapControllerLEDColor_MAX = 32,
	
                              = 33,
	None01                         = 34,
	None02                         = 35,
	None03                         = 36,
	None04                         = 37,
	None05                         = 38,
	None06                         = 39
};


// Enum MagicLeapController.EMagicLeapControllerLEDEffect
enum class EMagicLeapControllerLEDEffect : uint8_t
{
	EMagicLeapControllerLEDEffect__RotateCW = 0,
	None                           = 1,
	EMagicLeapControllerLEDEffect__RotateCCW = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapControllerLEDEffect__Pulse = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapControllerLEDEffect__PaintCW = 6,
	ByteProperty                   = 7,
	EMagicLeapControllerLEDEffect__PaintCCW = 8,
	teProperty‘IntProperty        = 9,
	EMagicLeapControllerLEDEffect__Blink = 10,
	Property‘IntProperty          = 11,
	EMagicLeapControllerLEDEffect__EMagicLeapControllerLEDEffect_MAX = 12,
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


// Enum MagicLeapController.EMagicLeapControllerLEDPattern
enum class EMagicLeapControllerLEDPattern : uint8_t
{
	EMagicLeapControllerLEDPattern__None = 0,
	None                           = 1,
	EMagicLeapControllerLEDPattern__Clock01 = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapControllerLEDPattern__Clock02 = 4,
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


// Enum MagicLeapController.EMagicLeapControllerType
enum class EMagicLeapControllerType : uint8_t
{
	EMagicLeapControllerType__None = 0,
	None                           = 1,
	EMagicLeapControllerType__Device = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapControllerType__MobileApp = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapControllerType__EMagicLeapControllerType_MAX = 6,
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

// ScriptStruct MagicLeapController.MagicLeapTouchpadGesture
// 0x0030
struct FMagicLeapTouchpadGesture
{
	EControllerHand                                    Hand;                                                     // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       MotionSource;                                             // 0x0004(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EMagicLeapTouchpadGestureType                      Type;                                                     // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EMagicLeapTouchpadGestureDirection                 Direction;                                                // 0x000D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	struct FVector                                     PositionAndForce;                                         // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FingerGap;                                                // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

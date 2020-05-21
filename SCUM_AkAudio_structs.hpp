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

// Enum AkAudio.EAkCallbackType
enum class EAkCallbackType : uint8_t
{
	EAkCallbackType__EndOfEvent    = 0,
	None                           = 1,
	EAkCallbackType__Marker        = 2,
	ByteProperty‘IntProperty    = 3,
	EAkCallbackType__Duration      = 4,
	ByteProperty                   = 5,
	EAkCallbackType__Starvation    = 6,
	Property‘IntProperty          = 7,
	EAkCallbackType__MusicPlayStarted = 8,
	erty‘IntProperty              = 9,
	EAkCallbackType__MusicSyncBeat = 10,
	ty‘IntProperty                = 11,
	EAkCallbackType__MusicSyncBar  = 12,
	[Error]                        = 13
};


// Enum AkAudio.EAkResult
enum class EAkResult : uint8_t
{
	EAkResult__NotImplemented      = 0,
	None                           = 1,
	EAkResult__Success             = 2,
	neByteProperty‘IntProperty  = 3,
	EAkResult__Fail                = 4,
	ByteProperty‘IntProperty    = 5,
	EAkResult__PartialSuccess      = 6,
	ByteProperty                   = 7,
	EAkResult__NotCompatible       = 8,
	teProperty‘IntProperty        = 9,
	EAkResult__AlreadyConnected    = 10,
	Property‘IntProperty          = 11,
	EAkResult__NameNotSet          = 12,
	operty‘IntProperty            = 13,
	EAkResult__InvalidFile         = 14,
	erty‘IntProperty              = 15,
	EAkResult__AudioFileHeaderTooLarge = 16,
	ty‘IntProperty                = 17,
	EAkResult__MaxReached          = 18,
	[Error]                        = 19,
	EAkResult__InputsInUsed        = 20,
	IntProperty                    = 21,
	EAkResult__OutputsInUsed       = 22,
	tProperty                      = 23,
	EAkResult__InvalidName         = 24,
	roperty                        = 25,
	EAkResult__NameAlreadyInUse    = 26,
	perty                          = 27,
	EAkResult__InvalidID           = 28,
	rty                            = 29,
	EAkResult__IDNotFound          = 30,
	y                              = 31,
	EAkResult__InvalidInstanceID   = 32,
	
                              = 33,
	EAkResult__NoMoreData          = 34,
	BoolProperty                   = 35,
	EAkResult__NoSourceAvailable   = 36,
	olPropertybFloatProperty      = 37,
	EAkResult__StateGroupAlreadyExists = 38,
	PropertybFloatProperty        = 39,
	EAkResult__InvalidStateGroup   = 40,
	opertybFloatProperty          = 41,
	EAkResult__ChildAlreadyHasAParent = 42,
	ertybFloatProperty            = 43,
	EAkResult__InvalidLanguage     = 44,
	tybFloatProperty              = 45,
	EAkResult__CannotAddItseflAsAChild = 46,
	bFloatProperty                = 47,
	EAkResult__Reserved1           = 48,
	FloatProperty                  = 49,
	EAkResult__Reserved2           = 50,
	oatProperty                    = 51,
	EAkResult__Reserved3           = 52,
	tProperty01                    = 53,
	EAkResult__Reserved4           = 54,
	roperty01                      = 55,
	EAkResult__Reserved5           = 56,
	perty01                        = 57,
	EAkResult__UserNotInList       = 58,
	rty01                          = 59,
	EAkResult__NoTransitionPoint   = 60,
	y01                            = 61,
	EAkResult__InvalidParameter    = 62,
	[Error]01                      = 63,
	EAkResult__ParameterAdjusted   = 64,
	ObjectProperty                 = 65,
	EAkResult__IsA3DSound          = 66,
	jectPropertyNameProperty     = 67,
	EAkResult__NotA3DSound         = 68,
	ctPropertyNameProperty       = 69,
	EAkResult__ElementAlreadyInList = 70,
	PropertyNameProperty         = 71,
	EAkResult__PathNotFound        = 72,
	opertyNameProperty           = 73,
	EAkResult__PathNoVertices      = 74,
	ertyNameProperty             = 75,
	EAkResult__PathNotRunning      = 76,
	tyNameProperty               = 77,
	EAkResult__PathNotPaused       = 78,
	NameProperty                 = 79,
	EAkResult__PathNodeAlreadyInList = 80,
	NameProperty                   = 81,
	EAkResult__PathNodeNotInList   = 82,
	meProperty                     = 83,
	EAkResult__VoiceNotFound       = 84,
	Property                       = 85,
	EAkResult__DataNeeded          = 86,
	operty                         = 87,
	EAkResult__NoDataNeeded        = 88,
	erty                           = 89,
	EAkResult__DataReady           = 90,
	ty                             = 91,
	EAkResult__NoDataReady         = 92,
	                               = 93,
	EAkResult__NoMoreSlotAvailable = 94,
	DelegateProperty               = 95,
	EAkResult__SlotNotFound        = 96,
	legatePropertyòDoublePropertyfArrayProperty = 97,
	EAkResult__ProcessingOnly      = 98,
	gatePropertyòDoublePropertyfArrayProperty = 99,
	EAkResult__MemoryLeak          = 100,
	tePropertyòDoublePropertyfArrayProperty = 101
};


// Enum AkAudio.EReflectionFilterBits
enum class EReflectionFilterBits : uint8_t
{
	EReflectionFilterBits__Wall    = 0,
	None                           = 1,
	EReflectionFilterBits__Ceiling = 2,
	neByteProperty‘IntProperty  = 3,
	EReflectionFilterBits__Floor   = 4,
	ByteProperty‘IntProperty    = 5,
	EReflectionFilterBits__EReflectionFilterBits_MAX = 6,
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
	IntProperty                    = 23
};


// Enum AkAudio.EAkMidiCcValues
enum class EAkMidiCcValues : uint8_t
{
	EAkMidiCcValues__AkMidiCcNone  = 0,
	None                           = 1,
	EAkMidiCcValues__AkMidiCcBankSelectCoarse = 2,
	None01                         = 3,
	EAkMidiCcValues__AkMidiCcModWheelCoarse = 4,
	neByteProperty‘IntProperty  = 5,
	EAkMidiCcValues__AkMidiCcBreathCtrlCoarse = 6,
	ByteProperty‘IntProperty    = 7,
	EAkMidiCcValues__AkMidiCcCtrl3Coarse = 8,
	ByteProperty                   = 9,
	EAkMidiCcValues__AkMidiCcFootPedalCoarse = 10,
	teProperty‘IntProperty        = 11,
	EAkMidiCcValues__AkMidiCcPortamentoCoarse = 12,
	Property‘IntProperty          = 13,
	EAkMidiCcValues__AkMidiCcDataEntryCoarse = 14,
	operty‘IntProperty            = 15,
	EAkMidiCcValues__AkMidiCcVolumeCoarse = 16,
	erty‘IntProperty              = 17,
	EAkMidiCcValues__AkMidiCcBalanceCoarse = 18,
	ty‘IntProperty                = 19,
	EAkMidiCcValues__AkMidiCcCtrl9Coarse = 20,
	[Error]                        = 21,
	EAkMidiCcValues__AkMidiCcPanPositionCoarse = 22,
	IntProperty                    = 23,
	EAkMidiCcValues__AkMidiCcExpressionCoarse = 24,
	tProperty                      = 25,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Coarse = 26,
	roperty                        = 27,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Coarse = 28,
	perty                          = 29,
	EAkMidiCcValues__AkMidiCcCtrl14Coarse = 30,
	rty                            = 31,
	EAkMidiCcValues__AkMidiCcCtrl15Coarse = 32,
	y                              = 33,
	EAkMidiCcValues__AkMidiCcGenSlider1 = 34,
	
                              = 35,
	EAkMidiCcValues__AkMidiCcGenSlider2 = 36,
	BoolProperty                   = 37,
	EAkMidiCcValues__AkMidiCcGenSlider3 = 38,
	olPropertybFloatProperty      = 39,
	EAkMidiCcValues__AkMidiCcGenSlider4 = 40,
	PropertybFloatProperty        = 41,
	EAkMidiCcValues__AkMidiCcCtrl20Coarse = 42,
	opertybFloatProperty          = 43,
	EAkMidiCcValues__AkMidiCcCtrl21Coarse = 44,
	ertybFloatProperty            = 45,
	EAkMidiCcValues__AkMidiCcCtrl22Coarse = 46,
	tybFloatProperty              = 47,
	EAkMidiCcValues__AkMidiCcCtrl23Coarse = 48,
	bFloatProperty                = 49,
	EAkMidiCcValues__AkMidiCcCtrl24Coarse = 50,
	FloatProperty                  = 51,
	EAkMidiCcValues__AkMidiCcCtrl25Coarse = 52,
	oatProperty                    = 53,
	EAkMidiCcValues__AkMidiCcCtrl26Coarse = 54,
	tProperty01                    = 55,
	EAkMidiCcValues__AkMidiCcCtrl27Coarse = 56,
	roperty01                      = 57,
	EAkMidiCcValues__AkMidiCcCtrl28Coarse = 58,
	perty01                        = 59,
	EAkMidiCcValues__AkMidiCcCtrl29Coarse = 60,
	rty01                          = 61,
	EAkMidiCcValues__AkMidiCcCtrl30Coarse = 62,
	y01                            = 63,
	EAkMidiCcValues__AkMidiCcCtrl31Coarse = 64,
	[Error]01                      = 65,
	EAkMidiCcValues__AkMidiCcBankSelectFine = 66,
	ObjectProperty                 = 67,
	EAkMidiCcValues__AkMidiCcModWheelFine = 68,
	jectPropertyNameProperty     = 69,
	EAkMidiCcValues__AkMidiCcBreathCtrlFine = 70,
	ctPropertyNameProperty       = 71,
	EAkMidiCcValues__AkMidiCcCtrl3Fine = 72,
	PropertyNameProperty         = 73,
	EAkMidiCcValues__AkMidiCcFootPedalFine = 74,
	opertyNameProperty           = 75,
	EAkMidiCcValues__AkMidiCcPortamentoFine = 76,
	ertyNameProperty             = 77,
	EAkMidiCcValues__AkMidiCcDataEntryFine = 78,
	tyNameProperty               = 79,
	EAkMidiCcValues__AkMidiCcVolumeFine = 80,
	NameProperty                 = 81,
	EAkMidiCcValues__AkMidiCcBalanceFine = 82,
	NameProperty                   = 83,
	EAkMidiCcValues__AkMidiCcCtrl9Fine = 84,
	meProperty                     = 85,
	EAkMidiCcValues__AkMidiCcPanPositionFine = 86,
	Property                       = 87,
	EAkMidiCcValues__AkMidiCcExpressionFine = 88,
	operty                         = 89,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Fine = 90,
	erty                           = 91,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Fine = 92,
	ty                             = 93,
	EAkMidiCcValues__AkMidiCcCtrl14Fine = 94,
	                               = 95,
	EAkMidiCcValues__AkMidiCcCtrl15Fine = 96,
	DelegateProperty               = 97,
	EAkMidiCcValues__AkMidiCcCtrl20Fine = 98,
	opertyòDoublePropertyfArrayProperty = 99,
	EAkMidiCcValues__AkMidiCcCtrl21Fine = 100,
	ertyòDoublePropertyfArrayProperty = 101
};


// Enum AkAudio.EAkMidiEventType
enum class EAkMidiEventType : uint8_t
{
	EAkMidiEventType__AkMidiEventTypeNone = 0,
	None                           = 1,
	EAkMidiEventType__AkMidiEventTypeInvalid = 2,
	None01                         = 3,
	EAkMidiEventType__AkMidiEventTypeNoteOff = 4,
	ateProperty                    = 5,
	EAkMidiEventType__AkMidiEventTypeNoteOn = 6,
	[Error]                        = 7,
	EAkMidiEventType__AkMidiEventTypeNoteAftertouch = 8,
	ertyàUInt32PropertyñUInt16PropertyBInt64Property = 9,
	EAkMidiEventType__AkMidiEventTypeController = 10,
	ertyBInt64Property            = 11,
	EAkMidiEventType__AkMidiEventTypeProgramChange = 12,
	rty                            = 13,
	EAkMidiEventType__AkMidiEventTypeChannelAftertouch = 14,
	[Error]01                      = 15,
	EAkMidiEventType__AkMidiEventTypePitchBend = 16,
	itor»CoreUObject              = 17,
	EAkMidiEventType__AkMidiEventTypeSysex = 18,
	_CylinderÿBoxSphereBounds    = 19,
	EAkMidiEventType__AkMidiEventTypeEscape = 20,
	xSphereBounds                  = 21,
	EAkMidiEventType__AkMidiEventTypeMeta = 22,
	Sphere                         = 23,
	EAkMidiEventType__EAkMidiEventType_MAX = 24,
	hereÊ                          = 25,
	erty‘IntProperty              = 26,
	EMPMatchOutcome__None          = 27,
	None02                         = 28,
	None03                         = 29,
	EMPMatchOutcome__Quit          = 30,
	None04                         = 31,
	None05                         = 32,
	EMPMatchOutcome__Won           = 33,
	None06                         = 34,
	None07                         = 35
};


// Enum AkAudio.EAkCurveInterpolation
enum class EAkCurveInterpolation : uint8_t
{
	EAkCurveInterpolation__Log3    = 0,
	None                           = 1,
	EAkCurveInterpolation__Sine    = 2,
	neByteProperty‘IntProperty  = 3,
	EAkCurveInterpolation__Log1    = 4,
	ByteProperty‘IntProperty    = 5,
	EAkCurveInterpolation__InvSCurve = 6,
	ByteProperty                   = 7,
	EAkCurveInterpolation__Linear  = 8,
	teProperty‘IntProperty        = 9,
	EAkCurveInterpolation__SCurve  = 10,
	Property‘IntProperty          = 11
};


// Enum AkAudio.AkActionOnEventType
enum class EAkActionOnEventType : uint8_t
{
	AkActionOnEventType__Stop      = 0,
	None                           = 1,
	AkActionOnEventType__Pause     = 2,
	neByteProperty‘IntProperty  = 3,
	AkActionOnEventType__Resume    = 4,
	ByteProperty‘IntProperty    = 5,
	AkActionOnEventType__Break     = 6,
	ByteProperty                   = 7,
	AkActionOnEventType__ReleaseEnvelope = 8,
	teProperty‘IntProperty        = 9,
	AkActionOnEventType__AkActionOnEventType_MAX = 10,
	Property‘IntProperty          = 11,
	None01                         = 12,
	None02                         = 13,
	None03                         = 14,
	ByteProperty01                 = 15,
	None04                         = 16,
	None05                         = 17,
	None06                         = 18,
	None07                         = 19,
	None08                         = 20,
	neByteProperty‘IntProperty01 = 21,
	None09                         = 22,
	None10                         = 23
};


// Enum AkAudio.AkMultiPositionType
enum class EAkMultiPositionType : uint8_t
{
	AkMultiPositionType__SingleSource = 0,
	None                           = 1,
	AkMultiPositionType__MultiSources = 2,
	neByteProperty‘IntProperty  = 3,
	AkMultiPositionType__MultiDirections = 4,
	ByteProperty‘IntProperty    = 5,
	AkMultiPositionType__AkMultiPositionType_MAX = 6,
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


// Enum AkAudio.AkChannelConfiguration
enum class EAkChannelConfiguration : uint8_t
{
	AkChannelConfiguration__Ak_Parent = 0,
	None                           = 1,
	AkChannelConfiguration__Ak_LFE = 2,
	neByteProperty‘IntProperty  = 3,
	AkChannelConfiguration__Ak_1   = 4,
	ByteProperty‘IntProperty    = 5,
	AkChannelConfiguration__Ak_2   = 6,
	ByteProperty                   = 7,
	AkChannelConfiguration__Ak_201 = 8,
	teProperty‘IntProperty        = 9,
	AkChannelConfiguration__Ak_3   = 10,
	Property‘IntProperty          = 11,
	AkChannelConfiguration__Ak_301 = 12,
	operty‘IntProperty            = 13,
	AkChannelConfiguration__Ak_4   = 14,
	erty‘IntProperty              = 15,
	AkChannelConfiguration__Ak_401 = 16,
	ty‘IntProperty                = 17,
	AkChannelConfiguration__Ak_5   = 18,
	[Error]                        = 19,
	AkChannelConfiguration__Ak_501 = 20,
	IntProperty                    = 21,
	AkChannelConfiguration__Ak_7   = 22,
	tProperty                      = 23
};


// Enum AkAudio.AkAcousticPortalState
enum class EAkAcousticPortalState : uint8_t
{
	AkAcousticPortalState__Closed  = 0,
	None                           = 1,
	AkAcousticPortalState__Open    = 2,
	neByteProperty‘IntProperty  = 3,
	AkAcousticPortalState__AkAcousticPortalState_MAX = 4,
	ByteProperty‘IntProperty    = 5,
	None01                         = 6,
	_5_D1VT_Stain_05_D1           = 7,
	e_C                            = 8,
	None02                         = 9,
	None03                         = 10,
	_Table_1_BaseColorfT_Steel_Table_1_BaseColor = 11,
	None04                         = 12,
	_0B541FFD9BC0E87A352A626       = 13,
	None05                         = 14,
	Steel_Table_1_BaseColor        = 15,
	None06                         = 16,
	_2                             = 17,
	None07                         = 18,
	None08                         = 19
};


// Enum AkAudio.PanningRule
enum class EPanningRule : uint8_t
{
	PanningRule__PanningRule_Speakers = 0,
	None                           = 1,
	PanningRule__PanningRule_Headphones = 2,
	neByteProperty‘IntProperty  = 3,
	PanningRule__PanningRule_MAX   = 4,
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

// ScriptStruct AkAudio.AkBoolPropertyToControl
// 0x0010
struct FAkBoolPropertyToControl
{
	struct FString                                     ItemProperty;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkWwiseObjectDetails
// 0x0030
struct FAkWwiseObjectDetails
{
	struct FString                                     ItemName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     ItemPath;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     ItemId;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkWwiseItemToControl
// 0x0040
struct FAkWwiseItemToControl
{
	struct FAkWwiseObjectDetails                       ItemPicked;                                               // 0x0000(0x0030) (Edit, EditConst)
	struct FString                                     ItemPath;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkSegmentInfo
// 0x0024
struct FAkSegmentInfo
{
	int                                                CurrentPosition;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PreEntryDuration;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ActiveDuration;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PostExitDuration;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RemainingLookAheadTime;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BeatDuration;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BarDuration;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GridDuration;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GridOffset;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkPropertyToControl
// 0x0010
struct FAkPropertyToControl
{
	struct FString                                     ItemProperty;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkPoly
// 0x0010
struct FAkPoly
{
	class UAkAcousticTexture*                          Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableSurface;                                            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AkAudio.AkAudioEventTrackKey
// 0x0020
struct FAkAudioEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
// 0x0014
struct FMovieSceneTangentDataSerializationHelper
{
	float                                              ArriveTangent;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangent;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ArriveTangentWeight;                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangentWeight;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
// 0x001C
struct FMovieSceneFloatValueSerializationHelper
{
	float                                              Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                              // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FMovieSceneTangentDataSerializationHelper   Tangent;                                                  // 0x0008(0x0014)
};

// ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
// 0x0030
struct FMovieSceneFloatChannelSerializationHelper
{
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                       // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<int>                                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneFloatValueSerializationHelper> Values;                                                   // 0x0018(0x0010) (ZeroConstructor)
	float                                              DefaultValue;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasDefaultValue;                                         // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct AkAudio.AKWaapiJsonObject
// 0x0010
struct FAKWaapiJsonObject
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AkAudio.AkWaapiSubscriptionId
// 0x0008
struct FAkWaapiSubscriptionId
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AkAudio.AkAmbSoundCheckpointRecord
// 0x0001
struct FAkAmbSoundCheckpointRecord
{
	bool                                               bCurrentlyPlaying;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiEventBase
// 0x0002
struct FAkMidiEventBase
{
	EAkMidiEventType                                   Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Chan;                                                     // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiProgramChange
// 0x0001 (0x0003 - 0x0002)
struct FAkMidiProgramChange : public FAkMidiEventBase
{
	unsigned char                                      ProgramNum;                                               // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiChannelAftertouch
// 0x0001 (0x0003 - 0x0002)
struct FAkMidiChannelAftertouch : public FAkMidiEventBase
{
	unsigned char                                      Value;                                                    // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiNoteAftertouch
// 0x0002 (0x0004 - 0x0002)
struct FAkMidiNoteAftertouch : public FAkMidiEventBase
{
	unsigned char                                      Note;                                                     // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Value;                                                    // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiPitchBend
// 0x0006 (0x0008 - 0x0002)
struct FAkMidiPitchBend : public FAkMidiEventBase
{
	unsigned char                                      ValueLsb;                                                 // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ValueMsb;                                                 // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FullValue;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiCc
// 0x0002 (0x0004 - 0x0002)
struct FAkMidiCc : public FAkMidiEventBase
{
	EAkMidiCcValues                                    Cc;                                                       // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Value;                                                    // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiNoteOnOff
// 0x0002 (0x0004 - 0x0002)
struct FAkMidiNoteOnOff : public FAkMidiEventBase
{
	unsigned char                                      Note;                                                     // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Velocity;                                                 // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkMidiGeneric
// 0x0002 (0x0004 - 0x0002)
struct FAkMidiGeneric : public FAkMidiEventBase
{
	unsigned char                                      Param1;                                                   // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Param2;                                                   // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.AkWaapiFieldNames
// 0x0010
struct FAkWaapiFieldNames
{
	struct FString                                     FieldName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkWaapiUri
// 0x0010
struct FAkWaapiUri
{
	struct FString                                     Uri;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
// 0x0008 (0x0028 - 0x0020)
struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioEventSection*              Section;                                                  // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
// 0x0008 (0x0028 - 0x0020)
struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioRTPCSection*               Section;                                                  // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

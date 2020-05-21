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

// Enum InputCore.ETouchIndex
enum class ETouchIndex : uint8_t
{
	ETouchIndex__Touch1            = 0,
	None                           = 1,
	ETouchIndex__Touch2            = 2,
	neByteProperty‘IntProperty  = 3,
	ETouchIndex__Touch3            = 4,
	ByteProperty‘IntProperty    = 5,
	ETouchIndex__Touch4            = 6,
	ByteProperty                   = 7,
	ETouchIndex__Touch5            = 8,
	teProperty‘IntProperty        = 9,
	ETouchIndex__Touch6            = 10,
	Property‘IntProperty          = 11,
	ETouchIndex__Touch7            = 12,
	operty‘IntProperty            = 13,
	ETouchIndex__Touch8            = 14,
	erty‘IntProperty              = 15,
	ETouchIndex__Touch9            = 16,
	ty‘IntProperty                = 17,
	ETouchIndex__Touch10           = 18,
	[Error]                        = 19,
	ETouchIndex__CursorPointerIndex = 20,
	IntProperty                    = 21,
	ETouchIndex__MAX_TOUCHES       = 22,
	tProperty                      = 23,
	ETouchIndex__ETouchIndex_MAX   = 24,
	roperty                        = 25,
	None01                         = 26,
	None02                         = 27,
	None03                         = 28,
	None04                         = 29,
	None05                         = 30,
	None06                         = 31,
	None07                         = 32,
	Node_SequenceEvaluator_D7B6FD49463D1AB19A1477A28F23302A = 33,
	k_Disposable_Mask_C            = 34,
	None08                         = 35
};


// Enum InputCore.EControllerHand
enum class EControllerHand : uint8_t
{
	EControllerHand__Left          = 0,
	None                           = 1,
	EControllerHand__Right         = 2,
	neByteProperty‘IntProperty  = 3,
	EControllerHand__AnyHand       = 4,
	ByteProperty‘IntProperty    = 5,
	EControllerHand__Pad           = 6,
	ByteProperty                   = 7,
	EControllerHand__ExternalCamera = 8,
	teProperty‘IntProperty        = 9,
	EControllerHand__Gun           = 10,
	Property‘IntProperty          = 11,
	EControllerHand__Special       = 12,
	operty‘IntProperty            = 13,
	EControllerHand__Special01     = 14,
	erty‘IntProperty              = 15,
	EControllerHand__Special02     = 16,
	ty‘IntProperty                = 17,
	EControllerHand__Special03     = 18,
	[Error]                        = 19,
	EControllerHand__Special04     = 20,
	IntProperty                    = 21,
	EControllerHand__Special05     = 22,
	tProperty                      = 23,
	EControllerHand__Special06     = 24,
	roperty                        = 25,
	EControllerHand__Special07     = 26,
	perty                          = 27,
	EControllerHand__Special08     = 28,
	rty                            = 29,
	EControllerHand__Special09     = 30,
	y                              = 31,
	EControllerHand__Special10     = 32,
	
                              = 33,
	EControllerHand__ControllerHand_Count = 34,
	BoolProperty                   = 35,
	EControllerHand__EControllerHand_MAX = 36,
	olPropertybFloatProperty      = 37,
	None01                         = 38,
	None02                         = 39,
	None03                         = 40,
	None04                         = 41,
	None05                         = 42,
	neByteProperty‘IntProperty01 = 43
};


// Enum InputCore.ETouchType
enum class ETouchType : uint8_t
{
	ETouchType__Began              = 0,
	None                           = 1,
	ETouchType__Moved              = 2,
	neByteProperty‘IntProperty  = 3,
	ETouchType__Stationary         = 4,
	ByteProperty‘IntProperty    = 5,
	ETouchType__ForceChanged       = 6,
	ByteProperty                   = 7,
	ETouchType__FirstMove          = 8,
	teProperty‘IntProperty        = 9,
	ETouchType__Ended              = 10,
	Property‘IntProperty          = 11,
	ETouchType__NumTypes           = 12,
	operty‘IntProperty            = 13,
	ETouchType__ETouchType_MAX     = 14,
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


// Enum InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8_t
{
	EConsoleForGamepadLabels__None = 0,
	None                           = 1,
	EConsoleForGamepadLabels__XBoxOne = 2,
	neByteProperty‘IntProperty  = 3,
	EConsoleForGamepadLabels__PS4  = 4,
	ByteProperty‘IntProperty    = 5,
	EConsoleForGamepadLabels__EConsoleForGamepadLabels_MAX = 6,
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

// ScriptStruct InputCore.Key
// 0x0018
struct FKey
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Enum MagicLeapARPin.EMagicLeapAutoPinType
enum class EMagicLeapAutoPinType : uint8_t
{
	EMagicLeapAutoPinType__OnlyOnDataRestoration = 0,
	None                           = 1,
	EMagicLeapAutoPinType__Always  = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapAutoPinType__Never   = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapAutoPinType__EMagicLeapAutoPinType_MAX = 6,
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


// Enum MagicLeapARPin.EMagicLeapPassableWorldError
enum class EMagicLeapPassableWorldError : uint8_t
{
	EMagicLeapPassableWorldError__None = 0,
	None                           = 1,
	EMagicLeapPassableWorldError__LowMapQuality = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapPassableWorldError__UnableToLocalize = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapPassableWorldError__Unavailable = 6,
	ByteProperty                   = 7,
	EMagicLeapPassableWorldError__PrivilegeDenied = 8,
	teProperty‘IntProperty        = 9,
	EMagicLeapPassableWorldError__InvalidParam = 10,
	Property‘IntProperty          = 11,
	EMagicLeapPassableWorldError__UnspecifiedFailure = 12,
	operty‘IntProperty            = 13,
	EMagicLeapPassableWorldError__PrivilegeRequestPending = 14,
	erty‘IntProperty              = 15,
	EMagicLeapPassableWorldError__EMagicLeapPassableWorldError_MAX = 16,
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



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

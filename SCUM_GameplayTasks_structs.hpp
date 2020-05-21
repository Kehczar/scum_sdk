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

// Enum GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8_t
{
	ETaskResourceOverlapPolicy__StartOnTop = 0,
	None                           = 1,
	ETaskResourceOverlapPolicy__StartAtEnd = 2,
	neByteProperty‘IntProperty  = 3,
	ETaskResourceOverlapPolicy__ETaskResourceOverlapPolicy_MAX = 4,
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


// Enum GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8_t
{
	EGameplayTaskState__Uninitialized = 0,
	None                           = 1,
	EGameplayTaskState__AwaitingActivation = 2,
	neByteProperty‘IntProperty  = 3,
	EGameplayTaskState__Paused     = 4,
	ByteProperty‘IntProperty    = 5,
	EGameplayTaskState__Active     = 6,
	ByteProperty                   = 7,
	EGameplayTaskState__Finished   = 8,
	teProperty‘IntProperty        = 9,
	EGameplayTaskState__EGameplayTaskState_MAX = 10,
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


// Enum GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8_t
{
	EGameplayTaskRunResult__Error  = 0,
	None                           = 1,
	EGameplayTaskRunResult__Failed = 2,
	neByteProperty‘IntProperty  = 3,
	EGameplayTaskRunResult__Success_Paused = 4,
	ByteProperty‘IntProperty    = 5,
	EGameplayTaskRunResult__Success_Active = 6,
	ByteProperty                   = 7,
	EGameplayTaskRunResult__Success_Finished = 8,
	teProperty‘IntProperty        = 9,
	EGameplayTaskRunResult__EGameplayTaskRunResult_MAX = 10,
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



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayTasks.GameplayResourceSet
// 0x0002
struct FGameplayResourceSet
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

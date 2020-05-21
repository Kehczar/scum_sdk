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

// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t
{
	EBeaconConnectionState__Invalid = 0,
	None                           = 1,
	EBeaconConnectionState__Closed = 2,
	neByteProperty‘IntProperty  = 3,
	EBeaconConnectionState__Pending = 4,
	ByteProperty‘IntProperty    = 5,
	EBeaconConnectionState__Open   = 6,
	ByteProperty                   = 7,
	EBeaconConnectionState__EBeaconConnectionState_MAX = 8,
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


// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t
{
	EClientRequestType__NonePending = 0,
	None                           = 1,
	EClientRequestType__ExistingSessionReservation = 2,
	neByteProperty‘IntProperty  = 3,
	EClientRequestType__ReservationUpdate = 4,
	ByteProperty‘IntProperty    = 5,
	EClientRequestType__EmptyServerReservation = 6,
	ByteProperty                   = 7,
	EClientRequestType__Reconnect  = 8,
	teProperty‘IntProperty        = 9,
	EClientRequestType__Abandon    = 10,
	Property‘IntProperty          = 11,
	EClientRequestType__ReservationRemoveMembers = 12,
	operty‘IntProperty            = 13,
	EClientRequestType__EClientRequestType_MAX = 14,
	erty‘IntProperty              = 15,
	None01                         = 16,
	None02                         = 17,
	None03                         = 18,
	None04                         = 19,
	None05                         = 20,
	None06                         = 21,
	None07                         = 22,
	tain_05_D1VT_Stain_05_D1      = 23,
	None08                         = 24,
	None09                         = 25,
	None10                         = 26,
	None11                         = 27
};


// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	EPartyReservationResult__NoResult = 0,
	None                           = 1,
	EPartyReservationResult__RequestPending = 2,
	neByteProperty‘IntProperty  = 3,
	EPartyReservationResult__GeneralError = 4,
	ByteProperty‘IntProperty    = 5,
	EPartyReservationResult__PartyLimitReached = 6,
	ByteProperty                   = 7,
	EPartyReservationResult__IncorrectPlayerCount = 8,
	teProperty‘IntProperty        = 9,
	EPartyReservationResult__RequestTimedOut = 10,
	Property‘IntProperty          = 11,
	EPartyReservationResult__ReservationDuplicate = 12,
	operty‘IntProperty            = 13,
	EPartyReservationResult__ReservationNotFound = 14,
	erty‘IntProperty              = 15,
	EPartyReservationResult__ReservationAccepted = 16,
	ty‘IntProperty                = 17,
	EPartyReservationResult__ReservationDenied = 18,
	[Error]                        = 19,
	EPartyReservationResult__ReservationDenied_CrossPlayRestriction = 20,
	IntProperty                    = 21,
	EPartyReservationResult__ReservationDenied_Banned = 22,
	tProperty                      = 23,
	EPartyReservationResult__ReservationRequestCanceled = 24,
	roperty                        = 25,
	EPartyReservationResult__ReservationInvalid = 26,
	perty                          = 27,
	EPartyReservationResult__BadSessionId = 28,
	rty                            = 29,
	EPartyReservationResult__ReservationDenied_ContainsExistingPlayers = 30,
	y                              = 31,
	EPartyReservationResult__EPartyReservationResult_MAX = 32,
	
                              = 33,
	None01                         = 34,
	None02                         = 35,
	None03                         = 36,
	None04                         = 37,
	None05                         = 38,
	None06                         = 39
};


// Enum OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8_t
{
	ESpectatorClientRequestType__NonePending = 0,
	None                           = 1,
	ESpectatorClientRequestType__ExistingSessionReservation = 2,
	neByteProperty‘IntProperty  = 3,
	ESpectatorClientRequestType__ReservationUpdate = 4,
	ByteProperty‘IntProperty    = 5,
	ESpectatorClientRequestType__EmptyServerReservation = 6,
	ByteProperty                   = 7,
	ESpectatorClientRequestType__Reconnect = 8,
	teProperty‘IntProperty        = 9,
	ESpectatorClientRequestType__Abandon = 10,
	Property‘IntProperty          = 11,
	ESpectatorClientRequestType__ESpectatorClientRequestType_MAX = 12,
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


// Enum OnlineSubsystemUtils.ESpectatorReservationResult
enum class ESpectatorReservationResult : uint8_t
{
	ESpectatorReservationResult__NoResult = 0,
	None                           = 1,
	ESpectatorReservationResult__RequestPending = 2,
	neByteProperty‘IntProperty  = 3,
	ESpectatorReservationResult__GeneralError = 4,
	ByteProperty‘IntProperty    = 5,
	ESpectatorReservationResult__SpectatorLimitReached = 6,
	ByteProperty                   = 7,
	ESpectatorReservationResult__IncorrectPlayerCount = 8,
	teProperty‘IntProperty        = 9,
	ESpectatorReservationResult__RequestTimedOut = 10,
	Property‘IntProperty          = 11,
	ESpectatorReservationResult__ReservationDuplicate = 12,
	operty‘IntProperty            = 13,
	ESpectatorReservationResult__ReservationNotFound = 14,
	erty‘IntProperty              = 15,
	ESpectatorReservationResult__ReservationAccepted = 16,
	ty‘IntProperty                = 17,
	ESpectatorReservationResult__ReservationDenied = 18,
	[Error]                        = 19,
	ESpectatorReservationResult__ReservationDenied_CrossPlayRestriction = 20,
	IntProperty                    = 21,
	ESpectatorReservationResult__ReservationDenied_Banned = 22,
	tProperty                      = 23,
	ESpectatorReservationResult__ReservationRequestCanceled = 24,
	roperty                        = 25,
	ESpectatorReservationResult__ReservationInvalid = 26,
	perty                          = 27,
	ESpectatorReservationResult__BadSessionId = 28,
	rty                            = 29,
	ESpectatorReservationResult__ReservationDenied_ContainsExistingPlayers = 30,
	y                              = 31,
	ESpectatorReservationResult__ESpectatorReservationResult_MAX = 32,
	
                              = 33,
	City_2_Floor_Building_07_Vintage_TV_Standing_T_TV_Vintage_Standing_DefaultMaterial_Base = 34,
	None01                         = 35,
	None02                         = 36,
	lding_07_Vintage_TV_Standing_T_TV_Vintage_Standing_DefaultMaterial_Base = 37,
	None03                         = 38,
	None04                         = 39
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// 0x00B8
struct FBlueprintSessionResult
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// 0x0040
struct FPIELoginSettingsInternal
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     Token;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor, Transient)
	struct FString                                     Type;                                                     // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<unsigned char>                              TokenBytes;                                               // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// 0x0050
struct FPlayerReservation
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0000(0x0028) (Transient)
	struct FString                                     ValidationStr;                                            // 0x0028(0x0010) (ZeroConstructor, Transient)
	struct FString                                     Platform;                                                 // 0x0038(0x0010) (ZeroConstructor, Transient)
	bool                                               bAllowCrossplay;                                          // 0x0048(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              ElapsedTime;                                              // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// 0x0050
struct FPartyReservation
{
	int                                                TeamNum;                                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FUniqueNetIdRepl                            PartyLeader;                                              // 0x0008(0x0028) (Transient)
	TArray<struct FPlayerReservation>                  PartyMembers;                                             // 0x0030(0x0010) (ZeroConstructor, Transient)
	TArray<struct FPlayerReservation>                  RemovedPartyMembers;                                      // 0x0040(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct OnlineSubsystemUtils.SpectatorReservation
// 0x0078
struct FSpectatorReservation
{
	struct FUniqueNetIdRepl                            SpectatorId;                                              // 0x0000(0x0028) (Transient)
	struct FPlayerReservation                          Spectator;                                                // 0x0028(0x0050) (Transient)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

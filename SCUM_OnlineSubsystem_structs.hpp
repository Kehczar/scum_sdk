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

// Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t
{
	EInAppPurchaseState__Unknown   = 0,
	None                           = 1,
	EInAppPurchaseState__Success   = 2,
	neByteProperty‘IntProperty  = 3,
	EInAppPurchaseState__Failed    = 4,
	ByteProperty‘IntProperty    = 5,
	EInAppPurchaseState__Cancelled = 6,
	ByteProperty                   = 7,
	EInAppPurchaseState__Invalid   = 8,
	teProperty‘IntProperty        = 9,
	EInAppPurchaseState__NotAllowed = 10,
	Property‘IntProperty          = 11,
	EInAppPurchaseState__Restored  = 12,
	operty‘IntProperty            = 13,
	EInAppPurchaseState__AlreadyOwned = 14,
	erty‘IntProperty              = 15,
	EInAppPurchaseState__EInAppPurchaseState_MAX = 16,
	ty‘IntProperty                = 17,
	None01                         = 18,
	None02                         = 19,
	None03                         = 20,
	None04                         = 21,
	None05                         = 22,
	tain_05_D1VT_Stain_05_D1      = 23,
	None06                         = 24,
	None07                         = 25,
	None08                         = 26,
	None09                         = 27
};


// Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t
{
	EMPMatchOutcome__None          = 0,
	None                           = 1,
	EMPMatchOutcome__Quit          = 2,
	neByteProperty‘IntProperty  = 3,
	EMPMatchOutcome__Won           = 4,
	ByteProperty‘IntProperty    = 5,
	EMPMatchOutcome__Lost          = 6,
	ByteProperty                   = 7,
	EMPMatchOutcome__Tied          = 8,
	teProperty‘IntProperty        = 9,
	EMPMatchOutcome__TimeExpired   = 10,
	Property‘IntProperty          = 11,
	EMPMatchOutcome__First         = 12,
	operty‘IntProperty            = 13,
	EMPMatchOutcome__Second        = 14,
	erty‘IntProperty              = 15,
	EMPMatchOutcome__Third         = 16,
	ty‘IntProperty                = 17,
	EMPMatchOutcome__Fourth        = 18,
	[Error]                        = 19,
	EMPMatchOutcome__EMPMatchOutcome_MAX = 20,
	IntProperty                    = 21,
	None01                         = 22,
	None02                         = 23,
	None03                         = 24,
	None04                         = 25,
	_Debris_Debris_02_D            = 26,
	None05                         = 27,
	None06                         = 28,
	None07                         = 29,
	None08                         = 30,
	None09                         = 31
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystem.NamedInterface
// 0x0010
struct FNamedInterface
{
	struct FName                                       InterfaceName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     InterfaceObject;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OnlineSubsystem.NamedInterfaceDef
// 0x0018
struct FNamedInterfaceDef
{
	struct FName                                       InterfaceName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     InterfaceClassName;                                       // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// 0x00A8
struct FInAppPurchaseProductInfo
{
	struct FString                                     Identifier;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TransactionIdentifier;                                    // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DisplayDescription;                                       // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DisplayPrice;                                             // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              RawPrice;                                                 // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     CurrencyCode;                                             // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CurrencySymbol;                                           // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DecimalSeparator;                                         // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     GroupingSeparator;                                        // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ReceiptData;                                              // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
// 0x0030
struct FInAppPurchaseRestoreInfo
{
	struct FString                                     Identifier;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ReceiptData;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     TransactionIdentifier;                                    // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
// 0x0018
struct FInAppPurchaseProductRequest
{
	struct FString                                     ProductIdentifier;                                        // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bIsConsumable;                                            // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

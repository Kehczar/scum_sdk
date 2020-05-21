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

// Enum MagicLeapIdentity.EMagicLeapIdentityKey
enum class EMagicLeapIdentityKey : uint8_t
{
	EMagicLeapIdentityKey__GivenName = 0,
	None                           = 1,
	EMagicLeapIdentityKey__FamilyName = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapIdentityKey__Email   = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapIdentityKey__Bio     = 6,
	ByteProperty                   = 7,
	EMagicLeapIdentityKey__PhoneNumber = 8,
	teProperty‘IntProperty        = 9,
	EMagicLeapIdentityKey__Avatar2D = 10,
	Property‘IntProperty          = 11,
	EMagicLeapIdentityKey__Avatar3D = 12,
	operty‘IntProperty            = 13,
	EMagicLeapIdentityKey__Unknown = 14,
	erty‘IntProperty              = 15,
	EMagicLeapIdentityKey__EMagicLeapIdentityKey_MAX = 16,
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


// Enum MagicLeapIdentity.EMagicLeapIdentityError
enum class EMagicLeapIdentityError : uint8_t
{
	EMagicLeapIdentityError__Ok    = 0,
	None                           = 1,
	EMagicLeapIdentityError__InvalidParam = 2,
	neByteProperty‘IntProperty  = 3,
	EMagicLeapIdentityError__AllocFailed = 4,
	ByteProperty‘IntProperty    = 5,
	EMagicLeapIdentityError__PrivilegeDenied = 6,
	ByteProperty                   = 7,
	EMagicLeapIdentityError__FailedToConnectToLocalService = 8,
	teProperty‘IntProperty        = 9,
	EMagicLeapIdentityError__FailedToConnectToCloudService = 10,
	Property‘IntProperty          = 11,
	EMagicLeapIdentityError__CloudAuthentication = 12,
	operty‘IntProperty            = 13,
	EMagicLeapIdentityError__InvalidInformationFromCloud = 14,
	erty‘IntProperty              = 15,
	EMagicLeapIdentityError__NotLoggedIn = 16,
	ty‘IntProperty                = 17,
	EMagicLeapIdentityError__ExpiredCredentials = 18,
	[Error]                        = 19,
	EMagicLeapIdentityError__FailedToGetUserProfile = 20,
	IntProperty                    = 21,
	EMagicLeapIdentityError__Unauthorized = 22,
	tProperty                      = 23,
	EMagicLeapIdentityError__CertificateError = 24,
	roperty                        = 25,
	EMagicLeapIdentityError__RejectedByCloud = 26,
	perty                          = 27,
	EMagicLeapIdentityError__AlreadyLoggedIn = 28,
	rty                            = 29,
	EMagicLeapIdentityError__ModifyIsNotSupported = 30,
	y                              = 31,
	EMagicLeapIdentityError__NetworkError = 32,
	
                              = 33,
	EMagicLeapIdentityError__UnspecifiedFailure = 34,
	BoolProperty                   = 35,
	EMagicLeapIdentityError__EMagicLeapIdentityError_MAX = 36,
	olPropertybFloatProperty      = 37,
	None01                         = 38,
	None02                         = 39,
	None03                         = 40,
	_2_Floor_Building_07_Vintage_TV_Standing_T_TV_Vintage_Standing_DefaultMaterial_Base = 41,
	None04                         = 42,
	ng_T_TV_Vintage_Standing_DefaultMaterial_Base = 43
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapIdentity.MagicLeapIdentityAttribute
// 0x0018
struct FMagicLeapIdentityAttribute
{
	EMagicLeapIdentityKey                              Attribute;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Value;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

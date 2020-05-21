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

// Enum AppleImageUtils.EAppleTextureType
enum class EAppleTextureType : uint8_t
{
	EAppleTextureType__Unknown     = 0,
	None                           = 1,
	EAppleTextureType__Image       = 2,
	neByteProperty‘IntProperty  = 3,
	EAppleTextureType__PixelBuffer = 4,
	ByteProperty‘IntProperty    = 5,
	EAppleTextureType__Surface     = 6,
	ByteProperty                   = 7,
	EAppleTextureType__MetalTexture = 8,
	teProperty‘IntProperty        = 9,
	EAppleTextureType__EAppleTextureType_MAX = 10,
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


// Enum AppleImageUtils.ETextureRotationDirection
enum class ETextureRotationDirection : uint8_t
{
	ETextureRotationDirection__None = 0,
	None                           = 1,
	ETextureRotationDirection__Left = 2,
	neByteProperty‘IntProperty  = 3,
	ETextureRotationDirection__Right = 4,
	ByteProperty‘IntProperty    = 5,
	ETextureRotationDirection__Down = 6,
	ByteProperty                   = 7,
	ETextureRotationDirection__ETextureRotationDirection_MAX = 8,
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



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult
// 0x0020
struct FAppleImageUtilsImageConversionResult
{
	struct FString                                     Error;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<unsigned char>                              ImageData;                                                // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

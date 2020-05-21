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

// Enum ImageWrapper.EBitmapCSType
enum class EBitmapCSType : uint8_t
{
	EBitmapCSType__BCST_BLCS_CALIBRATED_RGB = 0,
	None                           = 1,
	EBitmapCSType__BCST_LCS_sRGB   = 2,
	None01                         = 3,
	EBitmapCSType__BCST_LCS_WINDOWS_COLOR_SPACE = 4,
	None02                         = 5,
	EBitmapCSType__BCST_PROFILE_LINKED = 6,
	None03                         = 7,
	EBitmapCSType__BCST_PROFILE_EMBEDDED = 8,
	None04                         = 9,
	EBitmapCSType__BCST_MAX        = 10,
	None05                         = 11,
	None06                         = 12,
	None07                         = 13,
	None08                         = 14,
	None09                         = 15,
	None10                         = 16,
	None11                         = 17,
	None12                         = 18,
	None13                         = 19,
	None14                         = 20,
	None15                         = 21,
	None16                         = 22,
	None17                         = 23
};


// Enum ImageWrapper.EBitmapHeaderVersion
enum class EBitmapHeaderVersion : uint8_t
{
	EBitmapHeaderVersion__BHV_BITMAPINFOHEADER = 0,
	None                           = 1,
	EBitmapHeaderVersion__BHV_BITMAPV2INFOHEADER = 2,
	neByteProperty‘IntProperty  = 3,
	EBitmapHeaderVersion__BHV_BITMAPV3INFOHEADER = 4,
	ByteProperty‘IntProperty    = 5,
	EBitmapHeaderVersion__BHV_BITMAPV4HEADER = 6,
	ByteProperty                   = 7,
	EBitmapHeaderVersion__BHV_BITMAPV5HEADER = 8,
	teProperty‘IntProperty        = 9,
	EBitmapHeaderVersion__BHV_MAX  = 10,
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



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

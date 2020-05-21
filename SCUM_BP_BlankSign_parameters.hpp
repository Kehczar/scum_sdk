#pragma once

// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConZ.ItemWithText.OnTextAccepted
struct ABP_BlankSign_C_OnTextAccepted_Params
{
	class APrisoner**                                  User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ConZ.ItemWithText.OnRep_Text
struct ABP_BlankSign_C_OnRep_Text_Params
{
};

// Function ConZ.ItemWithText.OnLocalPrisonerPanelsClosed_ItemWithText
struct ABP_BlankSign_C_OnLocalPrisonerPanelsClosed_ItemWithText_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

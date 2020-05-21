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

// Function UI_SquadListing.UI_SquadListing_C.SetInfo
struct UUI_SquadListing_C_SetInfo_Params
{
	int*                                               squadRank;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    SquadName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FConZSquadEmblem*                           SquadEmblem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    SquadInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               SquadScore;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SquadListing.UI_SquadListing_C.Construct
struct UUI_SquadListing_C_Construct_Params
{
};

// Function UI_SquadListing.UI_SquadListing_C.ExecuteUbergraph_UI_SquadListing
struct UUI_SquadListing_C_ExecuteUbergraph_UI_SquadListing_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_SquadListing.UI_SquadListing_C.SetInfo
// (Exec, NetResponse, Private, Protected, NetServer)
// Parameters:
// int*                           squadRank                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                SquadName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FConZSquadEmblem*       SquadEmblem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                SquadInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           SquadScore                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadListing_C::SetInfo(int* squadRank, struct FString* SquadName, struct FConZSquadEmblem* SquadEmblem, struct FString* SquadInfo, int* SquadScore, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadListing.UI_SquadListing_C.SetInfo");

	UUI_SquadListing_C_SetInfo_Params params;
	params.squadRank = squadRank;
	params.SquadName = SquadName;
	params.SquadEmblem = SquadEmblem;
	params.SquadInfo = SquadInfo;
	params.SquadScore = SquadScore;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadListing.UI_SquadListing_C.Construct
// (NetReliable, NetRequest, Native, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_SquadListing_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadListing.UI_SquadListing_C.Construct");

	UUI_SquadListing_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadListing.UI_SquadListing_C.ExecuteUbergraph_UI_SquadListing
// (Net, NetReliable, Native, NetResponse, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadListing_C::ExecuteUbergraph_UI_SquadListing(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadListing.UI_SquadListing_C.ExecuteUbergraph_UI_SquadListing");

	UUI_SquadListing_C_ExecuteUbergraph_UI_SquadListing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.FillLabels
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CTFParticipantStatsWidget_C::FillLabels()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.FillLabels");

	UUI_CTFParticipantStatsWidget_C_FillLabels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.UpdateStats
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CTFParticipantStatsWidget_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.UpdateStats");

	UUI_CTFParticipantStatsWidget_C_UpdateStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.ExecuteUbergraph_UI_CTFParticipantStatsWidget
// (Exec, Native, Event, NetResponse, MulticastDelegate, Public, HasOutParms)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CTFParticipantStatsWidget_C::ExecuteUbergraph_UI_CTFParticipantStatsWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFParticipantStatsWidget.UI_CTFParticipantStatsWidget_C.ExecuteUbergraph_UI_CTFParticipantStatsWidget");

	UUI_CTFParticipantStatsWidget_C_ExecuteUbergraph_UI_CTFParticipantStatsWidget_Params params;
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

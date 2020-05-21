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

// Function UI_GameEventInfoWidget.UI_GameEventInfoWidget_C.UpdateStats
// (Net, Native, NetMulticast, Private, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameEventBase**         _gameEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventInfoWidget_C::UpdateStats(class AGameEventBase** _gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventInfoWidget.UI_GameEventInfoWidget_C.UpdateStats");

	UUI_GameEventInfoWidget_C_UpdateStats_Params params;
	params._gameEvent = _gameEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventInfoWidget.UI_GameEventInfoWidget_C.ExecuteUbergraph_UI_GameEventInfoWidget
// (Exec, Native, Event, Static, MulticastDelegate, Public, HasOutParms)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventInfoWidget_C::STATIC_ExecuteUbergraph_UI_GameEventInfoWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventInfoWidget.UI_GameEventInfoWidget_C.ExecuteUbergraph_UI_GameEventInfoWidget");

	UUI_GameEventInfoWidget_C_ExecuteUbergraph_UI_GameEventInfoWidget_Params params;
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

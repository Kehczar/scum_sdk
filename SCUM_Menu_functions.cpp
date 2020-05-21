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

// Function Menu.Menu_C.UpdateDroneVisual
// (NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintEvent)

void AMenu_C::UpdateDroneVisual()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.UpdateDroneVisual");

	AMenu_C_UpdateDroneVisual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1
// (Net, NetRequest, Exec, Event, MulticastDelegate, Public, Protected, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AMenu_C::InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1");

	AMenu_C_InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.ReceiveBeginPlay
// (NetRequest, Exec, Event, MulticastDelegate, Public, Protected, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void AMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.ReceiveBeginPlay");

	AMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.ReceiveTick
// (Net, Exec, Event, MulticastDelegate, Public, Protected, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenu_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.ReceiveTick");

	AMenu_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Recapture
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void AMenu_C::STATIC_Recapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Recapture");

	AMenu_C_Recapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.ExecuteUbergraph_Menu
// (Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenu_C::STATIC_ExecuteUbergraph_Menu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.ExecuteUbergraph_Menu");

	AMenu_C_ExecuteUbergraph_Menu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

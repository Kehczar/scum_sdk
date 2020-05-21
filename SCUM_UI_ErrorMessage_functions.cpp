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

// Function UI_ErrorMessage.UI_ErrorMessage_C.BndEvt__OkButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UUI_ErrorMessage_C::STATIC_BndEvt__OkButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.BndEvt__OkButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UUI_ErrorMessage_C_BndEvt__OkButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ErrorMessage.UI_ErrorMessage_C.Init
// (NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCanvasPanel**           Canvas                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget**                widgetToDisable                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_ErrorMessage_C::Init(struct FText* Message, class UCanvasPanel** Canvas, class UWidget** widgetToDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.Init");

	UUI_ErrorMessage_C_Init_Params params;
	params.Message = Message;
	params.Canvas = Canvas;
	params.widgetToDisable = widgetToDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ErrorMessage.UI_ErrorMessage_C.OnDismissed
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UUI_ErrorMessage_C::STATIC_OnDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.OnDismissed");

	UUI_ErrorMessage_C_OnDismissed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ErrorMessage.UI_ErrorMessage_C.ExecuteUbergraph_UI_ErrorMessage
// (Net, Exec, Native, Event, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ErrorMessage_C::ExecuteUbergraph_UI_ErrorMessage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.ExecuteUbergraph_UI_ErrorMessage");

	UUI_ErrorMessage_C_ExecuteUbergraph_UI_ErrorMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ErrorMessage.UI_ErrorMessage_C.Dismissed__DelegateSignature
// ()

void UUI_ErrorMessage_C::Dismissed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ErrorMessage.UI_ErrorMessage_C.Dismissed__DelegateSignature");

	UUI_ErrorMessage_C_Dismissed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_ConfirmationBase.UI_ConfirmationBase_C.AddToCanvas
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCanvasPanel**           Canvas                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_ConfirmationBase_C::AddToCanvas(class UCanvasPanel** Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConfirmationBase.UI_ConfirmationBase_C.AddToCanvas");

	UUI_ConfirmationBase_C_AddToCanvas_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ConfirmationBase.UI_ConfirmationBase_C.OnNo
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_ConfirmationBase_C::OnNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConfirmationBase.UI_ConfirmationBase_C.OnNo");

	UUI_ConfirmationBase_C_OnNo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ConfirmationBase.UI_ConfirmationBase_C.ExecuteUbergraph_UI_ConfirmationBase
// (NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ConfirmationBase_C::ExecuteUbergraph_UI_ConfirmationBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConfirmationBase.UI_ConfirmationBase_C.ExecuteUbergraph_UI_ConfirmationBase");

	UUI_ConfirmationBase_C_ExecuteUbergraph_UI_ConfirmationBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ConfirmationBase.UI_ConfirmationBase_C.NoClicked__DelegateSignature
// ()

void UUI_ConfirmationBase_C::NoClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConfirmationBase.UI_ConfirmationBase_C.NoClicked__DelegateSignature");

	UUI_ConfirmationBase_C_NoClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

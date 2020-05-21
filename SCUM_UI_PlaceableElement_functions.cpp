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

// Function UI_PlaceableElement.UI_PlaceableElement_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Event, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void UUI_PlaceableElement_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlaceableElement.UI_PlaceableElement_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_PlaceableElement_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PlaceableElement.UI_PlaceableElement_C.ExecuteUbergraph_UI_PlaceableElement
// (NetReliable, NetRequest, Exec, Native, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PlaceableElement_C::ExecuteUbergraph_UI_PlaceableElement(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlaceableElement.UI_PlaceableElement_C.ExecuteUbergraph_UI_PlaceableElement");

	UUI_PlaceableElement_C_ExecuteUbergraph_UI_PlaceableElement_Params params;
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

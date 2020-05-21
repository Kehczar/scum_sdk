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

// Function UI_CharacterSlot.UI_CharacterSlot_C.OnSynchronizeProperties
// (Net, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterSlot_C::STATIC_OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSlot.UI_CharacterSlot_C.OnSynchronizeProperties");

	UUI_CharacterSlot_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSlot.UI_CharacterSlot_C.BndEvt__UI_MenuButton_128_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (NetReliable, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterSlot_C::STATIC_BndEvt__UI_MenuButton_128_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSlot.UI_CharacterSlot_C.BndEvt__UI_MenuButton_128_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UUI_CharacterSlot_C_BndEvt__UI_MenuButton_128_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSlot.UI_CharacterSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterSlot_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSlot.UI_CharacterSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");

	UUI_CharacterSlot_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSlot.UI_CharacterSlot_C.ExecuteUbergraph_UI_CharacterSlot
// (Net, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Private, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterSlot_C::ExecuteUbergraph_UI_CharacterSlot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSlot.UI_CharacterSlot_C.ExecuteUbergraph_UI_CharacterSlot");

	UUI_CharacterSlot_C_ExecuteUbergraph_UI_CharacterSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSlot.UI_CharacterSlot_C.OnDestroyClicked__DelegateSignature
// ()
// Parameters:
// class UUI_CharacterSlot_C**    Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CharacterSlot_C::OnDestroyClicked__DelegateSignature(class UUI_CharacterSlot_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSlot.UI_CharacterSlot_C.OnDestroyClicked__DelegateSignature");

	UUI_CharacterSlot_C_OnDestroyClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterSlot.UI_CharacterSlot_C.OnClicked__DelegateSignature
// ()
// Parameters:
// class UUserProfile**           UserProfile                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterSlot_C::OnClicked__DelegateSignature(class UUserProfile** UserProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterSlot.UI_CharacterSlot_C.OnClicked__DelegateSignature");

	UUI_CharacterSlot_C_OnClicked__DelegateSignature_Params params;
	params.UserProfile = UserProfile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

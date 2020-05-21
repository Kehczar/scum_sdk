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

// Function UI_MenuButton.UI_MenuButton_C.SetText
// (NetReliable, Native, Public, Private, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_MenuButton_C::SetText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuButton.UI_MenuButton_C.SetText");

	UUI_MenuButton_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuButton.UI_MenuButton_C.SetFontSize
// (Exec, Native, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuButton_C::STATIC_SetFontSize(int* FontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuButton.UI_MenuButton_C.SetFontSize");

	UUI_MenuButton_C_SetFontSize_Params params;
	params.FontSize = FontSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuButton.UI_MenuButton_C.OnMouseEnter
// (Net, NetRequest, NetResponse, Static, MulticastDelegate, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_MenuButton_C::STATIC_OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuButton.UI_MenuButton_C.OnMouseEnter");

	UUI_MenuButton_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuButton.UI_MenuButton_C.OnMouseLeave
// (Net, NetReliable, NetRequest, Native, Public, Private, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_MenuButton_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuButton.UI_MenuButton_C.OnMouseLeave");

	UUI_MenuButton_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuButton.UI_MenuButton_C.OnSynchronizeProperties
// (Exec, Native, Public, Private, HasDefaults, NetClient, BlueprintCallable)

void UUI_MenuButton_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuButton.UI_MenuButton_C.OnSynchronizeProperties");

	UUI_MenuButton_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuButton.UI_MenuButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, Native, Public, Private, HasDefaults, NetClient, BlueprintCallable)

void UUI_MenuButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuButton.UI_MenuButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");

	UUI_MenuButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuButton.UI_MenuButton_C.Construct
// (Net, NetReliable, NetRequest, Native, Public, Private, HasDefaults, NetClient, BlueprintCallable)

void UUI_MenuButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuButton.UI_MenuButton_C.Construct");

	UUI_MenuButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuButton.UI_MenuButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (NetReliable, NetRequest, Native, Public, Private, HasDefaults, NetClient, BlueprintCallable)

void UUI_MenuButton_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuButton.UI_MenuButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UUI_MenuButton_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuButton.UI_MenuButton_C.ExecuteUbergraph_UI_MenuButton
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, Public, Protected, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MenuButton_C::STATIC_ExecuteUbergraph_UI_MenuButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuButton.UI_MenuButton_C.ExecuteUbergraph_UI_MenuButton");

	UUI_MenuButton_C_ExecuteUbergraph_UI_MenuButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MenuButton.UI_MenuButton_C.OnClicked__DelegateSignature
// ()

void UUI_MenuButton_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuButton.UI_MenuButton_C.OnClicked__DelegateSignature");

	UUI_MenuButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

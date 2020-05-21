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

// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.ModifyValue
// (NetRequest, Native, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Modifier                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_AttributeModifier_C::STATIC_ModifyValue(float* Modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.ModifyValue");

	UUI_CC_AttributeModifier_C_ModifyValue_Params params;
	params.Modifier = Modifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.SetValue
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_AttributeModifier_C::STATIC_SetValue(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.SetValue");

	UUI_CC_AttributeModifier_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.SetValueText
// (NetReliable, Exec, Native, Event, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CC_AttributeModifier_C::SetValueText(struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.SetValueText");

	UUI_CC_AttributeModifier_C_SetValueText_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.Construct
// (Exec, Event, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_CC_AttributeModifier_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.Construct");

	UUI_CC_AttributeModifier_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnMouseEnter
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CC_AttributeModifier_C::STATIC_OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnMouseEnter");

	UUI_CC_AttributeModifier_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnMouseLeave
// (Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CC_AttributeModifier_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnMouseLeave");

	UUI_CC_AttributeModifier_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_CC_AttributeModifier_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature");

	UUI_CC_AttributeModifier_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.BndEvt__IncreaseButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_CC_AttributeModifier_C::BndEvt__IncreaseButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.BndEvt__IncreaseButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature");

	UUI_CC_AttributeModifier_C_BndEvt__IncreaseButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnSynchronizeProperties
// (Exec, Native, Event, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_CC_AttributeModifier_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnSynchronizeProperties");

	UUI_CC_AttributeModifier_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.ExecuteUbergraph_UI_CC_AttributeModifier
// (NetReliable, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_AttributeModifier_C::STATIC_ExecuteUbergraph_UI_CC_AttributeModifier(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.ExecuteUbergraph_UI_CC_AttributeModifier");

	UUI_CC_AttributeModifier_C_ExecuteUbergraph_UI_CC_AttributeModifier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnDecrease__DelegateSignature
// ()

void UUI_CC_AttributeModifier_C::OnDecrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnDecrease__DelegateSignature");

	UUI_CC_AttributeModifier_C_OnDecrease__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnIncrease__DelegateSignature
// ()

void UUI_CC_AttributeModifier_C::OnIncrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnIncrease__DelegateSignature");

	UUI_CC_AttributeModifier_C_OnIncrease__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

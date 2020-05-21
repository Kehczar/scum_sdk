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

// Function UI_OptionsSlider.UI_OptionsSlider_C.OnMouseButtonDoubleClick
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_OptionsSlider_C::STATIC_OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnMouseButtonDoubleClick");

	UUI_OptionsSlider_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnMouseButtonDown
// (NetRequest, Exec, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_OptionsSlider_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnMouseButtonDown");

	UUI_OptionsSlider_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.GetValue
// (Net, MulticastDelegate, Private, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Value                          (Parm, OutParm)

void UUI_OptionsSlider_C::GetValue(struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.GetValue");

	UUI_OptionsSlider_C_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.ChangeValue
// (NetReliable, Event, NetResponse, Static, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_OptionsSlider_C::STATIC_ChangeValue(int* Index, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.ChangeValue");

	UUI_OptionsSlider_C_ChangeValue_Params params;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.SetTitle
// (Net, NetReliable, Exec, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  Title                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_OptionsSlider_C::SetTitle(struct FText* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.SetTitle");

	UUI_OptionsSlider_C_SetTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.InitAsNumbers
// (NetReliable, Exec, NetResponse, Static, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// int*                           FirstIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           lastIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsSlider_C::STATIC_InitAsNumbers(int* FirstIndex, int* lastIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.InitAsNumbers");

	UUI_OptionsSlider_C_InitAsNumbers_Params params;
	params.FirstIndex = FirstIndex;
	params.lastIndex = lastIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.InitAsFlag
// ()

void UUI_OptionsSlider_C::InitAsFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.InitAsFlag");

	UUI_OptionsSlider_C_InitAsFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.AddKeyValuePair
// (Net, Exec, Native, NetResponse, Static, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// struct FText*                  Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_OptionsSlider_C::STATIC_AddKeyValuePair(struct FText* Key, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.AddKeyValuePair");

	UUI_OptionsSlider_C_AddKeyValuePair_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnKeyUp
// (NetRequest, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, DLLImport, BlueprintPure)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_OptionsSlider_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnKeyUp");

	UUI_OptionsSlider_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.AddValue
// (NetRequest, Exec, Native, NetResponse, Static, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_OptionsSlider_C::STATIC_AddValue(struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.AddValue");

	UUI_OptionsSlider_C_AddValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.ClearValues
// (Net, NetReliable, Exec, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_OptionsSlider_C::ClearValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.ClearValues");

	UUI_OptionsSlider_C_ClearValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.SetValue
// (Net, NetResponse, Static, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsSlider_C::STATIC_SetValue(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.SetValue");

	UUI_OptionsSlider_C_SetValue_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.Increase
// (NetReliable, NetRequest, Event, MulticastDelegate, Private, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)

void UUI_OptionsSlider_C::Increase()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.Increase");

	UUI_OptionsSlider_C_Increase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.Decrease
// (Net, NetReliable, NetRequest, Exec, Event, MulticastDelegate, Private, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)

void UUI_OptionsSlider_C::Decrease()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.Decrease");

	UUI_OptionsSlider_C_Decrease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnKeyDown
// (NetRequest, NetResponse, Static, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_OptionsSlider_C::STATIC_OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnKeyDown");

	UUI_OptionsSlider_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnFocusReceived
// (Exec, Native, Event, Static, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_OptionsSlider_C::STATIC_OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnFocusReceived");

	UUI_OptionsSlider_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnClickedHigher
// (Net, NetRequest, Native, Event, Static, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_OptionsSlider_C::STATIC_OnClickedHigher(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnClickedHigher");

	UUI_OptionsSlider_C_OnClickedHigher_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnClickedLower
// (Net, NetRequest, Event, NetResponse, Static, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_OptionsSlider_C::STATIC_OnClickedLower(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnClickedLower");

	UUI_OptionsSlider_C_OnClickedLower_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnSynchronizeProperties
// (Net, NetReliable, Native, Event, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_OptionsSlider_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnSynchronizeProperties");

	UUI_OptionsSlider_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnFocusLost
// (NetReliable, Exec, Event, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_OptionsSlider_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnFocusLost");

	UUI_OptionsSlider_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnMouseEnter
// (NetReliable, Exec, Native, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_OptionsSlider_C::STATIC_OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnMouseEnter");

	UUI_OptionsSlider_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.BndEvt__RaiseButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (Net, NetRequest, Native, Event, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_OptionsSlider_C::BndEvt__RaiseButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.BndEvt__RaiseButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	UUI_OptionsSlider_C_BndEvt__RaiseButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.BndEvt__LowerButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature
// (Net, Exec, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_OptionsSlider_C::BndEvt__LowerButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.BndEvt__LowerButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature");

	UUI_OptionsSlider_C_BndEvt__LowerButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.Construct
// (NetReliable, Exec, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_OptionsSlider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.Construct");

	UUI_OptionsSlider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.ExecuteUbergraph_UI_OptionsSlider
// (NetRequest, Native, MulticastDelegate, Public, Private, NetServer, HasOutParms, NetClient, DLLImport, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsSlider_C::ExecuteUbergraph_UI_OptionsSlider(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.ExecuteUbergraph_UI_OptionsSlider");

	UUI_OptionsSlider_C_ExecuteUbergraph_UI_OptionsSlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsSlider.UI_OptionsSlider_C.OnValueChanged__DelegateSignature
// ()
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_OptionsSlider_C::OnValueChanged__DelegateSignature(int* Index, int* OldIndex, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsSlider.UI_OptionsSlider_C.OnValueChanged__DelegateSignature");

	UUI_OptionsSlider_C_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

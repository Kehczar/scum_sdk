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

// Function UI_ScrollBar.UI_ScrollBar_C.OnMouseButtonUp
// (Net, NetRequest, Exec, Native, Static, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_ScrollBar_C::STATIC_OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScrollBar.UI_ScrollBar_C.OnMouseButtonUp");

	UUI_ScrollBar_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ScrollBar.UI_ScrollBar_C.OnMouseMove
// (Exec, NetResponse, MulticastDelegate, Public, Private, Delegate, DLLImport, BlueprintPure)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_ScrollBar_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScrollBar.UI_ScrollBar_C.OnMouseMove");

	UUI_ScrollBar_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ScrollBar.UI_ScrollBar_C.OnMouseButtonDown
// (NetRequest, Exec, Event, Static, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_ScrollBar_C::STATIC_OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScrollBar.UI_ScrollBar_C.OnMouseButtonDown");

	UUI_ScrollBar_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ScrollBar.UI_ScrollBar_C.SetToUpdateFromValue
// (Net, NetReliable, Exec, Native, Event, Static, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         maxCountOnScreen               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ScrollBar_C::STATIC_SetToUpdateFromValue(float* Value, float* maxCountOnScreen, float* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScrollBar.UI_ScrollBar_C.SetToUpdateFromValue");

	UUI_ScrollBar_C_SetToUpdateFromValue_Params params;
	params.Value = Value;
	params.maxCountOnScreen = maxCountOnScreen;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ScrollBar.UI_ScrollBar_C.UpdateFromValueInternal
// (Net, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Delegate, DLLImport, BlueprintPure)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         maxCountOnScreen               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ScrollBar_C::UpdateFromValueInternal(float* Value, float* maxCountOnScreen, float* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScrollBar.UI_ScrollBar_C.UpdateFromValueInternal");

	UUI_ScrollBar_C_UpdateFromValueInternal_Params params;
	params.Value = Value;
	params.maxCountOnScreen = maxCountOnScreen;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ScrollBar.UI_ScrollBar_C.Tick
// (Net, Exec, Event, Static, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ScrollBar_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScrollBar.UI_ScrollBar_C.Tick");

	UUI_ScrollBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ScrollBar.UI_ScrollBar_C.ExecuteUbergraph_UI_ScrollBar
// (NetReliable, NetRequest, Event, Static, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ScrollBar_C::STATIC_ExecuteUbergraph_UI_ScrollBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScrollBar.UI_ScrollBar_C.ExecuteUbergraph_UI_ScrollBar");

	UUI_ScrollBar_C_ExecuteUbergraph_UI_ScrollBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ScrollBar.UI_ScrollBar_C.OnSliderMoved__DelegateSignature
// ()
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ScrollBar_C::OnSliderMoved__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ScrollBar.UI_ScrollBar_C.OnSliderMoved__DelegateSignature");

	UUI_ScrollBar_C_OnSliderMoved__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.GetSelectedTabMode
// (Net, Exec, Static, Private, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETabMode                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ETabMode UUI_TabModeSwitcher_C::STATIC_GetSelectedTabMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.GetSelectedTabMode");

	UUI_TabModeSwitcher_C_GetSelectedTabMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.SelectArcFromMouseDelta
// (NetReliable, Static, NetMulticast, Private, Protected, NetServer)
// Parameters:
// struct FVector2D*              Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TabModeSwitcher_C::STATIC_SelectArcFromMouseDelta(struct FVector2D* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.SelectArcFromMouseDelta");

	UUI_TabModeSwitcher_C_SelectArcFromMouseDelta_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.OnMouseButtonDown
// (Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_TabModeSwitcher_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.OnMouseButtonDown");

	UUI_TabModeSwitcher_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.SelectArc
// (Net, Native, Static, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TabModeSwitcher_C::STATIC_SelectArc(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.SelectArc");

	UUI_TabModeSwitcher_C_SelectArc_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.OnMouseMove
// (Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_TabModeSwitcher_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.OnMouseMove");

	UUI_TabModeSwitcher_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.OnMouseLeave
// (Net, NetRequest, Native, Static, Private, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_TabModeSwitcher_C::STATIC_OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.OnMouseLeave");

	UUI_TabModeSwitcher_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.Tick
// (NetRequest, Exec, Native, Event, NetMulticast, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TabModeSwitcher_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.Tick");

	UUI_TabModeSwitcher_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.ExecuteUbergraph_UI_TabModeSwitcher
// (Native, Event, NetResponse, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TabModeSwitcher_C::ExecuteUbergraph_UI_TabModeSwitcher(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.ExecuteUbergraph_UI_TabModeSwitcher");

	UUI_TabModeSwitcher_C_ExecuteUbergraph_UI_TabModeSwitcher_Params params;
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

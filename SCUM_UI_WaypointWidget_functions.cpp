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

// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Label_Text
// (Net, NetReliable, Exec, Event, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_WaypointWidget_C::Get_Label_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Label_Text");

	UUI_WaypointWidget_C_Get_Label_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Accent_Brush
// (Exec, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_WaypointWidget_C::STATIC_Get_Accent_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Accent_Brush");

	UUI_WaypointWidget_C_Get_Accent_Brush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Emphasis_Color
// (Net, NetReliable, Exec, Native, Event, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_WaypointWidget_C::Get_Emphasis_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Emphasis_Color");

	UUI_WaypointWidget_C_Get_Emphasis_Color_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Emphasis_Visibility
// (Net, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_WaypointWidget_C::STATIC_Get_Emphasis_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Emphasis_Visibility");

	UUI_WaypointWidget_C_Get_Emphasis_Visibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Bar_Visibility
// (NetRequest, Exec, Native, Event, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_WaypointWidget_C::Get_Bar_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Bar_Visibility");

	UUI_WaypointWidget_C_Get_Bar_Visibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Distance_Text
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_WaypointWidget_C::STATIC_Get_Distance_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Distance_Text");

	UUI_WaypointWidget_C_Get_Distance_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Bar_Brush
// (Net, NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_WaypointWidget_C::STATIC_Get_Bar_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Bar_Brush");

	UUI_WaypointWidget_C_Get_Bar_Brush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_BigPointer_Visibility
// (Net, Exec, Native, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_WaypointWidget_C::STATIC_Get_BigPointer_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_BigPointer_Visibility");

	UUI_WaypointWidget_C_Get_BigPointer_Visibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_SmallPointer_Visibility
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_WaypointWidget_C::STATIC_Get_SmallPointer_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_SmallPointer_Visibility");

	UUI_WaypointWidget_C_Get_SmallPointer_Visibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Icon_Brush
// (Net, NetReliable, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_WaypointWidget_C::Get_Icon_Brush()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Get_Icon_Brush");

	UUI_WaypointWidget_C_Get_Icon_Brush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.Tick
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WaypointWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.Tick");

	UUI_WaypointWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WaypointWidget.UI_WaypointWidget_C.ExecuteUbergraph_UI_WaypointWidget
// (Net, NetReliable, NetRequest, Exec, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WaypointWidget_C::STATIC_ExecuteUbergraph_UI_WaypointWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaypointWidget.UI_WaypointWidget_C.ExecuteUbergraph_UI_WaypointWidget");

	UUI_WaypointWidget_C_ExecuteUbergraph_UI_WaypointWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_CraftingComponent.UI_CraftingComponent_C.OnMouseButtonDown
// (Net, NetResponse, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_CraftingComponent_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.OnMouseButtonDown");

	UUI_CraftingComponent_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsTool
// (Net, NetReliable, NetRequest, Exec, Native, Event, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          IsTool                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingComponent_C::SetIsTool(bool* IsTool)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsTool");

	UUI_CraftingComponent_C_SetIsTool_Params params;
	params.IsTool = IsTool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.SetRequiredCount
// (Net, NetReliable, NetRequest, Exec, Native, Event, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingComponent_C::SetRequiredCount(int* count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.SetRequiredCount");

	UUI_CraftingComponent_C_SetRequiredCount_Params params;
	params.count = count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.SetOrderNumber
// (NetReliable, NetRequest, Exec, Native, Event, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           orderNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingComponent_C::SetOrderNumber(int* orderNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.SetOrderNumber");

	UUI_CraftingComponent_C_SetOrderNumber_Params params;
	params.orderNumber = orderNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsOptional
// (NetReliable, NetRequest, Exec, Native, Event, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          isOptional                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingComponent_C::SetIsOptional(bool* isOptional)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsOptional");

	UUI_CraftingComponent_C_SetIsOptional_Params params;
	params.isOptional = isOptional;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.CreateTooltip
// (Net, NetRequest, Exec, Native, Event, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void UUI_CraftingComponent_C::CreateTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.CreateTooltip");

	UUI_CraftingComponent_C_CreateTooltip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsAvailable
// (NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          IsAvailable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingComponent_C::SetIsAvailable(bool* IsAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsAvailable");

	UUI_CraftingComponent_C_SetIsAvailable_Params params;
	params.IsAvailable = IsAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.OnMouseEnter
// (NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CraftingComponent_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.OnMouseEnter");

	UUI_CraftingComponent_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.SetSatisfiedAndRequiredCount
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           Satisfied                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Required                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingComponent_C::SetSatisfiedAndRequiredCount(int* Satisfied, int* Required)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.SetSatisfiedAndRequiredCount");

	UUI_CraftingComponent_C_SetSatisfiedAndRequiredCount_Params params;
	params.Satisfied = Satisfied;
	params.Required = Required;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingComponent.UI_CraftingComponent_C.ExecuteUbergraph_UI_CraftingComponent
// (NetRequest, Native, NetResponse, Static, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingComponent_C::STATIC_ExecuteUbergraph_UI_CraftingComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingComponent.UI_CraftingComponent_C.ExecuteUbergraph_UI_CraftingComponent");

	UUI_CraftingComponent_C_ExecuteUbergraph_UI_CraftingComponent_Params params;
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

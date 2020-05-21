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

// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSize
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FVector2D               itemSize                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessItemWidget_C::STATIC_GetItemSize(struct FVector2D* itemSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSize");

	UUI_QuickAccessItemWidget_C_GetItemSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (itemSize != nullptr)
		*itemSize = params.itemSize;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetImageBrush
// (NetReliable, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FSlateBrush             imageBrush                     (Parm, OutParm)

void UUI_QuickAccessItemWidget_C::STATIC_GetImageBrush(struct FSlateBrush* imageBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetImageBrush");

	UUI_QuickAccessItemWidget_C_GetImageBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (imageBrush != nullptr)
		*imageBrush = params.imageBrush;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.On__imageWidget_MouseButtonDown_1
// (Net, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_QuickAccessItemWidget_C::On__imageWidget_MouseButtonDown_1(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.On__imageWidget_MouseButtonDown_1");

	UUI_QuickAccessItemWidget_C_On__imageWidget_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetItemSlotNumber
// (Net, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           itemSlotNumber                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessItemWidget_C::STATIC_SetItemSlotNumber(int* itemSlotNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetItemSlotNumber");

	UUI_QuickAccessItemWidget_C_SetItemSlotNumber_Params params;
	params.itemSlotNumber = itemSlotNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateNormalColor
// (Net, NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_QuickAccessItemWidget_C::STATIC_ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateNormalColor");

	UUI_QuickAccessItemWidget_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateAlarmColor
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_QuickAccessItemWidget_C::STATIC_ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateAlarmColor");

	UUI_QuickAccessItemWidget_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSlotNumber
// (NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_QuickAccessItemWidget_C::STATIC_GetItemSlotNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSlotNumber");

	UUI_QuickAccessItemWidget_C_GetItemSlotNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetTextColor
// (Net, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessItemWidget_C::STATIC_SetTextColor(struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetTextColor");

	UUI_QuickAccessItemWidget_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.Construct
// (Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_QuickAccessItemWidget_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.Construct");

	UUI_QuickAccessItemWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.OnDragLeave
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessItemWidget_C::STATIC_OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.OnDragLeave");

	UUI_QuickAccessItemWidget_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ExecuteUbergraph_UI_QuickAccessItemWidget
// (Net, NetReliable, Event, Static, NetMulticast, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessItemWidget_C::STATIC_ExecuteUbergraph_UI_QuickAccessItemWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ExecuteUbergraph_UI_QuickAccessItemWidget");

	UUI_QuickAccessItemWidget_C_ExecuteUbergraph_UI_QuickAccessItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

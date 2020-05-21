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

// Function UI_Item2VicinityContainer.UI_Item2VicinityContainer_C.OnPreviewKeyDown
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_Item2VicinityContainer_C::STATIC_OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2VicinityContainer.UI_Item2VicinityContainer_C.OnPreviewKeyDown");

	UUI_Item2VicinityContainer_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Item2VicinityContainer.UI_Item2VicinityContainer_C.UpdateVisualszzz
// (NetRequest, Event, Static, Public, Private, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_Item2VicinityContainer_C::STATIC_UpdateVisualszzz()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2VicinityContainer.UI_Item2VicinityContainer_C.UpdateVisualszzz");

	UUI_Item2VicinityContainer_C_UpdateVisualszzz_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Item2VicinityContainer.UI_Item2VicinityContainer_C.OnMouseEnter
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Item2VicinityContainer_C::STATIC_OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2VicinityContainer.UI_Item2VicinityContainer_C.OnMouseEnter");

	UUI_Item2VicinityContainer_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Item2VicinityContainer.UI_Item2VicinityContainer_C.OnMouseLeave
// (NetRequest, NetMulticast, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Item2VicinityContainer_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2VicinityContainer.UI_Item2VicinityContainer_C.OnMouseLeave");

	UUI_Item2VicinityContainer_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Item2VicinityContainer.UI_Item2VicinityContainer_C.UpdateVisuals
// (NetRequest, NetMulticast, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UUI_Item2VicinityContainer_C::UpdateVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2VicinityContainer.UI_Item2VicinityContainer_C.UpdateVisuals");

	UUI_Item2VicinityContainer_C_UpdateVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Item2VicinityContainer.UI_Item2VicinityContainer_C.Init
// (NetReliable, NetRequest, Exec, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// TScriptInterface<class UInventoryNode>* Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TScriptInterface<class UInventoryContainer>* container                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUI_Item2VicinityContainer_C::STATIC_Init(TScriptInterface<class UInventoryNode>* Item, TScriptInterface<class UInventoryContainer>* container)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2VicinityContainer.UI_Item2VicinityContainer_C.Init");

	UUI_Item2VicinityContainer_C_Init_Params params;
	params.Item = Item;
	params.container = container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Item2VicinityContainer.UI_Item2VicinityContainer_C.Construct
// (Net, NetReliable, NetMulticast, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UUI_Item2VicinityContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2VicinityContainer.UI_Item2VicinityContainer_C.Construct");

	UUI_Item2VicinityContainer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Item2VicinityContainer.UI_Item2VicinityContainer_C.Tick
// (Net, NetReliable, Native, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Item2VicinityContainer_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2VicinityContainer.UI_Item2VicinityContainer_C.Tick");

	UUI_Item2VicinityContainer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Item2VicinityContainer.UI_Item2VicinityContainer_C.ExecuteUbergraph_UI_Item2VicinityContainer
// (Net, Exec, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Item2VicinityContainer_C::STATIC_ExecuteUbergraph_UI_Item2VicinityContainer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2VicinityContainer.UI_Item2VicinityContainer_C.ExecuteUbergraph_UI_Item2VicinityContainer");

	UUI_Item2VicinityContainer_C_ExecuteUbergraph_UI_Item2VicinityContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

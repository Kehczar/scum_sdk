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

// Function UI_CraftingPanel.UI_CraftingPanel_C.GetColorAndOpacity_1
// (Net, NetReliable, NetRequest, Exec, Event, Static, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_CraftingPanel_C::STATIC_GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.GetColorAndOpacity_1");

	UUI_CraftingPanel_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.GetbIsEnabled_1
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_CraftingPanel_C::GetbIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.GetbIsEnabled_1");

	UUI_CraftingPanel_C_GetbIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.GetIsCraftButtonEnabled
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_CraftingPanel_C::STATIC_GetIsCraftButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.GetIsCraftButtonEnabled");

	UUI_CraftingPanel_C_GetIsCraftButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.UpdateParameter
// (Static, MulticastDelegate, Public, HasOutParms)
// Parameters:
// class URetainerBox**           RetainerBox                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget**                Box                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CraftingPanel_C::STATIC_UpdateParameter(class URetainerBox** RetainerBox, class UWidget** Box)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.UpdateParameter");

	UUI_CraftingPanel_C_UpdateParameter_Params params;
	params.RetainerBox = RetainerBox;
	params.Box = Box;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__VicinityContainer_K2Node_ComponentBoundEvent_19_OnExpandChanged__DelegateSignature
// (Net, Exec, Native, NetResponse, Static, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UUI_ExpandableContainer_C** container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsMinimized                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingPanel_C::STATIC_BndEvt__VicinityContainer_K2Node_ComponentBoundEvent_19_OnExpandChanged__DelegateSignature(class UUI_ExpandableContainer_C** container, bool* IsMinimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__VicinityContainer_K2Node_ComponentBoundEvent_19_OnExpandChanged__DelegateSignature");

	UUI_CraftingPanel_C_BndEvt__VicinityContainer_K2Node_ComponentBoundEvent_19_OnExpandChanged__DelegateSignature_Params params;
	params.container = container;
	params.IsMinimized = IsMinimized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__InventoryContainer_K2Node_ComponentBoundEvent_18_OnExpandChanged__DelegateSignature
// (NetReliable, Native, Event, Static, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UUI_ExpandableContainer_C** container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsMinimized                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingPanel_C::STATIC_BndEvt__InventoryContainer_K2Node_ComponentBoundEvent_18_OnExpandChanged__DelegateSignature(class UUI_ExpandableContainer_C** container, bool* IsMinimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__InventoryContainer_K2Node_ComponentBoundEvent_18_OnExpandChanged__DelegateSignature");

	UUI_CraftingPanel_C_BndEvt__InventoryContainer_K2Node_ComponentBoundEvent_18_OnExpandChanged__DelegateSignature_Params params;
	params.container = container;
	params.IsMinimized = IsMinimized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature
// (NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CraftingPanel_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature");

	UUI_CraftingPanel_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CraftingPanel_C::STATIC_BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");

	UUI_CraftingPanel_C_BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.ShowPlaceableCraftingConfirmationForCraftingIndex
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingPanel_C::STATIC_ShowPlaceableCraftingConfirmationForCraftingIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.ShowPlaceableCraftingConfirmationForCraftingIndex");

	UUI_CraftingPanel_C_ShowPlaceableCraftingConfirmationForCraftingIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.OnCraftingConfirmationDismissed
// (NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CraftingPanel_C::STATIC_OnCraftingConfirmationDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.OnCraftingConfirmationDismissed");

	UUI_CraftingPanel_C_OnCraftingConfirmationDismissed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__CraftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_CraftingPanel_C::STATIC_BndEvt__CraftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__CraftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UUI_CraftingPanel_C_BndEvt__CraftButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.Tick
// (Exec, Native, Event, Static, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingPanel_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.Tick");

	UUI_CraftingPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.ExecuteUbergraph_UI_CraftingPanel
// (NetRequest, Native, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingPanel_C::ExecuteUbergraph_UI_CraftingPanel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.ExecuteUbergraph_UI_CraftingPanel");

	UUI_CraftingPanel_C_ExecuteUbergraph_UI_CraftingPanel_Params params;
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

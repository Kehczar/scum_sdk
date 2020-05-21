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

// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.UpdateSelectionAndOptionalState
// (Net, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_CraftingAvailableItem_C::UpdateSelectionAndOptionalState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.UpdateSelectionAndOptionalState");

	UUI_CraftingAvailableItem_C_UpdateSelectionAndOptionalState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.GetbIsEnabled_1
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_CraftingAvailableItem_C::GetbIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.GetbIsEnabled_1");

	UUI_CraftingAvailableItem_C_GetbIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.Init
// (Net, NetRequest, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingAvailableItem_C::Init(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.Init");

	UUI_CraftingAvailableItem_C_Init_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetIsSelected
// (Net, NetRequest, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          isSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingAvailableItem_C::SetIsSelected(bool* isSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetIsSelected");

	UUI_CraftingAvailableItem_C_SetIsSelected_Params params;
	params.isSelected = isSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetIsOptional
// (NetRequest, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          isOptional                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingAvailableItem_C::SetIsOptional(bool* isOptional)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetIsOptional");

	UUI_CraftingAvailableItem_C_SetIsOptional_Params params;
	params.isOptional = isOptional;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetOptionalState
// (NetRequest, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// EOptionalState*                State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingAvailableItem_C::SetOptionalState(EOptionalState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetOptionalState");

	UUI_CraftingAvailableItem_C_SetOptionalState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.Construct
// (Net, NetReliable, NetResponse, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void UUI_CraftingAvailableItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.Construct");

	UUI_CraftingAvailableItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.ExecuteUbergraph_UI_CraftingAvailableItem
// (NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingAvailableItem_C::STATIC_ExecuteUbergraph_UI_CraftingAvailableItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.ExecuteUbergraph_UI_CraftingAvailableItem");

	UUI_CraftingAvailableItem_C_ExecuteUbergraph_UI_CraftingAvailableItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function UI_ExpandableContainer.UI_ExpandableContainer_C.SetParentContainer
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UUI_ExpandableContainer_C** container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_ExpandableContainer_C::STATIC_SetParentContainer(class UUI_ExpandableContainer_C** container)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.SetParentContainer");

	UUI_ExpandableContainer_C_SetParentContainer_Params params;
	params.container = container;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.DisableAlarm
// (Event, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::STATIC_DisableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.DisableAlarm");

	UUI_ExpandableContainer_C_DisableAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.EnableAlarm
// (Net, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::STATIC_EnableAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.EnableAlarm");

	UUI_ExpandableContainer_C_EnableAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.CheckAlarm
// (NetReliable, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::CheckAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.CheckAlarm");

	UUI_ExpandableContainer_C_CheckAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.DecrementAlarmsCount
// (Net, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::DecrementAlarmsCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.DecrementAlarmsCount");

	UUI_ExpandableContainer_C_DecrementAlarmsCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.IncrementAlarmsCount
// (Net, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::IncrementAlarmsCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.IncrementAlarmsCount");

	UUI_ExpandableContainer_C_IncrementAlarmsCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.Minimize
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::STATIC_Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.Minimize");

	UUI_ExpandableContainer_C_Minimize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.Maximize
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.Maximize");

	UUI_ExpandableContainer_C_Maximize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnSynchronizeProperties
// (Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnSynchronizeProperties");

	UUI_ExpandableContainer_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.Construct
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.Construct");

	UUI_ExpandableContainer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ExpandableContainer_C::STATIC_BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UUI_ExpandableContainer_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.ExecuteUbergraph_UI_ExpandableContainer
// (Net, Public, HasOutParms, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ExpandableContainer_C::ExecuteUbergraph_UI_ExpandableContainer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.ExecuteUbergraph_UI_ExpandableContainer");

	UUI_ExpandableContainer_C_ExecuteUbergraph_UI_ExpandableContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnExpandChanged__DelegateSignature
// ()
// Parameters:
// class UUI_ExpandableContainer_C** container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsMinimized                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ExpandableContainer_C::OnExpandChanged__DelegateSignature(class UUI_ExpandableContainer_C** container, bool* IsMinimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnExpandChanged__DelegateSignature");

	UUI_ExpandableContainer_C_OnExpandChanged__DelegateSignature_Params params;
	params.container = container;
	params.IsMinimized = IsMinimized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

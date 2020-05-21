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

// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.GetTabFromTabMode
// (Net, NetRequest, Event, Static, NetMulticast, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// ETabMode*                      Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUI_TabModeTab_C*        Result                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_TabModeTabsContainer_C::STATIC_GetTabFromTabMode(ETabMode* Tab, class UUI_TabModeTab_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.GetTabFromTabMode");

	UUI_TabModeTabsContainer_C_GetTabFromTabMode_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SetTabEnabled
// (NetReliable, Static, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// ETabMode*                      Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TabModeTabsContainer_C::STATIC_SetTabEnabled(ETabMode* Tab, bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SetTabEnabled");

	UUI_TabModeTabsContainer_C_SetTabEnabled_Params params;
	params.Tab = Tab;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.OpenSpecifiedTab
// (Net, NetRequest, Static, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UUI_TabModeTab_C**       Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ETabMode*                      tabMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TabModeTabsContainer_C::STATIC_OpenSpecifiedTab(class UUI_TabModeTab_C** Tab, ETabMode* tabMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.OpenSpecifiedTab");

	UUI_TabModeTabsContainer_C_OpenSpecifiedTab_Params params;
	params.Tab = Tab;
	params.tabMode = tabMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SelectTab
// (Net, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TabModeTabsContainer_C::SelectTab(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SelectTab");

	UUI_TabModeTabsContainer_C_SelectTab_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.Construct
// (Event, NetResponse, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_TabModeTabsContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.Construct");

	UUI_TabModeTabsContainer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_TabModeTabsContainer_C::BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	UUI_TabModeTabsContainer_C_BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_TabModeTabsContainer_C::BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	UUI_TabModeTabsContainer_C_BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (Net, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_TabModeTabsContainer_C::BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	UUI_TabModeTabsContainer_C_BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_TabModeTabsContainer_C::BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	UUI_TabModeTabsContainer_C_BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__JournalTab_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (Net, NetReliable, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_TabModeTabsContainer_C::BndEvt__JournalTab_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__JournalTab_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	UUI_TabModeTabsContainer_C_BndEvt__JournalTab_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__SquadTab_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (NetReliable, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_TabModeTabsContainer_C::BndEvt__SquadTab_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__SquadTab_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");

	UUI_TabModeTabsContainer_C_BndEvt__SquadTab_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.ExecuteUbergraph_UI_TabModeTabsContainer
// (Net, NetReliable, Native, Event, NetResponse, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TabModeTabsContainer_C::ExecuteUbergraph_UI_TabModeTabsContainer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.ExecuteUbergraph_UI_TabModeTabsContainer");

	UUI_TabModeTabsContainer_C_ExecuteUbergraph_UI_TabModeTabsContainer_Params params;
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

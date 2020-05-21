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

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.AllowWakeUp
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SpawnMenuWidget_C::STATIC_AllowWakeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.AllowWakeUp");

	UUI_SpawnMenuWidget_C_AllowWakeUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.ResetComaTimer
// (Net, NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SpawnMenuWidget_C::ResetComaTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.ResetComaTimer");

	UUI_SpawnMenuWidget_C_ResetComaTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateComaTimer
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::STATIC_UpdateComaTimer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateComaTimer");

	UUI_SpawnMenuWidget_C_UpdateComaTimer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateLabels
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)

void UUI_SpawnMenuWidget_C::STATIC_UpdateLabels()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateLabels");

	UUI_SpawnMenuWidget_C_UpdateLabels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.EnableOption
// (Net, NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ERespawnOption*                option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::EnableOption(ERespawnOption* option)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.EnableOption");

	UUI_SpawnMenuWidget_C_EnableOption_Params params;
	params.option = option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSpawnTag
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FName                   spawnTag                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::GetSpawnTag(struct FName* spawnTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSpawnTag");

	UUI_SpawnMenuWidget_C_GetSpawnTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (spawnTag != nullptr)
		*spawnTag = params.spawnTag;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSectorSelectorVisibility
// (Net, NetRequest, Native, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_SpawnMenuWidget_C::GetSectorSelectorVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSectorSelectorVisibility");

	UUI_SpawnMenuWidget_C_GetSectorSelectorVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateOptions
// (Net, NetReliable, Exec, Event, Static, NetMulticast, Public, Private, Protected, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)

void UUI_SpawnMenuWidget_C::STATIC_UpdateOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateOptions");

	UUI_SpawnMenuWidget_C_UpdateOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_RemainingFPText_ColorAndOpacity
// (Net, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_SpawnMenuWidget_C::Get_RemainingFPText_ColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_RemainingFPText_ColorAndOpacity");

	UUI_SpawnMenuWidget_C_Get_RemainingFPText_ColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_CurrentFPText_ColorAndOpacity
// (Net, NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_SpawnMenuWidget_C::Get_CurrentFPText_ColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_CurrentFPText_ColorAndOpacity");

	UUI_SpawnMenuWidget_C_Get_CurrentFPText_ColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_RemainingFPText
// (NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_SpawnMenuWidget_C::Get_RemainingFPText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_RemainingFPText");

	UUI_SpawnMenuWidget_C_Get_RemainingFPText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_CurrentFPText
// (Net, NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_SpawnMenuWidget_C::Get_CurrentFPText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_CurrentFPText");

	UUI_SpawnMenuWidget_C_Get_CurrentFPText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_TotalPriceText
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_SpawnMenuWidget_C::Get_TotalPriceText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_TotalPriceText");

	UUI_SpawnMenuWidget_C_Get_TotalPriceText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateCurrentFP
// (Net, NetReliable, Exec, Native, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SpawnMenuWidget_C::UpdateCurrentFP()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateCurrentFP");

	UUI_SpawnMenuWidget_C_UpdateCurrentFP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateTotalPrice
// (NetReliable, Exec, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_SpawnMenuWidget_C::UpdateTotalPrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateTotalPrice");

	UUI_SpawnMenuWidget_C_UpdateTotalPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.SelectionValid
// (Native, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::SelectionValid(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.SelectionValid");

	UUI_SpawnMenuWidget_C_SelectionValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSelectedLocation
// (Net, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::GetSelectedLocation(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSelectedLocation");

	UUI_SpawnMenuWidget_C_GetSelectedLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.SelectLocation
// (Net, NetReliable, Native, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UUI_SpawnChoiceWidget_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SpawnMenuWidget_C::SelectLocation(class UUI_SpawnChoiceWidget_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.SelectLocation");

	UUI_SpawnMenuWidget_C_SelectLocation_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__RandomLocation_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature
// (Net, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C** this                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SpawnMenuWidget_C::STATIC_BndEvt__RandomLocation_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature(class UUI_SpawnChoiceWidget_C** this)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__RandomLocation_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature");

	UUI_SpawnMenuWidget_C_BndEvt__RandomLocation_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature_Params params;
	params.this = this;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__ShelterLocation_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature
// (Net, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C** this                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SpawnMenuWidget_C::STATIC_BndEvt__ShelterLocation_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature(class UUI_SpawnChoiceWidget_C** this)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__ShelterLocation_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature");

	UUI_SpawnMenuWidget_C_BndEvt__ShelterLocation_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature_Params params;
	params.this = this;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__SquadLocation_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C** this                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SpawnMenuWidget_C::STATIC_BndEvt__SquadLocation_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature(class UUI_SpawnChoiceWidget_C** this)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__SquadLocation_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature");

	UUI_SpawnMenuWidget_C_BndEvt__SquadLocation_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature_Params params;
	params.this = this;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Construct
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UUI_SpawnMenuWidget_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Construct");

	UUI_SpawnMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__SectorLocation_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
// (Net, NetReliable, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SpawnChoiceWidget_C** this                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SpawnMenuWidget_C::STATIC_BndEvt__SectorLocation_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature(class UUI_SpawnChoiceWidget_C** this)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__SectorLocation_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature");

	UUI_SpawnMenuWidget_C_BndEvt__SectorLocation_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature_Params params;
	params.this = this;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Tick
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Tick");

	UUI_SpawnMenuWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__ReviveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (NetReliable, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UUI_SpawnMenuWidget_C::STATIC_BndEvt__ReviveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__ReviveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnMenuWidget_C_BndEvt__ReviveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.ExecuteUbergraph_UI_SpawnMenuWidget
// (NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnMenuWidget_C::ExecuteUbergraph_UI_SpawnMenuWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.ExecuteUbergraph_UI_SpawnMenuWidget");

	UUI_SpawnMenuWidget_C_ExecuteUbergraph_UI_SpawnMenuWidget_Params params;
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

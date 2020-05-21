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

// Function ServerInfoWidget.ServerInfoWidget_C.SetValid
// (Net, Exec, Event, Static, MulticastDelegate, Private, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          Valid                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerInfoWidget_C::STATIC_SetValid(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.SetValid");

	UServerInfoWidget_C_SetValid_Params params;
	params.Valid = Valid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.Connect
// ()
// Parameters:
// struct FString*                password                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UServerInfoWidget_C::Connect(struct FString* password)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.Connect");

	UServerInfoWidget_C_Connect_Params params;
	params.password = password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.SetColor
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, DLLImport, BlueprintPure)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerInfoWidget_C::STATIC_SetColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.SetColor");

	UServerInfoWidget_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.UpdateFromServerInfo
// (Event, MulticastDelegate, Public, Private, NetServer, HasOutParms, NetClient, DLLImport, NetValidate)
// Parameters:
// struct FServerInfo*            ServerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UServerInfoWidget_C::UpdateFromServerInfo(struct FServerInfo* ServerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.UpdateFromServerInfo");

	UServerInfoWidget_C_UpdateFromServerInfo_Params params;
	params.ServerInfo = ServerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.OnSynchronizeProperties
// (NetRequest, Exec, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UServerInfoWidget_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnSynchronizeProperties");

	UServerInfoWidget_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UServerInfoWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UServerInfoWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
// (Native, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UServerInfoWidget_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature");

	UServerInfoWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.Construct
// (Net, Native, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UServerInfoWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.Construct");

	UServerInfoWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.ExecuteUbergraph_ServerInfoWidget
// (Net, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, DLLImport, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerInfoWidget_C::ExecuteUbergraph_ServerInfoWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.ExecuteUbergraph_ServerInfoWidget");

	UServerInfoWidget_C_ExecuteUbergraph_ServerInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.OnRemoved__DelegateSignature
// ()
// Parameters:
// struct FServerInfo*            Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UServerInfoWidget_C::OnRemoved__DelegateSignature(struct FServerInfo* Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnRemoved__DelegateSignature");

	UServerInfoWidget_C_OnRemoved__DelegateSignature_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.OnDoubleClicked__DelegateSignature
// ()
// Parameters:
// class UServerInfoWidget_C**    ServerInfoWidget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UServerInfoWidget_C::OnDoubleClicked__DelegateSignature(class UServerInfoWidget_C** ServerInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnDoubleClicked__DelegateSignature");

	UServerInfoWidget_C_OnDoubleClicked__DelegateSignature_Params params;
	params.ServerInfoWidget = ServerInfoWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.OnClicked__DelegateSignature
// ()
// Parameters:
// class UServerInfoWidget_C**    ServerInfoWidget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UServerInfoWidget_C::OnClicked__DelegateSignature(class UServerInfoWidget_C** ServerInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnClicked__DelegateSignature");

	UServerInfoWidget_C_OnClicked__DelegateSignature_Params params;
	params.ServerInfoWidget = ServerInfoWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

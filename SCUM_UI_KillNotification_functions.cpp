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

// Function UI_KillNotification.UI_KillNotification_C.SetMessage
// (Net, NetReliable, Exec, NetResponse, NetMulticast, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FText*                  prefix                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  characterName                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  suffix                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_KillNotification_C::SetMessage(struct FText* prefix, struct FText* characterName, struct FText* suffix)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillNotification.UI_KillNotification_C.SetMessage");

	UUI_KillNotification_C_SetMessage_Params params;
	params.prefix = prefix;
	params.characterName = characterName;
	params.suffix = suffix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KillNotification.UI_KillNotification_C.GetMessageVisibility
// (Net, Exec, Native, Event, NetResponse, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_KillNotification_C::GetMessageVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillNotification.UI_KillNotification_C.GetMessageVisibility");

	UUI_KillNotification_C_GetMessageVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_KillNotification.UI_KillNotification_C.Construct
// (Net, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_KillNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillNotification.UI_KillNotification_C.Construct");

	UUI_KillNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_KillNotification.UI_KillNotification_C.ExecuteUbergraph_UI_KillNotification
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_KillNotification_C::ExecuteUbergraph_UI_KillNotification(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KillNotification.UI_KillNotification_C.ExecuteUbergraph_UI_KillNotification");

	UUI_KillNotification_C_ExecuteUbergraph_UI_KillNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

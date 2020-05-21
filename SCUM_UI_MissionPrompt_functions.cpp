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

// Function UI_MissionPrompt.UI_MissionPrompt_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (Net, NetRequest, Exec, Native, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UUI_MissionPrompt_C::STATIC_BndEvt__YesButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionPrompt.UI_MissionPrompt_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UUI_MissionPrompt_C_BndEvt__YesButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionPrompt.UI_MissionPrompt_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (NetRequest, Exec, Native, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UUI_MissionPrompt_C::STATIC_BndEvt__NoButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionPrompt.UI_MissionPrompt_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UUI_MissionPrompt_C_BndEvt__NoButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionPrompt.UI_MissionPrompt_C.ExecuteUbergraph_UI_MissionPrompt
// (Net, Exec, Native, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionPrompt_C::STATIC_ExecuteUbergraph_UI_MissionPrompt(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionPrompt.UI_MissionPrompt_C.ExecuteUbergraph_UI_MissionPrompt");

	UUI_MissionPrompt_C_ExecuteUbergraph_UI_MissionPrompt_Params params;
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

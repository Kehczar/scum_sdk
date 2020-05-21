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

// Function UI_CriminalRecord.UI_CriminalRecord_C.InitFromCharacterTemplate
// (Net, NetReliable, Exec, Native, Event, NetResponse, NetMulticast, Public, Delegate, HasOutParms, DLLImport, BlueprintPure)
// Parameters:
// struct FCharacterTemplate*     Template                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CriminalRecord_C::InitFromCharacterTemplate(struct FCharacterTemplate* Template)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.InitFromCharacterTemplate");

	UUI_CriminalRecord_C_InitFromCharacterTemplate_Params params;
	params.Template = Template;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.ClearSkills
// (Net, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Protected, NetServer)

void UUI_CriminalRecord_C::STATIC_ClearSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.ClearSkills");

	UUI_CriminalRecord_C_ClearSkills_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.ChangeAttribute
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// ESkillAttribute*               Attribute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CriminalRecord_C::ChangeAttribute(ESkillAttribute* Attribute, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.ChangeAttribute");

	UUI_CriminalRecord_C_ChangeAttribute_Params params;
	params.Attribute = Attribute;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.AddSkill
// (Net, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// struct FSkillTemplate*         SkillTemplate                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CriminalRecord_C::STATIC_AddSkill(struct FSkillTemplate* SkillTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.AddSkill");

	UUI_CriminalRecord_C_AddSkill_Params params;
	params.SkillTemplate = SkillTemplate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Protected, NetServer)

void UUI_CriminalRecord_C::STATIC_BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	UUI_CriminalRecord_C_BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
// (NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer)

void UUI_CriminalRecord_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature");

	UUI_CriminalRecord_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.ExecuteUbergraph_UI_CriminalRecord
// (Net, NetReliable, Event, NetResponse, NetMulticast, Public, Protected, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CriminalRecord_C::ExecuteUbergraph_UI_CriminalRecord(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.ExecuteUbergraph_UI_CriminalRecord");

	UUI_CriminalRecord_C_ExecuteUbergraph_UI_CriminalRecord_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.OnCancelClicked__DelegateSignature
// ()

void UUI_CriminalRecord_C::OnCancelClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.OnCancelClicked__DelegateSignature");

	UUI_CriminalRecord_C_OnCancelClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecord.UI_CriminalRecord_C.OnOkClicked__DelegateSignature
// ()

void UUI_CriminalRecord_C::OnOkClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecord.UI_CriminalRecord_C.OnOkClicked__DelegateSignature");

	UUI_CriminalRecord_C_OnOkClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

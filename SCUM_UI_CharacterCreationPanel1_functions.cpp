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

// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ApplyPrisonerShirt
// (Net, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void UUI_CharacterCreationPanel1_C::STATIC_ApplyPrisonerShirt()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ApplyPrisonerShirt");

	UUI_CharacterCreationPanel1_C_ApplyPrisonerShirt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetBustSize
// (NetRequest, Exec, Event, NetResponse, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// float                          Size                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::GetBustSize(float* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetBustSize");

	UUI_CharacterCreationPanel1_C_GetBustSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateAppearanceOptions
// (NetRequest, Exec, Native, NetResponse, Static, Public, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_UpdateAppearanceOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateAppearanceOptions");

	UUI_CharacterCreationPanel1_C_UpdateAppearanceOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetPenisSize
// (Net, NetReliable, Exec, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// float                          Size                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::GetPenisSize(float* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetPenisSize");

	UUI_CharacterCreationPanel1_C_GetPenisSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.IsProfileNameInUse
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::STATIC_IsProfileNameInUse(struct FString* Name, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.IsProfileNameInUse");

	UUI_CharacterCreationPanel1_C_IsProfileNameInUse_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.SetDefaultName
// (NetRequest, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_SetDefaultName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.SetDefaultName");

	UUI_CharacterCreationPanel1_C_SetDefaultName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetInUseMsgVisibility
// (NetRequest, Exec, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_CharacterCreationPanel1_C::STATIC_GetInUseMsgVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetInUseMsgVisibility");

	UUI_CharacterCreationPanel1_C_GetInUseMsgVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.IsNameValid
// (Net, NetReliable, Exec, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FString*                characterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_CharacterCreationPanel1_C::STATIC_IsNameValid(struct FString* characterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.IsNameValid");

	UUI_CharacterCreationPanel1_C_IsNameValid_Params params;
	params.characterName = characterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Get_ButtonSwitchToCriminalRecord_bIsEnabled_1
// (Net, NetRequest, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_CharacterCreationPanel1_C::Get_ButtonSwitchToCriminalRecord_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Get_ButtonSwitchToCriminalRecord_bIsEnabled_1");

	UUI_CharacterCreationPanel1_C_Get_ButtonSwitchToCriminalRecord_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.RandomizeSkillsByAttribute
// (NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// ESkillAttribute*               Attribute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::RandomizeSkillsByAttribute(ESkillAttribute* Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.RandomizeSkillsByAttribute");

	UUI_CharacterCreationPanel1_C_RandomizeSkillsByAttribute_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.PlayPrisonerEnteringSequence
// (NetRequest, Event, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// bool*                          backwards                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::STATIC_PlayPrisonerEnteringSequence(bool* backwards)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.PlayPrisonerEnteringSequence");

	UUI_CharacterCreationPanel1_C_PlayPrisonerEnteringSequence_Params params;
	params.backwards = backwards;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.RandomizeSkillsPanel
// ()

void UUI_CharacterCreationPanel1_C::RandomizeSkillsPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.RandomizeSkillsPanel");

	UUI_CharacterCreationPanel1_C_RandomizeSkillsPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.RandomizeAttributesPanel
// (Net, Exec, Native, Event, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void UUI_CharacterCreationPanel1_C::RandomizeAttributesPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.RandomizeAttributesPanel");

	UUI_CharacterCreationPanel1_C_RandomizeAttributesPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnSkillSliderDeselected
// (NetReliable, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// class UUI_CC_SkillSlider_C**   Slider                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::OnSkillSliderDeselected(class UUI_CC_SkillSlider_C** Slider)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnSkillSliderDeselected");

	UUI_CharacterCreationPanel1_C_OnSkillSliderDeselected_Params params;
	params.Slider = Slider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnSkillSliderSelected
// (Native, Event, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// class UUI_CC_SkillSlider_C**   Slider                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::STATIC_OnSkillSliderSelected(class UUI_CC_SkillSlider_C** Slider)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnSkillSliderSelected");

	UUI_CharacterCreationPanel1_C_OnSkillSliderSelected_Params params;
	params.Slider = Slider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetSkillTemplates
// (Net, NetReliable, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// TArray<struct FSkillTemplate>  allSkills                      (Parm, OutParm, ZeroConstructor)

void UUI_CharacterCreationPanel1_C::STATIC_GetSkillTemplates(TArray<struct FSkillTemplate>* allSkills)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetSkillTemplates");

	UUI_CharacterCreationPanel1_C_GetSkillTemplates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (allSkills != nullptr)
		*allSkills = params.allSkills;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetSkillTemplatesByAttribute
// (Exec, Native, Event, NetResponse, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// ESkillAttribute*               Attribute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSkillTemplate>  outSkills                      (Parm, OutParm, ZeroConstructor)

void UUI_CharacterCreationPanel1_C::GetSkillTemplatesByAttribute(ESkillAttribute* Attribute, TArray<struct FSkillTemplate>* outSkills)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetSkillTemplatesByAttribute");

	UUI_CharacterCreationPanel1_C_GetSkillTemplatesByAttribute_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outSkills != nullptr)
		*outSkills = params.outSkills;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnSkillValueChanged
// (Exec, Native, NetMulticast, Public, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, NetValidate)
// Parameters:
// ESkillAttribute*               Attribute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUI_CC_SkillSlider_C**   Slider                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::OnSkillValueChanged(ESkillAttribute* Attribute, class UUI_CC_SkillSlider_C** Slider)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnSkillValueChanged");

	UUI_CharacterCreationPanel1_C_OnSkillValueChanged_Params params;
	params.Attribute = Attribute;
	params.Slider = Slider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateSkillsForAttribute
// (Net, NetReliable, Event, NetResponse, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// ESkillAttribute*               Attribute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::UpdateSkillsForAttribute(ESkillAttribute* Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateSkillsForAttribute");

	UUI_CharacterCreationPanel1_C_UpdateSkillsForAttribute_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateSkillsPanel
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_UpdateSkillsPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateSkillsPanel");

	UUI_CharacterCreationPanel1_C_UpdateSkillsPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.InitSkills
// (Exec, Event, NetResponse, Static, Public, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_InitSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.InitSkills");

	UUI_CharacterCreationPanel1_C_InitSkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateTriangle
// (NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::UpdateTriangle(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateTriangle");

	UUI_CharacterCreationPanel1_C_UpdateTriangle_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ModifyAttributeModifier
// (Exec, Native, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// class UUI_CC_AttributeModifier_C** attributeModifier              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         Modifier                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::STATIC_ModifyAttributeModifier(class UUI_CC_AttributeModifier_C** attributeModifier, float* Modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ModifyAttributeModifier");

	UUI_CharacterCreationPanel1_C_ModifyAttributeModifier_Params params;
	params.attributeModifier = attributeModifier;
	params.Modifier = Modifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ModifySetAttributesByAge
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// struct FVector4*               lastAgeModifiers               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::STATIC_ModifySetAttributesByAge(struct FVector4* lastAgeModifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ModifySetAttributesByAge");

	UUI_CharacterCreationPanel1_C_ModifySetAttributesByAge_Params params;
	params.lastAgeModifiers = lastAgeModifiers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetAgeBonusForAttribute
// (NetReliable, NetResponse, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// ESkillAttribute*               Attribute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Modifier                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::GetAgeBonusForAttribute(ESkillAttribute* Attribute, float* Modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetAgeBonusForAttribute");

	UUI_CharacterCreationPanel1_C_GetAgeBonusForAttribute_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Modifier != nullptr)
		*Modifier = params.Modifier;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateAvailablePoints
// (Exec, Native, Static, Public, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintPure, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_UpdateAvailablePoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.UpdateAvailablePoints");

	UUI_CharacterCreationPanel1_C_UpdateAvailablePoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.DecreaseAttributeModifier
// (Net, NetReliable, NetRequest, Native, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// class UUI_CC_AttributeModifier_C** attributeModifier              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         adjustmentStep                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::DecreaseAttributeModifier(class UUI_CC_AttributeModifier_C** attributeModifier, float* adjustmentStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.DecreaseAttributeModifier");

	UUI_CharacterCreationPanel1_C_DecreaseAttributeModifier_Params params;
	params.attributeModifier = attributeModifier;
	params.adjustmentStep = adjustmentStep;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.IncreaseAttributeModifier
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// class UUI_CC_AttributeModifier_C** attributeModifier              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         adjustmentStep                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::STATIC_IncreaseAttributeModifier(class UUI_CC_AttributeModifier_C** attributeModifier, float* adjustmentStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.IncreaseAttributeModifier");

	UUI_CharacterCreationPanel1_C_IncreaseAttributeModifier_Params params;
	params.attributeModifier = attributeModifier;
	params.adjustmentStep = adjustmentStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ApplyTemplateToPrisoners
// (NetRequest, Exec, Event, Public, Protected, Delegate, HasOutParms, NetValidate)
// Parameters:
// bool*                          applySkills                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          applyExact                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCharacterTemplate      CharacterTemplate              (Parm, OutParm)

void UUI_CharacterCreationPanel1_C::ApplyTemplateToPrisoners(bool* applySkills, bool* applyExact, struct FCharacterTemplate* CharacterTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ApplyTemplateToPrisoners");

	UUI_CharacterCreationPanel1_C_ApplyTemplateToPrisoners_Params params;
	params.applySkills = applySkills;
	params.applyExact = applyExact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CharacterTemplate != nullptr)
		*CharacterTemplate = params.CharacterTemplate;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetNumberTextWithSign
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// float*                         Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   numberWithSignText             (Parm, OutParm)

void UUI_CharacterCreationPanel1_C::STATIC_GetNumberTextWithSign(float* Number, struct FText* numberWithSignText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.GetNumberTextWithSign");

	UUI_CharacterCreationPanel1_C_GetNumberTextWithSign_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (numberWithSignText != nullptr)
		*numberWithSignText = params.numberWithSignText;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.SetAge
// (Net, NetReliable, Native, NetMulticast, MulticastDelegate, Public, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int*                           Age                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::SetAge(int* Age)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.SetAge");

	UUI_CharacterCreationPanel1_C_SetAge_Params params;
	params.Age = Age;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnMouseButtonDown_1
// (NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_CharacterCreationPanel1_C::STATIC_OnMouseButtonDown_1(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnMouseButtonDown_1");

	UUI_CharacterCreationPanel1_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Construct
// (Net, NetReliable, Exec, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Construct");

	UUI_CharacterCreationPanel1_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_50_OnIndexChanged__DelegateSignature
// (Net, Native, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         LeftoverPercentage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_50_OnIndexChanged__DelegateSignature(int* Index, float* LeftoverPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_50_OnIndexChanged__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_50_OnIndexChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.LeftoverPercentage = LeftoverPercentage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_LeanFatMuscleTriangle_K2Node_ComponentBoundEvent_5_AttributesChanged__DelegateSignature
// (Exec, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FVector4*               Attributes                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__UI_LeanFatMuscleTriangle_K2Node_ComponentBoundEvent_5_AttributesChanged__DelegateSignature(struct FVector4* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_LeanFatMuscleTriangle_K2Node_ComponentBoundEvent_5_AttributesChanged__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__UI_LeanFatMuscleTriangle_K2Node_ComponentBoundEvent_5_AttributesChanged__DelegateSignature_Params params;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__TattooSlider_K2Node_ComponentBoundEvent_152_OnIndexChanged__DelegateSignature
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         LeftoverPercentage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__TattooSlider_K2Node_ComponentBoundEvent_152_OnIndexChanged__DelegateSignature(int* Index, float* LeftoverPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__TattooSlider_K2Node_ComponentBoundEvent_152_OnIndexChanged__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__TattooSlider_K2Node_ComponentBoundEvent_152_OnIndexChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.LeftoverPercentage = LeftoverPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__HeadSlider_K2Node_ComponentBoundEvent_153_OnIndexChanged__DelegateSignature
// (NetRequest, Native, Event, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         LeftoverPercentage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__HeadSlider_K2Node_ComponentBoundEvent_153_OnIndexChanged__DelegateSignature(int* Index, float* LeftoverPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__HeadSlider_K2Node_ComponentBoundEvent_153_OnIndexChanged__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__HeadSlider_K2Node_ComponentBoundEvent_153_OnIndexChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.LeftoverPercentage = LeftoverPercentage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CC_ProgressBar_C_0_K2Node_ComponentBoundEvent_242_OnIndexChanged__DelegateSignature
// (NetReliable, Exec, Native, Event, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         LeftoverPercentage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__UI_CC_ProgressBar_C_0_K2Node_ComponentBoundEvent_242_OnIndexChanged__DelegateSignature(int* Index, float* LeftoverPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CC_ProgressBar_C_0_K2Node_ComponentBoundEvent_242_OnIndexChanged__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__UI_CC_ProgressBar_C_0_K2Node_ComponentBoundEvent_242_OnIndexChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.LeftoverPercentage = LeftoverPercentage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierStrength_K2Node_ComponentBoundEvent_36_OnIncrease__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__AttributeModifierStrength_K2Node_ComponentBoundEvent_36_OnIncrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierStrength_K2Node_ComponentBoundEvent_36_OnIncrease__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__AttributeModifierStrength_K2Node_ComponentBoundEvent_36_OnIncrease__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierStrength_K2Node_ComponentBoundEvent_40_OnDecrease__DelegateSignature
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__AttributeModifierStrength_K2Node_ComponentBoundEvent_40_OnDecrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierStrength_K2Node_ComponentBoundEvent_40_OnDecrease__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__AttributeModifierStrength_K2Node_ComponentBoundEvent_40_OnDecrease__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierConstitution_K2Node_ComponentBoundEvent_47_OnIncrease__DelegateSignature
// (NetMulticast, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::BndEvt__AttributeModifierConstitution_K2Node_ComponentBoundEvent_47_OnIncrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierConstitution_K2Node_ComponentBoundEvent_47_OnIncrease__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__AttributeModifierConstitution_K2Node_ComponentBoundEvent_47_OnIncrease__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierConstitution_K2Node_ComponentBoundEvent_59_OnDecrease__DelegateSignature
// (NetReliable, NetMulticast, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::BndEvt__AttributeModifierConstitution_K2Node_ComponentBoundEvent_59_OnDecrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierConstitution_K2Node_ComponentBoundEvent_59_OnDecrease__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__AttributeModifierConstitution_K2Node_ComponentBoundEvent_59_OnDecrease__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierDexterity_K2Node_ComponentBoundEvent_68_OnIncrease__DelegateSignature
// (NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__AttributeModifierDexterity_K2Node_ComponentBoundEvent_68_OnIncrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierDexterity_K2Node_ComponentBoundEvent_68_OnIncrease__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__AttributeModifierDexterity_K2Node_ComponentBoundEvent_68_OnIncrease__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierDexterity_K2Node_ComponentBoundEvent_81_OnDecrease__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__AttributeModifierDexterity_K2Node_ComponentBoundEvent_81_OnDecrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierDexterity_K2Node_ComponentBoundEvent_81_OnDecrease__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__AttributeModifierDexterity_K2Node_ComponentBoundEvent_81_OnDecrease__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierIntelligence_K2Node_ComponentBoundEvent_92_OnIncrease__DelegateSignature
// (NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__AttributeModifierIntelligence_K2Node_ComponentBoundEvent_92_OnIncrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierIntelligence_K2Node_ComponentBoundEvent_92_OnIncrease__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__AttributeModifierIntelligence_K2Node_ComponentBoundEvent_92_OnIncrease__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierIntelligence_K2Node_ComponentBoundEvent_107_OnDecrease__DelegateSignature
// (Net, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__AttributeModifierIntelligence_K2Node_ComponentBoundEvent_107_OnDecrease__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__AttributeModifierIntelligence_K2Node_ComponentBoundEvent_107_OnDecrease__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__AttributeModifierIntelligence_K2Node_ComponentBoundEvent_107_OnDecrease__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Tick
// (Exec, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Tick");

	UUI_CharacterCreationPanel1_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_MenuButton_1_K2Node_ComponentBoundEvent_170_OnClicked__DelegateSignature
// (Net, NetReliable, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__UI_MenuButton_1_K2Node_ComponentBoundEvent_170_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_MenuButton_1_K2Node_ComponentBoundEvent_170_OnClicked__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__UI_MenuButton_1_K2Node_ComponentBoundEvent_170_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_173_OnClicked__DelegateSignature
// (NetReliable, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_173_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_173_OnClicked__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_173_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonSwitchToCriminalRecord_K2Node_ComponentBoundEvent_209_OnClicked__DelegateSignature
// (Net, NetRequest, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__ButtonSwitchToCriminalRecord_K2Node_ComponentBoundEvent_209_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonSwitchToCriminalRecord_K2Node_ComponentBoundEvent_209_OnClicked__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__ButtonSwitchToCriminalRecord_K2Node_ComponentBoundEvent_209_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1199_OnOkClicked__DelegateSignature
// (NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1199_OnOkClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1199_OnOkClicked__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1199_OnOkClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1260_OnCancelClicked__DelegateSignature
// (Net, NetReliable, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1260_OnCancelClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1260_OnCancelClicked__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__UI_CriminalRecord_K2Node_ComponentBoundEvent_1260_OnCancelClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_1387_OnClicked__DelegateSignature
// (Net, Exec, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_1387_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_1387_OnClicked__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_1387_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonRandomizeAttributes_K2Node_ComponentBoundEvent_132_OnClicked__DelegateSignature
// (Net, NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__ButtonRandomizeAttributes_K2Node_ComponentBoundEvent_132_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonRandomizeAttributes_K2Node_ComponentBoundEvent_132_OnClicked__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__ButtonRandomizeAttributes_K2Node_ComponentBoundEvent_132_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonRandomizeSkills_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature
// (Net, Exec, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__ButtonRandomizeSkills_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ButtonRandomizeSkills_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__ButtonRandomizeSkills_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameTextSecondPage_K2Node_ComponentBoundEvent_489_OnEditableTextBoxCommittedEvent__DelegateSignature
// (Net, Exec, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__NameTextSecondPage_K2Node_ComponentBoundEvent_489_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameTextSecondPage_K2Node_ComponentBoundEvent_489_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__NameTextSecondPage_K2Node_ComponentBoundEvent_489_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameText_K2Node_ComponentBoundEvent_495_OnEditableTextBoxCommittedEvent__DelegateSignature
// (NetRequest, Exec, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__NameText_K2Node_ComponentBoundEvent_495_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameText_K2Node_ComponentBoundEvent_495_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__NameText_K2Node_ComponentBoundEvent_495_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameText_K2Node_ComponentBoundEvent_52_OnEditableTextBoxChangedEvent__DelegateSignature
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__NameText_K2Node_ComponentBoundEvent_52_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameText_K2Node_ComponentBoundEvent_52_OnEditableTextBoxChangedEvent__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__NameText_K2Node_ComponentBoundEvent_52_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameTextSecondPage_K2Node_ComponentBoundEvent_108_OnEditableTextBoxChangedEvent__DelegateSignature
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__NameTextSecondPage_K2Node_ComponentBoundEvent_108_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__NameTextSecondPage_K2Node_ComponentBoundEvent_108_OnEditableTextBoxChangedEvent__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__NameTextSecondPage_K2Node_ComponentBoundEvent_108_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ShowErrorDialog
// (Net, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  Message                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_CharacterCreationPanel1_C::STATIC_ShowErrorDialog(struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ShowErrorDialog");

	UUI_CharacterCreationPanel1_C_ShowErrorDialog_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnUserProfileCreated
// (Net, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_OnUserProfileCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.OnUserProfileCreated");

	UUI_CharacterCreationPanel1_C_OnUserProfileCreated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BeginWaitingOnServerResponse
// (NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_BeginWaitingOnServerResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BeginWaitingOnServerResponse");

	UUI_CharacterCreationPanel1_C_BeginWaitingOnServerResponse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.EndWaitingOnServerResponse
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_EndWaitingOnServerResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.EndWaitingOnServerResponse");

	UUI_CharacterCreationPanel1_C_EndWaitingOnServerResponse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Keep Server Connection Alive
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CharacterCreationPanel1_C::STATIC_Keep_Server_Connection_Alive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.Keep Server Connection Alive");

	UUI_CharacterCreationPanel1_C_Keep_Server_Connection_Alive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__PenisSizeSlider_K2Node_ComponentBoundEvent_0_OnIndexChanged__DelegateSignature
// (Net, NetRequest, Native, Event, NetResponse, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         LeftoverPercentage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::BndEvt__PenisSizeSlider_K2Node_ComponentBoundEvent_0_OnIndexChanged__DelegateSignature(int* Index, float* LeftoverPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__PenisSizeSlider_K2Node_ComponentBoundEvent_0_OnIndexChanged__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__PenisSizeSlider_K2Node_ComponentBoundEvent_0_OnIndexChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.LeftoverPercentage = LeftoverPercentage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ConcealedModeSlider_K2Node_ComponentBoundEvent_1_OnIndexChanged__DelegateSignature
// (NetReliable, Event, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         LeftoverPercentage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__ConcealedModeSlider_K2Node_ComponentBoundEvent_1_OnIndexChanged__DelegateSignature(int* Index, float* LeftoverPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__ConcealedModeSlider_K2Node_ComponentBoundEvent_1_OnIndexChanged__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__ConcealedModeSlider_K2Node_ComponentBoundEvent_1_OnIndexChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.LeftoverPercentage = LeftoverPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CC_ProgressBar_0_K2Node_ComponentBoundEvent_2_OnIndexChanged__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         LeftoverPercentage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__UI_CC_ProgressBar_0_K2Node_ComponentBoundEvent_2_OnIndexChanged__DelegateSignature(int* Index, float* LeftoverPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__UI_CC_ProgressBar_0_K2Node_ComponentBoundEvent_2_OnIndexChanged__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__UI_CC_ProgressBar_0_K2Node_ComponentBoundEvent_2_OnIndexChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.LeftoverPercentage = LeftoverPercentage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__BreastSizeSlider_K2Node_ComponentBoundEvent_3_OnIndexChanged__DelegateSignature
// (NetReliable, NetRequest, Static, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         LeftoverPercentage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::STATIC_BndEvt__BreastSizeSlider_K2Node_ComponentBoundEvent_3_OnIndexChanged__DelegateSignature(int* Index, float* LeftoverPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.BndEvt__BreastSizeSlider_K2Node_ComponentBoundEvent_3_OnIndexChanged__DelegateSignature");

	UUI_CharacterCreationPanel1_C_BndEvt__BreastSizeSlider_K2Node_ComponentBoundEvent_3_OnIndexChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.LeftoverPercentage = LeftoverPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ExecuteUbergraph_UI_CharacterCreationPanel1
// (NetRequest, Event, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CharacterCreationPanel1_C::STATIC_ExecuteUbergraph_UI_CharacterCreationPanel1(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterCreationPanel1.UI_CharacterCreationPanel1_C.ExecuteUbergraph_UI_CharacterCreationPanel1");

	UUI_CharacterCreationPanel1_C_ExecuteUbergraph_UI_CharacterCreationPanel1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

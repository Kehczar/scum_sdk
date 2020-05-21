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

// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetPercentage
// (NetRequest, Exec, Event, NetResponse, Static, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         Percentage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_SkillSlider_C::STATIC_SetPercentage(float* Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetPercentage");

	UUI_CC_SkillSlider_C_SetPercentage_Params params;
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetMaxLevelAndExperienceFromPoints
// (NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, NetClient, DLLImport, NetValidate)
// Parameters:
// float*                         Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_SkillSlider_C::STATIC_SetMaxLevelAndExperienceFromPoints(float* Points, bool* isSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetMaxLevelAndExperienceFromPoints");

	UUI_CC_SkillSlider_C_SetMaxLevelAndExperienceFromPoints_Params params;
	params.Points = Points;
	params.isSelected = isSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetMaxLevelAndExperience
// (Net, Native, Event, NetResponse, Static, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESkillLevel*                   Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         experiencePercentage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_SkillSlider_C::STATIC_SetMaxLevelAndExperience(ESkillLevel* Level, float* experiencePercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetMaxLevelAndExperience");

	UUI_CC_SkillSlider_C_SetMaxLevelAndExperience_Params params;
	params.Level = Level;
	params.experiencePercentage = experiencePercentage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetSkillLevelAndExperience
// (NetReliable, NetRequest, Exec, Native, Event, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESkillLevel*                   Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Experience                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_SkillSlider_C::SetSkillLevelAndExperience(ESkillLevel* Level, float* Experience)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SetSkillLevelAndExperience");

	UUI_CC_SkillSlider_C_SetSkillLevelAndExperience_Params params;
	params.Level = Level;
	params.Experience = Experience;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.OnSynchronizeProperties
// (Net, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_CC_SkillSlider_C::STATIC_OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.OnSynchronizeProperties");

	UUI_CC_SkillSlider_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_98_OnIndexChanged__DelegateSignature
// (Net, NetRequest, Native, Event, NetResponse, Static, Public, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         LeftoverPercentage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_SkillSlider_C::STATIC_BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_98_OnIndexChanged__DelegateSignature(int* Index, float* LeftoverPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_98_OnIndexChanged__DelegateSignature");

	UUI_CC_SkillSlider_C_BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_98_OnIndexChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.LeftoverPercentage = LeftoverPercentage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.Construct
// (Net, NetReliable, NetRequest, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_CC_SkillSlider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.Construct");

	UUI_CC_SkillSlider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_2_MouseUp__DelegateSignature
// (Net, NetReliable, Exec, Native, Event, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_CC_SkillSlider_C::BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_2_MouseUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_2_MouseUp__DelegateSignature");

	UUI_CC_SkillSlider_C_BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_2_MouseUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_6_MouseDown__DelegateSignature
// (NetRequest, Native, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_CC_SkillSlider_C::STATIC_BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_6_MouseDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_6_MouseDown__DelegateSignature");

	UUI_CC_SkillSlider_C_BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_6_MouseDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.ExecuteUbergraph_UI_CC_SkillSlider
// (NetReliable, NetRequest, Exec, Native, MulticastDelegate, Public, Private, Delegate, DLLImport, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_SkillSlider_C::ExecuteUbergraph_UI_CC_SkillSlider(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.ExecuteUbergraph_UI_CC_SkillSlider");

	UUI_CC_SkillSlider_C_ExecuteUbergraph_UI_CC_SkillSlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderDeselected__DelegateSignature
// ()
// Parameters:
// class UUI_CC_SkillSlider_C**   Slider                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CC_SkillSlider_C::SliderDeselected__DelegateSignature(class UUI_CC_SkillSlider_C** Slider)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderDeselected__DelegateSignature");

	UUI_CC_SkillSlider_C_SliderDeselected__DelegateSignature_Params params;
	params.Slider = Slider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderSelected__DelegateSignature
// ()
// Parameters:
// class UUI_CC_SkillSlider_C**   Slider                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CC_SkillSlider_C::SliderSelected__DelegateSignature(class UUI_CC_SkillSlider_C** Slider)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderSelected__DelegateSignature");

	UUI_CC_SkillSlider_C_SliderSelected__DelegateSignature_Params params;
	params.Slider = Slider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderChanged__DelegateSignature
// ()
// Parameters:
// ESkillAttribute*               Attribute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUI_CC_SkillSlider_C**   Slider                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CC_SkillSlider_C::SliderChanged__DelegateSignature(ESkillAttribute* Attribute, class UUI_CC_SkillSlider_C** Slider)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_SkillSlider.UI_CC_SkillSlider_C.SliderChanged__DelegateSignature");

	UUI_CC_SkillSlider_C_SliderChanged__DelegateSignature_Params params;
	params.Attribute = Attribute;
	params.Slider = Slider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

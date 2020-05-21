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

// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetAIDetectionBarPercent
// (Net, NetReliable, Exec, Native, Event, Static, Private, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPrisonerLifeIndicatorsSprite_C::STATIC_GetAIDetectionBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetAIDetectionBarPercent");

	UPrisonerLifeIndicatorsSprite_C_GetAIDetectionBarPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetNoiseBarPercent
// (NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPrisonerLifeIndicatorsSprite_C::GetNoiseBarPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetNoiseBarPercent");

	UPrisonerLifeIndicatorsSprite_C_GetNoiseBarPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Get_BloodDropBox_Visibility_1
// (Net, NetRequest, Exec, NetResponse, Static, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UPrisonerLifeIndicatorsSprite_C::STATIC_Get_BloodDropBox_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Get_BloodDropBox_Visibility_1");

	UPrisonerLifeIndicatorsSprite_C_Get_BloodDropBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetImageVisibility
// (Net, NetRequest, Event, NetResponse, Static, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// EBodyPart*                     bodyPart                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage**                 Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::STATIC_SetImageVisibility(EBodyPart* bodyPart, class UImage** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetImageVisibility");

	UPrisonerLifeIndicatorsSprite_C_SetImageVisibility_Params params;
	params.bodyPart = bodyPart;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetDefaultPrisoner
// (Net, NetReliable, Native, NetResponse, Static, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrisoner*               Prisoner                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::STATIC_GetDefaultPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetDefaultPrisoner");

	UPrisonerLifeIndicatorsSprite_C_GetDefaultPrisoner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Prisoner != nullptr)
		*Prisoner = params.Prisoner;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetProgressBar
// (Net, Exec, Native, NetResponse, Static, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCircularProgressBarSprites_C* circularProgresBar             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::STATIC_GetProgressBar(int* Index, class UCircularProgressBarSprites_C** circularProgresBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetProgressBar");

	UPrisonerLifeIndicatorsSprite_C_GetProgressBar_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (circularProgresBar != nullptr)
		*circularProgresBar = params.circularProgresBar;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetDefaultPrisonerToMonitor
// (NetRequest, Exec, Native, Static, NetMulticast, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::STATIC_SetDefaultPrisonerToMonitor(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetDefaultPrisonerToMonitor");

	UPrisonerLifeIndicatorsSprite_C_SetDefaultPrisonerToMonitor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateIndicators
// (Net, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Public, HasOutParms)

void UPrisonerLifeIndicatorsSprite_C::STATIC_UpdateIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateIndicators");

	UPrisonerLifeIndicatorsSprite_C_UpdateIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetPrisonerToMonitor
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::STATIC_SetPrisonerToMonitor(class APrisoner** Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetPrisonerToMonitor");

	UPrisonerLifeIndicatorsSprite_C_SetPrisonerToMonitor_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Construct
// (Net, NetReliable, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UPrisonerLifeIndicatorsSprite_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Construct");

	UPrisonerLifeIndicatorsSprite_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateLifeIndicatorsEvent
// (NetReliable, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UPrisonerLifeIndicatorsSprite_C::UpdateLifeIndicatorsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateLifeIndicatorsEvent");

	UPrisonerLifeIndicatorsSprite_C_UpdateLifeIndicatorsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.OnPrisonerSet
// (Net, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UPrisonerLifeIndicatorsSprite_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.OnPrisonerSet");

	UPrisonerLifeIndicatorsSprite_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.OnStartDiving
// (Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UPrisonerLifeIndicatorsSprite_C::OnStartDiving()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.OnStartDiving");

	UPrisonerLifeIndicatorsSprite_C_OnStartDiving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetBreathingBarPercent
// (Net, NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         frontCirclePercent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         backCirclePercent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::STATIC_SetBreathingBarPercent(float* frontCirclePercent, float* backCirclePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetBreathingBarPercent");

	UPrisonerLifeIndicatorsSprite_C_SetBreathingBarPercent_Params params;
	params.frontCirclePercent = frontCirclePercent;
	params.backCirclePercent = backCirclePercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.HideBreathingWidgets
// (Net, NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UPrisonerLifeIndicatorsSprite_C::HideBreathingWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.HideBreathingWidgets");

	UPrisonerLifeIndicatorsSprite_C_HideBreathingWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.ShowBreathingWidgets
// (NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UPrisonerLifeIndicatorsSprite_C::ShowBreathingWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.ShowBreathingWidgets");

	UPrisonerLifeIndicatorsSprite_C_ShowBreathingWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetNoiseBarPercent
// (Net, NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::SetNoiseBarPercent(float* percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetNoiseBarPercent");

	UPrisonerLifeIndicatorsSprite_C_SetNoiseBarPercent_Params params;
	params.percent = percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Tick
// (Exec, Event, NetResponse, Static, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::STATIC_Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Tick");

	UPrisonerLifeIndicatorsSprite_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetAIDetectionBarPercent
// (NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::SetAIDetectionBarPercent(float* percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetAIDetectionBarPercent");

	UPrisonerLifeIndicatorsSprite_C_SetAIDetectionBarPercent_Params params;
	params.percent = percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.ExecuteUbergraph_PrisonerLifeIndicatorsSprite
// (NetReliable, NetRequest, Exec, Native, Event, Static, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrisonerLifeIndicatorsSprite_C::STATIC_ExecuteUbergraph_PrisonerLifeIndicatorsSprite(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.ExecuteUbergraph_PrisonerLifeIndicatorsSprite");

	UPrisonerLifeIndicatorsSprite_C_ExecuteUbergraph_PrisonerLifeIndicatorsSprite_Params params;
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

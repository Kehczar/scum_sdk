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

// Function Sicknesses.Sicknesses_C.HasContentSizeChanged
// (Net, NetRequest, Exec, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           oldSicknessCount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           newSicknessCount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           contentSizeChanged             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USicknesses_C::HasContentSizeChanged(int* oldSicknessCount, int* newSicknessCount, bool* contentSizeChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.HasContentSizeChanged");

	USicknesses_C_HasContentSizeChanged_Params params;
	params.oldSicknessCount = oldSicknessCount;
	params.newSicknessCount = newSicknessCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (contentSizeChanged != nullptr)
		*contentSizeChanged = params.contentSizeChanged;
}


// Function Sicknesses.Sicknesses_C.CheckForAlarms
// (NetRequest, Exec, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           previousSicknessCount          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           sicknessCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USicknesses_C::CheckForAlarms(int* previousSicknessCount, int* sicknessCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.CheckForAlarms");

	USicknesses_C_CheckForAlarms_Params params;
	params.previousSicknessCount = previousSicknessCount;
	params.sicknessCount = sicknessCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.UpdateSicknessCount
// (NetReliable, Exec, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)

void USicknesses_C::UpdateSicknessCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.UpdateSicknessCount");

	USicknesses_C_UpdateSicknessCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.SicknessToText
// (Net, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// class USickness**              sicknessRef                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   sicknessName                   (Parm, OutParm)
// struct FText                   sicknessState                  (Parm, OutParm)
// struct FText                   sicknessPhase                  (Parm, OutParm)

void USicknesses_C::STATIC_SicknessToText(class USickness** sicknessRef, struct FText* sicknessName, struct FText* sicknessState, struct FText* sicknessPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.SicknessToText");

	USicknesses_C_SicknessToText_Params params;
	params.sicknessRef = sicknessRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (sicknessName != nullptr)
		*sicknessName = params.sicknessName;
	if (sicknessState != nullptr)
		*sicknessState = params.sicknessState;
	if (sicknessPhase != nullptr)
		*sicknessPhase = params.sicknessPhase;
}


// Function Sicknesses.Sicknesses_C.FillSicknessLine
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UParameterLine_C**       sicknessLineRef                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USickness**              Sickness                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USicknesses_C::STATIC_FillSicknessLine(class UParameterLine_C** sicknessLineRef, class USickness** Sickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.FillSicknessLine");

	USicknesses_C_FillSicknessLine_Params params;
	params.sicknessLineRef = sicknessLineRef;
	params.Sickness = Sickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.UpdateSicknessLine
// ()

void USicknesses_C::UpdateSicknessLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.UpdateSicknessLine");

	USicknesses_C_UpdateSicknessLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.CreateSicknessLine
// (NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class USickness**              sicknessRef                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParameterLine_C*        sicknessParameterLine          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USicknesses_C::STATIC_CreateSicknessLine(class USickness** sicknessRef, class UParameterLine_C** sicknessParameterLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.CreateSicknessLine");

	USicknesses_C_CreateSicknessLine_Params params;
	params.sicknessRef = sicknessRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (sicknessParameterLine != nullptr)
		*sicknessParameterLine = params.sicknessParameterLine;
}


// Function Sicknesses.Sicknesses_C.ShowSickness
// (NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility*              Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USicknesses_C::STATIC_ShowSickness(ESlateVisibility* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.ShowSickness");

	USicknesses_C_ShowSickness_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.InitSicknesses
// (NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void USicknesses_C::STATIC_InitSicknesses()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.InitSicknesses");

	USicknesses_C_InitSicknesses_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.AddSicknessLine
// (Net, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParameterLine_C**       sicknessLineRef                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USicknesses_C::STATIC_AddSicknessLine(class UParameterLine_C** sicknessLineRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.AddSicknessLine");

	USicknesses_C_AddSicknessLine_Params params;
	params.sicknessLineRef = sicknessLineRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.CreateSicknessLineFromText
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  sicknessName                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  SicknessTextValue              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  SicknessMaxValue               (BlueprintVisible, BlueprintReadOnly, Parm)
// class UParameterLine_C*        SicknessLine                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USicknesses_C::STATIC_CreateSicknessLineFromText(struct FText* sicknessName, struct FText* SicknessTextValue, struct FText* SicknessMaxValue, class UParameterLine_C** SicknessLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.CreateSicknessLineFromText");

	USicknesses_C_CreateSicknessLineFromText_Params params;
	params.sicknessName = sicknessName;
	params.SicknessTextValue = SicknessTextValue;
	params.SicknessMaxValue = SicknessMaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SicknessLine != nullptr)
		*SicknessLine = params.SicknessLine;
}


// Function Sicknesses.Sicknesses_C.GetSicknesses
// (Net, Native, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// TArray<class USickness*>       ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class USickness*> USicknesses_C::STATIC_GetSicknesses()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.GetSicknesses");

	USicknesses_C_GetSicknesses_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sicknesses.Sicknesses_C.SetSicknessCount
// (Net, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           sicknessCountToSet             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USicknesses_C::STATIC_SetSicknessCount(int* sicknessCountToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.SetSicknessCount");

	USicknesses_C_SetSicknessCount_Params params;
	params.sicknessCountToSet = sicknessCountToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.ClearSicknessLines
// (NetReliable, Exec, Native, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)

void USicknesses_C::ClearSicknessLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.ClearSicknessLines");

	USicknesses_C_ClearSicknessLines_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.CountSicknesses
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int                            numberOfSicknesses             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USicknesses_C::STATIC_CountSicknesses(int* numberOfSicknesses)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.CountSicknesses");

	USicknesses_C_CountSicknesses_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (numberOfSicknesses != nullptr)
		*numberOfSicknesses = params.numberOfSicknesses;
}


// Function Sicknesses.Sicknesses_C.HasSicknessCountChanged
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           sicknessCountChanged           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USicknesses_C::STATIC_HasSicknessCountChanged(bool* sicknessCountChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.HasSicknessCountChanged");

	USicknesses_C_HasSicknessCountChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (sicknessCountChanged != nullptr)
		*sicknessCountChanged = params.sicknessCountChanged;
}


// Function Sicknesses.Sicknesses_C.UpdateSicknesses
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)

void USicknesses_C::STATIC_UpdateSicknesses()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.UpdateSicknesses");

	USicknesses_C_UpdateSicknesses_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.GetTitleText
// (Net, NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USicknesses_C::STATIC_GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.GetTitleText");

	USicknesses_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Sicknesses.Sicknesses_C.GetDefaultTitle
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void USicknesses_C::STATIC_GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.GetDefaultTitle");

	USicknesses_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function Sicknesses.Sicknesses_C.SelectCustomColor
// (NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USicknesses_C::STATIC_SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.SelectCustomColor");

	USicknesses_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function Sicknesses.Sicknesses_C.Construct
// (Net, NetReliable, Event, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void USicknesses_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.Construct");

	USicknesses_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.OnMinimize
// (Net, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USicknesses_C::STATIC_OnMinimize(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.OnMinimize");

	USicknesses_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.OnPrisonerSet
// (NetRequest, Event, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void USicknesses_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.OnPrisonerSet");

	USicknesses_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.UpdateContent
// (Net, NetRequest, Event, NetResponse, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void USicknesses_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.UpdateContent");

	USicknesses_C_UpdateContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.SicknessEmergedShouldActivateAlarm
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void USicknesses_C::STATIC_SicknessEmergedShouldActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.SicknessEmergedShouldActivateAlarm");

	USicknesses_C_SicknessEmergedShouldActivateAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.SicknessGoneShouldDeactivateAlarm
// (Net, NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void USicknesses_C::STATIC_SicknessGoneShouldDeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.SicknessGoneShouldDeactivateAlarm");

	USicknesses_C_SicknessGoneShouldDeactivateAlarm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.ExecuteUbergraph_Sicknesses
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USicknesses_C::STATIC_ExecuteUbergraph_Sicknesses(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.ExecuteUbergraph_Sicknesses");

	USicknesses_C_ExecuteUbergraph_Sicknesses_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.AlarmOffSicknessesEventDispatcher__DelegateSignature
// ()

void USicknesses_C::AlarmOffSicknessesEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.AlarmOffSicknessesEventDispatcher__DelegateSignature");

	USicknesses_C_AlarmOffSicknessesEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sicknesses.Sicknesses_C.AlarmOnSicknessesEventDispatcher__DelegateSignature
// ()

void USicknesses_C::AlarmOnSicknessesEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sicknesses.Sicknesses_C.AlarmOnSicknessesEventDispatcher__DelegateSignature");

	USicknesses_C_AlarmOnSicknessesEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

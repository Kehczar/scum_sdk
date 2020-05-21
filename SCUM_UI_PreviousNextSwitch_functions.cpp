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

// Function ConZ.PreviousNextSwitchWidget.SwitchToPrevious
// ()

void UUI_PreviousNextSwitch_C::SwitchToPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.PreviousNextSwitchWidget.SwitchToPrevious");

	UUI_PreviousNextSwitch_C_SwitchToPrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.PreviousNextSwitchWidget.SwitchToNext
// ()

void UUI_PreviousNextSwitch_C::SwitchToNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.PreviousNextSwitchWidget.SwitchToNext");

	UUI_PreviousNextSwitch_C_SwitchToNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ConZ.PreviousNextSwitchWidget.OnSwitchClickedDelegate__DelegateSignature
// ()
// Parameters:
// int*                           widgetArrayIndex               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PreviousNextSwitch_C::OnSwitchClickedDelegate__DelegateSignature(int* widgetArrayIndex, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ConZ.PreviousNextSwitchWidget.OnSwitchClickedDelegate__DelegateSignature");

	UUI_PreviousNextSwitch_C_OnSwitchClickedDelegate__DelegateSignature_Params params;
	params.widgetArrayIndex = widgetArrayIndex;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

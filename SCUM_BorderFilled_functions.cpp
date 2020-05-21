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

// Function BorderFilled.BorderFilled_C.UpdateBorderFilled
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)

void UBorderFilled_C::STATIC_UpdateBorderFilled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.UpdateBorderFilled");

	UBorderFilled_C_UpdateBorderFilled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.SetBottomMarginOn
// (NetReliable, NetRequest, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          shouldBottomMarginBeOn         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBorderFilled_C::SetBottomMarginOn(bool* shouldBottomMarginBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetBottomMarginOn");

	UBorderFilled_C_SetBottomMarginOn_Params params;
	params.shouldBottomMarginBeOn = shouldBottomMarginBeOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.SetPaddingOnBackgroundImage
// (NetReliable, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         Margin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         marginGap                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBorderFilled_C::STATIC_SetPaddingOnBackgroundImage(float* Margin, float* marginGap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetPaddingOnBackgroundImage");

	UBorderFilled_C_SetPaddingOnBackgroundImage_Params params;
	params.Margin = Margin;
	params.marginGap = marginGap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.SetColorOnBackgroundImage
// (Net, NetRequest, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor*           InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBorderFilled_C::SetColorOnBackgroundImage(struct FLinearColor* InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetColorOnBackgroundImage");

	UBorderFilled_C_SetColorOnBackgroundImage_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.SetBackgroundColor
// (Net, NetRequest, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor*           backgroundColorToSet           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBorderFilled_C::SetBackgroundColor(struct FLinearColor* backgroundColorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetBackgroundColor");

	UBorderFilled_C_SetBackgroundColor_Params params;
	params.backgroundColorToSet = backgroundColorToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.UpdateBackgroundColor
// (NetRequest, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor*           NewBackgroundColor             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBorderFilled_C::UpdateBackgroundColor(struct FLinearColor* NewBackgroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.UpdateBackgroundColor");

	UBorderFilled_C_UpdateBackgroundColor_Params params;
	params.NewBackgroundColor = NewBackgroundColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.SetBorderColor
// (Net, NetReliable, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor*           borderColorToSet               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBorderFilled_C::SetBorderColor(struct FLinearColor* borderColorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetBorderColor");

	UBorderFilled_C_SetBorderColor_Params params;
	params.borderColorToSet = borderColorToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.Construct
// (NetReliable, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UBorderFilled_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.Construct");

	UBorderFilled_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.OnSynchronizeProperties
// (Net, Native, Event, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UBorderFilled_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.OnSynchronizeProperties");

	UBorderFilled_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.ExecuteUbergraph_BorderFilled
// (NetReliable, Native, Static, NetMulticast, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBorderFilled_C::STATIC_ExecuteUbergraph_BorderFilled(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.ExecuteUbergraph_BorderFilled");

	UBorderFilled_C_ExecuteUbergraph_BorderFilled_Params params;
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

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

// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.HighlightPartially
// (Net, NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Private, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_NonSelectableText_C::STATIC_HighlightPartially(float* percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.HighlightPartially");

	UUI_CC_NonSelectableText_C_HighlightPartially_Params params;
	params.percent = percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Unhighlight
// (NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)

void UUI_CC_NonSelectableText_C::STATIC_Unhighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Unhighlight");

	UUI_CC_NonSelectableText_C_Unhighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Highlight
// (NetReliable, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)

void UUI_CC_NonSelectableText_C::STATIC_Highlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Highlight");

	UUI_CC_NonSelectableText_C_Highlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.SetTextColour
// (NetReliable, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Private, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor*           Colour                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_NonSelectableText_C::STATIC_SetTextColour(struct FLinearColor* Colour)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.SetTextColour");

	UUI_CC_NonSelectableText_C_SetTextColour_Params params;
	params.Colour = Colour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.SetText
// (NetReliable, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CC_NonSelectableText_C::STATIC_SetText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.SetText");

	UUI_CC_NonSelectableText_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Construct
// (NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_CC_NonSelectableText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Construct");

	UUI_CC_NonSelectableText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.OnSynchronizeProperties
// (Native, Event, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UUI_CC_NonSelectableText_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.OnSynchronizeProperties");

	UUI_CC_NonSelectableText_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.ExecuteUbergraph_UI_CC_NonSelectableText
// (Exec, Native, Event, Static, MulticastDelegate, Public, Private, Delegate, DLLImport, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_NonSelectableText_C::STATIC_ExecuteUbergraph_UI_CC_NonSelectableText(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.ExecuteUbergraph_UI_CC_NonSelectableText");

	UUI_CC_NonSelectableText_C_ExecuteUbergraph_UI_CC_NonSelectableText_Params params;
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

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

// Function ConZ.ChatSuggestionWidget.SetText
// ()
// Parameters:
// struct FString*                Text                           (Parm, ZeroConstructor)

void UUI_ChatSuggestion_C::SetText(struct FString* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.ChatSuggestionWidget.SetText");

	UUI_ChatSuggestion_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.ChatSuggestionWidget.SetIsHighlighted
// ()
// Parameters:
// bool*                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ChatSuggestion_C::SetIsHighlighted(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.ChatSuggestionWidget.SetIsHighlighted");

	UUI_ChatSuggestion_C_SetIsHighlighted_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_ChatSuggestion.UI_ChatSuggestion_C
// 0x0000 (0x0280 - 0x0280)
class UUI_ChatSuggestion_C : public UChatSuggestionWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ChatSuggestion.UI_ChatSuggestion_C");
		return ptr;
	}


	void SetText(struct FString* Text);
	void SetIsHighlighted(bool* Value);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

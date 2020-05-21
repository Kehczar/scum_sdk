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

// Function ScrollableContent.ScrollableContent_C.GetTitleText
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UScrollableContent_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.GetTitleText");

	UScrollableContent_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScrollableContent.ScrollableContent_C.GetDefaultTitle
// (Net, NetRequest, Native, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void UScrollableContent_C::STATIC_GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.GetDefaultTitle");

	UScrollableContent_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function ScrollableContent.ScrollableContent_C.ResetInputChatLineString
// (NetRequest, Native, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UScrollableContent_C::STATIC_ResetInputChatLineString()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.ResetInputChatLineString");

	UScrollableContent_C_ResetInputChatLineString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableContent.ScrollableContent_C.SetInputChatLineString
// (Net, NetReliable, NetRequest, Exec, Native, MulticastDelegate, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  chatLineStringToSet            (BlueprintVisible, BlueprintReadOnly, Parm)

void UScrollableContent_C::SetInputChatLineString(struct FText* chatLineStringToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.SetInputChatLineString");

	UScrollableContent_C_SetInputChatLineString_Params params;
	params.chatLineStringToSet = chatLineStringToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableContent.ScrollableContent_C.GetInputChatLineText
// (NetReliable, NetRequest, Native, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   chatLineString                 (Parm, OutParm)

void UScrollableContent_C::STATIC_GetInputChatLineText(struct FText* chatLineString)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.GetInputChatLineText");

	UScrollableContent_C_GetInputChatLineText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (chatLineString != nullptr)
		*chatLineString = params.chatLineString;
}


// Function ScrollableContent.ScrollableContent_C.PrintChatMessages
// (Net, NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)

void UScrollableContent_C::STATIC_PrintChatMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.PrintChatMessages");

	UScrollableContent_C_PrintChatMessages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableContent.ScrollableContent_C.SelectCustomColor
// (Exec, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScrollableContent_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.SelectCustomColor");

	UScrollableContent_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function ScrollableContent.ScrollableContent_C.AutoCreateContent
// (NetReliable, NetRequest, Native, Event, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UScrollableContent_C::AutoCreateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.AutoCreateContent");

	UScrollableContent_C_AutoCreateContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableContent.ScrollableContent_C.PopulateMessageStrings
// ()

void UScrollableContent_C::PopulateMessageStrings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.PopulateMessageStrings");

	UScrollableContent_C_PopulateMessageStrings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableContent.ScrollableContent_C.AddTextLine
// (NetReliable, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText*                  textToSet                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          scrollToTheEnd                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           lineAdded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScrollableContent_C::AddTextLine(struct FText* textToSet, struct FLinearColor* Color, bool* scrollToTheEnd, bool* lineAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.AddTextLine");

	UScrollableContent_C_AddTextLine_Params params;
	params.textToSet = textToSet;
	params.Color = Color;
	params.scrollToTheEnd = scrollToTheEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lineAdded != nullptr)
		*lineAdded = params.lineAdded;
}


// Function ScrollableContent.ScrollableContent_C.OnMouseButtonDownOnConsole
// (NetReliable, Exec, Native, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UScrollableContent_C::STATIC_OnMouseButtonDownOnConsole(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.OnMouseButtonDownOnConsole");

	UScrollableContent_C_OnMouseButtonDownOnConsole_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScrollableContent.ScrollableContent_C.StartDrag
// (Net, NetReliable, Exec, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UScrollableContent_C::StartDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.StartDrag");

	UScrollableContent_C_StartDrag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableContent.ScrollableContent_C.BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature
// (NetReliable, Exec, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollableContent_C::BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UScrollableContent_C_BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableContent.ScrollableContent_C.Construct
// (Net, Exec, Native, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UScrollableContent_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.Construct");

	UScrollableContent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableContent.ScrollableContent_C.OnMinimize
// (Exec, Native, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollableContent_C::STATIC_OnMinimize(bool* shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.OnMinimize");

	UScrollableContent_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableContent.ScrollableContent_C.ExecuteUbergraph_ScrollableContent
// (Exec, Native, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollableContent_C::STATIC_ExecuteUbergraph_ScrollableContent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.ExecuteUbergraph_ScrollableContent");

	UScrollableContent_C_ExecuteUbergraph_ScrollableContent_Params params;
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

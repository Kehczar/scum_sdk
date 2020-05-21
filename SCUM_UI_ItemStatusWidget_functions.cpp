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

// Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.UpdateVisibility
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintPure)

void UUI_ItemStatusWidget_C::STATIC_UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.UpdateVisibility");

	UUI_ItemStatusWidget_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.Construct
// (NetReliable, NetRequest, Native, Event, Public, Private, HasDefaults, NetClient, BlueprintCallable)

void UUI_ItemStatusWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.Construct");

	UUI_ItemStatusWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.SetNameText
// (Net, Native, Event, Public, Private, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// struct FString*                Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_ItemStatusWidget_C::SetNameText(struct FString* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.SetNameText");

	UUI_ItemStatusWidget_C_SetNameText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.ExecuteUbergraph_UI_ItemStatusWidget
// (NetRequest, Native, Static, MulticastDelegate, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemStatusWidget_C::STATIC_ExecuteUbergraph_UI_ItemStatusWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemStatusWidget.UI_ItemStatusWidget_C.ExecuteUbergraph_UI_ItemStatusWidget");

	UUI_ItemStatusWidget_C_ExecuteUbergraph_UI_ItemStatusWidget_Params params;
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

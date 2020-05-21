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

// Function CustomGUIWindow.CustomGUIWindow_C.GetTitle
// (Net, NetReliable, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Title                          (Parm, OutParm)

void UCustomGUIWindow_C::STATIC_GetTitle(struct FText* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.GetTitle");

	UCustomGUIWindow_C_GetTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Title != nullptr)
		*Title = params.Title;
}


// Function CustomGUIWindow.CustomGUIWindow_C.SetTitle
// (NetRequest, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText*                  titleToSet                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UCustomGUIWindow_C::STATIC_SetTitle(struct FText* titleToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.SetTitle");

	UCustomGUIWindow_C_SetTitle_Params params;
	params.titleToSet = titleToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGUIWindow.CustomGUIWindow_C.AlarmOnWindowContent
// (NetReliable, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UCustomGUIWindow_C::STATIC_AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.AlarmOnWindowContent");

	UCustomGUIWindow_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGUIWindow.CustomGUIWindow_C.AlarmOffWindowContent
// (Net, NetResponse, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UCustomGUIWindow_C::STATIC_AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.AlarmOffWindowContent");

	UCustomGUIWindow_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomGUIWindow.CustomGUIWindow_C.ExecuteUbergraph_CustomGUIWindow
// (NetReliable, NetRequest, Exec, Native, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCustomGUIWindow_C::STATIC_ExecuteUbergraph_CustomGUIWindow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomGUIWindow.CustomGUIWindow_C.ExecuteUbergraph_CustomGUIWindow");

	UCustomGUIWindow_C_ExecuteUbergraph_CustomGUIWindow_Params params;
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

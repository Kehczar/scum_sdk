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

// Function UI_QuickAccessItemSwitcher3.UI_QuickAccessItemSwitcher3_C.PreConstruct
// (NetReliable, NetRequest, Native, NetResponse, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessItemSwitcher3_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemSwitcher3.UI_QuickAccessItemSwitcher3_C.PreConstruct");

	UUI_QuickAccessItemSwitcher3_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_QuickAccessItemSwitcher3.UI_QuickAccessItemSwitcher3_C.ExecuteUbergraph_UI_QuickAccessItemSwitcher3
// (NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_QuickAccessItemSwitcher3_C::ExecuteUbergraph_UI_QuickAccessItemSwitcher3(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickAccessItemSwitcher3.UI_QuickAccessItemSwitcher3_C.ExecuteUbergraph_UI_QuickAccessItemSwitcher3");

	UUI_QuickAccessItemSwitcher3_C_ExecuteUbergraph_UI_QuickAccessItemSwitcher3_Params params;
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

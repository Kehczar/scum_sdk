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

// Function UI_InspectedItem.UI_InspectedItem_C.SetIsToolForSomething
// (NetReliable, Native, Event, NetMulticast, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintEvent)
// Parameters:
// bool*                          IsTool                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InspectedItem_C::SetIsToolForSomething(bool* IsTool)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InspectedItem.UI_InspectedItem_C.SetIsToolForSomething");

	UUI_InspectedItem_C_SetIsToolForSomething_Params params;
	params.IsTool = IsTool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InspectedItem.UI_InspectedItem_C.ExecuteUbergraph_UI_InspectedItem
// (Net, Native, Event, NetMulticast, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InspectedItem_C::ExecuteUbergraph_UI_InspectedItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InspectedItem.UI_InspectedItem_C.ExecuteUbergraph_UI_InspectedItem");

	UUI_InspectedItem_C_ExecuteUbergraph_UI_InspectedItem_Params params;
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

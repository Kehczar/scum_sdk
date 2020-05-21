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

// Function UI_Border.UI_Border_C.SetColor
// (Net, Exec, Native, NetResponse, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Border_C::SetColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Border.UI_Border_C.SetColor");

	UUI_Border_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Border.UI_Border_C.OnSynchronizeProperties
// (NetReliable, NetRequest, Native, NetResponse, Private, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_Border_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Border.UI_Border_C.OnSynchronizeProperties");

	UUI_Border_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Border.UI_Border_C.ExecuteUbergraph_UI_Border
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Border_C::STATIC_ExecuteUbergraph_UI_Border(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Border.UI_Border_C.ExecuteUbergraph_UI_Border");

	UUI_Border_C_ExecuteUbergraph_UI_Border_Params params;
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

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

// Function FooterV2.FooterV2_C.SetText
// (NetReliable, NetRequest, Exec, Native, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText*                  textToSet                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor*           textColorToSet                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFooterV2_C::STATIC_SetText(struct FText* textToSet, struct FLinearColor* textColorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function FooterV2.FooterV2_C.SetText");

	UFooterV2_C_SetText_Params params;
	params.textToSet = textToSet;
	params.textColorToSet = textColorToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FooterV2.FooterV2_C.Construct
// (Net, NetRequest, Exec, Native, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UFooterV2_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FooterV2.FooterV2_C.Construct");

	UFooterV2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FooterV2.FooterV2_C.ExecuteUbergraph_FooterV2
// (Exec, Native, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFooterV2_C::STATIC_ExecuteUbergraph_FooterV2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FooterV2.FooterV2_C.ExecuteUbergraph_FooterV2");

	UFooterV2_C_ExecuteUbergraph_FooterV2_Params params;
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

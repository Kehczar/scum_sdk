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

// Function ConsoleTextLine.ConsoleTextLine_C.SetText
// (Net, NetReliable, Exec, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText*                  textToSet                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor*           textColorToSet                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleTextLine_C::STATIC_SetText(struct FText* textToSet, struct FLinearColor* textColorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleTextLine.ConsoleTextLine_C.SetText");

	UConsoleTextLine_C_SetText_Params params;
	params.textToSet = textToSet;
	params.textColorToSet = textColorToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleTextLine.ConsoleTextLine_C.Construct
// (NetReliable, Exec, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UConsoleTextLine_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleTextLine.ConsoleTextLine_C.Construct");

	UConsoleTextLine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleTextLine.ConsoleTextLine_C.ExecuteUbergraph_ConsoleTextLine
// (Net, Exec, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleTextLine_C::STATIC_ExecuteUbergraph_ConsoleTextLine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleTextLine.ConsoleTextLine_C.ExecuteUbergraph_ConsoleTextLine");

	UConsoleTextLine_C_ExecuteUbergraph_ConsoleTextLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

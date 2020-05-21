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

// Function UI_BasicTextWidget.UI_BasicTextWidget_C.SetCurrentText
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_BasicTextWidget_C::STATIC_SetCurrentText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BasicTextWidget.UI_BasicTextWidget_C.SetCurrentText");

	UUI_BasicTextWidget_C_SetCurrentText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BasicTextWidget.UI_BasicTextWidget_C.ExecuteUbergraph_UI_BasicTextWidget
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_BasicTextWidget_C::STATIC_ExecuteUbergraph_UI_BasicTextWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BasicTextWidget.UI_BasicTextWidget_C.ExecuteUbergraph_UI_BasicTextWidget");

	UUI_BasicTextWidget_C_ExecuteUbergraph_UI_BasicTextWidget_Params params;
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

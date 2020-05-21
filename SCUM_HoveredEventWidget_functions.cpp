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

// Function HoveredEventWidget.HoveredEventWidget_C.OnMouseEnter
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHoveredEventWidget_C::STATIC_OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoveredEventWidget.HoveredEventWidget_C.OnMouseEnter");

	UHoveredEventWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoveredEventWidget.HoveredEventWidget_C.OnMouseLeave
// (Net, NetReliable, NetRequest, Native, Event, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHoveredEventWidget_C::STATIC_OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoveredEventWidget.HoveredEventWidget_C.OnMouseLeave");

	UHoveredEventWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoveredEventWidget.HoveredEventWidget_C.ExecuteUbergraph_HoveredEventWidget
// (NetRequest, Exec, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHoveredEventWidget_C::STATIC_ExecuteUbergraph_HoveredEventWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoveredEventWidget.HoveredEventWidget_C.ExecuteUbergraph_HoveredEventWidget");

	UHoveredEventWidget_C_ExecuteUbergraph_HoveredEventWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoveredEventWidget.HoveredEventWidget_C.MouseLeft__DelegateSignature
// ()

void UHoveredEventWidget_C::MouseLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoveredEventWidget.HoveredEventWidget_C.MouseLeft__DelegateSignature");

	UHoveredEventWidget_C_MouseLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoveredEventWidget.HoveredEventWidget_C.MouseEntered__DelegateSignature
// ()

void UHoveredEventWidget_C::MouseEntered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoveredEventWidget.HoveredEventWidget_C.MouseEntered__DelegateSignature");

	UHoveredEventWidget_C_MouseEntered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

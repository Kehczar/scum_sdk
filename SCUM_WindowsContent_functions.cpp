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

// Function WindowsContent.WindowsContent_C.GetChildrenWindows
// (NetReliable, Native, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UCustomGUIWindow_C*> childrenWidgets                (Parm, OutParm, ZeroConstructor)

void UWindowsContent_C::STATIC_GetChildrenWindows(TArray<class UCustomGUIWindow_C*>* childrenWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.GetChildrenWindows");

	UWindowsContent_C_GetChildrenWindows_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (childrenWidgets != nullptr)
		*childrenWidgets = params.childrenWidgets;
}


// Function WindowsContent.WindowsContent_C.AddChildWindow
// (Net, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UCustomGUIWindow_C**     childWindowRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWindowsContent_C::AddChildWindow(class UCustomGUIWindow_C** childWindowRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.AddChildWindow");

	UWindowsContent_C_AddChildWindow_Params params;
	params.childWindowRef = childWindowRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsContent.WindowsContent_C.NotifyParentOnAlarmSwitchedOffOnContent
// (Net, NetReliable, Native, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UWindowsContent_C::STATIC_NotifyParentOnAlarmSwitchedOffOnContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.NotifyParentOnAlarmSwitchedOffOnContent");

	UWindowsContent_C_NotifyParentOnAlarmSwitchedOffOnContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsContent.WindowsContent_C.NotifyParentOnAlarmRaisedOnContent
// (Net, NetReliable, Native, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UWindowsContent_C::STATIC_NotifyParentOnAlarmRaisedOnContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.NotifyParentOnAlarmRaisedOnContent");

	UWindowsContent_C_NotifyParentOnAlarmRaisedOnContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsContent.WindowsContent_C.NotifyParentOnWindowsContentSizeChanged
// (NetRequest, Native, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UWindowsContent_C::STATIC_NotifyParentOnWindowsContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.NotifyParentOnWindowsContentSizeChanged");

	UWindowsContent_C_NotifyParentOnWindowsContentSizeChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsContent.WindowsContent_C.SetParentWindow
// (Net, Native, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCustomGUIWindow_C**     parentWindowToSet              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWindowsContent_C::STATIC_SetParentWindow(class UCustomGUIWindow_C** parentWindowToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.SetParentWindow");

	UWindowsContent_C_SetParentWindow_Params params;
	params.parentWindowToSet = parentWindowToSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsContent.WindowsContent_C.GetParentWindow
// (Net, Native, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCustomGUIWindow_C*      parentWindow                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWindowsContent_C::STATIC_GetParentWindow(class UCustomGUIWindow_C** parentWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.GetParentWindow");

	UWindowsContent_C_GetParentWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (parentWindow != nullptr)
		*parentWindow = params.parentWindow;
}


// Function WindowsContent.WindowsContent_C.WindowContentSizeChanged
// (Native, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)

void UWindowsContent_C::STATIC_WindowContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.WindowContentSizeChanged");

	UWindowsContent_C_WindowContentSizeChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsContent.WindowsContent_C.ExecuteUbergraph_WindowsContent
// (Net, NetReliable, NetRequest, Exec, Static, Public, Private, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWindowsContent_C::STATIC_ExecuteUbergraph_WindowsContent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsContent.WindowsContent_C.ExecuteUbergraph_WindowsContent");

	UWindowsContent_C_ExecuteUbergraph_WindowsContent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

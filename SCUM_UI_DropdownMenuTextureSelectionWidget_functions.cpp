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

// Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.OnMouseButtonDown_1
// (Net, NetReliable, NetRequest, Native, Event, Static, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_DropdownMenuTextureSelectionWidget_C::STATIC_OnMouseButtonDown_1(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.OnMouseButtonDown_1");

	UUI_DropdownMenuTextureSelectionWidget_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.PreConstruct
// (Net, NetReliable, NetRequest, Native, Event, Static, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DropdownMenuTextureSelectionWidget_C::STATIC_PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.PreConstruct");

	UUI_DropdownMenuTextureSelectionWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.Update
// (NetReliable, NetRequest, Native, Event, Static, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintEvent)

void UUI_DropdownMenuTextureSelectionWidget_C::STATIC_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.Update");

	UUI_DropdownMenuTextureSelectionWidget_C_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.ExecuteUbergraph_UI_DropdownMenuTextureSelectionWidget
// (Native, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_DropdownMenuTextureSelectionWidget_C::STATIC_ExecuteUbergraph_UI_DropdownMenuTextureSelectionWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.ExecuteUbergraph_UI_DropdownMenuTextureSelectionWidget");

	UUI_DropdownMenuTextureSelectionWidget_C_ExecuteUbergraph_UI_DropdownMenuTextureSelectionWidget_Params params;
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

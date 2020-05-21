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

// Function UI_ItemClass.UI_ItemClass_C.GetTexture
// (Net, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_ItemClass_C::STATIC_GetTexture(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemClass.UI_ItemClass_C.GetTexture");

	UUI_ItemClass_C_GetTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function UI_ItemClass.UI_ItemClass_C.OnMouseButtonDoubleClick
// (Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FGeometry*              InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_ItemClass_C::STATIC_OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemClass.UI_ItemClass_C.OnMouseButtonDoubleClick");

	UUI_ItemClass_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_ItemClass.UI_ItemClass_C.Init
// (Exec, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UClass**                 ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemClass_C::STATIC_Init(class UClass** ItemClass, class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemClass.UI_ItemClass_C.Init");

	UUI_ItemClass_C_Init_Params params;
	params.ItemClass = ItemClass;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemClass.UI_ItemClass_C.OnSynchronizeProperties
// (Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ItemClass_C::STATIC_OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemClass.UI_ItemClass_C.OnSynchronizeProperties");

	UUI_ItemClass_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemClass.UI_ItemClass_C.Construct
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UUI_ItemClass_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemClass.UI_ItemClass_C.Construct");

	UUI_ItemClass_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemClass.UI_ItemClass_C.ExecuteUbergraph_UI_ItemClass
// (Net, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemClass_C::STATIC_ExecuteUbergraph_UI_ItemClass(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemClass.UI_ItemClass_C.ExecuteUbergraph_UI_ItemClass");

	UUI_ItemClass_C_ExecuteUbergraph_UI_ItemClass_Params params;
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

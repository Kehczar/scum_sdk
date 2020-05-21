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

// Function UI_CustomBorder.UI_CustomBorder_C.PreConstruct
// (Native, Static, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CustomBorder_C::STATIC_PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomBorder.UI_CustomBorder_C.PreConstruct");

	UUI_CustomBorder_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CustomBorder.UI_CustomBorder_C.ExecuteUbergraph_UI_CustomBorder
// (Net, Exec, Native, Event, Static, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CustomBorder_C::STATIC_ExecuteUbergraph_UI_CustomBorder(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CustomBorder.UI_CustomBorder_C.ExecuteUbergraph_UI_CustomBorder");

	UUI_CustomBorder_C_ExecuteUbergraph_UI_CustomBorder_Params params;
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

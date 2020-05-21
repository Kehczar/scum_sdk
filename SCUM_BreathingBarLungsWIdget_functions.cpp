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

// Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.GetCriticalLungsAnimation
// (NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidgetAnimation* UBreathingBarLungsWidget_C::STATIC_GetCriticalLungsAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.GetCriticalLungsAnimation");

	UBreathingBarLungsWidget_C_GetCriticalLungsAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.Construct
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UBreathingBarLungsWidget_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.Construct");

	UBreathingBarLungsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.ExecuteUbergraph_BreathingBarLungsWidget
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBreathingBarLungsWidget_C::STATIC_ExecuteUbergraph_BreathingBarLungsWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathingBarLungsWIdget.BreathingBarLungsWidget_C.ExecuteUbergraph_BreathingBarLungsWidget");

	UBreathingBarLungsWidget_C_ExecuteUbergraph_BreathingBarLungsWidget_Params params;
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

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

// Function M1887_Reload_Event_ChamberEmpty.M1887_Reload_Event_ChamberEmpty_C.ExecuteUsingData
// (NetReliable, NetRequest, NetMulticast, Public, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UM1887_Reload_Event_ChamberEmpty_C::ExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function M1887_Reload_Event_ChamberEmpty.M1887_Reload_Event_ChamberEmpty_C.ExecuteUsingData");

	UM1887_Reload_Event_ChamberEmpty_C_ExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function M1887_Reload_Event_ChamberEmpty.M1887_Reload_Event_ChamberEmpty_C.CanExecuteUsingData
// (Net, Exec, NetMulticast, Public, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UM1887_Reload_Event_ChamberEmpty_C::CanExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function M1887_Reload_Event_ChamberEmpty.M1887_Reload_Event_ChamberEmpty_C.CanExecuteUsingData");

	UM1887_Reload_Event_ChamberEmpty_C_CanExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function M1887_Reload_Event_ChamberEmpty.M1887_Reload_Event_ChamberEmpty_C.OnActionAnimNotify
// (Net, Exec, Native, NetResponse, Static, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// ECharacterActionNotifyType*    notifyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UM1887_Reload_Event_ChamberEmpty_C::STATIC_OnActionAnimNotify(ECharacterActionNotifyType* notifyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function M1887_Reload_Event_ChamberEmpty.M1887_Reload_Event_ChamberEmpty_C.OnActionAnimNotify");

	UM1887_Reload_Event_ChamberEmpty_C_OnActionAnimNotify_Params params;
	params.notifyType = notifyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M1887_Reload_Event_ChamberEmpty.M1887_Reload_Event_ChamberEmpty_C.ExecuteUbergraph_M1887_Reload_Event_ChamberEmpty
// (NetRequest, Exec, NetMulticast, Public, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UM1887_Reload_Event_ChamberEmpty_C::ExecuteUbergraph_M1887_Reload_Event_ChamberEmpty(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function M1887_Reload_Event_ChamberEmpty.M1887_Reload_Event_ChamberEmpty_C.ExecuteUbergraph_M1887_Reload_Event_ChamberEmpty");

	UM1887_Reload_Event_ChamberEmpty_C_ExecuteUbergraph_M1887_Reload_Event_ChamberEmpty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

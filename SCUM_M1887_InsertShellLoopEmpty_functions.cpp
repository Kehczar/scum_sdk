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

// Function M1887_InsertShellLoopEmpty.M1887_InsertShellLoopEmpty_C.ExecuteUsingData
// (Native, Static, NetMulticast, Private, Delegate, HasOutParms, DLLImport)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UM1887_InsertShellLoopEmpty_C::STATIC_ExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function M1887_InsertShellLoopEmpty.M1887_InsertShellLoopEmpty_C.ExecuteUsingData");

	UM1887_InsertShellLoopEmpty_C_ExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function M1887_InsertShellLoopEmpty.M1887_InsertShellLoopEmpty_C.CanExecuteUsingData
// (Net, NetReliable, Exec, Native, NetMulticast, Private, Delegate, HasOutParms, DLLImport)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UM1887_InsertShellLoopEmpty_C::CanExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function M1887_InsertShellLoopEmpty.M1887_InsertShellLoopEmpty_C.CanExecuteUsingData");

	UM1887_InsertShellLoopEmpty_C_CanExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function M1887_InsertShellLoopEmpty.M1887_InsertShellLoopEmpty_C.OnActionAnimNotify
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// ECharacterActionNotifyType*    notifyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UM1887_InsertShellLoopEmpty_C::STATIC_OnActionAnimNotify(ECharacterActionNotifyType* notifyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function M1887_InsertShellLoopEmpty.M1887_InsertShellLoopEmpty_C.OnActionAnimNotify");

	UM1887_InsertShellLoopEmpty_C_OnActionAnimNotify_Params params;
	params.notifyType = notifyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M1887_InsertShellLoopEmpty.M1887_InsertShellLoopEmpty_C.ExecuteUbergraph_M1887_InsertShellLoopEmpty
// (NetReliable, NetRequest, NetMulticast, Private, Delegate, HasOutParms, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UM1887_InsertShellLoopEmpty_C::ExecuteUbergraph_M1887_InsertShellLoopEmpty(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function M1887_InsertShellLoopEmpty.M1887_InsertShellLoopEmpty_C.ExecuteUbergraph_M1887_InsertShellLoopEmpty");

	UM1887_InsertShellLoopEmpty_C_ExecuteUbergraph_M1887_InsertShellLoopEmpty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

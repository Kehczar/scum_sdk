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

// Function BP_M1_InsertClipInsertBulletLoop.BP_M1_InsertClipInsertBulletLoop_C.ExecuteUsingData
// (NetRequest, Event, Static, Private, Protected, HasDefaults, NetClient)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_M1_InsertClipInsertBulletLoop_C::STATIC_ExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_InsertClipInsertBulletLoop.BP_M1_InsertClipInsertBulletLoop_C.ExecuteUsingData");

	UBP_M1_InsertClipInsertBulletLoop_C_ExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_M1_InsertClipInsertBulletLoop.BP_M1_InsertClipInsertBulletLoop_C.CanExecuteUsingData
// (Net, NetRequest, Event, NetResponse, Private, Protected, HasDefaults, NetClient)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_M1_InsertClipInsertBulletLoop_C::CanExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_InsertClipInsertBulletLoop.BP_M1_InsertClipInsertBulletLoop_C.CanExecuteUsingData");

	UBP_M1_InsertClipInsertBulletLoop_C_CanExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_M1_InsertClipInsertBulletLoop.BP_M1_InsertClipInsertBulletLoop_C.OnActionAnimNotify
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)
// Parameters:
// ECharacterActionNotifyType*    notifyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_M1_InsertClipInsertBulletLoop_C::STATIC_OnActionAnimNotify(ECharacterActionNotifyType* notifyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_InsertClipInsertBulletLoop.BP_M1_InsertClipInsertBulletLoop_C.OnActionAnimNotify");

	UBP_M1_InsertClipInsertBulletLoop_C_OnActionAnimNotify_Params params;
	params.notifyType = notifyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_M1_InsertClipInsertBulletLoop.BP_M1_InsertClipInsertBulletLoop_C.ExecuteUbergraph_BP_M1_InsertClipInsertBulletLoop
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, Public, Private, Delegate, HasOutParms, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_M1_InsertClipInsertBulletLoop_C::ExecuteUbergraph_BP_M1_InsertClipInsertBulletLoop(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_InsertClipInsertBulletLoop.BP_M1_InsertClipInsertBulletLoop_C.ExecuteUbergraph_BP_M1_InsertClipInsertBulletLoop");

	UBP_M1_InsertClipInsertBulletLoop_C_ExecuteUbergraph_BP_M1_InsertClipInsertBulletLoop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

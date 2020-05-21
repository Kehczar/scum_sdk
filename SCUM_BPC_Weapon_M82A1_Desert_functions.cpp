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

// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.GetIgnoreSupportingHandIK
// (NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABPC_Weapon_M82A1_Desert_C::STATIC_GetIgnoreSupportingHandIK()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.GetIgnoreSupportingHandIK");

	ABPC_Weapon_M82A1_Desert_C_GetIgnoreSupportingHandIK_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.CanSwitchFiringMode
// (NetRequest, Native, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABPC_Weapon_M82A1_Desert_C::STATIC_CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.CanSwitchFiringMode");

	ABPC_Weapon_M82A1_Desert_C_CanSwitchFiringMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.ReceiveTick
// (Net, NetReliable, Native, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPC_Weapon_M82A1_Desert_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.ReceiveTick");

	ABPC_Weapon_M82A1_Desert_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.ReceiveBeginPlay
// (Net, NetReliable, Native, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void ABPC_Weapon_M82A1_Desert_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.ReceiveBeginPlay");

	ABPC_Weapon_M82A1_Desert_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.OnAttachmentAdded
// (NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class AWeapon**                sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment**      Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPC_Weapon_M82A1_Desert_C::STATIC_OnAttachmentAdded(class AWeapon** sender, class AWeaponAttachment** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.OnAttachmentAdded");

	ABPC_Weapon_M82A1_Desert_C_OnAttachmentAdded_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.OnAttachmentRemoved
// (Net, NetReliable, NetRequest, Exec, Event, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class AWeapon**                sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment**      Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPC_Weapon_M82A1_Desert_C::OnAttachmentRemoved(class AWeapon** sender, class AWeaponAttachment** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.OnAttachmentRemoved");

	ABPC_Weapon_M82A1_Desert_C_OnAttachmentRemoved_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.ExecuteUbergraph_BP_Weapon_M82A1
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPC_Weapon_M82A1_Desert_C::STATIC_ExecuteUbergraph_BP_Weapon_M82A1(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.ExecuteUbergraph_BP_Weapon_M82A1");

	ABPC_Weapon_M82A1_Desert_C_ExecuteUbergraph_BP_Weapon_M82A1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

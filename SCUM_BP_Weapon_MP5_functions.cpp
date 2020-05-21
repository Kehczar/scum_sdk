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

// Function BP_Weapon_MP5.BP_Weapon_MP5_C.CanAddAttachment
// (Net, NetReliable, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class AWeaponAttachment**      Attachment                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weapon_MP5_C::CanAddAttachment(class AWeaponAttachment** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MP5.BP_Weapon_MP5_C.CanAddAttachment");

	ABP_Weapon_MP5_C_CanAddAttachment_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_MP5.BP_Weapon_MP5_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Static, NetMulticast, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void ABP_Weapon_MP5_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MP5.BP_Weapon_MP5_C.ReceiveBeginPlay");

	ABP_Weapon_MP5_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MP5.BP_Weapon_MP5_C.OnAttachmentAdded
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class AWeapon**                sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment**      Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_MP5_C::STATIC_OnAttachmentAdded(class AWeapon** sender, class AWeaponAttachment** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MP5.BP_Weapon_MP5_C.OnAttachmentAdded");

	ABP_Weapon_MP5_C_OnAttachmentAdded_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MP5.BP_Weapon_MP5_C.OnAttachmentRemoved
// (NetReliable, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class AWeapon**                sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment**      Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_MP5_C::STATIC_OnAttachmentRemoved(class AWeapon** sender, class AWeaponAttachment** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MP5.BP_Weapon_MP5_C.OnAttachmentRemoved");

	ABP_Weapon_MP5_C_OnAttachmentRemoved_Params params;
	params.sender = sender;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MP5.BP_Weapon_MP5_C.ExecuteUbergraph_BP_Weapon_MP5
// (NetRequest, Native, Static, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_MP5_C::STATIC_ExecuteUbergraph_BP_Weapon_MP5(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MP5.BP_Weapon_MP5_C.ExecuteUbergraph_BP_Weapon_MP5");

	ABP_Weapon_MP5_C_ExecuteUbergraph_BP_Weapon_MP5_Params params;
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

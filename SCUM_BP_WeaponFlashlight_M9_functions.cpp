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

// Function BP_WeaponFlashlight_M9.BP_WeaponFlashlight_M9_C.BndEvt__SpotLight_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature
// (Net, NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// class UActorComponent**        Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bReset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponFlashlight_M9_C::BndEvt__SpotLight_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent** Component, bool* bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponFlashlight_M9.BP_WeaponFlashlight_M9_C.BndEvt__SpotLight_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature");

	ABP_WeaponFlashlight_M9_C_BndEvt__SpotLight_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature_Params params;
	params.Component = Component;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponFlashlight_M9.BP_WeaponFlashlight_M9_C.ExecuteUbergraph_BP_WeaponFlashlight_M9
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponFlashlight_M9_C::STATIC_ExecuteUbergraph_BP_WeaponFlashlight_M9(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponFlashlight_M9.BP_WeaponFlashlight_M9_C.ExecuteUbergraph_BP_WeaponFlashlight_M9");

	ABP_WeaponFlashlight_M9_C_ExecuteUbergraph_BP_WeaponFlashlight_M9_Params params;
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

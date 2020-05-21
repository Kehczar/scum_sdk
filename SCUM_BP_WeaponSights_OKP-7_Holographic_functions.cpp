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

// Function BP_WeaponSightBase.BP_WeaponSightBase_C.OnAttachedToItem
// (Net, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Private, Protected, Delegate, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponSights_OKP_7_Holographic_C::OnAttachedToItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSightBase.BP_WeaponSightBase_C.OnAttachedToItem");

	ABP_WeaponSights_OKP_7_Holographic_C_OnAttachedToItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponSightBase.BP_WeaponSightBase_C.OnDetachedFromItem
// (NetReliable, NetRequest, Event, Private, Protected, Delegate, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponSights_OKP_7_Holographic_C::OnDetachedFromItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSightBase.BP_WeaponSightBase_C.OnDetachedFromItem");

	ABP_WeaponSights_OKP_7_Holographic_C_OnDetachedFromItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponSightBase.BP_WeaponSightBase_C.ExecuteUbergraph_BP_WeaponSightBase
// (NetRequest, Exec, NetResponse, MulticastDelegate, Protected, Delegate, HasOutParms, BlueprintEvent, BlueprintPure, Const, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WeaponSights_OKP_7_Holographic_C::ExecuteUbergraph_BP_WeaponSightBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponSightBase.BP_WeaponSightBase_C.ExecuteUbergraph_BP_WeaponSightBase");

	ABP_WeaponSights_OKP_7_Holographic_C_ExecuteUbergraph_BP_WeaponSightBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

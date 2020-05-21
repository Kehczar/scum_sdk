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

// Function BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C.ReceiveTick
// (NetReliable, NetRequest, Native, Static, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SphereProximityTriggerComponent_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C.ReceiveTick");

	UBP_SphereProximityTriggerComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C.ReceiveBeginPlay
// (Net, NetRequest, Native, Static, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintEvent)

void UBP_SphereProximityTriggerComponent_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C.ReceiveBeginPlay");

	UBP_SphereProximityTriggerComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C.ExecuteUbergraph_BP_SphereProximityTriggerComponent
// (NetRequest, Native, Static, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SphereProximityTriggerComponent_C::STATIC_ExecuteUbergraph_BP_SphereProximityTriggerComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C.ExecuteUbergraph_BP_SphereProximityTriggerComponent");

	UBP_SphereProximityTriggerComponent_C_ExecuteUbergraph_BP_SphereProximityTriggerComponent_Params params;
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

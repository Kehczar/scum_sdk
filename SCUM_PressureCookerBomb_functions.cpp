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

// Function PressureCookerBomb.PressureCookerBomb_C.BP_OnArmed
// (Net, NetReliable, NetRequest, Exec, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)

void APressureCookerBomb_C::BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PressureCookerBomb.PressureCookerBomb_C.BP_OnArmed");

	APressureCookerBomb_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PressureCookerBomb.PressureCookerBomb_C.BP_OnDisarmed
// (Native, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)

void APressureCookerBomb_C::BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PressureCookerBomb.PressureCookerBomb_C.BP_OnDisarmed");

	APressureCookerBomb_C_BP_OnDisarmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PressureCookerBomb.PressureCookerBomb_C.ReceiveBeginPlay
// (Net, Native, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)

void APressureCookerBomb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PressureCookerBomb.PressureCookerBomb_C.ReceiveBeginPlay");

	APressureCookerBomb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PressureCookerBomb.PressureCookerBomb_C.ExecuteUbergraph_PressureCookerBomb
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APressureCookerBomb_C::STATIC_ExecuteUbergraph_PressureCookerBomb(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PressureCookerBomb.PressureCookerBomb_C.ExecuteUbergraph_PressureCookerBomb");

	APressureCookerBomb_C_ExecuteUbergraph_PressureCookerBomb_Params params;
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

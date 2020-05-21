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

// Function PipeBomb.PipeBomb_C.BP_OnArmed
// (NetReliable, Exec, Native, NetMulticast, HasOutParms, NetClient, DLLImport)

void APipeBomb_C::BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PipeBomb.PipeBomb_C.BP_OnArmed");

	APipeBomb_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PipeBomb.PipeBomb_C.ReceiveBeginPlay
// (NetRequest, Exec, Native, NetMulticast, HasOutParms, NetClient, DLLImport)

void APipeBomb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PipeBomb.PipeBomb_C.ReceiveBeginPlay");

	APipeBomb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PipeBomb.PipeBomb_C.BP_OnDisarmed
// (Net, NetReliable, Exec, Native, NetMulticast, HasOutParms, NetClient, DLLImport)

void APipeBomb_C::BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PipeBomb.PipeBomb_C.BP_OnDisarmed");

	APipeBomb_C_BP_OnDisarmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PipeBomb.PipeBomb_C.ExecuteUbergraph_PipeBomb
// (NetMulticast, HasOutParms, NetClient, DLLImport)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APipeBomb_C::ExecuteUbergraph_PipeBomb(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PipeBomb.PipeBomb_C.ExecuteUbergraph_PipeBomb");

	APipeBomb_C_ExecuteUbergraph_PipeBomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function Fireworks_Small.Fireworks_Small_C.LaunchShell
// (NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Protected, NetClient, BlueprintPure)

void AFireworks_Small_C::STATIC_LaunchShell()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fireworks_Small.Fireworks_Small_C.LaunchShell");

	AFireworks_Small_C_LaunchShell_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fireworks_Small.Fireworks_Small_C.ExecuteUbergraph_Fireworks_Small
// (Exec, Static, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFireworks_Small_C::STATIC_ExecuteUbergraph_Fireworks_Small(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fireworks_Small.Fireworks_Small_C.ExecuteUbergraph_Fireworks_Small");

	AFireworks_Small_C_ExecuteUbergraph_Fireworks_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

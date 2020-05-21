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

// Function Recurve_Bow.Recurve_Bow_C.ReceiveTick
// (Native, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPC_Recurve_Bow_80_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Recurve_Bow.Recurve_Bow_C.ReceiveTick");

	ABPC_Recurve_Bow_80_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Recurve_Bow.Recurve_Bow_C.ExecuteUbergraph_Recurve_Bow
// (Net, NetRequest, Exec, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPC_Recurve_Bow_80_C::ExecuteUbergraph_Recurve_Bow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Recurve_Bow.Recurve_Bow_C.ExecuteUbergraph_Recurve_Bow");

	ABPC_Recurve_Bow_80_C_ExecuteUbergraph_Recurve_Bow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

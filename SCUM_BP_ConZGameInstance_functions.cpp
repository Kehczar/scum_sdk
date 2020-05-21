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

// Function BP_ConZGameInstance.BP_ConZGameInstance_C.ReceiveInit
// (Net, NetRequest, Exec, Native, Event, NetResponse, Public, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void UBP_ConZGameInstance_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConZGameInstance.BP_ConZGameInstance_C.ReceiveInit");

	UBP_ConZGameInstance_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConZGameInstance.BP_ConZGameInstance_C.ExecuteUbergraph_BP_ConZGameInstance
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Public, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ConZGameInstance_C::ExecuteUbergraph_BP_ConZGameInstance(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConZGameInstance.BP_ConZGameInstance_C.ExecuteUbergraph_BP_ConZGameInstance");

	UBP_ConZGameInstance_C_ExecuteUbergraph_BP_ConZGameInstance_Params params;
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

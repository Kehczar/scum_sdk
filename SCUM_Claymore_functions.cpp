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

// Function Claymore.Claymore_C.BP_OnArmed
// (Net, NetReliable, Native, NetResponse, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)

void AClaymore_C::BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Claymore.Claymore_C.BP_OnArmed");

	AClaymore_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Claymore.Claymore_C.BP_OnDisarmed
// (NetRequest, Native, NetResponse, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)

void AClaymore_C::BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Claymore.Claymore_C.BP_OnDisarmed");

	AClaymore_C_BP_OnDisarmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Claymore.Claymore_C.ReceiveBeginPlay
// (Net, NetRequest, Native, NetResponse, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)

void AClaymore_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Claymore.Claymore_C.ReceiveBeginPlay");

	AClaymore_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Claymore.Claymore_C.ExecuteUbergraph_Claymore
// (Net, NetReliable, Native, Event, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AClaymore_C::ExecuteUbergraph_Claymore(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Claymore.Claymore_C.ExecuteUbergraph_Claymore");

	AClaymore_C_ExecuteUbergraph_Claymore_Params params;
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

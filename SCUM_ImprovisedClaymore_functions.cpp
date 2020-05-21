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

// Function ImprovisedClaymore.ImprovisedClaymore_C.BP_OnArmed
// (Net, Native, Event, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)

void AImprovisedClaymore_C::BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedClaymore.ImprovisedClaymore_C.BP_OnArmed");

	AImprovisedClaymore_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImprovisedClaymore.ImprovisedClaymore_C.BP_OnDisarmed
// (NetReliable, Native, Event, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)

void AImprovisedClaymore_C::BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedClaymore.ImprovisedClaymore_C.BP_OnDisarmed");

	AImprovisedClaymore_C_BP_OnDisarmed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImprovisedClaymore.ImprovisedClaymore_C.ReceiveBeginPlay
// (Net, NetReliable, Native, Event, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)

void AImprovisedClaymore_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedClaymore.ImprovisedClaymore_C.ReceiveBeginPlay");

	AImprovisedClaymore_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImprovisedClaymore.ImprovisedClaymore_C.ExecuteUbergraph_ImprovisedClaymore
// (Native, Event, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AImprovisedClaymore_C::ExecuteUbergraph_ImprovisedClaymore(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedClaymore.ImprovisedClaymore_C.ExecuteUbergraph_ImprovisedClaymore");

	AImprovisedClaymore_C_ExecuteUbergraph_ImprovisedClaymore_Params params;
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

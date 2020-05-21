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

// Function Mine_01.Mine_01_C.BP_OnArmed
// (NetReliable, Exec, Event, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)

void AMine_01_C::BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_01.Mine_01_C.BP_OnArmed");

	AMine_01_C_BP_OnArmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mine_01.Mine_01_C.BP_OnDisarmed
// (Net, NetReliable, Exec, Event, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)

void AMine_01_C::BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_01.Mine_01_C.BP_OnDisarmed");

	AMine_01_C_BP_OnDisarmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mine_01.Mine_01_C.ReceiveBeginPlay
// (NetRequest, Exec, Event, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)

void AMine_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_01.Mine_01_C.ReceiveBeginPlay");

	AMine_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mine_01.Mine_01_C.ExecuteUbergraph_Mine_01
// (Net, Exec, Event, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMine_01_C::ExecuteUbergraph_Mine_01(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mine_01.Mine_01_C.ExecuteUbergraph_Mine_01");

	AMine_01_C_ExecuteUbergraph_Mine_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Exec, Native, Static, NetMulticast, BlueprintCallable, BlueprintEvent, NetValidate)

void ATS_Fireworks_Shell_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.UserConstructionScript");

	ATS_Fireworks_Shell_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.BurstShapeScaler__FinishedFunc
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, DLLImport, BlueprintPure, NetValidate)

void ATS_Fireworks_Shell_C::STATIC_BurstShapeScaler__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.BurstShapeScaler__FinishedFunc");

	ATS_Fireworks_Shell_C_BurstShapeScaler__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.BurstShapeScaler__UpdateFunc
// (Net, NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, DLLImport, BlueprintPure, NetValidate)

void ATS_Fireworks_Shell_C::STATIC_BurstShapeScaler__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.BurstShapeScaler__UpdateFunc");

	ATS_Fireworks_Shell_C_BurstShapeScaler__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.Explode
// (NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, DLLImport, BlueprintPure, NetValidate)

void ATS_Fireworks_Shell_C::STATIC_Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.Explode");

	ATS_Fireworks_Shell_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.Stop Particles
// (Net, Exec, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, DLLImport, BlueprintPure, NetValidate)

void ATS_Fireworks_Shell_C::STATIC_Stop_Particles()
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.Stop Particles");

	ATS_Fireworks_Shell_C_Stop_Particles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.ExplodeStandardBurst
// (Exec, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, DLLImport, BlueprintPure, NetValidate)

void ATS_Fireworks_Shell_C::STATIC_ExplodeStandardBurst()
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.ExplodeStandardBurst");

	ATS_Fireworks_Shell_C_ExplodeStandardBurst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.ExplodeShapedBurst
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, DLLImport, BlueprintPure, NetValidate)

void ATS_Fireworks_Shell_C::STATIC_ExplodeShapedBurst()
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.ExplodeShapedBurst");

	ATS_Fireworks_Shell_C_ExplodeShapedBurst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, DLLImport, BlueprintPure, NetValidate)

void ATS_Fireworks_Shell_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.ReceiveBeginPlay");

	ATS_Fireworks_Shell_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.ExecuteUbergraph_TS_Fireworks_Shell
// (Exec, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATS_Fireworks_Shell_C::STATIC_ExecuteUbergraph_TS_Fireworks_Shell(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TS_Fireworks_Shell.TS_Fireworks_Shell_C.ExecuteUbergraph_TS_Fireworks_Shell");

	ATS_Fireworks_Shell_C_ExecuteUbergraph_TS_Fireworks_Shell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.UpdateOuterPercentageArc
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// float*                         FrontCircleProgress            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         BackCircleProgress             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOuterCircularProgressBarSprites_C::UpdateOuterPercentageArc(float* FrontCircleProgress, float* BackCircleProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.UpdateOuterPercentageArc");

	UOuterCircularProgressBarSprites_C_UpdateOuterPercentageArc_Params params;
	params.FrontCircleProgress = FrontCircleProgress;
	params.BackCircleProgress = BackCircleProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.ShowOuterCircle
// (Net, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UOuterCircularProgressBarSprites_C::STATIC_ShowOuterCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.ShowOuterCircle");

	UOuterCircularProgressBarSprites_C_ShowOuterCircle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.HideOuterCircle
// (Net, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UOuterCircularProgressBarSprites_C::STATIC_HideOuterCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.HideOuterCircle");

	UOuterCircularProgressBarSprites_C_HideOuterCircle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.Construct
// (Exec, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)

void UOuterCircularProgressBarSprites_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.Construct");

	UOuterCircularProgressBarSprites_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.ExecuteUbergraph_OuterCircularProgressBarSprites
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Private, Delegate, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOuterCircularProgressBarSprites_C::ExecuteUbergraph_OuterCircularProgressBarSprites(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.ExecuteUbergraph_OuterCircularProgressBarSprites");

	UOuterCircularProgressBarSprites_C_ExecuteUbergraph_OuterCircularProgressBarSprites_Params params;
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

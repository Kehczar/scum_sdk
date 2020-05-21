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

// Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.Tick
// (Net, NetReliable, NetResponse, MulticastDelegate, Private, Delegate, HasOutParms, BlueprintPure)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_LockpickingMinigame_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.Tick");

	UUI_LockpickingMinigame_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.ShowInfo
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintCallable)

void UUI_LockpickingMinigame_C::ShowInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.ShowInfo");

	UUI_LockpickingMinigame_C_ShowInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.HideInfo
// (NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintCallable)

void UUI_LockpickingMinigame_C::HideInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.HideInfo");

	UUI_LockpickingMinigame_C_HideInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.OnSuccess
// (Net, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintCallable)

void UUI_LockpickingMinigame_C::OnSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.OnSuccess");

	UUI_LockpickingMinigame_C_OnSuccess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.OnFailure
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintCallable)

void UUI_LockpickingMinigame_C::OnFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.OnFailure");

	UUI_LockpickingMinigame_C_OnFailure_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.ExecuteUbergraph_UI_LockpickingMinigame
// (NetReliable, NetRequest, Exec, Native, Public, NetServer, HasDefaults, DLLImport, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_LockpickingMinigame_C::ExecuteUbergraph_UI_LockpickingMinigame(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LockpickingMinigame.UI_LockpickingMinigame_C.ExecuteUbergraph_UI_LockpickingMinigame");

	UUI_LockpickingMinigame_C_ExecuteUbergraph_UI_LockpickingMinigame_Params params;
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

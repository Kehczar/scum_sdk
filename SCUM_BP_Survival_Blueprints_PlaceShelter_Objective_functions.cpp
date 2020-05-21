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

// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.GetPrisoner
// (Net, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, DLLImport, BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Blueprints_PlaceShelter_Objective_C::STATIC_GetPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.GetPrisoner");

	ABP_Survival_Blueprints_PlaceShelter_Objective_C_GetPrisoner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Prisoner != nullptr)
		*Prisoner = params.Prisoner;
}


// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.AddToDialogueQueue
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, DLLImport, BlueprintEvent)
// Parameters:
// EDialogEvent*                  DialogueEvent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Blueprints_PlaceShelter_Objective_C::STATIC_AddToDialogueQueue(EDialogEvent* DialogueEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.AddToDialogueQueue");

	ABP_Survival_Blueprints_PlaceShelter_Objective_C_AddToDialogueQueue_Params params;
	params.DialogueEvent = DialogueEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnObjectiveStarted
// (NetRequest, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void ABP_Survival_Blueprints_PlaceShelter_Objective_C::OnObjectiveStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnObjectiveStarted");

	ABP_Survival_Blueprints_PlaceShelter_Objective_C_OnObjectiveStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnTabModeOpened
// (Event, NetResponse, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// ETabMode*                      tabMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Blueprints_PlaceShelter_Objective_C::OnTabModeOpened(ETabMode* tabMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.OnTabModeOpened");

	ABP_Survival_Blueprints_PlaceShelter_Objective_C_OnTabModeOpened_Params params;
	params.tabMode = tabMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, DLLImport, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Survival_Blueprints_PlaceShelter_Objective_C::STATIC_ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Survival_Blueprints_PlaceShelter_Objective.BP_Survival_Blueprints_PlaceShelter_Objective_C.ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective");

	ABP_Survival_Blueprints_PlaceShelter_Objective_C_ExecuteUbergraph_BP_Survival_Blueprints_PlaceShelter_Objective_Params params;
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

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

// Function ConZ.Item.Use
// ()
// Parameters:
// class APrisoner**              Prisoner                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           usage                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         usageWeight                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Eat                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         damageMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APig_Head_Cap_C::Use(class APrisoner** Prisoner, int* usage, float* usageWeight, bool* Eat, float* damageMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.Use");

	APig_Head_Cap_C_Use_Params params;
	params.Prisoner = Prisoner;
	params.usage = usage;
	params.usageWeight = usageWeight;
	params.Eat = Eat;
	params.damageMultiplier = damageMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.UpdateVisuals
// ()
// Parameters:
// bool*                          shouldHandleAging              (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::UpdateVisuals(bool* shouldHandleAging)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.UpdateVisuals");

	APig_Head_Cap_C_UpdateVisuals_Params params;
	params.shouldHandleAging = shouldHandleAging;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.StopBlinking
// ()

void APig_Head_Cap_C::StopBlinking()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.StopBlinking");

	APig_Head_Cap_C_StopBlinking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ConZ.Item.StaticMeshChangedDelegate__DelegateSignature
// ()
// Parameters:
// class AItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::StaticMeshChangedDelegate__DelegateSignature(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ConZ.Item.StaticMeshChangedDelegate__DelegateSignature");

	APig_Head_Cap_C_StaticMeshChangedDelegate__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ConZ.Item.SkeletalMeshChangedDelegate__DelegateSignature
// ()
// Parameters:
// class AItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::SkeletalMeshChangedDelegate__DelegateSignature(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ConZ.Item.SkeletalMeshChangedDelegate__DelegateSignature");

	APig_Head_Cap_C_SkeletalMeshChangedDelegate__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.SetWeight
// ()
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::SetWeight(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.SetWeight");

	APig_Head_Cap_C_SetWeight_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.SetMaxHealth
// ()
// Parameters:
// float*                         maxHealth                      (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::SetMaxHealth(float* maxHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.SetMaxHealth");

	APig_Head_Cap_C_SetMaxHealth_Params params;
	params.maxHealth = maxHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.SetHealth
// ()
// Parameters:
// float*                         health                         (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::SetHealth(float* health)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.SetHealth");

	APig_Head_Cap_C_SetHealth_Params params;
	params.health = health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.SetFuel
// ()
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::SetFuel(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.SetFuel");

	APig_Head_Cap_C_SetFuel_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.Server_Throw
// ()
// Parameters:
// struct FVector*                ZeroBasedStartPosition         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator*               StartRotation                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                StartVelocity                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void APig_Head_Cap_C::Server_Throw(struct FVector* ZeroBasedStartPosition, struct FRotator* StartRotation, struct FVector* StartVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.Server_Throw");

	APig_Head_Cap_C_Server_Throw_Params params;
	params.ZeroBasedStartPosition = ZeroBasedStartPosition;
	params.StartRotation = StartRotation;
	params.StartVelocity = StartVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.Repair
// ()
// Parameters:
// float*                         healthToRepair                 (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::Repair(float* healthToRepair)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.Repair");

	APig_Head_Cap_C_Repair_Params params;
	params.healthToRepair = healthToRepair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.RemoveStacks
// ()
// Parameters:
// int*                           stacksToSplit                  (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UInventoryNode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TScriptInterface<class UInventoryNode> APig_Head_Cap_C::RemoveStacks(int* stacksToSplit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.RemoveStacks");

	APig_Head_Cap_C_RemoveStacks_Params params;
	params.stacksToSplit = stacksToSplit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction ConZ.Item.PickedUpStateDelegate__DelegateSignature
// ()
// Parameters:
// class AItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          pickedUp                       (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::PickedUpStateDelegate__DelegateSignature(class AItem** Item, bool* pickedUp)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ConZ.Item.PickedUpStateDelegate__DelegateSignature");

	APig_Head_Cap_C_PickedUpStateDelegate__DelegateSignature_Params params;
	params.Item = Item;
	params.pickedUp = pickedUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnRightClicked
// ()

void APig_Head_Cap_C::OnRightClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnRightClicked");

	APig_Head_Cap_C_OnRightClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnRep_WeightUsed
// ()

void APig_Head_Cap_C::OnRep_WeightUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnRep_WeightUsed");

	APig_Head_Cap_C_OnRep_WeightUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnRep_WaterWeight
// ()

void APig_Head_Cap_C::OnRep_WaterWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnRep_WaterWeight");

	APig_Head_Cap_C_OnRep_WaterWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnRep_Visibility
// ()

void APig_Head_Cap_C::OnRep_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnRep_Visibility");

	APig_Head_Cap_C_OnRep_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnRep_Stacks
// ()

void APig_Head_Cap_C::OnRep_Stacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnRep_Stacks");

	APig_Head_Cap_C_OnRep_Stacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnRep_InventoryContainer2D
// ()

void APig_Head_Cap_C::OnRep_InventoryContainer2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnRep_InventoryContainer2D");

	APig_Head_Cap_C_OnRep_InventoryContainer2D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnRep_Health
// ()

void APig_Head_Cap_C::OnRep_Health()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnRep_Health");

	APig_Head_Cap_C_OnRep_Health_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnRep_Examined
// ()

void APig_Head_Cap_C::OnRep_Examined()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnRep_Examined");

	APig_Head_Cap_C_OnRep_Examined_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnProjectileStop
// ()
// Parameters:
// struct FHitResult*             ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APig_Head_Cap_C::OnProjectileStop(struct FHitResult* ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnProjectileStop");

	APig_Head_Cap_C_OnProjectileStop_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnLocalPrisonerPanelsClosed
// ()

void APig_Head_Cap_C::OnLocalPrisonerPanelsClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnLocalPrisonerPanelsClosed");

	APig_Head_Cap_C_OnLocalPrisonerPanelsClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnLocalPrisonerHoveredActorChanged
// ()
// Parameters:
// class AActor**                 hoveredActor                   (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::OnLocalPrisonerHoveredActorChanged(class AActor** hoveredActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnLocalPrisonerHoveredActorChanged");

	APig_Head_Cap_C_OnLocalPrisonerHoveredActorChanged_Params params;
	params.hoveredActor = hoveredActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnEditTextWidgetTextAccepted
// ()
// Parameters:
// class APrisoner**              User                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void APig_Head_Cap_C::OnEditTextWidgetTextAccepted(class APrisoner** User, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnEditTextWidgetTextAccepted");

	APig_Head_Cap_C_OnEditTextWidgetTextAccepted_Params params;
	params.User = User;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnDetachedFromItem
// ()
// Parameters:
// class AItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::OnDetachedFromItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnDetachedFromItem");

	APig_Head_Cap_C_OnDetachedFromItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnDestroyedEvent
// ()
// Parameters:
// class AActor**                 Self                           (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::OnDestroyedEvent(class AActor** Self)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnDestroyedEvent");

	APig_Head_Cap_C_OnDestroyedEvent_Params params;
	params.Self = Self;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnContainedItemDestroyed
// ()
// Parameters:
// class AActor**                 containedItem                  (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::OnContainedItemDestroyed(class AActor** containedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnContainedItemDestroyed");

	APig_Head_Cap_C_OnContainedItemDestroyed_Params params;
	params.containedItem = containedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnAttachedToItem
// ()
// Parameters:
// class AItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::OnAttachedToItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnAttachedToItem");

	APig_Head_Cap_C_OnAttachedToItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.NetMulticast_SpawnDestroyedEffects
// ()

void APig_Head_Cap_C::NetMulticast_SpawnDestroyedEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.NetMulticast_SpawnDestroyedEffects");

	APig_Head_Cap_C_NetMulticast_SpawnDestroyedEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.NetMulticast_SetPlayerGivenName
// ()
// Parameters:
// struct FString*                Value                          (Parm, ZeroConstructor)

void APig_Head_Cap_C::NetMulticast_SetPlayerGivenName(struct FString* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.NetMulticast_SetPlayerGivenName");

	APig_Head_Cap_C_NetMulticast_SetPlayerGivenName_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.NetMulticast_SetActorDropLocationAndRotation
// ()
// Parameters:
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::NetMulticast_SetActorDropLocationAndRotation(struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.NetMulticast_SetActorDropLocationAndRotation");

	APig_Head_Cap_C_NetMulticast_SetActorDropLocationAndRotation_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.Multicast_UpdateExpirationTime
// ()
// Parameters:
// int64_t*                       Time                           (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::Multicast_UpdateExpirationTime(int64_t* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.Multicast_UpdateExpirationTime");

	APig_Head_Cap_C_Multicast_UpdateExpirationTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.Multicast_Throw
// ()
// Parameters:
// struct FVector*                ZeroBasedStartPosition         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator*               StartRotation                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                StartVelocity                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void APig_Head_Cap_C::Multicast_Throw(struct FVector* ZeroBasedStartPosition, struct FRotator* StartRotation, struct FVector* StartVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.Multicast_Throw");

	APig_Head_Cap_C_Multicast_Throw_Params params;
	params.ZeroBasedStartPosition = ZeroBasedStartPosition;
	params.StartRotation = StartRotation;
	params.StartVelocity = StartVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.HasPriorityForContainerItem
// ()
// Parameters:
// class AItem**                  containerItem                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APig_Head_Cap_C::HasPriorityForContainerItem(class AItem** containerItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.HasPriorityForContainerItem");

	APig_Head_Cap_C_HasPriorityForContainerItem_Params params;
	params.containerItem = containerItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetWidgetDisplayInfo
// ()
// Parameters:
// struct FWidgetDisplayInfo      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWidgetDisplayInfo APig_Head_Cap_C::GetWidgetDisplayInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetWidgetDisplayInfo");

	APig_Head_Cap_C_GetWidgetDisplayInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetWetness
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APig_Head_Cap_C::GetWetness()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetWetness");

	APig_Head_Cap_C_GetWetness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetWeightUsed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APig_Head_Cap_C::GetWeightUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetWeightUsed");

	APig_Head_Cap_C_GetWeightUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetWeightRemained
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APig_Head_Cap_C::GetWeightRemained()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetWeightRemained");

	APig_Head_Cap_C_GetWeightRemained_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetWeightPerUse
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APig_Head_Cap_C::GetWeightPerUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetWeightPerUse");

	APig_Head_Cap_C_GetWeightPerUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetWeight
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APig_Head_Cap_C::GetWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetWeight");

	APig_Head_Cap_C_GetWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetWaterWeight
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APig_Head_Cap_C::GetWaterWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetWaterWeight");

	APig_Head_Cap_C_GetWaterWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetUsedSlots
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APig_Head_Cap_C::GetUsedSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetUsedSlots");

	APig_Head_Cap_C_GetUsedSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetUsedMass
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APig_Head_Cap_C::GetUsedMass()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetUsedMass");

	APig_Head_Cap_C_GetUsedMass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetTotalWeight
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APig_Head_Cap_C::GetTotalWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetTotalWeight");

	APig_Head_Cap_C_GetTotalWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetTotalUses
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APig_Head_Cap_C::GetTotalUses()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetTotalUses");

	APig_Head_Cap_C_GetTotalUses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetStacksCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APig_Head_Cap_C::GetStacksCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetStacksCount");

	APig_Head_Cap_C_GetStacksCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetSizeY
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APig_Head_Cap_C::GetSizeY()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetSizeY");

	APig_Head_Cap_C_GetSizeY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetSizeX
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APig_Head_Cap_C::GetSizeX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetSizeX");

	APig_Head_Cap_C_GetSizeX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetRemainingUses
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APig_Head_Cap_C::GetRemainingUses()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetRemainingUses");

	APig_Head_Cap_C_GetRemainingUses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetRemaining
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APig_Head_Cap_C::GetRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetRemaining");

	APig_Head_Cap_C_GetRemaining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetNormalizedHealth
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APig_Head_Cap_C::GetNormalizedHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetNormalizedHealth");

	APig_Head_Cap_C_GetNormalizedHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetNoiseLoudnessWhenPickedUp
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APig_Head_Cap_C::GetNoiseLoudnessWhenPickedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetNoiseLoudnessWhenPickedUp");

	APig_Head_Cap_C_GetNoiseLoudnessWhenPickedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetNoiseLoudnessWhenDropped
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APig_Head_Cap_C::GetNoiseLoudnessWhenDropped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetNoiseLoudnessWhenDropped");

	APig_Head_Cap_C_GetNoiseLoudnessWhenDropped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetNoiseLoudnessOnGroundImpact
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APig_Head_Cap_C::GetNoiseLoudnessOnGroundImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetNoiseLoudnessOnGroundImpact");

	APig_Head_Cap_C_GetNoiseLoudnessOnGroundImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetMeshComponent
// ()
// Parameters:
// class UMeshComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* APig_Head_Cap_C::GetMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetMeshComponent");

	APig_Head_Cap_C_GetMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetMaxHealth
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APig_Head_Cap_C::GetMaxHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetMaxHealth");

	APig_Head_Cap_C_GetMaxHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetHealth
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APig_Head_Cap_C::GetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetHealth");

	APig_Head_Cap_C_GetHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetFuel
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APig_Head_Cap_C::GetFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetFuel");

	APig_Head_Cap_C_GetFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetDefaultMaxHealth
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APig_Head_Cap_C::GetDefaultMaxHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetDefaultMaxHealth");

	APig_Head_Cap_C_GetDefaultMaxHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetContainerDamagePercentage
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APig_Head_Cap_C::GetContainerDamagePercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetContainerDamagePercentage");

	APig_Head_Cap_C_GetContainerDamagePercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetAllContainedItems
// ()
// Parameters:
// bool*                          recursive                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AItem*>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AItem*> APig_Head_Cap_C::GetAllContainedItems(bool* recursive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetAllContainedItems");

	APig_Head_Cap_C_GetAllContainedItems_Params params;
	params.recursive = recursive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.DropAt
// ()
// Parameters:
// struct FVector*                dropLocation                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               dropRotation                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APig_Head_Cap_C::DropAt(struct FVector* dropLocation, struct FRotator* dropRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.DropAt");

	APig_Head_Cap_C_DropAt_Params params;
	params.dropLocation = dropLocation;
	params.dropRotation = dropRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.DropAround
// ()
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APig_Head_Cap_C::DropAround(class AActor** Actor, float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.DropAround");

	APig_Head_Cap_C_DropAround_Params params;
	params.Actor = Actor;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.Drop
// ()
// Parameters:
// bool*                          wasThrowed                     (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::Drop(bool* wasThrowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.Drop");

	APig_Head_Cap_C_Drop_Params params;
	params.wasThrowed = wasThrowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.DetachFromAll
// ()

void APig_Head_Cap_C::DetachFromAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.DetachFromAll");

	APig_Head_Cap_C_DetachFromAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ConZ.Item.DebugTextChangedDelegate__DelegateSignature
// ()
// Parameters:
// class AItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::DebugTextChangedDelegate__DelegateSignature(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ConZ.Item.DebugTextChangedDelegate__DelegateSignature");

	APig_Head_Cap_C_DebugTextChangedDelegate__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.CanStackWith
// ()
// Parameters:
// class UObject**                Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APig_Head_Cap_C::CanStackWith(class UObject** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.CanStackWith");

	APig_Head_Cap_C_CanStackWith_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.CanStack
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APig_Head_Cap_C::CanStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.CanStack");

	APig_Head_Cap_C_CanStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.CanBeDroppedBy
// ()
// Parameters:
// class AConZCharacter**         Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APig_Head_Cap_C::CanBeDroppedBy(class AConZCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.CanBeDroppedBy");

	APig_Head_Cap_C_CanBeDroppedBy_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.CanBeCraftedByCharactrer
// ()
// Parameters:
// class ACharacter**             Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APig_Head_Cap_C::CanBeCraftedByCharactrer(class ACharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.CanBeCraftedByCharactrer");

	APig_Head_Cap_C_CanBeCraftedByCharactrer_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.CanAutoAddItem
// ()
// Parameters:
// class AItem**                  Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  column                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  row                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APig_Head_Cap_C::CanAutoAddItem(class AItem** Item, unsigned char* column, unsigned char* row)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.CanAutoAddItem");

	APig_Head_Cap_C_CanAutoAddItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (column != nullptr)
		*column = params.column;
	if (row != nullptr)
		*row = params.row;

	return params.ReturnValue;
}


// Function ConZ.Item.CanAddItem
// ()
// Parameters:
// class AItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 column                         (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 row                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APig_Head_Cap_C::CanAddItem(class AItem** Item, unsigned char* column, unsigned char* row)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.CanAddItem");

	APig_Head_Cap_C_CanAddItem_Params params;
	params.Item = Item;
	params.column = column;
	params.row = row;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.Blink
// ()
// Parameters:
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::Blink(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.Blink");

	APig_Head_Cap_C_Blink_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.AutoAddItemToInventoryNode
// ()
// Parameters:
// TScriptInterface<class UInventoryNode>* Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APig_Head_Cap_C::AutoAddItemToInventoryNode(TScriptInterface<class UInventoryNode>* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.AutoAddItemToInventoryNode");

	APig_Head_Cap_C_AutoAddItemToInventoryNode_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.AttachToCharacterHands
// ()
// Parameters:
// class AConZCharacter**         Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APig_Head_Cap_C::AttachToCharacterHands(class AConZCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.AttachToCharacterHands");

	APig_Head_Cap_C_AttachToCharacterHands_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.AddStack
// ()
// Parameters:
// TScriptInterface<class UInventoryNode>* Item                           (Parm, ZeroConstructor, IsPlainOldData)

void APig_Head_Cap_C::AddStack(TScriptInterface<class UInventoryNode>* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.AddStack");

	APig_Head_Cap_C_AddStack_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

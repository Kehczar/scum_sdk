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

bool ALock_Item_Advanced_C::Use(class APrisoner** Prisoner, int* usage, float* usageWeight, bool* Eat, float* damageMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.Use");

	ALock_Item_Advanced_C_Use_Params params;
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

void ALock_Item_Advanced_C::UpdateVisuals(bool* shouldHandleAging)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.UpdateVisuals");

	ALock_Item_Advanced_C_UpdateVisuals_Params params;
	params.shouldHandleAging = shouldHandleAging;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.StopBlinking
// ()

void ALock_Item_Advanced_C::StopBlinking()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.StopBlinking");

	ALock_Item_Advanced_C_StopBlinking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ConZ.Item.StaticMeshChangedDelegate__DelegateSignature
// ()
// Parameters:
// class AItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void ALock_Item_Advanced_C::StaticMeshChangedDelegate__DelegateSignature(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ConZ.Item.StaticMeshChangedDelegate__DelegateSignature");

	ALock_Item_Advanced_C_StaticMeshChangedDelegate__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ConZ.Item.SkeletalMeshChangedDelegate__DelegateSignature
// ()
// Parameters:
// class AItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void ALock_Item_Advanced_C::SkeletalMeshChangedDelegate__DelegateSignature(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ConZ.Item.SkeletalMeshChangedDelegate__DelegateSignature");

	ALock_Item_Advanced_C_SkeletalMeshChangedDelegate__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.SetWeight
// ()
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALock_Item_Advanced_C::SetWeight(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.SetWeight");

	ALock_Item_Advanced_C_SetWeight_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.SetMaxHealth
// ()
// Parameters:
// float*                         maxHealth                      (Parm, ZeroConstructor, IsPlainOldData)

void ALock_Item_Advanced_C::SetMaxHealth(float* maxHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.SetMaxHealth");

	ALock_Item_Advanced_C_SetMaxHealth_Params params;
	params.maxHealth = maxHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.SetHealth
// ()
// Parameters:
// float*                         health                         (Parm, ZeroConstructor, IsPlainOldData)

void ALock_Item_Advanced_C::SetHealth(float* health)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.SetHealth");

	ALock_Item_Advanced_C_SetHealth_Params params;
	params.health = health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.SetFuel
// ()
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALock_Item_Advanced_C::SetFuel(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.SetFuel");

	ALock_Item_Advanced_C_SetFuel_Params params;
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

void ALock_Item_Advanced_C::Server_Throw(struct FVector* ZeroBasedStartPosition, struct FRotator* StartRotation, struct FVector* StartVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.Server_Throw");

	ALock_Item_Advanced_C_Server_Throw_Params params;
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

void ALock_Item_Advanced_C::Repair(float* healthToRepair)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.Repair");

	ALock_Item_Advanced_C_Repair_Params params;
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

TScriptInterface<class UInventoryNode> ALock_Item_Advanced_C::RemoveStacks(int* stacksToSplit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.RemoveStacks");

	ALock_Item_Advanced_C_RemoveStacks_Params params;
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

void ALock_Item_Advanced_C::PickedUpStateDelegate__DelegateSignature(class AItem** Item, bool* pickedUp)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ConZ.Item.PickedUpStateDelegate__DelegateSignature");

	ALock_Item_Advanced_C_PickedUpStateDelegate__DelegateSignature_Params params;
	params.Item = Item;
	params.pickedUp = pickedUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnRightClicked
// ()

void ALock_Item_Advanced_C::OnRightClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnRightClicked");

	ALock_Item_Advanced_C_OnRightClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnRep_WeightUsed
// ()

void ALock_Item_Advanced_C::OnRep_WeightUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnRep_WeightUsed");

	ALock_Item_Advanced_C_OnRep_WeightUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnRep_WaterWeight
// ()

void ALock_Item_Advanced_C::OnRep_WaterWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnRep_WaterWeight");

	ALock_Item_Advanced_C_OnRep_WaterWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnRep_Visibility
// ()

void ALock_Item_Advanced_C::OnRep_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnRep_Visibility");

	ALock_Item_Advanced_C_OnRep_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnRep_Stacks
// ()

void ALock_Item_Advanced_C::OnRep_Stacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnRep_Stacks");

	ALock_Item_Advanced_C_OnRep_Stacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnRep_InventoryContainer2D
// ()

void ALock_Item_Advanced_C::OnRep_InventoryContainer2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnRep_InventoryContainer2D");

	ALock_Item_Advanced_C_OnRep_InventoryContainer2D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnRep_Health
// ()

void ALock_Item_Advanced_C::OnRep_Health()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnRep_Health");

	ALock_Item_Advanced_C_OnRep_Health_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnRep_Examined
// ()

void ALock_Item_Advanced_C::OnRep_Examined()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnRep_Examined");

	ALock_Item_Advanced_C_OnRep_Examined_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnProjectileStop
// ()
// Parameters:
// struct FHitResult*             ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ALock_Item_Advanced_C::OnProjectileStop(struct FHitResult* ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnProjectileStop");

	ALock_Item_Advanced_C_OnProjectileStop_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnLocalPrisonerPanelsClosed
// ()

void ALock_Item_Advanced_C::OnLocalPrisonerPanelsClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnLocalPrisonerPanelsClosed");

	ALock_Item_Advanced_C_OnLocalPrisonerPanelsClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnLocalPrisonerHoveredActorChanged
// ()
// Parameters:
// class AActor**                 hoveredActor                   (Parm, ZeroConstructor, IsPlainOldData)

void ALock_Item_Advanced_C::OnLocalPrisonerHoveredActorChanged(class AActor** hoveredActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnLocalPrisonerHoveredActorChanged");

	ALock_Item_Advanced_C_OnLocalPrisonerHoveredActorChanged_Params params;
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

void ALock_Item_Advanced_C::OnEditTextWidgetTextAccepted(class APrisoner** User, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnEditTextWidgetTextAccepted");

	ALock_Item_Advanced_C_OnEditTextWidgetTextAccepted_Params params;
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

void ALock_Item_Advanced_C::OnDetachedFromItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnDetachedFromItem");

	ALock_Item_Advanced_C_OnDetachedFromItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnDestroyedEvent
// ()
// Parameters:
// class AActor**                 Self                           (Parm, ZeroConstructor, IsPlainOldData)

void ALock_Item_Advanced_C::OnDestroyedEvent(class AActor** Self)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnDestroyedEvent");

	ALock_Item_Advanced_C_OnDestroyedEvent_Params params;
	params.Self = Self;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnContainedItemDestroyed
// ()
// Parameters:
// class AActor**                 containedItem                  (Parm, ZeroConstructor, IsPlainOldData)

void ALock_Item_Advanced_C::OnContainedItemDestroyed(class AActor** containedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnContainedItemDestroyed");

	ALock_Item_Advanced_C_OnContainedItemDestroyed_Params params;
	params.containedItem = containedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.OnAttachedToItem
// ()
// Parameters:
// class AItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void ALock_Item_Advanced_C::OnAttachedToItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.OnAttachedToItem");

	ALock_Item_Advanced_C_OnAttachedToItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.NetMulticast_SpawnDestroyedEffects
// ()

void ALock_Item_Advanced_C::NetMulticast_SpawnDestroyedEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.NetMulticast_SpawnDestroyedEffects");

	ALock_Item_Advanced_C_NetMulticast_SpawnDestroyedEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.NetMulticast_SetPlayerGivenName
// ()
// Parameters:
// struct FString*                Value                          (Parm, ZeroConstructor)

void ALock_Item_Advanced_C::NetMulticast_SetPlayerGivenName(struct FString* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.NetMulticast_SetPlayerGivenName");

	ALock_Item_Advanced_C_NetMulticast_SetPlayerGivenName_Params params;
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

void ALock_Item_Advanced_C::NetMulticast_SetActorDropLocationAndRotation(struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.NetMulticast_SetActorDropLocationAndRotation");

	ALock_Item_Advanced_C_NetMulticast_SetActorDropLocationAndRotation_Params params;
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

void ALock_Item_Advanced_C::Multicast_UpdateExpirationTime(int64_t* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.Multicast_UpdateExpirationTime");

	ALock_Item_Advanced_C_Multicast_UpdateExpirationTime_Params params;
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

void ALock_Item_Advanced_C::Multicast_Throw(struct FVector* ZeroBasedStartPosition, struct FRotator* StartRotation, struct FVector* StartVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.Multicast_Throw");

	ALock_Item_Advanced_C_Multicast_Throw_Params params;
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

bool ALock_Item_Advanced_C::HasPriorityForContainerItem(class AItem** containerItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.HasPriorityForContainerItem");

	ALock_Item_Advanced_C_HasPriorityForContainerItem_Params params;
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

struct FWidgetDisplayInfo ALock_Item_Advanced_C::GetWidgetDisplayInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetWidgetDisplayInfo");

	ALock_Item_Advanced_C_GetWidgetDisplayInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetWetness
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALock_Item_Advanced_C::GetWetness()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetWetness");

	ALock_Item_Advanced_C_GetWetness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetWeightUsed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALock_Item_Advanced_C::GetWeightUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetWeightUsed");

	ALock_Item_Advanced_C_GetWeightUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetWeightRemained
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALock_Item_Advanced_C::GetWeightRemained()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetWeightRemained");

	ALock_Item_Advanced_C_GetWeightRemained_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetWeightPerUse
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALock_Item_Advanced_C::GetWeightPerUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetWeightPerUse");

	ALock_Item_Advanced_C_GetWeightPerUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetWeight
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALock_Item_Advanced_C::GetWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetWeight");

	ALock_Item_Advanced_C_GetWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetWaterWeight
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALock_Item_Advanced_C::GetWaterWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetWaterWeight");

	ALock_Item_Advanced_C_GetWaterWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetUsedSlots
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ALock_Item_Advanced_C::GetUsedSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetUsedSlots");

	ALock_Item_Advanced_C_GetUsedSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetUsedMass
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALock_Item_Advanced_C::GetUsedMass()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetUsedMass");

	ALock_Item_Advanced_C_GetUsedMass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetTotalWeight
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALock_Item_Advanced_C::GetTotalWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetTotalWeight");

	ALock_Item_Advanced_C_GetTotalWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetTotalUses
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ALock_Item_Advanced_C::GetTotalUses()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetTotalUses");

	ALock_Item_Advanced_C_GetTotalUses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetStacksCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ALock_Item_Advanced_C::GetStacksCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetStacksCount");

	ALock_Item_Advanced_C_GetStacksCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetSizeY
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ALock_Item_Advanced_C::GetSizeY()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetSizeY");

	ALock_Item_Advanced_C_GetSizeY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetSizeX
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ALock_Item_Advanced_C::GetSizeX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetSizeX");

	ALock_Item_Advanced_C_GetSizeX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetRemainingUses
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ALock_Item_Advanced_C::GetRemainingUses()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetRemainingUses");

	ALock_Item_Advanced_C_GetRemainingUses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetRemaining
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ALock_Item_Advanced_C::GetRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetRemaining");

	ALock_Item_Advanced_C_GetRemaining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetNormalizedHealth
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALock_Item_Advanced_C::GetNormalizedHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetNormalizedHealth");

	ALock_Item_Advanced_C_GetNormalizedHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetNoiseLoudnessWhenPickedUp
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALock_Item_Advanced_C::GetNoiseLoudnessWhenPickedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetNoiseLoudnessWhenPickedUp");

	ALock_Item_Advanced_C_GetNoiseLoudnessWhenPickedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetNoiseLoudnessWhenDropped
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALock_Item_Advanced_C::GetNoiseLoudnessWhenDropped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetNoiseLoudnessWhenDropped");

	ALock_Item_Advanced_C_GetNoiseLoudnessWhenDropped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetNoiseLoudnessOnGroundImpact
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALock_Item_Advanced_C::GetNoiseLoudnessOnGroundImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetNoiseLoudnessOnGroundImpact");

	ALock_Item_Advanced_C_GetNoiseLoudnessOnGroundImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetMeshComponent
// ()
// Parameters:
// class UMeshComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ALock_Item_Advanced_C::GetMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetMeshComponent");

	ALock_Item_Advanced_C_GetMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetMaxHealth
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALock_Item_Advanced_C::GetMaxHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetMaxHealth");

	ALock_Item_Advanced_C_GetMaxHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetHealth
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALock_Item_Advanced_C::GetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetHealth");

	ALock_Item_Advanced_C_GetHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetFuel
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALock_Item_Advanced_C::GetFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetFuel");

	ALock_Item_Advanced_C_GetFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetDefaultMaxHealth
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALock_Item_Advanced_C::GetDefaultMaxHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetDefaultMaxHealth");

	ALock_Item_Advanced_C_GetDefaultMaxHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.Item.GetContainerDamagePercentage
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALock_Item_Advanced_C::GetContainerDamagePercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetContainerDamagePercentage");

	ALock_Item_Advanced_C_GetContainerDamagePercentage_Params params;

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

TArray<class AItem*> ALock_Item_Advanced_C::GetAllContainedItems(bool* recursive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.GetAllContainedItems");

	ALock_Item_Advanced_C_GetAllContainedItems_Params params;
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

bool ALock_Item_Advanced_C::DropAt(struct FVector* dropLocation, struct FRotator* dropRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.DropAt");

	ALock_Item_Advanced_C_DropAt_Params params;
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

bool ALock_Item_Advanced_C::DropAround(class AActor** Actor, float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.DropAround");

	ALock_Item_Advanced_C_DropAround_Params params;
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

void ALock_Item_Advanced_C::Drop(bool* wasThrowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.Drop");

	ALock_Item_Advanced_C_Drop_Params params;
	params.wasThrowed = wasThrowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.Item.DetachFromAll
// ()

void ALock_Item_Advanced_C::DetachFromAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.DetachFromAll");

	ALock_Item_Advanced_C_DetachFromAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ConZ.Item.DebugTextChangedDelegate__DelegateSignature
// ()
// Parameters:
// class AItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void ALock_Item_Advanced_C::DebugTextChangedDelegate__DelegateSignature(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ConZ.Item.DebugTextChangedDelegate__DelegateSignature");

	ALock_Item_Advanced_C_DebugTextChangedDelegate__DelegateSignature_Params params;
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

bool ALock_Item_Advanced_C::CanStackWith(class UObject** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.CanStackWith");

	ALock_Item_Advanced_C_CanStackWith_Params params;
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

bool ALock_Item_Advanced_C::CanStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.CanStack");

	ALock_Item_Advanced_C_CanStack_Params params;

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

bool ALock_Item_Advanced_C::CanBeDroppedBy(class AConZCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.CanBeDroppedBy");

	ALock_Item_Advanced_C_CanBeDroppedBy_Params params;
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

bool ALock_Item_Advanced_C::CanBeCraftedByCharactrer(class ACharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.CanBeCraftedByCharactrer");

	ALock_Item_Advanced_C_CanBeCraftedByCharactrer_Params params;
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

bool ALock_Item_Advanced_C::CanAutoAddItem(class AItem** Item, unsigned char* column, unsigned char* row)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.CanAutoAddItem");

	ALock_Item_Advanced_C_CanAutoAddItem_Params params;
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

bool ALock_Item_Advanced_C::CanAddItem(class AItem** Item, unsigned char* column, unsigned char* row)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.CanAddItem");

	ALock_Item_Advanced_C_CanAddItem_Params params;
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

void ALock_Item_Advanced_C::Blink(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.Blink");

	ALock_Item_Advanced_C_Blink_Params params;
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

bool ALock_Item_Advanced_C::AutoAddItemToInventoryNode(TScriptInterface<class UInventoryNode>* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.AutoAddItemToInventoryNode");

	ALock_Item_Advanced_C_AutoAddItemToInventoryNode_Params params;
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

bool ALock_Item_Advanced_C::AttachToCharacterHands(class AConZCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.AttachToCharacterHands");

	ALock_Item_Advanced_C_AttachToCharacterHands_Params params;
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

void ALock_Item_Advanced_C::AddStack(TScriptInterface<class UInventoryNode>* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.Item.AddStack");

	ALock_Item_Advanced_C_AddStack_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

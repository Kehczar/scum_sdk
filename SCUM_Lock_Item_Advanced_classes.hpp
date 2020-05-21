#pragma once

// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Lock_Item_Advanced.Lock_Item_Advanced_C
// 0x0000 (0x0670 - 0x0670)
class ALock_Item_Advanced_C : public AItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Lock_Item_Advanced.Lock_Item_Advanced_C");
		return ptr;
	}


	bool Use(class APrisoner** Prisoner, int* usage, float* usageWeight, bool* Eat, float* damageMultiplier);
	void UpdateVisuals(bool* shouldHandleAging);
	void StopBlinking();
	void StaticMeshChangedDelegate__DelegateSignature(class AItem** Item);
	void SkeletalMeshChangedDelegate__DelegateSignature(class AItem** Item);
	void SetWeight(float* Value);
	void SetMaxHealth(float* maxHealth);
	void SetHealth(float* health);
	void SetFuel(float* Value);
	void Server_Throw(struct FVector* ZeroBasedStartPosition, struct FRotator* StartRotation, struct FVector* StartVelocity);
	void Repair(float* healthToRepair);
	TScriptInterface<class UInventoryNode> RemoveStacks(int* stacksToSplit);
	void PickedUpStateDelegate__DelegateSignature(class AItem** Item, bool* pickedUp);
	void OnRightClicked();
	void OnRep_WeightUsed();
	void OnRep_WaterWeight();
	void OnRep_Visibility();
	void OnRep_Stacks();
	void OnRep_InventoryContainer2D();
	void OnRep_Health();
	void OnRep_Examined();
	void OnProjectileStop(struct FHitResult* ImpactResult);
	void OnLocalPrisonerPanelsClosed();
	void OnLocalPrisonerHoveredActorChanged(class AActor** hoveredActor);
	void OnEditTextWidgetTextAccepted(class APrisoner** User, struct FText* Text);
	void OnDetachedFromItem(class AItem** Item);
	void OnDestroyedEvent(class AActor** Self);
	void OnContainedItemDestroyed(class AActor** containedItem);
	void OnAttachedToItem(class AItem** Item);
	void NetMulticast_SpawnDestroyedEffects();
	void NetMulticast_SetPlayerGivenName(struct FString* Value);
	void NetMulticast_SetActorDropLocationAndRotation(struct FVector* Location, struct FRotator* Rotation);
	void Multicast_UpdateExpirationTime(int64_t* Time);
	void Multicast_Throw(struct FVector* ZeroBasedStartPosition, struct FRotator* StartRotation, struct FVector* StartVelocity);
	bool HasPriorityForContainerItem(class AItem** containerItem);
	struct FWidgetDisplayInfo GetWidgetDisplayInfo();
	float GetWetness();
	float GetWeightUsed();
	float GetWeightRemained();
	float GetWeightPerUse();
	float GetWeight();
	float GetWaterWeight();
	int GetUsedSlots();
	float GetUsedMass();
	float GetTotalWeight();
	int GetTotalUses();
	int GetStacksCount();
	int GetSizeY();
	int GetSizeX();
	int GetRemainingUses();
	int GetRemaining();
	float GetNormalizedHealth();
	float GetNoiseLoudnessWhenPickedUp();
	float GetNoiseLoudnessWhenDropped();
	float GetNoiseLoudnessOnGroundImpact();
	class UMeshComponent* GetMeshComponent();
	float GetMaxHealth();
	float GetHealth();
	float GetFuel();
	float GetDefaultMaxHealth();
	float GetContainerDamagePercentage();
	TArray<class AItem*> GetAllContainedItems(bool* recursive);
	bool DropAt(struct FVector* dropLocation, struct FRotator* dropRotation);
	bool DropAround(class AActor** Actor, float* Radius);
	void Drop(bool* wasThrowed);
	void DetachFromAll();
	void DebugTextChangedDelegate__DelegateSignature(class AItem** Item);
	bool CanStackWith(class UObject** Item);
	bool CanStack();
	bool CanBeDroppedBy(class AConZCharacter** Character);
	bool CanBeCraftedByCharactrer(class ACharacter** Character);
	bool CanAutoAddItem(class AItem** Item, unsigned char* column, unsigned char* row);
	bool CanAddItem(class AItem** Item, unsigned char* column, unsigned char* row);
	void Blink(float* Duration);
	bool AutoAddItemToInventoryNode(TScriptInterface<class UInventoryNode>* Item);
	bool AttachToCharacterHands(class AConZCharacter** Character);
	void AddStack(TScriptInterface<class UInventoryNode>* Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

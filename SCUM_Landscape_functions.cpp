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

// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
// ()
// Parameters:
// struct FName*                  ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::SetLandscapeMaterialVectorParameterValue(struct FName* ParameterName, struct FLinearColor* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue");

	ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
// ()
// Parameters:
// struct FName*                  ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture**               Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::SetLandscapeMaterialTextureParameterValue(struct FName* ParameterName, class UTexture** Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue");

	ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
// ()
// Parameters:
// struct FName*                  ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::SetLandscapeMaterialScalarParameterValue(struct FName* ParameterName, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue");

	ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
// ()
// Parameters:
// class UMaterialInterface**     NewLandscapeMaterial           (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::EditorSetLandscapeMaterial(class UMaterialInterface** NewLandscapeMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial");

	ALandscapeProxy_EditorSetLandscapeMaterial_Params params;
	params.NewLandscapeMaterial = NewLandscapeMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.EditorApplySpline
// ()
// Parameters:
// class USplineComponent**       InSplineComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         StartWidth                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         EndWidth                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         StartSideFalloff               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         EndSideFalloff                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         StartRoll                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         EndRoll                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumSubdivisions                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRaiseHeights                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLowerHeights                  (Parm, ZeroConstructor, IsPlainOldData)
// class ULandscapeLayerInfoObject** PaintLayer                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::EditorApplySpline(class USplineComponent** InSplineComponent, float* StartWidth, float* EndWidth, float* StartSideFalloff, float* EndSideFalloff, float* StartRoll, float* EndRoll, int* NumSubdivisions, bool* bRaiseHeights, bool* bLowerHeights, class ULandscapeLayerInfoObject** PaintLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorApplySpline");

	ALandscapeProxy_EditorApplySpline_Params params;
	params.InSplineComponent = InSplineComponent;
	params.StartWidth = StartWidth;
	params.EndWidth = EndWidth;
	params.StartSideFalloff = StartSideFalloff;
	params.EndSideFalloff = EndSideFalloff;
	params.StartRoll = StartRoll;
	params.EndRoll = EndRoll;
	params.NumSubdivisions = NumSubdivisions;
	params.bRaiseHeights = bRaiseHeights;
	params.bLowerHeights = bLowerHeights;
	params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
// ()
// Parameters:
// bool*                          InComponentScreenSizeToUseSubSections (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::ChangeUseTessellationComponentScreenSizeFalloff(bool* InComponentScreenSizeToUseSubSections)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff");

	ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Params params;
	params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
// ()
// Parameters:
// float*                         InUseTessellationComponentScreenSizeFalloff (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::ChangeTessellationComponentScreenSizeFalloff(float* InUseTessellationComponentScreenSizeFalloff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff");

	ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Params params;
	params.InUseTessellationComponentScreenSizeFalloff = InUseTessellationComponentScreenSizeFalloff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
// ()
// Parameters:
// float*                         InTessellationComponentScreenSize (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::ChangeTessellationComponentScreenSize(float* InTessellationComponentScreenSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize");

	ALandscapeProxy_ChangeTessellationComponentScreenSize_Params params;
	params.InTessellationComponentScreenSize = InTessellationComponentScreenSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// ()
// Parameters:
// float*                         InLODDistanceFactor            (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::ChangeLODDistanceFactor(float* InLODDistanceFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor");

	ALandscapeProxy_ChangeLODDistanceFactor_Params params;
	params.InLODDistanceFactor = InLODDistanceFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
// ()
// Parameters:
// float*                         InComponentScreenSizeToUseSubSections (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float* InComponentScreenSizeToUseSubSections)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections");

	ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params params;
	params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
// ()
// Parameters:
// struct FName*                  ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape::SetLandscapeMaterialVectorParameterValue(struct FName* ParameterName, struct FLinearColor* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue");

	ALandscape_SetLandscapeMaterialVectorParameterValue_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
// ()
// Parameters:
// struct FName*                  ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture**               Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape::SetLandscapeMaterialTextureParameterValue(struct FName* ParameterName, class UTexture** Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue");

	ALandscape_SetLandscapeMaterialTextureParameterValue_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
// ()
// Parameters:
// struct FName*                  ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape::SetLandscapeMaterialScalarParameterValue(struct FName* ParameterName, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue");

	ALandscape_SetLandscapeMaterialScalarParameterValue_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
// ()
// Parameters:
// class UMaterialInterface**     NewLandscapeMaterial           (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape::EditorSetLandscapeMaterial(class UMaterialInterface** NewLandscapeMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial");

	ALandscape_EditorSetLandscapeMaterial_Params params;
	params.NewLandscapeMaterial = NewLandscapeMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.EditorApplySpline
// ()
// Parameters:
// class USplineComponent**       InSplineComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         StartWidth                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         EndWidth                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         StartSideFalloff               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         EndSideFalloff                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         StartRoll                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         EndRoll                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumSubdivisions                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRaiseHeights                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLowerHeights                  (Parm, ZeroConstructor, IsPlainOldData)
// class ULandscapeLayerInfoObject** PaintLayer                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape::EditorApplySpline(class USplineComponent** InSplineComponent, float* StartWidth, float* EndWidth, float* StartSideFalloff, float* EndSideFalloff, float* StartRoll, float* EndRoll, int* NumSubdivisions, bool* bRaiseHeights, bool* bLowerHeights, class ULandscapeLayerInfoObject** PaintLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorApplySpline");

	ALandscape_EditorApplySpline_Params params;
	params.InSplineComponent = InSplineComponent;
	params.StartWidth = StartWidth;
	params.EndWidth = EndWidth;
	params.StartSideFalloff = StartSideFalloff;
	params.EndSideFalloff = EndSideFalloff;
	params.StartRoll = StartRoll;
	params.EndRoll = EndRoll;
	params.NumSubdivisions = NumSubdivisions;
	params.bRaiseHeights = bRaiseHeights;
	params.bLowerHeights = bLowerHeights;
	params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
// ()
// Parameters:
// bool*                          InComponentScreenSizeToUseSubSections (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape::ChangeUseTessellationComponentScreenSizeFalloff(bool* InComponentScreenSizeToUseSubSections)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff");

	ALandscape_ChangeUseTessellationComponentScreenSizeFalloff_Params params;
	params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
// ()
// Parameters:
// float*                         InUseTessellationComponentScreenSizeFalloff (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape::ChangeTessellationComponentScreenSizeFalloff(float* InUseTessellationComponentScreenSizeFalloff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff");

	ALandscape_ChangeTessellationComponentScreenSizeFalloff_Params params;
	params.InUseTessellationComponentScreenSizeFalloff = InUseTessellationComponentScreenSizeFalloff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
// ()
// Parameters:
// float*                         InTessellationComponentScreenSize (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape::ChangeTessellationComponentScreenSize(float* InTessellationComponentScreenSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize");

	ALandscape_ChangeTessellationComponentScreenSize_Params params;
	params.InTessellationComponentScreenSize = InTessellationComponentScreenSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// ()
// Parameters:
// float*                         InLODDistanceFactor            (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape::ChangeLODDistanceFactor(float* InLODDistanceFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor");

	ALandscape_ChangeLODDistanceFactor_Params params;
	params.InLODDistanceFactor = InLODDistanceFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
// ()
// Parameters:
// float*                         InComponentScreenSizeToUseSubSections (Parm, ZeroConstructor, IsPlainOldData)

void ALandscape::ChangeComponentScreenSizeToUseSubSections(float* InComponentScreenSizeToUseSubSections)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections");

	ALandscape_ChangeComponentScreenSizeToUseSubSections_Params params;
	params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.WasRecentlyRendered
// ()
// Parameters:
// float*                         Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeBlueprintBrushBase::WasRecentlyRendered(float* Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.WasRecentlyRendered");

	ALandscapeBlueprintBrushBase_WasRecentlyRendered_Params params;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.UserConstructionScript
// ()

void ALandscapeBlueprintBrushBase::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.UserConstructionScript");

	ALandscapeBlueprintBrushBase_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.TearOff
// ()

void ALandscapeBlueprintBrushBase::TearOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.TearOff");

	ALandscapeBlueprintBrushBase_TearOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SnapRootComponentTo
// ()
// Parameters:
// class AActor**                 InParentActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::SnapRootComponentTo(class AActor** InParentActor, struct FName* InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SnapRootComponentTo");

	ALandscapeBlueprintBrushBase_SnapRootComponentTo_Params params;
	params.InParentActor = InParentActor;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTickGroup
// ()
// Parameters:
// TEnumAsByte<ETickingGroup>*    NewTickGroup                   (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetTickGroup");

	ALandscapeBlueprintBrushBase_SetTickGroup_Params params;
	params.NewTickGroup = NewTickGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTickableWhenPaused
// ()
// Parameters:
// bool*                          bTickableWhenPaused            (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::SetTickableWhenPaused(bool* bTickableWhenPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetTickableWhenPaused");

	ALandscapeBlueprintBrushBase_SetTickableWhenPaused_Params params;
	params.bTickableWhenPaused = bTickableWhenPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicates
// ()
// Parameters:
// bool*                          bInReplicates                  (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::SetReplicates(bool* bInReplicates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetReplicates");

	ALandscapeBlueprintBrushBase_SetReplicates_Params params;
	params.bInReplicates = bInReplicates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicateMovement
// ()
// Parameters:
// bool*                          bInReplicateMovement           (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::SetReplicateMovement(bool* bInReplicateMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetReplicateMovement");

	ALandscapeBlueprintBrushBase_SetReplicateMovement_Params params;
	params.bInReplicateMovement = bInReplicateMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetOwner
// ()
// Parameters:
// class AActor**                 NewOwner                       (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::SetOwner(class AActor** NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetOwner");

	ALandscapeBlueprintBrushBase_SetOwner_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetNetDormancy
// ()
// Parameters:
// TEnumAsByte<ENetDormancy>*     NewDormancy                    (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::SetNetDormancy(TEnumAsByte<ENetDormancy>* NewDormancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetNetDormancy");

	ALandscapeBlueprintBrushBase_SetNetDormancy_Params params;
	params.NewDormancy = NewDormancy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetLifeSpan
// ()
// Parameters:
// float*                         InLifespan                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::SetLifeSpan(float* InLifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetLifeSpan");

	ALandscapeBlueprintBrushBase_SetLifeSpan_Params params;
	params.InLifespan = InLifespan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickInterval
// ()
// Parameters:
// float*                         TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::SetActorTickInterval(float* TickInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorTickInterval");

	ALandscapeBlueprintBrushBase_SetActorTickInterval_Params params;
	params.TickInterval = TickInterval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickEnabled
// ()
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::SetActorTickEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorTickEnabled");

	ALandscapeBlueprintBrushBase_SetActorTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorScale3D
// ()
// Parameters:
// struct FVector*                NewScale3D                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::SetActorScale3D(struct FVector* NewScale3D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorScale3D");

	ALandscapeBlueprintBrushBase_SetActorScale3D_Params params;
	params.NewScale3D = NewScale3D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorRelativeScale3D
// ()
// Parameters:
// struct FVector*                NewRelativeScale               (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::SetActorRelativeScale3D(struct FVector* NewRelativeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorRelativeScale3D");

	ALandscapeBlueprintBrushBase_SetActorRelativeScale3D_Params params;
	params.NewRelativeScale = NewRelativeScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorHiddenInGame
// ()
// Parameters:
// bool*                          bNewHidden                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::SetActorHiddenInGame(bool* bNewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorHiddenInGame");

	ALandscapeBlueprintBrushBase_SetActorHiddenInGame_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorEnableCollision
// ()
// Parameters:
// bool*                          bNewActorEnableCollision       (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::SetActorEnableCollision(bool* bNewActorEnableCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorEnableCollision");

	ALandscapeBlueprintBrushBase_SetActorEnableCollision_Params params;
	params.bNewActorEnableCollision = bNewActorEnableCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteComponent
// ()
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ALandscapeBlueprintBrushBase::RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RemoveTickPrerequisiteComponent");

	ALandscapeBlueprintBrushBase_RemoveTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteActor
// ()
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RemoveTickPrerequisiteActor");

	ALandscapeBlueprintBrushBase_RemoveTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveTick");

	ALandscapeBlueprintBrushBase_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveRadialDamage
// ()
// Parameters:
// float*                         DamageReceived                 (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveRadialDamage");

	ALandscapeBlueprintBrushBase_ReceiveRadialDamage_Params params;
	params.DamageReceived = DamageReceived;
	params.DamageType = DamageType;
	params.Origin = Origin;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceivePointDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotFromDirection              (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ALandscapeBlueprintBrushBase::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceivePointDamage");

	ALandscapeBlueprintBrushBase_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveHit
// ()
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ALandscapeBlueprintBrushBase::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveHit");

	ALandscapeBlueprintBrushBase_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveEndPlay");

	ALandscapeBlueprintBrushBase_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveDestroyed
// ()

void ALandscapeBlueprintBrushBase::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveDestroyed");

	ALandscapeBlueprintBrushBase_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveBeginPlay
// ()

void ALandscapeBlueprintBrushBase::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveBeginPlay");

	ALandscapeBlueprintBrushBase_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveAnyDamage");

	ALandscapeBlueprintBrushBase_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnReleased
// ()
// Parameters:
// struct FKey*                   ButtonReleased                 (Parm)

void ALandscapeBlueprintBrushBase::ReceiveActorOnReleased(struct FKey* ButtonReleased)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnReleased");

	ALandscapeBlueprintBrushBase_ReceiveActorOnReleased_Params params;
	params.ButtonReleased = ButtonReleased;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchLeave
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchLeave");

	ALandscapeBlueprintBrushBase_ReceiveActorOnInputTouchLeave_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnter
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchEnter");

	ALandscapeBlueprintBrushBase_ReceiveActorOnInputTouchEnter_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnd
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchEnd");

	ALandscapeBlueprintBrushBase_ReceiveActorOnInputTouchEnd_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchBegin
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchBegin");

	ALandscapeBlueprintBrushBase_ReceiveActorOnInputTouchBegin_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnClicked
// ()
// Parameters:
// struct FKey*                   ButtonPressed                  (Parm)

void ALandscapeBlueprintBrushBase::ReceiveActorOnClicked(struct FKey* ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnClicked");

	ALandscapeBlueprintBrushBase_ReceiveActorOnClicked_Params params;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorEndOverlap");

	ALandscapeBlueprintBrushBase_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndCursorOver
// ()

void ALandscapeBlueprintBrushBase::ReceiveActorEndCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorEndCursorOver");

	ALandscapeBlueprintBrushBase_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorBeginOverlap");

	ALandscapeBlueprintBrushBase_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginCursorOver
// ()

void ALandscapeBlueprintBrushBase::ReceiveActorBeginCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorBeginCursorOver");

	ALandscapeBlueprintBrushBase_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PrestreamTextures
// ()
// Parameters:
// float*                         Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEnableStreaming               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CinematicTextureGroups         (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::PrestreamTextures(float* Seconds, bool* bEnableStreaming, int* CinematicTextureGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PrestreamTextures");

	ALandscapeBlueprintBrushBase_PrestreamTextures_Params params;
	params.Seconds = Seconds;
	params.bEnableStreaming = bEnableStreaming;
	params.CinematicTextureGroups = CinematicTextureGroups;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicateMovement
// ()

void ALandscapeBlueprintBrushBase::OnRep_ReplicateMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_ReplicateMovement");

	ALandscapeBlueprintBrushBase_OnRep_ReplicateMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicatedMovement
// ()

void ALandscapeBlueprintBrushBase::OnRep_ReplicatedMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_ReplicatedMovement");

	ALandscapeBlueprintBrushBase_OnRep_ReplicatedMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Owner
// ()

void ALandscapeBlueprintBrushBase::OnRep_Owner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Owner");

	ALandscapeBlueprintBrushBase_OnRep_Owner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Instigator
// ()

void ALandscapeBlueprintBrushBase::OnRep_Instigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Instigator");

	ALandscapeBlueprintBrushBase_OnRep_Instigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_AttachmentReplication
// ()

void ALandscapeBlueprintBrushBase::OnRep_AttachmentReplication()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_AttachmentReplication");

	ALandscapeBlueprintBrushBase_OnRep_AttachmentReplication_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.MakeNoise
// ()
// Parameters:
// float*                         Loudness                       (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  NoiseInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NoiseLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::MakeNoise(float* Loudness, class APawn** NoiseInstigator, struct FVector* NoiseLocation, float* MaxRange, struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MakeNoise");

	ALandscapeBlueprintBrushBase_MakeNoise_Params params;
	params.Loudness = Loudness;
	params.NoiseInstigator = NoiseInstigator;
	params.NoiseLocation = NoiseLocation;
	params.MaxRange = MaxRange;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.MakeMIDForMaterial
// ()
// Parameters:
// class UMaterialInterface**     Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* ALandscapeBlueprintBrushBase::MakeMIDForMaterial(class UMaterialInterface** Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MakeMIDForMaterial");

	ALandscapeBlueprintBrushBase_MakeMIDForMaterial_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_TeleportTo
// ()
// Parameters:
// struct FVector*                DestLocation                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               DestRotation                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeBlueprintBrushBase::K2_TeleportTo(struct FVector* DestLocation, struct FRotator* DestRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_TeleportTo");

	ALandscapeBlueprintBrushBase_K2_TeleportTo_Params params;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorTransform
// ()
// Parameters:
// struct FTransform*             NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeBlueprintBrushBase::K2_SetActorTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorTransform");

	ALandscapeBlueprintBrushBase_K2_SetActorTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorRotation
// ()
// Parameters:
// struct FRotator*               NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTeleportPhysics               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeBlueprintBrushBase::K2_SetActorRotation(struct FRotator* NewRotation, bool* bTeleportPhysics)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRotation");

	ALandscapeBlueprintBrushBase_K2_SetActorRotation_Params params;
	params.NewRotation = NewRotation;
	params.bTeleportPhysics = bTeleportPhysics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorRelativeTransform
// ()
// Parameters:
// struct FTransform*             NewRelativeTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::K2_SetActorRelativeTransform(struct FTransform* NewRelativeTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeTransform");

	ALandscapeBlueprintBrushBase_K2_SetActorRelativeTransform_Params params;
	params.NewRelativeTransform = NewRelativeTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorRelativeRotation
// ()
// Parameters:
// struct FRotator*               NewRelativeRotation            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::K2_SetActorRelativeRotation(struct FRotator* NewRelativeRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeRotation");

	ALandscapeBlueprintBrushBase_K2_SetActorRelativeRotation_Params params;
	params.NewRelativeRotation = NewRelativeRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorRelativeLocation
// ()
// Parameters:
// struct FVector*                NewRelativeLocation            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::K2_SetActorRelativeLocation(struct FVector* NewRelativeLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeLocation");

	ALandscapeBlueprintBrushBase_K2_SetActorRelativeLocation_Params params;
	params.NewRelativeLocation = NewRelativeLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorLocationAndRotation
// ()
// Parameters:
// struct FVector*                NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeBlueprintBrushBase::K2_SetActorLocationAndRotation(struct FVector* NewLocation, struct FRotator* NewRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorLocationAndRotation");

	ALandscapeBlueprintBrushBase_K2_SetActorLocationAndRotation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorLocation
// ()
// Parameters:
// struct FVector*                NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeBlueprintBrushBase::K2_SetActorLocation(struct FVector* NewLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorLocation");

	ALandscapeBlueprintBrushBase_K2_SetActorLocation_Params params;
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_OnReset
// ()

void ALandscapeBlueprintBrushBase::K2_OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnReset");

	ALandscapeBlueprintBrushBase_K2_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnEndViewTarget
// ()
// Parameters:
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::K2_OnEndViewTarget(class APlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnEndViewTarget");

	ALandscapeBlueprintBrushBase_K2_OnEndViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnBecomeViewTarget
// ()
// Parameters:
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::K2_OnBecomeViewTarget(class APlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnBecomeViewTarget");

	ALandscapeBlueprintBrushBase_K2_OnBecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_GetRootComponent
// ()
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* ALandscapeBlueprintBrushBase::K2_GetRootComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetRootComponent");

	ALandscapeBlueprintBrushBase_K2_GetRootComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetComponentsByClass
// ()
// Parameters:
// class UClass**                 ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ALandscapeBlueprintBrushBase::K2_GetComponentsByClass(class UClass** ComponentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetComponentsByClass");

	ALandscapeBlueprintBrushBase_K2_GetComponentsByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorRotation
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ALandscapeBlueprintBrushBase::K2_GetActorRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorRotation");

	ALandscapeBlueprintBrushBase_K2_GetActorRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeBlueprintBrushBase::K2_GetActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorLocation");

	ALandscapeBlueprintBrushBase_K2_GetActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_DetachFromActor
// ()
// Parameters:
// EDetachmentRule*               LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EDetachmentRule*               RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EDetachmentRule*               ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::K2_DetachFromActor(EDetachmentRule* LocationRule, EDetachmentRule* RotationRule, EDetachmentRule* ScaleRule)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DetachFromActor");

	ALandscapeBlueprintBrushBase_K2_DetachFromActor_Params params;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyComponent
// ()
// Parameters:
// class UActorComponent**        Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ALandscapeBlueprintBrushBase::K2_DestroyComponent(class UActorComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DestroyComponent");

	ALandscapeBlueprintBrushBase_K2_DestroyComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyActor
// ()

void ALandscapeBlueprintBrushBase::K2_DestroyActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DestroyActor");

	ALandscapeBlueprintBrushBase_K2_DestroyActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachToComponent
// ()
// Parameters:
// class USceneComponent**        Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::K2_AttachToComponent(class USceneComponent** Parent, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachToComponent");

	ALandscapeBlueprintBrushBase_K2_AttachToComponent_Params params;
	params.Parent = Parent;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachToActor
// ()
// Parameters:
// class AActor**                 ParentActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::K2_AttachToActor(class AActor** ParentActor, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachToActor");

	ALandscapeBlueprintBrushBase_K2_AttachToActor_Params params;
	params.ParentActor = ParentActor;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachRootComponentToActor
// ()
// Parameters:
// class AActor**                 InParentActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>*  AttachLocationType             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::K2_AttachRootComponentToActor(class AActor** InParentActor, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachRootComponentToActor");

	ALandscapeBlueprintBrushBase_K2_AttachRootComponentToActor_Params params;
	params.InParentActor = InParentActor;
	params.InSocketName = InSocketName;
	params.AttachLocationType = AttachLocationType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachRootComponentTo
// ()
// Parameters:
// class USceneComponent**        InParent                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>*  AttachLocationType             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::K2_AttachRootComponentTo(class USceneComponent** InParent, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachRootComponentTo");

	ALandscapeBlueprintBrushBase_K2_AttachRootComponentTo_Params params;
	params.InParent = InParent;
	params.InSocketName = InSocketName;
	params.AttachLocationType = AttachLocationType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AddActorWorldTransform
// ()
// Parameters:
// struct FTransform*             DeltaTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::K2_AddActorWorldTransform(struct FTransform* DeltaTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldTransform");

	ALandscapeBlueprintBrushBase_K2_AddActorWorldTransform_Params params;
	params.DeltaTransform = DeltaTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorWorldRotation
// ()
// Parameters:
// struct FRotator*               DeltaRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::K2_AddActorWorldRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldRotation");

	ALandscapeBlueprintBrushBase_K2_AddActorWorldRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorWorldOffset
// ()
// Parameters:
// struct FVector*                DeltaLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::K2_AddActorWorldOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldOffset");

	ALandscapeBlueprintBrushBase_K2_AddActorWorldOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalTransform
// ()
// Parameters:
// struct FTransform*             NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::K2_AddActorLocalTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalTransform");

	ALandscapeBlueprintBrushBase_K2_AddActorLocalTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalRotation
// ()
// Parameters:
// struct FRotator*               DeltaRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::K2_AddActorLocalRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalRotation");

	ALandscapeBlueprintBrushBase_K2_AddActorLocalRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalOffset
// ()
// Parameters:
// struct FVector*                DeltaLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::K2_AddActorLocalOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalOffset");

	ALandscapeBlueprintBrushBase_K2_AddActorLocalOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.IsOverlappingActor
// ()
// Parameters:
// class AActor**                 Other                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeBlueprintBrushBase::IsOverlappingActor(class AActor** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsOverlappingActor");

	ALandscapeBlueprintBrushBase_IsOverlappingActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsChildActor
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeBlueprintBrushBase::IsChildActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsChildActor");

	ALandscapeBlueprintBrushBase_IsChildActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorTickEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeBlueprintBrushBase::IsActorTickEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsActorTickEnabled");

	ALandscapeBlueprintBrushBase_IsActorTickEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorBeingDestroyed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeBlueprintBrushBase::IsActorBeingDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsActorBeingDestroyed");

	ALandscapeBlueprintBrushBase_IsActorBeingDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.HasAuthority
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeBlueprintBrushBase::HasAuthority()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.HasAuthority");

	ALandscapeBlueprintBrushBase_HasAuthority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetVerticalDistanceTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeBlueprintBrushBase::GetVerticalDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetVerticalDistanceTo");

	ALandscapeBlueprintBrushBase_GetVerticalDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetVelocity
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeBlueprintBrushBase::GetVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetVelocity");

	ALandscapeBlueprintBrushBase_GetVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTransform
// ()
// Parameters:
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FTransform ALandscapeBlueprintBrushBase::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTransform");

	ALandscapeBlueprintBrushBase_GetTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTickableWhenPaused
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeBlueprintBrushBase::GetTickableWhenPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTickableWhenPaused");

	ALandscapeBlueprintBrushBase_GetTickableWhenPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetSquaredDistanceTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeBlueprintBrushBase::GetSquaredDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetSquaredDistanceTo");

	ALandscapeBlueprintBrushBase_GetSquaredDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetRemoteRole
// ()
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> ALandscapeBlueprintBrushBase::GetRemoteRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetRemoteRole");

	ALandscapeBlueprintBrushBase_GetRemoteRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentComponent
// ()
// Parameters:
// class UChildActorComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UChildActorComponent* ALandscapeBlueprintBrushBase::GetParentComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetParentComponent");

	ALandscapeBlueprintBrushBase_GetParentComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentActor
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ALandscapeBlueprintBrushBase::GetParentActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetParentActor");

	ALandscapeBlueprintBrushBase_GetParentActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOwner
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ALandscapeBlueprintBrushBase::GetOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOwner");

	ALandscapeBlueprintBrushBase_GetOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOverlappingComponents
// ()
// Parameters:
// TArray<class UPrimitiveComponent*> OverlappingComponents          (Parm, OutParm, ZeroConstructor)

void ALandscapeBlueprintBrushBase::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOverlappingComponents");

	ALandscapeBlueprintBrushBase_GetOverlappingComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingComponents != nullptr)
		*OverlappingComponents = params.OverlappingComponents;
}


// Function Engine.Actor.GetOverlappingActors
// ()
// Parameters:
// TArray<class AActor*>          OverlappingActors              (Parm, OutParm, ZeroConstructor)
// class UClass**                 ClassFilter                    (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::GetOverlappingActors(class UClass** ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOverlappingActors");

	ALandscapeBlueprintBrushBase_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}


// Function Engine.Actor.GetLocalRole
// ()
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> ALandscapeBlueprintBrushBase::GetLocalRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetLocalRole");

	ALandscapeBlueprintBrushBase_GetLocalRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetLifeSpan
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeBlueprintBrushBase::GetLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetLifeSpan");

	ALandscapeBlueprintBrushBase_GetLifeSpan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigatorController
// ()
// Parameters:
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AController* ALandscapeBlueprintBrushBase::GetInstigatorController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInstigatorController");

	ALandscapeBlueprintBrushBase_GetInstigatorController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigator
// ()
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* ALandscapeBlueprintBrushBase::GetInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInstigator");

	ALandscapeBlueprintBrushBase_GetInstigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputVectorAxisValue
// ()
// Parameters:
// struct FKey*                   InputAxisKey                   (ConstParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeBlueprintBrushBase::GetInputVectorAxisValue(struct FKey* InputAxisKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputVectorAxisValue");

	ALandscapeBlueprintBrushBase_GetInputVectorAxisValue_Params params;
	params.InputAxisKey = InputAxisKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputAxisValue
// ()
// Parameters:
// struct FName*                  InputAxisName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeBlueprintBrushBase::GetInputAxisValue(struct FName* InputAxisName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputAxisValue");

	ALandscapeBlueprintBrushBase_GetInputAxisValue_Params params;
	params.InputAxisName = InputAxisName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputAxisKeyValue
// ()
// Parameters:
// struct FKey*                   InputAxisKey                   (ConstParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeBlueprintBrushBase::GetInputAxisKeyValue(struct FKey* InputAxisKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputAxisKeyValue");

	ALandscapeBlueprintBrushBase_GetInputAxisKeyValue_Params params;
	params.InputAxisKey = InputAxisKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetHorizontalDotProductTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeBlueprintBrushBase::GetHorizontalDotProductTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetHorizontalDotProductTo");

	ALandscapeBlueprintBrushBase_GetHorizontalDotProductTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetHorizontalDistanceTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeBlueprintBrushBase::GetHorizontalDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetHorizontalDistanceTo");

	ALandscapeBlueprintBrushBase_GetHorizontalDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetGameTimeSinceCreation
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeBlueprintBrushBase::GetGameTimeSinceCreation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetGameTimeSinceCreation");

	ALandscapeBlueprintBrushBase_GetGameTimeSinceCreation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetDotProductTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeBlueprintBrushBase::GetDotProductTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetDotProductTo");

	ALandscapeBlueprintBrushBase_GetDotProductTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetDistanceTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeBlueprintBrushBase::GetDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetDistanceTo");

	ALandscapeBlueprintBrushBase_GetDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentsByTag
// ()
// Parameters:
// class UClass**                 ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ALandscapeBlueprintBrushBase::GetComponentsByTag(class UClass** ComponentClass, struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentsByTag");

	ALandscapeBlueprintBrushBase_GetComponentsByTag_Params params;
	params.ComponentClass = ComponentClass;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentsByInterface
// ()
// Parameters:
// class UClass**                 Interface                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ALandscapeBlueprintBrushBase::GetComponentsByInterface(class UClass** Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentsByInterface");

	ALandscapeBlueprintBrushBase_GetComponentsByInterface_Params params;
	params.Interface = Interface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentByClass
// ()
// Parameters:
// class UClass**                 ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* ALandscapeBlueprintBrushBase::GetComponentByClass(class UClass** ComponentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentByClass");

	ALandscapeBlueprintBrushBase_GetComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachParentSocketName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ALandscapeBlueprintBrushBase::GetAttachParentSocketName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachParentSocketName");

	ALandscapeBlueprintBrushBase_GetAttachParentSocketName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachParentActor
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ALandscapeBlueprintBrushBase::GetAttachParentActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachParentActor");

	ALandscapeBlueprintBrushBase_GetAttachParentActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachedActors
// ()
// Parameters:
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
// bool*                          bResetArray                    (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::GetAttachedActors(bool* bResetArray, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachedActors");

	ALandscapeBlueprintBrushBase_GetAttachedActors_Params params;
	params.bResetArray = bResetArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function Engine.Actor.GetAllChildActors
// ()
// Parameters:
// TArray<class AActor*>          ChildActors                    (Parm, OutParm, ZeroConstructor)
// bool*                          bIncludeDescendants            (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::GetAllChildActors(bool* bIncludeDescendants, TArray<class AActor*>* ChildActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAllChildActors");

	ALandscapeBlueprintBrushBase_GetAllChildActors_Params params;
	params.bIncludeDescendants = bIncludeDescendants;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChildActors != nullptr)
		*ChildActors = params.ChildActors;
}


// Function Engine.Actor.GetActorUpVector
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeBlueprintBrushBase::GetActorUpVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorUpVector");

	ALandscapeBlueprintBrushBase_GetActorUpVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTimeDilation
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeBlueprintBrushBase::GetActorTimeDilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorTimeDilation");

	ALandscapeBlueprintBrushBase_GetActorTimeDilation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTickInterval
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeBlueprintBrushBase::GetActorTickInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorTickInterval");

	ALandscapeBlueprintBrushBase_GetActorTickInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorScale3D
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeBlueprintBrushBase::GetActorScale3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorScale3D");

	ALandscapeBlueprintBrushBase_GetActorScale3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRightVector
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeBlueprintBrushBase::GetActorRightVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorRightVector");

	ALandscapeBlueprintBrushBase_GetActorRightVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRelativeScale3D
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeBlueprintBrushBase::GetActorRelativeScale3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorRelativeScale3D");

	ALandscapeBlueprintBrushBase_GetActorRelativeScale3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorForwardVector
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeBlueprintBrushBase::GetActorForwardVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorForwardVector");

	ALandscapeBlueprintBrushBase_GetActorForwardVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorEyesViewPoint
// ()
// Parameters:
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorEyesViewPoint");

	ALandscapeBlueprintBrushBase_GetActorEyesViewPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}


// Function Engine.Actor.GetActorEnableCollision
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeBlueprintBrushBase::GetActorEnableCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorEnableCollision");

	ALandscapeBlueprintBrushBase_GetActorEnableCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorBounds
// ()
// Parameters:
// bool*                          bOnlyCollidingComponents       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::GetActorBounds(bool* bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorBounds");

	ALandscapeBlueprintBrushBase_GetActorBounds_Params params;
	params.bOnlyCollidingComponents = bOnlyCollidingComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}


// Function Engine.Actor.ForceNetUpdate
// ()

void ALandscapeBlueprintBrushBase::ForceNetUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ForceNetUpdate");

	ALandscapeBlueprintBrushBase_ForceNetUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.FlushNetDormancy
// ()

void ALandscapeBlueprintBrushBase::FlushNetDormancy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.FlushNetDormancy");

	ALandscapeBlueprintBrushBase_FlushNetDormancy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.EnableInput
// ()
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::EnableInput(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.EnableInput");

	ALandscapeBlueprintBrushBase_EnableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DisableInput
// ()
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::DisableInput(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DisableInput");

	ALandscapeBlueprintBrushBase_DisableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DetachRootComponentFromParent
// ()
// Parameters:
// bool*                          bMaintainWorldPosition         (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::DetachRootComponentFromParent(bool* bMaintainWorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DetachRootComponentFromParent");

	ALandscapeBlueprintBrushBase_DetachRootComponentFromParent_Params params;
	params.bMaintainWorldPosition = bMaintainWorldPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteComponent
// ()
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ALandscapeBlueprintBrushBase::AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddTickPrerequisiteComponent");

	ALandscapeBlueprintBrushBase_AddTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteActor
// ()
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeBlueprintBrushBase::AddTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddTickPrerequisiteActor");

	ALandscapeBlueprintBrushBase_AddTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddComponent
// ()
// Parameters:
// struct FName*                  TemplateName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bManualAttachment              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject**                ComponentTemplateContext       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* ALandscapeBlueprintBrushBase::AddComponent(struct FName* TemplateName, bool* bManualAttachment, struct FTransform* RelativeTransform, class UObject** ComponentTemplateContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddComponent");

	ALandscapeBlueprintBrushBase_AddComponent_Params params;
	params.TemplateName = TemplateName;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;
	params.ComponentTemplateContext = ComponentTemplateContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.ActorHasTag
// ()
// Parameters:
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeBlueprintBrushBase::ActorHasTag(struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ActorHasTag");

	ALandscapeBlueprintBrushBase_ActorHasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
// ()
// Parameters:
// int*                           InIndex                        (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* ULandscapeComponent::GetMaterialInstanceDynamic(int* InIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic");

	ULandscapeComponent_GetMaterialInstanceDynamic_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
// ()
// Parameters:
// struct FVector*                InLocation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName*                  InPaintLayerName               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULandscapeComponent::EditorGetPaintLayerWeightByNameAtLocation(struct FVector* InLocation, struct FName* InPaintLayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation");

	ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Params params;
	params.InLocation = InLocation;
	params.InPaintLayerName = InPaintLayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
// ()
// Parameters:
// struct FVector*                InLocation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class ULandscapeLayerInfoObject** PaintLayer                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULandscapeComponent::EditorGetPaintLayerWeightAtLocation(struct FVector* InLocation, class ULandscapeLayerInfoObject** PaintLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation");

	ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Params params;
	params.InLocation = InLocation;
	params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.WasRecentlyRendered
// ()
// Parameters:
// float*                         Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActor::WasRecentlyRendered(float* Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.WasRecentlyRendered");

	ALandscapeGizmoActor_WasRecentlyRendered_Params params;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.UserConstructionScript
// ()

void ALandscapeGizmoActor::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.UserConstructionScript");

	ALandscapeGizmoActor_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.TearOff
// ()

void ALandscapeGizmoActor::TearOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.TearOff");

	ALandscapeGizmoActor_TearOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SnapRootComponentTo
// ()
// Parameters:
// class AActor**                 InParentActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::SnapRootComponentTo(class AActor** InParentActor, struct FName* InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SnapRootComponentTo");

	ALandscapeGizmoActor_SnapRootComponentTo_Params params;
	params.InParentActor = InParentActor;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTickGroup
// ()
// Parameters:
// TEnumAsByte<ETickingGroup>*    NewTickGroup                   (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetTickGroup");

	ALandscapeGizmoActor_SetTickGroup_Params params;
	params.NewTickGroup = NewTickGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTickableWhenPaused
// ()
// Parameters:
// bool*                          bTickableWhenPaused            (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::SetTickableWhenPaused(bool* bTickableWhenPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetTickableWhenPaused");

	ALandscapeGizmoActor_SetTickableWhenPaused_Params params;
	params.bTickableWhenPaused = bTickableWhenPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicates
// ()
// Parameters:
// bool*                          bInReplicates                  (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::SetReplicates(bool* bInReplicates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetReplicates");

	ALandscapeGizmoActor_SetReplicates_Params params;
	params.bInReplicates = bInReplicates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicateMovement
// ()
// Parameters:
// bool*                          bInReplicateMovement           (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::SetReplicateMovement(bool* bInReplicateMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetReplicateMovement");

	ALandscapeGizmoActor_SetReplicateMovement_Params params;
	params.bInReplicateMovement = bInReplicateMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetOwner
// ()
// Parameters:
// class AActor**                 NewOwner                       (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::SetOwner(class AActor** NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetOwner");

	ALandscapeGizmoActor_SetOwner_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetNetDormancy
// ()
// Parameters:
// TEnumAsByte<ENetDormancy>*     NewDormancy                    (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::SetNetDormancy(TEnumAsByte<ENetDormancy>* NewDormancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetNetDormancy");

	ALandscapeGizmoActor_SetNetDormancy_Params params;
	params.NewDormancy = NewDormancy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetLifeSpan
// ()
// Parameters:
// float*                         InLifespan                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::SetLifeSpan(float* InLifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetLifeSpan");

	ALandscapeGizmoActor_SetLifeSpan_Params params;
	params.InLifespan = InLifespan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickInterval
// ()
// Parameters:
// float*                         TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::SetActorTickInterval(float* TickInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorTickInterval");

	ALandscapeGizmoActor_SetActorTickInterval_Params params;
	params.TickInterval = TickInterval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickEnabled
// ()
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::SetActorTickEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorTickEnabled");

	ALandscapeGizmoActor_SetActorTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorScale3D
// ()
// Parameters:
// struct FVector*                NewScale3D                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::SetActorScale3D(struct FVector* NewScale3D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorScale3D");

	ALandscapeGizmoActor_SetActorScale3D_Params params;
	params.NewScale3D = NewScale3D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorRelativeScale3D
// ()
// Parameters:
// struct FVector*                NewRelativeScale               (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::SetActorRelativeScale3D(struct FVector* NewRelativeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorRelativeScale3D");

	ALandscapeGizmoActor_SetActorRelativeScale3D_Params params;
	params.NewRelativeScale = NewRelativeScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorHiddenInGame
// ()
// Parameters:
// bool*                          bNewHidden                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::SetActorHiddenInGame(bool* bNewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorHiddenInGame");

	ALandscapeGizmoActor_SetActorHiddenInGame_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorEnableCollision
// ()
// Parameters:
// bool*                          bNewActorEnableCollision       (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::SetActorEnableCollision(bool* bNewActorEnableCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorEnableCollision");

	ALandscapeGizmoActor_SetActorEnableCollision_Params params;
	params.bNewActorEnableCollision = bNewActorEnableCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteComponent
// ()
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ALandscapeGizmoActor::RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RemoveTickPrerequisiteComponent");

	ALandscapeGizmoActor_RemoveTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteActor
// ()
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RemoveTickPrerequisiteActor");

	ALandscapeGizmoActor_RemoveTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveTick");

	ALandscapeGizmoActor_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveRadialDamage
// ()
// Parameters:
// float*                         DamageReceived                 (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveRadialDamage");

	ALandscapeGizmoActor_ReceiveRadialDamage_Params params;
	params.DamageReceived = DamageReceived;
	params.DamageType = DamageType;
	params.Origin = Origin;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceivePointDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotFromDirection              (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ALandscapeGizmoActor::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceivePointDamage");

	ALandscapeGizmoActor_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveHit
// ()
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ALandscapeGizmoActor::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveHit");

	ALandscapeGizmoActor_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveEndPlay");

	ALandscapeGizmoActor_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveDestroyed
// ()

void ALandscapeGizmoActor::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveDestroyed");

	ALandscapeGizmoActor_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveBeginPlay
// ()

void ALandscapeGizmoActor::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveBeginPlay");

	ALandscapeGizmoActor_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveAnyDamage");

	ALandscapeGizmoActor_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnReleased
// ()
// Parameters:
// struct FKey*                   ButtonReleased                 (Parm)

void ALandscapeGizmoActor::ReceiveActorOnReleased(struct FKey* ButtonReleased)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnReleased");

	ALandscapeGizmoActor_ReceiveActorOnReleased_Params params;
	params.ButtonReleased = ButtonReleased;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchLeave
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchLeave");

	ALandscapeGizmoActor_ReceiveActorOnInputTouchLeave_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnter
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchEnter");

	ALandscapeGizmoActor_ReceiveActorOnInputTouchEnter_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnd
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchEnd");

	ALandscapeGizmoActor_ReceiveActorOnInputTouchEnd_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchBegin
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchBegin");

	ALandscapeGizmoActor_ReceiveActorOnInputTouchBegin_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnClicked
// ()
// Parameters:
// struct FKey*                   ButtonPressed                  (Parm)

void ALandscapeGizmoActor::ReceiveActorOnClicked(struct FKey* ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnClicked");

	ALandscapeGizmoActor_ReceiveActorOnClicked_Params params;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorEndOverlap");

	ALandscapeGizmoActor_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndCursorOver
// ()

void ALandscapeGizmoActor::ReceiveActorEndCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorEndCursorOver");

	ALandscapeGizmoActor_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorBeginOverlap");

	ALandscapeGizmoActor_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginCursorOver
// ()

void ALandscapeGizmoActor::ReceiveActorBeginCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorBeginCursorOver");

	ALandscapeGizmoActor_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PrestreamTextures
// ()
// Parameters:
// float*                         Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEnableStreaming               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CinematicTextureGroups         (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::PrestreamTextures(float* Seconds, bool* bEnableStreaming, int* CinematicTextureGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PrestreamTextures");

	ALandscapeGizmoActor_PrestreamTextures_Params params;
	params.Seconds = Seconds;
	params.bEnableStreaming = bEnableStreaming;
	params.CinematicTextureGroups = CinematicTextureGroups;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicateMovement
// ()

void ALandscapeGizmoActor::OnRep_ReplicateMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_ReplicateMovement");

	ALandscapeGizmoActor_OnRep_ReplicateMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicatedMovement
// ()

void ALandscapeGizmoActor::OnRep_ReplicatedMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_ReplicatedMovement");

	ALandscapeGizmoActor_OnRep_ReplicatedMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Owner
// ()

void ALandscapeGizmoActor::OnRep_Owner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Owner");

	ALandscapeGizmoActor_OnRep_Owner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Instigator
// ()

void ALandscapeGizmoActor::OnRep_Instigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Instigator");

	ALandscapeGizmoActor_OnRep_Instigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_AttachmentReplication
// ()

void ALandscapeGizmoActor::OnRep_AttachmentReplication()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_AttachmentReplication");

	ALandscapeGizmoActor_OnRep_AttachmentReplication_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.MakeNoise
// ()
// Parameters:
// float*                         Loudness                       (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  NoiseInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NoiseLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::MakeNoise(float* Loudness, class APawn** NoiseInstigator, struct FVector* NoiseLocation, float* MaxRange, struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MakeNoise");

	ALandscapeGizmoActor_MakeNoise_Params params;
	params.Loudness = Loudness;
	params.NoiseInstigator = NoiseInstigator;
	params.NoiseLocation = NoiseLocation;
	params.MaxRange = MaxRange;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.MakeMIDForMaterial
// ()
// Parameters:
// class UMaterialInterface**     Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* ALandscapeGizmoActor::MakeMIDForMaterial(class UMaterialInterface** Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MakeMIDForMaterial");

	ALandscapeGizmoActor_MakeMIDForMaterial_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_TeleportTo
// ()
// Parameters:
// struct FVector*                DestLocation                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               DestRotation                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActor::K2_TeleportTo(struct FVector* DestLocation, struct FRotator* DestRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_TeleportTo");

	ALandscapeGizmoActor_K2_TeleportTo_Params params;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorTransform
// ()
// Parameters:
// struct FTransform*             NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActor::K2_SetActorTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorTransform");

	ALandscapeGizmoActor_K2_SetActorTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorRotation
// ()
// Parameters:
// struct FRotator*               NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTeleportPhysics               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActor::K2_SetActorRotation(struct FRotator* NewRotation, bool* bTeleportPhysics)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRotation");

	ALandscapeGizmoActor_K2_SetActorRotation_Params params;
	params.NewRotation = NewRotation;
	params.bTeleportPhysics = bTeleportPhysics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorRelativeTransform
// ()
// Parameters:
// struct FTransform*             NewRelativeTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::K2_SetActorRelativeTransform(struct FTransform* NewRelativeTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeTransform");

	ALandscapeGizmoActor_K2_SetActorRelativeTransform_Params params;
	params.NewRelativeTransform = NewRelativeTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorRelativeRotation
// ()
// Parameters:
// struct FRotator*               NewRelativeRotation            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::K2_SetActorRelativeRotation(struct FRotator* NewRelativeRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeRotation");

	ALandscapeGizmoActor_K2_SetActorRelativeRotation_Params params;
	params.NewRelativeRotation = NewRelativeRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorRelativeLocation
// ()
// Parameters:
// struct FVector*                NewRelativeLocation            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::K2_SetActorRelativeLocation(struct FVector* NewRelativeLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeLocation");

	ALandscapeGizmoActor_K2_SetActorRelativeLocation_Params params;
	params.NewRelativeLocation = NewRelativeLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorLocationAndRotation
// ()
// Parameters:
// struct FVector*                NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActor::K2_SetActorLocationAndRotation(struct FVector* NewLocation, struct FRotator* NewRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorLocationAndRotation");

	ALandscapeGizmoActor_K2_SetActorLocationAndRotation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorLocation
// ()
// Parameters:
// struct FVector*                NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActor::K2_SetActorLocation(struct FVector* NewLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorLocation");

	ALandscapeGizmoActor_K2_SetActorLocation_Params params;
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_OnReset
// ()

void ALandscapeGizmoActor::K2_OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnReset");

	ALandscapeGizmoActor_K2_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnEndViewTarget
// ()
// Parameters:
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::K2_OnEndViewTarget(class APlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnEndViewTarget");

	ALandscapeGizmoActor_K2_OnEndViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnBecomeViewTarget
// ()
// Parameters:
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::K2_OnBecomeViewTarget(class APlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnBecomeViewTarget");

	ALandscapeGizmoActor_K2_OnBecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_GetRootComponent
// ()
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* ALandscapeGizmoActor::K2_GetRootComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetRootComponent");

	ALandscapeGizmoActor_K2_GetRootComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetComponentsByClass
// ()
// Parameters:
// class UClass**                 ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ALandscapeGizmoActor::K2_GetComponentsByClass(class UClass** ComponentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetComponentsByClass");

	ALandscapeGizmoActor_K2_GetComponentsByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorRotation
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ALandscapeGizmoActor::K2_GetActorRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorRotation");

	ALandscapeGizmoActor_K2_GetActorRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeGizmoActor::K2_GetActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorLocation");

	ALandscapeGizmoActor_K2_GetActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_DetachFromActor
// ()
// Parameters:
// EDetachmentRule*               LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EDetachmentRule*               RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EDetachmentRule*               ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::K2_DetachFromActor(EDetachmentRule* LocationRule, EDetachmentRule* RotationRule, EDetachmentRule* ScaleRule)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DetachFromActor");

	ALandscapeGizmoActor_K2_DetachFromActor_Params params;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyComponent
// ()
// Parameters:
// class UActorComponent**        Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ALandscapeGizmoActor::K2_DestroyComponent(class UActorComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DestroyComponent");

	ALandscapeGizmoActor_K2_DestroyComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyActor
// ()

void ALandscapeGizmoActor::K2_DestroyActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DestroyActor");

	ALandscapeGizmoActor_K2_DestroyActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachToComponent
// ()
// Parameters:
// class USceneComponent**        Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::K2_AttachToComponent(class USceneComponent** Parent, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachToComponent");

	ALandscapeGizmoActor_K2_AttachToComponent_Params params;
	params.Parent = Parent;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachToActor
// ()
// Parameters:
// class AActor**                 ParentActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::K2_AttachToActor(class AActor** ParentActor, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachToActor");

	ALandscapeGizmoActor_K2_AttachToActor_Params params;
	params.ParentActor = ParentActor;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachRootComponentToActor
// ()
// Parameters:
// class AActor**                 InParentActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>*  AttachLocationType             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::K2_AttachRootComponentToActor(class AActor** InParentActor, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachRootComponentToActor");

	ALandscapeGizmoActor_K2_AttachRootComponentToActor_Params params;
	params.InParentActor = InParentActor;
	params.InSocketName = InSocketName;
	params.AttachLocationType = AttachLocationType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachRootComponentTo
// ()
// Parameters:
// class USceneComponent**        InParent                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>*  AttachLocationType             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::K2_AttachRootComponentTo(class USceneComponent** InParent, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachRootComponentTo");

	ALandscapeGizmoActor_K2_AttachRootComponentTo_Params params;
	params.InParent = InParent;
	params.InSocketName = InSocketName;
	params.AttachLocationType = AttachLocationType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AddActorWorldTransform
// ()
// Parameters:
// struct FTransform*             DeltaTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::K2_AddActorWorldTransform(struct FTransform* DeltaTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldTransform");

	ALandscapeGizmoActor_K2_AddActorWorldTransform_Params params;
	params.DeltaTransform = DeltaTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorWorldRotation
// ()
// Parameters:
// struct FRotator*               DeltaRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::K2_AddActorWorldRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldRotation");

	ALandscapeGizmoActor_K2_AddActorWorldRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorWorldOffset
// ()
// Parameters:
// struct FVector*                DeltaLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::K2_AddActorWorldOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldOffset");

	ALandscapeGizmoActor_K2_AddActorWorldOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalTransform
// ()
// Parameters:
// struct FTransform*             NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::K2_AddActorLocalTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalTransform");

	ALandscapeGizmoActor_K2_AddActorLocalTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalRotation
// ()
// Parameters:
// struct FRotator*               DeltaRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::K2_AddActorLocalRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalRotation");

	ALandscapeGizmoActor_K2_AddActorLocalRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalOffset
// ()
// Parameters:
// struct FVector*                DeltaLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::K2_AddActorLocalOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalOffset");

	ALandscapeGizmoActor_K2_AddActorLocalOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.IsOverlappingActor
// ()
// Parameters:
// class AActor**                 Other                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActor::IsOverlappingActor(class AActor** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsOverlappingActor");

	ALandscapeGizmoActor_IsOverlappingActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsChildActor
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActor::IsChildActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsChildActor");

	ALandscapeGizmoActor_IsChildActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorTickEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActor::IsActorTickEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsActorTickEnabled");

	ALandscapeGizmoActor_IsActorTickEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorBeingDestroyed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActor::IsActorBeingDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsActorBeingDestroyed");

	ALandscapeGizmoActor_IsActorBeingDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.HasAuthority
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActor::HasAuthority()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.HasAuthority");

	ALandscapeGizmoActor_HasAuthority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetVerticalDistanceTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActor::GetVerticalDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetVerticalDistanceTo");

	ALandscapeGizmoActor_GetVerticalDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetVelocity
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeGizmoActor::GetVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetVelocity");

	ALandscapeGizmoActor_GetVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTransform
// ()
// Parameters:
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FTransform ALandscapeGizmoActor::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTransform");

	ALandscapeGizmoActor_GetTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTickableWhenPaused
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActor::GetTickableWhenPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTickableWhenPaused");

	ALandscapeGizmoActor_GetTickableWhenPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetSquaredDistanceTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActor::GetSquaredDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetSquaredDistanceTo");

	ALandscapeGizmoActor_GetSquaredDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetRemoteRole
// ()
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> ALandscapeGizmoActor::GetRemoteRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetRemoteRole");

	ALandscapeGizmoActor_GetRemoteRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentComponent
// ()
// Parameters:
// class UChildActorComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UChildActorComponent* ALandscapeGizmoActor::GetParentComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetParentComponent");

	ALandscapeGizmoActor_GetParentComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentActor
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ALandscapeGizmoActor::GetParentActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetParentActor");

	ALandscapeGizmoActor_GetParentActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOwner
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ALandscapeGizmoActor::GetOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOwner");

	ALandscapeGizmoActor_GetOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOverlappingComponents
// ()
// Parameters:
// TArray<class UPrimitiveComponent*> OverlappingComponents          (Parm, OutParm, ZeroConstructor)

void ALandscapeGizmoActor::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOverlappingComponents");

	ALandscapeGizmoActor_GetOverlappingComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingComponents != nullptr)
		*OverlappingComponents = params.OverlappingComponents;
}


// Function Engine.Actor.GetOverlappingActors
// ()
// Parameters:
// TArray<class AActor*>          OverlappingActors              (Parm, OutParm, ZeroConstructor)
// class UClass**                 ClassFilter                    (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::GetOverlappingActors(class UClass** ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOverlappingActors");

	ALandscapeGizmoActor_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}


// Function Engine.Actor.GetLocalRole
// ()
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> ALandscapeGizmoActor::GetLocalRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetLocalRole");

	ALandscapeGizmoActor_GetLocalRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetLifeSpan
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActor::GetLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetLifeSpan");

	ALandscapeGizmoActor_GetLifeSpan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigatorController
// ()
// Parameters:
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AController* ALandscapeGizmoActor::GetInstigatorController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInstigatorController");

	ALandscapeGizmoActor_GetInstigatorController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigator
// ()
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* ALandscapeGizmoActor::GetInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInstigator");

	ALandscapeGizmoActor_GetInstigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputVectorAxisValue
// ()
// Parameters:
// struct FKey*                   InputAxisKey                   (ConstParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeGizmoActor::GetInputVectorAxisValue(struct FKey* InputAxisKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputVectorAxisValue");

	ALandscapeGizmoActor_GetInputVectorAxisValue_Params params;
	params.InputAxisKey = InputAxisKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputAxisValue
// ()
// Parameters:
// struct FName*                  InputAxisName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActor::GetInputAxisValue(struct FName* InputAxisName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputAxisValue");

	ALandscapeGizmoActor_GetInputAxisValue_Params params;
	params.InputAxisName = InputAxisName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputAxisKeyValue
// ()
// Parameters:
// struct FKey*                   InputAxisKey                   (ConstParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActor::GetInputAxisKeyValue(struct FKey* InputAxisKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputAxisKeyValue");

	ALandscapeGizmoActor_GetInputAxisKeyValue_Params params;
	params.InputAxisKey = InputAxisKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetHorizontalDotProductTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActor::GetHorizontalDotProductTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetHorizontalDotProductTo");

	ALandscapeGizmoActor_GetHorizontalDotProductTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetHorizontalDistanceTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActor::GetHorizontalDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetHorizontalDistanceTo");

	ALandscapeGizmoActor_GetHorizontalDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetGameTimeSinceCreation
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActor::GetGameTimeSinceCreation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetGameTimeSinceCreation");

	ALandscapeGizmoActor_GetGameTimeSinceCreation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetDotProductTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActor::GetDotProductTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetDotProductTo");

	ALandscapeGizmoActor_GetDotProductTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetDistanceTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActor::GetDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetDistanceTo");

	ALandscapeGizmoActor_GetDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentsByTag
// ()
// Parameters:
// class UClass**                 ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ALandscapeGizmoActor::GetComponentsByTag(class UClass** ComponentClass, struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentsByTag");

	ALandscapeGizmoActor_GetComponentsByTag_Params params;
	params.ComponentClass = ComponentClass;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentsByInterface
// ()
// Parameters:
// class UClass**                 Interface                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ALandscapeGizmoActor::GetComponentsByInterface(class UClass** Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentsByInterface");

	ALandscapeGizmoActor_GetComponentsByInterface_Params params;
	params.Interface = Interface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentByClass
// ()
// Parameters:
// class UClass**                 ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* ALandscapeGizmoActor::GetComponentByClass(class UClass** ComponentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentByClass");

	ALandscapeGizmoActor_GetComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachParentSocketName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ALandscapeGizmoActor::GetAttachParentSocketName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachParentSocketName");

	ALandscapeGizmoActor_GetAttachParentSocketName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachParentActor
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ALandscapeGizmoActor::GetAttachParentActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachParentActor");

	ALandscapeGizmoActor_GetAttachParentActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachedActors
// ()
// Parameters:
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
// bool*                          bResetArray                    (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::GetAttachedActors(bool* bResetArray, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachedActors");

	ALandscapeGizmoActor_GetAttachedActors_Params params;
	params.bResetArray = bResetArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function Engine.Actor.GetAllChildActors
// ()
// Parameters:
// TArray<class AActor*>          ChildActors                    (Parm, OutParm, ZeroConstructor)
// bool*                          bIncludeDescendants            (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::GetAllChildActors(bool* bIncludeDescendants, TArray<class AActor*>* ChildActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAllChildActors");

	ALandscapeGizmoActor_GetAllChildActors_Params params;
	params.bIncludeDescendants = bIncludeDescendants;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChildActors != nullptr)
		*ChildActors = params.ChildActors;
}


// Function Engine.Actor.GetActorUpVector
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeGizmoActor::GetActorUpVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorUpVector");

	ALandscapeGizmoActor_GetActorUpVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTimeDilation
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActor::GetActorTimeDilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorTimeDilation");

	ALandscapeGizmoActor_GetActorTimeDilation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTickInterval
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActor::GetActorTickInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorTickInterval");

	ALandscapeGizmoActor_GetActorTickInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorScale3D
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeGizmoActor::GetActorScale3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorScale3D");

	ALandscapeGizmoActor_GetActorScale3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRightVector
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeGizmoActor::GetActorRightVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorRightVector");

	ALandscapeGizmoActor_GetActorRightVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRelativeScale3D
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeGizmoActor::GetActorRelativeScale3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorRelativeScale3D");

	ALandscapeGizmoActor_GetActorRelativeScale3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorForwardVector
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeGizmoActor::GetActorForwardVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorForwardVector");

	ALandscapeGizmoActor_GetActorForwardVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorEyesViewPoint
// ()
// Parameters:
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorEyesViewPoint");

	ALandscapeGizmoActor_GetActorEyesViewPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}


// Function Engine.Actor.GetActorEnableCollision
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActor::GetActorEnableCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorEnableCollision");

	ALandscapeGizmoActor_GetActorEnableCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorBounds
// ()
// Parameters:
// bool*                          bOnlyCollidingComponents       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::GetActorBounds(bool* bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorBounds");

	ALandscapeGizmoActor_GetActorBounds_Params params;
	params.bOnlyCollidingComponents = bOnlyCollidingComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}


// Function Engine.Actor.ForceNetUpdate
// ()

void ALandscapeGizmoActor::ForceNetUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ForceNetUpdate");

	ALandscapeGizmoActor_ForceNetUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.FlushNetDormancy
// ()

void ALandscapeGizmoActor::FlushNetDormancy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.FlushNetDormancy");

	ALandscapeGizmoActor_FlushNetDormancy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.EnableInput
// ()
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::EnableInput(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.EnableInput");

	ALandscapeGizmoActor_EnableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DisableInput
// ()
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::DisableInput(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DisableInput");

	ALandscapeGizmoActor_DisableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DetachRootComponentFromParent
// ()
// Parameters:
// bool*                          bMaintainWorldPosition         (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::DetachRootComponentFromParent(bool* bMaintainWorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DetachRootComponentFromParent");

	ALandscapeGizmoActor_DetachRootComponentFromParent_Params params;
	params.bMaintainWorldPosition = bMaintainWorldPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteComponent
// ()
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ALandscapeGizmoActor::AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddTickPrerequisiteComponent");

	ALandscapeGizmoActor_AddTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteActor
// ()
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActor::AddTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddTickPrerequisiteActor");

	ALandscapeGizmoActor_AddTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddComponent
// ()
// Parameters:
// struct FName*                  TemplateName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bManualAttachment              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject**                ComponentTemplateContext       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* ALandscapeGizmoActor::AddComponent(struct FName* TemplateName, bool* bManualAttachment, struct FTransform* RelativeTransform, class UObject** ComponentTemplateContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddComponent");

	ALandscapeGizmoActor_AddComponent_Params params;
	params.TemplateName = TemplateName;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;
	params.ComponentTemplateContext = ComponentTemplateContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.ActorHasTag
// ()
// Parameters:
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActor::ActorHasTag(struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ActorHasTag");

	ALandscapeGizmoActor_ActorHasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.WasRecentlyRendered
// ()
// Parameters:
// float*                         Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActiveActor::WasRecentlyRendered(float* Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.WasRecentlyRendered");

	ALandscapeGizmoActiveActor_WasRecentlyRendered_Params params;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.UserConstructionScript
// ()

void ALandscapeGizmoActiveActor::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.UserConstructionScript");

	ALandscapeGizmoActiveActor_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.TearOff
// ()

void ALandscapeGizmoActiveActor::TearOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.TearOff");

	ALandscapeGizmoActiveActor_TearOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SnapRootComponentTo
// ()
// Parameters:
// class AActor**                 InParentActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::SnapRootComponentTo(class AActor** InParentActor, struct FName* InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SnapRootComponentTo");

	ALandscapeGizmoActiveActor_SnapRootComponentTo_Params params;
	params.InParentActor = InParentActor;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTickGroup
// ()
// Parameters:
// TEnumAsByte<ETickingGroup>*    NewTickGroup                   (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetTickGroup");

	ALandscapeGizmoActiveActor_SetTickGroup_Params params;
	params.NewTickGroup = NewTickGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTickableWhenPaused
// ()
// Parameters:
// bool*                          bTickableWhenPaused            (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::SetTickableWhenPaused(bool* bTickableWhenPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetTickableWhenPaused");

	ALandscapeGizmoActiveActor_SetTickableWhenPaused_Params params;
	params.bTickableWhenPaused = bTickableWhenPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicates
// ()
// Parameters:
// bool*                          bInReplicates                  (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::SetReplicates(bool* bInReplicates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetReplicates");

	ALandscapeGizmoActiveActor_SetReplicates_Params params;
	params.bInReplicates = bInReplicates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicateMovement
// ()
// Parameters:
// bool*                          bInReplicateMovement           (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::SetReplicateMovement(bool* bInReplicateMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetReplicateMovement");

	ALandscapeGizmoActiveActor_SetReplicateMovement_Params params;
	params.bInReplicateMovement = bInReplicateMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetOwner
// ()
// Parameters:
// class AActor**                 NewOwner                       (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::SetOwner(class AActor** NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetOwner");

	ALandscapeGizmoActiveActor_SetOwner_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetNetDormancy
// ()
// Parameters:
// TEnumAsByte<ENetDormancy>*     NewDormancy                    (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::SetNetDormancy(TEnumAsByte<ENetDormancy>* NewDormancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetNetDormancy");

	ALandscapeGizmoActiveActor_SetNetDormancy_Params params;
	params.NewDormancy = NewDormancy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetLifeSpan
// ()
// Parameters:
// float*                         InLifespan                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::SetLifeSpan(float* InLifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetLifeSpan");

	ALandscapeGizmoActiveActor_SetLifeSpan_Params params;
	params.InLifespan = InLifespan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickInterval
// ()
// Parameters:
// float*                         TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::SetActorTickInterval(float* TickInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorTickInterval");

	ALandscapeGizmoActiveActor_SetActorTickInterval_Params params;
	params.TickInterval = TickInterval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickEnabled
// ()
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::SetActorTickEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorTickEnabled");

	ALandscapeGizmoActiveActor_SetActorTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorScale3D
// ()
// Parameters:
// struct FVector*                NewScale3D                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::SetActorScale3D(struct FVector* NewScale3D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorScale3D");

	ALandscapeGizmoActiveActor_SetActorScale3D_Params params;
	params.NewScale3D = NewScale3D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorRelativeScale3D
// ()
// Parameters:
// struct FVector*                NewRelativeScale               (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::SetActorRelativeScale3D(struct FVector* NewRelativeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorRelativeScale3D");

	ALandscapeGizmoActiveActor_SetActorRelativeScale3D_Params params;
	params.NewRelativeScale = NewRelativeScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorHiddenInGame
// ()
// Parameters:
// bool*                          bNewHidden                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::SetActorHiddenInGame(bool* bNewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorHiddenInGame");

	ALandscapeGizmoActiveActor_SetActorHiddenInGame_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorEnableCollision
// ()
// Parameters:
// bool*                          bNewActorEnableCollision       (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::SetActorEnableCollision(bool* bNewActorEnableCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorEnableCollision");

	ALandscapeGizmoActiveActor_SetActorEnableCollision_Params params;
	params.bNewActorEnableCollision = bNewActorEnableCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteComponent
// ()
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ALandscapeGizmoActiveActor::RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RemoveTickPrerequisiteComponent");

	ALandscapeGizmoActiveActor_RemoveTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteActor
// ()
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RemoveTickPrerequisiteActor");

	ALandscapeGizmoActiveActor_RemoveTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveTick");

	ALandscapeGizmoActiveActor_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveRadialDamage
// ()
// Parameters:
// float*                         DamageReceived                 (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveRadialDamage");

	ALandscapeGizmoActiveActor_ReceiveRadialDamage_Params params;
	params.DamageReceived = DamageReceived;
	params.DamageType = DamageType;
	params.Origin = Origin;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceivePointDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotFromDirection              (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ALandscapeGizmoActiveActor::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceivePointDamage");

	ALandscapeGizmoActiveActor_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveHit
// ()
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ALandscapeGizmoActiveActor::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveHit");

	ALandscapeGizmoActiveActor_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveEndPlay");

	ALandscapeGizmoActiveActor_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveDestroyed
// ()

void ALandscapeGizmoActiveActor::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveDestroyed");

	ALandscapeGizmoActiveActor_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveBeginPlay
// ()

void ALandscapeGizmoActiveActor::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveBeginPlay");

	ALandscapeGizmoActiveActor_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveAnyDamage");

	ALandscapeGizmoActiveActor_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnReleased
// ()
// Parameters:
// struct FKey*                   ButtonReleased                 (Parm)

void ALandscapeGizmoActiveActor::ReceiveActorOnReleased(struct FKey* ButtonReleased)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnReleased");

	ALandscapeGizmoActiveActor_ReceiveActorOnReleased_Params params;
	params.ButtonReleased = ButtonReleased;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchLeave
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchLeave");

	ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchLeave_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnter
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchEnter");

	ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchEnter_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnd
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchEnd");

	ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchEnd_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchBegin
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchBegin");

	ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchBegin_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnClicked
// ()
// Parameters:
// struct FKey*                   ButtonPressed                  (Parm)

void ALandscapeGizmoActiveActor::ReceiveActorOnClicked(struct FKey* ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnClicked");

	ALandscapeGizmoActiveActor_ReceiveActorOnClicked_Params params;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorEndOverlap");

	ALandscapeGizmoActiveActor_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndCursorOver
// ()

void ALandscapeGizmoActiveActor::ReceiveActorEndCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorEndCursorOver");

	ALandscapeGizmoActiveActor_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorBeginOverlap");

	ALandscapeGizmoActiveActor_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginCursorOver
// ()

void ALandscapeGizmoActiveActor::ReceiveActorBeginCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorBeginCursorOver");

	ALandscapeGizmoActiveActor_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.PrestreamTextures
// ()
// Parameters:
// float*                         Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEnableStreaming               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CinematicTextureGroups         (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::PrestreamTextures(float* Seconds, bool* bEnableStreaming, int* CinematicTextureGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PrestreamTextures");

	ALandscapeGizmoActiveActor_PrestreamTextures_Params params;
	params.Seconds = Seconds;
	params.bEnableStreaming = bEnableStreaming;
	params.CinematicTextureGroups = CinematicTextureGroups;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicateMovement
// ()

void ALandscapeGizmoActiveActor::OnRep_ReplicateMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_ReplicateMovement");

	ALandscapeGizmoActiveActor_OnRep_ReplicateMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicatedMovement
// ()

void ALandscapeGizmoActiveActor::OnRep_ReplicatedMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_ReplicatedMovement");

	ALandscapeGizmoActiveActor_OnRep_ReplicatedMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Owner
// ()

void ALandscapeGizmoActiveActor::OnRep_Owner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Owner");

	ALandscapeGizmoActiveActor_OnRep_Owner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Instigator
// ()

void ALandscapeGizmoActiveActor::OnRep_Instigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Instigator");

	ALandscapeGizmoActiveActor_OnRep_Instigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_AttachmentReplication
// ()

void ALandscapeGizmoActiveActor::OnRep_AttachmentReplication()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_AttachmentReplication");

	ALandscapeGizmoActiveActor_OnRep_AttachmentReplication_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.MakeNoise
// ()
// Parameters:
// float*                         Loudness                       (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  NoiseInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NoiseLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::MakeNoise(float* Loudness, class APawn** NoiseInstigator, struct FVector* NoiseLocation, float* MaxRange, struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MakeNoise");

	ALandscapeGizmoActiveActor_MakeNoise_Params params;
	params.Loudness = Loudness;
	params.NoiseInstigator = NoiseInstigator;
	params.NoiseLocation = NoiseLocation;
	params.MaxRange = MaxRange;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.MakeMIDForMaterial
// ()
// Parameters:
// class UMaterialInterface**     Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* ALandscapeGizmoActiveActor::MakeMIDForMaterial(class UMaterialInterface** Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MakeMIDForMaterial");

	ALandscapeGizmoActiveActor_MakeMIDForMaterial_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_TeleportTo
// ()
// Parameters:
// struct FVector*                DestLocation                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               DestRotation                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActiveActor::K2_TeleportTo(struct FVector* DestLocation, struct FRotator* DestRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_TeleportTo");

	ALandscapeGizmoActiveActor_K2_TeleportTo_Params params;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorTransform
// ()
// Parameters:
// struct FTransform*             NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActiveActor::K2_SetActorTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorTransform");

	ALandscapeGizmoActiveActor_K2_SetActorTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorRotation
// ()
// Parameters:
// struct FRotator*               NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTeleportPhysics               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActiveActor::K2_SetActorRotation(struct FRotator* NewRotation, bool* bTeleportPhysics)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRotation");

	ALandscapeGizmoActiveActor_K2_SetActorRotation_Params params;
	params.NewRotation = NewRotation;
	params.bTeleportPhysics = bTeleportPhysics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorRelativeTransform
// ()
// Parameters:
// struct FTransform*             NewRelativeTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_SetActorRelativeTransform(struct FTransform* NewRelativeTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeTransform");

	ALandscapeGizmoActiveActor_K2_SetActorRelativeTransform_Params params;
	params.NewRelativeTransform = NewRelativeTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorRelativeRotation
// ()
// Parameters:
// struct FRotator*               NewRelativeRotation            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_SetActorRelativeRotation(struct FRotator* NewRelativeRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeRotation");

	ALandscapeGizmoActiveActor_K2_SetActorRelativeRotation_Params params;
	params.NewRelativeRotation = NewRelativeRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorRelativeLocation
// ()
// Parameters:
// struct FVector*                NewRelativeLocation            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_SetActorRelativeLocation(struct FVector* NewRelativeLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeLocation");

	ALandscapeGizmoActiveActor_K2_SetActorRelativeLocation_Params params;
	params.NewRelativeLocation = NewRelativeLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorLocationAndRotation
// ()
// Parameters:
// struct FVector*                NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActiveActor::K2_SetActorLocationAndRotation(struct FVector* NewLocation, struct FRotator* NewRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorLocationAndRotation");

	ALandscapeGizmoActiveActor_K2_SetActorLocationAndRotation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorLocation
// ()
// Parameters:
// struct FVector*                NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActiveActor::K2_SetActorLocation(struct FVector* NewLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorLocation");

	ALandscapeGizmoActiveActor_K2_SetActorLocation_Params params;
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_OnReset
// ()

void ALandscapeGizmoActiveActor::K2_OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnReset");

	ALandscapeGizmoActiveActor_K2_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnEndViewTarget
// ()
// Parameters:
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_OnEndViewTarget(class APlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnEndViewTarget");

	ALandscapeGizmoActiveActor_K2_OnEndViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnBecomeViewTarget
// ()
// Parameters:
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_OnBecomeViewTarget(class APlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnBecomeViewTarget");

	ALandscapeGizmoActiveActor_K2_OnBecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_GetRootComponent
// ()
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* ALandscapeGizmoActiveActor::K2_GetRootComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetRootComponent");

	ALandscapeGizmoActiveActor_K2_GetRootComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetComponentsByClass
// ()
// Parameters:
// class UClass**                 ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ALandscapeGizmoActiveActor::K2_GetComponentsByClass(class UClass** ComponentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetComponentsByClass");

	ALandscapeGizmoActiveActor_K2_GetComponentsByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorRotation
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ALandscapeGizmoActiveActor::K2_GetActorRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorRotation");

	ALandscapeGizmoActiveActor_K2_GetActorRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeGizmoActiveActor::K2_GetActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorLocation");

	ALandscapeGizmoActiveActor_K2_GetActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_DetachFromActor
// ()
// Parameters:
// EDetachmentRule*               LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EDetachmentRule*               RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EDetachmentRule*               ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_DetachFromActor(EDetachmentRule* LocationRule, EDetachmentRule* RotationRule, EDetachmentRule* ScaleRule)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DetachFromActor");

	ALandscapeGizmoActiveActor_K2_DetachFromActor_Params params;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyComponent
// ()
// Parameters:
// class UActorComponent**        Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_DestroyComponent(class UActorComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DestroyComponent");

	ALandscapeGizmoActiveActor_K2_DestroyComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyActor
// ()

void ALandscapeGizmoActiveActor::K2_DestroyActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DestroyActor");

	ALandscapeGizmoActiveActor_K2_DestroyActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachToComponent
// ()
// Parameters:
// class USceneComponent**        Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_AttachToComponent(class USceneComponent** Parent, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachToComponent");

	ALandscapeGizmoActiveActor_K2_AttachToComponent_Params params;
	params.Parent = Parent;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachToActor
// ()
// Parameters:
// class AActor**                 ParentActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule*               ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_AttachToActor(class AActor** ParentActor, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachToActor");

	ALandscapeGizmoActiveActor_K2_AttachToActor_Params params;
	params.ParentActor = ParentActor;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachRootComponentToActor
// ()
// Parameters:
// class AActor**                 InParentActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>*  AttachLocationType             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_AttachRootComponentToActor(class AActor** InParentActor, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachRootComponentToActor");

	ALandscapeGizmoActiveActor_K2_AttachRootComponentToActor_Params params;
	params.InParentActor = InParentActor;
	params.InSocketName = InSocketName;
	params.AttachLocationType = AttachLocationType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachRootComponentTo
// ()
// Parameters:
// class USceneComponent**        InParent                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>*  AttachLocationType             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_AttachRootComponentTo(class USceneComponent** InParent, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachRootComponentTo");

	ALandscapeGizmoActiveActor_K2_AttachRootComponentTo_Params params;
	params.InParent = InParent;
	params.InSocketName = InSocketName;
	params.AttachLocationType = AttachLocationType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AddActorWorldTransform
// ()
// Parameters:
// struct FTransform*             DeltaTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_AddActorWorldTransform(struct FTransform* DeltaTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldTransform");

	ALandscapeGizmoActiveActor_K2_AddActorWorldTransform_Params params;
	params.DeltaTransform = DeltaTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorWorldRotation
// ()
// Parameters:
// struct FRotator*               DeltaRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_AddActorWorldRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldRotation");

	ALandscapeGizmoActiveActor_K2_AddActorWorldRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorWorldOffset
// ()
// Parameters:
// struct FVector*                DeltaLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_AddActorWorldOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldOffset");

	ALandscapeGizmoActiveActor_K2_AddActorWorldOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalTransform
// ()
// Parameters:
// struct FTransform*             NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_AddActorLocalTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalTransform");

	ALandscapeGizmoActiveActor_K2_AddActorLocalTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalRotation
// ()
// Parameters:
// struct FRotator*               DeltaRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_AddActorLocalRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalRotation");

	ALandscapeGizmoActiveActor_K2_AddActorLocalRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalOffset
// ()
// Parameters:
// struct FVector*                DeltaLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_AddActorLocalOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalOffset");

	ALandscapeGizmoActiveActor_K2_AddActorLocalOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.IsOverlappingActor
// ()
// Parameters:
// class AActor**                 Other                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActiveActor::IsOverlappingActor(class AActor** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsOverlappingActor");

	ALandscapeGizmoActiveActor_IsOverlappingActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsChildActor
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActiveActor::IsChildActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsChildActor");

	ALandscapeGizmoActiveActor_IsChildActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorTickEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActiveActor::IsActorTickEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsActorTickEnabled");

	ALandscapeGizmoActiveActor_IsActorTickEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorBeingDestroyed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActiveActor::IsActorBeingDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsActorBeingDestroyed");

	ALandscapeGizmoActiveActor_IsActorBeingDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.HasAuthority
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActiveActor::HasAuthority()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.HasAuthority");

	ALandscapeGizmoActiveActor_HasAuthority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetVerticalDistanceTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActiveActor::GetVerticalDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetVerticalDistanceTo");

	ALandscapeGizmoActiveActor_GetVerticalDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetVelocity
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeGizmoActiveActor::GetVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetVelocity");

	ALandscapeGizmoActiveActor_GetVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTransform
// ()
// Parameters:
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FTransform ALandscapeGizmoActiveActor::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTransform");

	ALandscapeGizmoActiveActor_GetTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTickableWhenPaused
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActiveActor::GetTickableWhenPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTickableWhenPaused");

	ALandscapeGizmoActiveActor_GetTickableWhenPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetSquaredDistanceTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActiveActor::GetSquaredDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetSquaredDistanceTo");

	ALandscapeGizmoActiveActor_GetSquaredDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetRemoteRole
// ()
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> ALandscapeGizmoActiveActor::GetRemoteRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetRemoteRole");

	ALandscapeGizmoActiveActor_GetRemoteRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentComponent
// ()
// Parameters:
// class UChildActorComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UChildActorComponent* ALandscapeGizmoActiveActor::GetParentComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetParentComponent");

	ALandscapeGizmoActiveActor_GetParentComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentActor
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ALandscapeGizmoActiveActor::GetParentActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetParentActor");

	ALandscapeGizmoActiveActor_GetParentActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOwner
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ALandscapeGizmoActiveActor::GetOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOwner");

	ALandscapeGizmoActiveActor_GetOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOverlappingComponents
// ()
// Parameters:
// TArray<class UPrimitiveComponent*> OverlappingComponents          (Parm, OutParm, ZeroConstructor)

void ALandscapeGizmoActiveActor::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOverlappingComponents");

	ALandscapeGizmoActiveActor_GetOverlappingComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingComponents != nullptr)
		*OverlappingComponents = params.OverlappingComponents;
}


// Function Engine.Actor.GetOverlappingActors
// ()
// Parameters:
// TArray<class AActor*>          OverlappingActors              (Parm, OutParm, ZeroConstructor)
// class UClass**                 ClassFilter                    (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::GetOverlappingActors(class UClass** ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOverlappingActors");

	ALandscapeGizmoActiveActor_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}


// Function Engine.Actor.GetLocalRole
// ()
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> ALandscapeGizmoActiveActor::GetLocalRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetLocalRole");

	ALandscapeGizmoActiveActor_GetLocalRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetLifeSpan
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActiveActor::GetLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetLifeSpan");

	ALandscapeGizmoActiveActor_GetLifeSpan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigatorController
// ()
// Parameters:
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AController* ALandscapeGizmoActiveActor::GetInstigatorController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInstigatorController");

	ALandscapeGizmoActiveActor_GetInstigatorController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigator
// ()
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* ALandscapeGizmoActiveActor::GetInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInstigator");

	ALandscapeGizmoActiveActor_GetInstigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputVectorAxisValue
// ()
// Parameters:
// struct FKey*                   InputAxisKey                   (ConstParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeGizmoActiveActor::GetInputVectorAxisValue(struct FKey* InputAxisKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputVectorAxisValue");

	ALandscapeGizmoActiveActor_GetInputVectorAxisValue_Params params;
	params.InputAxisKey = InputAxisKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputAxisValue
// ()
// Parameters:
// struct FName*                  InputAxisName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActiveActor::GetInputAxisValue(struct FName* InputAxisName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputAxisValue");

	ALandscapeGizmoActiveActor_GetInputAxisValue_Params params;
	params.InputAxisName = InputAxisName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputAxisKeyValue
// ()
// Parameters:
// struct FKey*                   InputAxisKey                   (ConstParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActiveActor::GetInputAxisKeyValue(struct FKey* InputAxisKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputAxisKeyValue");

	ALandscapeGizmoActiveActor_GetInputAxisKeyValue_Params params;
	params.InputAxisKey = InputAxisKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetHorizontalDotProductTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActiveActor::GetHorizontalDotProductTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetHorizontalDotProductTo");

	ALandscapeGizmoActiveActor_GetHorizontalDotProductTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetHorizontalDistanceTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActiveActor::GetHorizontalDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetHorizontalDistanceTo");

	ALandscapeGizmoActiveActor_GetHorizontalDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetGameTimeSinceCreation
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActiveActor::GetGameTimeSinceCreation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetGameTimeSinceCreation");

	ALandscapeGizmoActiveActor_GetGameTimeSinceCreation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetDotProductTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActiveActor::GetDotProductTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetDotProductTo");

	ALandscapeGizmoActiveActor_GetDotProductTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetDistanceTo
// ()
// Parameters:
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActiveActor::GetDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetDistanceTo");

	ALandscapeGizmoActiveActor_GetDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentsByTag
// ()
// Parameters:
// class UClass**                 ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ALandscapeGizmoActiveActor::GetComponentsByTag(class UClass** ComponentClass, struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentsByTag");

	ALandscapeGizmoActiveActor_GetComponentsByTag_Params params;
	params.ComponentClass = ComponentClass;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentsByInterface
// ()
// Parameters:
// class UClass**                 Interface                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UActorComponent*> ALandscapeGizmoActiveActor::GetComponentsByInterface(class UClass** Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentsByInterface");

	ALandscapeGizmoActiveActor_GetComponentsByInterface_Params params;
	params.Interface = Interface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentByClass
// ()
// Parameters:
// class UClass**                 ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* ALandscapeGizmoActiveActor::GetComponentByClass(class UClass** ComponentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentByClass");

	ALandscapeGizmoActiveActor_GetComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachParentSocketName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ALandscapeGizmoActiveActor::GetAttachParentSocketName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachParentSocketName");

	ALandscapeGizmoActiveActor_GetAttachParentSocketName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachParentActor
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ALandscapeGizmoActiveActor::GetAttachParentActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachParentActor");

	ALandscapeGizmoActiveActor_GetAttachParentActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachedActors
// ()
// Parameters:
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
// bool*                          bResetArray                    (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::GetAttachedActors(bool* bResetArray, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachedActors");

	ALandscapeGizmoActiveActor_GetAttachedActors_Params params;
	params.bResetArray = bResetArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function Engine.Actor.GetAllChildActors
// ()
// Parameters:
// TArray<class AActor*>          ChildActors                    (Parm, OutParm, ZeroConstructor)
// bool*                          bIncludeDescendants            (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::GetAllChildActors(bool* bIncludeDescendants, TArray<class AActor*>* ChildActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAllChildActors");

	ALandscapeGizmoActiveActor_GetAllChildActors_Params params;
	params.bIncludeDescendants = bIncludeDescendants;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChildActors != nullptr)
		*ChildActors = params.ChildActors;
}


// Function Engine.Actor.GetActorUpVector
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeGizmoActiveActor::GetActorUpVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorUpVector");

	ALandscapeGizmoActiveActor_GetActorUpVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTimeDilation
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActiveActor::GetActorTimeDilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorTimeDilation");

	ALandscapeGizmoActiveActor_GetActorTimeDilation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTickInterval
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALandscapeGizmoActiveActor::GetActorTickInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorTickInterval");

	ALandscapeGizmoActiveActor_GetActorTickInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorScale3D
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeGizmoActiveActor::GetActorScale3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorScale3D");

	ALandscapeGizmoActiveActor_GetActorScale3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRightVector
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeGizmoActiveActor::GetActorRightVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorRightVector");

	ALandscapeGizmoActiveActor_GetActorRightVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRelativeScale3D
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeGizmoActiveActor::GetActorRelativeScale3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorRelativeScale3D");

	ALandscapeGizmoActiveActor_GetActorRelativeScale3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorForwardVector
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ALandscapeGizmoActiveActor::GetActorForwardVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorForwardVector");

	ALandscapeGizmoActiveActor_GetActorForwardVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorEyesViewPoint
// ()
// Parameters:
// struct FVector                 OutLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorEyesViewPoint");

	ALandscapeGizmoActiveActor_GetActorEyesViewPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}


// Function Engine.Actor.GetActorEnableCollision
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActiveActor::GetActorEnableCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorEnableCollision");

	ALandscapeGizmoActiveActor_GetActorEnableCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorBounds
// ()
// Parameters:
// bool*                          bOnlyCollidingComponents       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::GetActorBounds(bool* bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorBounds");

	ALandscapeGizmoActiveActor_GetActorBounds_Params params;
	params.bOnlyCollidingComponents = bOnlyCollidingComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}


// Function Engine.Actor.ForceNetUpdate
// ()

void ALandscapeGizmoActiveActor::ForceNetUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ForceNetUpdate");

	ALandscapeGizmoActiveActor_ForceNetUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.FlushNetDormancy
// ()

void ALandscapeGizmoActiveActor::FlushNetDormancy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.FlushNetDormancy");

	ALandscapeGizmoActiveActor_FlushNetDormancy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.EnableInput
// ()
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::EnableInput(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.EnableInput");

	ALandscapeGizmoActiveActor_EnableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DisableInput
// ()
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::DisableInput(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DisableInput");

	ALandscapeGizmoActiveActor_DisableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DetachRootComponentFromParent
// ()
// Parameters:
// bool*                          bMaintainWorldPosition         (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::DetachRootComponentFromParent(bool* bMaintainWorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DetachRootComponentFromParent");

	ALandscapeGizmoActiveActor_DetachRootComponentFromParent_Params params;
	params.bMaintainWorldPosition = bMaintainWorldPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteComponent
// ()
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ALandscapeGizmoActiveActor::AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddTickPrerequisiteComponent");

	ALandscapeGizmoActiveActor_AddTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteActor
// ()
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)

void ALandscapeGizmoActiveActor::AddTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddTickPrerequisiteActor");

	ALandscapeGizmoActiveActor_AddTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddComponent
// ()
// Parameters:
// struct FName*                  TemplateName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bManualAttachment              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject**                ComponentTemplateContext       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* ALandscapeGizmoActiveActor::AddComponent(struct FName* TemplateName, bool* bManualAttachment, struct FTransform* RelativeTransform, class UObject** ComponentTemplateContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddComponent");

	ALandscapeGizmoActiveActor_AddComponent_Params params;
	params.TemplateName = TemplateName;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;
	params.ComponentTemplateContext = ComponentTemplateContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.ActorHasTag
// ()
// Parameters:
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALandscapeGizmoActiveActor::ActorHasTag(struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ActorHasTag");

	ALandscapeGizmoActiveActor_ActorHasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.WakeRigidBody
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::WakeRigidBody(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.WakeRigidBody");

	ULandscapeGizmoRenderComponent_WakeRigidBody_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.WakeAllRigidBodies
// ()

void ULandscapeGizmoRenderComponent::WakeAllRigidBodies()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.WakeAllRigidBodies");

	ULandscapeGizmoRenderComponent_WakeAllRigidBodies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetWalkableSlopeOverride
// ()
// Parameters:
// struct FWalkableSlopeOverride* NewOverride                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetWalkableSlopeOverride(struct FWalkableSlopeOverride* NewOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetWalkableSlopeOverride");

	ULandscapeGizmoRenderComponent_SetWalkableSlopeOverride_Params params;
	params.NewOverride = NewOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetUseCCD
// ()
// Parameters:
// bool*                          InUseCCD                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetUseCCD(bool* InUseCCD, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetUseCCD");

	ULandscapeGizmoRenderComponent_SetUseCCD_Params params;
	params.InUseCCD = InUseCCD;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetTranslucentSortPriority
// ()
// Parameters:
// int*                           NewTranslucentSortPriority     (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetTranslucentSortPriority(int* NewTranslucentSortPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetTranslucentSortPriority");

	ULandscapeGizmoRenderComponent_SetTranslucentSortPriority_Params params;
	params.NewTranslucentSortPriority = NewTranslucentSortPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights
// ()
// Parameters:
// bool*                          bNewSingleSampleShadowFromStationaryLights (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetSingleSampleShadowFromStationaryLights(bool* bNewSingleSampleShadowFromStationaryLights)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights");

	ULandscapeGizmoRenderComponent_SetSingleSampleShadowFromStationaryLights_Params params;
	params.bNewSingleSampleShadowFromStationaryLights = bNewSingleSampleShadowFromStationaryLights;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetSimulatePhysics
// ()
// Parameters:
// bool*                          bSimulate                      (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetSimulatePhysics(bool* bSimulate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetSimulatePhysics");

	ULandscapeGizmoRenderComponent_SetSimulatePhysics_Params params;
	params.bSimulate = bSimulate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderInMainPass
// ()
// Parameters:
// bool*                          bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetRenderInMainPass(bool* bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetRenderInMainPass");

	ULandscapeGizmoRenderComponent_SetRenderInMainPass_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderCustomDepth
// ()
// Parameters:
// bool*                          bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetRenderCustomDepth(bool* bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetRenderCustomDepth");

	ULandscapeGizmoRenderComponent_SetRenderCustomDepth_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetReceivesDecals
// ()
// Parameters:
// bool*                          bNewReceivesDecals             (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetReceivesDecals(bool* bNewReceivesDecals)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetReceivesDecals");

	ULandscapeGizmoRenderComponent_SetReceivesDecals_Params params;
	params.bNewReceivesDecals = bNewReceivesDecals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysMaterialOverride
// ()
// Parameters:
// class UPhysicalMaterial**      NewPhysMaterial                (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetPhysMaterialOverride(class UPhysicalMaterial** NewPhysMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysMaterialOverride");

	ULandscapeGizmoRenderComponent_SetPhysMaterialOverride_Params params;
	params.NewPhysMaterial = NewPhysMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians
// ()
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetPhysicsMaxAngularVelocityInRadians(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians");

	ULandscapeGizmoRenderComponent_SetPhysicsMaxAngularVelocityInRadians_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees
// ()
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetPhysicsMaxAngularVelocityInDegrees(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees");

	ULandscapeGizmoRenderComponent_SetPhysicsMaxAngularVelocityInDegrees_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
// ()
// Parameters:
// float*                         NewMaxAngVel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetPhysicsMaxAngularVelocity(float* NewMaxAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity");

	ULandscapeGizmoRenderComponent_SetPhysicsMaxAngularVelocity_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity
// ()
// Parameters:
// struct FVector*                NewVel                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetPhysicsLinearVelocity(struct FVector* NewVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity");

	ULandscapeGizmoRenderComponent_SetPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians
// ()
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetPhysicsAngularVelocityInRadians(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians");

	ULandscapeGizmoRenderComponent_SetPhysicsAngularVelocityInRadians_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees
// ()
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetPhysicsAngularVelocityInDegrees(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees");

	ULandscapeGizmoRenderComponent_SetPhysicsAngularVelocityInDegrees_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity
// ()
// Parameters:
// struct FVector*                NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetPhysicsAngularVelocity(struct FVector* NewAngVel, bool* bAddToCurrent, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity");

	ULandscapeGizmoRenderComponent_SetPhysicsAngularVelocity_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetOwnerNoSee
// ()
// Parameters:
// bool*                          bNewOwnerNoSee                 (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetOwnerNoSee(bool* bNewOwnerNoSee)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetOwnerNoSee");

	ULandscapeGizmoRenderComponent_SetOwnerNoSee_Params params;
	params.bNewOwnerNoSee = bNewOwnerNoSee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetOnlyOwnerSee
// ()
// Parameters:
// bool*                          bNewOnlyOwnerSee               (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetOnlyOwnerSee(bool* bNewOnlyOwnerSee)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetOnlyOwnerSee");

	ULandscapeGizmoRenderComponent_SetOnlyOwnerSee_Params params;
	params.bNewOnlyOwnerSee = bNewOnlyOwnerSee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
// ()
// Parameters:
// bool*                          bNewNotifyRigidBodyCollision   (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetNotifyRigidBodyCollision(bool* bNewNotifyRigidBodyCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision");

	ULandscapeGizmoRenderComponent_SetNotifyRigidBodyCollision_Params params;
	params.bNewNotifyRigidBodyCollision = bNewNotifyRigidBodyCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMaterialByName
// ()
// Parameters:
// struct FName*                  MaterialSlotName               (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetMaterialByName(struct FName* MaterialSlotName, class UMaterialInterface** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMaterialByName");

	ULandscapeGizmoRenderComponent_SetMaterialByName_Params params;
	params.MaterialSlotName = MaterialSlotName;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMaterial
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetMaterial(int* ElementIndex, class UMaterialInterface** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMaterial");

	ULandscapeGizmoRenderComponent_SetMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMassScale
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InMassScale                    (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetMassScale(struct FName* BoneName, float* InMassScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMassScale");

	ULandscapeGizmoRenderComponent_SetMassScale_Params params;
	params.BoneName = BoneName;
	params.InMassScale = InMassScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMassOverrideInKg
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MassInKg                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOverrideMass                  (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetMassOverrideInKg(struct FName* BoneName, float* MassInKg, bool* bOverrideMass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMassOverrideInKg");

	ULandscapeGizmoRenderComponent_SetMassOverrideInKg_Params params;
	params.BoneName = BoneName;
	params.MassInKg = MassInKg;
	params.bOverrideMass = bOverrideMass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetLinearDamping
// ()
// Parameters:
// float*                         InDamping                      (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetLinearDamping(float* InDamping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetLinearDamping");

	ULandscapeGizmoRenderComponent_SetLinearDamping_Params params;
	params.InDamping = InDamping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetLightAttachmentsAsGroup
// ()
// Parameters:
// bool*                          bInLightAttachmentsAsGroup     (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetLightAttachmentsAsGroup(bool* bInLightAttachmentsAsGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetLightAttachmentsAsGroup");

	ULandscapeGizmoRenderComponent_SetLightAttachmentsAsGroup_Params params;
	params.bInLightAttachmentsAsGroup = bInLightAttachmentsAsGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetGenerateOverlapEvents
// ()
// Parameters:
// bool*                          bInGenerateOverlapEvents       (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetGenerateOverlapEvents(bool* bInGenerateOverlapEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetGenerateOverlapEvents");

	ULandscapeGizmoRenderComponent_SetGenerateOverlapEvents_Params params;
	params.bInGenerateOverlapEvents = bInGenerateOverlapEvents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetExcludeFromLightAttachmentGroup
// ()
// Parameters:
// bool*                          bInExcludeFromLightAttachmentGroup (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetExcludeFromLightAttachmentGroup(bool* bInExcludeFromLightAttachmentGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetExcludeFromLightAttachmentGroup");

	ULandscapeGizmoRenderComponent_SetExcludeFromLightAttachmentGroup_Params params;
	params.bInExcludeFromLightAttachmentGroup = bInExcludeFromLightAttachmentGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetEnableGravity
// ()
// Parameters:
// bool*                          bGravityEnabled                (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetEnableGravity(bool* bGravityEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetEnableGravity");

	ULandscapeGizmoRenderComponent_SetEnableGravity_Params params;
	params.bGravityEnabled = bGravityEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector4
// ()
// Parameters:
// int*                           DataIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector4*               Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCustomPrimitiveDataVector4(int* DataIndex, struct FVector4* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector4");

	ULandscapeGizmoRenderComponent_SetCustomPrimitiveDataVector4_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector3
// ()
// Parameters:
// int*                           DataIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCustomPrimitiveDataVector3(int* DataIndex, struct FVector* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector3");

	ULandscapeGizmoRenderComponent_SetCustomPrimitiveDataVector3_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector2
// ()
// Parameters:
// int*                           DataIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCustomPrimitiveDataVector2(int* DataIndex, struct FVector2D* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector2");

	ULandscapeGizmoRenderComponent_SetCustomPrimitiveDataVector2_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomPrimitiveDataFloat
// ()
// Parameters:
// int*                           DataIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCustomPrimitiveDataFloat(int* DataIndex, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomPrimitiveDataFloat");

	ULandscapeGizmoRenderComponent_SetCustomPrimitiveDataFloat_Params params;
	params.DataIndex = DataIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask
// ()
// Parameters:
// ERendererStencilMask*          WriteMaskBit                   (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCustomDepthStencilWriteMask(ERendererStencilMask* WriteMaskBit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask");

	ULandscapeGizmoRenderComponent_SetCustomDepthStencilWriteMask_Params params;
	params.WriteMaskBit = WriteMaskBit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomDepthStencilValue
// ()
// Parameters:
// int*                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCustomDepthStencilValue(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomDepthStencilValue");

	ULandscapeGizmoRenderComponent_SetCustomDepthStencilValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCullDistance
// ()
// Parameters:
// float*                         NewCullDistance                (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCullDistance(float* NewCullDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCullDistance");

	ULandscapeGizmoRenderComponent_SetCullDistance_Params params;
	params.NewCullDistance = NewCullDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetConstraintMode
// ()
// Parameters:
// TEnumAsByte<EDOFMode>*         ConstraintMode                 (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetConstraintMode(TEnumAsByte<EDOFMode>* ConstraintMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetConstraintMode");

	ULandscapeGizmoRenderComponent_SetConstraintMode_Params params;
	params.ConstraintMode = ConstraintMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionResponseToChannel
// ()
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionResponse>* NewResponse                    (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel>* Channel, TEnumAsByte<ECollisionResponse>* NewResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionResponseToChannel");

	ULandscapeGizmoRenderComponent_SetCollisionResponseToChannel_Params params;
	params.Channel = Channel;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
// ()
// Parameters:
// TEnumAsByte<ECollisionResponse>* NewResponse                    (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse>* NewResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels");

	ULandscapeGizmoRenderComponent_SetCollisionResponseToAllChannels_Params params;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionProfileName
// ()
// Parameters:
// struct FName*                  InCollisionProfileName         (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCollisionProfileName(struct FName* InCollisionProfileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionProfileName");

	ULandscapeGizmoRenderComponent_SetCollisionProfileName_Params params;
	params.InCollisionProfileName = InCollisionProfileName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionObjectType
// ()
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCollisionObjectType(TEnumAsByte<ECollisionChannel>* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionObjectType");

	ULandscapeGizmoRenderComponent_SetCollisionObjectType_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionEnabled
// ()
// Parameters:
// TEnumAsByte<ECollisionEnabled>* NewType                        (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCollisionEnabled(TEnumAsByte<ECollisionEnabled>* NewType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionEnabled");

	ULandscapeGizmoRenderComponent_SetCollisionEnabled_Params params;
	params.NewType = NewType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCenterOfMass
// ()
// Parameters:
// struct FVector*                CenterOfMassOffset             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCenterOfMass(struct FVector* CenterOfMassOffset, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCenterOfMass");

	ULandscapeGizmoRenderComponent_SetCenterOfMass_Params params;
	params.CenterOfMassOffset = CenterOfMassOffset;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCastShadow
// ()
// Parameters:
// bool*                          NewCastShadow                  (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCastShadow(bool* NewCastShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCastShadow");

	ULandscapeGizmoRenderComponent_SetCastShadow_Params params;
	params.NewCastShadow = NewCastShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCastInsetShadow
// ()
// Parameters:
// bool*                          bInCastInsetShadow             (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCastInsetShadow(bool* bInCastInsetShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCastInsetShadow");

	ULandscapeGizmoRenderComponent_SetCastInsetShadow_Params params;
	params.bInCastInsetShadow = bInCastInsetShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetBoundsScale
// ()
// Parameters:
// float*                         NewBoundsScale                 (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetBoundsScale(float* NewBoundsScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetBoundsScale");

	ULandscapeGizmoRenderComponent_SetBoundsScale_Params params;
	params.NewBoundsScale = NewBoundsScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAngularDamping
// ()
// Parameters:
// float*                         InDamping                      (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetAngularDamping(float* InDamping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAngularDamping");

	ULandscapeGizmoRenderComponent_SetAngularDamping_Params params;
	params.InDamping = InDamping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllUseCCD
// ()
// Parameters:
// bool*                          InUseCCD                       (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetAllUseCCD(bool* InUseCCD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllUseCCD");

	ULandscapeGizmoRenderComponent_SetAllUseCCD_Params params;
	params.InUseCCD = InUseCCD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
// ()
// Parameters:
// struct FVector*                NewVel                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetAllPhysicsLinearVelocity(struct FVector* NewVel, bool* bAddToCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity");

	ULandscapeGizmoRenderComponent_SetAllPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians
// ()
// Parameters:
// struct FVector*                NewAngVel                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetAllPhysicsAngularVelocityInRadians(struct FVector* NewAngVel, bool* bAddToCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians");

	ULandscapeGizmoRenderComponent_SetAllPhysicsAngularVelocityInRadians_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees
// ()
// Parameters:
// struct FVector*                NewAngVel                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bAddToCurrent                  (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetAllPhysicsAngularVelocityInDegrees(struct FVector* NewAngVel, bool* bAddToCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees");

	ULandscapeGizmoRenderComponent_SetAllPhysicsAngularVelocityInDegrees_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllMassScale
// ()
// Parameters:
// float*                         InMassScale                    (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetAllMassScale(float* InMassScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllMassScale");

	ULandscapeGizmoRenderComponent_SetAllMassScale_Params params;
	params.InMassScale = InMassScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.ScaleByMomentOfInertia
// ()
// Parameters:
// struct FVector*                InputVector                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ULandscapeGizmoRenderComponent::ScaleByMomentOfInertia(struct FVector* InputVector, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.ScaleByMomentOfInertia");

	ULandscapeGizmoRenderComponent_ScaleByMomentOfInertia_Params params;
	params.InputVector = InputVector;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.PutRigidBodyToSleep
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::PutRigidBodyToSleep(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.PutRigidBodyToSleep");

	ULandscapeGizmoRenderComponent_PutRigidBodyToSleep_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.K2_SphereTraceComponent
// ()
// Parameters:
// struct FVector*                TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULandscapeGizmoRenderComponent::K2_SphereTraceComponent(struct FVector* TraceStart, struct FVector* TraceEnd, float* SphereRadius, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_SphereTraceComponent");

	ULandscapeGizmoRenderComponent_K2_SphereTraceComponent_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.SphereRadius = SphereRadius;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_SphereOverlapComponent
// ()
// Parameters:
// struct FVector*                InSphereCentre                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InSphereRadius                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULandscapeGizmoRenderComponent::K2_SphereOverlapComponent(struct FVector* InSphereCentre, float* InSphereRadius, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_SphereOverlapComponent");

	ULandscapeGizmoRenderComponent_K2_SphereOverlapComponent_Params params;
	params.InSphereCentre = InSphereCentre;
	params.InSphereRadius = InSphereRadius;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_LineTraceComponent
// ()
// Parameters:
// struct FVector*                TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULandscapeGizmoRenderComponent::K2_LineTraceComponent(struct FVector* TraceStart, struct FVector* TraceEnd, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_LineTraceComponent");

	ULandscapeGizmoRenderComponent_K2_LineTraceComponent_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULandscapeGizmoRenderComponent::K2_IsQueryCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled");

	ULandscapeGizmoRenderComponent_K2_IsQueryCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULandscapeGizmoRenderComponent::K2_IsPhysicsCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled");

	ULandscapeGizmoRenderComponent_K2_IsPhysicsCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsCollisionEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULandscapeGizmoRenderComponent::K2_IsCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_IsCollisionEnabled");

	ULandscapeGizmoRenderComponent_K2_IsCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_BoxOverlapComponent
// ()
// Parameters:
// struct FVector*                InBoxCentre                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBox*                   InBox                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShowTrace                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPersistentShowTrace           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULandscapeGizmoRenderComponent::K2_BoxOverlapComponent(struct FVector* InBoxCentre, struct FBox* InBox, bool* bTraceComplex, bool* bShowTrace, bool* bPersistentShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_BoxOverlapComponent");

	ULandscapeGizmoRenderComponent_K2_BoxOverlapComponent_Params params;
	params.InBoxCentre = InBoxCentre;
	params.InBox = InBox;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;
	params.bPersistentShowTrace = bPersistentShowTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsOverlappingComponent
// ()
// Parameters:
// class UPrimitiveComponent**    OtherComp                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULandscapeGizmoRenderComponent::IsOverlappingComponent(class UPrimitiveComponent** OtherComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsOverlappingComponent");

	ULandscapeGizmoRenderComponent_IsOverlappingComponent_Params params;
	params.OtherComp = OtherComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsOverlappingActor
// ()
// Parameters:
// class AActor**                 Other                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULandscapeGizmoRenderComponent::IsOverlappingActor(class AActor** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsOverlappingActor");

	ULandscapeGizmoRenderComponent_IsOverlappingActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsGravityEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULandscapeGizmoRenderComponent::IsGravityEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsGravityEnabled");

	ULandscapeGizmoRenderComponent_IsGravityEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULandscapeGizmoRenderComponent::IsAnyRigidBodyAwake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake");

	ULandscapeGizmoRenderComponent_IsAnyRigidBodyAwake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving
// ()
// Parameters:
// class UPrimitiveComponent**    Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bShouldIgnore                  (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::IgnoreComponentWhenMoving(class UPrimitiveComponent** Component, bool* bShouldIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving");

	ULandscapeGizmoRenderComponent_IgnoreComponentWhenMoving_Params params;
	params.Component = Component;
	params.bShouldIgnore = bShouldIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.IgnoreActorWhenMoving
// ()
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShouldIgnore                  (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::IgnoreActorWhenMoving(class AActor** Actor, bool* bShouldIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IgnoreActorWhenMoving");

	ULandscapeGizmoRenderComponent_IgnoreActorWhenMoving_Params params;
	params.Actor = Actor;
	params.bShouldIgnore = bShouldIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.GetWalkableSlopeOverride
// ()
// Parameters:
// struct FWalkableSlopeOverride  ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FWalkableSlopeOverride ULandscapeGizmoRenderComponent::GetWalkableSlopeOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetWalkableSlopeOverride");

	ULandscapeGizmoRenderComponent_GetWalkableSlopeOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
// ()
// Parameters:
// struct FVector*                Point                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ULandscapeGizmoRenderComponent::GetPhysicsLinearVelocityAtPoint(struct FVector* Point, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint");

	ULandscapeGizmoRenderComponent_GetPhysicsLinearVelocityAtPoint_Params params;
	params.Point = Point;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ULandscapeGizmoRenderComponent::GetPhysicsLinearVelocity(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity");

	ULandscapeGizmoRenderComponent_GetPhysicsLinearVelocity_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ULandscapeGizmoRenderComponent::GetPhysicsAngularVelocityInRadians(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians");

	ULandscapeGizmoRenderComponent_GetPhysicsAngularVelocityInRadians_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ULandscapeGizmoRenderComponent::GetPhysicsAngularVelocityInDegrees(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees");

	ULandscapeGizmoRenderComponent_GetPhysicsAngularVelocityInDegrees_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ULandscapeGizmoRenderComponent::GetPhysicsAngularVelocity(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity");

	ULandscapeGizmoRenderComponent_GetPhysicsAngularVelocity_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetOverlappingComponents
// ()
// Parameters:
// TArray<class UPrimitiveComponent*> OutOverlappingComponents       (Parm, OutParm, ZeroConstructor)

void ULandscapeGizmoRenderComponent::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OutOverlappingComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetOverlappingComponents");

	ULandscapeGizmoRenderComponent_GetOverlappingComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOverlappingComponents != nullptr)
		*OutOverlappingComponents = params.OutOverlappingComponents;
}


// Function Engine.PrimitiveComponent.GetOverlappingActors
// ()
// Parameters:
// TArray<class AActor*>          OverlappingActors              (Parm, OutParm, ZeroConstructor)
// class UClass**                 ClassFilter                    (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::GetOverlappingActors(class UClass** ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetOverlappingActors");

	ULandscapeGizmoRenderComponent_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}


// Function Engine.PrimitiveComponent.GetNumMaterials
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULandscapeGizmoRenderComponent::GetNumMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetNumMaterials");

	ULandscapeGizmoRenderComponent_GetNumMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex
// ()
// Parameters:
// int*                           FaceIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            SectionIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* ULandscapeGizmoRenderComponent::GetMaterialFromCollisionFaceIndex(int* FaceIndex, int* SectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex");

	ULandscapeGizmoRenderComponent_GetMaterialFromCollisionFaceIndex_Params params;
	params.FaceIndex = FaceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SectionIndex != nullptr)
		*SectionIndex = params.SectionIndex;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMaterial
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* ULandscapeGizmoRenderComponent::GetMaterial(int* ElementIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMaterial");

	ULandscapeGizmoRenderComponent_GetMaterial_Params params;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMassScale
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULandscapeGizmoRenderComponent::GetMassScale(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMassScale");

	ULandscapeGizmoRenderComponent_GetMassScale_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMass
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULandscapeGizmoRenderComponent::GetMass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMass");

	ULandscapeGizmoRenderComponent_GetMass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetLinearDamping
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULandscapeGizmoRenderComponent::GetLinearDamping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetLinearDamping");

	ULandscapeGizmoRenderComponent_GetLinearDamping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetInertiaTensor
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ULandscapeGizmoRenderComponent::GetInertiaTensor(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetInertiaTensor");

	ULandscapeGizmoRenderComponent_GetInertiaTensor_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetGenerateOverlapEvents
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULandscapeGizmoRenderComponent::GetGenerateOverlapEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetGenerateOverlapEvents");

	ULandscapeGizmoRenderComponent_GetGenerateOverlapEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionResponseToChannel
// ()
// Parameters:
// TEnumAsByte<ECollisionChannel>* Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionResponse> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECollisionResponse> ULandscapeGizmoRenderComponent::GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel>* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionResponseToChannel");

	ULandscapeGizmoRenderComponent_GetCollisionResponseToChannel_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionProfileName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ULandscapeGizmoRenderComponent::GetCollisionProfileName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionProfileName");

	ULandscapeGizmoRenderComponent_GetCollisionProfileName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionObjectType
// ()
// Parameters:
// TEnumAsByte<ECollisionChannel> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECollisionChannel> ULandscapeGizmoRenderComponent::GetCollisionObjectType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionObjectType");

	ULandscapeGizmoRenderComponent_GetCollisionObjectType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionEnabled
// ()
// Parameters:
// TEnumAsByte<ECollisionEnabled> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECollisionEnabled> ULandscapeGizmoRenderComponent::GetCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionEnabled");

	ULandscapeGizmoRenderComponent_GetCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetClosestPointOnCollision
// ()
// Parameters:
// struct FVector*                Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 OutPointOnBody                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULandscapeGizmoRenderComponent::GetClosestPointOnCollision(struct FVector* Point, struct FName* BoneName, struct FVector* OutPointOnBody)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetClosestPointOnCollision");

	ULandscapeGizmoRenderComponent_GetClosestPointOnCollision_Params params;
	params.Point = Point;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPointOnBody != nullptr)
		*OutPointOnBody = params.OutPointOnBody;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCenterOfMass
// ()
// Parameters:
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ULandscapeGizmoRenderComponent::GetCenterOfMass(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCenterOfMass");

	ULandscapeGizmoRenderComponent_GetCenterOfMass_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetAngularDamping
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULandscapeGizmoRenderComponent::GetAngularDamping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetAngularDamping");

	ULandscapeGizmoRenderComponent_GetAngularDamping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     SourceMaterial                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  OptionalName                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* ULandscapeGizmoRenderComponent::CreateDynamicMaterialInstance(int* ElementIndex, class UMaterialInterface** SourceMaterial, struct FName* OptionalName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance");

	ULandscapeGizmoRenderComponent_CreateDynamicMaterialInstance_Params params;
	params.ElementIndex = ElementIndex;
	params.SourceMaterial = SourceMaterial;
	params.OptionalName = OptionalName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Parent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* ULandscapeGizmoRenderComponent::CreateAndSetMaterialInstanceDynamicFromMaterial(int* ElementIndex, class UMaterialInterface** Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial");

	ULandscapeGizmoRenderComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
// ()
// Parameters:
// int*                           ElementIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* ULandscapeGizmoRenderComponent::CreateAndSetMaterialInstanceDynamic(int* ElementIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic");

	ULandscapeGizmoRenderComponent_CreateAndSetMaterialInstanceDynamic_Params params;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents
// ()
// Parameters:
// TArray<class UPrimitiveComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPrimitiveComponent*> ULandscapeGizmoRenderComponent::CopyArrayOfMoveIgnoreComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents");

	ULandscapeGizmoRenderComponent_CopyArrayOfMoveIgnoreComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
// ()
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> ULandscapeGizmoRenderComponent::CopyArrayOfMoveIgnoreActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors");

	ULandscapeGizmoRenderComponent_CopyArrayOfMoveIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents
// ()

void ULandscapeGizmoRenderComponent::ClearMoveIgnoreComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents");

	ULandscapeGizmoRenderComponent_ClearMoveIgnoreComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.ClearMoveIgnoreActors
// ()

void ULandscapeGizmoRenderComponent::ClearMoveIgnoreActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.ClearMoveIgnoreActors");

	ULandscapeGizmoRenderComponent_ClearMoveIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.CanCharacterStepUp
// ()
// Parameters:
// class APawn**                  Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULandscapeGizmoRenderComponent::CanCharacterStepUp(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CanCharacterStepUp");

	ULandscapeGizmoRenderComponent_CanCharacterStepUp_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.AddTorqueInRadians
// ()
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddTorqueInRadians(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddTorqueInRadians");

	ULandscapeGizmoRenderComponent_AddTorqueInRadians_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddTorqueInDegrees
// ()
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddTorqueInDegrees(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddTorqueInDegrees");

	ULandscapeGizmoRenderComponent_AddTorqueInDegrees_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddTorque
// ()
// Parameters:
// struct FVector*                Torque                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddTorque(struct FVector* Torque, struct FName* BoneName, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddTorque");

	ULandscapeGizmoRenderComponent_AddTorque_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddRadialImpulse
// ()
// Parameters:
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff>* Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddRadialImpulse(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddRadialImpulse");

	ULandscapeGizmoRenderComponent_AddRadialImpulse_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddRadialForce
// ()
// Parameters:
// struct FVector*                Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff>* Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddRadialForce(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddRadialForce");

	ULandscapeGizmoRenderComponent_AddRadialForce_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddImpulseAtLocation
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddImpulseAtLocation(struct FVector* Impulse, struct FVector* Location, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddImpulseAtLocation");

	ULandscapeGizmoRenderComponent_AddImpulseAtLocation_Params params;
	params.Impulse = Impulse;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddImpulse
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddImpulse(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddImpulse");

	ULandscapeGizmoRenderComponent_AddImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForceAtLocationLocal
// ()
// Parameters:
// struct FVector*                Force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddForceAtLocationLocal(struct FVector* Force, struct FVector* Location, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddForceAtLocationLocal");

	ULandscapeGizmoRenderComponent_AddForceAtLocationLocal_Params params;
	params.Force = Force;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForceAtLocation
// ()
// Parameters:
// struct FVector*                Force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddForceAtLocation(struct FVector* Force, struct FVector* Location, struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddForceAtLocation");

	ULandscapeGizmoRenderComponent_AddForceAtLocation_Params params;
	params.Force = Force;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForce
// ()
// Parameters:
// struct FVector*                Force                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddForce(struct FVector* Force, struct FName* BoneName, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddForce");

	ULandscapeGizmoRenderComponent_AddForce_Params params;
	params.Force = Force;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulseInRadians
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddAngularImpulseInRadians(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddAngularImpulseInRadians");

	ULandscapeGizmoRenderComponent_AddAngularImpulseInRadians_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddAngularImpulseInDegrees(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees");

	ULandscapeGizmoRenderComponent_AddAngularImpulseInDegrees_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulse
// ()
// Parameters:
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bVelChange                     (Parm, ZeroConstructor, IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddAngularImpulse(struct FVector* Impulse, struct FName* BoneName, bool* bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddAngularImpulse");

	ULandscapeGizmoRenderComponent_AddAngularImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
// ()
// Parameters:
// class ULandscapeComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class ULandscapeComponent* ULandscapeHeightfieldCollisionComponent::GetRenderComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent");

	ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
// ()
// Parameters:
// TArray<class USplineMeshComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class USplineMeshComponent*> ULandscapeSplinesComponent::GetSplineMeshComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents");

	ULandscapeSplinesComponent_GetSplineMeshComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

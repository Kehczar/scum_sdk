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

// Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UARSessionConfig::ShouldResetTrackedObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects");

	UARSessionConfig_ShouldResetTrackedObjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UARSessionConfig::ShouldResetCameraTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking");

	UARSessionConfig_ShouldResetCameraTracking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UARSessionConfig::ShouldRenderCameraOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay");

	UARSessionConfig_ShouldRenderCameraOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UARSessionConfig::ShouldEnableCameraTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking");

	UARSessionConfig_ShouldEnableCameraTracking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UARSessionConfig::ShouldEnableAutoFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus");

	UARSessionConfig_ShouldEnableAutoFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.SetWorldMapData
// ()
// Parameters:
// TArray<unsigned char>*         WorldMapData                   (Parm, ZeroConstructor)

void UARSessionConfig::SetWorldMapData(TArray<unsigned char>* WorldMapData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetWorldMapData");

	UARSessionConfig_SetWorldMapData_Params params;
	params.WorldMapData = WorldMapData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
// ()
// Parameters:
// EARSessionTrackingFeature*     InSessionTrackingFeature       (Parm, ZeroConstructor, IsPlainOldData)

void UARSessionConfig::SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature* InSessionTrackingFeature)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable");

	UARSessionConfig_SetSessionTrackingFeatureToEnable_Params params;
	params.InSessionTrackingFeature = InSessionTrackingFeature;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
// ()
// Parameters:
// bool*                          bNewValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UARSessionConfig::SetResetTrackedObjects(bool* bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects");

	UARSessionConfig_SetResetTrackedObjects_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
// ()
// Parameters:
// bool*                          bNewValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UARSessionConfig::SetResetCameraTracking(bool* bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetCameraTracking");

	UARSessionConfig_SetResetCameraTracking_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
// ()
// Parameters:
// EARFaceTrackingUpdate*         InUpdate                       (Parm, ZeroConstructor, IsPlainOldData)

void UARSessionConfig::SetFaceTrackingUpdate(EARFaceTrackingUpdate* InUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate");

	UARSessionConfig_SetFaceTrackingUpdate_Params params;
	params.InUpdate = InUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
// ()
// Parameters:
// EARFaceTrackingDirection*      InDirection                    (Parm, ZeroConstructor, IsPlainOldData)

void UARSessionConfig::SetFaceTrackingDirection(EARFaceTrackingDirection* InDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection");

	UARSessionConfig_SetFaceTrackingDirection_Params params;
	params.InDirection = InDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
// ()
// Parameters:
// bool*                          bNewValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UARSessionConfig::SetEnableAutoFocus(bool* bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus");

	UARSessionConfig_SetEnableAutoFocus_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
// ()
// Parameters:
// struct FARVideoFormat*         NewFormat                      (Parm)

void UARSessionConfig::SetDesiredVideoFormat(struct FARVideoFormat* NewFormat)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat");

	UARSessionConfig_SetDesiredVideoFormat_Params params;
	params.NewFormat = NewFormat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
// ()
// Parameters:
// TArray<class UARCandidateObject*>* InCandidateObjects             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UARSessionConfig::SetCandidateObjectList(TArray<class UARCandidateObject*>* InCandidateObjects)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetCandidateObjectList");

	UARSessionConfig_SetCandidateObjectList_Params params;
	params.InCandidateObjects = InCandidateObjects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.GetWorldMapData
// ()
// Parameters:
// TArray<unsigned char>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<unsigned char> UARSessionConfig::GetWorldMapData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldMapData");

	UARSessionConfig_GetWorldMapData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetWorldAlignment
// ()
// Parameters:
// EARWorldAlignment              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EARWorldAlignment UARSessionConfig::GetWorldAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldAlignment");

	UARSessionConfig_GetWorldAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetSessionType
// ()
// Parameters:
// EARSessionType                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EARSessionType UARSessionConfig::GetSessionType()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetSessionType");

	UARSessionConfig_GetSessionType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
// ()
// Parameters:
// EARPlaneDetectionMode          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EARPlaneDetectionMode UARSessionConfig::GetPlaneDetectionMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode");

	UARSessionConfig_GetPlaneDetectionMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UARSessionConfig::GetMaxNumSimultaneousImagesTracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked");

	UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
// ()
// Parameters:
// EARLightEstimationMode         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EARLightEstimationMode UARSessionConfig::GetLightEstimationMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetLightEstimationMode");

	UARSessionConfig_GetLightEstimationMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
// ()
// Parameters:
// EARFrameSyncMode               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EARFrameSyncMode UARSessionConfig::GetFrameSyncMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFrameSyncMode");

	UARSessionConfig_GetFrameSyncMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
// ()
// Parameters:
// EARFaceTrackingUpdate          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EARFaceTrackingUpdate UARSessionConfig::GetFaceTrackingUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate");

	UARSessionConfig_GetFaceTrackingUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
// ()
// Parameters:
// EARFaceTrackingDirection       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EARFaceTrackingDirection UARSessionConfig::GetFaceTrackingDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection");

	UARSessionConfig_GetFaceTrackingDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
// ()
// Parameters:
// EAREnvironmentCaptureProbeType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAREnvironmentCaptureProbeType UARSessionConfig::GetEnvironmentCaptureProbeType()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType");

	UARSessionConfig_GetEnvironmentCaptureProbeType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
// ()
// Parameters:
// EARSessionTrackingFeature      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EARSessionTrackingFeature UARSessionConfig::GetEnabledSessionTrackingFeature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature");

	UARSessionConfig_GetEnabledSessionTrackingFeature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
// ()
// Parameters:
// struct FARVideoFormat          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FARVideoFormat UARSessionConfig::GetDesiredVideoFormat()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat");

	UARSessionConfig_GetDesiredVideoFormat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
// ()
// Parameters:
// TArray<class UARCandidateObject*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UARCandidateObject*> UARSessionConfig::GetCandidateObjectList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateObjectList");

	UARSessionConfig_GetCandidateObjectList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetCandidateImageList
// ()
// Parameters:
// TArray<class UARCandidateImage*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UARCandidateImage*> UARSessionConfig::GetCandidateImageList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateImageList");

	UARSessionConfig_GetCandidateImageList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.AddCandidateObject
// ()
// Parameters:
// class UARCandidateObject**     CandidateObject                (Parm, ZeroConstructor, IsPlainOldData)

void UARSessionConfig::AddCandidateObject(class UARCandidateObject** CandidateObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateObject");

	UARSessionConfig_AddCandidateObject_Params params;
	params.CandidateObject = CandidateObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.AddCandidateImage
// ()
// Parameters:
// class UARCandidateImage**      NewCandidateImage              (Parm, ZeroConstructor, IsPlainOldData)

void UARSessionConfig::AddCandidateImage(class UARCandidateImage** NewCandidateImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateImage");

	UARSessionConfig_AddCandidateImage_Params params;
	params.NewCandidateImage = NewCandidateImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
// ()
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UARSaveWorldAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UARSaveWorldAsyncTaskBlueprintProxy* UARSaveWorldAsyncTaskBlueprintProxy::ARSaveWorld(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld");

	UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
// ()
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Extent                         (Parm, ZeroConstructor, IsPlainOldData)
// class UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UARGetCandidateObjectAsyncTaskBlueprintProxy* UARGetCandidateObjectAsyncTaskBlueprintProxy::ARGetCandidateObject(class UObject** WorldContextObject, struct FVector* Location, struct FVector* Extent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject");

	UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UARBasicLightEstimate::GetAmbientIntensityLumens()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens");

	UARBasicLightEstimate_GetAmbientIntensityLumens_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UARBasicLightEstimate::GetAmbientColorTemperatureKelvin()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin");

	UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UARBasicLightEstimate::GetAmbientColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor");

	UARBasicLightEstimate_GetAmbientColor_Params params;

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

bool AAROriginActor::WasRecentlyRendered(float* Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.WasRecentlyRendered");

	AAROriginActor_WasRecentlyRendered_Params params;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.UserConstructionScript
// ()

void AAROriginActor::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.UserConstructionScript");

	AAROriginActor_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.TearOff
// ()

void AAROriginActor::TearOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.TearOff");

	AAROriginActor_TearOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SnapRootComponentTo
// ()
// Parameters:
// class AActor**                 InParentActor                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::SnapRootComponentTo(class AActor** InParentActor, struct FName* InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SnapRootComponentTo");

	AAROriginActor_SnapRootComponentTo_Params params;
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

void AAROriginActor::SetTickGroup(TEnumAsByte<ETickingGroup>* NewTickGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetTickGroup");

	AAROriginActor_SetTickGroup_Params params;
	params.NewTickGroup = NewTickGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTickableWhenPaused
// ()
// Parameters:
// bool*                          bTickableWhenPaused            (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::SetTickableWhenPaused(bool* bTickableWhenPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetTickableWhenPaused");

	AAROriginActor_SetTickableWhenPaused_Params params;
	params.bTickableWhenPaused = bTickableWhenPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicates
// ()
// Parameters:
// bool*                          bInReplicates                  (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::SetReplicates(bool* bInReplicates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetReplicates");

	AAROriginActor_SetReplicates_Params params;
	params.bInReplicates = bInReplicates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicateMovement
// ()
// Parameters:
// bool*                          bInReplicateMovement           (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::SetReplicateMovement(bool* bInReplicateMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetReplicateMovement");

	AAROriginActor_SetReplicateMovement_Params params;
	params.bInReplicateMovement = bInReplicateMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetOwner
// ()
// Parameters:
// class AActor**                 NewOwner                       (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::SetOwner(class AActor** NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetOwner");

	AAROriginActor_SetOwner_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetNetDormancy
// ()
// Parameters:
// TEnumAsByte<ENetDormancy>*     NewDormancy                    (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::SetNetDormancy(TEnumAsByte<ENetDormancy>* NewDormancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetNetDormancy");

	AAROriginActor_SetNetDormancy_Params params;
	params.NewDormancy = NewDormancy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetLifeSpan
// ()
// Parameters:
// float*                         InLifespan                     (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::SetLifeSpan(float* InLifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetLifeSpan");

	AAROriginActor_SetLifeSpan_Params params;
	params.InLifespan = InLifespan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickInterval
// ()
// Parameters:
// float*                         TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::SetActorTickInterval(float* TickInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorTickInterval");

	AAROriginActor_SetActorTickInterval_Params params;
	params.TickInterval = TickInterval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickEnabled
// ()
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::SetActorTickEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorTickEnabled");

	AAROriginActor_SetActorTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorScale3D
// ()
// Parameters:
// struct FVector*                NewScale3D                     (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::SetActorScale3D(struct FVector* NewScale3D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorScale3D");

	AAROriginActor_SetActorScale3D_Params params;
	params.NewScale3D = NewScale3D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorRelativeScale3D
// ()
// Parameters:
// struct FVector*                NewRelativeScale               (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::SetActorRelativeScale3D(struct FVector* NewRelativeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorRelativeScale3D");

	AAROriginActor_SetActorRelativeScale3D_Params params;
	params.NewRelativeScale = NewRelativeScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorHiddenInGame
// ()
// Parameters:
// bool*                          bNewHidden                     (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::SetActorHiddenInGame(bool* bNewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorHiddenInGame");

	AAROriginActor_SetActorHiddenInGame_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorEnableCollision
// ()
// Parameters:
// bool*                          bNewActorEnableCollision       (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::SetActorEnableCollision(bool* bNewActorEnableCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorEnableCollision");

	AAROriginActor_SetActorEnableCollision_Params params;
	params.bNewActorEnableCollision = bNewActorEnableCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteComponent
// ()
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AAROriginActor::RemoveTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RemoveTickPrerequisiteComponent");

	AAROriginActor_RemoveTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteActor
// ()
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::RemoveTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RemoveTickPrerequisiteActor");

	AAROriginActor_RemoveTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveTick");

	AAROriginActor_ReceiveTick_Params params;
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

void AAROriginActor::ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveRadialDamage");

	AAROriginActor_ReceiveRadialDamage_Params params;
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

void AAROriginActor::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceivePointDamage");

	AAROriginActor_ReceivePointDamage_Params params;
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

void AAROriginActor::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveHit");

	AAROriginActor_ReceiveHit_Params params;
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

void AAROriginActor::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveEndPlay");

	AAROriginActor_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveDestroyed
// ()

void AAROriginActor::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveDestroyed");

	AAROriginActor_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveBeginPlay
// ()

void AAROriginActor::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveBeginPlay");

	AAROriginActor_ReceiveBeginPlay_Params params;

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

void AAROriginActor::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveAnyDamage");

	AAROriginActor_ReceiveAnyDamage_Params params;
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

void AAROriginActor::ReceiveActorOnReleased(struct FKey* ButtonReleased)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnReleased");

	AAROriginActor_ReceiveActorOnReleased_Params params;
	params.ButtonReleased = ButtonReleased;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchLeave
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchLeave");

	AAROriginActor_ReceiveActorOnInputTouchLeave_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnter
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchEnter");

	AAROriginActor_ReceiveActorOnInputTouchEnter_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnd
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchEnd");

	AAROriginActor_ReceiveActorOnInputTouchEnd_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchBegin
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex>* FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchBegin");

	AAROriginActor_ReceiveActorOnInputTouchBegin_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnClicked
// ()
// Parameters:
// struct FKey*                   ButtonPressed                  (Parm)

void AAROriginActor::ReceiveActorOnClicked(struct FKey* ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnClicked");

	AAROriginActor_ReceiveActorOnClicked_Params params;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorEndOverlap");

	AAROriginActor_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndCursorOver
// ()

void AAROriginActor::ReceiveActorEndCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorEndCursorOver");

	AAROriginActor_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginOverlap
// ()
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorBeginOverlap");

	AAROriginActor_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginCursorOver
// ()

void AAROriginActor::ReceiveActorBeginCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorBeginCursorOver");

	AAROriginActor_ReceiveActorBeginCursorOver_Params params;

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

void AAROriginActor::PrestreamTextures(float* Seconds, bool* bEnableStreaming, int* CinematicTextureGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.PrestreamTextures");

	AAROriginActor_PrestreamTextures_Params params;
	params.Seconds = Seconds;
	params.bEnableStreaming = bEnableStreaming;
	params.CinematicTextureGroups = CinematicTextureGroups;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicateMovement
// ()

void AAROriginActor::OnRep_ReplicateMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_ReplicateMovement");

	AAROriginActor_OnRep_ReplicateMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicatedMovement
// ()

void AAROriginActor::OnRep_ReplicatedMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_ReplicatedMovement");

	AAROriginActor_OnRep_ReplicatedMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Owner
// ()

void AAROriginActor::OnRep_Owner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Owner");

	AAROriginActor_OnRep_Owner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Instigator
// ()

void AAROriginActor::OnRep_Instigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Instigator");

	AAROriginActor_OnRep_Instigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_AttachmentReplication
// ()

void AAROriginActor::OnRep_AttachmentReplication()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_AttachmentReplication");

	AAROriginActor_OnRep_AttachmentReplication_Params params;

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

void AAROriginActor::MakeNoise(float* Loudness, class APawn** NoiseInstigator, struct FVector* NoiseLocation, float* MaxRange, struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MakeNoise");

	AAROriginActor_MakeNoise_Params params;
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

class UMaterialInstanceDynamic* AAROriginActor::MakeMIDForMaterial(class UMaterialInterface** Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MakeMIDForMaterial");

	AAROriginActor_MakeMIDForMaterial_Params params;
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

bool AAROriginActor::K2_TeleportTo(struct FVector* DestLocation, struct FRotator* DestRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_TeleportTo");

	AAROriginActor_K2_TeleportTo_Params params;
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

bool AAROriginActor::K2_SetActorTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorTransform");

	AAROriginActor_K2_SetActorTransform_Params params;
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

bool AAROriginActor::K2_SetActorRotation(struct FRotator* NewRotation, bool* bTeleportPhysics)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRotation");

	AAROriginActor_K2_SetActorRotation_Params params;
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

void AAROriginActor::K2_SetActorRelativeTransform(struct FTransform* NewRelativeTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeTransform");

	AAROriginActor_K2_SetActorRelativeTransform_Params params;
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

void AAROriginActor::K2_SetActorRelativeRotation(struct FRotator* NewRelativeRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeRotation");

	AAROriginActor_K2_SetActorRelativeRotation_Params params;
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

void AAROriginActor::K2_SetActorRelativeLocation(struct FVector* NewRelativeLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeLocation");

	AAROriginActor_K2_SetActorRelativeLocation_Params params;
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

bool AAROriginActor::K2_SetActorLocationAndRotation(struct FVector* NewLocation, struct FRotator* NewRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorLocationAndRotation");

	AAROriginActor_K2_SetActorLocationAndRotation_Params params;
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

bool AAROriginActor::K2_SetActorLocation(struct FVector* NewLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorLocation");

	AAROriginActor_K2_SetActorLocation_Params params;
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

void AAROriginActor::K2_OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnReset");

	AAROriginActor_K2_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnEndViewTarget
// ()
// Parameters:
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::K2_OnEndViewTarget(class APlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnEndViewTarget");

	AAROriginActor_K2_OnEndViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnBecomeViewTarget
// ()
// Parameters:
// class APlayerController**      PC                             (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::K2_OnBecomeViewTarget(class APlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnBecomeViewTarget");

	AAROriginActor_K2_OnBecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_GetRootComponent
// ()
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* AAROriginActor::K2_GetRootComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetRootComponent");

	AAROriginActor_K2_GetRootComponent_Params params;

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

TArray<class UActorComponent*> AAROriginActor::K2_GetComponentsByClass(class UClass** ComponentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetComponentsByClass");

	AAROriginActor_K2_GetComponentsByClass_Params params;
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

struct FRotator AAROriginActor::K2_GetActorRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorRotation");

	AAROriginActor_K2_GetActorRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AAROriginActor::K2_GetActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorLocation");

	AAROriginActor_K2_GetActorLocation_Params params;

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

void AAROriginActor::K2_DetachFromActor(EDetachmentRule* LocationRule, EDetachmentRule* RotationRule, EDetachmentRule* ScaleRule)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DetachFromActor");

	AAROriginActor_K2_DetachFromActor_Params params;
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

void AAROriginActor::K2_DestroyComponent(class UActorComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DestroyComponent");

	AAROriginActor_K2_DestroyComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyActor
// ()

void AAROriginActor::K2_DestroyActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DestroyActor");

	AAROriginActor_K2_DestroyActor_Params params;

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

void AAROriginActor::K2_AttachToComponent(class USceneComponent** Parent, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachToComponent");

	AAROriginActor_K2_AttachToComponent_Params params;
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

void AAROriginActor::K2_AttachToActor(class AActor** ParentActor, struct FName* SocketName, EAttachmentRule* LocationRule, EAttachmentRule* RotationRule, EAttachmentRule* ScaleRule, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachToActor");

	AAROriginActor_K2_AttachToActor_Params params;
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

void AAROriginActor::K2_AttachRootComponentToActor(class AActor** InParentActor, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachRootComponentToActor");

	AAROriginActor_K2_AttachRootComponentToActor_Params params;
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

void AAROriginActor::K2_AttachRootComponentTo(class USceneComponent** InParent, struct FName* InSocketName, TEnumAsByte<EAttachLocation>* AttachLocationType, bool* bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachRootComponentTo");

	AAROriginActor_K2_AttachRootComponentTo_Params params;
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

void AAROriginActor::K2_AddActorWorldTransform(struct FTransform* DeltaTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldTransform");

	AAROriginActor_K2_AddActorWorldTransform_Params params;
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

void AAROriginActor::K2_AddActorWorldRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldRotation");

	AAROriginActor_K2_AddActorWorldRotation_Params params;
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

void AAROriginActor::K2_AddActorWorldOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldOffset");

	AAROriginActor_K2_AddActorWorldOffset_Params params;
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

void AAROriginActor::K2_AddActorLocalTransform(struct FTransform* NewTransform, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalTransform");

	AAROriginActor_K2_AddActorLocalTransform_Params params;
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

void AAROriginActor::K2_AddActorLocalRotation(struct FRotator* DeltaRotation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalRotation");

	AAROriginActor_K2_AddActorLocalRotation_Params params;
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

void AAROriginActor::K2_AddActorLocalOffset(struct FVector* DeltaLocation, bool* bSweep, bool* bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalOffset");

	AAROriginActor_K2_AddActorLocalOffset_Params params;
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

bool AAROriginActor::IsOverlappingActor(class AActor** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsOverlappingActor");

	AAROriginActor_IsOverlappingActor_Params params;
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

bool AAROriginActor::IsChildActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsChildActor");

	AAROriginActor_IsChildActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorTickEnabled
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAROriginActor::IsActorTickEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsActorTickEnabled");

	AAROriginActor_IsActorTickEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorBeingDestroyed
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAROriginActor::IsActorBeingDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsActorBeingDestroyed");

	AAROriginActor_IsActorBeingDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.HasAuthority
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAROriginActor::HasAuthority()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.HasAuthority");

	AAROriginActor_HasAuthority_Params params;

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

float AAROriginActor::GetVerticalDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetVerticalDistanceTo");

	AAROriginActor_GetVerticalDistanceTo_Params params;
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

struct FVector AAROriginActor::GetVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetVelocity");

	AAROriginActor_GetVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTransform
// ()
// Parameters:
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FTransform AAROriginActor::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTransform");

	AAROriginActor_GetTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTickableWhenPaused
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAROriginActor::GetTickableWhenPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTickableWhenPaused");

	AAROriginActor_GetTickableWhenPaused_Params params;

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

float AAROriginActor::GetSquaredDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetSquaredDistanceTo");

	AAROriginActor_GetSquaredDistanceTo_Params params;
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

TEnumAsByte<ENetRole> AAROriginActor::GetRemoteRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetRemoteRole");

	AAROriginActor_GetRemoteRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentComponent
// ()
// Parameters:
// class UChildActorComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UChildActorComponent* AAROriginActor::GetParentComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetParentComponent");

	AAROriginActor_GetParentComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentActor
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AAROriginActor::GetParentActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetParentActor");

	AAROriginActor_GetParentActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOwner
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AAROriginActor::GetOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOwner");

	AAROriginActor_GetOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOverlappingComponents
// ()
// Parameters:
// TArray<class UPrimitiveComponent*> OverlappingComponents          (Parm, OutParm, ZeroConstructor)

void AAROriginActor::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOverlappingComponents");

	AAROriginActor_GetOverlappingComponents_Params params;

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

void AAROriginActor::GetOverlappingActors(class UClass** ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOverlappingActors");

	AAROriginActor_GetOverlappingActors_Params params;
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

TEnumAsByte<ENetRole> AAROriginActor::GetLocalRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetLocalRole");

	AAROriginActor_GetLocalRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetLifeSpan
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAROriginActor::GetLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetLifeSpan");

	AAROriginActor_GetLifeSpan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigatorController
// ()
// Parameters:
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AController* AAROriginActor::GetInstigatorController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInstigatorController");

	AAROriginActor_GetInstigatorController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigator
// ()
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* AAROriginActor::GetInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInstigator");

	AAROriginActor_GetInstigator_Params params;

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

struct FVector AAROriginActor::GetInputVectorAxisValue(struct FKey* InputAxisKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputVectorAxisValue");

	AAROriginActor_GetInputVectorAxisValue_Params params;
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

float AAROriginActor::GetInputAxisValue(struct FName* InputAxisName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputAxisValue");

	AAROriginActor_GetInputAxisValue_Params params;
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

float AAROriginActor::GetInputAxisKeyValue(struct FKey* InputAxisKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputAxisKeyValue");

	AAROriginActor_GetInputAxisKeyValue_Params params;
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

float AAROriginActor::GetHorizontalDotProductTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetHorizontalDotProductTo");

	AAROriginActor_GetHorizontalDotProductTo_Params params;
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

float AAROriginActor::GetHorizontalDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetHorizontalDistanceTo");

	AAROriginActor_GetHorizontalDistanceTo_Params params;
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

float AAROriginActor::GetGameTimeSinceCreation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetGameTimeSinceCreation");

	AAROriginActor_GetGameTimeSinceCreation_Params params;

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

float AAROriginActor::GetDotProductTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetDotProductTo");

	AAROriginActor_GetDotProductTo_Params params;
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

float AAROriginActor::GetDistanceTo(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetDistanceTo");

	AAROriginActor_GetDistanceTo_Params params;
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

TArray<class UActorComponent*> AAROriginActor::GetComponentsByTag(class UClass** ComponentClass, struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentsByTag");

	AAROriginActor_GetComponentsByTag_Params params;
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

TArray<class UActorComponent*> AAROriginActor::GetComponentsByInterface(class UClass** Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentsByInterface");

	AAROriginActor_GetComponentsByInterface_Params params;
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

class UActorComponent* AAROriginActor::GetComponentByClass(class UClass** ComponentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentByClass");

	AAROriginActor_GetComponentByClass_Params params;
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

struct FName AAROriginActor::GetAttachParentSocketName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachParentSocketName");

	AAROriginActor_GetAttachParentSocketName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachParentActor
// ()
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AAROriginActor::GetAttachParentActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachParentActor");

	AAROriginActor_GetAttachParentActor_Params params;

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

void AAROriginActor::GetAttachedActors(bool* bResetArray, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachedActors");

	AAROriginActor_GetAttachedActors_Params params;
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

void AAROriginActor::GetAllChildActors(bool* bIncludeDescendants, TArray<class AActor*>* ChildActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAllChildActors");

	AAROriginActor_GetAllChildActors_Params params;
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

struct FVector AAROriginActor::GetActorUpVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorUpVector");

	AAROriginActor_GetActorUpVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTimeDilation
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAROriginActor::GetActorTimeDilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorTimeDilation");

	AAROriginActor_GetActorTimeDilation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTickInterval
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAROriginActor::GetActorTickInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorTickInterval");

	AAROriginActor_GetActorTickInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorScale3D
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AAROriginActor::GetActorScale3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorScale3D");

	AAROriginActor_GetActorScale3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRightVector
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AAROriginActor::GetActorRightVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorRightVector");

	AAROriginActor_GetActorRightVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRelativeScale3D
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AAROriginActor::GetActorRelativeScale3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorRelativeScale3D");

	AAROriginActor_GetActorRelativeScale3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorForwardVector
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AAROriginActor::GetActorForwardVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorForwardVector");

	AAROriginActor_GetActorForwardVector_Params params;

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

void AAROriginActor::GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorEyesViewPoint");

	AAROriginActor_GetActorEyesViewPoint_Params params;

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

bool AAROriginActor::GetActorEnableCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorEnableCollision");

	AAROriginActor_GetActorEnableCollision_Params params;

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

void AAROriginActor::GetActorBounds(bool* bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorBounds");

	AAROriginActor_GetActorBounds_Params params;
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

void AAROriginActor::ForceNetUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ForceNetUpdate");

	AAROriginActor_ForceNetUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.FlushNetDormancy
// ()

void AAROriginActor::FlushNetDormancy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.FlushNetDormancy");

	AAROriginActor_FlushNetDormancy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.EnableInput
// ()
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::EnableInput(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.EnableInput");

	AAROriginActor_EnableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DisableInput
// ()
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::DisableInput(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DisableInput");

	AAROriginActor_DisableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DetachRootComponentFromParent
// ()
// Parameters:
// bool*                          bMaintainWorldPosition         (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::DetachRootComponentFromParent(bool* bMaintainWorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DetachRootComponentFromParent");

	AAROriginActor_DetachRootComponentFromParent_Params params;
	params.bMaintainWorldPosition = bMaintainWorldPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteComponent
// ()
// Parameters:
// class UActorComponent**        PrerequisiteComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AAROriginActor::AddTickPrerequisiteComponent(class UActorComponent** PrerequisiteComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddTickPrerequisiteComponent");

	AAROriginActor_AddTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteActor
// ()
// Parameters:
// class AActor**                 PrerequisiteActor              (Parm, ZeroConstructor, IsPlainOldData)

void AAROriginActor::AddTickPrerequisiteActor(class AActor** PrerequisiteActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddTickPrerequisiteActor");

	AAROriginActor_AddTickPrerequisiteActor_Params params;
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

class UActorComponent* AAROriginActor::AddComponent(struct FName* TemplateName, bool* bManualAttachment, struct FTransform* RelativeTransform, class UObject** ComponentTemplateContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddComponent");

	AAROriginActor_AddComponent_Params params;
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

bool AAROriginActor::ActorHasTag(struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ActorHasTag");

	AAROriginActor_ActorHasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetTrackingState
// ()
// Parameters:
// EARTrackingState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EARTrackingState UARPin::GetTrackingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackingState");

	UARPin_GetTrackingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetTrackedGeometry
// ()
// Parameters:
// class UARTrackedGeometry*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UARTrackedGeometry* UARPin::GetTrackedGeometry()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackedGeometry");

	UARPin_GetTrackedGeometry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetPinnedComponent
// ()
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UARPin::GetPinnedComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetPinnedComponent");

	UARPin_GetPinnedComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetLocalToWorldTransform
// ()
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UARPin::GetLocalToWorldTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToWorldTransform");

	UARPin_GetLocalToWorldTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetLocalToTrackingTransform
// ()
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UARPin::GetLocalToTrackingTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToTrackingTransform");

	UARPin_GetLocalToTrackingTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetDebugName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UARPin::GetDebugName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetDebugName");

	UARPin_GetDebugName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.DebugDraw
// ()
// Parameters:
// class UWorld**                 World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PersistForSeconds              (Parm, ZeroConstructor, IsPlainOldData)

void UARPin::DebugDraw(class UWorld** World, struct FLinearColor* Color, float* Scale, float* PersistForSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.DebugDraw");

	UARPin_DebugDraw_Params params;
	params.World = World;
	params.Color = Color;
	params.Scale = Scale;
	params.PersistForSeconds = PersistForSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
// ()
// Parameters:
// TArray<unsigned char>*         ImageData                      (Parm, ZeroConstructor)

void AARSharedWorldGameMode::SetPreviewImageData(TArray<unsigned char>* ImageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData");

	AARSharedWorldGameMode_SetPreviewImageData_Params params;
	params.ImageData = ImageData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
// ()

void AARSharedWorldGameMode::SetARWorldSharingIsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady");

	AARSharedWorldGameMode_SetARWorldSharingIsReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
// ()
// Parameters:
// TArray<unsigned char>*         ARWorldData                    (Parm, ZeroConstructor)

void AARSharedWorldGameMode::SetARSharedWorldData(TArray<unsigned char>* ARWorldData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData");

	AARSharedWorldGameMode_SetARSharedWorldData_Params params;
	params.ARWorldData = ARWorldData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
// ()
// Parameters:
// class AARSharedWorldGameState* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AARSharedWorldGameState* AARSharedWorldGameMode::GetARSharedWorldGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState");

	AARSharedWorldGameMode_GetARSharedWorldGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
// ()

void AARSharedWorldGameState::K2_OnARWorldMapIsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady");

	AARSharedWorldGameState_K2_OnARWorldMapIsReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.WasInputKeyJustReleased
// ()
// Parameters:
// struct FKey*                   Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AARSharedWorldPlayerController::WasInputKeyJustReleased(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.WasInputKeyJustReleased");

	AARSharedWorldPlayerController_WasInputKeyJustReleased_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.WasInputKeyJustPressed
// ()
// Parameters:
// struct FKey*                   Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AARSharedWorldPlayerController::WasInputKeyJustPressed(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.WasInputKeyJustPressed");

	AARSharedWorldPlayerController_WasInputKeyJustPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.ToggleSpeaking
// ()
// Parameters:
// bool*                          bInSpeaking                    (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ToggleSpeaking(bool* bInSpeaking)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ToggleSpeaking");

	AARSharedWorldPlayerController_ToggleSpeaking_Params params;
	params.bInSpeaking = bInSpeaking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.TestServerLevelVisibilityChange
// ()
// Parameters:
// struct FName*                  PackageName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Filename                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::TestServerLevelVisibilityChange(struct FName* PackageName, struct FName* Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.TestServerLevelVisibilityChange");

	AARSharedWorldPlayerController_TestServerLevelVisibilityChange_Params params;
	params.PackageName = PackageName;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SwitchLevel
// ()
// Parameters:
// struct FString*                URL                            (Parm, ZeroConstructor)

void AARSharedWorldPlayerController::SwitchLevel(struct FString* URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SwitchLevel");

	AARSharedWorldPlayerController_SwitchLevel_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.StopHapticEffect
// ()
// Parameters:
// EControllerHand*               Hand                           (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::StopHapticEffect(EControllerHand* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.StopHapticEffect");

	AARSharedWorldPlayerController_StopHapticEffect_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.StartFire
// ()
// Parameters:
// unsigned char*                 FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::StartFire(unsigned char* FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.StartFire");

	AARSharedWorldPlayerController_StartFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetVirtualJoystickVisibility
// ()
// Parameters:
// bool*                          bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::SetVirtualJoystickVisibility(bool* bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetVirtualJoystickVisibility");

	AARSharedWorldPlayerController_SetVirtualJoystickVisibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetViewTargetWithBlend
// ()
// Parameters:
// class AActor**                 NewViewTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EViewTargetBlendFunction>* BlendFunc                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendExp                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLockOutgoing                  (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::SetViewTargetWithBlend(class AActor** NewViewTarget, float* BlendTime, TEnumAsByte<EViewTargetBlendFunction>* BlendFunc, float* BlendExp, bool* bLockOutgoing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetViewTargetWithBlend");

	AARSharedWorldPlayerController_SetViewTargetWithBlend_Params params;
	params.NewViewTarget = NewViewTarget;
	params.BlendTime = BlendTime;
	params.BlendFunc = BlendFunc;
	params.BlendExp = BlendExp;
	params.bLockOutgoing = bLockOutgoing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetName
// ()
// Parameters:
// struct FString*                S                              (Parm, ZeroConstructor)

void AARSharedWorldPlayerController::SetName(struct FString* S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetName");

	AARSharedWorldPlayerController_SetName_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetMouseLocation
// ()
// Parameters:
// int*                           X                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Y                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::SetMouseLocation(int* X, int* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetMouseLocation");

	AARSharedWorldPlayerController_SetMouseLocation_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetMouseCursorWidget
// ()
// Parameters:
// TEnumAsByte<EMouseCursor>*     Cursor                         (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget**            CursorWidget                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AARSharedWorldPlayerController::SetMouseCursorWidget(TEnumAsByte<EMouseCursor>* Cursor, class UUserWidget** CursorWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetMouseCursorWidget");

	AARSharedWorldPlayerController_SetMouseCursorWidget_Params params;
	params.Cursor = Cursor;
	params.CursorWidget = CursorWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetHapticsByValue
// ()
// Parameters:
// float*                         Frequency                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Amplitude                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand*               Hand                           (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::SetHapticsByValue(float* Frequency, float* Amplitude, EControllerHand* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetHapticsByValue");

	AARSharedWorldPlayerController_SetHapticsByValue_Params params;
	params.Frequency = Frequency;
	params.Amplitude = Amplitude;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetDisableHaptics
// ()
// Parameters:
// bool*                          bNewDisabled                   (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::SetDisableHaptics(bool* bNewDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetDisableHaptics");

	AARSharedWorldPlayerController_SetDisableHaptics_Params params;
	params.bNewDisabled = bNewDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetControllerLightColor
// ()
// Parameters:
// struct FColor*                 Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::SetControllerLightColor(struct FColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetControllerLightColor");

	AARSharedWorldPlayerController_SetControllerLightColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetCinematicMode
// ()
// Parameters:
// bool*                          bInCinematicMode               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHidePlayer                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsHUD                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsMovement               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsTurning                (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::SetCinematicMode(bool* bInCinematicMode, bool* bHidePlayer, bool* bAffectsHUD, bool* bAffectsMovement, bool* bAffectsTurning)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetCinematicMode");

	AARSharedWorldPlayerController_SetCinematicMode_Params params;
	params.bInCinematicMode = bInCinematicMode;
	params.bHidePlayer = bHidePlayer;
	params.bAffectsHUD = bAffectsHUD;
	params.bAffectsMovement = bAffectsMovement;
	params.bAffectsTurning = bAffectsTurning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetAudioListenerOverride
// ()
// Parameters:
// class USceneComponent**        AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::SetAudioListenerOverride(class USceneComponent** AttachToComponent, struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetAudioListenerOverride");

	AARSharedWorldPlayerController_SetAudioListenerOverride_Params params;
	params.AttachToComponent = AttachToComponent;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SetAudioListenerAttenuationOverride
// ()
// Parameters:
// class USceneComponent**        AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                AttenuationLocationOVerride    (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::SetAudioListenerAttenuationOverride(class USceneComponent** AttachToComponent, struct FVector* AttenuationLocationOVerride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SetAudioListenerAttenuationOverride");

	AARSharedWorldPlayerController_SetAudioListenerAttenuationOverride_Params params;
	params.AttachToComponent = AttachToComponent;
	params.AttenuationLocationOVerride = AttenuationLocationOVerride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerViewSelf
// ()
// Parameters:
// struct FViewTargetTransitionParams* TransitionParams               (Parm)

void AARSharedWorldPlayerController::ServerViewSelf(struct FViewTargetTransitionParams* TransitionParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerViewSelf");

	AARSharedWorldPlayerController_ServerViewSelf_Params params;
	params.TransitionParams = TransitionParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerViewPrevPlayer
// ()

void AARSharedWorldPlayerController::ServerViewPrevPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerViewPrevPlayer");

	AARSharedWorldPlayerController_ServerViewPrevPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerViewNextPlayer
// ()

void AARSharedWorldPlayerController::ServerViewNextPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerViewNextPlayer");

	AARSharedWorldPlayerController_ServerViewNextPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerVerifyViewTarget
// ()

void AARSharedWorldPlayerController::ServerVerifyViewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerVerifyViewTarget");

	AARSharedWorldPlayerController_ServerVerifyViewTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerUpdateMultipleLevelsVisibility
// ()
// Parameters:
// TArray<struct FUpdateLevelVisibilityLevelInfo>* LevelVisibilities              (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AARSharedWorldPlayerController::ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo>* LevelVisibilities)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerUpdateMultipleLevelsVisibility");

	AARSharedWorldPlayerController_ServerUpdateMultipleLevelsVisibility_Params params;
	params.LevelVisibilities = LevelVisibilities;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerUpdateLevelVisibility
// ()
// Parameters:
// struct FUpdateLevelVisibilityLevelInfo* LevelVisibility                (ConstParm, Parm, ReferenceParm)

void AARSharedWorldPlayerController::ServerUpdateLevelVisibility(struct FUpdateLevelVisibilityLevelInfo* LevelVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerUpdateLevelVisibility");

	AARSharedWorldPlayerController_ServerUpdateLevelVisibility_Params params;
	params.LevelVisibility = LevelVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerUpdateCamera
// ()
// Parameters:
// struct FVector_NetQuantize*    CamLoc                         (Parm)
// int*                           CamPitchAndYaw                 (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ServerUpdateCamera(struct FVector_NetQuantize* CamLoc, int* CamPitchAndYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerUpdateCamera");

	AARSharedWorldPlayerController_ServerUpdateCamera_Params params;
	params.CamLoc = CamLoc;
	params.CamPitchAndYaw = CamPitchAndYaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerUnmutePlayer
// ()
// Parameters:
// struct FUniqueNetIdRepl*       PlayerId                       (Parm)

void AARSharedWorldPlayerController::ServerUnmutePlayer(struct FUniqueNetIdRepl* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerUnmutePlayer");

	AARSharedWorldPlayerController_ServerUnmutePlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerToggleAILogging
// ()

void AARSharedWorldPlayerController::ServerToggleAILogging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerToggleAILogging");

	AARSharedWorldPlayerController_ServerToggleAILogging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerShortTimeout
// ()

void AARSharedWorldPlayerController::ServerShortTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerShortTimeout");

	AARSharedWorldPlayerController_ServerShortTimeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerSetSpectatorWaiting
// ()
// Parameters:
// bool*                          bWaiting                       (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ServerSetSpectatorWaiting(bool* bWaiting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerSetSpectatorWaiting");

	AARSharedWorldPlayerController_ServerSetSpectatorWaiting_Params params;
	params.bWaiting = bWaiting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerSetSpectatorLocation
// ()
// Parameters:
// struct FVector*                NewLoc                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               NewRot                         (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ServerSetSpectatorLocation(struct FVector* NewLoc, struct FRotator* NewRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerSetSpectatorLocation");

	AARSharedWorldPlayerController_ServerSetSpectatorLocation_Params params;
	params.NewLoc = NewLoc;
	params.NewRot = NewRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerRestartPlayer
// ()

void AARSharedWorldPlayerController::ServerRestartPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerRestartPlayer");

	AARSharedWorldPlayerController_ServerRestartPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerPause
// ()

void AARSharedWorldPlayerController::ServerPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerPause");

	AARSharedWorldPlayerController_ServerPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerNotifyLoadedWorld
// ()
// Parameters:
// struct FName*                  WorldPackageName               (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ServerNotifyLoadedWorld(struct FName* WorldPackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerNotifyLoadedWorld");

	AARSharedWorldPlayerController_ServerNotifyLoadedWorld_Params params;
	params.WorldPackageName = WorldPackageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerMutePlayer
// ()
// Parameters:
// struct FUniqueNetIdRepl*       PlayerId                       (Parm)

void AARSharedWorldPlayerController::ServerMutePlayer(struct FUniqueNetIdRepl* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerMutePlayer");

	AARSharedWorldPlayerController_ServerMutePlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerExecRPC
// ()
// Parameters:
// struct FString*                Msg                            (Parm, ZeroConstructor)

void AARSharedWorldPlayerController::ServerExecRPC(struct FString* Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerExecRPC");

	AARSharedWorldPlayerController_ServerExecRPC_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerExec
// ()
// Parameters:
// struct FString*                Msg                            (Parm, ZeroConstructor)

void AARSharedWorldPlayerController::ServerExec(struct FString* Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerExec");

	AARSharedWorldPlayerController_ServerExec_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerCheckClientPossessionReliable
// ()

void AARSharedWorldPlayerController::ServerCheckClientPossessionReliable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerCheckClientPossessionReliable");

	AARSharedWorldPlayerController_ServerCheckClientPossessionReliable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerCheckClientPossession
// ()

void AARSharedWorldPlayerController::ServerCheckClientPossession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerCheckClientPossession");

	AARSharedWorldPlayerController_ServerCheckClientPossession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerChangeName
// ()
// Parameters:
// struct FString*                S                              (Parm, ZeroConstructor)

void AARSharedWorldPlayerController::ServerChangeName(struct FString* S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerChangeName");

	AARSharedWorldPlayerController_ServerChangeName_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerCamera
// ()
// Parameters:
// struct FName*                  NewMode                        (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ServerCamera(struct FName* NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerCamera");

	AARSharedWorldPlayerController_ServerCamera_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ServerAcknowledgePossession
// ()
// Parameters:
// class APawn**                  P                              (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ServerAcknowledgePossession(class APawn** P)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ServerAcknowledgePossession");

	AARSharedWorldPlayerController_ServerAcknowledgePossession_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.SendToConsole
// ()
// Parameters:
// struct FString*                Command                        (Parm, ZeroConstructor)

void AARSharedWorldPlayerController::SendToConsole(struct FString* Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.SendToConsole");

	AARSharedWorldPlayerController_SendToConsole_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.RestartLevel
// ()

void AARSharedWorldPlayerController::RestartLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.RestartLevel");

	AARSharedWorldPlayerController_RestartLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ResetControllerLightColor
// ()

void AARSharedWorldPlayerController::ResetControllerLightColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ResetControllerLightColor");

	AARSharedWorldPlayerController_ResetControllerLightColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ProjectWorldLocationToScreen
// ()
// Parameters:
// struct FVector*                WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool*                          bPlayerViewportRelative        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AARSharedWorldPlayerController::ProjectWorldLocationToScreen(struct FVector* WorldLocation, bool* bPlayerViewportRelative, struct FVector2D* ScreenLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ProjectWorldLocationToScreen");

	AARSharedWorldPlayerController_ProjectWorldLocationToScreen_Params params;
	params.WorldLocation = WorldLocation;
	params.bPlayerViewportRelative = bPlayerViewportRelative;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenLocation != nullptr)
		*ScreenLocation = params.ScreenLocation;

	return params.ReturnValue;
}


// Function Engine.PlayerController.PlayHapticEffect
// ()
// Parameters:
// class UHapticFeedbackEffect_Base** HapticEffect                   (Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand*               Hand                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLoop                          (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::PlayHapticEffect(class UHapticFeedbackEffect_Base** HapticEffect, EControllerHand* Hand, float* Scale, bool* bLoop)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.PlayHapticEffect");

	AARSharedWorldPlayerController_PlayHapticEffect_Params params;
	params.HapticEffect = HapticEffect;
	params.Hand = Hand;
	params.Scale = Scale;
	params.bLoop = bLoop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.PlayDynamicForceFeedback
// ()
// Parameters:
// float*                         Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsLeftLarge              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsLeftSmall              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsRightLarge             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsRightSmall             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDynamicForceFeedbackAction>* Action                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo*      LatentInfo                     (Parm)

void AARSharedWorldPlayerController::PlayDynamicForceFeedback(float* Intensity, float* Duration, bool* bAffectsLeftLarge, bool* bAffectsLeftSmall, bool* bAffectsRightLarge, bool* bAffectsRightSmall, TEnumAsByte<EDynamicForceFeedbackAction>* Action, struct FLatentActionInfo* LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.PlayDynamicForceFeedback");

	AARSharedWorldPlayerController_PlayDynamicForceFeedback_Params params;
	params.Intensity = Intensity;
	params.Duration = Duration;
	params.bAffectsLeftLarge = bAffectsLeftLarge;
	params.bAffectsLeftSmall = bAffectsLeftSmall;
	params.bAffectsRightLarge = bAffectsRightLarge;
	params.bAffectsRightSmall = bAffectsRightSmall;
	params.Action = Action;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.Pause
// ()

void AARSharedWorldPlayerController::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.Pause");

	AARSharedWorldPlayerController_Pause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.OnServerStartedVisualLogger
// ()
// Parameters:
// bool*                          bIsLogging                     (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::OnServerStartedVisualLogger(bool* bIsLogging)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.OnServerStartedVisualLogger");

	AARSharedWorldPlayerController_OnServerStartedVisualLogger_Params params;
	params.bIsLogging = bIsLogging;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.LocalTravel
// ()
// Parameters:
// struct FString*                URL                            (Parm, ZeroConstructor)

void AARSharedWorldPlayerController::LocalTravel(struct FString* URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.LocalTravel");

	AARSharedWorldPlayerController_LocalTravel_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.K2_ClientPlayForceFeedback
// ()
// Parameters:
// class UForceFeedbackEffect**   ForceFeedbackEffect            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLooping                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIgnoreTimeDilation            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPlayWhilePaused               (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::K2_ClientPlayForceFeedback(class UForceFeedbackEffect** ForceFeedbackEffect, struct FName* Tag, bool* bLooping, bool* bIgnoreTimeDilation, bool* bPlayWhilePaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.K2_ClientPlayForceFeedback");

	AARSharedWorldPlayerController_K2_ClientPlayForceFeedback_Params params;
	params.ForceFeedbackEffect = ForceFeedbackEffect;
	params.Tag = Tag;
	params.bLooping = bLooping;
	params.bIgnoreTimeDilation = bIgnoreTimeDilation;
	params.bPlayWhilePaused = bPlayWhilePaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.IsInputKeyDown
// ()
// Parameters:
// struct FKey*                   Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AARSharedWorldPlayerController::IsInputKeyDown(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.IsInputKeyDown");

	AARSharedWorldPlayerController_IsInputKeyDown_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetViewportSize
// ()
// Parameters:
// int                            SizeX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SizeY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::GetViewportSize(int* SizeX, int* SizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetViewportSize");

	AARSharedWorldPlayerController_GetViewportSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;
}


// Function Engine.PlayerController.GetSpectatorPawn
// ()
// Parameters:
// class ASpectatorPawn*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASpectatorPawn* AARSharedWorldPlayerController::GetSpectatorPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetSpectatorPawn");

	AARSharedWorldPlayerController_GetSpectatorPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetMousePosition
// ()
// Parameters:
// float                          LocationX                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AARSharedWorldPlayerController::GetMousePosition(float* LocationX, float* LocationY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetMousePosition");

	AARSharedWorldPlayerController_GetMousePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationX != nullptr)
		*LocationX = params.LocationX;
	if (LocationY != nullptr)
		*LocationY = params.LocationY;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetInputVectorKeyState
// ()
// Parameters:
// struct FKey*                   Key                            (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AARSharedWorldPlayerController::GetInputVectorKeyState(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetInputVectorKeyState");

	AARSharedWorldPlayerController_GetInputVectorKeyState_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetInputTouchState
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationX                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LocationY                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsCurrentlyPressed            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::GetInputTouchState(TEnumAsByte<ETouchIndex>* FingerIndex, float* LocationX, float* LocationY, bool* bIsCurrentlyPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetInputTouchState");

	AARSharedWorldPlayerController_GetInputTouchState_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationX != nullptr)
		*LocationX = params.LocationX;
	if (LocationY != nullptr)
		*LocationY = params.LocationY;
	if (bIsCurrentlyPressed != nullptr)
		*bIsCurrentlyPressed = params.bIsCurrentlyPressed;
}


// Function Engine.PlayerController.GetInputMouseDelta
// ()
// Parameters:
// float                          DeltaX                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DeltaY                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::GetInputMouseDelta(float* DeltaX, float* DeltaY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetInputMouseDelta");

	AARSharedWorldPlayerController_GetInputMouseDelta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeltaX != nullptr)
		*DeltaX = params.DeltaX;
	if (DeltaY != nullptr)
		*DeltaY = params.DeltaY;
}


// Function Engine.PlayerController.GetInputMotionState
// ()
// Parameters:
// struct FVector                 Tilt                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RotationRate                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Acceleration                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::GetInputMotionState(struct FVector* Tilt, struct FVector* RotationRate, struct FVector* Gravity, struct FVector* Acceleration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetInputMotionState");

	AARSharedWorldPlayerController_GetInputMotionState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tilt != nullptr)
		*Tilt = params.Tilt;
	if (RotationRate != nullptr)
		*RotationRate = params.RotationRate;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;
	if (Acceleration != nullptr)
		*Acceleration = params.Acceleration;
}


// Function Engine.PlayerController.GetInputKeyTimeDown
// ()
// Parameters:
// struct FKey*                   Key                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AARSharedWorldPlayerController::GetInputKeyTimeDown(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetInputKeyTimeDown");

	AARSharedWorldPlayerController_GetInputKeyTimeDown_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetInputAnalogStickState
// ()
// Parameters:
// TEnumAsByte<EControllerAnalogStick>* WhichStick                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          StickX                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          StickY                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::GetInputAnalogStickState(TEnumAsByte<EControllerAnalogStick>* WhichStick, float* StickX, float* StickY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetInputAnalogStickState");

	AARSharedWorldPlayerController_GetInputAnalogStickState_Params params;
	params.WhichStick = WhichStick;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StickX != nullptr)
		*StickX = params.StickX;
	if (StickY != nullptr)
		*StickY = params.StickY;
}


// Function Engine.PlayerController.GetInputAnalogKeyState
// ()
// Parameters:
// struct FKey*                   Key                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AARSharedWorldPlayerController::GetInputAnalogKeyState(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetInputAnalogKeyState");

	AARSharedWorldPlayerController_GetInputAnalogKeyState_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetHUD
// ()
// Parameters:
// class AHUD*                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AHUD* AARSharedWorldPlayerController::GetHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetHUD");

	AARSharedWorldPlayerController_GetHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetHitResultUnderFingerForObjects
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AARSharedWorldPlayerController::GetHitResultUnderFingerForObjects(TEnumAsByte<ETouchIndex>* FingerIndex, TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, bool* bTraceComplex, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetHitResultUnderFingerForObjects");

	AARSharedWorldPlayerController_GetHitResultUnderFingerForObjects_Params params;
	params.FingerIndex = FingerIndex;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetHitResultUnderFingerByChannel
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETraceTypeQuery>*  TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AARSharedWorldPlayerController::GetHitResultUnderFingerByChannel(TEnumAsByte<ETouchIndex>* FingerIndex, TEnumAsByte<ETraceTypeQuery>* TraceChannel, bool* bTraceComplex, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetHitResultUnderFingerByChannel");

	AARSharedWorldPlayerController_GetHitResultUnderFingerByChannel_Params params;
	params.FingerIndex = FingerIndex;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetHitResultUnderFinger
// ()
// Parameters:
// TEnumAsByte<ETouchIndex>*      FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionChannel>* TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AARSharedWorldPlayerController::GetHitResultUnderFinger(TEnumAsByte<ETouchIndex>* FingerIndex, TEnumAsByte<ECollisionChannel>* TraceChannel, bool* bTraceComplex, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetHitResultUnderFinger");

	AARSharedWorldPlayerController_GetHitResultUnderFinger_Params params;
	params.FingerIndex = FingerIndex;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetHitResultUnderCursorForObjects
// ()
// Parameters:
// TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AARSharedWorldPlayerController::GetHitResultUnderCursorForObjects(TArray<TEnumAsByte<EObjectTypeQuery>>* ObjectTypes, bool* bTraceComplex, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetHitResultUnderCursorForObjects");

	AARSharedWorldPlayerController_GetHitResultUnderCursorForObjects_Params params;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetHitResultUnderCursorByChannel
// ()
// Parameters:
// TEnumAsByte<ETraceTypeQuery>*  TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AARSharedWorldPlayerController::GetHitResultUnderCursorByChannel(TEnumAsByte<ETraceTypeQuery>* TraceChannel, bool* bTraceComplex, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetHitResultUnderCursorByChannel");

	AARSharedWorldPlayerController_GetHitResultUnderCursorByChannel_Params params;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetHitResultUnderCursor
// ()
// Parameters:
// TEnumAsByte<ECollisionChannel>* TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AARSharedWorldPlayerController::GetHitResultUnderCursor(TEnumAsByte<ECollisionChannel>* TraceChannel, bool* bTraceComplex, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetHitResultUnderCursor");

	AARSharedWorldPlayerController_GetHitResultUnderCursor_Params params;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitResult != nullptr)
		*HitResult = params.HitResult;

	return params.ReturnValue;
}


// Function Engine.PlayerController.GetFocalLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AARSharedWorldPlayerController::GetFocalLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.GetFocalLocation");

	AARSharedWorldPlayerController_GetFocalLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.FOV
// ()
// Parameters:
// float*                         NewFOV                         (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::FOV(float* NewFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.FOV");

	AARSharedWorldPlayerController_FOV_Params params;
	params.NewFOV = NewFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.EnableCheats
// ()

void AARSharedWorldPlayerController::EnableCheats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.EnableCheats");

	AARSharedWorldPlayerController_EnableCheats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.DeprojectScreenPositionToWorld
// ()
// Parameters:
// float*                         ScreenX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScreenY                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldDirection                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AARSharedWorldPlayerController::DeprojectScreenPositionToWorld(float* ScreenX, float* ScreenY, struct FVector* WorldLocation, struct FVector* WorldDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.DeprojectScreenPositionToWorld");

	AARSharedWorldPlayerController_DeprojectScreenPositionToWorld_Params params;
	params.ScreenX = ScreenX;
	params.ScreenY = ScreenY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
	if (WorldDirection != nullptr)
		*WorldDirection = params.WorldDirection;

	return params.ReturnValue;
}


// Function Engine.PlayerController.DeprojectMousePositionToWorld
// ()
// Parameters:
// struct FVector                 WorldLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldDirection                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AARSharedWorldPlayerController::DeprojectMousePositionToWorld(struct FVector* WorldLocation, struct FVector* WorldDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.DeprojectMousePositionToWorld");

	AARSharedWorldPlayerController_DeprojectMousePositionToWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
	if (WorldDirection != nullptr)
		*WorldDirection = params.WorldDirection;

	return params.ReturnValue;
}


// Function Engine.PlayerController.ConsoleKey
// ()
// Parameters:
// struct FKey*                   Key                            (Parm)

void AARSharedWorldPlayerController::ConsoleKey(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ConsoleKey");

	AARSharedWorldPlayerController_ConsoleKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientWasKicked
// ()
// Parameters:
// struct FText*                  KickReason                     (ConstParm, Parm, ReferenceParm)

void AARSharedWorldPlayerController::ClientWasKicked(struct FText* KickReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientWasKicked");

	AARSharedWorldPlayerController_ClientWasKicked_Params params;
	params.KickReason = KickReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientVoiceHandshakeComplete
// ()

void AARSharedWorldPlayerController::ClientVoiceHandshakeComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientVoiceHandshakeComplete");

	AARSharedWorldPlayerController_ClientVoiceHandshakeComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientUpdateMultipleLevelsStreamingStatus
// ()
// Parameters:
// TArray<struct FUpdateLevelStreamingLevelStatus>* LevelStatuses                  (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AARSharedWorldPlayerController::ClientUpdateMultipleLevelsStreamingStatus(TArray<struct FUpdateLevelStreamingLevelStatus>* LevelStatuses)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientUpdateMultipleLevelsStreamingStatus");

	AARSharedWorldPlayerController_ClientUpdateMultipleLevelsStreamingStatus_Params params;
	params.LevelStatuses = LevelStatuses;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientUpdateLevelStreamingStatus
// ()
// Parameters:
// struct FName*                  PackageName                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bNewShouldBeLoaded             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bNewShouldBeVisible            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bNewShouldBlockOnLoad          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LODIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientUpdateLevelStreamingStatus(struct FName* PackageName, bool* bNewShouldBeLoaded, bool* bNewShouldBeVisible, bool* bNewShouldBlockOnLoad, int* LODIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientUpdateLevelStreamingStatus");

	AARSharedWorldPlayerController_ClientUpdateLevelStreamingStatus_Params params;
	params.PackageName = PackageName;
	params.bNewShouldBeLoaded = bNewShouldBeLoaded;
	params.bNewShouldBeVisible = bNewShouldBeVisible;
	params.bNewShouldBlockOnLoad = bNewShouldBlockOnLoad;
	params.LODIndex = LODIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientUnmutePlayer
// ()
// Parameters:
// struct FUniqueNetIdRepl*       PlayerId                       (Parm)

void AARSharedWorldPlayerController::ClientUnmutePlayer(struct FUniqueNetIdRepl* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientUnmutePlayer");

	AARSharedWorldPlayerController_ClientUnmutePlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientTravelInternal
// ()
// Parameters:
// struct FString*                URL                            (Parm, ZeroConstructor)
// TEnumAsByte<ETravelType>*      TravelType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSeamless                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid*                  MapPackageGuid                 (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientTravelInternal(struct FString* URL, TEnumAsByte<ETravelType>* TravelType, bool* bSeamless, struct FGuid* MapPackageGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientTravelInternal");

	AARSharedWorldPlayerController_ClientTravelInternal_Params params;
	params.URL = URL;
	params.TravelType = TravelType;
	params.bSeamless = bSeamless;
	params.MapPackageGuid = MapPackageGuid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientTravel
// ()
// Parameters:
// struct FString*                URL                            (Parm, ZeroConstructor)
// TEnumAsByte<ETravelType>*      TravelType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSeamless                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid*                  MapPackageGuid                 (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientTravel(struct FString* URL, TEnumAsByte<ETravelType>* TravelType, bool* bSeamless, struct FGuid* MapPackageGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientTravel");

	AARSharedWorldPlayerController_ClientTravel_Params params;
	params.URL = URL;
	params.TravelType = TravelType;
	params.bSeamless = bSeamless;
	params.MapPackageGuid = MapPackageGuid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientTeamMessage
// ()
// Parameters:
// class APlayerState**           SenderPlayerState              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                S                              (Parm, ZeroConstructor)
// struct FName*                  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MsgLifeTime                    (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientTeamMessage(class APlayerState** SenderPlayerState, struct FString* S, struct FName* Type, float* MsgLifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientTeamMessage");

	AARSharedWorldPlayerController_ClientTeamMessage_Params params;
	params.SenderPlayerState = SenderPlayerState;
	params.S = S;
	params.Type = Type;
	params.MsgLifeTime = MsgLifeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientStopForceFeedback
// ()
// Parameters:
// class UForceFeedbackEffect**   ForceFeedbackEffect            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientStopForceFeedback(class UForceFeedbackEffect** ForceFeedbackEffect, struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientStopForceFeedback");

	AARSharedWorldPlayerController_ClientStopForceFeedback_Params params;
	params.ForceFeedbackEffect = ForceFeedbackEffect;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientStopCameraShake
// ()
// Parameters:
// class UClass**                 Shake                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bImmediately                   (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientStopCameraShake(class UClass** Shake, bool* bImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientStopCameraShake");

	AARSharedWorldPlayerController_ClientStopCameraShake_Params params;
	params.Shake = Shake;
	params.bImmediately = bImmediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientStopCameraAnim
// ()
// Parameters:
// class UCameraAnim**            AnimToStop                     (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientStopCameraAnim(class UCameraAnim** AnimToStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientStopCameraAnim");

	AARSharedWorldPlayerController_ClientStopCameraAnim_Params params;
	params.AnimToStop = AnimToStop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientStartOnlineSession
// ()

void AARSharedWorldPlayerController::ClientStartOnlineSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientStartOnlineSession");

	AARSharedWorldPlayerController_ClientStartOnlineSession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSpawnCameraLensEffect
// ()
// Parameters:
// class UClass**                 LensEffectEmitterClass         (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientSpawnCameraLensEffect(class UClass** LensEffectEmitterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSpawnCameraLensEffect");

	AARSharedWorldPlayerController_ClientSpawnCameraLensEffect_Params params;
	params.LensEffectEmitterClass = LensEffectEmitterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetViewTarget
// ()
// Parameters:
// class AActor**                 A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FViewTargetTransitionParams* TransitionParams               (Parm)

void AARSharedWorldPlayerController::ClientSetViewTarget(class AActor** A, struct FViewTargetTransitionParams* TransitionParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetViewTarget");

	AARSharedWorldPlayerController_ClientSetViewTarget_Params params;
	params.A = A;
	params.TransitionParams = TransitionParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetSpectatorWaiting
// ()
// Parameters:
// bool*                          bWaiting                       (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientSetSpectatorWaiting(bool* bWaiting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetSpectatorWaiting");

	AARSharedWorldPlayerController_ClientSetSpectatorWaiting_Params params;
	params.bWaiting = bWaiting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetHUD
// ()
// Parameters:
// class UClass**                 NewHUDClass                    (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientSetHUD(class UClass** NewHUDClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetHUD");

	AARSharedWorldPlayerController_ClientSetHUD_Params params;
	params.NewHUDClass = NewHUDClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetForceMipLevelsToBeResident
// ()
// Parameters:
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForceDuration                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CinematicTextureGroups         (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientSetForceMipLevelsToBeResident(class UMaterialInterface** Material, float* ForceDuration, int* CinematicTextureGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetForceMipLevelsToBeResident");

	AARSharedWorldPlayerController_ClientSetForceMipLevelsToBeResident_Params params;
	params.Material = Material;
	params.ForceDuration = ForceDuration;
	params.CinematicTextureGroups = CinematicTextureGroups;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetCinematicMode
// ()
// Parameters:
// bool*                          bInCinematicMode               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsMovement               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsTurning                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAffectsHUD                    (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientSetCinematicMode(bool* bInCinematicMode, bool* bAffectsMovement, bool* bAffectsTurning, bool* bAffectsHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetCinematicMode");

	AARSharedWorldPlayerController_ClientSetCinematicMode_Params params;
	params.bInCinematicMode = bInCinematicMode;
	params.bAffectsMovement = bAffectsMovement;
	params.bAffectsTurning = bAffectsTurning;
	params.bAffectsHUD = bAffectsHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetCameraMode
// ()
// Parameters:
// struct FName*                  NewCamMode                     (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientSetCameraMode(struct FName* NewCamMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetCameraMode");

	AARSharedWorldPlayerController_ClientSetCameraMode_Params params;
	params.NewCamMode = NewCamMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetCameraFade
// ()
// Parameters:
// bool*                          bEnableFading                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor*                 FadeColor                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              FadeAlpha                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFadeAudio                     (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientSetCameraFade(bool* bEnableFading, struct FColor* FadeColor, struct FVector2D* FadeAlpha, float* FadeTime, bool* bFadeAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetCameraFade");

	AARSharedWorldPlayerController_ClientSetCameraFade_Params params;
	params.bEnableFading = bEnableFading;
	params.FadeColor = FadeColor;
	params.FadeAlpha = FadeAlpha;
	params.FadeTime = FadeTime;
	params.bFadeAudio = bFadeAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientSetBlockOnAsyncLoading
// ()

void AARSharedWorldPlayerController::ClientSetBlockOnAsyncLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientSetBlockOnAsyncLoading");

	AARSharedWorldPlayerController_ClientSetBlockOnAsyncLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientReturnToMainMenuWithTextReason
// ()
// Parameters:
// struct FText*                  ReturnReason                   (ConstParm, Parm, ReferenceParm)

void AARSharedWorldPlayerController::ClientReturnToMainMenuWithTextReason(struct FText* ReturnReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientReturnToMainMenuWithTextReason");

	AARSharedWorldPlayerController_ClientReturnToMainMenuWithTextReason_Params params;
	params.ReturnReason = ReturnReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientReturnToMainMenu
// ()
// Parameters:
// struct FString*                ReturnReason                   (Parm, ZeroConstructor)

void AARSharedWorldPlayerController::ClientReturnToMainMenu(struct FString* ReturnReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientReturnToMainMenu");

	AARSharedWorldPlayerController_ClientReturnToMainMenu_Params params;
	params.ReturnReason = ReturnReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientRetryClientRestart
// ()
// Parameters:
// class APawn**                  NewPawn                        (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientRetryClientRestart(class APawn** NewPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientRetryClientRestart");

	AARSharedWorldPlayerController_ClientRetryClientRestart_Params params;
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientRestart
// ()
// Parameters:
// class APawn**                  NewPawn                        (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientRestart(class APawn** NewPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientRestart");

	AARSharedWorldPlayerController_ClientRestart_Params params;
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientReset
// ()

void AARSharedWorldPlayerController::ClientReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientReset");

	AARSharedWorldPlayerController_ClientReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientRepObjRef
// ()
// Parameters:
// class UObject**                Object                         (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientRepObjRef(class UObject** Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientRepObjRef");

	AARSharedWorldPlayerController_ClientRepObjRef_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientReceiveLocalizedMessage
// ()
// Parameters:
// class UClass**                 Message                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Switch                         (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState**           RelatedPlayerState_2           (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState**           RelatedPlayerState_3           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                OptionalObject                 (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientReceiveLocalizedMessage(class UClass** Message, int* Switch, class APlayerState** RelatedPlayerState_2, class APlayerState** RelatedPlayerState_3, class UObject** OptionalObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientReceiveLocalizedMessage");

	AARSharedWorldPlayerController_ClientReceiveLocalizedMessage_Params params;
	params.Message = Message;
	params.Switch = Switch;
	params.RelatedPlayerState_2 = RelatedPlayerState_2;
	params.RelatedPlayerState_3 = RelatedPlayerState_3;
	params.OptionalObject = OptionalObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientPrestreamTextures
// ()
// Parameters:
// class AActor**                 ForcedActor                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForceDuration                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEnableStreaming               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CinematicTextureGroups         (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientPrestreamTextures(class AActor** ForcedActor, float* ForceDuration, bool* bEnableStreaming, int* CinematicTextureGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientPrestreamTextures");

	AARSharedWorldPlayerController_ClientPrestreamTextures_Params params;
	params.ForcedActor = ForcedActor;
	params.ForceDuration = ForceDuration;
	params.bEnableStreaming = bEnableStreaming;
	params.CinematicTextureGroups = CinematicTextureGroups;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientPrepareMapChange
// ()
// Parameters:
// struct FName*                  LevelName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFirst                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLast                          (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientPrepareMapChange(struct FName* LevelName, bool* bFirst, bool* bLast)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientPrepareMapChange");

	AARSharedWorldPlayerController_ClientPrepareMapChange_Params params;
	params.LevelName = LevelName;
	params.bFirst = bFirst;
	params.bLast = bLast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientPlaySoundAtLocation
// ()
// Parameters:
// class USoundBase**             Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientPlaySoundAtLocation(class USoundBase** Sound, struct FVector* Location, float* VolumeMultiplier, float* PitchMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientPlaySoundAtLocation");

	AARSharedWorldPlayerController_ClientPlaySoundAtLocation_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientPlaySound
// ()
// Parameters:
// class USoundBase**             Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientPlaySound(class USoundBase** Sound, float* VolumeMultiplier, float* PitchMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientPlaySound");

	AARSharedWorldPlayerController_ClientPlaySound_Params params;
	params.Sound = Sound;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientPlayForceFeedback_Internal
// ()
// Parameters:
// class UForceFeedbackEffect**   ForceFeedbackEffect            (Parm, ZeroConstructor, IsPlainOldData)
// struct FForceFeedbackParameters* Params                         (Parm)

void AARSharedWorldPlayerController::ClientPlayForceFeedback_Internal(class UForceFeedbackEffect** ForceFeedbackEffect, struct FForceFeedbackParameters* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientPlayForceFeedback_Internal");

	AARSharedWorldPlayerController_ClientPlayForceFeedback_Internal_Params params;
	params.ForceFeedbackEffect = ForceFeedbackEffect;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientPlayCameraShake
// ()
// Parameters:
// class UClass**                 Shake                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECameraAnimPlaySpace>* PlaySpace                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               UserPlaySpaceRot               (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientPlayCameraShake(class UClass** Shake, float* Scale, TEnumAsByte<ECameraAnimPlaySpace>* PlaySpace, struct FRotator* UserPlaySpaceRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientPlayCameraShake");

	AARSharedWorldPlayerController_ClientPlayCameraShake_Params params;
	params.Shake = Shake;
	params.Scale = Scale;
	params.PlaySpace = PlaySpace;
	params.UserPlaySpaceRot = UserPlaySpaceRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientPlayCameraAnim
// ()
// Parameters:
// class UCameraAnim**            AnimToPlay                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendInTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendOutTime                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRandomStartTime               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECameraAnimPlaySpace>* Space                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               CustomPlaySpace                (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientPlayCameraAnim(class UCameraAnim** AnimToPlay, float* Scale, float* Rate, float* BlendInTime, float* BlendOutTime, bool* bLoop, bool* bRandomStartTime, TEnumAsByte<ECameraAnimPlaySpace>* Space, struct FRotator* CustomPlaySpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientPlayCameraAnim");

	AARSharedWorldPlayerController_ClientPlayCameraAnim_Params params;
	params.AnimToPlay = AnimToPlay;
	params.Scale = Scale;
	params.Rate = Rate;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.bLoop = bLoop;
	params.bRandomStartTime = bRandomStartTime;
	params.Space = Space;
	params.CustomPlaySpace = CustomPlaySpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientMutePlayer
// ()
// Parameters:
// struct FUniqueNetIdRepl*       PlayerId                       (Parm)

void AARSharedWorldPlayerController::ClientMutePlayer(struct FUniqueNetIdRepl* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientMutePlayer");

	AARSharedWorldPlayerController_ClientMutePlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientMessage
// ()
// Parameters:
// struct FString*                S                              (Parm, ZeroConstructor)
// struct FName*                  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MsgLifeTime                    (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientMessage(struct FString* S, struct FName* Type, float* MsgLifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientMessage");

	AARSharedWorldPlayerController_ClientMessage_Params params;
	params.S = S;
	params.Type = Type;
	params.MsgLifeTime = MsgLifeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientIgnoreMoveInput
// ()
// Parameters:
// bool*                          bIgnore                        (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientIgnoreMoveInput(bool* bIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientIgnoreMoveInput");

	AARSharedWorldPlayerController_ClientIgnoreMoveInput_Params params;
	params.bIgnore = bIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientIgnoreLookInput
// ()
// Parameters:
// bool*                          bIgnore                        (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientIgnoreLookInput(bool* bIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientIgnoreLookInput");

	AARSharedWorldPlayerController_ClientIgnoreLookInput_Params params;
	params.bIgnore = bIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientGotoState
// ()
// Parameters:
// struct FName*                  NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientGotoState(struct FName* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientGotoState");

	AARSharedWorldPlayerController_ClientGotoState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientGameEnded
// ()
// Parameters:
// class AActor**                 EndGameFocus                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsWinner                      (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientGameEnded(class AActor** EndGameFocus, bool* bIsWinner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientGameEnded");

	AARSharedWorldPlayerController_ClientGameEnded_Params params;
	params.EndGameFocus = EndGameFocus;
	params.bIsWinner = bIsWinner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientForceGarbageCollection
// ()

void AARSharedWorldPlayerController::ClientForceGarbageCollection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientForceGarbageCollection");

	AARSharedWorldPlayerController_ClientForceGarbageCollection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientFlushLevelStreaming
// ()

void AARSharedWorldPlayerController::ClientFlushLevelStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientFlushLevelStreaming");

	AARSharedWorldPlayerController_ClientFlushLevelStreaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientEndOnlineSession
// ()

void AARSharedWorldPlayerController::ClientEndOnlineSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientEndOnlineSession");

	AARSharedWorldPlayerController_ClientEndOnlineSession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientEnableNetworkVoice
// ()
// Parameters:
// bool*                          bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientEnableNetworkVoice(bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientEnableNetworkVoice");

	AARSharedWorldPlayerController_ClientEnableNetworkVoice_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientCommitMapChange
// ()

void AARSharedWorldPlayerController::ClientCommitMapChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientCommitMapChange");

	AARSharedWorldPlayerController_ClientCommitMapChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientClearCameraLensEffects
// ()

void AARSharedWorldPlayerController::ClientClearCameraLensEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientClearCameraLensEffects");

	AARSharedWorldPlayerController_ClientClearCameraLensEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientCapBandwidth
// ()
// Parameters:
// int*                           Cap                            (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientCapBandwidth(int* Cap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientCapBandwidth");

	AARSharedWorldPlayerController_ClientCapBandwidth_Params params;
	params.Cap = Cap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientCancelPendingMapChange
// ()

void AARSharedWorldPlayerController::ClientCancelPendingMapChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientCancelPendingMapChange");

	AARSharedWorldPlayerController_ClientCancelPendingMapChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClientAddTextureStreamingLoc
// ()
// Parameters:
// struct FVector*                InLoc                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOverrideLocation              (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ClientAddTextureStreamingLoc(struct FVector* InLoc, float* Duration, bool* bOverrideLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClientAddTextureStreamingLoc");

	AARSharedWorldPlayerController_ClientAddTextureStreamingLoc_Params params;
	params.InLoc = InLoc;
	params.Duration = Duration;
	params.bOverrideLocation = bOverrideLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClearAudioListenerOverride
// ()

void AARSharedWorldPlayerController::ClearAudioListenerOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClearAudioListenerOverride");

	AARSharedWorldPlayerController_ClearAudioListenerOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ClearAudioListenerAttenuationOverride
// ()

void AARSharedWorldPlayerController::ClearAudioListenerAttenuationOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ClearAudioListenerAttenuationOverride");

	AARSharedWorldPlayerController_ClearAudioListenerAttenuationOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.CanRestartPlayer
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AARSharedWorldPlayerController::CanRestartPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.CanRestartPlayer");

	AARSharedWorldPlayerController_CanRestartPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PlayerController.Camera
// ()
// Parameters:
// struct FName*                  NewMode                        (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::Camera(struct FName* NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.Camera");

	AARSharedWorldPlayerController_Camera_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.AddYawInput
// ()
// Parameters:
// float*                         Val                            (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::AddYawInput(float* Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.AddYawInput");

	AARSharedWorldPlayerController_AddYawInput_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.AddRollInput
// ()
// Parameters:
// float*                         Val                            (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::AddRollInput(float* Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.AddRollInput");

	AARSharedWorldPlayerController_AddRollInput_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.AddPitchInput
// ()
// Parameters:
// float*                         Val                            (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::AddPitchInput(float* Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.AddPitchInput");

	AARSharedWorldPlayerController_AddPitchInput_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PlayerController.ActivateTouchInterface
// ()
// Parameters:
// class UTouchInterface**        NewTouchInterface              (Parm, ZeroConstructor, IsPlainOldData)

void AARSharedWorldPlayerController::ActivateTouchInterface(class UTouchInterface** NewTouchInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PlayerController.ActivateTouchInterface");

	AARSharedWorldPlayerController_ActivateTouchInterface_Params params;
	params.NewTouchInterface = NewTouchInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
// ()
// Parameters:
// class UAREnvironmentCaptureProbe** InCaptureProbe                 (Parm, ZeroConstructor, IsPlainOldData)

void AARSkyLight::SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe** InCaptureProbe)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe");

	AARSkyLight_SetEnvironmentCaptureProbe_Params params;
	params.InCaptureProbe = InCaptureProbe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARTrackedGeometry.IsTracked
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UARTrackedGeometry::IsTracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.IsTracked");

	UARTrackedGeometry_IsTracked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
// ()
// Parameters:
// class UMRMeshComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMRMeshComponent* UARTrackedGeometry::GetUnderlyingMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh");

	UARTrackedGeometry_GetUnderlyingMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
// ()
// Parameters:
// EARTrackingState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EARTrackingState UARTrackedGeometry::GetTrackingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetTrackingState");

	UARTrackedGeometry_GetTrackingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
// ()
// Parameters:
// EARObjectClassification        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EARObjectClassification UARTrackedGeometry::GetObjectClassification()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetObjectClassification");

	UARTrackedGeometry_GetObjectClassification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
// ()
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UARTrackedGeometry::GetLocalToWorldTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform");

	UARTrackedGeometry_GetLocalToWorldTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
// ()
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UARTrackedGeometry::GetLocalToTrackingTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform");

	UARTrackedGeometry_GetLocalToTrackingTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UARTrackedGeometry::GetLastUpdateTimestamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp");

	UARTrackedGeometry_GetLastUpdateTimestamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UARTrackedGeometry::GetLastUpdateFrameNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber");

	UARTrackedGeometry_GetLastUpdateFrameNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetDebugName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UARTrackedGeometry::GetDebugName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetDebugName");

	UARTrackedGeometry_GetDebugName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
// ()
// Parameters:
// class UARPlaneGeometry*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UARPlaneGeometry* UARPlaneGeometry::GetSubsumedBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy");

	UARPlaneGeometry_GetSubsumedBy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetOrientation
// ()
// Parameters:
// EARPlaneOrientation            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EARPlaneOrientation UARPlaneGeometry::GetOrientation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetOrientation");

	UARPlaneGeometry_GetOrientation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetExtent
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UARPlaneGeometry::GetExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetExtent");

	UARPlaneGeometry_GetExtent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetCenter
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UARPlaneGeometry::GetCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetCenter");

	UARPlaneGeometry_GetCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
// ()
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UARPlaneGeometry::GetBoundaryPolygonInLocalSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace");

	UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.IsTracked
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UARTrackedPoint::IsTracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.IsTracked");

	UARTrackedPoint_IsTracked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
// ()
// Parameters:
// class UMRMeshComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMRMeshComponent* UARTrackedPoint::GetUnderlyingMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh");

	UARTrackedPoint_GetUnderlyingMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
// ()
// Parameters:
// EARTrackingState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EARTrackingState UARTrackedPoint::GetTrackingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetTrackingState");

	UARTrackedPoint_GetTrackingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
// ()
// Parameters:
// EARObjectClassification        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EARObjectClassification UARTrackedPoint::GetObjectClassification()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetObjectClassification");

	UARTrackedPoint_GetObjectClassification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
// ()
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UARTrackedPoint::GetLocalToWorldTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform");

	UARTrackedPoint_GetLocalToWorldTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
// ()
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UARTrackedPoint::GetLocalToTrackingTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform");

	UARTrackedPoint_GetLocalToTrackingTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UARTrackedPoint::GetLastUpdateTimestamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp");

	UARTrackedPoint_GetLastUpdateTimestamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UARTrackedPoint::GetLastUpdateFrameNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber");

	UARTrackedPoint_GetLastUpdateFrameNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetDebugName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UARTrackedPoint::GetDebugName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetDebugName");

	UARTrackedPoint_GetDebugName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedImage.GetEstimateSize
// ()
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UARTrackedImage::GetEstimateSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetEstimateSize");

	UARTrackedImage_GetEstimateSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedImage.GetDetectedImage
// ()
// Parameters:
// class UARCandidateImage*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UARCandidateImage* UARTrackedImage::GetDetectedImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetDetectedImage");

	UARTrackedImage_GetDetectedImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
// ()
// Parameters:
// EAREye*                        Eye                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UARFaceGeometry::GetWorldSpaceEyeTransform(EAREye* Eye)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform");

	UARFaceGeometry_GetWorldSpaceEyeTransform_Params params;
	params.Eye = Eye;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
// ()
// Parameters:
// EAREye*                        Eye                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FTransform UARFaceGeometry::GetLocalSpaceEyeTransform(EAREye* Eye)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform");

	UARFaceGeometry_GetLocalSpaceEyeTransform_Params params;
	params.Eye = Eye;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
// ()
// Parameters:
// EARFaceBlendShape*             BlendShape                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UARFaceGeometry::GetBlendShapeValue(EARFaceBlendShape* BlendShape)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue");

	UARFaceGeometry_GetBlendShapeValue_Params params;
	params.BlendShape = BlendShape;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetBlendShapes
// ()
// Parameters:
// TMap<EARFaceBlendShape, float> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<EARFaceBlendShape, float> UARFaceGeometry::GetBlendShapes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapes");

	UARFaceGeometry_GetBlendShapes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UAREnvironmentCaptureProbe::GetExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent");

	UAREnvironmentCaptureProbe_GetExtent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
// ()
// Parameters:
// class UAREnvironmentCaptureProbeTexture* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture");

	UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedObject.GetDetectedObject
// ()
// Parameters:
// class UARCandidateObject*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UARCandidateObject* UARTrackedObject::GetDetectedObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedObject.GetDetectedObject");

	UARTrackedObject_GetDetectedObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.IsTracked
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UARTrackedPose::IsTracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.IsTracked");

	UARTrackedPose_IsTracked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
// ()
// Parameters:
// class UMRMeshComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMRMeshComponent* UARTrackedPose::GetUnderlyingMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh");

	UARTrackedPose_GetUnderlyingMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
// ()
// Parameters:
// EARTrackingState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EARTrackingState UARTrackedPose::GetTrackingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetTrackingState");

	UARTrackedPose_GetTrackingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
// ()
// Parameters:
// EARObjectClassification        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EARObjectClassification UARTrackedPose::GetObjectClassification()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetObjectClassification");

	UARTrackedPose_GetObjectClassification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
// ()
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UARTrackedPose::GetLocalToWorldTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform");

	UARTrackedPose_GetLocalToWorldTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
// ()
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UARTrackedPose::GetLocalToTrackingTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform");

	UARTrackedPose_GetLocalToTrackingTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UARTrackedPose::GetLastUpdateTimestamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp");

	UARTrackedPose_GetLastUpdateTimestamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UARTrackedPose::GetLastUpdateFrameNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber");

	UARTrackedPose_GetLastUpdateFrameNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetDebugName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UARTrackedPose::GetDebugName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetDebugName");

	UARTrackedPose_GetDebugName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UARCandidateImage::GetPhysicalWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalWidth");

	UARCandidateImage_GetPhysicalWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UARCandidateImage::GetPhysicalHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalHeight");

	UARCandidateImage_GetPhysicalHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetOrientation
// ()
// Parameters:
// EARCandidateImageOrientation   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EARCandidateImageOrientation UARCandidateImage::GetOrientation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetOrientation");

	UARCandidateImage_GetOrientation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetFriendlyName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UARCandidateImage::GetFriendlyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetFriendlyName");

	UARCandidateImage_GetFriendlyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetCandidateTexture
// ()
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UARCandidateImage::GetCandidateTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetCandidateTexture");

	UARCandidateImage_GetCandidateTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateObject.SetFriendlyName
// ()
// Parameters:
// struct FString*                NewName                        (Parm, ZeroConstructor)

void UARCandidateObject::SetFriendlyName(struct FString* NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetFriendlyName");

	UARCandidateObject_SetFriendlyName_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
// ()
// Parameters:
// TArray<unsigned char>*         InCandidateObject              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UARCandidateObject::SetCandidateObjectData(TArray<unsigned char>* InCandidateObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetCandidateObjectData");

	UARCandidateObject_SetCandidateObjectData_Params params;
	params.InCandidateObject = InCandidateObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARCandidateObject.SetBoundingBox
// ()
// Parameters:
// struct FBox*                   InBoundingBox                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UARCandidateObject::SetBoundingBox(struct FBox* InBoundingBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetBoundingBox");

	UARCandidateObject_SetBoundingBox_Params params;
	params.InBoundingBox = InBoundingBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARCandidateObject.GetFriendlyName
// ()
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UARCandidateObject::GetFriendlyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetFriendlyName");

	UARCandidateObject_GetFriendlyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
// ()
// Parameters:
// TArray<unsigned char>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<unsigned char> UARCandidateObject::GetCandidateObjectData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetCandidateObjectData");

	UARCandidateObject_GetCandidateObjectData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateObject.GetBoundingBox
// ()
// Parameters:
// struct FBox                    ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FBox UARCandidateObject::GetBoundingBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetBoundingBox");

	UARCandidateObject_GetBoundingBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

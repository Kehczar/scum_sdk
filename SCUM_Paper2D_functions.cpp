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

// Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
// ()
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaperFlipbook::IsValidKeyFrameIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex");

	UPaperFlipbook_IsValidKeyFrameIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetTotalDuration
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaperFlipbook::GetTotalDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetTotalDuration");

	UPaperFlipbook_GetTotalDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetSpriteAtTime
// ()
// Parameters:
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bClampToEnds                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPaperSprite*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPaperSprite* UPaperFlipbook::GetSpriteAtTime(float* Time, bool* bClampToEnds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtTime");

	UPaperFlipbook_GetSpriteAtTime_Params params;
	params.Time = Time;
	params.bClampToEnds = bClampToEnds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetSpriteAtFrame
// ()
// Parameters:
// int*                           FrameIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPaperSprite*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPaperSprite* UPaperFlipbook::GetSpriteAtFrame(int* FrameIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtFrame");

	UPaperFlipbook_GetSpriteAtFrame_Params params;
	params.FrameIndex = FrameIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetNumKeyFrames
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPaperFlipbook::GetNumKeyFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumKeyFrames");

	UPaperFlipbook_GetNumKeyFrames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetNumFrames
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPaperFlipbook::GetNumFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumFrames");

	UPaperFlipbook_GetNumFrames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
// ()
// Parameters:
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bClampToEnds                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPaperFlipbook::GetKeyFrameIndexAtTime(float* Time, bool* bClampToEnds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime");

	UPaperFlipbook_GetKeyFrameIndexAtTime_Params params;
	params.Time = Time;
	params.bClampToEnds = bClampToEnds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.Stop
// ()

void UPaperFlipbookComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Stop");

	UPaperFlipbookComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetSpriteColor
// ()
// Parameters:
// struct FLinearColor*           NewColor                       (Parm, ZeroConstructor, IsPlainOldData)

void UPaperFlipbookComponent::SetSpriteColor(struct FLinearColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetSpriteColor");

	UPaperFlipbookComponent_SetSpriteColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetPlayRate
// ()
// Parameters:
// float*                         NewRate                        (Parm, ZeroConstructor, IsPlainOldData)

void UPaperFlipbookComponent::SetPlayRate(float* NewRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlayRate");

	UPaperFlipbookComponent_SetPlayRate_Params params;
	params.NewRate = NewRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
// ()
// Parameters:
// int*                           NewFramePosition               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFireEvents                    (Parm, ZeroConstructor, IsPlainOldData)

void UPaperFlipbookComponent::SetPlaybackPositionInFrames(int* NewFramePosition, bool* bFireEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames");

	UPaperFlipbookComponent_SetPlaybackPositionInFrames_Params params;
	params.NewFramePosition = NewFramePosition;
	params.bFireEvents = bFireEvents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
// ()
// Parameters:
// float*                         NewPosition                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFireEvents                    (Parm, ZeroConstructor, IsPlainOldData)

void UPaperFlipbookComponent::SetPlaybackPosition(float* NewPosition, bool* bFireEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition");

	UPaperFlipbookComponent_SetPlaybackPosition_Params params;
	params.NewPosition = NewPosition;
	params.bFireEvents = bFireEvents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetNewTime
// ()
// Parameters:
// float*                         NewTime                        (Parm, ZeroConstructor, IsPlainOldData)

void UPaperFlipbookComponent::SetNewTime(float* NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetNewTime");

	UPaperFlipbookComponent_SetNewTime_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetLooping
// ()
// Parameters:
// bool*                          bNewLooping                    (Parm, ZeroConstructor, IsPlainOldData)

void UPaperFlipbookComponent::SetLooping(bool* bNewLooping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetLooping");

	UPaperFlipbookComponent_SetLooping_Params params;
	params.bNewLooping = bNewLooping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetFlipbook
// ()
// Parameters:
// class UPaperFlipbook**         NewFlipbook                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaperFlipbookComponent::SetFlipbook(class UPaperFlipbook** NewFlipbook)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetFlipbook");

	UPaperFlipbookComponent_SetFlipbook_Params params;
	params.NewFlipbook = NewFlipbook;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
// ()

void UPaperFlipbookComponent::ReverseFromEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.ReverseFromEnd");

	UPaperFlipbookComponent_ReverseFromEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.Reverse
// ()

void UPaperFlipbookComponent::Reverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Reverse");

	UPaperFlipbookComponent_Reverse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.PlayFromStart
// ()

void UPaperFlipbookComponent::PlayFromStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.PlayFromStart");

	UPaperFlipbookComponent_PlayFromStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.Play
// ()

void UPaperFlipbookComponent::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Play");

	UPaperFlipbookComponent_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
// ()
// Parameters:
// class UPaperFlipbook**         OldFlipbook                    (Parm, ZeroConstructor, IsPlainOldData)

void UPaperFlipbookComponent::OnRep_SourceFlipbook(class UPaperFlipbook** OldFlipbook)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook");

	UPaperFlipbookComponent_OnRep_SourceFlipbook_Params params;
	params.OldFlipbook = OldFlipbook;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.IsReversing
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaperFlipbookComponent::IsReversing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsReversing");

	UPaperFlipbookComponent_IsReversing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.IsPlaying
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaperFlipbookComponent::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsPlaying");

	UPaperFlipbookComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.IsLooping
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaperFlipbookComponent::IsLooping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsLooping");

	UPaperFlipbookComponent_IsLooping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetPlayRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaperFlipbookComponent::GetPlayRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlayRate");

	UPaperFlipbookComponent_GetPlayRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPaperFlipbookComponent::GetPlaybackPositionInFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames");

	UPaperFlipbookComponent_GetPlaybackPositionInFrames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaperFlipbookComponent::GetPlaybackPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition");

	UPaperFlipbookComponent_GetPlaybackPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPaperFlipbookComponent::GetFlipbookLengthInFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames");

	UPaperFlipbookComponent_GetFlipbookLengthInFrames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaperFlipbookComponent::GetFlipbookLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLength");

	UPaperFlipbookComponent_GetFlipbookLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaperFlipbookComponent::GetFlipbookFramerate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate");

	UPaperFlipbookComponent_GetFlipbookFramerate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbook
// ()
// Parameters:
// class UPaperFlipbook*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPaperFlipbook* UPaperFlipbookComponent::GetFlipbook()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbook");

	UPaperFlipbookComponent_GetFlipbook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
// ()
// Parameters:
// int*                           InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             NewInstanceTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bMarkRenderStateDirty          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaperGroupedSpriteComponent::UpdateInstanceTransform(int* InstanceIndex, struct FTransform* NewInstanceTransform, bool* bWorldSpace, bool* bMarkRenderStateDirty, bool* bTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform");

	UPaperGroupedSpriteComponent_UpdateInstanceTransform_Params params;
	params.InstanceIndex = InstanceIndex;
	params.NewInstanceTransform = NewInstanceTransform;
	params.bWorldSpace = bWorldSpace;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
// ()
// Parameters:
// int*                           InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           NewInstanceColor               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bMarkRenderStateDirty          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaperGroupedSpriteComponent::UpdateInstanceColor(int* InstanceIndex, struct FLinearColor* NewInstanceColor, bool* bMarkRenderStateDirty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor");

	UPaperGroupedSpriteComponent_UpdateInstanceColor_Params params;
	params.InstanceIndex = InstanceIndex;
	params.NewInstanceColor = NewInstanceColor;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
// ()
// Parameters:
// struct FVector*                WorldSpaceSortAxis             (Parm, ZeroConstructor, IsPlainOldData)

void UPaperGroupedSpriteComponent::SortInstancesAlongAxis(struct FVector* WorldSpaceSortAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis");

	UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Params params;
	params.WorldSpaceSortAxis = WorldSpaceSortAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
// ()
// Parameters:
// int*                           InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaperGroupedSpriteComponent::RemoveInstance(int* InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance");

	UPaperGroupedSpriteComponent_RemoveInstance_Params params;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
// ()
// Parameters:
// int*                           InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OutInstanceTransform           (Parm, OutParm, IsPlainOldData)
// bool*                          bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaperGroupedSpriteComponent::GetInstanceTransform(int* InstanceIndex, bool* bWorldSpace, struct FTransform* OutInstanceTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform");

	UPaperGroupedSpriteComponent_GetInstanceTransform_Params params;
	params.InstanceIndex = InstanceIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInstanceTransform != nullptr)
		*OutInstanceTransform = params.OutInstanceTransform;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPaperGroupedSpriteComponent::GetInstanceCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount");

	UPaperGroupedSpriteComponent_GetInstanceCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
// ()

void UPaperGroupedSpriteComponent::ClearInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.ClearInstances");

	UPaperGroupedSpriteComponent_ClearInstances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperGroupedSpriteComponent.AddInstance
// ()
// Parameters:
// struct FTransform*             Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UPaperSprite**           Sprite                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPaperGroupedSpriteComponent::AddInstance(struct FTransform* Transform, class UPaperSprite** Sprite, bool* bWorldSpace, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.AddInstance");

	UPaperGroupedSpriteComponent_AddInstance_Params params;
	params.Transform = Transform;
	params.Sprite = Sprite;
	params.bWorldSpace = bWorldSpace;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperSpriteComponent.SetSpriteColor
// ()
// Parameters:
// struct FLinearColor*           NewColor                       (Parm, ZeroConstructor, IsPlainOldData)

void UPaperSpriteComponent::SetSpriteColor(struct FLinearColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSpriteColor");

	UPaperSpriteComponent_SetSpriteColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperSpriteComponent.SetSprite
// ()
// Parameters:
// class UPaperSprite**           NewSprite                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaperSpriteComponent::SetSprite(class UPaperSprite** NewSprite)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSprite");

	UPaperSpriteComponent_SetSprite_Params params;
	params.NewSprite = NewSprite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperSpriteComponent.GetSprite
// ()
// Parameters:
// class UPaperSprite*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPaperSprite* UPaperSpriteComponent::GetSprite()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.GetSprite");

	UPaperSpriteComponent_GetSprite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTerrainComponent.SetTerrainColor
// ()
// Parameters:
// struct FLinearColor*           NewColor                       (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTerrainComponent::SetTerrainColor(struct FLinearColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTerrainComponent.SetTerrainColor");

	UPaperTerrainComponent_SetTerrainColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.UpdateSpline
// ()

void UPaperTerrainSplineComponent::UpdateSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.UpdateSpline");

	UPaperTerrainSplineComponent_UpdateSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetWorldLocationAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                InLocation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPaperTerrainSplineComponent::SetWorldLocationAtSplinePoint(int* PointIndex, struct FVector* InLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.SetWorldLocationAtSplinePoint");

	UPaperTerrainSplineComponent_SetWorldLocationAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetUpVectorAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                InUpVector                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTerrainSplineComponent::SetUpVectorAtSplinePoint(int* PointIndex, struct FVector* InUpVector, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUpdateSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.SetUpVectorAtSplinePoint");

	UPaperTerrainSplineComponent_SetUpVectorAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.InUpVector = InUpVector;
	params.CoordinateSpace = CoordinateSpace;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetUnselectedSplineSegmentColor
// ()
// Parameters:
// struct FLinearColor*           SegmentColor                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPaperTerrainSplineComponent::SetUnselectedSplineSegmentColor(struct FLinearColor* SegmentColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.SetUnselectedSplineSegmentColor");

	UPaperTerrainSplineComponent_SetUnselectedSplineSegmentColor_Params params;
	params.SegmentColor = SegmentColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetTangentsAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                InArriveTangent                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                InLeaveTangent                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTerrainSplineComponent::SetTangentsAtSplinePoint(int* PointIndex, struct FVector* InArriveTangent, struct FVector* InLeaveTangent, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUpdateSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.SetTangentsAtSplinePoint");

	UPaperTerrainSplineComponent_SetTangentsAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.InArriveTangent = InArriveTangent;
	params.InLeaveTangent = InLeaveTangent;
	params.CoordinateSpace = CoordinateSpace;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetTangentAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                InTangent                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTerrainSplineComponent::SetTangentAtSplinePoint(int* PointIndex, struct FVector* InTangent, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUpdateSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.SetTangentAtSplinePoint");

	UPaperTerrainSplineComponent_SetTangentAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.InTangent = InTangent;
	params.CoordinateSpace = CoordinateSpace;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetSplineWorldPoints
// ()
// Parameters:
// TArray<struct FVector>*        Points                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPaperTerrainSplineComponent::SetSplineWorldPoints(TArray<struct FVector>* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.SetSplineWorldPoints");

	UPaperTerrainSplineComponent_SetSplineWorldPoints_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetSplinePointType
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplinePointType>* Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTerrainSplineComponent::SetSplinePointType(int* PointIndex, TEnumAsByte<ESplinePointType>* Type, bool* bUpdateSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.SetSplinePointType");

	UPaperTerrainSplineComponent_SetSplinePointType_Params params;
	params.PointIndex = PointIndex;
	params.Type = Type;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetSplinePoints
// ()
// Parameters:
// TArray<struct FVector>*        Points                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTerrainSplineComponent::SetSplinePoints(TArray<struct FVector>* Points, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUpdateSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.SetSplinePoints");

	UPaperTerrainSplineComponent_SetSplinePoints_Params params;
	params.Points = Points;
	params.CoordinateSpace = CoordinateSpace;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetSplineLocalPoints
// ()
// Parameters:
// TArray<struct FVector>*        Points                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPaperTerrainSplineComponent::SetSplineLocalPoints(TArray<struct FVector>* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.SetSplineLocalPoints");

	UPaperTerrainSplineComponent_SetSplineLocalPoints_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetSelectedSplineSegmentColor
// ()
// Parameters:
// struct FLinearColor*           SegmentColor                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPaperTerrainSplineComponent::SetSelectedSplineSegmentColor(struct FLinearColor* SegmentColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.SetSelectedSplineSegmentColor");

	UPaperTerrainSplineComponent_SetSelectedSplineSegmentColor_Params params;
	params.SegmentColor = SegmentColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetLocationAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                InLocation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTerrainSplineComponent::SetLocationAtSplinePoint(int* PointIndex, struct FVector* InLocation, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUpdateSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.SetLocationAtSplinePoint");

	UPaperTerrainSplineComponent_SetLocationAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.InLocation = InLocation;
	params.CoordinateSpace = CoordinateSpace;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetDrawDebug
// ()
// Parameters:
// bool*                          bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTerrainSplineComponent::SetDrawDebug(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.SetDrawDebug");

	UPaperTerrainSplineComponent_SetDrawDebug_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetDefaultUpVector
// ()
// Parameters:
// struct FVector*                UpVector                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTerrainSplineComponent::SetDefaultUpVector(struct FVector* UpVector, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.SetDefaultUpVector");

	UPaperTerrainSplineComponent_SetDefaultUpVector_Params params;
	params.UpVector = UpVector;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetClosedLoopAtPosition
// ()
// Parameters:
// bool*                          bInClosedLoop                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Key                            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTerrainSplineComponent::SetClosedLoopAtPosition(bool* bInClosedLoop, float* Key, bool* bUpdateSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.SetClosedLoopAtPosition");

	UPaperTerrainSplineComponent_SetClosedLoopAtPosition_Params params;
	params.bInClosedLoop = bInClosedLoop;
	params.Key = Key;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetClosedLoop
// ()
// Parameters:
// bool*                          bInClosedLoop                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTerrainSplineComponent::SetClosedLoop(bool* bInClosedLoop, bool* bUpdateSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.SetClosedLoop");

	UPaperTerrainSplineComponent_SetClosedLoop_Params params;
	params.bInClosedLoop = bInClosedLoop;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.RemoveSplinePoint
// ()
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTerrainSplineComponent::RemoveSplinePoint(int* Index, bool* bUpdateSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.RemoveSplinePoint");

	UPaperTerrainSplineComponent_RemoveSplinePoint_Params params;
	params.Index = Index;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.IsClosedLoop
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaperTerrainSplineComponent::IsClosedLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.IsClosedLoop");

	UPaperTerrainSplineComponent_IsClosedLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetWorldTangentAtDistanceAlongSpline
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetWorldTangentAtDistanceAlongSpline(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetWorldTangentAtDistanceAlongSpline");

	UPaperTerrainSplineComponent_GetWorldTangentAtDistanceAlongSpline_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetWorldRotationAtTime
// ()
// Parameters:
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UPaperTerrainSplineComponent::GetWorldRotationAtTime(float* Time, bool* bUseConstantVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetWorldRotationAtTime");

	UPaperTerrainSplineComponent_GetWorldRotationAtTime_Params params;
	params.Time = Time;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetWorldRotationAtDistanceAlongSpline
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UPaperTerrainSplineComponent::GetWorldRotationAtDistanceAlongSpline(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetWorldRotationAtDistanceAlongSpline");

	UPaperTerrainSplineComponent_GetWorldRotationAtDistanceAlongSpline_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetWorldLocationAtTime
// ()
// Parameters:
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetWorldLocationAtTime(float* Time, bool* bUseConstantVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetWorldLocationAtTime");

	UPaperTerrainSplineComponent_GetWorldLocationAtTime_Params params;
	params.Time = Time;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetWorldLocationAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetWorldLocationAtSplinePoint(int* PointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetWorldLocationAtSplinePoint");

	UPaperTerrainSplineComponent_GetWorldLocationAtSplinePoint_Params params;
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetWorldLocationAtDistanceAlongSpline
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetWorldLocationAtDistanceAlongSpline(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetWorldLocationAtDistanceAlongSpline");

	UPaperTerrainSplineComponent_GetWorldLocationAtDistanceAlongSpline_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetWorldDirectionAtTime
// ()
// Parameters:
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetWorldDirectionAtTime(float* Time, bool* bUseConstantVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetWorldDirectionAtTime");

	UPaperTerrainSplineComponent_GetWorldDirectionAtTime_Params params;
	params.Time = Time;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetWorldDirectionAtDistanceAlongSpline
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetWorldDirectionAtDistanceAlongSpline(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetWorldDirectionAtDistanceAlongSpline");

	UPaperTerrainSplineComponent_GetWorldDirectionAtDistanceAlongSpline_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetVectorPropertyAtSplinePoint
// ()
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetVectorPropertyAtSplinePoint(int* Index, struct FName* PropertyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetVectorPropertyAtSplinePoint");

	UPaperTerrainSplineComponent_GetVectorPropertyAtSplinePoint_Params params;
	params.Index = Index;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetVectorPropertyAtSplineInputKey
// ()
// Parameters:
// float*                         InKey                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetVectorPropertyAtSplineInputKey(float* InKey, struct FName* PropertyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetVectorPropertyAtSplineInputKey");

	UPaperTerrainSplineComponent_GetVectorPropertyAtSplineInputKey_Params params;
	params.InKey = InKey;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetUpVectorAtTime
// ()
// Parameters:
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetUpVectorAtTime(float* Time, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseConstantVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetUpVectorAtTime");

	UPaperTerrainSplineComponent_GetUpVectorAtTime_Params params;
	params.Time = Time;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetUpVectorAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetUpVectorAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetUpVectorAtSplinePoint");

	UPaperTerrainSplineComponent_GetUpVectorAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetUpVectorAtSplineInputKey
// ()
// Parameters:
// float*                         InKey                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetUpVectorAtSplineInputKey(float* InKey, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetUpVectorAtSplineInputKey");

	UPaperTerrainSplineComponent_GetUpVectorAtSplineInputKey_Params params;
	params.InKey = InKey;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetUpVectorAtDistanceAlongSpline
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetUpVectorAtDistanceAlongSpline(float* Distance, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetUpVectorAtDistanceAlongSpline");

	UPaperTerrainSplineComponent_GetUpVectorAtDistanceAlongSpline_Params params;
	params.Distance = Distance;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetTransformAtTime
// ()
// Parameters:
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseScale                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UPaperTerrainSplineComponent::GetTransformAtTime(float* Time, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseConstantVelocity, bool* bUseScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetTransformAtTime");

	UPaperTerrainSplineComponent_GetTransformAtTime_Params params;
	params.Time = Time;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseConstantVelocity = bUseConstantVelocity;
	params.bUseScale = bUseScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetTransformAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseScale                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UPaperTerrainSplineComponent::GetTransformAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetTransformAtSplinePoint");

	UPaperTerrainSplineComponent_GetTransformAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseScale = bUseScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetTransformAtSplineInputKey
// ()
// Parameters:
// float*                         InKey                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseScale                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UPaperTerrainSplineComponent::GetTransformAtSplineInputKey(float* InKey, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetTransformAtSplineInputKey");

	UPaperTerrainSplineComponent_GetTransformAtSplineInputKey_Params params;
	params.InKey = InKey;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseScale = bUseScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetTransformAtDistanceAlongSpline
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseScale                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UPaperTerrainSplineComponent::GetTransformAtDistanceAlongSpline(float* Distance, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetTransformAtDistanceAlongSpline");

	UPaperTerrainSplineComponent_GetTransformAtDistanceAlongSpline_Params params;
	params.Distance = Distance;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseScale = bUseScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetTangentAtTime
// ()
// Parameters:
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetTangentAtTime(float* Time, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseConstantVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetTangentAtTime");

	UPaperTerrainSplineComponent_GetTangentAtTime_Params params;
	params.Time = Time;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetTangentAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetTangentAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetTangentAtSplinePoint");

	UPaperTerrainSplineComponent_GetTangentAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetTangentAtSplineInputKey
// ()
// Parameters:
// float*                         InKey                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetTangentAtSplineInputKey(float* InKey, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetTangentAtSplineInputKey");

	UPaperTerrainSplineComponent_GetTangentAtSplineInputKey_Params params;
	params.InKey = InKey;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetTangentAtDistanceAlongSpline
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetTangentAtDistanceAlongSpline(float* Distance, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetTangentAtDistanceAlongSpline");

	UPaperTerrainSplineComponent_GetTangentAtDistanceAlongSpline_Params params;
	params.Distance = Distance;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetSplinePointType
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplinePointType>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESplinePointType> UPaperTerrainSplineComponent::GetSplinePointType(int* PointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetSplinePointType");

	UPaperTerrainSplineComponent_GetSplinePointType_Params params;
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetSplineLength
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaperTerrainSplineComponent::GetSplineLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetSplineLength");

	UPaperTerrainSplineComponent_GetSplineLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetScaleAtTime
// ()
// Parameters:
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetScaleAtTime(float* Time, bool* bUseConstantVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetScaleAtTime");

	UPaperTerrainSplineComponent_GetScaleAtTime_Params params;
	params.Time = Time;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetScaleAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetScaleAtSplinePoint(int* PointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetScaleAtSplinePoint");

	UPaperTerrainSplineComponent_GetScaleAtSplinePoint_Params params;
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetScaleAtSplineInputKey
// ()
// Parameters:
// float*                         InKey                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetScaleAtSplineInputKey(float* InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetScaleAtSplineInputKey");

	UPaperTerrainSplineComponent_GetScaleAtSplineInputKey_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetScaleAtDistanceAlongSpline
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetScaleAtDistanceAlongSpline(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetScaleAtDistanceAlongSpline");

	UPaperTerrainSplineComponent_GetScaleAtDistanceAlongSpline_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRotationAtTime
// ()
// Parameters:
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UPaperTerrainSplineComponent::GetRotationAtTime(float* Time, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseConstantVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetRotationAtTime");

	UPaperTerrainSplineComponent_GetRotationAtTime_Params params;
	params.Time = Time;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRotationAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UPaperTerrainSplineComponent::GetRotationAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetRotationAtSplinePoint");

	UPaperTerrainSplineComponent_GetRotationAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRotationAtSplineInputKey
// ()
// Parameters:
// float*                         InKey                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UPaperTerrainSplineComponent::GetRotationAtSplineInputKey(float* InKey, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetRotationAtSplineInputKey");

	UPaperTerrainSplineComponent_GetRotationAtSplineInputKey_Params params;
	params.InKey = InKey;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRotationAtDistanceAlongSpline
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UPaperTerrainSplineComponent::GetRotationAtDistanceAlongSpline(float* Distance, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetRotationAtDistanceAlongSpline");

	UPaperTerrainSplineComponent_GetRotationAtDistanceAlongSpline_Params params;
	params.Distance = Distance;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRollAtTime
// ()
// Parameters:
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaperTerrainSplineComponent::GetRollAtTime(float* Time, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseConstantVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetRollAtTime");

	UPaperTerrainSplineComponent_GetRollAtTime_Params params;
	params.Time = Time;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRollAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaperTerrainSplineComponent::GetRollAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetRollAtSplinePoint");

	UPaperTerrainSplineComponent_GetRollAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRollAtSplineInputKey
// ()
// Parameters:
// float*                         InKey                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaperTerrainSplineComponent::GetRollAtSplineInputKey(float* InKey, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetRollAtSplineInputKey");

	UPaperTerrainSplineComponent_GetRollAtSplineInputKey_Params params;
	params.InKey = InKey;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRollAtDistanceAlongSpline
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaperTerrainSplineComponent::GetRollAtDistanceAlongSpline(float* Distance, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetRollAtDistanceAlongSpline");

	UPaperTerrainSplineComponent_GetRollAtDistanceAlongSpline_Params params;
	params.Distance = Distance;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRightVectorAtTime
// ()
// Parameters:
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetRightVectorAtTime(float* Time, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseConstantVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetRightVectorAtTime");

	UPaperTerrainSplineComponent_GetRightVectorAtTime_Params params;
	params.Time = Time;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRightVectorAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetRightVectorAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetRightVectorAtSplinePoint");

	UPaperTerrainSplineComponent_GetRightVectorAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRightVectorAtSplineInputKey
// ()
// Parameters:
// float*                         InKey                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetRightVectorAtSplineInputKey(float* InKey, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetRightVectorAtSplineInputKey");

	UPaperTerrainSplineComponent_GetRightVectorAtSplineInputKey_Params params;
	params.InKey = InKey;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRightVectorAtDistanceAlongSpline
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetRightVectorAtDistanceAlongSpline(float* Distance, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetRightVectorAtDistanceAlongSpline");

	UPaperTerrainSplineComponent_GetRightVectorAtDistanceAlongSpline_Params params;
	params.Distance = Distance;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetNumberOfSplineSegments
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPaperTerrainSplineComponent::GetNumberOfSplineSegments()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetNumberOfSplineSegments");

	UPaperTerrainSplineComponent_GetNumberOfSplineSegments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetNumberOfSplinePoints
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPaperTerrainSplineComponent::GetNumberOfSplinePoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetNumberOfSplinePoints");

	UPaperTerrainSplineComponent_GetNumberOfSplinePoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetLocationAtTime
// ()
// Parameters:
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetLocationAtTime(float* Time, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseConstantVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetLocationAtTime");

	UPaperTerrainSplineComponent_GetLocationAtTime_Params params;
	params.Time = Time;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetLocationAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetLocationAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetLocationAtSplinePoint");

	UPaperTerrainSplineComponent_GetLocationAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetLocationAtSplineInputKey
// ()
// Parameters:
// float*                         InKey                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetLocationAtSplineInputKey(float* InKey, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetLocationAtSplineInputKey");

	UPaperTerrainSplineComponent_GetLocationAtSplineInputKey_Params params;
	params.InKey = InKey;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetLocationAtDistanceAlongSpline
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetLocationAtDistanceAlongSpline(float* Distance, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetLocationAtDistanceAlongSpline");

	UPaperTerrainSplineComponent_GetLocationAtDistanceAlongSpline_Params params;
	params.Distance = Distance;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetLocationAndTangentAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Tangent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTerrainSplineComponent::GetLocationAndTangentAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, struct FVector* Location, struct FVector* Tangent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetLocationAndTangentAtSplinePoint");

	UPaperTerrainSplineComponent_GetLocationAndTangentAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Tangent != nullptr)
		*Tangent = params.Tangent;
}


// Function Engine.SplineComponent.GetLocalLocationAndTangentAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocalLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocalTangent                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPaperTerrainSplineComponent::GetLocalLocationAndTangentAtSplinePoint(int* PointIndex, struct FVector* LocalLocation, struct FVector* LocalTangent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetLocalLocationAndTangentAtSplinePoint");

	UPaperTerrainSplineComponent_GetLocalLocationAndTangentAtSplinePoint_Params params;
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalLocation != nullptr)
		*LocalLocation = params.LocalLocation;
	if (LocalTangent != nullptr)
		*LocalTangent = params.LocalTangent;
}


// Function Engine.SplineComponent.GetLeaveTangentAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetLeaveTangentAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetLeaveTangentAtSplinePoint");

	UPaperTerrainSplineComponent_GetLeaveTangentAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetInputKeyAtDistanceAlongSpline
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaperTerrainSplineComponent::GetInputKeyAtDistanceAlongSpline(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetInputKeyAtDistanceAlongSpline");

	UPaperTerrainSplineComponent_GetInputKeyAtDistanceAlongSpline_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetFloatPropertyAtSplinePoint
// ()
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaperTerrainSplineComponent::GetFloatPropertyAtSplinePoint(int* Index, struct FName* PropertyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetFloatPropertyAtSplinePoint");

	UPaperTerrainSplineComponent_GetFloatPropertyAtSplinePoint_Params params;
	params.Index = Index;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetFloatPropertyAtSplineInputKey
// ()
// Parameters:
// float*                         InKey                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaperTerrainSplineComponent::GetFloatPropertyAtSplineInputKey(float* InKey, struct FName* PropertyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetFloatPropertyAtSplineInputKey");

	UPaperTerrainSplineComponent_GetFloatPropertyAtSplineInputKey_Params params;
	params.InKey = InKey;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetDistanceAlongSplineAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaperTerrainSplineComponent::GetDistanceAlongSplineAtSplinePoint(int* PointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetDistanceAlongSplineAtSplinePoint");

	UPaperTerrainSplineComponent_GetDistanceAlongSplineAtSplinePoint_Params params;
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetDirectionAtTime
// ()
// Parameters:
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetDirectionAtTime(float* Time, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseConstantVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetDirectionAtTime");

	UPaperTerrainSplineComponent_GetDirectionAtTime_Params params;
	params.Time = Time;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetDirectionAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetDirectionAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetDirectionAtSplinePoint");

	UPaperTerrainSplineComponent_GetDirectionAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetDirectionAtSplineInputKey
// ()
// Parameters:
// float*                         InKey                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetDirectionAtSplineInputKey(float* InKey, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetDirectionAtSplineInputKey");

	UPaperTerrainSplineComponent_GetDirectionAtSplineInputKey_Params params;
	params.InKey = InKey;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetDirectionAtDistanceAlongSpline
// ()
// Parameters:
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetDirectionAtDistanceAlongSpline(float* Distance, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetDirectionAtDistanceAlongSpline");

	UPaperTerrainSplineComponent_GetDirectionAtDistanceAlongSpline_Params params;
	params.Distance = Distance;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetDefaultUpVector
// ()
// Parameters:
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetDefaultUpVector(TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetDefaultUpVector");

	UPaperTerrainSplineComponent_GetDefaultUpVector_Params params;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetArriveTangentAtSplinePoint
// ()
// Parameters:
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::GetArriveTangentAtSplinePoint(int* PointIndex, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.GetArriveTangentAtSplinePoint");

	UPaperTerrainSplineComponent_GetArriveTangentAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindUpVectorClosestToWorldLocation
// ()
// Parameters:
// struct FVector*                WorldLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::FindUpVectorClosestToWorldLocation(struct FVector* WorldLocation, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.FindUpVectorClosestToWorldLocation");

	UPaperTerrainSplineComponent_FindUpVectorClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindTransformClosestToWorldLocation
// ()
// Parameters:
// struct FVector*                WorldLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseScale                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UPaperTerrainSplineComponent::FindTransformClosestToWorldLocation(struct FVector* WorldLocation, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUseScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.FindTransformClosestToWorldLocation");

	UPaperTerrainSplineComponent_FindTransformClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseScale = bUseScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindTangentClosestToWorldLocation
// ()
// Parameters:
// struct FVector*                WorldLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::FindTangentClosestToWorldLocation(struct FVector* WorldLocation, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.FindTangentClosestToWorldLocation");

	UPaperTerrainSplineComponent_FindTangentClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindScaleClosestToWorldLocation
// ()
// Parameters:
// struct FVector*                WorldLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::FindScaleClosestToWorldLocation(struct FVector* WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.FindScaleClosestToWorldLocation");

	UPaperTerrainSplineComponent_FindScaleClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindRotationClosestToWorldLocation
// ()
// Parameters:
// struct FVector*                WorldLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UPaperTerrainSplineComponent::FindRotationClosestToWorldLocation(struct FVector* WorldLocation, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.FindRotationClosestToWorldLocation");

	UPaperTerrainSplineComponent_FindRotationClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindRollClosestToWorldLocation
// ()
// Parameters:
// struct FVector*                WorldLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaperTerrainSplineComponent::FindRollClosestToWorldLocation(struct FVector* WorldLocation, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.FindRollClosestToWorldLocation");

	UPaperTerrainSplineComponent_FindRollClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindRightVectorClosestToWorldLocation
// ()
// Parameters:
// struct FVector*                WorldLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::FindRightVectorClosestToWorldLocation(struct FVector* WorldLocation, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.FindRightVectorClosestToWorldLocation");

	UPaperTerrainSplineComponent_FindRightVectorClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindLocationClosestToWorldLocation
// ()
// Parameters:
// struct FVector*                WorldLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::FindLocationClosestToWorldLocation(struct FVector* WorldLocation, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.FindLocationClosestToWorldLocation");

	UPaperTerrainSplineComponent_FindLocationClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindInputKeyClosestToWorldLocation
// ()
// Parameters:
// struct FVector*                WorldLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPaperTerrainSplineComponent::FindInputKeyClosestToWorldLocation(struct FVector* WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.FindInputKeyClosestToWorldLocation");

	UPaperTerrainSplineComponent_FindInputKeyClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindDirectionClosestToWorldLocation
// ()
// Parameters:
// struct FVector*                WorldLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTerrainSplineComponent::FindDirectionClosestToWorldLocation(struct FVector* WorldLocation, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.FindDirectionClosestToWorldLocation");

	UPaperTerrainSplineComponent_FindDirectionClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.ClearSplinePoints
// ()
// Parameters:
// bool*                          bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTerrainSplineComponent::ClearSplinePoints(bool* bUpdateSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.ClearSplinePoints");

	UPaperTerrainSplineComponent_ClearSplinePoints_Params params;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.AddSplineWorldPoint
// ()
// Parameters:
// struct FVector*                Position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPaperTerrainSplineComponent::AddSplineWorldPoint(struct FVector* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.AddSplineWorldPoint");

	UPaperTerrainSplineComponent_AddSplineWorldPoint_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.AddSplinePointAtIndex
// ()
// Parameters:
// struct FVector*                Position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTerrainSplineComponent::AddSplinePointAtIndex(struct FVector* Position, int* Index, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUpdateSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.AddSplinePointAtIndex");

	UPaperTerrainSplineComponent_AddSplinePointAtIndex_Params params;
	params.Position = Position;
	params.Index = Index;
	params.CoordinateSpace = CoordinateSpace;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.AddSplinePoint
// ()
// Parameters:
// struct FVector*                Position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTerrainSplineComponent::AddSplinePoint(struct FVector* Position, TEnumAsByte<ESplineCoordinateSpace>* CoordinateSpace, bool* bUpdateSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.AddSplinePoint");

	UPaperTerrainSplineComponent_AddSplinePoint_Params params;
	params.Position = Position;
	params.CoordinateSpace = CoordinateSpace;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.AddSplineLocalPoint
// ()
// Parameters:
// struct FVector*                Position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPaperTerrainSplineComponent::AddSplineLocalPoint(struct FVector* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.AddSplineLocalPoint");

	UPaperTerrainSplineComponent_AddSplineLocalPoint_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.AddPoints
// ()
// Parameters:
// TArray<struct FSplinePoint>*   Points                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTerrainSplineComponent::AddPoints(TArray<struct FSplinePoint>* Points, bool* bUpdateSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.AddPoints");

	UPaperTerrainSplineComponent_AddPoints_Params params;
	params.Points = Points;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.AddPoint
// ()
// Parameters:
// struct FSplinePoint*           Point                          (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTerrainSplineComponent::AddPoint(struct FSplinePoint* Point, bool* bUpdateSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SplineComponent.AddPoint");

	UPaperTerrainSplineComponent_AddPoint_Params params;
	params.Point = Point;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetTileMapColor
// ()
// Parameters:
// struct FLinearColor*           NewColor                       (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTileMapComponent::SetTileMapColor(struct FLinearColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMapColor");

	UPaperTileMapComponent_SetTileMapColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetTileMap
// ()
// Parameters:
// class UPaperTileMap**          NewTileMap                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaperTileMapComponent::SetTileMap(class UPaperTileMap** NewTileMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMap");

	UPaperTileMapComponent_SetTileMap_Params params;
	params.NewTileMap = NewTileMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.SetTile
// ()
// Parameters:
// int*                           X                              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPaperTileInfo*         NewValue                       (Parm)

void UPaperTileMapComponent::SetTile(int* X, int* Y, int* Layer, struct FPaperTileInfo* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTile");

	UPaperTileMapComponent_SetTile_Params params;
	params.X = X;
	params.Y = Y;
	params.Layer = Layer;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetLayerColor
// ()
// Parameters:
// struct FLinearColor*           NewColor                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Layer                          (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTileMapComponent::SetLayerColor(struct FLinearColor* NewColor, int* Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerColor");

	UPaperTileMapComponent_SetLayerColor_Params params;
	params.NewColor = NewColor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetLayerCollision
// ()
// Parameters:
// int*                           Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHasCollision                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOverrideThickness             (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CustomThickness                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOverrideOffset                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CustomOffset                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRebuildCollision              (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTileMapComponent::SetLayerCollision(int* Layer, bool* bHasCollision, bool* bOverrideThickness, float* CustomThickness, bool* bOverrideOffset, float* CustomOffset, bool* bRebuildCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerCollision");

	UPaperTileMapComponent_SetLayerCollision_Params params;
	params.Layer = Layer;
	params.bHasCollision = bHasCollision;
	params.bOverrideThickness = bOverrideThickness;
	params.CustomThickness = CustomThickness;
	params.bOverrideOffset = bOverrideOffset;
	params.CustomOffset = CustomOffset;
	params.bRebuildCollision = bRebuildCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
// ()
// Parameters:
// float*                         Thickness                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRebuildCollision              (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTileMapComponent::SetDefaultCollisionThickness(float* Thickness, bool* bRebuildCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness");

	UPaperTileMapComponent_SetDefaultCollisionThickness_Params params;
	params.Thickness = Thickness;
	params.bRebuildCollision = bRebuildCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.ResizeMap
// ()
// Parameters:
// int*                           NewWidthInTiles                (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewHeightInTiles               (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTileMapComponent::ResizeMap(int* NewWidthInTiles, int* NewHeightInTiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.ResizeMap");

	UPaperTileMapComponent_ResizeMap_Params params;
	params.NewWidthInTiles = NewWidthInTiles;
	params.NewHeightInTiles = NewHeightInTiles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.RebuildCollision
// ()

void UPaperTileMapComponent::RebuildCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.RebuildCollision");

	UPaperTileMapComponent_RebuildCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.OwnsTileMap
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPaperTileMapComponent::OwnsTileMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.OwnsTileMap");

	UPaperTileMapComponent_OwnsTileMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
// ()

void UPaperTileMapComponent::MakeTileMapEditable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.MakeTileMapEditable");

	UPaperTileMapComponent_MakeTileMapEditable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.GetTilePolygon
// ()
// Parameters:
// int*                           TileX                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TileY                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Points                         (Parm, OutParm, ZeroConstructor)
// int*                           LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTileMapComponent::GetTilePolygon(int* TileX, int* TileY, int* LayerIndex, bool* bWorldSpace, TArray<struct FVector>* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTilePolygon");

	UPaperTileMapComponent_GetTilePolygon_Params params;
	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Points != nullptr)
		*Points = params.Points;
}


// Function Paper2D.PaperTileMapComponent.GetTileMapColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UPaperTileMapComponent::GetTileMapColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileMapColor");

	UPaperTileMapComponent_GetTileMapColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
// ()
// Parameters:
// int*                           TileX                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TileY                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTileMapComponent::GetTileCornerPosition(int* TileX, int* TileY, int* LayerIndex, bool* bWorldSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCornerPosition");

	UPaperTileMapComponent_GetTileCornerPosition_Params params;
	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
// ()
// Parameters:
// int*                           TileX                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TileY                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UPaperTileMapComponent::GetTileCenterPosition(int* TileX, int* TileY, int* LayerIndex, bool* bWorldSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCenterPosition");

	UPaperTileMapComponent_GetTileCenterPosition_Params params;
	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetTile
// ()
// Parameters:
// int*                           X                              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPaperTileInfo          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPaperTileInfo UPaperTileMapComponent::GetTile(int* X, int* Y, int* Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTile");

	UPaperTileMapComponent_GetTile_Params params;
	params.X = X;
	params.Y = Y;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetMapSize
// ()
// Parameters:
// int                            MapWidth                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MapHeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumLayers                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPaperTileMapComponent::GetMapSize(int* MapWidth, int* MapHeight, int* NumLayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetMapSize");

	UPaperTileMapComponent_GetMapSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapWidth != nullptr)
		*MapWidth = params.MapWidth;
	if (MapHeight != nullptr)
		*MapHeight = params.MapHeight;
	if (NumLayers != nullptr)
		*NumLayers = params.NumLayers;
}


// Function Paper2D.PaperTileMapComponent.GetLayerColor
// ()
// Parameters:
// int*                           Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UPaperTileMapComponent::GetLayerColor(int* Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetLayerColor");

	UPaperTileMapComponent_GetLayerColor_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.CreateNewTileMap
// ()
// Parameters:
// int*                           MapWidth                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MapHeight                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TileWidth                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TileHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PixelsPerUnrealUnit            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCreateLayer                   (Parm, ZeroConstructor, IsPlainOldData)

void UPaperTileMapComponent::CreateNewTileMap(int* MapWidth, int* MapHeight, int* TileWidth, int* TileHeight, float* PixelsPerUnrealUnit, bool* bCreateLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.CreateNewTileMap");

	UPaperTileMapComponent_CreateNewTileMap_Params params;
	params.MapWidth = MapWidth;
	params.MapHeight = MapHeight;
	params.TileWidth = TileWidth;
	params.TileHeight = TileHeight;
	params.PixelsPerUnrealUnit = PixelsPerUnrealUnit;
	params.bCreateLayer = bCreateLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.AddNewLayer
// ()
// Parameters:
// class UPaperTileLayer*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPaperTileLayer* UPaperTileMapComponent::AddNewLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.AddNewLayer");

	UPaperTileMapComponent_AddNewLayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UMG.UserWidget.UnregisterInputComponent
struct UUI_StripedFiller_C_UnregisterInputComponent_Params
{
};

// Function UMG.UserWidget.UnbindFromAnimationStarted
struct UUI_StripedFiller_C_UnbindFromAnimationStarted_Params
{
	class UWidgetAnimation**                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.UnbindFromAnimationFinished
struct UUI_StripedFiller_C_UnbindFromAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.UnbindAllFromAnimationStarted
struct UUI_StripedFiller_C_UnbindAllFromAnimationStarted_Params
{
	class UWidgetAnimation**                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.UnbindAllFromAnimationFinished
struct UUI_StripedFiller_C_UnbindAllFromAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.Tick
struct UUI_StripedFiller_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.StopListeningForInputAction
struct UUI_StripedFiller_C_StopListeningForInputAction_Params
{
	struct FName*                                      ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>*                          EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.StopListeningForAllInputActions
struct UUI_StripedFiller_C_StopListeningForAllInputActions_Params
{
};

// Function UMG.UserWidget.StopAnimationsAndLatentActions
struct UUI_StripedFiller_C_StopAnimationsAndLatentActions_Params
{
};

// Function UMG.UserWidget.StopAnimation
struct UUI_StripedFiller_C_StopAnimation_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.StopAllAnimations
struct UUI_StripedFiller_C_StopAllAnimations_Params
{
};

// Function UMG.UserWidget.SetPositionInViewport
struct UUI_StripedFiller_C_SetPositionInViewport_Params
{
	struct FVector2D*                                  Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRemoveDPIScale;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetPlaybackSpeed
struct UUI_StripedFiller_C_SetPlaybackSpeed_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetPadding
struct UUI_StripedFiller_C_SetPadding_Params
{
	struct FMargin*                                    InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetOwningPlayer
struct UUI_StripedFiller_C_SetOwningPlayer_Params
{
	class APlayerController**                          LocalPlayerController;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetNumLoopsToPlay
struct UUI_StripedFiller_C_SetNumLoopsToPlay_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumLoopsToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetInputActionPriority
struct UUI_StripedFiller_C_SetInputActionPriority_Params
{
	int*                                               NewPriority;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetInputActionBlocking
struct UUI_StripedFiller_C_SetInputActionBlocking_Params
{
	bool*                                              bShouldBlock;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetForegroundColor
struct UUI_StripedFiller_C_SetForegroundColor_Params
{
	struct FSlateColor*                                InForegroundColor;                                        // (Parm)
};

// Function UMG.UserWidget.SetDesiredSizeInViewport
struct UUI_StripedFiller_C_SetDesiredSizeInViewport_Params
{
	struct FVector2D*                                  Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetColorAndOpacity
struct UUI_StripedFiller_C_SetColorAndOpacity_Params
{
	struct FLinearColor*                               InColorAndOpacity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetAnchorsInViewport
struct UUI_StripedFiller_C_SetAnchorsInViewport_Params
{
	struct FAnchors*                                   Anchors;                                                  // (Parm)
};

// Function UMG.UserWidget.SetAlignmentInViewport
struct UUI_StripedFiller_C_SetAlignmentInViewport_Params
{
	struct FVector2D*                                  Alignment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.ReverseAnimation
struct UUI_StripedFiller_C_ReverseAnimation_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.RemoveFromViewport
struct UUI_StripedFiller_C_RemoveFromViewport_Params
{
};

// Function UMG.UserWidget.RegisterInputComponent
struct UUI_StripedFiller_C_RegisterInputComponent_Params
{
};

// Function UMG.UserWidget.PreConstruct
struct UUI_StripedFiller_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.PlaySound
struct UUI_StripedFiller_C_PlaySound_Params
{
	class USoundBase**                                 SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimationTimeRange
struct UUI_StripedFiller_C_PlayAnimationTimeRange_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             StartAtTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EndAtTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumLoopsToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUMGSequencePlayMode>*                 PlayMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRestoreState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMGSequencePlayer*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimationReverse
struct UUI_StripedFiller_C_PlayAnimationReverse_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRestoreState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMGSequencePlayer*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimationForward
struct UUI_StripedFiller_C_PlayAnimationForward_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRestoreState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMGSequencePlayer*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimation
struct UUI_StripedFiller_C_PlayAnimation_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             StartAtTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumLoopsToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUMGSequencePlayMode>*                 PlayMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRestoreState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUMGSequencePlayer*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.PauseAnimation
struct UUI_StripedFiller_C_PauseAnimation_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.OnTouchStarted
struct UUI_StripedFiller_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchMoved
struct UUI_StripedFiller_C_OnTouchMoved_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchGesture
struct UUI_StripedFiller_C_OnTouchGesture_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              GestureEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchForceChanged
struct UUI_StripedFiller_C_OnTouchForceChanged_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchEnded
struct UUI_StripedFiller_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnRemovedFromFocusPath
struct UUI_StripedFiller_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
};

// Function UMG.UserWidget.OnPreviewMouseButtonDown
struct UUI_StripedFiller_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnPreviewKeyDown
struct UUI_StripedFiller_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnPaint
struct UUI_StripedFiller_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function UMG.UserWidget.OnMouseWheel
struct UUI_StripedFiller_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseMove
struct UUI_StripedFiller_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseLeave
struct UUI_StripedFiller_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.UserWidget.OnMouseEnter
struct UUI_StripedFiller_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.UserWidget.OnMouseCaptureLost
struct UUI_StripedFiller_C_OnMouseCaptureLost_Params
{
};

// Function UMG.UserWidget.OnMouseButtonUp
struct UUI_StripedFiller_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseButtonDown
struct UUI_StripedFiller_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseButtonDoubleClick
struct UUI_StripedFiller_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry*                                  InMyGeometry;                                             // (Parm, IsPlainOldData)
	struct FPointerEvent*                              InMouseEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMotionDetected
struct UUI_StripedFiller_C_OnMotionDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FMotionEvent*                               InMotionEvent;                                            // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnKeyUp
struct UUI_StripedFiller_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnKeyDown
struct UUI_StripedFiller_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnKeyChar
struct UUI_StripedFiller_C_OnKeyChar_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FCharacterEvent*                            InCharacterEvent;                                         // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnInitialized
struct UUI_StripedFiller_C_OnInitialized_Params
{
};

// Function UMG.UserWidget.OnFocusReceived
struct UUI_StripedFiller_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnFocusLost
struct UUI_StripedFiller_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
};

// Function UMG.UserWidget.OnDrop
struct UUI_StripedFiller_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragOver
struct UUI_StripedFiller_C_OnDragOver_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragLeave
struct UUI_StripedFiller_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragEnter
struct UUI_StripedFiller_C_OnDragEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragDetected
struct UUI_StripedFiller_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragCancelled
struct UUI_StripedFiller_C_OnDragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnAnimationStarted
struct UUI_StripedFiller_C_OnAnimationStarted_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnAnimationFinished
struct UUI_StripedFiller_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnAnalogValueChanged
struct UUI_StripedFiller_C_OnAnalogValueChanged_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FAnalogInputEvent*                          InAnalogInputEvent;                                       // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnAddedToFocusPath
struct UUI_StripedFiller_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
};

// Function UMG.UserWidget.ListenForInputAction
struct UUI_StripedFiller_C_ListenForInputAction_Params
{
	struct FName*                                      ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>*                          EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bConsume;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            Callback;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.IsPlayingAnimation
struct UUI_StripedFiller_C_IsPlayingAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsListeningForInputAction
struct UUI_StripedFiller_C_IsListeningForInputAction_Params
{
	struct FName*                                      ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsInViewport
struct UUI_StripedFiller_C_IsInViewport_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsInteractable
struct UUI_StripedFiller_C_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsAnyAnimationPlaying
struct UUI_StripedFiller_C_IsAnyAnimationPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsAnimationPlayingForward
struct UUI_StripedFiller_C_IsAnimationPlayingForward_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsAnimationPlaying
struct UUI_StripedFiller_C_IsAnimationPlaying_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetOwningPlayerPawn
struct UUI_StripedFiller_C_GetOwningPlayerPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetIsVisible
struct UUI_StripedFiller_C_GetIsVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetAnimationCurrentTime
struct UUI_StripedFiller_C_GetAnimationCurrentTime_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetAnchorsInViewport
struct UUI_StripedFiller_C_GetAnchorsInViewport_Params
{
	struct FAnchors                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.GetAlignmentInViewport
struct UUI_StripedFiller_C_GetAlignmentInViewport_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.Destruct
struct UUI_StripedFiller_C_Destruct_Params
{
};

// Function UMG.UserWidget.Construct
struct UUI_StripedFiller_C_Construct_Params
{
};

// Function UMG.UserWidget.CancelLatentActions
struct UUI_StripedFiller_C_CancelLatentActions_Params
{
};

// Function UMG.UserWidget.BindToAnimationStarted
struct UUI_StripedFiller_C_BindToAnimationStarted_Params
{
	class UWidgetAnimation**                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.BindToAnimationFinished
struct UUI_StripedFiller_C_BindToAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.BindToAnimationEvent
struct UUI_StripedFiller_C_BindToAnimationEvent_Params
{
	class UWidgetAnimation**                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            Delegate;                                                 // (Parm, ZeroConstructor)
	EWidgetAnimationEvent*                             AnimationEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      UserTag;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.AddToViewport
struct UUI_StripedFiller_C_AddToViewport_Params
{
	int*                                               ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.AddToPlayerScreen
struct UUI_StripedFiller_C_AddToPlayerScreen_Params
{
	int*                                               ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

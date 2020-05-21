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

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
struct UMovieSceneCaptureProtocolBase_IsCapturing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
struct UMovieSceneCaptureProtocolBase_GetState_Params
{
	EMovieSceneCaptureProtocolState                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
struct UMovieSceneAudioCaptureProtocolBase_IsCapturing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
struct UMovieSceneAudioCaptureProtocolBase_GetState_Params
{
	EMovieSceneCaptureProtocolState                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
struct UNullAudioCaptureProtocol_IsCapturing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
struct UNullAudioCaptureProtocol_GetState_Params
{
	EMovieSceneCaptureProtocolState                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
struct UMovieSceneImageCaptureProtocolBase_IsCapturing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
struct UMovieSceneImageCaptureProtocolBase_GetState_Params
{
	EMovieSceneCaptureProtocolState                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
struct UFrameGrabberProtocol_IsCapturing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
struct UFrameGrabberProtocol_GetState_Params
{
	EMovieSceneCaptureProtocolState                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
struct UImageSequenceProtocol_IsCapturing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
struct UImageSequenceProtocol_GetState_Params
{
	EMovieSceneCaptureProtocolState                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
struct UImageSequenceProtocol_BMP_IsCapturing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
struct UImageSequenceProtocol_BMP_GetState_Params
{
	EMovieSceneCaptureProtocolState                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
struct UMovieSceneCapture_SetImageCaptureProtocolType_Params
{
	class UClass**                                     ProtocolType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
struct UMovieSceneCapture_SetAudioCaptureProtocolType_Params
{
	class UClass**                                     ProtocolType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
struct UMovieSceneCapture_GetImageCaptureProtocol_Params
{
	class UMovieSceneCaptureProtocolBase*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
struct UMovieSceneCapture_GetAudioCaptureProtocol_Params
{
	class UMovieSceneCaptureProtocolBase*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
struct UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
struct UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Params
{
	struct FCapturedPixelsID*                          StreamID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
struct UUserDefinedCaptureProtocol_ResolveBuffer_Params
{
	class UTexture**                                   Buffer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCapturedPixelsID*                          BufferID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
struct UUserDefinedCaptureProtocol_OnWarmUp_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
struct UUserDefinedCaptureProtocol_OnTick_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
struct UUserDefinedCaptureProtocol_OnStartCapture_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
struct UUserDefinedCaptureProtocol_OnSetup_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
struct UUserDefinedCaptureProtocol_OnPreTick_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
struct UUserDefinedCaptureProtocol_OnPixelsReceived_Params
{
	struct FCapturedPixels*                            Pixels;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FCapturedPixelsID*                          ID;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFrameMetrics*                              FrameMetrics;                                             // (Parm)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
struct UUserDefinedCaptureProtocol_OnPauseCapture_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
struct UUserDefinedCaptureProtocol_OnFinalize_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
struct UUserDefinedCaptureProtocol_OnCaptureFrame_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
struct UUserDefinedCaptureProtocol_OnCanFinalize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
struct UUserDefinedCaptureProtocol_OnBeginFinalize_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
struct UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Params
{
	struct FFrameMetrics                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
struct UUserDefinedCaptureProtocol_GenerateFilename_Params
{
	struct FFrameMetrics*                              InFrameMetrics;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
struct UUserDefinedImageCaptureProtocol_WriteImageToDisk_Params
{
	struct FCapturedPixels*                            PixelData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FCapturedPixelsID*                          StreamID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFrameMetrics*                              FrameMetrics;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              bCopyImageData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
struct UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
struct UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Params
{
	class UTexture**                                   Buffer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCapturedPixelsID*                          StreamID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

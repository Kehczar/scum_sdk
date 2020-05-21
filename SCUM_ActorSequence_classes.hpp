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

// Class ActorSequence.ActorSequence
// 0x0028 (0x0370 - 0x0348)
class UActorSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FActorSequenceObjectReferenceMap            ObjectReferences;                                         // 0x0350(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActorSequence.ActorSequence");
		return ptr;
	}

};


// Class ActorSequence.ActorSequenceComponent
// 0x0028 (0x00D8 - 0x00B0)
class UActorSequenceComponent : public UActorComponent
{
public:
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x00B0(0x0014) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	class UActorSequence*                              Sequence;                                                 // 0x00C8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorSequencePlayer*                        SequencePlayer;                                           // 0x00D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActorSequence.ActorSequenceComponent");
		return ptr;
	}

};


// Class ActorSequence.ActorSequencePlayer
// 0x0000 (0x0870 - 0x0870)
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ActorSequence.ActorSequencePlayer");
		return ptr;
	}


	void StopAtCurrentTime();
	void Stop();
	void SetTimeRange(float* StartTime, float* Duration);
	void SetPlayRate(float* PlayRate);
	void SetPlaybackRange(float* NewStartTime, float* NewEndTime);
	void SetPlaybackPosition(float* NewPlaybackPosition);
	void SetFrameRate(struct FFrameRate* FrameRate);
	void SetFrameRange(int* StartFrame, int* Duration);
	void SetDisableCameraCuts(bool* bInDisableCameraCuts);
	void ScrubToSeconds(float* TimeInSeconds);
	bool ScrubToMarkedFrame(struct FString* InLabel);
	void ScrubToFrame(struct FFrameTime* NewPosition);
	void Scrub();
	void RPC_OnStopEvent(struct FFrameTime* StoppedTime);
	void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod* Method, struct FFrameTime* RelevantTime);
	void PlayToSeconds(float* TimeInSeconds);
	bool PlayToMarkedFrame(struct FString* InLabel);
	void PlayToFrame(struct FFrameTime* NewPosition);
	void PlayReverse();
	void PlayLooping(int* NumLoops);
	void Play();
	void Pause();
	void JumpToSeconds(float* TimeInSeconds);
	void JumpToPosition(float* NewPlaybackPosition);
	bool JumpToMarkedFrame(struct FString* InLabel);
	void JumpToFrame(struct FFrameTime* NewPosition);
	bool IsReversed();
	bool IsPlaying();
	bool IsPaused();
	void GoToEndAndStop();
	struct FQualifiedFrameTime GetStartTime();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(class UObject** InObject);
	float GetLength();
	struct FFrameRate GetFrameRate();
	int GetFrameDuration();
	struct FQualifiedFrameTime GetEndTime();
	struct FQualifiedFrameTime GetDuration();
	bool GetDisableCameraCuts();
	struct FQualifiedFrameTime GetCurrentTime();
	TArray<class UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID* ObjectBinding);
	void ChangePlaybackDirection();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

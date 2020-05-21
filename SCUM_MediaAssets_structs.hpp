#pragma once

// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8_t
{
	EMediaWebcamCaptureDeviceFilter__None = 0,
	None                           = 1,
	EMediaWebcamCaptureDeviceFilter__DepthSensor = 2,
	neByteProperty‘IntProperty  = 3,
	EMediaWebcamCaptureDeviceFilter__Front = 4,
	ByteProperty‘IntProperty    = 5,
	EMediaWebcamCaptureDeviceFilter__Rear = 6,
	teProperty‘IntProperty        = 7,
	EMediaWebcamCaptureDeviceFilter__Unknown = 8,
	ty‘IntProperty                = 9,
	EMediaWebcamCaptureDeviceFilter__EMediaWebcamCaptureDeviceFilter_MAX = 10,
	[Error]                        = 11,
	None01                         = 12,
	None02                         = 13,
	None03                         = 14,
	None04                         = 15,
	None05                         = 16,
	None06                         = 17,
	None07                         = 18,
	None08                         = 19,
	None09                         = 20,
	None10                         = 21,
	None11                         = 22,
	None12                         = 23
};


// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8_t
{
	EMediaVideoCaptureDeviceFilter__None = 0,
	None                           = 1,
	EMediaVideoCaptureDeviceFilter__Card = 2,
	neByteProperty‘IntProperty  = 3,
	EMediaVideoCaptureDeviceFilter__Software = 4,
	ByteProperty‘IntProperty    = 5,
	EMediaVideoCaptureDeviceFilter__Unknown = 6,
	teProperty‘IntProperty        = 7,
	EMediaVideoCaptureDeviceFilter__Webcam = 8,
	ty‘IntProperty                = 9,
	EMediaVideoCaptureDeviceFilter__EMediaVideoCaptureDeviceFilter_MAX = 10,
	[Error]                        = 11,
	None01                         = 12,
	None02                         = 13,
	None03                         = 14,
	None04                         = 15,
	None05                         = 16,
	None06                         = 17,
	None07                         = 18,
	None08                         = 19,
	None09                         = 20,
	None10                         = 21,
	None11                         = 22,
	None12                         = 23
};


// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8_t
{
	EMediaAudioCaptureDeviceFilter__None = 0,
	None                           = 1,
	EMediaAudioCaptureDeviceFilter__Card = 2,
	neByteProperty‘IntProperty  = 3,
	EMediaAudioCaptureDeviceFilter__Microphone = 4,
	ByteProperty‘IntProperty    = 5,
	EMediaAudioCaptureDeviceFilter__Software = 6,
	teProperty‘IntProperty        = 7,
	EMediaAudioCaptureDeviceFilter__Unknown = 8,
	ty‘IntProperty                = 9,
	EMediaAudioCaptureDeviceFilter__EMediaAudioCaptureDeviceFilter_MAX = 10,
	[Error]                        = 11,
	None01                         = 12,
	None02                         = 13,
	None03                         = 14,
	None04                         = 15,
	None05                         = 16,
	None06                         = 17,
	None07                         = 18,
	None08                         = 19,
	None09                         = 20,
	None10                         = 21,
	None11                         = 22,
	None12                         = 23
};


// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{
	EMediaPlayerTrack__Audio       = 0,
	None                           = 1,
	EMediaPlayerTrack__Caption     = 2,
	neByteProperty‘IntProperty  = 3,
	EMediaPlayerTrack__Metadata    = 4,
	ByteProperty‘IntProperty    = 5,
	EMediaPlayerTrack__Script      = 6,
	ByteProperty                   = 7,
	EMediaPlayerTrack__Subtitle    = 8,
	teProperty‘IntProperty        = 9,
	EMediaPlayerTrack__Text        = 10,
	Property‘IntProperty          = 11,
	EMediaPlayerTrack__Video       = 12,
	operty‘IntProperty            = 13,
	EMediaPlayerTrack__EMediaPlayerTrack_MAX = 14,
	erty‘IntProperty              = 15,
	None01                         = 16,
	None02                         = 17,
	None03                         = 18,
	None04                         = 19,
	None05                         = 20,
	None06                         = 21,
	None07                         = 22,
	None08                         = 23,
	None09                         = 24,
	None10                         = 25,
	None11                         = 26,
	None12                         = 27
};


// Enum MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8_t
{
	EMediaSoundComponentFFTSize__Min = 0,
	None                           = 1,
	EMediaSoundComponentFFTSize__Small = 2,
	neByteProperty‘IntProperty  = 3,
	EMediaSoundComponentFFTSize__Medium = 4,
	ByteProperty‘IntProperty    = 5,
	EMediaSoundComponentFFTSize__Large = 6,
	ByteProperty                   = 7,
	EMediaSoundComponentFFTSize__EMediaSoundComponentFFTSize_MAX = 8,
	teProperty‘IntProperty        = 9,
	None01                         = 10,
	None02                         = 11,
	None03                         = 12,
	None04                         = 13,
	None05                         = 14,
	None06                         = 15,
	None07                         = 16,
	None08                         = 17,
	None09                         = 18,
	None10                         = 19,
	None11                         = 20,
	None12                         = 21,
	None13                         = 22,
	None14                         = 23
};


// Enum MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8_t
{
	EMediaSoundChannels__Mono      = 0,
	None                           = 1,
	EMediaSoundChannels__Stereo    = 2,
	neByteProperty‘IntProperty  = 3,
	EMediaSoundChannels__Surround  = 4,
	ByteProperty‘IntProperty    = 5,
	EMediaSoundChannels__EMediaSoundChannels_MAX = 6,
	ByteProperty                   = 7,
	None01                         = 8,
	None02                         = 9,
	None03                         = 10,
	None04                         = 11,
	None05                         = 12,
	None06                         = 13,
	None07                         = 14,
	None08                         = 15,
	None09                         = 16,
	None10                         = 17,
	None11                         = 18,
	None12                         = 19,
	None13                         = 20,
	None14                         = 21,
	None15                         = 22,
	None16                         = 23
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaAssets.MediaSoundComponentSpectralData
// 0x0008
struct FMediaSoundComponentSpectralData
{
	float                                              FrequencyHz;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MediaAssets.MediaCaptureDevice
// 0x0028
struct FMediaCaptureDevice
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FString                                     URL;                                                      // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

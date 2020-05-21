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

// BlueprintGeneratedClass WeatherCaptureCamNew.WeatherCaptureCamNew_C
// 0x0000 (0x0238 - 0x0238)
class AWeatherCaptureCamNew_C : public AWeatherCapture2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeatherCaptureCamNew.WeatherCaptureCamNew_C");
		return ptr;
	}


	void OnInterpToggle(bool* bEnable);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

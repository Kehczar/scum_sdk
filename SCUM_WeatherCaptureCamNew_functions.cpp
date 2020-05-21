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

// Function Engine.SceneCapture2D.OnInterpToggle
// ()
// Parameters:
// bool*                          bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeatherCaptureCamNew_C::OnInterpToggle(bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.SceneCapture2D.OnInterpToggle");

	AWeatherCaptureCamNew_C_OnInterpToggle_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function ConZ.MoundItem.OnRep_SurfaceType
// ()

void ABP_Mound_C::OnRep_SurfaceType()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.MoundItem.OnRep_SurfaceType");

	ABP_Mound_C_OnRep_SurfaceType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.MoundItem.OnRep_StartFadeDistance
// ()

void ABP_Mound_C::OnRep_StartFadeDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.MoundItem.OnRep_StartFadeDistance");

	ABP_Mound_C_OnRep_StartFadeDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.MoundItem.OnRep_OwnerProfileId
// ()

void ABP_Mound_C::OnRep_OwnerProfileId()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.MoundItem.OnRep_OwnerProfileId");

	ABP_Mound_C_OnRep_OwnerProfileId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.MoundItem.OnRep_EndFadeDistance
// ()

void ABP_Mound_C::OnRep_EndFadeDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.MoundItem.OnRep_EndFadeDistance");

	ABP_Mound_C_OnRep_EndFadeDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

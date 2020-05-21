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

// Function ConZ.WeaponAttachmentScope.SetZoomLevelOnServer
// ()
// Parameters:
// int*                           zoomLevel                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponScope_POSP_C::SetZoomLevelOnServer(int* zoomLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponAttachmentScope.SetZoomLevelOnServer");

	AWeaponScope_POSP_C_SetZoomLevelOnServer_Params params;
	params.zoomLevel = zoomLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.WeaponAttachmentScope.SetWindageOnServer
// ()
// Parameters:
// int*                           Windage                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponScope_POSP_C::SetWindageOnServer(int* Windage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponAttachmentScope.SetWindageOnServer");

	AWeaponScope_POSP_C_SetWindageOnServer_Params params;
	params.Windage = Windage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.WeaponAttachmentScope.SetLoadedVariablesOnClient
// ()
// Parameters:
// int*                           zoomLevel                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Windage                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponScope_POSP_C::SetLoadedVariablesOnClient(int* zoomLevel, int* Windage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.WeaponAttachmentScope.SetLoadedVariablesOnClient");

	AWeaponScope_POSP_C_SetLoadedVariablesOnClient_Params params;
	params.zoomLevel = zoomLevel;
	params.Windage = Windage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

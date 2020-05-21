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

// Function BP_PrisonerCorpse.BP_PrisonerCorpse_C.UpdateHair
// ()

void ABP_PrisonerCorpse_C::UpdateHair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrisonerCorpse.BP_PrisonerCorpse_C.UpdateHair");

	ABP_PrisonerCorpse_C_UpdateHair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PrisonerCorpse.BP_PrisonerCorpse_C.ExecuteUbergraph_BP_PrisonerCorpse
// ()
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PrisonerCorpse_C::ExecuteUbergraph_BP_PrisonerCorpse(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PrisonerCorpse.BP_PrisonerCorpse_C.ExecuteUbergraph_BP_PrisonerCorpse");

	ABP_PrisonerCorpse_C_ExecuteUbergraph_BP_PrisonerCorpse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

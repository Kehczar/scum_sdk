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

// Function ConZ.ItemWithText.OnTextAccepted
// ()
// Parameters:
// class APrisoner**              User                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_BlankSign_C::OnTextAccepted(class APrisoner** User, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.ItemWithText.OnTextAccepted");

	ABP_BlankSign_C_OnTextAccepted_Params params;
	params.User = User;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.ItemWithText.OnRep_Text
// ()

void ABP_BlankSign_C::OnRep_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.ItemWithText.OnRep_Text");

	ABP_BlankSign_C_OnRep_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.ItemWithText.OnLocalPrisonerPanelsClosed_ItemWithText
// ()

void ABP_BlankSign_C::OnLocalPrisonerPanelsClosed_ItemWithText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.ItemWithText.OnLocalPrisonerPanelsClosed_ItemWithText");

	ABP_BlankSign_C_OnLocalPrisonerPanelsClosed_ItemWithText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

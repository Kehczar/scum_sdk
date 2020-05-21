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

// Function UI_CriminalRecordText.UI_CriminalRecordText_C.SetValue
// (Exec, Native, Event, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)
// Parameters:
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CriminalRecordText_C::SetValue(struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecordText.UI_CriminalRecordText_C.SetValue");

	UUI_CriminalRecordText_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecordText.UI_CriminalRecordText_C.OnSynchronizeProperties
// (Net, NetRequest, NetResponse, MulticastDelegate, Private, DLLImport, BlueprintPure, Const, NetValidate)

void UUI_CriminalRecordText_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecordText.UI_CriminalRecordText_C.OnSynchronizeProperties");

	UUI_CriminalRecordText_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CriminalRecordText.UI_CriminalRecordText_C.ExecuteUbergraph_UI_CriminalRecordText
// (Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Delegate, DLLImport, BlueprintPure)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CriminalRecordText_C::ExecuteUbergraph_UI_CriminalRecordText(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecordText.UI_CriminalRecordText_C.ExecuteUbergraph_UI_CriminalRecordText");

	UUI_CriminalRecordText_C_ExecuteUbergraph_UI_CriminalRecordText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

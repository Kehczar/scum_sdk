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

// Function UI_HandsHolstersWidget3.UI_HandsHolstersWidget3_C.PreConstruct
// (NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HandsHolstersWidget3_C::STATIC_PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandsHolstersWidget3.UI_HandsHolstersWidget3_C.PreConstruct");

	UUI_HandsHolstersWidget3_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandsHolstersWidget3.UI_HandsHolstersWidget3_C.ExecuteUbergraph_UI_HandsHolstersWidget3
// (Net, NetResponse, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HandsHolstersWidget3_C::ExecuteUbergraph_UI_HandsHolstersWidget3(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandsHolstersWidget3.UI_HandsHolstersWidget3_C.ExecuteUbergraph_UI_HandsHolstersWidget3");

	UUI_HandsHolstersWidget3_C_ExecuteUbergraph_UI_HandsHolstersWidget3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

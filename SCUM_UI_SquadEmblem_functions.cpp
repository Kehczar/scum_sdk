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

// Function UI_SquadEmblem.UI_SquadEmblem_C.GetEmblemData
// (Net, NetReliable, NetRequest, Exec, Native, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// struct FConZSquadEmblem        Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SquadEmblem_C::GetEmblemData(struct FConZSquadEmblem* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEmblem.UI_SquadEmblem_C.GetEmblemData");

	UUI_SquadEmblem_C_GetEmblemData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function UI_SquadEmblem.UI_SquadEmblem_C.SetEmblemData
// (Net, NetReliable, NetRequest, NetResponse, Private, Protected, NetServer)
// Parameters:
// struct FConZSquadEmblem*       Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadEmblem_C::SetEmblemData(struct FConZSquadEmblem* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEmblem.UI_SquadEmblem_C.SetEmblemData");

	UUI_SquadEmblem_C_SetEmblemData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEmblem.UI_SquadEmblem_C.PreConstruct
// (Net, NetReliable, Exec, Native, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadEmblem_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEmblem.UI_SquadEmblem_C.PreConstruct");

	UUI_SquadEmblem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEmblem.UI_SquadEmblem_C.ExecuteUbergraph_UI_SquadEmblem
// (Net, NetRequest, Exec, Native, Event, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadEmblem_C::ExecuteUbergraph_UI_SquadEmblem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEmblem.UI_SquadEmblem_C.ExecuteUbergraph_UI_SquadEmblem");

	UUI_SquadEmblem_C_ExecuteUbergraph_UI_SquadEmblem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

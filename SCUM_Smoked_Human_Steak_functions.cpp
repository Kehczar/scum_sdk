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

// Function ConZ.FoodItem.OnRep_Temperature
// ()

void ASmoked_Human_Steak_C::OnRep_Temperature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.OnRep_Temperature");

	ASmoked_Human_Steak_C_OnRep_Temperature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.FoodItem.OnRep_ItemOpened
// ()

void ASmoked_Human_Steak_C::OnRep_ItemOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.OnRep_ItemOpened");

	ASmoked_Human_Steak_C_OnRep_ItemOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.FoodItem.OnRep_IsCooking
// ()

void ASmoked_Human_Steak_C::OnRep_IsCooking()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.OnRep_IsCooking");

	ASmoked_Human_Steak_C_OnRep_IsCooking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.FoodItem.OnAudioComponentExpired
// ()

void ASmoked_Human_Steak_C::OnAudioComponentExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.OnAudioComponentExpired");

	ASmoked_Human_Steak_C_OnAudioComponentExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConZ.FoodItem.IsCooking
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASmoked_Human_Steak_C::IsCooking()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.IsCooking");

	ASmoked_Human_Steak_C_IsCooking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.FoodItem.GetVolume
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASmoked_Human_Steak_C::GetVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.GetVolume");

	ASmoked_Human_Steak_C_GetVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.FoodItem.GetThermalConductivityFactor
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASmoked_Human_Steak_C::GetThermalConductivityFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.GetThermalConductivityFactor");

	ASmoked_Human_Steak_C_GetThermalConductivityFactor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.FoodItem.GetTemperature
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASmoked_Human_Steak_C::GetTemperature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.GetTemperature");

	ASmoked_Human_Steak_C_GetTemperature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.FoodItem.GetEnvironmentTemperature
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASmoked_Human_Steak_C::GetEnvironmentTemperature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.GetEnvironmentTemperature");

	ASmoked_Human_Steak_C_GetEnvironmentTemperature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConZ.FoodItem.GetCookingAmount
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASmoked_Human_Steak_C::GetCookingAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConZ.FoodItem.GetCookingAmount");

	ASmoked_Human_Steak_C_GetCookingAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

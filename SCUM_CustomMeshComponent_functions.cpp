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

// Function Engine.MeshComponent.SetVectorParameterValueOnMaterials
// ()
// Parameters:
// struct FName*                  ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ParameterValue                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCustomMeshComponent::SetVectorParameterValueOnMaterials(struct FName* ParameterName, struct FVector* ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.SetVectorParameterValueOnMaterials");

	UCustomMeshComponent_SetVectorParameterValueOnMaterials_Params params;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MeshComponent.SetScalarParameterValueOnMaterials
// ()
// Parameters:
// struct FName*                  ParameterName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ParameterValue                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCustomMeshComponent::SetScalarParameterValueOnMaterials(struct FName* ParameterName, float* ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.SetScalarParameterValueOnMaterials");

	UCustomMeshComponent_SetScalarParameterValueOnMaterials_Params params;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MeshComponent.PrestreamTextures
// ()
// Parameters:
// float*                         Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPrioritizeCharacterTextures   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CinematicTextureGroups         (Parm, ZeroConstructor, IsPlainOldData)

void UCustomMeshComponent::PrestreamTextures(float* Seconds, bool* bPrioritizeCharacterTextures, int* CinematicTextureGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.PrestreamTextures");

	UCustomMeshComponent_PrestreamTextures_Params params;
	params.Seconds = Seconds;
	params.bPrioritizeCharacterTextures = bPrioritizeCharacterTextures;
	params.CinematicTextureGroups = CinematicTextureGroups;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MeshComponent.IsMaterialSlotNameValid
// ()
// Parameters:
// struct FName*                  MaterialSlotName               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomMeshComponent::IsMaterialSlotNameValid(struct FName* MaterialSlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.IsMaterialSlotNameValid");

	UCustomMeshComponent_IsMaterialSlotNameValid_Params params;
	params.MaterialSlotName = MaterialSlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.MeshComponent.GetMaterialSlotNames
// ()
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UCustomMeshComponent::GetMaterialSlotNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.GetMaterialSlotNames");

	UCustomMeshComponent_GetMaterialSlotNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.MeshComponent.GetMaterials
// ()
// Parameters:
// TArray<class UMaterialInterface*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMaterialInterface*> UCustomMeshComponent::GetMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.GetMaterials");

	UCustomMeshComponent_GetMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.MeshComponent.GetMaterialIndex
// ()
// Parameters:
// struct FName*                  MaterialSlotName               (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCustomMeshComponent::GetMaterialIndex(struct FName* MaterialSlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.GetMaterialIndex");

	UCustomMeshComponent_GetMaterialIndex_Params params;
	params.MaterialSlotName = MaterialSlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

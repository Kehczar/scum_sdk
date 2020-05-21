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

// Function DcxVehicle.DcxVehicle.GetVehicleWheels
// ()
// Parameters:
// class UDcxVehicleWheelsComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDcxVehicleWheelsComponent* ADcxVehicle::GetVehicleWheels()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.GetVehicleWheels");

	ADcxVehicle_GetVehicleWheels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicle.GetMesh
// ()
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* ADcxVehicle::GetMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.GetMesh");

	ADcxVehicle_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors
// ()
// Parameters:
// struct FVector*                Up                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                Forward                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ADcxVehicle::DcxVehicleSetBasisVectors(struct FVector* Up, struct FVector* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors");

	ADcxVehicle_DcxVehicleSetBasisVectors_Params params;
	params.Up = Up;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicle.GetVehicleWheels
// ()
// Parameters:
// class UDcxVehicleWheelsComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDcxVehicleWheelsComponent* ADcxVehicle4W::GetVehicleWheels()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.GetVehicleWheels");

	ADcxVehicle4W_GetVehicleWheels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicle.GetMesh
// ()
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* ADcxVehicle4W::GetMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.GetMesh");

	ADcxVehicle4W_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors
// ()
// Parameters:
// struct FVector*                Up                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                Forward                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ADcxVehicle4W::DcxVehicleSetBasisVectors(struct FVector* Up, struct FVector* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors");

	ADcxVehicle4W_DcxVehicleSetBasisVectors_Params params;
	params.Up = Up;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelOffset
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleWheelsComponent::SetWheelOffset(int* WheelIndex, struct FVector* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelOffset");

	UDcxVehicleWheelsComponent_SetWheelOffset_Params params;
	params.WheelIndex = WheelIndex;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelData
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FDcxVehicleWheelData*   NewWheelData                   (Parm)

void UDcxVehicleWheelsComponent::SetWheelData(int* WheelIndex, struct FDcxVehicleWheelData* NewWheelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelData");

	UDcxVehicleWheelsComponent_SetWheelData_Params params;
	params.WheelIndex = WheelIndex;
	params.NewWheelData = NewWheelData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetTire
// ()
// Parameters:
// int*                           WheelId                        (Parm, ZeroConstructor, IsPlainOldData)
// class UDcxVehicleTire**        NewTire                        (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleWheelsComponent::SetTire(int* WheelId, class UDcxVehicleTire** NewTire)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetTire");

	UDcxVehicleWheelsComponent_SetTire_Params params;
	params.WheelId = WheelId;
	params.NewTire = NewTire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetSuspensionData
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FDcxVehicleSuspensionData* NewSuspensionData              (Parm)

void UDcxVehicleWheelsComponent::SetSuspensionData(int* WheelIndex, struct FDcxVehicleSuspensionData* NewSuspensionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetSuspensionData");

	UDcxVehicleWheelsComponent_SetSuspensionData_Params params;
	params.WheelIndex = WheelIndex;
	params.NewSuspensionData = NewSuspensionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToIgnore
// ()
// Parameters:
// struct FNavAvoidanceMask*      Mask                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDcxVehicleWheelsComponent::SetGroupsToIgnore(struct FNavAvoidanceMask* Mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToIgnore");

	UDcxVehicleWheelsComponent_SetGroupsToIgnore_Params params;
	params.Mask = Mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToAvoid
// ()
// Parameters:
// struct FNavAvoidanceMask*      Mask                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDcxVehicleWheelsComponent::SetGroupsToAvoid(struct FNavAvoidanceMask* Mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToAvoid");

	UDcxVehicleWheelsComponent_SetGroupsToAvoid_Params params;
	params.Mask = Mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetChassisMass
// ()
// Parameters:
// float*                         Mass                           (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleWheelsComponent::SetChassisMass(float* Mass)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetChassisMass");

	UDcxVehicleWheelsComponent_SetChassisMass_Params params;
	params.Mass = Mass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetAvoidanceGroup
// ()
// Parameters:
// struct FNavAvoidanceMask*      Mask                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDcxVehicleWheelsComponent::SetAvoidanceGroup(struct FNavAvoidanceMask* Mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetAvoidanceGroup");

	UDcxVehicleWheelsComponent_SetAvoidanceGroup_Params params;
	params.Mask = Mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.ServerUpdateState
// ()
// Parameters:
// struct FDcxAnalogControlArray* AnalogControls                 (ConstParm, Parm, ReferenceParm)
// struct FDcxGear*               CurrentGear                    (ConstParm, Parm, ReferenceParm)
// struct FDcxGear*               TargetGear                     (ConstParm, Parm, ReferenceParm)

void UDcxVehicleWheelsComponent::ServerUpdateState(struct FDcxAnalogControlArray* AnalogControls, struct FDcxGear* CurrentGear, struct FDcxGear* TargetGear)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.ServerUpdateState");

	UDcxVehicleWheelsComponent_ServerUpdateState_Params params;
	params.AnalogControls = AnalogControls;
	params.CurrentGear = CurrentGear;
	params.TargetGear = TargetGear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.IsWheelDisabled
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDcxVehicleWheelsComponent::IsWheelDisabled(int* WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.IsWheelDisabled");

	UDcxVehicleWheelsComponent_IsWheelDisabled_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelState
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FDcxVehicleWheelState   WheelState                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDcxVehicleWheelsComponent::GetWheelState(int* WheelIndex, struct FDcxVehicleWheelState* WheelState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelState");

	UDcxVehicleWheelsComponent_GetWheelState_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WheelState != nullptr)
		*WheelState = params.WheelState;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationSpeed
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleWheelsComponent::GetWheelRotationSpeed(int* WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationSpeed");

	UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationAngle
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleWheelsComponent::GetWheelRotationAngle(int* WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationAngle");

	UDcxVehicleWheelsComponent_GetWheelRotationAngle_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelOffset
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UDcxVehicleWheelsComponent::GetWheelOffset(int* WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelOffset");

	UDcxVehicleWheelsComponent_GetWheelOffset_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelData
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FDcxVehicleWheelData    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDcxVehicleWheelData UDcxVehicleWheelsComponent::GetWheelData(int* WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelData");

	UDcxVehicleWheelsComponent_GetWheelData_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetTire
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDcxVehicleTire*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDcxVehicleTire* UDcxVehicleWheelsComponent::GetTire(int* WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetTire");

	UDcxVehicleWheelsComponent_GetTire_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetSuspensionData
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FDcxVehicleSuspensionData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDcxVehicleSuspensionData UDcxVehicleWheelsComponent::GetSuspensionData(int* WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetSuspensionData");

	UDcxVehicleWheelsComponent_GetSuspensionData_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetRawInput
// ()
// Parameters:
// class UDcxVehicleWheelsRawInput* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDcxVehicleWheelsRawInput* UDcxVehicleWheelsComponent::GetRawInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetRawInput");

	UDcxVehicleWheelsComponent_GetRawInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetNumWheels
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDcxVehicleWheelsComponent::GetNumWheels()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetNumWheels");

	UDcxVehicleWheelsComponent_GetNumWheels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetForwardSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleWheelsComponent::GetForwardSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetForwardSpeed");

	UDcxVehicleWheelsComponent_GetForwardSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetChassisMass
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleWheelsComponent::GetChassisMass()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetChassisMass");

	UDcxVehicleWheelsComponent_GetChassisMass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetBoneName
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UDcxVehicleWheelsComponent::GetBoneName(int* WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetBoneName");

	UDcxVehicleWheelsComponent_GetBoneName_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetAnalogControl
// ()
// Parameters:
// unsigned char*                 Control                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleWheelsComponent::GetAnalogControl(unsigned char* Control)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetAnalogControl");

	UDcxVehicleWheelsComponent_GetAnalogControl_Params params;
	params.Control = Control;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.EnableWheel
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleWheelsComponent::EnableWheel(int* WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.EnableWheel");

	UDcxVehicleWheelsComponent_EnableWheel_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.EnableAvoidance
// ()
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleWheelsComponent::EnableAvoidance(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.EnableAvoidance");

	UDcxVehicleWheelsComponent_EnableAvoidance_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.DisableWheel
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleWheelsComponent::DisableWheel(int* WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.DisableWheel");

	UDcxVehicleWheelsComponent_DisableWheel_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetTargetGear
// ()
// Parameters:
// int*                           NewGear                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bImmediate                     (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveComponent::SetTargetGear(int* NewGear, bool* bImmediate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetTargetGear");

	UDcxVehicleDriveComponent_SetTargetGear_Params params;
	params.NewGear = NewGear;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxType
// ()
// Parameters:
// TEnumAsByte<EDcxVehicleGearbox>* NewGearboxType                 (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveComponent::SetGearboxType(TEnumAsByte<EDcxVehicleGearbox>* NewGearboxType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxType");

	UDcxVehicleDriveComponent_SetGearboxType_Params params;
	params.NewGearboxType = NewGearboxType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxData
// ()
// Parameters:
// struct FDcxVehicleGearboxData* NewGearboxData                 (Parm)

void UDcxVehicleDriveComponent::SetGearboxData(struct FDcxVehicleGearboxData* NewGearboxData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxData");

	UDcxVehicleDriveComponent_SetGearboxData_Params params;
	params.NewGearboxData = NewGearboxData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed
// ()
// Parameters:
// float*                         RPM                            (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveComponent::SetEngineRotationSpeed(float* RPM)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed");

	UDcxVehicleDriveComponent_SetEngineRotationSpeed_Params params;
	params.RPM = RPM;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetEngineData
// ()
// Parameters:
// struct FDcxVehicleEngineData*  NewEngineData                  (Parm)

void UDcxVehicleDriveComponent::SetEngineData(struct FDcxVehicleEngineData* NewEngineData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetEngineData");

	UDcxVehicleDriveComponent_SetEngineData_Params params;
	params.NewEngineData = NewEngineData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetClutchData
// ()
// Parameters:
// struct FDcxVehicleClutchData*  NewClutchData                  (Parm)

void UDcxVehicleDriveComponent::SetClutchData(struct FDcxVehicleClutchData* NewClutchData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetClutchData");

	UDcxVehicleDriveComponent_SetClutchData_Params params;
	params.NewClutchData = NewClutchData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetTargetGear
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDcxVehicleDriveComponent::GetTargetGear()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetTargetGear");

	UDcxVehicleDriveComponent_GetTargetGear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxType
// ()
// Parameters:
// TEnumAsByte<EDcxVehicleGearbox> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EDcxVehicleGearbox> UDcxVehicleDriveComponent::GetGearboxType()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxType");

	UDcxVehicleDriveComponent_GetGearboxType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxData
// ()
// Parameters:
// struct FDcxVehicleGearboxData  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDcxVehicleGearboxData UDcxVehicleDriveComponent::GetGearboxData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxData");

	UDcxVehicleDriveComponent_GetGearboxData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleDriveComponent::GetEngineRotationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed");

	UDcxVehicleDriveComponent_GetEngineRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetEngineData
// ()
// Parameters:
// struct FDcxVehicleEngineData   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDcxVehicleEngineData UDcxVehicleDriveComponent::GetEngineData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetEngineData");

	UDcxVehicleDriveComponent_GetEngineData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDcxVehicleDriveComponent::GetCurrentGear()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear");

	UDcxVehicleDriveComponent_GetCurrentGear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetClutchData
// ()
// Parameters:
// struct FDcxVehicleClutchData   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDcxVehicleClutchData UDcxVehicleDriveComponent::GetClutchData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetClutchData");

	UDcxVehicleDriveComponent_GetClutchData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent4W.SetDifferentialData
// ()
// Parameters:
// struct FDcxVehicleDifferentialData4W* NewDifferentialData            (Parm)

void UDcxVehicleDriveComponent4W::SetDifferentialData(struct FDcxVehicleDifferentialData4W* NewDifferentialData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent4W.SetDifferentialData");

	UDcxVehicleDriveComponent4W_SetDifferentialData_Params params;
	params.NewDifferentialData = NewDifferentialData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponent4W.GetRawInput4W
// ()
// Parameters:
// class UDcxVehicleDriveRawInput4W* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDcxVehicleDriveRawInput4W* UDcxVehicleDriveComponent4W::GetRawInput4W()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent4W.GetRawInput4W");

	UDcxVehicleDriveComponent4W_GetRawInput4W_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent4W.GetDifferentialData
// ()
// Parameters:
// struct FDcxVehicleDifferentialData4W ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDcxVehicleDifferentialData4W UDcxVehicleDriveComponent4W::GetDifferentialData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent4W.GetDifferentialData");

	UDcxVehicleDriveComponent4W_GetDifferentialData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetTargetGear
// ()
// Parameters:
// int*                           NewGear                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bImmediate                     (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveComponentNW::SetTargetGear(int* NewGear, bool* bImmediate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetTargetGear");

	UDcxVehicleDriveComponentNW_SetTargetGear_Params params;
	params.NewGear = NewGear;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxType
// ()
// Parameters:
// TEnumAsByte<EDcxVehicleGearbox>* NewGearboxType                 (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveComponentNW::SetGearboxType(TEnumAsByte<EDcxVehicleGearbox>* NewGearboxType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxType");

	UDcxVehicleDriveComponentNW_SetGearboxType_Params params;
	params.NewGearboxType = NewGearboxType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxData
// ()
// Parameters:
// struct FDcxVehicleGearboxData* NewGearboxData                 (Parm)

void UDcxVehicleDriveComponentNW::SetGearboxData(struct FDcxVehicleGearboxData* NewGearboxData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxData");

	UDcxVehicleDriveComponentNW_SetGearboxData_Params params;
	params.NewGearboxData = NewGearboxData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed
// ()
// Parameters:
// float*                         RPM                            (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveComponentNW::SetEngineRotationSpeed(float* RPM)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed");

	UDcxVehicleDriveComponentNW_SetEngineRotationSpeed_Params params;
	params.RPM = RPM;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetEngineData
// ()
// Parameters:
// struct FDcxVehicleEngineData*  NewEngineData                  (Parm)

void UDcxVehicleDriveComponentNW::SetEngineData(struct FDcxVehicleEngineData* NewEngineData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetEngineData");

	UDcxVehicleDriveComponentNW_SetEngineData_Params params;
	params.NewEngineData = NewEngineData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetClutchData
// ()
// Parameters:
// struct FDcxVehicleClutchData*  NewClutchData                  (Parm)

void UDcxVehicleDriveComponentNW::SetClutchData(struct FDcxVehicleClutchData* NewClutchData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetClutchData");

	UDcxVehicleDriveComponentNW_SetClutchData_Params params;
	params.NewClutchData = NewClutchData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetTargetGear
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDcxVehicleDriveComponentNW::GetTargetGear()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetTargetGear");

	UDcxVehicleDriveComponentNW_GetTargetGear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxType
// ()
// Parameters:
// TEnumAsByte<EDcxVehicleGearbox> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EDcxVehicleGearbox> UDcxVehicleDriveComponentNW::GetGearboxType()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxType");

	UDcxVehicleDriveComponentNW_GetGearboxType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxData
// ()
// Parameters:
// struct FDcxVehicleGearboxData  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDcxVehicleGearboxData UDcxVehicleDriveComponentNW::GetGearboxData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxData");

	UDcxVehicleDriveComponentNW_GetGearboxData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleDriveComponentNW::GetEngineRotationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed");

	UDcxVehicleDriveComponentNW_GetEngineRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetEngineData
// ()
// Parameters:
// struct FDcxVehicleEngineData   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDcxVehicleEngineData UDcxVehicleDriveComponentNW::GetEngineData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetEngineData");

	UDcxVehicleDriveComponentNW_GetEngineData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDcxVehicleDriveComponentNW::GetCurrentGear()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear");

	UDcxVehicleDriveComponentNW_GetCurrentGear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetClutchData
// ()
// Parameters:
// struct FDcxVehicleClutchData   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDcxVehicleClutchData UDcxVehicleDriveComponentNW::GetClutchData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetClutchData");

	UDcxVehicleDriveComponentNW_GetClutchData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponentTank.SetDriveModel
// ()
// Parameters:
// TEnumAsByte<EDcxVehicleDriveControlModelTank>* ControlModel                   (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveComponentTank::SetDriveModel(TEnumAsByte<EDcxVehicleDriveControlModelTank>* ControlModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentTank.SetDriveModel");

	UDcxVehicleDriveComponentTank_SetDriveModel_Params params;
	params.ControlModel = ControlModel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponentTank.GetRawInputTank
// ()
// Parameters:
// class UDcxVehicleDriveRawInputTank* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDcxVehicleDriveRawInputTank* UDcxVehicleDriveComponentTank::GetRawInputTank()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentTank.GetRawInputTank");

	UDcxVehicleDriveComponentTank_GetRawInputTank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponentTank.GetDriveModel
// ()
// Parameters:
// TEnumAsByte<EDcxVehicleDriveControlModelTank> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EDcxVehicleDriveControlModelTank> UDcxVehicleDriveComponentTank::GetDriveModel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentTank.GetDriveModel");

	UDcxVehicleDriveComponentTank_GetDriveModel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle
// ()
// Parameters:
// float*                         Throttle                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleWheelsRawInput::SetThrottle(float* Throttle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle");

	UDcxVehicleWheelsRawInput_SetThrottle_Params params;
	params.Throttle = Throttle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleWheelsRawInput::GetThrottle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle");

	UDcxVehicleWheelsRawInput_GetThrottle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp
// ()
// Parameters:
// bool*                          bGearUpPressed                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInput::SetGearUp(bool* bGearUpPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp");

	UDcxVehicleDriveRawInput_SetGearUp_Params params;
	params.bGearUpPressed = bGearUpPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown
// ()
// Parameters:
// bool*                          bGearDownPressed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInput::SetGearDown(bool* bGearDownPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown");

	UDcxVehicleDriveRawInput_SetGearDown_Params params;
	params.bGearDownPressed = bGearDownPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch
// ()
// Parameters:
// float*                         Clutch                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInput::SetClutch(float* Clutch)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch");

	UDcxVehicleDriveRawInput_SetClutch_Params params;
	params.Clutch = Clutch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDcxVehicleDriveRawInput::GetGearUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp");

	UDcxVehicleDriveRawInput_GetGearUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDcxVehicleDriveRawInput::GetGearDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown");

	UDcxVehicleDriveRawInput_GetGearDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleDriveRawInput::GetClutch()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch");

	UDcxVehicleDriveRawInput_GetClutch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp
// ()
// Parameters:
// bool*                          bGearUpPressed                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInput4W::SetGearUp(bool* bGearUpPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp");

	UDcxVehicleDriveRawInput4W_SetGearUp_Params params;
	params.bGearUpPressed = bGearUpPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown
// ()
// Parameters:
// bool*                          bGearDownPressed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInput4W::SetGearDown(bool* bGearDownPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown");

	UDcxVehicleDriveRawInput4W_SetGearDown_Params params;
	params.bGearDownPressed = bGearDownPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch
// ()
// Parameters:
// float*                         Clutch                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInput4W::SetClutch(float* Clutch)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch");

	UDcxVehicleDriveRawInput4W_SetClutch_Params params;
	params.Clutch = Clutch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDcxVehicleDriveRawInput4W::GetGearUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp");

	UDcxVehicleDriveRawInput4W_GetGearUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDcxVehicleDriveRawInput4W::GetGearDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown");

	UDcxVehicleDriveRawInput4W_GetGearDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleDriveRawInput4W::GetClutch()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch");

	UDcxVehicleDriveRawInput4W_GetClutch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp
// ()
// Parameters:
// bool*                          bGearUpPressed                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInputNW::SetGearUp(bool* bGearUpPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp");

	UDcxVehicleDriveRawInputNW_SetGearUp_Params params;
	params.bGearUpPressed = bGearUpPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown
// ()
// Parameters:
// bool*                          bGearDownPressed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInputNW::SetGearDown(bool* bGearDownPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown");

	UDcxVehicleDriveRawInputNW_SetGearDown_Params params;
	params.bGearDownPressed = bGearDownPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch
// ()
// Parameters:
// float*                         Clutch                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInputNW::SetClutch(float* Clutch)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch");

	UDcxVehicleDriveRawInputNW_SetClutch_Params params;
	params.Clutch = Clutch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDcxVehicleDriveRawInputNW::GetGearUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp");

	UDcxVehicleDriveRawInputNW_GetGearUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDcxVehicleDriveRawInputNW::GetGearDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown");

	UDcxVehicleDriveRawInputNW_GetGearDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleDriveRawInputNW::GetClutch()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch");

	UDcxVehicleDriveRawInputNW_GetClutch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp
// ()
// Parameters:
// bool*                          bGearUpPressed                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInputTank::SetGearUp(bool* bGearUpPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp");

	UDcxVehicleDriveRawInputTank_SetGearUp_Params params;
	params.bGearUpPressed = bGearUpPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown
// ()
// Parameters:
// bool*                          bGearDownPressed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInputTank::SetGearDown(bool* bGearDownPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown");

	UDcxVehicleDriveRawInputTank_SetGearDown_Params params;
	params.bGearDownPressed = bGearDownPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch
// ()
// Parameters:
// float*                         Clutch                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInputTank::SetClutch(float* Clutch)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch");

	UDcxVehicleDriveRawInputTank_SetClutch_Params params;
	params.Clutch = Clutch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDcxVehicleDriveRawInputTank::GetGearUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp");

	UDcxVehicleDriveRawInputTank_GetGearUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDcxVehicleDriveRawInputTank::GetGearDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown");

	UDcxVehicleDriveRawInputTank_GetGearDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleDriveRawInputTank::GetClutch()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch");

	UDcxVehicleDriveRawInputTank_GetClutch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicle.GetVehicleWheels
// ()
// Parameters:
// class UDcxVehicleWheelsComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDcxVehicleWheelsComponent* ADcxVehicleNoDrive::GetVehicleWheels()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.GetVehicleWheels");

	ADcxVehicleNoDrive_GetVehicleWheels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicle.GetMesh
// ()
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* ADcxVehicleNoDrive::GetMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.GetMesh");

	ADcxVehicleNoDrive_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors
// ()
// Parameters:
// struct FVector*                Up                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                Forward                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ADcxVehicleNoDrive::DcxVehicleSetBasisVectors(struct FVector* Up, struct FVector* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors");

	ADcxVehicleNoDrive_DcxVehicleSetBasisVectors_Params params;
	params.Up = Up;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.SetSteerAngle
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         SteerAngle                     (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleNoDriveComponent::SetSteerAngle(int* WheelIndex, float* SteerAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.SetSteerAngle");

	UDcxVehicleNoDriveComponent_SetSteerAngle_Params params;
	params.WheelIndex = WheelIndex;
	params.SteerAngle = SteerAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.SetDriveTorque
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DriveTorque                    (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleNoDriveComponent::SetDriveTorque(int* WheelIndex, float* DriveTorque)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.SetDriveTorque");

	UDcxVehicleNoDriveComponent_SetDriveTorque_Params params;
	params.WheelIndex = WheelIndex;
	params.DriveTorque = DriveTorque;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.SetBrakeTorque
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BrakeTorque                    (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleNoDriveComponent::SetBrakeTorque(int* WheelIndex, float* BrakeTorque)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.SetBrakeTorque");

	UDcxVehicleNoDriveComponent_SetBrakeTorque_Params params;
	params.WheelIndex = WheelIndex;
	params.BrakeTorque = BrakeTorque;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.GetSteerAngle
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleNoDriveComponent::GetSteerAngle(int* WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.GetSteerAngle");

	UDcxVehicleNoDriveComponent_GetSteerAngle_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.GetRawInputND
// ()
// Parameters:
// class UDcxVehicleNoDriveRawInput* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDcxVehicleNoDriveRawInput* UDcxVehicleNoDriveComponent::GetRawInputND()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.GetRawInputND");

	UDcxVehicleNoDriveComponent_GetRawInputND_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.GetDriveTorque
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleNoDriveComponent::GetDriveTorque(int* WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.GetDriveTorque");

	UDcxVehicleNoDriveComponent_GetDriveTorque_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.GetBrakeTorque
// ()
// Parameters:
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleNoDriveComponent::GetBrakeTorque(int* WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.GetBrakeTorque");

	UDcxVehicleNoDriveComponent_GetBrakeTorque_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle
// ()
// Parameters:
// float*                         Throttle                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleNoDriveRawInput::SetThrottle(float* Throttle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle");

	UDcxVehicleNoDriveRawInput_SetThrottle_Params params;
	params.Throttle = Throttle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleNoDriveRawInput::GetThrottle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle");

	UDcxVehicleNoDriveRawInput_GetThrottle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicle.GetVehicleWheels
// ()
// Parameters:
// class UDcxVehicleWheelsComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDcxVehicleWheelsComponent* ADcxVehicleNW::GetVehicleWheels()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.GetVehicleWheels");

	ADcxVehicleNW_GetVehicleWheels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicle.GetMesh
// ()
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* ADcxVehicleNW::GetMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.GetMesh");

	ADcxVehicleNW_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors
// ()
// Parameters:
// struct FVector*                Up                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                Forward                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ADcxVehicleNW::DcxVehicleSetBasisVectors(struct FVector* Up, struct FVector* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors");

	ADcxVehicleNW_DcxVehicleSetBasisVectors_Params params;
	params.Up = Up;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicle.GetVehicleWheels
// ()
// Parameters:
// class UDcxVehicleWheelsComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDcxVehicleWheelsComponent* ADcxVehicleTank::GetVehicleWheels()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.GetVehicleWheels");

	ADcxVehicleTank_GetVehicleWheels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicle.GetMesh
// ()
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* ADcxVehicleTank::GetMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.GetMesh");

	ADcxVehicleTank_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors
// ()
// Parameters:
// struct FVector*                Up                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                Forward                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ADcxVehicleTank::DcxVehicleSetBasisVectors(struct FVector* Up, struct FVector* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors");

	ADcxVehicleTank_DcxVehicleSetBasisVectors_Params params;
	params.Up = Up;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DcxVehicle.DcxVehicle.GetVehicleWheels
struct ADcxVehicle_GetVehicleWheels_Params
{
	class UDcxVehicleWheelsComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicle.GetMesh
struct ADcxVehicle_GetMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors
struct ADcxVehicle_DcxVehicleSetBasisVectors_Params
{
	struct FVector*                                    Up;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    Forward;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicle.GetVehicleWheels
struct ADcxVehicle4W_GetVehicleWheels_Params
{
	class UDcxVehicleWheelsComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicle.GetMesh
struct ADcxVehicle4W_GetMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors
struct ADcxVehicle4W_DcxVehicleSetBasisVectors_Params
{
	struct FVector*                                    Up;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    Forward;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelOffset
struct UDcxVehicleWheelsComponent_SetWheelOffset_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelData
struct UDcxVehicleWheelsComponent_SetWheelData_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDcxVehicleWheelData*                       NewWheelData;                                             // (Parm)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.SetTire
struct UDcxVehicleWheelsComponent_SetTire_Params
{
	int*                                               WheelId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UDcxVehicleTire**                            NewTire;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.SetSuspensionData
struct UDcxVehicleWheelsComponent_SetSuspensionData_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDcxVehicleSuspensionData*                  NewSuspensionData;                                        // (Parm)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToIgnore
struct UDcxVehicleWheelsComponent_SetGroupsToIgnore_Params
{
	struct FNavAvoidanceMask*                          Mask;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToAvoid
struct UDcxVehicleWheelsComponent_SetGroupsToAvoid_Params
{
	struct FNavAvoidanceMask*                          Mask;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.SetChassisMass
struct UDcxVehicleWheelsComponent_SetChassisMass_Params
{
	float*                                             Mass;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.SetAvoidanceGroup
struct UDcxVehicleWheelsComponent_SetAvoidanceGroup_Params
{
	struct FNavAvoidanceMask*                          Mask;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.ServerUpdateState
struct UDcxVehicleWheelsComponent_ServerUpdateState_Params
{
	struct FDcxAnalogControlArray*                     AnalogControls;                                           // (ConstParm, Parm, ReferenceParm)
	struct FDcxGear*                                   CurrentGear;                                              // (ConstParm, Parm, ReferenceParm)
	struct FDcxGear*                                   TargetGear;                                               // (ConstParm, Parm, ReferenceParm)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.IsWheelDisabled
struct UDcxVehicleWheelsComponent_IsWheelDisabled_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelState
struct UDcxVehicleWheelsComponent_GetWheelState_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDcxVehicleWheelState                       WheelState;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationSpeed
struct UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationAngle
struct UDcxVehicleWheelsComponent_GetWheelRotationAngle_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelOffset
struct UDcxVehicleWheelsComponent_GetWheelOffset_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelData
struct UDcxVehicleWheelsComponent_GetWheelData_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDcxVehicleWheelData                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetTire
struct UDcxVehicleWheelsComponent_GetTire_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDcxVehicleTire*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetSuspensionData
struct UDcxVehicleWheelsComponent_GetSuspensionData_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDcxVehicleSuspensionData                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetRawInput
struct UDcxVehicleWheelsComponent_GetRawInput_Params
{
	class UDcxVehicleWheelsRawInput*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetNumWheels
struct UDcxVehicleWheelsComponent_GetNumWheels_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetForwardSpeed
struct UDcxVehicleWheelsComponent_GetForwardSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetChassisMass
struct UDcxVehicleWheelsComponent_GetChassisMass_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetBoneName
struct UDcxVehicleWheelsComponent_GetBoneName_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetAnalogControl
struct UDcxVehicleWheelsComponent_GetAnalogControl_Params
{
	unsigned char*                                     Control;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.EnableWheel
struct UDcxVehicleWheelsComponent_EnableWheel_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.EnableAvoidance
struct UDcxVehicleWheelsComponent_EnableAvoidance_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.DisableWheel
struct UDcxVehicleWheelsComponent_DisableWheel_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.SetTargetGear
struct UDcxVehicleDriveComponent_SetTargetGear_Params
{
	int*                                               NewGear;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxType
struct UDcxVehicleDriveComponent_SetGearboxType_Params
{
	TEnumAsByte<EDcxVehicleGearbox>*                   NewGearboxType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxData
struct UDcxVehicleDriveComponent_SetGearboxData_Params
{
	struct FDcxVehicleGearboxData*                     NewGearboxData;                                           // (Parm)
};

// Function DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed
struct UDcxVehicleDriveComponent_SetEngineRotationSpeed_Params
{
	float*                                             RPM;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.SetEngineData
struct UDcxVehicleDriveComponent_SetEngineData_Params
{
	struct FDcxVehicleEngineData*                      NewEngineData;                                            // (Parm)
};

// Function DcxVehicle.DcxVehicleDriveComponent.SetClutchData
struct UDcxVehicleDriveComponent_SetClutchData_Params
{
	struct FDcxVehicleClutchData*                      NewClutchData;                                            // (Parm)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetTargetGear
struct UDcxVehicleDriveComponent_GetTargetGear_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxType
struct UDcxVehicleDriveComponent_GetGearboxType_Params
{
	TEnumAsByte<EDcxVehicleGearbox>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxData
struct UDcxVehicleDriveComponent_GetGearboxData_Params
{
	struct FDcxVehicleGearboxData                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed
struct UDcxVehicleDriveComponent_GetEngineRotationSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetEngineData
struct UDcxVehicleDriveComponent_GetEngineData_Params
{
	struct FDcxVehicleEngineData                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear
struct UDcxVehicleDriveComponent_GetCurrentGear_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetClutchData
struct UDcxVehicleDriveComponent_GetClutchData_Params
{
	struct FDcxVehicleClutchData                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DcxVehicle.DcxVehicleDriveComponent4W.SetDifferentialData
struct UDcxVehicleDriveComponent4W_SetDifferentialData_Params
{
	struct FDcxVehicleDifferentialData4W*              NewDifferentialData;                                      // (Parm)
};

// Function DcxVehicle.DcxVehicleDriveComponent4W.GetRawInput4W
struct UDcxVehicleDriveComponent4W_GetRawInput4W_Params
{
	class UDcxVehicleDriveRawInput4W*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent4W.GetDifferentialData
struct UDcxVehicleDriveComponent4W_GetDifferentialData_Params
{
	struct FDcxVehicleDifferentialData4W               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DcxVehicle.DcxVehicleDriveComponent.SetTargetGear
struct UDcxVehicleDriveComponentNW_SetTargetGear_Params
{
	int*                                               NewGear;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxType
struct UDcxVehicleDriveComponentNW_SetGearboxType_Params
{
	TEnumAsByte<EDcxVehicleGearbox>*                   NewGearboxType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxData
struct UDcxVehicleDriveComponentNW_SetGearboxData_Params
{
	struct FDcxVehicleGearboxData*                     NewGearboxData;                                           // (Parm)
};

// Function DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed
struct UDcxVehicleDriveComponentNW_SetEngineRotationSpeed_Params
{
	float*                                             RPM;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.SetEngineData
struct UDcxVehicleDriveComponentNW_SetEngineData_Params
{
	struct FDcxVehicleEngineData*                      NewEngineData;                                            // (Parm)
};

// Function DcxVehicle.DcxVehicleDriveComponent.SetClutchData
struct UDcxVehicleDriveComponentNW_SetClutchData_Params
{
	struct FDcxVehicleClutchData*                      NewClutchData;                                            // (Parm)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetTargetGear
struct UDcxVehicleDriveComponentNW_GetTargetGear_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxType
struct UDcxVehicleDriveComponentNW_GetGearboxType_Params
{
	TEnumAsByte<EDcxVehicleGearbox>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxData
struct UDcxVehicleDriveComponentNW_GetGearboxData_Params
{
	struct FDcxVehicleGearboxData                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed
struct UDcxVehicleDriveComponentNW_GetEngineRotationSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetEngineData
struct UDcxVehicleDriveComponentNW_GetEngineData_Params
{
	struct FDcxVehicleEngineData                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear
struct UDcxVehicleDriveComponentNW_GetCurrentGear_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetClutchData
struct UDcxVehicleDriveComponentNW_GetClutchData_Params
{
	struct FDcxVehicleClutchData                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DcxVehicle.DcxVehicleDriveComponentTank.SetDriveModel
struct UDcxVehicleDriveComponentTank_SetDriveModel_Params
{
	TEnumAsByte<EDcxVehicleDriveControlModelTank>*     ControlModel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponentTank.GetRawInputTank
struct UDcxVehicleDriveComponentTank_GetRawInputTank_Params
{
	class UDcxVehicleDriveRawInputTank*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponentTank.GetDriveModel
struct UDcxVehicleDriveComponentTank_GetDriveModel_Params
{
	TEnumAsByte<EDcxVehicleDriveControlModelTank>      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle
struct UDcxVehicleWheelsRawInput_SetThrottle_Params
{
	float*                                             Throttle;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle
struct UDcxVehicleWheelsRawInput_GetThrottle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp
struct UDcxVehicleDriveRawInput_SetGearUp_Params
{
	bool*                                              bGearUpPressed;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown
struct UDcxVehicleDriveRawInput_SetGearDown_Params
{
	bool*                                              bGearDownPressed;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch
struct UDcxVehicleDriveRawInput_SetClutch_Params
{
	float*                                             Clutch;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp
struct UDcxVehicleDriveRawInput_GetGearUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown
struct UDcxVehicleDriveRawInput_GetGearDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch
struct UDcxVehicleDriveRawInput_GetClutch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp
struct UDcxVehicleDriveRawInput4W_SetGearUp_Params
{
	bool*                                              bGearUpPressed;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown
struct UDcxVehicleDriveRawInput4W_SetGearDown_Params
{
	bool*                                              bGearDownPressed;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch
struct UDcxVehicleDriveRawInput4W_SetClutch_Params
{
	float*                                             Clutch;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp
struct UDcxVehicleDriveRawInput4W_GetGearUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown
struct UDcxVehicleDriveRawInput4W_GetGearDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch
struct UDcxVehicleDriveRawInput4W_GetClutch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp
struct UDcxVehicleDriveRawInputNW_SetGearUp_Params
{
	bool*                                              bGearUpPressed;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown
struct UDcxVehicleDriveRawInputNW_SetGearDown_Params
{
	bool*                                              bGearDownPressed;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch
struct UDcxVehicleDriveRawInputNW_SetClutch_Params
{
	float*                                             Clutch;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp
struct UDcxVehicleDriveRawInputNW_GetGearUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown
struct UDcxVehicleDriveRawInputNW_GetGearDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch
struct UDcxVehicleDriveRawInputNW_GetClutch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp
struct UDcxVehicleDriveRawInputTank_SetGearUp_Params
{
	bool*                                              bGearUpPressed;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown
struct UDcxVehicleDriveRawInputTank_SetGearDown_Params
{
	bool*                                              bGearDownPressed;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch
struct UDcxVehicleDriveRawInputTank_SetClutch_Params
{
	float*                                             Clutch;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp
struct UDcxVehicleDriveRawInputTank_GetGearUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown
struct UDcxVehicleDriveRawInputTank_GetGearDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch
struct UDcxVehicleDriveRawInputTank_GetClutch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicle.GetVehicleWheels
struct ADcxVehicleNoDrive_GetVehicleWheels_Params
{
	class UDcxVehicleWheelsComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicle.GetMesh
struct ADcxVehicleNoDrive_GetMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors
struct ADcxVehicleNoDrive_DcxVehicleSetBasisVectors_Params
{
	struct FVector*                                    Up;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    Forward;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNoDriveComponent.SetSteerAngle
struct UDcxVehicleNoDriveComponent_SetSteerAngle_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SteerAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNoDriveComponent.SetDriveTorque
struct UDcxVehicleNoDriveComponent_SetDriveTorque_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DriveTorque;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNoDriveComponent.SetBrakeTorque
struct UDcxVehicleNoDriveComponent_SetBrakeTorque_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BrakeTorque;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNoDriveComponent.GetSteerAngle
struct UDcxVehicleNoDriveComponent_GetSteerAngle_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNoDriveComponent.GetRawInputND
struct UDcxVehicleNoDriveComponent_GetRawInputND_Params
{
	class UDcxVehicleNoDriveRawInput*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNoDriveComponent.GetDriveTorque
struct UDcxVehicleNoDriveComponent_GetDriveTorque_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNoDriveComponent.GetBrakeTorque
struct UDcxVehicleNoDriveComponent_GetBrakeTorque_Params
{
	int*                                               WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle
struct UDcxVehicleNoDriveRawInput_SetThrottle_Params
{
	float*                                             Throttle;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle
struct UDcxVehicleNoDriveRawInput_GetThrottle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicle.GetVehicleWheels
struct ADcxVehicleNW_GetVehicleWheels_Params
{
	class UDcxVehicleWheelsComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicle.GetMesh
struct ADcxVehicleNW_GetMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors
struct ADcxVehicleNW_DcxVehicleSetBasisVectors_Params
{
	struct FVector*                                    Up;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    Forward;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicle.GetVehicleWheels
struct ADcxVehicleTank_GetVehicleWheels_Params
{
	class UDcxVehicleWheelsComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicle.GetMesh
struct ADcxVehicleTank_GetMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors
struct ADcxVehicleTank_DcxVehicleSetBasisVectors_Params
{
	struct FVector*                                    Up;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    Forward;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

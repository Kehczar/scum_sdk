#pragma once

// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DcxVehicle.DcxVehicle
// 0x0010 (0x0288 - 0x0278)
class ADcxVehicle : public APawn
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0278(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UDcxVehicleWheelsComponent*                  VehicleWheels;                                            // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicle");
		return ptr;
	}


	class UDcxVehicleWheelsComponent* GetVehicleWheels();
	class USkeletalMeshComponent* GetMesh();
	void DcxVehicleSetBasisVectors(struct FVector* Up, struct FVector* Forward);
};


// Class DcxVehicle.DcxVehicle4W
// 0x0000 (0x0288 - 0x0288)
class ADcxVehicle4W : public ADcxVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicle4W");
		return ptr;
	}


	class UDcxVehicleWheelsComponent* GetVehicleWheels();
	class USkeletalMeshComponent* GetMesh();
	void DcxVehicleSetBasisVectors(struct FVector* Up, struct FVector* Forward);
};


// Class DcxVehicle.DcxVehicleAnimInstance
// 0x0700 (0x0970 - 0x0270)
class UDcxVehicleAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x6F0];                                     // 0x0270(0x06F0) MISSED OFFSET
	class UDcxVehicleWheelsComponent*                  VehicleWheels;                                            // 0x0960(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0968(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleAnimInstance");
		return ptr;
	}

};


// Class DcxVehicle.DcxVehicleWheelsComponent
// 0x0108 (0x0240 - 0x0138)
class UDcxVehicleWheelsComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET
	float                                              ChassisMass;                                              // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InertiaTensorScale;                                       // 0x0144(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FDcxVehicleWheelConfiguration>       WheelConfigurations;                                      // 0x0150(0x0010) (Edit, ZeroConstructor)
	struct FDcxVehicleTireLoadFilterData               TireLoadFilter;                                           // 0x0160(0x0010) (Edit)
	bool                                               bUseAvoidance;                                            // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0171(0x0003) MISSED OFFSET
	float                                              AvoidanceWeight;                                          // 0x0174(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AvoidanceUID;                                             // 0x0178(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           // 0x017C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            // 0x0180(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           // 0x0184(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdLongitudinalSpeed;                               // 0x0188(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LowForwardSpeedSubStepCount;                              // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                HighForwardSpeedSubStepCount;                             // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficient;                                          // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DragArea;                                                 // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDcxVehicleDriveInputRate                   ThrottleRate;                                             // 0x019C(0x0008) (Edit, BlueprintVisible)
	struct FDcxVehicleDriveInputRate                   BrakeRate;                                                // 0x01A4(0x0008) (Edit, BlueprintVisible)
	struct FDcxVehicleDriveInputRate                   HandbrakeRate;                                            // 0x01AC(0x0008) (Edit, BlueprintVisible)
	struct FDcxVehicleDriveInputRate                   SteerRate;                                                // 0x01B4(0x0008) (Edit, BlueprintVisible)
	float                                              AvoidanceRadius;                                          // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceHeight;                                          // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceConsiderationRadius;                             // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceThrottleStep;                                    // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceBrakeStep;                                       // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceSteerStep;                                       // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRecreateRequired;                                        // 0x01D4(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01D5(0x0003) MISSED OFFSET
	class UDcxVehicleWheelsRawInput*                   RawInput;                                                 // 0x01D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<float>                                      SmoothAnalogControls;                                     // 0x01E0(0x0010) (ZeroConstructor, Transient)
	struct FDcxVehicleDriveState                       ReplicatedState;                                          // 0x01F0(0x0018) (Net, Transient)
	bool                                               bWasAvoidanceUpdated;                                     // 0x0208(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0209(0x0003) MISSED OFFSET
	struct FVector                                     AvoidanceVelocity;                                        // 0x020C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     AvoidanceLockVelocity;                                    // 0x0218(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AvoidanceLockTimer;                                       // 0x0224(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0228(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleWheelsComponent");
		return ptr;
	}


	void SetWheelOffset(int* WheelIndex, struct FVector* Offset);
	void SetWheelData(int* WheelIndex, struct FDcxVehicleWheelData* NewWheelData);
	void SetTire(int* WheelId, class UDcxVehicleTire** NewTire);
	void SetSuspensionData(int* WheelIndex, struct FDcxVehicleSuspensionData* NewSuspensionData);
	void SetGroupsToIgnore(struct FNavAvoidanceMask* Mask);
	void SetGroupsToAvoid(struct FNavAvoidanceMask* Mask);
	void SetChassisMass(float* Mass);
	void SetAvoidanceGroup(struct FNavAvoidanceMask* Mask);
	void ServerUpdateState(struct FDcxAnalogControlArray* AnalogControls, struct FDcxGear* CurrentGear, struct FDcxGear* TargetGear);
	bool IsWheelDisabled(int* WheelIndex);
	bool GetWheelState(int* WheelIndex, struct FDcxVehicleWheelState* WheelState);
	float GetWheelRotationSpeed(int* WheelIndex);
	float GetWheelRotationAngle(int* WheelIndex);
	struct FVector GetWheelOffset(int* WheelIndex);
	struct FDcxVehicleWheelData GetWheelData(int* WheelIndex);
	class UDcxVehicleTire* GetTire(int* WheelIndex);
	struct FDcxVehicleSuspensionData GetSuspensionData(int* WheelIndex);
	class UDcxVehicleWheelsRawInput* GetRawInput();
	int GetNumWheels();
	float GetForwardSpeed();
	float GetChassisMass();
	struct FName GetBoneName(int* WheelIndex);
	float GetAnalogControl(unsigned char* Control);
	void EnableWheel(int* WheelIndex);
	void EnableAvoidance(bool* bEnabled);
	void DisableWheel(int* WheelIndex);
};


// Class DcxVehicle.DcxVehicleDriveComponent
// 0x0178 (0x03B8 - 0x0240)
class UDcxVehicleDriveComponent : public UDcxVehicleWheelsComponent
{
public:
	struct FDcxVehicleEngineData                       EngineData;                                               // 0x0240(0x00A0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FDcxVehicleGearboxData                      GearboxData;                                              // 0x02E0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FDcxVehicleClutchData                       ClutchData;                                               // 0x0310(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAutoReverse;                                             // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0321(0x0003) MISSED OFFSET
	float                                              WrongDirectionThreshold;                                  // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoBrake;                                               // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	float                                              StopThreshold;                                            // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          SteerCurve;                                               // 0x0330(0x0088) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveComponent");
		return ptr;
	}


	void SetTargetGear(int* NewGear, bool* bImmediate);
	void SetGearboxType(TEnumAsByte<EDcxVehicleGearbox>* NewGearboxType);
	void SetGearboxData(struct FDcxVehicleGearboxData* NewGearboxData);
	void SetEngineRotationSpeed(float* RPM);
	void SetEngineData(struct FDcxVehicleEngineData* NewEngineData);
	void SetClutchData(struct FDcxVehicleClutchData* NewClutchData);
	int GetTargetGear();
	TEnumAsByte<EDcxVehicleGearbox> GetGearboxType();
	struct FDcxVehicleGearboxData GetGearboxData();
	float GetEngineRotationSpeed();
	struct FDcxVehicleEngineData GetEngineData();
	int GetCurrentGear();
	struct FDcxVehicleClutchData GetClutchData();
};


// Class DcxVehicle.DcxVehicleDriveComponent4W
// 0x0020 (0x03D8 - 0x03B8)
class UDcxVehicleDriveComponent4W : public UDcxVehicleDriveComponent
{
public:
	struct FDcxVehicleDifferentialData4W               DifferentialData;                                         // 0x03B8(0x001C) (Edit)
	float                                              AckermannGeometryAccuracy;                                // 0x03D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveComponent4W");
		return ptr;
	}


	void SetDifferentialData(struct FDcxVehicleDifferentialData4W* NewDifferentialData);
	class UDcxVehicleDriveRawInput4W* GetRawInput4W();
	struct FDcxVehicleDifferentialData4W GetDifferentialData();
};


// Class DcxVehicle.DcxVehicleDriveComponentNW
// 0x0000 (0x03B8 - 0x03B8)
class UDcxVehicleDriveComponentNW : public UDcxVehicleDriveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveComponentNW");
		return ptr;
	}


	void SetTargetGear(int* NewGear, bool* bImmediate);
	void SetGearboxType(TEnumAsByte<EDcxVehicleGearbox>* NewGearboxType);
	void SetGearboxData(struct FDcxVehicleGearboxData* NewGearboxData);
	void SetEngineRotationSpeed(float* RPM);
	void SetEngineData(struct FDcxVehicleEngineData* NewEngineData);
	void SetClutchData(struct FDcxVehicleClutchData* NewClutchData);
	int GetTargetGear();
	TEnumAsByte<EDcxVehicleGearbox> GetGearboxType();
	struct FDcxVehicleGearboxData GetGearboxData();
	float GetEngineRotationSpeed();
	struct FDcxVehicleEngineData GetEngineData();
	int GetCurrentGear();
	struct FDcxVehicleClutchData GetClutchData();
};


// Class DcxVehicle.DcxVehicleDriveComponentTank
// 0x0008 (0x03C0 - 0x03B8)
class UDcxVehicleDriveComponentTank : public UDcxVehicleDriveComponent
{
public:
	TEnumAsByte<EDcxVehicleDriveControlModelTank>      DriveModel;                                               // 0x03B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveComponentTank");
		return ptr;
	}


	void SetDriveModel(TEnumAsByte<EDcxVehicleDriveControlModelTank>* ControlModel);
	class UDcxVehicleDriveRawInputTank* GetRawInputTank();
	TEnumAsByte<EDcxVehicleDriveControlModelTank> GetDriveModel();
};


// Class DcxVehicle.DcxVehicleWheelsRawInput
// 0x0018 (0x0040 - 0x0028)
class UDcxVehicleWheelsRawInput : public UObject
{
public:
	int                                                ThrottleIndex;                                            // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<float>                                      RawAnalogControls;                                        // 0x0030(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleWheelsRawInput");
		return ptr;
	}


	void SetThrottle(float* Throttle);
	float GetThrottle();
};


// Class DcxVehicle.DcxVehicleDriveRawInput
// 0x0008 (0x0048 - 0x0040)
class UDcxVehicleDriveRawInput : public UDcxVehicleWheelsRawInput
{
public:
	int                                                ClutchIndex;                                              // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bGearUp;                                                  // 0x0044(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bGearDown;                                                // 0x0045(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0046(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveRawInput");
		return ptr;
	}


	void SetGearUp(bool* bGearUpPressed);
	void SetGearDown(bool* bGearDownPressed);
	void SetClutch(float* Clutch);
	bool GetGearUp();
	bool GetGearDown();
	float GetClutch();
};


// Class DcxVehicle.DcxVehicleDriveRawInput4W
// 0x0000 (0x0048 - 0x0048)
class UDcxVehicleDriveRawInput4W : public UDcxVehicleDriveRawInput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveRawInput4W");
		return ptr;
	}


	void SetGearUp(bool* bGearUpPressed);
	void SetGearDown(bool* bGearDownPressed);
	void SetClutch(float* Clutch);
	bool GetGearUp();
	bool GetGearDown();
	float GetClutch();
};


// Class DcxVehicle.DcxVehicleDriveRawInputNW
// 0x0000 (0x0048 - 0x0048)
class UDcxVehicleDriveRawInputNW : public UDcxVehicleDriveRawInput4W
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveRawInputNW");
		return ptr;
	}


	void SetGearUp(bool* bGearUpPressed);
	void SetGearDown(bool* bGearDownPressed);
	void SetClutch(float* Clutch);
	bool GetGearUp();
	bool GetGearDown();
	float GetClutch();
};


// Class DcxVehicle.DcxVehicleDriveRawInputTank
// 0x0008 (0x0050 - 0x0048)
class UDcxVehicleDriveRawInputTank : public UDcxVehicleDriveRawInput
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleDriveRawInputTank");
		return ptr;
	}


	void SetGearUp(bool* bGearUpPressed);
	void SetGearDown(bool* bGearDownPressed);
	void SetClutch(float* Clutch);
	bool GetGearUp();
	bool GetGearDown();
	float GetClutch();
};


// Class DcxVehicle.DcxVehicleNoDrive
// 0x0000 (0x0288 - 0x0288)
class ADcxVehicleNoDrive : public ADcxVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleNoDrive");
		return ptr;
	}


	class UDcxVehicleWheelsComponent* GetVehicleWheels();
	class USkeletalMeshComponent* GetMesh();
	void DcxVehicleSetBasisVectors(struct FVector* Up, struct FVector* Forward);
};


// Class DcxVehicle.DcxVehicleNoDriveComponent
// 0x0008 (0x0248 - 0x0240)
class UDcxVehicleNoDriveComponent : public UDcxVehicleWheelsComponent
{
public:
	bool                                               bUseRawInput;                                             // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0241(0x0003) MISSED OFFSET
	float                                              MaxDriveTorque;                                           // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleNoDriveComponent");
		return ptr;
	}


	void SetSteerAngle(int* WheelIndex, float* SteerAngle);
	void SetDriveTorque(int* WheelIndex, float* DriveTorque);
	void SetBrakeTorque(int* WheelIndex, float* BrakeTorque);
	float GetSteerAngle(int* WheelIndex);
	class UDcxVehicleNoDriveRawInput* GetRawInputND();
	float GetDriveTorque(int* WheelIndex);
	float GetBrakeTorque(int* WheelIndex);
};


// Class DcxVehicle.DcxVehicleNoDriveRawInput
// 0x0000 (0x0040 - 0x0040)
class UDcxVehicleNoDriveRawInput : public UDcxVehicleWheelsRawInput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleNoDriveRawInput");
		return ptr;
	}


	void SetThrottle(float* Throttle);
	float GetThrottle();
};


// Class DcxVehicle.DcxVehicleNW
// 0x0000 (0x0288 - 0x0288)
class ADcxVehicleNW : public ADcxVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleNW");
		return ptr;
	}


	class UDcxVehicleWheelsComponent* GetVehicleWheels();
	class USkeletalMeshComponent* GetMesh();
	void DcxVehicleSetBasisVectors(struct FVector* Up, struct FVector* Forward);
};


// Class DcxVehicle.DcxVehicleTank
// 0x0000 (0x0288 - 0x0288)
class ADcxVehicleTank : public ADcxVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleTank");
		return ptr;
	}


	class UDcxVehicleWheelsComponent* GetVehicleWheels();
	class USkeletalMeshComponent* GetMesh();
	void DcxVehicleSetBasisVectors(struct FVector* Up, struct FVector* Forward);
};


// Class DcxVehicle.DcxVehicleTire
// 0x00B0 (0x00E0 - 0x0030)
class UDcxVehicleTire : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0030(0x0004) MISSED OFFSET
	float                                              LateralStiffnessX;                                        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LateralStiffnessY;                                        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LongitudinalStiffnessPerUnitGravity;                      // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CamberStiffnessPerUnitGravity;                            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          FrictionVsSlipGraph;                                      // 0x0048(0x0088) (Edit, BlueprintVisible)
	TArray<struct FDcxDrivableSurfaceToTireFrictionPair> DrivableSurfaceToTireFrictionPairs;                       // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DcxVehicle.DcxVehicleTire");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

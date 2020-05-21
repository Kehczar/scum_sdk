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

// Function OceanPlugin.AdvancedBuoyancyComponent.TriangleArea
// ()
// Parameters:
// struct FVector*                A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                B                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                C                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAdvancedBuoyancyComponent::TriangleArea(struct FVector* A, struct FVector* B, struct FVector* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.TriangleArea");

	UAdvancedBuoyancyComponent_TriangleArea_Params params;
	params.A = A;
	params.B = B;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.SplitTriangle
// ()
// Parameters:
// struct FBuoyancyVertex*        H                              (Parm)
// struct FBuoyancyVertex*        M                              (Parm)
// struct FBuoyancyVertex*        L                              (Parm)
// struct FVector*                InArrow                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FForceTriangle>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FForceTriangle> UAdvancedBuoyancyComponent::SplitTriangle(struct FBuoyancyVertex* H, struct FBuoyancyVertex* M, struct FBuoyancyVertex* L, struct FVector* InArrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.SplitTriangle");

	UAdvancedBuoyancyComponent_SplitTriangle_Params params;
	params.H = H;
	params.M = M;
	params.L = L;
	params.InArrow = InArrow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.SetMeshDensity
// ()
// Parameters:
// float*                         NewDensity                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewWaterDensity                (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedBuoyancyComponent::SetMeshDensity(float* NewDensity, float* NewWaterDensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.SetMeshDensity");

	UAdvancedBuoyancyComponent_SetMeshDensity_Params params;
	params.NewDensity = NewDensity;
	params.NewWaterDensity = NewWaterDensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.GetOceanDepthFromGrid
// ()
// Parameters:
// struct FVector*                Position                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bJustGetHeightAtLocation       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAdvancedBuoyancyComponent::GetOceanDepthFromGrid(struct FVector* Position, bool* bJustGetHeightAtLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.GetOceanDepthFromGrid");

	UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Params params;
	params.Position = Position;
	params.bJustGetHeightAtLocation = bJustGetHeightAtLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.GetOcean
// ()

void UAdvancedBuoyancyComponent::GetOcean()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.GetOcean");

	UAdvancedBuoyancyComponent_GetOcean_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.DrawDebugStuff
// ()
// Parameters:
// struct FForceTriangle*         TriForce                       (Parm)
// struct FColor*                 DebugColor                     (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedBuoyancyComponent::DrawDebugStuff(struct FForceTriangle* TriForce, struct FColor* DebugColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.DrawDebugStuff");

	UAdvancedBuoyancyComponent_DrawDebugStuff_Params params;
	params.TriForce = TriForce;
	params.DebugColor = DebugColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.ApplySlamForce
// ()
// Parameters:
// struct FVector*                SlamForce                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TriCenter                      (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedBuoyancyComponent::ApplySlamForce(struct FVector* SlamForce, struct FVector* TriCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.ApplySlamForce");

	UAdvancedBuoyancyComponent_ApplySlamForce_Params params;
	params.SlamForce = SlamForce;
	params.TriCenter = TriCenter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.ApplyForce
// ()
// Parameters:
// struct FForceTriangle*         TriForce                       (Parm)

void UAdvancedBuoyancyComponent::ApplyForce(struct FForceTriangle* TriForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.ApplyForce");

	UAdvancedBuoyancyComponent_ApplyForce_Params params;
	params.TriForce = TriForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.CustomVehicleController.GetIsDriving
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomVehicleController::GetIsDriving()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.CustomVehicleController.GetIsDriving");

	ACustomVehicleController_GetIsDriving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.CustomVehicleController.ExitVehicle
// ()

void ACustomVehicleController::ExitVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.CustomVehicleController.ExitVehicle");

	ACustomVehicleController_ExitVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.CustomVehicleController.EnterVehicle
// ()
// Parameters:
// class APawn**                  Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void ACustomVehicleController::EnterVehicle(class APawn** Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.CustomVehicleController.EnterVehicle");

	ACustomVehicleController_EnterVehicle_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.CustomVehicleController.EnableBuoyancy
// ()

void ACustomVehicleController::EnableBuoyancy()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.CustomVehicleController.EnableBuoyancy");

	ACustomVehicleController_EnableBuoyancy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints
// ()

void ACustomVehicleController::DrawBuoyancyPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints");

	ACustomVehicleController_DrawBuoyancyPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.FlockFish.OnEndOverlap
// ()
// Parameters:
// class UPrimitiveComponent**    activatedComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AFlockFish::OnEndOverlap(class UPrimitiveComponent** activatedComp, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.FlockFish.OnEndOverlap");

	AFlockFish_OnEndOverlap_Params params;
	params.activatedComp = activatedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.FlockFish.OnBeginOverlap
// ()
// Parameters:
// class UPrimitiveComponent**    activatedComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFlockFish::OnBeginOverlap(class UPrimitiveComponent** activatedComp, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.FlockFish.OnBeginOverlap");

	AFlockFish_OnBeginOverlap_Params params;
	params.activatedComp = activatedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.OceanManager.MySetNetworkOffset
// ()
// Parameters:
// float*                         Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void AOceanManager::MySetNetworkOffset(float* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.OceanManager.MySetNetworkOffset");

	AOceanManager_MySetNetworkOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.OceanManager.LoadLandscapeHeightmap
// ()
// Parameters:
// class UTexture2D**             Tex2D                          (Parm, ZeroConstructor, IsPlainOldData)

void AOceanManager::LoadLandscapeHeightmap(class UTexture2D** Tex2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.OceanManager.LoadLandscapeHeightmap");

	AOceanManager_LoadLandscapeHeightmap_Params params;
	params.Tex2D = Tex2D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.OceanManager.GetWaveHeightValue
// ()
// Parameters:
// struct FVector*                Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWorld**                 World                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          HeightOnly                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          TwoIterations                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AOceanManager::GetWaveHeightValue(struct FVector* Location, class UWorld** World, bool* HeightOnly, bool* TwoIterations)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.OceanManager.GetWaveHeightValue");

	AOceanManager_GetWaveHeightValue_Params params;
	params.Location = Location;
	params.World = World;
	params.HeightOnly = HeightOnly;
	params.TwoIterations = TwoIterations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.OceanManager.GetHeightmapPixel
// ()
// Parameters:
// float*                         U                              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         V                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor AOceanManager::GetHeightmapPixel(float* U, float* V)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.OceanManager.GetHeightmapPixel");

	AOceanManager_GetHeightmapPixel_Params params;
	params.U = U;
	params.V = V;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.SetCurrentLocalTime
// ()
// Parameters:
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)

void ATimeManager::SetCurrentLocalTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.SetCurrentLocalTime");

	ATimeManager_SetCurrentLocalTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.TimeManager.IsLeapYear
// ()
// Parameters:
// int*                           Year                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATimeManager::IsLeapYear(int* Year)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.IsLeapYear");

	ATimeManager_IsLeapYear_Params params;
	params.Year = Year;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.InitializeCalendar
// ()
// Parameters:
// struct FTimeDate*              Time                           (Parm)

void ATimeManager::InitializeCalendar(struct FTimeDate* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.InitializeCalendar");

	ATimeManager_InitializeCalendar_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.TimeManager.IncrementTime
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATimeManager::IncrementTime(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.IncrementTime");

	ATimeManager_IncrementTime_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.TimeManager.GetYearPhase
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATimeManager::GetYearPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetYearPhase");

	ATimeManager_GetYearPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetElapsedDayInMinutes
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATimeManager::GetElapsedDayInMinutes()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetElapsedDayInMinutes");

	ATimeManager_GetElapsedDayInMinutes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDaysInYear
// ()
// Parameters:
// int*                           Year                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATimeManager::GetDaysInYear(int* Year)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetDaysInYear");

	ATimeManager_GetDaysInYear_Params params;
	params.Year = Year;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDaysInMonth
// ()
// Parameters:
// int*                           Year                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Month                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATimeManager::GetDaysInMonth(int* Year, int* Month)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetDaysInMonth");

	ATimeManager_GetDaysInMonth_Params params;
	params.Year = Year;
	params.Month = Month;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDayPhase
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATimeManager::GetDayPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetDayPhase");

	ATimeManager_GetDayPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDayOfYear
// ()
// Parameters:
// struct FTimeDate*              Time                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATimeManager::GetDayOfYear(struct FTimeDate* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetDayOfYear");

	ATimeManager_GetDayOfYear_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateSunAngle
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ATimeManager::CalculateSunAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.CalculateSunAngle");

	ATimeManager_CalculateSunAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateMoonPhase
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATimeManager::CalculateMoonPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.CalculateMoonPhase");

	ATimeManager_CalculateMoonPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateMoonAngle
// ()
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator ATimeManager::CalculateMoonAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.CalculateMoonAngle");

	ATimeManager_CalculateMoonAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_FootstepTracker.BP_FootstepTracker_C.DrawToTexture
// ()
// Parameters:
// class UCanvasRenderTarget2D**  RenderTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              DrawSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic** Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         AccuracyDivider                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FootstepTracker_C::DrawToTexture(class UCanvasRenderTarget2D** RenderTarget, struct FVector2D* DrawSize, class UMaterialInstanceDynamic** Material, float* Rotation, float* AccuracyDivider, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.DrawToTexture");

	ABP_FootstepTracker_C_DrawToTexture_Params params;
	params.RenderTarget = RenderTarget;
	params.DrawSize = DrawSize;
	params.Material = Material;
	params.Rotation = Rotation;
	params.AccuracyDivider = AccuracyDivider;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FootstepTracker.BP_FootstepTracker_C.Blitzkrieg Boom
// ()

void ABP_FootstepTracker_C::Blitzkrieg_Boom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.Blitzkrieg Boom");

	ABP_FootstepTracker_C_Blitzkrieg_Boom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FootstepTracker_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveTick");

	ABP_FootstepTracker_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FootstepTracker.BP_FootstepTracker_C.DrawFootstep
// ()
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          flip                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         footstepNumber                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FootstepTracker_C::DrawFootstep(struct FVector* Location, bool* flip, float* Rotation, float* footstepNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.DrawFootstep");

	ABP_FootstepTracker_C_DrawFootstep_Params params;
	params.Location = Location;
	params.flip = flip;
	params.Rotation = Rotation;
	params.footstepNumber = footstepNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveBeginPlay
// ()

void ABP_FootstepTracker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveBeginPlay");

	ABP_FootstepTracker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FootstepTracker.BP_FootstepTracker_C.ExecuteUbergraph_BP_FootstepTracker
// ()
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FootstepTracker_C::ExecuteUbergraph_BP_FootstepTracker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FootstepTracker.BP_FootstepTracker_C.ExecuteUbergraph_BP_FootstepTracker");

	ABP_FootstepTracker_C_ExecuteUbergraph_BP_FootstepTracker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_Menu_Design.BP_Menu_Design_C.PrisonerMoveInsideTimeline__FinishedFunc
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer)

void ABP_Menu_Design_C::PrisonerMoveInsideTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.PrisonerMoveInsideTimeline__FinishedFunc");

	ABP_Menu_Design_C_PrisonerMoveInsideTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.PrisonerMoveInsideTimeline__UpdateFunc
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer)

void ABP_Menu_Design_C::PrisonerMoveInsideTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.PrisonerMoveInsideTimeline__UpdateFunc");

	ABP_Menu_Design_C_PrisonerMoveInsideTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.ReceiveBeginPlay
// (Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer)

void ABP_Menu_Design_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.ReceiveBeginPlay");

	ABP_Menu_Design_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.ReceiveTick
// (Net, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.ReceiveTick");

	ABP_Menu_Design_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.StartPrisonerEnterSequence
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)
// Parameters:
// bool*                          backwards                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::STATIC_StartPrisonerEnterSequence(bool* backwards)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.StartPrisonerEnterSequence");

	ABP_Menu_Design_C_StartPrisonerEnterSequence_Params params;
	params.backwards = backwards;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks1_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature
// (Net, Native, NetResponse, Static, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ParticleCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::STATIC_BndEvt__Sparks1_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature(struct FName* EventName, float* EmitterTime, int* ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks1_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature");

	ABP_Menu_Design_C_BndEvt__Sparks1_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks2_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature
// (Net, NetReliable, Event, NetResponse, Static, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ParticleCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::STATIC_BndEvt__Sparks2_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature(struct FName* EventName, float* EmitterTime, int* ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks2_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature");

	ABP_Menu_Design_C_BndEvt__Sparks2_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks3_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature
// (Event, NetResponse, Static, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ParticleCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::STATIC_BndEvt__Sparks3_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(struct FName* EventName, float* EmitterTime, int* ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Sparks3_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature");

	ABP_Menu_Design_C_BndEvt__Sparks3_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke1_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature
// (Net, NetReliable, Exec, NetResponse, Static, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ParticleCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::STATIC_BndEvt__Smoke1_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature(struct FName* EventName, float* EmitterTime, int* ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke1_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature");

	ABP_Menu_Design_C_BndEvt__Smoke1_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke2_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature
// (Net, Exec, Native, Event, Static, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ParticleCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::STATIC_BndEvt__Smoke2_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature(struct FName* EventName, float* EmitterTime, int* ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke2_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature");

	ABP_Menu_Design_C_BndEvt__Smoke2_K2Node_ComponentBoundEvent_1_ParticleBurstSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke3_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature
// (Net, NetReliable, Exec, Event, NetMulticast, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ParticleCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::BndEvt__Smoke3_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature(struct FName* EventName, float* EmitterTime, int* ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke3_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature");

	ABP_Menu_Design_C_BndEvt__Smoke3_K2Node_ComponentBoundEvent_2_ParticleBurstSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke4_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature
// (NetReliable, NetRequest, Native, Static, NetMulticast, Protected, Delegate, NetServer, NetClient, NetValidate)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ParticleCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::STATIC_BndEvt__Smoke4_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature(struct FName* EventName, float* EmitterTime, int* ParticleCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.BndEvt__Smoke4_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature");

	ABP_Menu_Design_C_BndEvt__Smoke4_K2Node_ComponentBoundEvent_3_ParticleBurstSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleCount = ParticleCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu_Design.BP_Menu_Design_C.ExecuteUbergraph_BP_Menu_Design
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintPure, NetValidate)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu_Design_C::STATIC_ExecuteUbergraph_BP_Menu_Design(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu_Design.BP_Menu_Design_C.ExecuteUbergraph_BP_Menu_Design");

	ABP_Menu_Design_C_ExecuteUbergraph_BP_Menu_Design_Params params;
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

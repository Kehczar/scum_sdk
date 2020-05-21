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

// Function BP_Prisoner.BP_Prisoner_C.UpdateHair
// ()

void ABP_Prisoner_C::UpdateHair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.UpdateHair");

	ABP_Prisoner_C_UpdateHair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prisoner.BP_Prisoner_C.FindOtherPlayersInRange
// ()
// Parameters:
// float*                         SearchDistance                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABP_Prisoner_C*>  OtherPlayers                   (Parm, OutParm, ZeroConstructor)

void ABP_Prisoner_C::FindOtherPlayersInRange(float* SearchDistance, TArray<class ABP_Prisoner_C*>* OtherPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.FindOtherPlayersInRange");

	ABP_Prisoner_C_FindOtherPlayersInRange_Params params;
	params.SearchDistance = SearchDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OtherPlayers != nullptr)
		*OtherPlayers = params.OtherPlayers;
}


// Function BP_Prisoner.BP_Prisoner_C.DebugPrint
// ()
// Parameters:
// struct FString*                MessageString                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                ValueString                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Prisoner_C::DebugPrint(struct FString* MessageString, struct FString* ValueString, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.DebugPrint");

	ABP_Prisoner_C_DebugPrint_Params params;
	params.MessageString = MessageString;
	params.ValueString = ValueString;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prisoner.BP_Prisoner_C.IKFootTraceToRemove
// ()
// Parameters:
// float*                         TraceDistance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          IKOffset                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Prisoner_C::IKFootTraceToRemove(float* TraceDistance, struct FName* Socket, float* IKOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.IKFootTraceToRemove");

	ABP_Prisoner_C_IKFootTraceToRemove_Params params;
	params.TraceDistance = TraceDistance;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IKOffset != nullptr)
		*IKOffset = params.IKOffset;
}


// Function BP_Prisoner.BP_Prisoner_C.UserConstructionScript
// ()

void ABP_Prisoner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.UserConstructionScript");

	ABP_Prisoner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prisoner.BP_Prisoner_C.DrawFootstep
// ()
// Parameters:
// bool*                          flip                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Prisoner_C::DrawFootstep(bool* flip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.DrawFootstep");

	ABP_Prisoner_C_DrawFootstep_Params params;
	params.flip = flip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prisoner.BP_Prisoner_C.InitTextMeshFromName
// ()
// Parameters:
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_Prisoner_C::InitTextMeshFromName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.InitTextMeshFromName");

	ABP_Prisoner_C_InitTextMeshFromName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prisoner.BP_Prisoner_C.ServerProcessVoiceChatData
// ()
// Parameters:
// TArray<unsigned char>*         CompressedVoiceData            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Prisoner_C::ServerProcessVoiceChatData(TArray<unsigned char>* CompressedVoiceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.ServerProcessVoiceChatData");

	ABP_Prisoner_C_ServerProcessVoiceChatData_Params params;
	params.CompressedVoiceData = CompressedVoiceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prisoner.BP_Prisoner_C.ClientReceiveVoiceData
// ()
// Parameters:
// class ABP_Prisoner_C**         FromPlayer                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>*         CompressedVoiceData            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Prisoner_C::ClientReceiveVoiceData(class ABP_Prisoner_C** FromPlayer, TArray<unsigned char>* CompressedVoiceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.ClientReceiveVoiceData");

	ABP_Prisoner_C_ClientReceiveVoiceData_Params params;
	params.FromPlayer = FromPlayer;
	params.CompressedVoiceData = CompressedVoiceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prisoner.BP_Prisoner_C.PlayVoiceChat
// ()
// Parameters:
// TArray<unsigned char>*         CompressedVoiceData            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Prisoner_C::PlayVoiceChat(TArray<unsigned char>* CompressedVoiceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.PlayVoiceChat");

	ABP_Prisoner_C_PlayVoiceChat_Params params;
	params.CompressedVoiceData = CompressedVoiceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prisoner.BP_Prisoner_C.BndEvt__VoiceChat_K2Node_ComponentBoundEvent_2_VoiceDataAvailableSignature__DelegateSignature
// ()

void ABP_Prisoner_C::BndEvt__VoiceChat_K2Node_ComponentBoundEvent_2_VoiceDataAvailableSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.BndEvt__VoiceChat_K2Node_ComponentBoundEvent_2_VoiceDataAvailableSignature__DelegateSignature");

	ABP_Prisoner_C_BndEvt__VoiceChat_K2Node_ComponentBoundEvent_2_VoiceDataAvailableSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prisoner.BP_Prisoner_C.BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceChatStateChangedSignature__DelegateSignature
// ()

void ABP_Prisoner_C::BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceChatStateChangedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceChatStateChangedSignature__DelegateSignature");

	ABP_Prisoner_C_BndEvt__VoiceChat_K2Node_ComponentBoundEvent_0_VoiceChatStateChangedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prisoner.BP_Prisoner_C.BndEvt__VoiceChat_K2Node_ComponentBoundEvent_1_VoiceChatStateChangedSignature__DelegateSignature
// ()

void ABP_Prisoner_C::BndEvt__VoiceChat_K2Node_ComponentBoundEvent_1_VoiceChatStateChangedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.BndEvt__VoiceChat_K2Node_ComponentBoundEvent_1_VoiceChatStateChangedSignature__DelegateSignature");

	ABP_Prisoner_C_BndEvt__VoiceChat_K2Node_ComponentBoundEvent_1_VoiceChatStateChangedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prisoner.BP_Prisoner_C.UpdateHairVisuals
// ()

void ABP_Prisoner_C::UpdateHairVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.UpdateHairVisuals");

	ABP_Prisoner_C_UpdateHairVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prisoner.BP_Prisoner_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Prisoner_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.ReceiveTick");

	ABP_Prisoner_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Prisoner.BP_Prisoner_C.ExecuteUbergraph_BP_Prisoner
// ()
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Prisoner_C::ExecuteUbergraph_BP_Prisoner(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prisoner.BP_Prisoner_C.ExecuteUbergraph_BP_Prisoner");

	ABP_Prisoner_C_ExecuteUbergraph_BP_Prisoner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

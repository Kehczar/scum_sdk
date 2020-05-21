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

// Function LevelSequence.LevelSequence.RemoveMetaDataByClass
// ()
// Parameters:
// class UClass**                 InClass                        (Parm, ZeroConstructor, IsPlainOldData)

void ULevelSequence::RemoveMetaDataByClass(class UClass** InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.RemoveMetaDataByClass");

	ULevelSequence_RemoveMetaDataByClass_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
// ()
// Parameters:
// class UClass**                 InClass                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* ULevelSequence::FindOrAddMetaDataByClass(class UClass** InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass");

	ULevelSequence_FindOrAddMetaDataByClass_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequence.FindMetaDataByClass
// ()
// Parameters:
// class UClass**                 InClass                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* ULevelSequence::FindMetaDataByClass(class UClass** InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindMetaDataByClass");

	ULevelSequence_FindMetaDataByClass_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequence.CopyMetaData
// ()
// Parameters:
// class UObject**                InMetaData                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* ULevelSequence::CopyMetaData(class UObject** InMetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.CopyMetaData");

	ULevelSequence_CopyMetaData_Params params;
	params.InMetaData = InMetaData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
// ()
// Parameters:
// struct FSoftClassPath*         InBurnInClass                  (Parm, ZeroConstructor)

void ULevelSequenceBurnInOptions::SetBurnIn(struct FSoftClassPath* InBurnInClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn");

	ULevelSequenceBurnInOptions_SetBurnIn_Params params;
	params.InBurnInClass = InBurnInClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.ShowBurnin
// ()

void ALevelSequenceActor::ShowBurnin()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ShowBurnin");

	ALevelSequenceActor_ShowBurnin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.SetSequence
// ()
// Parameters:
// class ULevelSequence**         InSequence                     (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequenceActor::SetSequence(class ULevelSequence** InSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetSequence");

	ALevelSequenceActor_SetSequence_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
// ()
// Parameters:
// bool*                          ReplicatePlayback              (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequenceActor::SetReplicatePlayback(bool* ReplicatePlayback)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetReplicatePlayback");

	ALevelSequenceActor_SetReplicatePlayback_Params params;
	params.ReplicatePlayback = ReplicatePlayback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.SetEventReceivers
// ()
// Parameters:
// TArray<class AActor*>*         AdditionalReceivers            (Parm, ZeroConstructor)

void ALevelSequenceActor::SetEventReceivers(TArray<class AActor*>* AdditionalReceivers)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetEventReceivers");

	ALevelSequenceActor_SetEventReceivers_Params params;
	params.AdditionalReceivers = AdditionalReceivers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.SetBindingByTag
// ()
// Parameters:
// struct FName*                  BindingTag                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>*         Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequenceActor::SetBindingByTag(struct FName* BindingTag, TArray<class AActor*>* Actors, bool* bAllowBindingsFromAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBindingByTag");

	ALevelSequenceActor_SetBindingByTag_Params params;
	params.BindingTag = BindingTag;
	params.Actors = Actors;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.SetBinding
// ()
// Parameters:
// struct FMovieSceneObjectBindingID* Binding                        (Parm)
// TArray<class AActor*>*         Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequenceActor::SetBinding(struct FMovieSceneObjectBindingID* Binding, TArray<class AActor*>* Actors, bool* bAllowBindingsFromAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBinding");

	ALevelSequenceActor_SetBinding_Params params;
	params.Binding = Binding;
	params.Actors = Actors;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.ResetBindings
// ()

void ALevelSequenceActor::ResetBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBindings");

	ALevelSequenceActor_ResetBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.ResetBinding
// ()
// Parameters:
// struct FMovieSceneObjectBindingID* Binding                        (Parm)

void ALevelSequenceActor::ResetBinding(struct FMovieSceneObjectBindingID* Binding)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBinding");

	ALevelSequenceActor_ResetBinding_Params params;
	params.Binding = Binding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
// ()
// Parameters:
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequenceActor::RemoveBindingByTag(struct FName* Tag, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBindingByTag");

	ALevelSequenceActor_RemoveBindingByTag_Params params;
	params.Tag = Tag;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.RemoveBinding
// ()
// Parameters:
// struct FMovieSceneObjectBindingID* Binding                        (Parm)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequenceActor::RemoveBinding(struct FMovieSceneObjectBindingID* Binding, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBinding");

	ALevelSequenceActor_RemoveBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
// ()

void ALevelSequenceActor::OnLevelSequenceLoaded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature");

	ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.LoadSequence
// ()
// Parameters:
// class ULevelSequence*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequence* ALevelSequenceActor::LoadSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.LoadSequence");

	ALevelSequenceActor_LoadSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.HideBurnin
// ()

void ALevelSequenceActor::HideBurnin()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.HideBurnin");

	ALevelSequenceActor_HideBurnin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.GetSequencePlayer
// ()
// Parameters:
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequencePlayer* ALevelSequenceActor::GetSequencePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequencePlayer");

	ALevelSequenceActor_GetSequencePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.GetSequence
// ()
// Parameters:
// class ULevelSequence*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequence* ALevelSequenceActor::GetSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequence");

	ALevelSequenceActor_GetSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.FindNamedBindings
// ()
// Parameters:
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMovieSceneObjectBindingID> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FMovieSceneObjectBindingID> ALevelSequenceActor::FindNamedBindings(struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.FindNamedBindings");

	ALevelSequenceActor_FindNamedBindings_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.FindNamedBinding
// ()
// Parameters:
// struct FName*                  Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieSceneObjectBindingID ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMovieSceneObjectBindingID ALevelSequenceActor::FindNamedBinding(struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.FindNamedBinding");

	ALevelSequenceActor_FindNamedBinding_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.AddBindingByTag
// ()
// Parameters:
// struct FName*                  BindingTag                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequenceActor::AddBindingByTag(struct FName* BindingTag, class AActor** Actor, bool* bAllowBindingsFromAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBindingByTag");

	ALevelSequenceActor_AddBindingByTag_Params params;
	params.BindingTag = BindingTag;
	params.Actor = Actor;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.AddBinding
// ()
// Parameters:
// struct FMovieSceneObjectBindingID* Binding                        (Parm)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequenceActor::AddBinding(struct FMovieSceneObjectBindingID* Binding, class AActor** Actor, bool* bAllowBindingsFromAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBinding");

	ALevelSequenceActor_AddBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceBurnIn.SetSettings
// ()
// Parameters:
// class UObject**                InSettings                     (Parm, ZeroConstructor, IsPlainOldData)

void ULevelSequenceBurnIn::SetSettings(class UObject** InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.SetSettings");

	ULevelSequenceBurnIn_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// ()
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ULevelSequenceBurnIn::GetSettingsClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass");

	ULevelSequenceBurnIn_GetSettingsClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceDirector.OnCreated
// ()

void ULevelSequenceDirector::OnCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceDirector.OnCreated");

	ULevelSequenceDirector_OnCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
// ()
// Parameters:
// class UCameraComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCameraComponent* ULevelSequencePlayer::GetActiveCameraComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent");

	ULevelSequencePlayer_GetActiveCameraComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// ()
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence**         LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieSceneSequencePlaybackSettings* Settings                       (Parm)
// class ALevelSequenceActor*     OutActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(class UObject** WorldContextObject, class ULevelSequence** LevelSequence, struct FMovieSceneSequencePlaybackSettings* Settings, class ALevelSequenceActor** OutActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer");

	ULevelSequencePlayer_CreateLevelSequencePlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelSequence = LevelSequence;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
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

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange
// ()
// Parameters:
// int*                           Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ProgramNumber                  (Parm, ZeroConstructor, IsPlainOldData)

void UMIDIDeviceOutputController::SendMIDIProgramChange(int* Channel, int* ProgramNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange");

	UMIDIDeviceOutputController_SendMIDIProgramChange_Params params;
	params.Channel = Channel;
	params.ProgramNumber = ProgramNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend
// ()
// Parameters:
// int*                           Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Pitch                          (Parm, ZeroConstructor, IsPlainOldData)

void UMIDIDeviceOutputController::SendMIDIPitchBend(int* Channel, int* Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend");

	UMIDIDeviceOutputController_SendMIDIPitchBend_Params params;
	params.Channel = Channel;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn
// ()
// Parameters:
// int*                           Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Note                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void UMIDIDeviceOutputController::SendMIDINoteOn(int* Channel, int* Note, int* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn");

	UMIDIDeviceOutputController_SendMIDINoteOn_Params params;
	params.Channel = Channel;
	params.Note = Note;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff
// ()
// Parameters:
// int*                           Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Note                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void UMIDIDeviceOutputController::SendMIDINoteOff(int* Channel, int* Note, int* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff");

	UMIDIDeviceOutputController_SendMIDINoteOff_Params params;
	params.Channel = Channel;
	params.Note = Note;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch
// ()
// Parameters:
// int*                           Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Note                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UMIDIDeviceOutputController::SendMIDINoteAftertouch(int* Channel, int* Note, float* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch");

	UMIDIDeviceOutputController_SendMIDINoteAftertouch_Params params;
	params.Channel = Channel;
	params.Note = Note;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent
// ()
// Parameters:
// EMIDIEventType*                EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           data1                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           data2                          (Parm, ZeroConstructor, IsPlainOldData)

void UMIDIDeviceOutputController::SendMIDIEvent(EMIDIEventType* EventType, int* Channel, int* data1, int* data2)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent");

	UMIDIDeviceOutputController_SendMIDIEvent_Params params;
	params.EventType = EventType;
	params.Channel = Channel;
	params.data1 = data1;
	params.data2 = data2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange
// ()
// Parameters:
// int*                           Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UMIDIDeviceOutputController::SendMIDIControlChange(int* Channel, int* Type, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange");

	UMIDIDeviceOutputController_SendMIDIControlChange_Params params;
	params.Channel = Channel;
	params.Type = Type;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch
// ()
// Parameters:
// int*                           Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UMIDIDeviceOutputController::SendMIDIChannelAftertouch(int* Channel, float* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch");

	UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Params params;
	params.Channel = Channel;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

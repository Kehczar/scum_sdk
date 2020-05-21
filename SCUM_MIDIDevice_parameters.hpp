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

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange
struct UMIDIDeviceOutputController_SendMIDIProgramChange_Params
{
	int*                                               Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ProgramNumber;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend
struct UMIDIDeviceOutputController_SendMIDIPitchBend_Params
{
	int*                                               Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn
struct UMIDIDeviceOutputController_SendMIDINoteOn_Params
{
	int*                                               Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Note;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff
struct UMIDIDeviceOutputController_SendMIDINoteOff_Params
{
	int*                                               Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Note;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch
struct UMIDIDeviceOutputController_SendMIDINoteAftertouch_Params
{
	int*                                               Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Note;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent
struct UMIDIDeviceOutputController_SendMIDIEvent_Params
{
	EMIDIEventType*                                    EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               data1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               data2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange
struct UMIDIDeviceOutputController_SendMIDIControlChange_Params
{
	int*                                               Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch
struct UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Params
{
	int*                                               Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

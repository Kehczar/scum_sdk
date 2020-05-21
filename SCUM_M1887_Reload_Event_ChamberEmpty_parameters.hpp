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

// Function M1887_Reload_Event_ChamberEmpty.M1887_Reload_Event_ChamberEmpty_C.ExecuteUsingData
struct UM1887_Reload_Event_ChamberEmpty_C_ExecuteUsingData_Params
{
	struct FWeaponReloadData*                          Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function M1887_Reload_Event_ChamberEmpty.M1887_Reload_Event_ChamberEmpty_C.CanExecuteUsingData
struct UM1887_Reload_Event_ChamberEmpty_C_CanExecuteUsingData_Params
{
	struct FWeaponReloadData*                          Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function M1887_Reload_Event_ChamberEmpty.M1887_Reload_Event_ChamberEmpty_C.OnActionAnimNotify
struct UM1887_Reload_Event_ChamberEmpty_C_OnActionAnimNotify_Params
{
	ECharacterActionNotifyType*                        notifyType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function M1887_Reload_Event_ChamberEmpty.M1887_Reload_Event_ChamberEmpty_C.ExecuteUbergraph_M1887_Reload_Event_ChamberEmpty
struct UM1887_Reload_Event_ChamberEmpty_C_ExecuteUbergraph_M1887_Reload_Event_ChamberEmpty_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
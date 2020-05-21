#pragma once

// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PhysicsCore.EChaosBufferMode
enum class EChaosBufferMode : uint8_t
{
	EChaosBufferMode__Double       = 0,
	None                           = 1,
	EChaosBufferMode__Triple       = 2,
	neByteProperty‘IntProperty  = 3,
	EChaosBufferMode__Num          = 4,
	ByteProperty‘IntProperty    = 5,
	EChaosBufferMode__Invalid      = 6,
	ByteProperty                   = 7,
	EChaosBufferMode__EChaosBufferMode_MAX = 8,
	teProperty‘IntProperty        = 9,
	None01                         = 10,
	None02                         = 11,
	None03                         = 12,
	None04                         = 13,
	None05                         = 14,
	None06                         = 15,
	None07                         = 16,
	None08                         = 17,
	None09                         = 18,
	None10                         = 19,
	None11                         = 20,
	None12                         = 21,
	None13                         = 22,
	None14                         = 23
};


// Enum PhysicsCore.EChaosThreadingMode
enum class EChaosThreadingMode : uint8_t
{
	EChaosThreadingMode__DedicatedThread = 0,
	None                           = 1,
	EChaosThreadingMode__TaskGraph = 2,
	neByteProperty‘IntProperty  = 3,
	EChaosThreadingMode__SingleThread = 4,
	ByteProperty‘IntProperty    = 5,
	EChaosThreadingMode__Num       = 6,
	ByteProperty                   = 7,
	EChaosThreadingMode__Invalid   = 8,
	teProperty‘IntProperty        = 9,
	EChaosThreadingMode__EChaosThreadingMode_MAX = 10,
	Property‘IntProperty          = 11,
	None01                         = 12,
	None02                         = 13,
	None03                         = 14,
	None04                         = 15,
	None05                         = 16,
	None06                         = 17,
	None07                         = 18,
	None08                         = 19,
	None09                         = 20,
	None10                         = 21,
	None11                         = 22,
	None12                         = 23
};


// Enum PhysicsCore.EChaosSolverTickMode
enum class EChaosSolverTickMode : uint8_t
{
	EChaosSolverTickMode__Fixed    = 0,
	None                           = 1,
	EChaosSolverTickMode__Variable = 2,
	neByteProperty‘IntProperty  = 3,
	EChaosSolverTickMode__VariableCapped = 4,
	ByteProperty‘IntProperty    = 5,
	EChaosSolverTickMode__VariableCappedWithTarget = 6,
	ByteProperty                   = 7,
	EChaosSolverTickMode__EChaosSolverTickMode_MAX = 8,
	teProperty‘IntProperty        = 9,
	None01                         = 10,
	None02                         = 11,
	None03                         = 12,
	None04                         = 13,
	None05                         = 14,
	None06                         = 15,
	None07                         = 16,
	None08                         = 17,
	None09                         = 18,
	None10                         = 19,
	None11                         = 20,
	None12                         = 21,
	None13                         = 22,
	None14                         = 23
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

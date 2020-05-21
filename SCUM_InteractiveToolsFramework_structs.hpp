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

// Enum InteractiveToolsFramework.EInputCaptureState
enum class EInputCaptureState : uint8_t
{
	EInputCaptureState__Begin      = 0,
	neByteProperty‘IntProperty  = 1,
	EInputCaptureState__Continue   = 2,
	ByteProperty‘IntProperty    = 3,
	EInputCaptureState__End        = 4,
	ByteProperty                   = 5,
	EInputCaptureState__Ignore     = 6,
	teProperty‘IntProperty        = 7,
	EInputCaptureState__EInputCaptureState_MAX = 8,
	Property‘IntProperty          = 9,
	None                           = 10,
	None01                         = 11,
	None02                         = 12,
	None03                         = 13,
	None04                         = 14,
	None05                         = 15,
	None06                         = 16,
	None07                         = 17,
	None08                         = 18,
	None09                         = 19,
	None10                         = 20,
	None11                         = 21,
	None12                         = 22,
	None13                         = 23
};


// Enum InteractiveToolsFramework.EInputCaptureRequestType
enum class EInputCaptureRequestType : uint8_t
{
	EInputCaptureRequestType__Begin = 0,
	neByteProperty‘IntProperty  = 1,
	EInputCaptureRequestType__Ignore = 2,
	ByteProperty‘IntProperty    = 3,
	EInputCaptureRequestType__EInputCaptureRequestType_MAX = 4,
	ByteProperty                   = 5,
	None                           = 6,
	None01                         = 7,
	None02                         = 8,
	None03                         = 9,
	None04                         = 10,
	None05                         = 11,
	None06                         = 12,
	None07                         = 13,
	None08                         = 14,
	None09                         = 15,
	None10                         = 16,
	None11                         = 17,
	None12                         = 18,
	None13                         = 19
};


// Enum InteractiveToolsFramework.EInputCaptureSide
enum class EInputCaptureSide : uint8_t
{
	EInputCaptureSide__None        = 0,
	None                           = 1,
	EInputCaptureSide__Left        = 2,
	neByteProperty‘IntProperty  = 3,
	EInputCaptureSide__Right       = 4,
	ByteProperty‘IntProperty    = 5,
	EInputCaptureSide__Both        = 6,
	ByteProperty                   = 7,
	EInputCaptureSide__Any         = 8,
	roperty                        = 9,
	EInputCaptureSide__EInputCaptureSide_MAX = 10,
	perty                          = 11,
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


// Enum InteractiveToolsFramework.EInputDevices
enum class EInputDevices : uint8_t
{
	EInputDevices__None            = 0,
	None                           = 1,
	EInputDevices__Keyboard        = 2,
	neByteProperty‘IntProperty  = 3,
	EInputDevices__Mouse           = 4,
	ByteProperty‘IntProperty    = 5,
	EInputDevices__Gamepad         = 6,
	teProperty‘IntProperty        = 7,
	EInputDevices__OculusTouch     = 8,
	ty‘IntProperty                = 9,
	EInputDevices__HTCViveWands    = 10,
	
                              = 11,
	EInputDevices__AnySpatialDevice = 12,
	FloatProperty                  = 13,
	EInputDevices__TabletFingers   = 14,
	utBEditorKeyBindings          = 15,
	EInputDevices__EInputDevices_MAX = 16,
	BEditorKeyBindings            = 17,
	None01                         = 18,
	None02                         = 19,
	None03                         = 20,
	None04                         = 21,
	None05                         = 22,
	None06                         = 23,
	None07                         = 24,
	None08                         = 25,
	None09                         = 26,
	None10                         = 27
};


// Enum InteractiveToolsFramework.ETransformGizmoSubElements
enum class ETransformGizmoSubElements : uint8_t
{
	ETransformGizmoSubElements__None = 0,
	None                           = 1,
	ETransformGizmoSubElements__TranslateAxisX = 2,
	neByteProperty‘IntProperty  = 3,
	ETransformGizmoSubElements__TranslateAxisY = 4,
	ByteProperty‘IntProperty    = 5,
	ETransformGizmoSubElements__TranslateAxisZ = 6,
	teProperty‘IntProperty        = 7,
	ETransformGizmoSubElements__TranslateAllAxes = 8,
	erty‘IntProperty              = 9,
	ETransformGizmoSubElements__TranslatePlaneXY = 10,
	ty‘IntProperty                = 11,
	ETransformGizmoSubElements__TranslatePlaneXZ = 12,
	
                              = 13,
	ETransformGizmoSubElements__TranslatePlaneYZ = 14,
	ObjectProperty                 = 15,
	ETransformGizmoSubElements__TranslateAllPlanes = 16,
	DoubleProperty                 = 17,
	ETransformGizmoSubElements__RotateAxisX = 18,
	ArrayProperty                  = 19,
	ETransformGizmoSubElements__RotateAxisY = 20,
	ateProperty                    = 21,
	ETransformGizmoSubElements__RotateAxisZ = 22,
	hereÊ                          = 23,
	ETransformGizmoSubElements__RotateAllAxes = 24,
	ter                            = 25,
	ETransformGizmoSubElements__StanedardTranslateRotate = 26,
	rgraphDeviceIDRootStatBMoveActor = 27,
	ETransformGizmoSubElements__ETransformGizmoSubElements_MAX = 28,
	raphDeviceIDRootStatBMoveActor = 29,
	None01                         = 30,
	None02                         = 31,
	None03                         = 32,
	None04                         = 33,
	None05                         = 34,
	None06                         = 35
};


// Enum InteractiveToolsFramework.EToolSide
enum class EToolSide : uint8_t
{
	EToolSide__Left                = 0,
	neByteProperty‘IntProperty  = 1,
	EToolSide__Mouse               = 2,
	neByteProperty‘IntProperty01 = 3,
	EToolSide__Right               = 4,
	ByteProperty‘IntProperty    = 5,
	EToolSide__EToolSide_MAX       = 6,
	ByteProperty                   = 7,
	None                           = 8,
	None01                         = 9,
	None02                         = 10,
	None03                         = 11,
	None04                         = 12,
	None05                         = 13,
	None06                         = 14,
	None07                         = 15,
	None08                         = 16,
	None09                         = 17,
	None10                         = 18,
	None11                         = 19,
	None12                         = 20,
	None13                         = 21,
	None14                         = 22,
	None15                         = 23
};


// Enum InteractiveToolsFramework.ESelectedObjectsModificationType
enum class ESelectedObjectsModificationType : uint8_t
{
	ESelectedObjectsModificationType__Replace = 0,
	None                           = 1,
	ESelectedObjectsModificationType__Add = 2,
	neByteProperty‘IntProperty  = 3,
	ESelectedObjectsModificationType__Remove = 4,
	ByteProperty‘IntProperty    = 5,
	ESelectedObjectsModificationType__Clear = 6,
	ByteProperty                   = 7,
	ESelectedObjectsModificationType__ESelectedObjectsModificationType_MAX = 8,
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


// Enum InteractiveToolsFramework.EToolMessageLevel
enum class EToolMessageLevel : uint8_t
{
	EToolMessageLevel__Internal    = 0,
	None                           = 1,
	EToolMessageLevel__UserMessage = 2,
	neByteProperty‘IntProperty  = 3,
	EToolMessageLevel__UserNotification = 4,
	ByteProperty‘IntProperty    = 5,
	EToolMessageLevel__UserWarning = 6,
	ByteProperty                   = 7,
	EToolMessageLevel__UserError   = 8,
	teProperty‘IntProperty        = 9,
	EToolMessageLevel__EToolMessageLevel_MAX = 10,
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


// Enum InteractiveToolsFramework.EToolContextCoordinateSystem
enum class EToolContextCoordinateSystem : uint8_t
{
	EToolContextCoordinateSystem__World = 0,
	None                           = 1,
	EToolContextCoordinateSystem__Local = 2,
	neByteProperty‘IntProperty  = 3,
	EToolContextCoordinateSystem__EToolContextCoordinateSystem_MAX = 4,
	ByteProperty‘IntProperty    = 5,
	None01                         = 6,
	None02                         = 7,
	None03                         = 8,
	None04                         = 9,
	None05                         = 10,
	None06                         = 11,
	None07                         = 12,
	None08                         = 13,
	None09                         = 14,
	None10                         = 15,
	None11                         = 16,
	None12                         = 17,
	None13                         = 18,
	None14                         = 19
};


// Enum InteractiveToolsFramework.EStandardToolContextMaterials
enum class EStandardToolContextMaterials : uint8_t
{
	EStandardToolContextMaterials__VertexColorMaterial = 0,
	neByteProperty‘IntProperty  = 1,
	EStandardToolContextMaterials__EStandardToolContextMaterials_MAX = 2,
	ByteProperty‘IntProperty    = 3,
	None                           = 4,
	None01                         = 5,
	None02                         = 6,
	None03                         = 7,
	None04                         = 8,
	None05                         = 9,
	rkUnit_Animals_Animal_Horse_KillPAnimal_Horse_Kill = 10,
	None06                         = 11,
	None07                         = 12,
	None08                         = 13,
	None09                         = 14,
	None10                         = 15,
	None11                         = 16,
	None12                         = 17
};


// Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
enum class ESceneSnapQueryTargetType : uint8_t
{
	ESceneSnapQueryTargetType__None = 0,
	None                           = 1,
	ESceneSnapQueryTargetType__MeshVertex = 2,
	neByteProperty‘IntProperty  = 3,
	ESceneSnapQueryTargetType__MeshEdge = 4,
	ByteProperty‘IntProperty    = 5,
	ESceneSnapQueryTargetType__All = 6,
	ByteProperty                   = 7,
	ESceneSnapQueryTargetType__ESceneSnapQueryTargetType_MAX = 8,
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


// Enum InteractiveToolsFramework.ESceneSnapQueryType
enum class ESceneSnapQueryType : uint8_t
{
	ESceneSnapQueryType__Position  = 0,
	neByteProperty‘IntProperty  = 1,
	ESceneSnapQueryType__ESceneSnapQueryType_MAX = 2,
	ByteProperty‘IntProperty    = 3,
	None                           = 4,
	None01                         = 5,
	None02                         = 6,
	None03                         = 7,
	None04                         = 8,
	None05                         = 9,
	rkUnit_Animals_Animal_Horse_KillPAnimal_Horse_Kill = 10,
	None06                         = 11,
	None07                         = 12,
	None08                         = 13,
	None09                         = 14,
	None10                         = 15,
	None11                         = 16,
	None12                         = 17
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct InteractiveToolsFramework.BehaviorInfo
// 0x0020
struct FBehaviorInfo
{
	class UInputBehavior*                              Behavior;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct InteractiveToolsFramework.ActiveGizmo
// 0x0030
struct FActiveGizmo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
// 0x0008
struct FGizmoFloatParameterChange
{
	float                                              InitialValue;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
// 0x0010
struct FGizmoVec2ParameterChange
{
	struct FVector2D                                   InitialValue;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CurrentValue;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct InteractiveToolsFramework.InputRayHit
// 0x0028
struct FInputRayHit
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

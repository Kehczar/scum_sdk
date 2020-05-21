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

// Enum MeshModelingTools.EMakeMeshPivotLocation
enum class EMakeMeshPivotLocation : uint8_t
{
	EMakeMeshPivotLocation__Base   = 0,
	None                           = 1,
	EMakeMeshPivotLocation__Centered = 2,
	neByteProperty‘IntProperty  = 3,
	EMakeMeshPivotLocation__EMakeMeshPivotLocation_MAX = 4,
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


// Enum MeshModelingTools.EMakeMeshPlacementType
enum class EMakeMeshPlacementType : uint8_t
{
	EMakeMeshPlacementType__OnPlane = 0,
	None                           = 1,
	EMakeMeshPlacementType__OnScene = 2,
	neByteProperty‘IntProperty  = 3,
	EMakeMeshPlacementType__EMakeMeshPlacementType_MAX = 4,
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


// Enum MeshModelingTools.EMakeMeshShapeType
enum class EMakeMeshShapeType : uint8_t
{
	EMakeMeshShapeType__None       = 0,
	None                           = 1,
	EMakeMeshShapeType__All        = 2,
	Sphere                         = 3,
	EMakeMeshShapeType__Box        = 4,
	neByteProperty‘IntProperty  = 5,
	EMakeMeshShapeType__Cylinder   = 6,
	ByteProperty‘IntProperty    = 7,
	EMakeMeshShapeType__Cone       = 8,
	teProperty‘IntProperty        = 9,
	EMakeMeshShapeType__Plane      = 10,
	ty‘IntProperty                = 11,
	EMakeMeshShapeType__Sphere     = 12,
	
                              = 13,
	EMakeMeshShapeType__EMakeMeshShapeType_MAX = 14,
	hereÊ                          = 15,
	None01                         = 16,
	None02                         = 17,
	None03                         = 18,
	None04                         = 19,
	None05                         = 20,
	None06                         = 21,
	None07                         = 22,
	None08                         = 23,
	None09                         = 24,
	None10                         = 25,
	None11                         = 26,
	None12                         = 27
};


// Enum MeshModelingTools.EDisplaceMeshToolDisplaceType
enum class EDisplaceMeshToolDisplaceType : uint8_t
{
	EDisplaceMeshToolDisplaceType__Constant = 0,
	None                           = 1,
	EDisplaceMeshToolDisplaceType__RandomNoise = 2,
	neByteProperty‘IntProperty  = 3,
	EDisplaceMeshToolDisplaceType__DisplacementMap = 4,
	ByteProperty‘IntProperty    = 5,
	EDisplaceMeshToolDisplaceType__EDisplaceMeshToolDisplaceType_MAX = 6,
	ByteProperty                   = 7,
	None01                         = 8,
	None02                         = 9,
	None03                         = 10,
	None04                         = 11,
	None05                         = 12,
	None06                         = 13,
	None07                         = 14,
	None08                         = 15,
	None09                         = 16,
	None10                         = 17,
	None11                         = 18,
	None12                         = 19,
	None13                         = 20,
	None14                         = 21,
	None15                         = 22,
	None16                         = 23
};


// Enum MeshModelingTools.EDrawPolygonOutputMode
enum class EDrawPolygonOutputMode : uint8_t
{
	EDrawPolygonOutputMode__MeshedPolygon = 0,
	None                           = 1,
	EDrawPolygonOutputMode__ExtrudedConstant = 2,
	neByteProperty‘IntProperty  = 3,
	EDrawPolygonOutputMode__ExtrudedInteractive = 4,
	ByteProperty‘IntProperty    = 5,
	EDrawPolygonOutputMode__EDrawPolygonOutputMode_MAX = 6,
	ByteProperty                   = 7,
	None01                         = 8,
	None02                         = 9,
	None03                         = 10,
	None04                         = 11,
	None05                         = 12,
	None06                         = 13,
	None07                         = 14,
	None08                         = 15,
	None09                         = 16,
	None10                         = 17,
	None11                         = 18,
	None12                         = 19,
	None13                         = 20,
	None14                         = 21,
	None15                         = 22,
	None16                         = 23
};


// Enum MeshModelingTools.EDrawPolygonDrawMode
enum class EDrawPolygonDrawMode : uint8_t
{
	EDrawPolygonDrawMode__Freehand = 0,
	None                           = 1,
	EDrawPolygonDrawMode__Circle   = 2,
	neByteProperty‘IntProperty  = 3,
	EDrawPolygonDrawMode__Square   = 4,
	ByteProperty‘IntProperty    = 5,
	EDrawPolygonDrawMode__Rectangle = 6,
	ByteProperty                   = 7,
	EDrawPolygonDrawMode__EDrawPolygonDrawMode_MAX = 8,
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


// Enum MeshModelingTools.EDynamicMeshSculptBrushType
enum class EDynamicMeshSculptBrushType : uint8_t
{
	EDynamicMeshSculptBrushType__Move = 0,
	None                           = 1,
	EDynamicMeshSculptBrushType__Smooth = 2,
	neByteProperty‘IntProperty  = 3,
	EDynamicMeshSculptBrushType__Offset = 4,
	ByteProperty‘IntProperty    = 5,
	EDynamicMeshSculptBrushType__SculptMax = 6,
	ByteProperty                   = 7,
	EDynamicMeshSculptBrushType__Inflate = 8,
	teProperty‘IntProperty        = 9
};


// Enum MeshModelingTools.EPolygonGroupMode
enum class EPolygonGroupMode : uint8_t
{
	EPolygonGroupMode__KeepInputPolygons = 0,
	None                           = 1,
	EPolygonGroupMode__RecomputePolygonsByAngleThreshold = 2,
	neByteProperty‘IntProperty  = 3,
	EPolygonGroupMode__PolygonsAreTriangles = 4,
	ByteProperty‘IntProperty    = 5,
	EPolygonGroupMode__EPolygonGroupMode_MAX = 6,
	ByteProperty                   = 7,
	None01                         = 8,
	None02                         = 9,
	None03                         = 10,
	None04                         = 11,
	None05                         = 12,
	None06                         = 13,
	None07                         = 14,
	None08                         = 15,
	None09                         = 16,
	None10                         = 17,
	None11                         = 18,
	None12                         = 19,
	None13                         = 20,
	None14                         = 21,
	None15                         = 22,
	None16                         = 23
};


// Enum MeshModelingTools.EQuickTransformerMode
enum class EQuickTransformerMode : uint8_t
{
	EQuickTransformerMode__AxisTranslation = 0,
	None                           = 1,
	EQuickTransformerMode__AxisRotation = 2,
	neByteProperty‘IntProperty  = 3,
	EQuickTransformerMode__EQuickTransformerMode_MAX = 4,
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


// Enum MeshModelingTools.EWeightScheme
enum class EWeightScheme : uint8_t
{
	EWeightScheme__Uniform         = 0,
	None                           = 1,
	EWeightScheme__Umbrella        = 2,
	neByteProperty‘IntProperty  = 3,
	EWeightScheme__Valence         = 4,
	ByteProperty‘IntProperty    = 5,
	EWeightScheme__MeanValue       = 6,
	ByteProperty                   = 7,
	EWeightScheme__Cotangent       = 8,
	teProperty‘IntProperty        = 9,
	EWeightScheme__ClampedCotangent = 10,
	Property‘IntProperty          = 11,
	EWeightScheme__EWeightScheme_MAX = 12,
	operty‘IntProperty            = 13,
	None01                         = 14,
	None02                         = 15,
	None03                         = 16,
	None04                         = 17,
	None05                         = 18,
	None06                         = 19,
	None07                         = 20,
	None08                         = 21,
	None09                         = 22,
	None10                         = 23,
	None11                         = 24,
	None12                         = 25,
	None13                         = 26,
	None14                         = 27
};


// Enum MeshModelingTools.EGroupTopologyDeformationStrategy
enum class EGroupTopologyDeformationStrategy : uint8_t
{
	EGroupTopologyDeformationStrategy__Linear = 0,
	None                           = 1,
	EGroupTopologyDeformationStrategy__Laplacian = 2,
	neByteProperty‘IntProperty  = 3,
	EGroupTopologyDeformationStrategy__EGroupTopologyDeformationStrategy_MAX = 4,
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


// Enum MeshModelingTools.EMeshEditingMaterialModes
enum class EMeshEditingMaterialModes : uint8_t
{
	EMeshEditingMaterialModes__ExistingMaterial = 0,
	None                           = 1,
	EMeshEditingMaterialModes__MeshFocusMaterial = 2,
	neByteProperty‘IntProperty  = 3,
	EMeshEditingMaterialModes__EMeshEditingMaterialModes_MAX = 4,
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


// Enum MeshModelingTools.ESetMeshMaterialMode
enum class ESetMeshMaterialMode : uint8_t
{
	ESetMeshMaterialMode__KeepOriginal = 0,
	None                           = 1,
	ESetMeshMaterialMode__Checkerboard = 2,
	neByteProperty‘IntProperty  = 3,
	ESetMeshMaterialMode__Override = 4,
	ByteProperty‘IntProperty    = 5,
	ESetMeshMaterialMode__ESetMeshMaterialMode_MAX = 6,
	ByteProperty                   = 7,
	None01                         = 8,
	None02                         = 9,
	None03                         = 10,
	None04                         = 11,
	None05                         = 12,
	None06                         = 13,
	None07                         = 14,
	None08                         = 15,
	None09                         = 16,
	None10                         = 17,
	None11                         = 18,
	None12                         = 19,
	None13                         = 20,
	None14                         = 21,
	None15                         = 22,
	None16                         = 23
};


// Enum MeshModelingTools.EMeshSelectionToolPrimaryMode
enum class EMeshSelectionToolPrimaryMode : uint8_t
{
	EMeshSelectionToolPrimaryMode__Brush = 0,
	None                           = 1,
	EMeshSelectionToolPrimaryMode__AngleFiltered = 2,
	neByteProperty‘IntProperty  = 3,
	EMeshSelectionToolPrimaryMode__Visible = 4,
	ByteProperty‘IntProperty    = 5,
	EMeshSelectionToolPrimaryMode__AllConnected = 6,
	ByteProperty                   = 7,
	EMeshSelectionToolPrimaryMode__AllInGroup = 8,
	teProperty‘IntProperty        = 9,
	EMeshSelectionToolPrimaryMode__AllWithinAngle = 10,
	Property‘IntProperty          = 11,
	EMeshSelectionToolPrimaryMode__EMeshSelectionToolPrimaryMode_MAX = 12,
	operty‘IntProperty            = 13,
	None01                         = 14,
	None02                         = 15,
	None03                         = 16,
	None04                         = 17,
	None05                         = 18,
	None06                         = 19,
	None07                         = 20,
	None08                         = 21,
	None09                         = 22,
	None10                         = 23,
	None11                         = 24,
	None12                         = 25,
	None13                         = 26,
	None14                         = 27
};


// Enum MeshModelingTools.EMeshSelectionToolActions
enum class EMeshSelectionToolActions : uint8_t
{
	EMeshSelectionToolActions__NoAction = 0,
	None                           = 1,
	EMeshSelectionToolActions__ClearSelection = 2,
	neByteProperty‘IntProperty  = 3,
	EMeshSelectionToolActions__InvertSelection = 4,
	ByteProperty‘IntProperty    = 5,
	EMeshSelectionToolActions__GrowSelection = 6,
	ByteProperty                   = 7,
	EMeshSelectionToolActions__ShrinkSelection = 8,
	teProperty‘IntProperty        = 9,
	EMeshSelectionToolActions__ExpandToConnected = 10,
	Property‘IntProperty          = 11,
	EMeshSelectionToolActions__DeleteSelected = 12,
	operty‘IntProperty            = 13,
	EMeshSelectionToolActions__SeparateSelected = 14,
	erty‘IntProperty              = 15,
	EMeshSelectionToolActions__EMeshSelectionToolActions_MAX = 16,
	ty‘IntProperty                = 17,
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


// Enum MeshModelingTools.ENonlinearOperationType
enum class ENonlinearOperationType : uint8_t
{
	ENonlinearOperationType__Bend  = 0,
	None                           = 1,
	ENonlinearOperationType__Flare = 2,
	neByteProperty‘IntProperty  = 3,
	ENonlinearOperationType__Twist = 4,
	ByteProperty‘IntProperty    = 5,
	ENonlinearOperationType__ENonlinearOperationType_MAX = 6,
	ByteProperty                   = 7,
	None01                         = 8,
	None02                         = 9,
	None03                         = 10,
	None04                         = 11,
	None05                         = 12,
	None06                         = 13,
	None07                         = 14,
	None08                         = 15,
	None09                         = 16,
	None10                         = 17,
	None11                         = 18,
	None12                         = 19,
	None13                         = 20,
	None14                         = 21,
	None15                         = 22,
	None16                         = 23
};


// Enum MeshModelingTools.ESmoothMeshToolSmoothType
enum class ESmoothMeshToolSmoothType : uint8_t
{
	ESmoothMeshToolSmoothType__Iterative = 0,
	None                           = 1,
	ESmoothMeshToolSmoothType__BiHarmonic_Cotan = 2,
	neByteProperty‘IntProperty  = 3,
	ESmoothMeshToolSmoothType__ESmoothMeshToolSmoothType_MAX = 4,
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


// Enum MeshModelingTools.ETransformMeshesSnapDragRotationMode
enum class ETransformMeshesSnapDragRotationMode : uint8_t
{
	ETransformMeshesSnapDragRotationMode__Ignore = 0,
	None                           = 1,
	ETransformMeshesSnapDragRotationMode__Align = 2,
	neByteProperty‘IntProperty  = 3,
	ETransformMeshesSnapDragRotationMode__AlignFlipped = 4,
	ByteProperty‘IntProperty    = 5,
	ETransformMeshesSnapDragRotationMode__LastValue = 6,
	ByteProperty                   = 7,
	ETransformMeshesSnapDragRotationMode__ETransformMeshesSnapDragRotationMode_MAX = 8,
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


// Enum MeshModelingTools.ETransformMeshesSnapDragSource
enum class ETransformMeshesSnapDragSource : uint8_t
{
	ETransformMeshesSnapDragSource__ClickPoint = 0,
	None                           = 1,
	ETransformMeshesSnapDragSource__Pivot = 2,
	neByteProperty‘IntProperty  = 3,
	ETransformMeshesSnapDragSource__LastValue = 4,
	ByteProperty‘IntProperty    = 5,
	ETransformMeshesSnapDragSource__ETransformMeshesSnapDragSource_MAX = 6,
	ByteProperty                   = 7,
	None01                         = 8,
	None02                         = 9,
	None03                         = 10,
	None04                         = 11,
	None05                         = 12,
	None06                         = 13,
	None07                         = 14,
	None08                         = 15,
	None09                         = 16,
	None10                         = 17,
	None11                         = 18,
	None12                         = 19,
	None13                         = 20,
	None14                         = 21,
	None15                         = 22,
	None16                         = 23
};


// Enum MeshModelingTools.ETransformMeshesTransformMode
enum class ETransformMeshesTransformMode : uint8_t
{
	ETransformMeshesTransformMode__SharedGizmo = 0,
	None                           = 1,
	ETransformMeshesTransformMode__SharedGizmoLocal = 2,
	neByteProperty‘IntProperty  = 3,
	ETransformMeshesTransformMode__PerObjectGizmo = 4,
	ByteProperty‘IntProperty    = 5,
	ETransformMeshesTransformMode__LastValue = 6,
	ByteProperty                   = 7,
	ETransformMeshesTransformMode__ETransformMeshesTransformMode_MAX = 8,
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



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MeshModelingTools.BrushStampData
// 0x00A4
struct FBrushStampData
{
	unsigned char                                      UnknownData00[0xA4];                                      // 0x0000(0x00A4) MISSED OFFSET
};

// ScriptStruct MeshModelingTools.TransformMeshesTarget
// 0x0010
struct FTransformMeshesTarget
{
	class UTransformProxy*                             TransformProxy;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTransformGizmo*                             TransformGizmo;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

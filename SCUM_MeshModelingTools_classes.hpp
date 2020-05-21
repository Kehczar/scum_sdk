#pragma once

// Scum 3.79.22573 (UE 4.24)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MeshModelingTools.AddPrimitiveToolBuilder
// 0x0008 (0x0030 - 0x0028)
class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.AddPrimitiveToolBuilder");
		return ptr;
	}

};


// Class MeshModelingTools.ProceduralShapeToolProperties
// 0x0020 (0x0068 - 0x0048)
class UProceduralShapeToolProperties : public UInteractiveToolPropertySet
{
public:
	EMakeMeshShapeType                                 Shape;                                                    // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              Width;                                                    // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EMakeMeshPlacementType                             PlaceMode;                                                // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EMakeMeshPivotLocation                             PivotLocation;                                            // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	int                                                Slices;                                                   // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Subdivisions;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.ProceduralShapeToolProperties");
		return ptr;
	}

};


// Class MeshModelingTools.AddPrimitiveTool
// 0x0050 (0x00A8 - 0x0058)
class UAddPrimitiveTool : public USingleClickTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	class UProceduralShapeToolProperties*              ShapeSettings;                                            // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                       // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPreviewMesh*                                PreviewMesh;                                              // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0078(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.AddPrimitiveTool");
		return ptr;
	}

};


// Class MeshModelingTools.BrushBaseProperties
// 0x0010 (0x0058 - 0x0048)
class UBrushBaseProperties : public UInteractiveToolPropertySet
{
public:
	float                                              BrushSize;                                                // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecifyRadius;                                           // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	float                                              BrushRadius;                                              // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.BrushBaseProperties");
		return ptr;
	}

};


// Class MeshModelingTools.BaseBrushTool
// 0x00D0 (0x0138 - 0x0068)
class UBaseBrushTool : public UMeshSurfacePointTool
{
public:
	class UBrushBaseProperties*                        BrushProperties;                                          // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bInBrushStroke;                                           // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	struct FBrushStampData                             LastBrushStamp;                                           // 0x0074(0x00A4)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0118(0x0018) MISSED OFFSET
	class UBrushStampIndicator*                        BrushStampIndicator;                                      // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.BaseBrushTool");
		return ptr;
	}

};


// Class MeshModelingTools.ConvertToPolygonsToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UConvertToPolygonsToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.ConvertToPolygonsToolBuilder");
		return ptr;
	}

};


// Class MeshModelingTools.ConvertToPolygonsToolProperties
// 0x0008 (0x0050 - 0x0048)
class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
{
public:
	float                                              AngleTolerance;                                           // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCalculateNormals;                                        // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.ConvertToPolygonsToolProperties");
		return ptr;
	}

};


// Class MeshModelingTools.ConvertToPolygonsTool
// 0x02F0 (0x0348 - 0x0058)
class UConvertToPolygonsTool : public USingleSelectionTool
{
public:
	class UConvertToPolygonsToolProperties*            Settings;                                                 // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPreviewMesh*                                PreviewMesh;                                              // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2E0];                                     // 0x0068(0x02E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.ConvertToPolygonsTool");
		return ptr;
	}

};


// Class MeshModelingTools.DisplaceMeshToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UDisplaceMeshToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshToolBuilder");
		return ptr;
	}

};


// Class MeshModelingTools.DisplaceMeshTool
// 0x0258 (0x02B0 - 0x0058)
class UDisplaceMeshTool : public USingleSelectionTool
{
public:
	EDisplaceMeshToolDisplaceType                      DisplacementType;                                         // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              DisplaceIntensity;                                        // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                randomSeed;                                               // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Subdivisions;                                             // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DisplacementMap;                                          // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x240];                                     // 0x0070(0x0240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshTool");
		return ptr;
	}

};


// Class MeshModelingTools.DrawPolygonToolBuilder
// 0x0008 (0x0030 - 0x0028)
class UDrawPolygonToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonToolBuilder");
		return ptr;
	}

};


// Class MeshModelingTools.DrawPolygonToolStandardProperties
// 0x0010 (0x0058 - 0x0048)
class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet
{
public:
	EDrawPolygonDrawMode                               PolygonType;                                              // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDrawPolygonOutputMode                             OutputMode;                                               // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	float                                              ExtrudeHeight;                                            // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Steps;                                                    // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSelfIntersections;                                  // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowGizmo;                                               // 0x0055(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0056(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonToolStandardProperties");
		return ptr;
	}

};


// Class MeshModelingTools.DrawPolygonToolSnapProperties
// 0x0018 (0x0060 - 0x0048)
class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bEnableSnapping;                                          // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToVertices;                                          // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToEdges;                                             // 0x004A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToAngles;                                            // 0x004B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToLengths;                                           // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	float                                              SegmentLength;                                            // 0x0050(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHitSceneObjects;                                         // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	float                                              HitNormalOffset;                                          // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonToolSnapProperties");
		return ptr;
	}

};


// Class MeshModelingTools.DrawPolygonTool
// 0x0780 (0x07D0 - 0x0050)
class UDrawPolygonTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	class UDrawPolygonToolStandardProperties*          PolygonProperties;                                        // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDrawPolygonToolSnapProperties*              SnapProperties;                                           // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                       // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DrawPlaneOrigin;                                          // 0x0070(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	struct FQuat                                       DrawPlaneOrientation;                                     // 0x0080(0x0010) (IsPlainOldData)
	TArray<struct FVector>                             PolygonVertices;                                          // 0x0090(0x0010) (ZeroConstructor)
	struct FVector                                     PreviewVertex;                                            // 0x00A0(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x44];                                      // 0x00AC(0x0044) MISSED OFFSET
	class UPreviewMesh*                                PreviewMesh;                                              // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTransformGizmo*                             PlaneTransformGizmo;                                      // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTransformProxy*                             PlaneTransformProxy;                                      // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6C8];                                     // 0x0108(0x06C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonTool");
		return ptr;
	}

};


// Class MeshModelingTools.DynamicMeshBrushTool
// 0x0040 (0x0178 - 0x0138)
class UDynamicMeshBrushTool : public UBaseBrushTool
{
public:
	class UPreviewMesh*                                PreviewMesh;                                              // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0140(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.DynamicMeshBrushTool");
		return ptr;
	}

};


// Class MeshModelingTools.DynamicMeshSculptToolBuilder
// 0x0008 (0x0030 - 0x0028)
class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.DynamicMeshSculptToolBuilder");
		return ptr;
	}

};


// Class MeshModelingTools.BrushSculptProperties
// 0x0018 (0x0060 - 0x0048)
class UBrushSculptProperties : public UInteractiveToolPropertySet
{
public:
	EDynamicMeshSculptBrushType                        PrimaryBrushType;                                         // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              BrushSpeed;                                               // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SmoothSpeed;                                              // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPreserveUVFlow;                                          // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	float                                              BrushDepth;                                               // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFreezeTarget;                                            // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x005D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.BrushSculptProperties");
		return ptr;
	}

};


// Class MeshModelingTools.BrushRemeshProperties
// 0x0010 (0x0058 - 0x0048)
class UBrushRemeshProperties : public UInteractiveToolPropertySet
{
public:
	float                                              RelativeSize;                                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Smoothing;                                                // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRemeshSmooth;                                            // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFlips;                                                   // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSplits;                                                  // 0x0052(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCollapses;                                               // 0x0053(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventNormalFlips;                                      // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.BrushRemeshProperties");
		return ptr;
	}

};


// Class MeshModelingTools.DynamicMeshSculptTool
// 0x07A8 (0x0810 - 0x0068)
class UDynamicMeshSculptTool : public UMeshSurfacePointTool
{
public:
	class UBrushSculptProperties*                      SculptProperties;                                         // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBrushBaseProperties*                        BrushProperties;                                          // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBrushRemeshProperties*                      RemeshProperties;                                         // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMeshEditingViewProperties*                  ViewProperties;                                           // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	class UBrushStampIndicator*                        BrushIndicator;                                           // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPreviewMesh*                                BrushIndicatorMesh;                                       // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class UOctreeDynamicMeshComponent*                 DynamicMeshComponent;                                     // 0x00A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x768];                                     // 0x00A8(0x0768) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.DynamicMeshSculptTool");
		return ptr;
	}

};


// Class MeshModelingTools.EditMeshPolygonsToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UEditMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolBuilder");
		return ptr;
	}

};


// Class MeshModelingTools.PolyEditTransformProperties
// 0x0020 (0x0068 - 0x0048)
class UPolyEditTransformProperties : public UInteractiveToolPropertySet
{
public:
	EGroupTopologyDeformationStrategy                  DeformationStrategy;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EQuickTransformerMode                              TransformMode;                                            // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSelectFaces;                                             // 0x004A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSelectEdges;                                             // 0x004B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSelectVertices;                                          // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWireframe;                                               // 0x004D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EPolygonGroupMode                                  PolygonMode;                                              // 0x004E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x004F(0x0001) MISSED OFFSET
	float                                              PolygonGroupingAngleThreshold;                            // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EWeightScheme                                      SelectedWeightScheme;                                     // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0054(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	double                                             HandleWeight;                                             // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bPostFixHandles;                                          // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.PolyEditTransformProperties");
		return ptr;
	}

};


// Class MeshModelingTools.EditMeshPolygonsTool
// 0x1408 (0x1470 - 0x0068)
class UEditMeshPolygonsTool : public UMeshSurfacePointTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                     // 0x0070(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPolyEditTransformProperties*                TransformProps;                                           // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x13F0];                                    // 0x0080(0x13F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsTool");
		return ptr;
	}

};


// Class MeshModelingTools.EditNormalsToolBuilder
// 0x0008 (0x0030 - 0x0028)
class UEditNormalsToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsToolBuilder");
		return ptr;
	}

};


// Class MeshModelingTools.EditNormalsToolProperties
// 0x0010 (0x0058 - 0x0048)
class UEditNormalsToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bRecomputeNormals;                                        // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENormalCalculationMethod                           NormalCalculationMethod;                                  // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFixInconsistentNormals;                                  // 0x004A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertNormals;                                           // 0x004B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecomputeNormalTopologyAndEdgeSharpness;                 // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	float                                              SharpEdgeAngleThreshold;                                  // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSharpVertices;                                      // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsToolProperties");
		return ptr;
	}

};


// Class MeshModelingTools.EditNormalsAdvancedProperties
// 0x0000 (0x0048 - 0x0048)
class UEditNormalsAdvancedProperties : public UInteractiveToolPropertySet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsAdvancedProperties");
		return ptr;
	}

};


// Class MeshModelingTools.EditNormalsOperatorFactory
// 0x0018 (0x0040 - 0x0028)
class UEditNormalsOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UEditNormalsTool*                            Tool;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsOperatorFactory");
		return ptr;
	}

};


// Class MeshModelingTools.EditNormalsTool
// 0x0070 (0x00D0 - 0x0060)
class UEditNormalsTool : public UMultiSelectionTool
{
public:
	class UEditNormalsToolProperties*                  BasicProperties;                                          // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEditNormalsAdvancedProperties*              AdvancedProperties;                                       // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                 // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0080(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsTool");
		return ptr;
	}

};


// Class MeshModelingTools.MeshAnalysisProperties
// 0x0020 (0x0068 - 0x0048)
class UMeshAnalysisProperties : public UInteractiveToolPropertySet
{
public:
	struct FString                                     SurfaceArea;                                              // 0x0048(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     Volume;                                                   // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.MeshAnalysisProperties");
		return ptr;
	}

};


// Class MeshModelingTools.MeshInspectorToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UMeshInspectorToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.MeshInspectorToolBuilder");
		return ptr;
	}

};


// Class MeshModelingTools.MeshInspectorProperties
// 0x0010 (0x0058 - 0x0048)
class UMeshInspectorProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bWireframe;                                               // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBoundaryEdges;                                           // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPolygonBorders;                                          // 0x004A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUVSeams;                                                 // 0x004B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNormalSeams;                                             // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNormalVectors;                                           // 0x004D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTangentVectors;                                          // 0x004E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x004F(0x0001) MISSED OFFSET
	float                                              NormalLength;                                             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TangentLength;                                            // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.MeshInspectorProperties");
		return ptr;
	}

};


// Class MeshModelingTools.MeshInspectorTool
// 0x0068 (0x00C0 - 0x0058)
class UMeshInspectorTool : public USingleSelectionTool
{
public:
	class UMeshInspectorProperties*                    Settings;                                                 // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UExistingMeshMaterialProperties*             MaterialSettings;                                         // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                     // 0x0070(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0080(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.MeshInspectorTool");
		return ptr;
	}

};


// Class MeshModelingTools.NewMeshMaterialProperties
// 0x0010 (0x0058 - 0x0048)
class UNewMeshMaterialProperties : public UInteractiveToolPropertySet
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UVScale;                                                  // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldSpaceUVScale;                                       // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWireframe;                                               // 0x0055(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0056(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.NewMeshMaterialProperties");
		return ptr;
	}

};


// Class MeshModelingTools.ExistingMeshMaterialProperties
// 0x0018 (0x0060 - 0x0048)
class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet
{
public:
	ESetMeshMaterialMode                               MaterialMode;                                             // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              CheckerDensity;                                           // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.ExistingMeshMaterialProperties");
		return ptr;
	}

};


// Class MeshModelingTools.MeshEditingViewProperties
// 0x0008 (0x0050 - 0x0048)
class UMeshEditingViewProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bShowWireframe;                                           // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	EMeshEditingMaterialModes                          MaterialMode;                                             // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0049(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.MeshEditingViewProperties");
		return ptr;
	}

};


// Class MeshModelingTools.MeshSelectionToolBuilder
// 0x0008 (0x0030 - 0x0028)
class UMeshSelectionToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionToolBuilder");
		return ptr;
	}

};


// Class MeshModelingTools.MeshSelectionToolActionPropertySet
// 0x0008 (0x0050 - 0x0048)
class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionToolActionPropertySet");
		return ptr;
	}

};


// Class MeshModelingTools.MeshSelectionEditActions
// 0x0000 (0x0050 - 0x0050)
class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionEditActions");
		return ptr;
	}

};


// Class MeshModelingTools.MeshSelectionMeshEditActions
// 0x0000 (0x0050 - 0x0050)
class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionMeshEditActions");
		return ptr;
	}

};


// Class MeshModelingTools.MeshSelectionToolProperties
// 0x0010 (0x0058 - 0x0048)
class UMeshSelectionToolProperties : public UInteractiveToolPropertySet
{
public:
	EMeshSelectionToolPrimaryMode                      SelectionMode;                                            // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0048(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              AngleTolerance;                                           // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bVolumetricBrush;                                         // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHitBackFaces;                                            // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowWireframe;                                           // 0x0052(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0053(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionToolProperties");
		return ptr;
	}

};


// Class MeshModelingTools.MeshSelectionTool
// 0x0308 (0x0480 - 0x0178)
class UMeshSelectionTool : public UDynamicMeshBrushTool
{
public:
	class UMeshSelectionToolProperties*                SelectionProps;                                           // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMeshSelectionEditActions*                   SelectionActions;                                         // 0x0180(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMeshSelectionMeshEditActions*               EditActions;                                              // 0x0188(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMeshSelectionSet*                           Selection;                                                // 0x0190(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2E8];                                     // 0x0198(0x02E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionTool");
		return ptr;
	}

};


// Class MeshModelingTools.MeshSpaceDeformerToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UMeshSpaceDeformerToolBuilder : public UMeshSurfacePointToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.MeshSpaceDeformerToolBuilder");
		return ptr;
	}

};


// Class MeshModelingTools.MeshSpaceDeformerTool
// 0x0C78 (0x0CE0 - 0x0068)
class UMeshSpaceDeformerTool : public UMeshSurfacePointTool
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0068(0x0004) MISSED OFFSET
	ENonlinearOperationType                            SelectedOperationType;                                    // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	double                                             LowerBoundsInterval;                                      // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	double                                             UpperBoundsInterval;                                      // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	double                                             ModifierPercent;                                          // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                     // 0x0088(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC50];                                     // 0x0090(0x0C50) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.MeshSpaceDeformerTool");
		return ptr;
	}


	void SwapSecondaryAxis();
	void AutoDetectAxes();
};


// Class MeshModelingTools.MeshStatisticsProperties
// 0x0030 (0x0078 - 0x0048)
class UMeshStatisticsProperties : public UInteractiveToolPropertySet
{
public:
	struct FString                                     Mesh;                                                     // 0x0048(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     UV;                                                       // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     Attributes;                                               // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.MeshStatisticsProperties");
		return ptr;
	}

};


// Class MeshModelingTools.PlaneCutToolBuilder
// 0x0008 (0x0030 - 0x0028)
class UPlaneCutToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutToolBuilder");
		return ptr;
	}

};


// Class MeshModelingTools.PlaneCutToolProperties
// 0x0010 (0x0058 - 0x0048)
class UPlaneCutToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bDiscardAttributes;                                       // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepBothHalves;                                          // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	float                                              SpacingBetweenHalves;                                     // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFillCutHole;                                             // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowPreview;                                             // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFillSpans;                                               // 0x0052(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0053(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutToolProperties");
		return ptr;
	}

};


// Class MeshModelingTools.PlaneCutOperatorFactory
// 0x0018 (0x0040 - 0x0028)
class UPlaneCutOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UPlaneCutTool*                               CutTool;                                                  // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bCutBackSide;                                             // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutOperatorFactory");
		return ptr;
	}

};


// Class MeshModelingTools.PlaneCutTool
// 0x00A8 (0x0100 - 0x0058)
class UPlaneCutTool : public USingleSelectionTool
{
public:
	class UPlaneCutToolProperties*                     BasicProperties;                                          // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CutPlaneOrigin;                                           // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FQuat                                       CutPlaneOrientation;                                      // 0x0070(0x0010) (IsPlainOldData)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                 // 0x0080(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0090(0x0050) MISSED OFFSET
	class UTransformGizmo*                             PlaneTransformGizmo;                                      // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTransformProxy*                             PlaneTransformProxy;                                      // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutTool");
		return ptr;
	}

};


// Class MeshModelingTools.PositionPlaneGizmoBuilder
// 0x0000 (0x0028 - 0x0028)
class UPositionPlaneGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.PositionPlaneGizmoBuilder");
		return ptr;
	}

};


// Class MeshModelingTools.PositionPlaneGizmo
// 0x0478 (0x04B0 - 0x0038)
class UPositionPlaneGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET
	class UPreviewMesh*                                CenterBallShape;                                          // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           CenterBallMaterial;                                       // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x418];                                     // 0x0098(0x0418) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.PositionPlaneGizmo");
		return ptr;
	}

};


// Class MeshModelingTools.PositionPlaneOnSceneInputBehavior
// 0x0028 (0x0060 - 0x0038)
class UPositionPlaneOnSceneInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.PositionPlaneOnSceneInputBehavior");
		return ptr;
	}

};


// Class MeshModelingTools.RemeshMeshToolBuilder
// 0x0008 (0x0030 - 0x0028)
class URemeshMeshToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.RemeshMeshToolBuilder");
		return ptr;
	}

};


// Class MeshModelingTools.RemeshMeshToolProperties
// 0x0020 (0x0068 - 0x0048)
class URemeshMeshToolProperties : public UInteractiveToolPropertySet
{
public:
	int                                                TargetTriangleCount;                                      // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SmoothingSpeed;                                           // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ERemeshSmoothingType                               SmoothingType;                                            // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	int                                                RemeshIterations;                                         // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDiscardAttributes;                                       // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPreserveSharpEdges;                                      // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTargetEdgeLength;                                     // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x005B(0x0001) MISSED OFFSET
	float                                              TargetEdgeLength;                                         // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFlips;                                                   // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSplits;                                                  // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCollapses;                                               // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReproject;                                               // 0x0063(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventNormalFlips;                                      // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0065(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.RemeshMeshToolProperties");
		return ptr;
	}

};


// Class MeshModelingTools.RemeshMeshTool
// 0x0058 (0x00B0 - 0x0058)
class URemeshMeshTool : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	class URemeshMeshToolProperties*                   BasicProperties;                                          // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMeshStatisticsProperties*                   MeshStatisticsProperties;                                 // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                  // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0078(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.RemeshMeshTool");
		return ptr;
	}

};


// Class MeshModelingTools.SmoothMeshToolBuilder
// 0x0008 (0x0030 - 0x0028)
class USmoothMeshToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.SmoothMeshToolBuilder");
		return ptr;
	}

};


// Class MeshModelingTools.SmoothMeshTool
// 0x0228 (0x0280 - 0x0058)
class USmoothMeshTool : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	ESmoothMeshToolSmoothType                          SmoothType;                                               // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              SmoothSpeed;                                              // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SmoothIterations;                                         // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                  // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x208];                                     // 0x0078(0x0208) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.SmoothMeshTool");
		return ptr;
	}

};


// Class MeshModelingTools.TransformMeshesToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UTransformMeshesToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.TransformMeshesToolBuilder");
		return ptr;
	}

};


// Class MeshModelingTools.TransformMeshesToolProperties
// 0x0008 (0x0050 - 0x0048)
class UTransformMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	ETransformMeshesTransformMode                      TransformMode;                                            // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSetPivot;                                                // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSnapDragging;                                      // 0x004A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETransformMeshesSnapDragSource                     SnapDragSource;                                           // 0x004B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETransformMeshesSnapDragRotationMode               RotationMode;                                             // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.TransformMeshesToolProperties");
		return ptr;
	}

};


// Class MeshModelingTools.TransformMeshesTool
// 0x00B0 (0x0110 - 0x0060)
class UTransformMeshesTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	class UTransformMeshesToolProperties*              TransformProps;                                           // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	TArray<struct FTransformMeshesTarget>              ActiveGizmos;                                             // 0x0080(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x80];                                      // 0x0090(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.TransformMeshesTool");
		return ptr;
	}

};


// Class MeshModelingTools.UVProjectionToolBuilder
// 0x0008 (0x0030 - 0x0028)
class UUVProjectionToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionToolBuilder");
		return ptr;
	}

};


// Class MeshModelingTools.UVProjectionToolProperties
// 0x0028 (0x0070 - 0x0048)
class UUVProjectionToolProperties : public UInteractiveToolPropertySet
{
public:
	EUVProjectionMethod                                UVProjectionMethod;                                       // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FVector                                     ProjectionPrimitiveScale;                                 // 0x004C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CylinderProjectToTopOrBottomAngleThreshold;               // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UVScale;                                                  // 0x005C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UVOffset;                                                 // 0x0064(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldSpaceUVScale;                                       // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionToolProperties");
		return ptr;
	}

};


// Class MeshModelingTools.UVProjectionAdvancedProperties
// 0x0000 (0x0048 - 0x0048)
class UUVProjectionAdvancedProperties : public UInteractiveToolPropertySet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionAdvancedProperties");
		return ptr;
	}

};


// Class MeshModelingTools.UVProjectionOperatorFactory
// 0x0018 (0x0040 - 0x0028)
class UUVProjectionOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UUVProjectionTool*                           Tool;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionOperatorFactory");
		return ptr;
	}

};


// Class MeshModelingTools.UVProjectionTool
// 0x0190 (0x01F0 - 0x0060)
class UUVProjectionTool : public UMultiSelectionTool
{
public:
	class UUVProjectionToolProperties*                 BasicProperties;                                          // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UUVProjectionAdvancedProperties*             AdvancedProperties;                                       // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	class UExistingMeshMaterialProperties*             MaterialSettings;                                         // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                 // 0x0078(0x0010) (ZeroConstructor)
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                          // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UTransformGizmo*>                     TransformGizmos;                                          // 0x0090(0x0010) (ZeroConstructor)
	TArray<class UTransformProxy*>                     TransformProxies;                                         // 0x00A0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x140];                                     // 0x00B0(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionTool");
		return ptr;
	}

};


// Class MeshModelingTools.WeldMeshEdgesToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UWeldMeshEdgesToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.WeldMeshEdgesToolBuilder");
		return ptr;
	}

};


// Class MeshModelingTools.WeldMeshEdgesTool
// 0x0210 (0x0268 - 0x0058)
class UWeldMeshEdgesTool : public USingleSelectionTool
{
public:
	float                                              Tolerance;                                                // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyUnique;                                              // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20B];                                     // 0x005D(0x020B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshModelingTools.WeldMeshEdgesTool");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

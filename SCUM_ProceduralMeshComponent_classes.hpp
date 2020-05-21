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

// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProceduralMeshComponent.KismetProceduralMeshLibrary");
		return ptr;
	}

};


// Class ProceduralMeshComponent.ProceduralMeshComponent
// 0x0070 (0x0470 - 0x0400)
class UProceduralMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0400(0x0008) MISSED OFFSET
	bool                                               bUseComplexAsSimpleCollision;                             // 0x0408(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAsyncCooking;                                         // 0x0409(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x040A(0x0006) MISSED OFFSET
	class UBodySetup*                                  ProcMeshBodySetup;                                        // 0x0410(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FProcMeshSection>                    ProcMeshSections;                                         // 0x0418(0x0010) (ZeroConstructor)
	TArray<struct FKConvexElem>                        CollisionConvexElems;                                     // 0x0428(0x0010) (ZeroConstructor)
	struct FBoxSphereBounds                            LocalBounds;                                              // 0x0438(0x001C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                      // 0x0458(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0468(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProceduralMeshComponent.ProceduralMeshComponent");
		return ptr;
	}


	void UpdateMeshSection_LinearColor(int* SectionIndex, TArray<struct FVector>* Vertices, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UV0, TArray<struct FVector2D>* UV1, TArray<struct FVector2D>* UV2, TArray<struct FVector2D>* UV3, TArray<struct FLinearColor>* VertexColors, TArray<struct FProcMeshTangent>* Tangents);
	void UpdateMeshSection(int* SectionIndex, TArray<struct FVector>* Vertices, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UV0, TArray<struct FColor>* VertexColors, TArray<struct FProcMeshTangent>* Tangents);
	void SetMeshSectionVisible(int* SectionIndex, bool* bNewVisibility);
	bool IsMeshSectionVisible(int* SectionIndex);
	int GetNumSections();
	void CreateMeshSection_LinearColor(int* SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UV0, TArray<struct FVector2D>* UV1, TArray<struct FVector2D>* UV2, TArray<struct FVector2D>* UV3, TArray<struct FLinearColor>* VertexColors, TArray<struct FProcMeshTangent>* Tangents, bool* bCreateCollision);
	void CreateMeshSection(int* SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UV0, TArray<struct FColor>* VertexColors, TArray<struct FProcMeshTangent>* Tangents, bool* bCreateCollision);
	void ClearMeshSection(int* SectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void AddCollisionConvexMesh(TArray<struct FVector>* ConvexVerts);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

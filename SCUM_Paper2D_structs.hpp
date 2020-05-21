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

// Enum Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8_t
{
	EFlipbookCollisionMode__NoCollision = 0,
	None                           = 1,
	EFlipbookCollisionMode__FirstFrameCollision = 2,
	neByteProperty‘IntProperty  = 3,
	EFlipbookCollisionMode__EachFrameCollision = 4,
	ByteProperty‘IntProperty    = 5,
	EFlipbookCollisionMode__EFlipbookCollisionMode_MAX = 6,
	ByteProperty                   = 7,
	None01                         = 8,
	None02                         = 9,
	None03                         = 10,
	None04                         = 11,
	None05                         = 12,
	None06                         = 13,
	None07                         = 14,
	ByteProperty01                 = 15,
	None08                         = 16,
	None09                         = 17,
	None10                         = 18,
	erty‘IntProperty              = 19,
	None11                         = 20,
	neByteProperty‘IntProperty01 = 21,
	None12                         = 22,
	None13                         = 23
};


// Enum Paper2D.EPaperSpriteAtlasPadding
enum class EPaperSpriteAtlasPadding : uint8_t
{
	EPaperSpriteAtlasPadding__DilateBorder = 0,
	None                           = 1,
	EPaperSpriteAtlasPadding__PadWithZero = 2,
	neByteProperty‘IntProperty  = 3,
	EPaperSpriteAtlasPadding__EPaperSpriteAtlasPadding_MAX = 4,
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


// Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8_t
{
	ETileMapProjectionMode__Orthogonal = 0,
	None                           = 1,
	ETileMapProjectionMode__IsometricDiamond = 2,
	neByteProperty‘IntProperty  = 3,
	ETileMapProjectionMode__IsometricStaggered = 4,
	ByteProperty‘IntProperty    = 5,
	ETileMapProjectionMode__HexagonalStaggered = 6,
	ByteProperty                   = 7,
	ETileMapProjectionMode__ETileMapProjectionMode_MAX = 8,
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


// Enum Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8_t
{
	ESpritePivotMode__Top_Left     = 0,
	None                           = 1,
	ESpritePivotMode__Top_Center   = 2,
	neByteProperty‘IntProperty  = 3,
	ESpritePivotMode__Top_Right    = 4,
	ByteProperty‘IntProperty    = 5,
	ESpritePivotMode__Center_Left  = 6,
	ByteProperty                   = 7,
	ESpritePivotMode__Center_Center = 8,
	teProperty‘IntProperty        = 9,
	ESpritePivotMode__Center_Right = 10,
	Property‘IntProperty          = 11,
	ESpritePivotMode__Bottom_Left  = 12,
	operty‘IntProperty            = 13,
	ESpritePivotMode__Bottom_Center = 14,
	erty‘IntProperty              = 15,
	ESpritePivotMode__Bottom_Right = 16,
	ty‘IntProperty                = 17,
	ESpritePivotMode__Custom       = 18,
	[Error]                        = 19,
	ESpritePivotMode__ESpritePivotMode_MAX = 20,
	IntProperty                    = 21,
	rProperty                      = 22,
	perty                          = 23,
	Int64Property                  = 24,
	tatorProperty                  = 25,
	umProperty_CylinderÿBoxSphereBounds = 26,
	ertyàUInt32PropertyñUInt16PropertyBInt64Property = 27,
	[Error]01                      = 28,
	re∫Engine¨Editor»CoreUObject = 29,
	perty01                        = 30,
	ertyñUInt16PropertyBInt64Property = 31
};


// Enum Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8_t
{
	ESpritePolygonMode__SourceBoundingBox = 0,
	None                           = 1,
	ESpritePolygonMode__TightBoundingBox = 2,
	neByteProperty‘IntProperty  = 3,
	ESpritePolygonMode__ShrinkWrapped = 4,
	ByteProperty‘IntProperty    = 5,
	ESpritePolygonMode__FullyCustom = 6,
	ByteProperty                   = 7,
	ESpritePolygonMode__Diced      = 8,
	teProperty‘IntProperty        = 9,
	ESpritePolygonMode__ESpritePolygonMode_MAX = 10,
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


// Enum Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8_t
{
	ESpriteShapeType__Box          = 0,
	None                           = 1,
	ESpriteShapeType__Circle       = 2,
	neByteProperty‘IntProperty  = 3,
	ESpriteShapeType__Polygon      = 4,
	ByteProperty‘IntProperty    = 5,
	ESpriteShapeType__ESpriteShapeType_MAX = 6,
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


// Enum Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8_t
{
	ESpriteCollisionMode__None     = 0,
	None                           = 1,
	ESpriteCollisionMode__Use2DPhysics = 2,
	neByteProperty‘IntProperty  = 3,
	ESpriteCollisionMode__Use3DPhysics = 4,
	ByteProperty‘IntProperty    = 5,
	ESpriteCollisionMode__ESpriteCollisionMode_MAX = 6,
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



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Paper2D.PaperFlipbookKeyFrame
// 0x0010
struct FPaperFlipbookKeyFrame
{
	class UPaperSprite*                                Sprite;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FrameRun;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Paper2D.SpriteInstanceData
// 0x0050
struct FSpriteInstanceData
{
	struct FMatrix                                     Transform;                                                // 0x0000(0x0040) (Edit, ZeroConstructor, IsPlainOldData)
	class UPaperSprite*                                SourceSprite;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      VertexColor;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaterialIndex;                                            // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Paper2D.PaperSpriteSocket
// 0x0040
struct FPaperSpriteSocket
{
	struct FTransform                                  LocalTransform;                                           // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct Paper2D.PaperTerrainMaterialRule
// 0x0038
struct FPaperTerrainMaterialRule
{
	class UPaperSprite*                                StartCap;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UPaperSprite*>                        Body;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	class UPaperSprite*                                EndCap;                                                   // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumAngle;                                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaximumAngle;                                             // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              CollisionOffset;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DrawOrder;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Paper2D.PaperTileInfo
// 0x0010
struct FPaperTileInfo
{
	class UPaperTileSet*                               TileSet;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PackedTileIndex;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Paper2D.IntMargin
// 0x0010
struct FIntMargin
{
	int                                                Left;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Top;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Right;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Bottom;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Paper2D.SpriteGeometryShape
// 0x0030
struct FSpriteGeometryShape
{
	ESpriteShapeType                                   ShapeType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FVector2D>                           Vertices;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FVector2D                                   BoxSize;                                                  // 0x0018(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector2D                                   BoxPosition;                                              // 0x0020(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Rotation;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNegativeWinding;                                         // 0x002C(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct Paper2D.SpriteGeometryCollection
// 0x0030
struct FSpriteGeometryCollection
{
	TArray<struct FSpriteGeometryShape>                Shapes;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<ESpritePolygonMode>                    GeometryType;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                PixelsPerSubdivisionX;                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PixelsPerSubdivisionY;                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAvoidVertexMerging;                                      // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              AlphaThreshold;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DetailAmount;                                             // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SimplifyEpsilon;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Paper2D.PaperTileMetadata
// 0x0040
struct FPaperTileMetadata
{
	struct FName                                       UserDataName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSpriteGeometryCollection                   CollisionData;                                            // 0x0008(0x0030) (Edit)
	unsigned char                                      TerrainMembership[0x4];                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Paper2D.PaperTileSetTerrain
// 0x0018
struct FPaperTileSetTerrain
{
	struct FString                                     TerrainName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                CenterTileIndex;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Paper2D.PaperSpriteAtlasSlot
// 0x0040
struct FPaperSpriteAtlasSlot
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Paper2D.PaperSpriteAtlasSlot.SpriteRef
	int                                                AtlasIndex;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                X;                                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Paper2D.SpriteDrawCallRecord
// 0x00D0
struct FSpriteDrawCallRecord
{
	struct FVector                                     Destination;                                              // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UTexture*                                    BaseTexture;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0018(0x0030) MISSED OFFSET
	struct FColor                                      Color;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x84];                                      // 0x004C(0x0084) MISSED OFFSET
};

// ScriptStruct Paper2D.SpriteAssetInitParameters
// 0x0040
struct FSpriteAssetInitParameters
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

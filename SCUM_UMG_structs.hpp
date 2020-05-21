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

// Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8_t
{
	ESlateAccessibleBehavior__NotAccessible = 0,
	None                           = 1,
	ESlateAccessibleBehavior__Auto = 2,
	neByteProperty‘IntProperty  = 3,
	ESlateAccessibleBehavior__Summary = 4,
	ByteProperty‘IntProperty    = 5,
	ESlateAccessibleBehavior__Custom = 6,
	ByteProperty                   = 7,
	ESlateAccessibleBehavior__ToolTip = 8,
	teProperty‘IntProperty        = 9,
	ESlateAccessibleBehavior__ESlateAccessibleBehavior_MAX = 10,
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


// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{
	ESlateVisibility__Visible      = 0,
	None                           = 1,
	ESlateVisibility__Collapsed    = 2,
	neByteProperty‘IntProperty  = 3,
	ESlateVisibility__Hidden       = 4,
	ByteProperty‘IntProperty    = 5,
	ESlateVisibility__HitTestInvisible = 6,
	ByteProperty                   = 7,
	ESlateVisibility__SelfHitTestInvisible = 8,
	teProperty‘IntProperty        = 9,
	ESlateVisibility__ESlateVisibility_MAX = 10,
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


// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t
{
	EVirtualKeyboardType__Default  = 0,
	None                           = 1,
	EVirtualKeyboardType__Number   = 2,
	neByteProperty‘IntProperty  = 3,
	EVirtualKeyboardType__Web      = 4,
	ByteProperty‘IntProperty    = 5,
	EVirtualKeyboardType__Email    = 6,
	ByteProperty                   = 7,
	EVirtualKeyboardType__Password = 8,
	teProperty‘IntProperty        = 9,
	EVirtualKeyboardType__AlphaNumeric = 10,
	Property‘IntProperty          = 11,
	EVirtualKeyboardType__EVirtualKeyboardType_MAX = 12,
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


// Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8_t
{
	EWidgetAnimationEvent__Started = 0,
	None                           = 1,
	EWidgetAnimationEvent__Finished = 2,
	neByteProperty‘IntProperty  = 3,
	EWidgetAnimationEvent__EWidgetAnimationEvent_MAX = 4,
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


// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
	EUMGSequencePlayMode__Forward  = 0,
	None                           = 1,
	EUMGSequencePlayMode__Reverse  = 2,
	neByteProperty‘IntProperty  = 3,
	EUMGSequencePlayMode__PingPong = 4,
	ByteProperty‘IntProperty    = 5,
	EUMGSequencePlayMode__EUMGSequencePlayMode_MAX = 6,
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


// Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8_t
{
	EWidgetTickFrequency__Never    = 0,
	None                           = 1,
	EWidgetTickFrequency__Auto     = 2,
	neByteProperty‘IntProperty  = 3,
	EWidgetTickFrequency__EWidgetTickFrequency_MAX = 4,
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


// Enum UMG.EDragPivot
enum class EDragPivot : uint8_t
{
	EDragPivot__MouseDown          = 0,
	None                           = 1,
	EDragPivot__TopLeft            = 2,
	neByteProperty‘IntProperty  = 3,
	EDragPivot__TopCenter          = 4,
	ByteProperty‘IntProperty    = 5,
	EDragPivot__TopRight           = 6,
	ByteProperty                   = 7,
	EDragPivot__CenterLeft         = 8,
	teProperty‘IntProperty        = 9,
	EDragPivot__CenterCenter       = 10,
	Property‘IntProperty          = 11,
	EDragPivot__CenterRight        = 12,
	operty‘IntProperty            = 13,
	EDragPivot__BottomLeft         = 14,
	erty‘IntProperty              = 15,
	EDragPivot__BottomCenter       = 16,
	ty‘IntProperty                = 17,
	EDragPivot__BottomRight        = 18,
	[Error]                        = 19,
	EDragPivot__EDragPivot_MAX     = 20,
	IntProperty                    = 21,
	None01                         = 22,
	None02                         = 23,
	None03                         = 24,
	None04                         = 25,
	None05                         = 26,
	None06                         = 27,
	None07                         = 28,
	None08                         = 29,
	None09                         = 30,
	None10                         = 31
};


// Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8_t
{
	EDynamicBoxType__Horizontal    = 0,
	None                           = 1,
	EDynamicBoxType__Vertical      = 2,
	neByteProperty‘IntProperty  = 3,
	EDynamicBoxType__Wrap          = 4,
	ByteProperty‘IntProperty    = 5,
	EDynamicBoxType__Overlay       = 6,
	ByteProperty                   = 7,
	EDynamicBoxType__EDynamicBoxType_MAX = 8,
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


// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
	ESlateSizeRule__Automatic      = 0,
	None                           = 1,
	ESlateSizeRule__Fill           = 2,
	neByteProperty‘IntProperty  = 3,
	ESlateSizeRule__ESlateSizeRule_MAX = 4,
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


// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags__None       = 0,
	None                           = 1,
	EWidgetDesignFlags__Designing  = 2,
	neByteProperty‘IntProperty  = 3,
	EWidgetDesignFlags__ShowOutline = 4,
	ByteProperty‘IntProperty    = 5,
	EWidgetDesignFlags__ExecutePreConstruct = 6,
	teProperty‘IntProperty        = 7,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX = 8,
	Property‘IntProperty          = 9,
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


// Enum UMG.EBindingKind
enum class EBindingKind : uint8_t
{
	EBindingKind__Function         = 0,
	None                           = 1,
	EBindingKind__Property         = 2,
	neByteProperty‘IntProperty  = 3,
	EBindingKind__EBindingKind_MAX = 4,
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


// Enum UMG.EWindowVisibility
enum class EWindowVisibility : uint8_t
{
	EWindowVisibility__Visible     = 0,
	None                           = 1,
	EWindowVisibility__SelfHitTestInvisible = 2,
	neByteProperty‘IntProperty  = 3,
	EWindowVisibility__EWindowVisibility_MAX = 4,
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


// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t
{
	EWidgetGeometryMode__Plane     = 0,
	None                           = 1,
	EWidgetGeometryMode__Cylinder  = 2,
	neByteProperty‘IntProperty  = 3,
	EWidgetGeometryMode__EWidgetGeometryMode_MAX = 4,
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


// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{
	EWidgetBlendMode__Opaque       = 0,
	None                           = 1,
	EWidgetBlendMode__Masked       = 2,
	neByteProperty‘IntProperty  = 3,
	EWidgetBlendMode__Transparent  = 4,
	ByteProperty‘IntProperty    = 5,
	EWidgetBlendMode__EWidgetBlendMode_MAX = 6,
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


// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8_t
{
	EWidgetTimingPolicy__RealTime  = 0,
	None                           = 1,
	EWidgetTimingPolicy__GameTime  = 2,
	neByteProperty‘IntProperty  = 3,
	EWidgetTimingPolicy__EWidgetTimingPolicy_MAX = 4,
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


// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{
	EWidgetSpace__World            = 0,
	None                           = 1,
	EWidgetSpace__Screen           = 2,
	neByteProperty‘IntProperty  = 3,
	EWidgetSpace__EWidgetSpace_MAX = 4,
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


// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t
{
	EWidgetInteractionSource__World = 0,
	None                           = 1,
	EWidgetInteractionSource__Mouse = 2,
	neByteProperty‘IntProperty  = 3,
	EWidgetInteractionSource__CenterScreen = 4,
	ByteProperty‘IntProperty    = 5,
	EWidgetInteractionSource__Custom = 6,
	ByteProperty                   = 7,
	EWidgetInteractionSource__EWidgetInteractionSource_MAX = 8,
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

// ScriptStruct UMG.WidgetTransform
// 0x001C
struct FWidgetTransform
{
	struct FVector2D                                   Translation;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Shear;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.EventReply
// 0x00B8
struct FEventReply
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct UMG.NamedSlotBinding
// 0x0010
struct FNamedSlotBinding
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Content;                                                  // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct UMG.AnimationEventBinding
// 0x0028
struct FAnimationEventBinding
{
	class UWidgetAnimation*                            Animation;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // 0x0008(0x0014) (ZeroConstructor, InstancedReference)
	EWidgetAnimationEvent                              AnimationEvent;                                           // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FName                                       UserTag;                                                  // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct UMG.PaintContext
// 0x0030
struct FPaintContext
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct UMG.ShapedTextOptions
// 0x0003
struct FShapedTextOptions
{
	unsigned char                                      bOverride_TextShapingMethod : 1;                          // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_TextFlowDirection : 1;                          // 0x0000(0x0001) (Edit)
	ETextShapingMethod                                 TextShapingMethod;                                        // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ETextFlowDirection                                 TextFlowDirection;                                        // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.DynamicPropertyPath
// 0x0000 (0x0028 - 0x0028)
struct FDynamicPropertyPath : public FCachedPropertyPath
{
	TArray<struct FPropertyPathSegment>                Segments;                                                 // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	class UFunction*                                   CachedFunction;                                           // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct UMG.AnchorData
// 0x0028
struct FAnchorData
{
	struct FMargin                                     Offsets;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAnchors                                    Anchors;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FVector2D                                   Alignment;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.SlateChildSize
// 0x0008
struct FSlateChildSize
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateSizeRule>                        SizeRule;                                                 // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct UMG.UserWidgetPool
// 0x0080
struct FUserWidgetPool
{
	TArray<class UUserWidget*>                         ActiveWidgets;                                            // 0x0000(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UUserWidget*>                         InactiveWidgets;                                          // 0x0010(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0020(0x0060) MISSED OFFSET
};

// ScriptStruct UMG.MovieScene2DTransformMask
// 0x0004
struct FMovieScene2DTransformMask
{
	uint32_t                                           Mask;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.SlateMeshVertex
// 0x003C
struct FSlateMeshVertex
{
	struct FVector2D                                   Position;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV0;                                                      // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV1;                                                      // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV2;                                                      // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV3;                                                      // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV4;                                                      // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV5;                                                      // 0x0034(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.WidgetAnimationBinding
// 0x0024
struct FWidgetAnimationBinding
{
	struct FName                                       WidgetName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotWidgetName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AnimationGuid;                                            // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsRootWidget;                                            // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
// 0x001C
struct FBlueprintWidgetAnimationDelegateBinding
{
	EWidgetAnimationEvent                              Action;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       AnimationToBind;                                          // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       UserTag;                                                  // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.DelegateRuntimeBinding
// 0x0050
struct FDelegateRuntimeBinding
{
	struct FString                                     ObjectName;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FName                                       PropertyName;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDynamicPropertyPath                        SourcePath;                                               // 0x0020(0x0028)
	EBindingKind                                       Kind;                                                     // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct UMG.WidgetNavigationData
// 0x0024
struct FWidgetNavigationData
{
	EUINavigationRule                                  Rule;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       WidgetToFocus;                                            // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UWidget>                      Widget;                                                   // 0x000C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             CustomDelegate;                                           // 0x0014(0x0014) (ZeroConstructor, InstancedReference)
};

// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// 0x0468 (0x04B0 - 0x0048)
struct FMovieScene2DTransformSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel                     Translation[0x2];                                         // 0x0048(0x00A0)
	struct FMovieSceneFloatChannel                     Rotation;                                                 // 0x0188(0x00A0)
	struct FMovieSceneFloatChannel                     Scale[0x2];                                               // 0x0228(0x00A0)
	struct FMovieSceneFloatChannel                     Shear[0x2];                                               // 0x0368(0x00A0)
	EMovieSceneBlendType                               BlendType;                                                // 0x04A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04A9(0x0003) MISSED OFFSET
	struct FMovieScene2DTransformMask                  Mask;                                                     // 0x04AC(0x0004)
};

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
// 0x0288 (0x02D0 - 0x0048)
struct FMovieSceneMarginSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneFloatChannel                     TopCurve;                                                 // 0x0048(0x00A0)
	struct FMovieSceneFloatChannel                     LeftCurve;                                                // 0x00E8(0x00A0)
	struct FMovieSceneFloatChannel                     RightCurve;                                               // 0x0188(0x00A0)
	struct FMovieSceneFloatChannel                     BottomCurve;                                              // 0x0228(0x00A0)
	EMovieSceneBlendType                               BlendType;                                                // 0x02C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// 0x0010 (0x0070 - 0x0060)
struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	TArray<struct FName>                               BrushPropertyNamePath;                                    // 0x0060(0x0010) (ZeroConstructor)
};

// ScriptStruct UMG.RichTextStyleRow
// 0x0268 (0x0270 - 0x0008)
struct FRichTextStyleRow : public FTableRowBase
{
	struct FTextBlockStyle                             TextStyle;                                                // 0x0008(0x0268) (Edit)
};

// ScriptStruct UMG.RichImageRow
// 0x0088 (0x0090 - 0x0008)
struct FRichImageRow : public FTableRowBase
{
	struct FSlateBrush                                 Brush;                                                    // 0x0008(0x0088) (Edit)
};

// ScriptStruct UMG.WidgetComponentInstanceData
// 0x0010 (0x00B8 - 0x00A8)
struct FWidgetComponentInstanceData : public FSceneComponentInstanceData
{
	TMap<class USceneComponent*, struct FTransform>    AttachedInstanceComponents;                               // 0x0058(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

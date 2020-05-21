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

// Enum Slate.ETextJustify
enum class ETextJustify : uint8_t
{
	ETextJustify__Left             = 0,
	None                           = 1,
	ETextJustify__Center           = 2,
	neByteProperty‘IntProperty  = 3,
	ETextJustify__Right            = 4,
	ByteProperty‘IntProperty    = 5,
	ETextJustify__ETextJustify_MAX = 6,
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


// Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t
{
	ETextFlowDirection__Auto       = 0,
	None                           = 1,
	ETextFlowDirection__LeftToRight = 2,
	neByteProperty‘IntProperty  = 3,
	ETextFlowDirection__RightToLeft = 4,
	ByteProperty‘IntProperty    = 5,
	ETextFlowDirection__ETextFlowDirection_MAX = 6,
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


// Enum Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : uint8_t
{
	EVirtualKeyboardDismissAction__TextChangeOnDismiss = 0,
	None                           = 1,
	EVirtualKeyboardDismissAction__TextCommitOnAccept = 2,
	neByteProperty‘IntProperty  = 3,
	EVirtualKeyboardDismissAction__TextCommitOnDismiss = 4,
	ByteProperty‘IntProperty    = 5,
	EVirtualKeyboardDismissAction__EVirtualKeyboardDismissAction_MAX = 6,
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


// Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8_t
{
	ETextWrappingPolicy__DefaultWrapping = 0,
	None                           = 1,
	ETextWrappingPolicy__AllowPerCharacterWrapping = 2,
	neByteProperty‘IntProperty  = 3,
	ETextWrappingPolicy__ETextWrappingPolicy_MAX = 4,
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


// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{
	ETableViewMode__List           = 0,
	None                           = 1,
	ETableViewMode__Tile           = 2,
	neByteProperty‘IntProperty  = 3,
	ETableViewMode__Tree           = 4,
	ByteProperty‘IntProperty    = 5,
	ETableViewMode__ETableViewMode_MAX = 6,
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


// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{
	ESelectionMode__None           = 0,
	None                           = 1,
	ESelectionMode__Single         = 2,
	neByteProperty‘IntProperty  = 3,
	ESelectionMode__SingleToggle   = 4,
	ByteProperty‘IntProperty    = 5,
	ESelectionMode__Multi          = 6,
	ByteProperty                   = 7,
	ESelectionMode__ESelectionMode_MAX = 8,
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


// Enum Slate.EMultiBlockType
enum class EMultiBlockType : uint8_t
{
	EMultiBlockType__None          = 0,
	None                           = 1,
	EMultiBlockType__ButtonRow     = 2,
	neByteProperty‘IntProperty  = 3,
	EMultiBlockType__EditableText  = 4,
	ByteProperty‘IntProperty    = 5,
	EMultiBlockType__Heading       = 6,
	ByteProperty                   = 7,
	EMultiBlockType__MenuEntry     = 8,
	teProperty‘IntProperty        = 9,
	EMultiBlockType__MenuSeparator = 10,
	Property‘IntProperty          = 11,
	EMultiBlockType__ToolBarButton = 12,
	operty‘IntProperty            = 13,
	EMultiBlockType__ToolBarComboButton = 14,
	erty‘IntProperty              = 15,
	EMultiBlockType__ToolBarSeparator = 16,
	ty‘IntProperty                = 17,
	EMultiBlockType__Widget        = 18,
	[Error]                        = 19,
	EMultiBlockType__EMultiBlockType_MAX = 20,
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


// Enum Slate.EMultiBoxType
enum class EMultiBoxType : uint8_t
{
	EMultiBoxType__MenuBar         = 0,
	None                           = 1,
	EMultiBoxType__ToolBar         = 2,
	neByteProperty‘IntProperty  = 3,
	EMultiBoxType__VerticalToolBar = 4,
	ByteProperty‘IntProperty    = 5,
	EMultiBoxType__Menu            = 6,
	ByteProperty                   = 7,
	EMultiBoxType__ButtonRow       = 8,
	teProperty‘IntProperty        = 9,
	EMultiBoxType__ToolMenuBar     = 10,
	Property‘IntProperty          = 11,
	EMultiBoxType__EMultiBoxType_MAX = 12,
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


// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{
	EProgressBarFillType__LeftToRight = 0,
	None                           = 1,
	EProgressBarFillType__RightToLeft = 2,
	neByteProperty‘IntProperty  = 3,
	EProgressBarFillType__FillFromCenter = 4,
	ByteProperty‘IntProperty    = 5,
	EProgressBarFillType__TopToBottom = 6,
	ByteProperty                   = 7,
	EProgressBarFillType__BottomToTop = 8,
	teProperty‘IntProperty        = 9,
	EProgressBarFillType__EProgressBarFillType_MAX = 10,
	Property‘IntProperty          = 11,
	None01                         = 12,
	None02                         = 13,
	None03                         = 14,
	None04                         = 15,
	None05                         = 16,
	teProperty‘IntProperty01      = 17,
	None06                         = 18,
	None07                         = 19,
	None08                         = 20,
	erty‘IntProperty              = 21,
	None09                         = 22,
	None10                         = 23
};


// Enum Slate.EStretch
enum class EStretch : uint8_t
{
	EStretch__None                 = 0,
	None                           = 1,
	EStretch__Fill                 = 2,
	neByteProperty‘IntProperty  = 3,
	EStretch__ScaleToFit           = 4,
	ByteProperty‘IntProperty    = 5,
	EStretch__ScaleToFitX          = 6,
	ByteProperty                   = 7,
	EStretch__ScaleToFitY          = 8,
	teProperty‘IntProperty        = 9,
	EStretch__ScaleToFill          = 10,
	Property‘IntProperty          = 11,
	EStretch__ScaleBySafeZone      = 12,
	operty‘IntProperty            = 13,
	EStretch__UserSpecified        = 14,
	erty‘IntProperty              = 15,
	EStretch__EStretch_MAX         = 16,
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


// Enum Slate.EStretchDirection
enum class EStretchDirection : uint8_t
{
	EStretchDirection__Both        = 0,
	None                           = 1,
	EStretchDirection__DownOnly    = 2,
	neByteProperty‘IntProperty  = 3,
	EStretchDirection__UpOnly      = 4,
	ByteProperty‘IntProperty    = 5,
	EStretchDirection__EStretchDirection_MAX = 6,
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


// Enum Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8_t
{
	EDescendantScrollDestination__IntoView = 0,
	None                           = 1,
	EDescendantScrollDestination__TopOrLeft = 2,
	neByteProperty‘IntProperty  = 3,
	EDescendantScrollDestination__Center = 4,
	ByteProperty‘IntProperty    = 5,
	EDescendantScrollDestination__EDescendantScrollDestination_MAX = 6,
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


// Enum Slate.EListItemAlignment
enum class EListItemAlignment : uint8_t
{
	EListItemAlignment__EvenlyDistributed = 0,
	None                           = 1,
	EListItemAlignment__EvenlySize = 2,
	neByteProperty‘IntProperty  = 3,
	EListItemAlignment__EvenlyWide = 4,
	ByteProperty‘IntProperty    = 5,
	EListItemAlignment__LeftAligned = 6,
	ByteProperty                   = 7,
	EListItemAlignment__RightAligned = 8,
	teProperty‘IntProperty        = 9,
	EListItemAlignment__CenterAligned = 10,
	Property‘IntProperty          = 11,
	EListItemAlignment__Fill       = 12,
	operty‘IntProperty            = 13,
	EListItemAlignment__EListItemAlignment_MAX = 14,
	erty‘IntProperty              = 15,
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


// Enum Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : uint8_t
{
	ECustomizedToolMenuVisibility__None = 0,
	None                           = 1,
	ECustomizedToolMenuVisibility__Visible = 2,
	neByteProperty‘IntProperty  = 3,
	ECustomizedToolMenuVisibility__Hidden = 4,
	ByteProperty‘IntProperty    = 5,
	ECustomizedToolMenuVisibility__ECustomizedToolMenuVisibility_MAX = 6,
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


// Enum Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8_t
{
	EMultipleKeyBindingIndex__Primary = 0,
	None                           = 1,
	EMultipleKeyBindingIndex__Secondary = 2,
	neByteProperty‘IntProperty  = 3,
	EMultipleKeyBindingIndex__NumChords = 4,
	ByteProperty‘IntProperty    = 5,
	EMultipleKeyBindingIndex__EMultipleKeyBindingIndex_MAX = 6,
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


// Enum Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : uint8_t
{
	EUserInterfaceActionType__None = 0,
	None                           = 1,
	EUserInterfaceActionType__Button = 2,
	neByteProperty‘IntProperty  = 3,
	EUserInterfaceActionType__ToggleButton = 4,
	ByteProperty‘IntProperty    = 5,
	EUserInterfaceActionType__RadioButton = 6,
	ByteProperty                   = 7,
	EUserInterfaceActionType__Check = 8,
	teProperty‘IntProperty        = 9,
	EUserInterfaceActionType__CollapsedButton = 10,
	Property‘IntProperty          = 11,
	EUserInterfaceActionType__EUserInterfaceActionType_MAX = 12,
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



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Slate.VirtualKeyboardOptions
// 0x0001
struct FVirtualKeyboardOptions
{
	bool                                               bEnableAutocorrect;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Slate.InputChord
// 0x0020
struct FInputChord
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      bShift : 1;                                               // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCtrl : 1;                                                // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAlt : 1;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCmd : 1;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct Slate.Anchors
// 0x0010
struct FAnchors
{
	struct FVector2D                                   Minimum;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Maximum;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Slate.CustomizedToolMenuEntry
// 0x0004
struct FCustomizedToolMenuEntry
{
	ECustomizedToolMenuVisibility                      Visibility;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct Slate.CustomizedToolMenuSection
// 0x0004
struct FCustomizedToolMenuSection
{
	ECustomizedToolMenuVisibility                      Visibility;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct Slate.CustomizedToolMenuNameArray
// 0x0010
struct FCustomizedToolMenuNameArray
{
	TArray<struct FName>                               names;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Slate.CustomizedToolMenu
// 0x0108
struct FCustomizedToolMenu
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FCustomizedToolMenuEntry> Entries;                                                  // 0x0008(0x0050) (ZeroConstructor)
	TMap<struct FName, struct FCustomizedToolMenuSection> Sections;                                                 // 0x0058(0x0050) (ZeroConstructor)
	TMap<struct FName, struct FCustomizedToolMenuNameArray> EntryOrder;                                               // 0x00A8(0x0050) (ZeroConstructor)
	TArray<struct FName>                               SectionOrder;                                             // 0x00F8(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

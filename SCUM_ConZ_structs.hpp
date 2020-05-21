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

// Enum ConZ.EWidgetDisplayInfoType
enum class EWidgetDisplayInfoType : uint8_t
{
	EWidgetDisplayInfoType__None   = 0,
	None                           = 1,
	EWidgetDisplayInfoType__FirstOverSecond = 2,
	neByteProperty‘IntProperty  = 3,
	EWidgetDisplayInfoType__Single = 4,
	ByteProperty‘IntProperty    = 5,
	EWidgetDisplayInfoType__EWidgetDisplayInfoType_MAX = 6,
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


// Enum ConZ.ENoiseLevel
enum class ENoiseLevel : uint8_t
{
	ENoiseLevel__Mute              = 0,
	None                           = 1,
	ENoiseLevel__VerySilent        = 2,
	neByteProperty‘IntProperty  = 3,
	ENoiseLevel__Silent            = 4,
	ByteProperty‘IntProperty    = 5,
	ENoiseLevel__Moderate          = 6,
	ByteProperty                   = 7,
	ENoiseLevel__Loud              = 8,
	teProperty‘IntProperty        = 9,
	ENoiseLevel__VeryLoud          = 10,
	Property‘IntProperty          = 11,
	ENoiseLevel__Count             = 12,
	operty‘IntProperty            = 13,
	ENoiseLevel__ENoiseLevel_MAX   = 14,
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


// Enum ConZ.EInteractionType
enum class EInteractionType : uint8_t
{
	EInteractionType__None         = 0,
	None                           = 1,
	EInteractionType__Select       = 2,
	neByteProperty‘IntProperty  = 3,
	EInteractionType__UnSelectAll  = 4,
	ByteProperty‘IntProperty    = 5,
	EInteractionType__Search       = 6,
	ByteProperty                   = 7,
	EInteractionType__Examine      = 8,
	teProperty‘IntProperty        = 9,
	EInteractionType__PickUp       = 10,
	Property‘IntProperty          = 11,
	EInteractionType__PickUpAllExamined = 12,
	operty‘IntProperty            = 13,
	EInteractionType__PickUpAllSelected = 14,
	erty‘IntProperty              = 15,
	EInteractionType__Use          = 16,
	ty‘IntProperty                = 17,
	EInteractionType__Operate      = 18,
	[Error]                        = 19,
	EInteractionType__Drop         = 20,
	IntProperty                    = 21,
	EInteractionType__DropAllSelected = 22,
	tProperty                      = 23,
	EInteractionType__Throw        = 24,
	roperty                        = 25,
	EInteractionType__Open         = 26,
	perty                          = 27,
	EInteractionType__Close        = 28,
	rty                            = 29,
	EInteractionType__Lock         = 30,
	y                              = 31,
	EInteractionType__Unlock       = 32,
	
                              = 33,
	EInteractionType__Push         = 34,
	BoolProperty                   = 35,
	EInteractionType__GodModeFill  = 36,
	olPropertybFloatProperty      = 37,
	EInteractionType__Fill         = 38,
	PropertybFloatProperty        = 39,
	EInteractionType__AdjustHeight = 40,
	opertybFloatProperty          = 41,
	EInteractionType__ConfirmHeight = 42,
	ertybFloatProperty            = 43,
	EInteractionType__Tank         = 44,
	tybFloatProperty              = 45,
	EInteractionType__Craft        = 46,
	bFloatProperty                = 47,
	EInteractionType__Uncraft      = 48,
	FloatProperty                  = 49,
	EInteractionType__Create       = 50,
	oatProperty                    = 51,
	EInteractionType__Fix          = 52,
	tProperty01                    = 53,
	EInteractionType__Refuel       = 54,
	roperty01                      = 55,
	EInteractionType__Charge       = 56,
	perty01                        = 57,
	EInteractionType__Eat          = 58,
	rty01                          = 59,
	EInteractionType__EatAll       = 60,
	y01                            = 61,
	EInteractionType__Drink        = 62,
	[Error]01                      = 63,
	EInteractionType__DrinkAll     = 64,
	ObjectProperty                 = 65,
	EInteractionType__CheckTaste   = 66,
	jectPropertyNameProperty     = 67,
	EInteractionType__Equip        = 68,
	ctPropertyNameProperty       = 69,
	EInteractionType__UnEquip      = 70,
	PropertyNameProperty         = 71,
	EInteractionType__Cut          = 72,
	opertyNameProperty           = 73,
	EInteractionType__Collect      = 74,
	ertyNameProperty             = 75,
	EInteractionType__FillItemWithReplenishableResource = 76,
	tyNameProperty               = 77,
	EInteractionType__LightFire    = 78,
	NameProperty                 = 79,
	EInteractionType__AddFuel      = 80,
	NameProperty                   = 81,
	EInteractionType__Extinguish   = 82,
	meProperty                     = 83,
	EInteractionType__Prepare      = 84,
	Property                       = 85,
	EInteractionType__Cook         = 86,
	operty                         = 87,
	EInteractionType__Chop         = 88,
	erty                           = 89,
	EInteractionType__SmokeFood    = 90,
	ty                             = 91,
	EInteractionType__Destroy      = 92,
	                               = 93,
	EInteractionType__Store        = 94,
	DelegateProperty               = 95,
	EInteractionType__TakeInHands  = 96,
	legatePropertyòDoublePropertyfArrayProperty = 97,
	EInteractionType__WashCloth    = 98,
	gatePropertyòDoublePropertyfArrayProperty = 99,
	EInteractionType__WashClothAll = 100,
	tePropertyòDoublePropertyfArrayProperty = 101,
	EInteractionType__RemoveFromHands = 102,
	PropertyòDoublePropertyfArrayProperty = 103,
	EInteractionType__CarryItem    = 104,
	opertyòDoublePropertyfArrayProperty = 105,
	EInteractionType__AddToQuickAccess = 106,
	ertyòDoublePropertyfArrayProperty = 107,
	EInteractionType__RemoveFromQuickAccess = 108,
	tyòDoublePropertyfArrayProperty = 109,
	EInteractionType__ChamberBullet = 110,
	[Error]02                      = 111,
	EInteractionType__LoadAmmo     = 112,
	DoubleProperty                 = 113,
	EInteractionType__UnloadAmmo   = 114,
	ublePropertyfArrayProperty    = 115,
	EInteractionType__Swap         = 116,
	lePropertyfArrayProperty      = 117,
	EInteractionType__Tune         = 118,
	PropertyfArrayProperty        = 119,
	EInteractionType__Join         = 120,
	opertyfArrayProperty          = 121,
	EInteractionType__Split        = 122,
	ertyfArrayProperty            = 123,
	EInteractionType__Unpack       = 124,
	tyfArrayProperty              = 125,
	EInteractionType__CheckPulse   = 126,
	fArrayProperty                = 127,
	EInteractionType__Diagnose     = 128,
	ArrayProperty                  = 129,
	EInteractionType__MakeConscious = 130,
	rayProperty                    = 131,
	EInteractionType__ArtificalPerspiration = 132,
	yProperty                      = 133,
	EInteractionType__PullTooth    = 134,
	roperty02                      = 135,
	EInteractionType__PatchWounds  = 136,
	perty02                        = 137,
	EInteractionType__ImmobilizeLimbs = 138,
	rty02                          = 139,
	EInteractionType__MendBones    = 140,
	y02                            = 141,
	EInteractionType__TreatSickness = 142,
	[Error]03                      = 143,
	EInteractionType__PerformLocalAnesthesia = 144,
	StructProperty                 = 145,
	EInteractionType__PerformGeneralAnesthesia = 146,
	ructProperty∏VectorProperty˙RotatorProperty = 147,
	EInteractionType__PerformSurgery = 148,
	ctProperty∏VectorProperty˙RotatorProperty = 149,
	EInteractionType__RevivePatient = 150,
	Property∏VectorProperty˙RotatorProperty = 151,
	EInteractionType__InviteToSquad = 152,
	operty∏VectorProperty˙RotatorProperty = 153,
	EInteractionType__RemoveFromSquad = 154,
	erty∏VectorProperty˙RotatorProperty = 155,
	EInteractionType__LeaveSquad   = 156,
	ty∏VectorProperty˙RotatorProperty = 157,
	EInteractionType__Urinate      = 158,
	[Error]04                      = 159,
	EInteractionType__Defecate     = 160,
	VectorProperty                 = 161,
	EInteractionType__Vomit        = 162,
	ctorProperty˙RotatorProperty  = 163,
	EInteractionType__CheckTime    = 164,
	orProperty˙RotatorProperty    = 165,
	EInteractionType__Resuscitate  = 166,
	Property˙RotatorProperty      = 167,
	EInteractionType__BindHands    = 168,
	operty˙RotatorProperty        = 169
};


// Enum ConZ.EItemExhausted
enum class EItemExhausted : uint8_t
{
	EItemExhausted__DoNothing      = 0,
	None                           = 1,
	EItemExhausted__Destroy        = 2,
	neByteProperty‘IntProperty  = 3,
	EItemExhausted__Uncraft        = 4,
	ByteProperty‘IntProperty    = 5,
	EItemExhausted__EItemExhausted_MAX = 6,
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


// Enum ConZ.EItemRarity
enum class EItemRarity : uint8_t
{
	EItemRarity__ExtremelyRare     = 0,
	None                           = 1,
	EItemRarity__VeryRare          = 2,
	neByteProperty‘IntProperty  = 3,
	EItemRarity__Rare              = 4,
	ByteProperty‘IntProperty    = 5,
	EItemRarity__Uncommon          = 6,
	ByteProperty                   = 7,
	EItemRarity__Common            = 8,
	teProperty‘IntProperty        = 9,
	EItemRarity__Abundant          = 10,
	Property‘IntProperty          = 11,
	EItemRarity__Count             = 12,
	operty‘IntProperty            = 13,
	EItemRarity__EItemRarity_MAX   = 14,
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


// Enum ConZ.EConfigFile
enum class EConfigFile : uint8_t
{
	EConfigFile__None              = 0,
	None                           = 1,
	EConfigFile__Engine            = 2,
	neByteProperty‘IntProperty  = 3,
	EConfigFile__GameUserSettings  = 4,
	ByteProperty‘IntProperty    = 5,
	EConfigFile__ServerSettings    = 6,
	ByteProperty                   = 7,
	EConfigFile__EConfigFile_MAX   = 8,
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


// Enum ConZ.EDoorStateFlags
enum class EDoorStateFlags : uint8_t
{
	EDoorStateFlags__None          = 0,
	None                           = 1,
	EDoorStateFlags__Open          = 2,
	neByteProperty‘IntProperty  = 3,
	EDoorStateFlags__Locked        = 4,
	ByteProperty‘IntProperty    = 5,
	EDoorStateFlags__HasPower      = 6,
	teProperty‘IntProperty        = 7,
	EDoorStateFlags__ChangeSide    = 8,
	ty‘IntProperty                = 9,
	EDoorStateFlags__HasLock       = 10,
	
                              = 11,
	EDoorStateFlags__EDoorStateFlags_MAX = 12,
	BoolProperty                   = 13,
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


// Enum ConZ.ERespawnOption
enum class ERespawnOption : uint8_t
{
	ERespawnOption__Random         = 0,
	None                           = 1,
	ERespawnOption__Sector         = 2,
	neByteProperty‘IntProperty  = 3,
	ERespawnOption__Shelter        = 4,
	ByteProperty‘IntProperty    = 5,
	ERespawnOption__Squad          = 6,
	ByteProperty                   = 7,
	ERespawnOption__ERespawnOption_MAX = 8,
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


// Enum ConZ.EConZSquadMemberRank
enum class EConZSquadMemberRank : uint8_t
{
	EConZSquadMemberRank__None     = 0,
	None                           = 1,
	EConZSquadMemberRank__Member   = 2,
	neByteProperty‘IntProperty  = 3,
	EConZSquadMemberRank__Enforcer = 4,
	ByteProperty‘IntProperty    = 5,
	EConZSquadMemberRank__Underboss = 6,
	ByteProperty                   = 7,
	EConZSquadMemberRank__Boss     = 8,
	teProperty‘IntProperty        = 9,
	EConZSquadMemberRank__EConZSquadMemberRank_MAX = 10,
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


// Enum ConZ.EChatType
enum class EChatType : uint8_t
{
	EChatType__Default             = 0,
	None                           = 1,
	EChatType__Local               = 2,
	neByteProperty‘IntProperty  = 3,
	EChatType__Global              = 4,
	ByteProperty‘IntProperty    = 5,
	EChatType__Squad               = 6,
	ByteProperty                   = 7,
	EChatType__ServerMessage       = 8,
	teProperty‘IntProperty        = 9,
	EChatType__Error               = 10,
	Property‘IntProperty          = 11,
	EChatType__EChatType_MAX       = 12,
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


// Enum ConZ.ESortOrder
enum class ESortOrder : uint8_t
{
	ESortOrder__Ascending          = 0,
	None                           = 1,
	ESortOrder__Descending         = 2,
	neByteProperty‘IntProperty  = 3,
	ESortOrder__ESortOrder_MAX     = 4,
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


// Enum ConZ.EEventsRankingStatsOrderByField
enum class EEventsRankingStatsOrderByField : uint8_t
{
	EEventsRankingStatsOrderByField__FamePoints = 0,
	None                           = 1,
	EEventsRankingStatsOrderByField__EventScore = 2,
	neByteProperty‘IntProperty  = 3,
	EEventsRankingStatsOrderByField__EventKills = 4,
	ByteProperty‘IntProperty    = 5,
	EEventsRankingStatsOrderByField__EventDeaths = 6,
	ByteProperty                   = 7,
	EEventsRankingStatsOrderByField__EEventsRankingStatsOrderByField_MAX = 8,
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


// Enum ConZ.ESkillLevel
enum class ESkillLevel : uint8_t
{
	ESkillLevel__NoSkill           = 0,
	None                           = 1,
	ESkillLevel__Basic             = 2,
	neByteProperty‘IntProperty  = 3,
	ESkillLevel__Medium            = 4,
	ByteProperty‘IntProperty    = 5,
	ESkillLevel__Advanced          = 6,
	ByteProperty                   = 7,
	ESkillLevel__AboveAdvanced     = 8,
	teProperty‘IntProperty        = 9,
	ESkillLevel__ESkillLevel_MAX   = 10,
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


// Enum ConZ.EAnimalAction
enum class EAnimalAction : uint8_t
{
	EAnimalAction__None            = 0,
	None                           = 1,
	EAnimalAction__Eat             = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimalAction__Rest            = 4,
	ByteProperty‘IntProperty    = 5,
	EAnimalAction__Attack          = 6,
	ByteProperty                   = 7,
	EAnimalAction__Sit             = 8,
	teProperty‘IntProperty        = 9
};


// Enum ConZ.EBodyPart
enum class EBodyPart : uint8_t
{
	EBodyPart__Unknown             = 0,
	None                           = 1,
	EBodyPart__Head                = 2,
	neByteProperty‘IntProperty  = 3,
	EBodyPart__Chest               = 4,
	ByteProperty‘IntProperty    = 5,
	EBodyPart__Abdomen             = 6,
	ByteProperty                   = 7,
	EBodyPart__ArmLeftLower        = 8,
	teProperty‘IntProperty        = 9,
	EBodyPart__ArmLeftUpper        = 10,
	Property‘IntProperty          = 11,
	EBodyPart__ArmRightLower       = 12,
	operty‘IntProperty            = 13
};


// Enum ConZ.EEnvironmentClass
enum class EEnvironmentClass : uint8_t
{
	EEnvironmentClass__Indoor_Small = 0,
	None                           = 1,
	EEnvironmentClass__Indoor_Medium = 2,
	neByteProperty‘IntProperty  = 3,
	EEnvironmentClass__Indoor_Large = 4,
	ByteProperty‘IntProperty    = 5,
	EEnvironmentClass__Outdoor_Large = 6,
	ByteProperty                   = 7,
	EEnvironmentClass__Count       = 8,
	teProperty‘IntProperty        = 9,
	EEnvironmentClass__EEnvironmentClass_MAX = 10,
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


// Enum ConZ.EGender
enum class EGender : uint8_t
{
	EGender__Unspecified           = 0,
	None                           = 1,
	EGender__Female                = 2,
	neByteProperty‘IntProperty  = 3,
	EGender__Male                  = 4,
	ByteProperty‘IntProperty    = 5,
	EGender__EGender_MAX           = 6,
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


// Enum ConZ.EDetectHitCollisionType
enum class EDetectHitCollisionType : uint8_t
{
	EDetectHitCollisionType__None  = 0,
	None                           = 1,
	EDetectHitCollisionType__Head  = 2,
	neByteProperty‘IntProperty  = 3,
	EDetectHitCollisionType__Body  = 4,
	ByteProperty‘IntProperty    = 5,
	EDetectHitCollisionType__Legs  = 6,
	ByteProperty                   = 7,
	EDetectHitCollisionType__EDetectHitCollisionType_MAX = 8,
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


// Enum ConZ.EDamageMagnitudeType
enum class EDamageMagnitudeType : uint8_t
{
	EDamageMagnitudeType__Small    = 0,
	None                           = 1,
	EDamageMagnitudeType__Medium   = 2,
	neByteProperty‘IntProperty  = 3,
	EDamageMagnitudeType__Large    = 4,
	ByteProperty‘IntProperty    = 5,
	EDamageMagnitudeType__Knockout = 6,
	ByteProperty                   = 7,
	EDamageMagnitudeType__EDamageMagnitudeType_MAX = 8,
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


// Enum ConZ.ECharacterImpactSourceSoundCategory
enum class ECharacterImpactSourceSoundCategory : uint8_t
{
	ECharacterImpactSourceSoundCategory__Any = 0,
	None                           = 1,
	ECharacterImpactSourceSoundCategory__Head_Bare = 2,
	neByteProperty‘IntProperty  = 3,
	ECharacterImpactSourceSoundCategory__Hands_Bare = 4,
	ByteProperty‘IntProperty    = 5,
	ECharacterImpactSourceSoundCategory__Hands_Gloved = 6,
	ByteProperty                   = 7,
	ECharacterImpactSourceSoundCategory__Legs_Bare = 8,
	teProperty‘IntProperty        = 9,
	ECharacterImpactSourceSoundCategory__Claws = 10,
	Property‘IntProperty          = 11,
	ECharacterImpactSourceSoundCategory__Jaws = 12,
	operty‘IntProperty            = 13,
	ECharacterImpactSourceSoundCategory__Blunt_Wood = 14,
	erty‘IntProperty              = 15,
	ECharacterImpactSourceSoundCategory__Blunt_Metal = 16,
	ty‘IntProperty                = 17,
	ECharacterImpactSourceSoundCategory__Sharp_Metal = 18,
	[Error]                        = 19,
	ECharacterImpactSourceSoundCategory__ECharacterImpactSourceSoundCategory_MAX = 20,
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


// Enum ConZ.EAITeam
enum class EAITeam : uint8_t
{
	EAITeam__Prisoner              = 0,
	None                           = 1,
	EAITeam__Zombie                = 2,
	neByteProperty‘IntProperty  = 3,
	EAITeam__Animal                = 4,
	ByteProperty‘IntProperty    = 5,
	EAITeam__Mechanoid             = 6,
	ByteProperty                   = 7,
	EAITeam__Vehicle               = 8,
	teProperty‘IntProperty        = 9,
	EAITeam__Neutral               = 10,
	Property‘IntProperty          = 11,
	EAITeam__None                  = 12,
	Sphere                         = 13,
	EAITeam__EAITeam_MAX           = 14,
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


// Enum ConZ.EConZPxDominanceGroup
enum class EConZPxDominanceGroup : uint8_t
{
	EConZPxDominanceGroup__Default = 0,
	None                           = 1,
	EConZPxDominanceGroup__MediumPawns = 2,
	neByteProperty‘IntProperty  = 3,
	EConZPxDominanceGroup__LargePawns = 4,
	ByteProperty‘IntProperty    = 5,
	EConZPxDominanceGroup__EConZPxDominanceGroup_MAX = 6,
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


// Enum ConZ.EPrisonerMovementPace
enum class EPrisonerMovementPace : uint8_t
{
	EPrisonerMovementPace__NotMoving = 0,
	None                           = 1,
	EPrisonerMovementPace__Slow    = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerMovementPace__Medium  = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerMovementPace__Fast    = 6,
	ByteProperty                   = 7,
	EPrisonerMovementPace__EPrisonerMovementPace_MAX = 8,
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


// Enum ConZ.EPrisonerBorderCrossingPenalty
enum class EPrisonerBorderCrossingPenalty : uint8_t
{
	EPrisonerBorderCrossingPenalty__None = 0,
	None                           = 1,
	EPrisonerBorderCrossingPenalty__Penalty1 = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerBorderCrossingPenalty__Penalty2 = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerBorderCrossingPenalty__Penalty3 = 6,
	ByteProperty                   = 7,
	EPrisonerBorderCrossingPenalty__Penalty4 = 8,
	teProperty‘IntProperty        = 9,
	EPrisonerBorderCrossingPenalty__DeadPenalty = 10,
	Property‘IntProperty          = 11,
	EPrisonerBorderCrossingPenalty__EPrisonerBorderCrossingPenalty_MAX = 12,
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


// Enum ConZ.ETabMode
enum class ETabMode : uint8_t
{
	ETabMode__None                 = 0,
	None                           = 1,
	ETabMode__Inventory            = 2,
	neByteProperty‘IntProperty  = 3,
	ETabMode__BCU                  = 4,
	ByteProperty‘IntProperty    = 5,
	ETabMode__Crafting             = 6,
	ByteProperty                   = 7,
	ETabMode__Journal              = 8,
	teProperty‘IntProperty        = 9,
	ETabMode__Squad                = 10,
	Property‘IntProperty          = 11,
	ETabMode__Events               = 12,
	operty‘IntProperty            = 13,
	ETabMode__Last                 = 14,
	erty‘IntProperty              = 15,
	ETabMode__ETabMode_MAX         = 16,
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


// Enum ConZ.EWeaponMalfunction
enum class EWeaponMalfunction : uint8_t
{
	EWeaponMalfunction__None       = 0,
	None                           = 1,
	EWeaponMalfunction__BadRound   = 2,
	neByteProperty‘IntProperty  = 3,
	EWeaponMalfunction__StovePipe  = 4,
	ByteProperty‘IntProperty    = 5,
	EWeaponMalfunction__RoundNotLoaded = 6,
	ByteProperty                   = 7,
	EWeaponMalfunction__DoubleFeed = 8,
	teProperty‘IntProperty        = 9,
	EWeaponMalfunction__Count      = 10,
	Property‘IntProperty          = 11,
	EWeaponMalfunction__EWeaponMalfunction_MAX = 12,
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


// Enum ConZ.EPrisonerCombatMode
enum class EPrisonerCombatMode : uint8_t
{
	EPrisonerCombatMode__None      = 0,
	None                           = 1,
	EPrisonerCombatMode__MeleeUnarmed = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerCombatMode__MeleeWeapon = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerCombatMode__Firearm   = 6,
	ByteProperty                   = 7,
	EPrisonerCombatMode__EPrisonerCombatMode_MAX = 8,
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


// Enum ConZ.EHoldBreathState
enum class EHoldBreathState : uint8_t
{
	EHoldBreathState__None         = 0,
	None                           = 1,
	EHoldBreathState__BreathIn     = 2,
	neByteProperty‘IntProperty  = 3,
	EHoldBreathState__HoldBreath   = 4,
	ByteProperty‘IntProperty    = 5,
	EHoldBreathState__BreathOut    = 6,
	ByteProperty                   = 7,
	EHoldBreathState__Breathless   = 8,
	teProperty‘IntProperty        = 9,
	EHoldBreathState__BreathInRecovery = 10,
	Property‘IntProperty          = 11,
	EHoldBreathState__Count        = 12,
	operty‘IntProperty            = 13,
	EHoldBreathState__EHoldBreathState_MAX = 14,
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


// Enum ConZ.EPrisonerWettablePart
enum class EPrisonerWettablePart : uint8_t
{
	EPrisonerWettablePart__Head    = 0,
	None                           = 1,
	EPrisonerWettablePart__UpperBody = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerWettablePart__LowerBody = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerWettablePart__Feet    = 6,
	ByteProperty                   = 7,
	EPrisonerWettablePart__Count   = 8,
	teProperty‘IntProperty        = 9,
	EPrisonerWettablePart__EPrisonerWettablePart_MAX = 10,
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


// Enum ConZ.EPrisonerMeleeTargetSelectionMode
enum class EPrisonerMeleeTargetSelectionMode : uint8_t
{
	EPrisonerMeleeTargetSelectionMode__Manual = 0,
	None                           = 1,
	EPrisonerMeleeTargetSelectionMode__SemiAutomatic = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerMeleeTargetSelectionMode__Automatic = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerMeleeTargetSelectionMode__EPrisonerMeleeTargetSelectionMode_MAX = 6,
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


// Enum ConZ.EMotionIntensity
enum class EMotionIntensity : uint8_t
{
	EMotionIntensity__None         = 0,
	None                           = 1,
	EMotionIntensity__Light        = 2,
	neByteProperty‘IntProperty  = 3,
	EMotionIntensity__Medium       = 4,
	ByteProperty‘IntProperty    = 5,
	EMotionIntensity__Heavy        = 6,
	ByteProperty                   = 7,
	EMotionIntensity__EMotionIntensity_MAX = 8,
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


// Enum ConZ.EPrisonerStance
enum class EPrisonerStance : uint8_t
{
	EPrisonerStance__Standing      = 0,
	None                           = 1,
	EPrisonerStance__Crouching     = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerStance__Prone         = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerStance__Swimming      = 6,
	ByteProperty                   = 7,
	EPrisonerStance__Count         = 8,
	teProperty‘IntProperty        = 9,
	EPrisonerStance__EPrisonerStance_MAX = 10,
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


// Enum ConZ.ESkillAttribute
enum class ESkillAttribute : uint8_t
{
	ESkillAttribute__Constitution  = 0,
	None                           = 1,
	ESkillAttribute__Dexterity     = 2,
	neByteProperty‘IntProperty  = 3,
	ESkillAttribute__Intelligence  = 4,
	ByteProperty‘IntProperty    = 5,
	ESkillAttribute__Strength      = 6,
	ByteProperty                   = 7,
	ESkillAttribute__ESkillAttribute_MAX = 8,
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


// Enum ConZ.EBodyState
enum class EBodyState : uint8_t
{
	EBodyState__FullyFed           = 0,
	None                           = 1,
	EBodyState__Hungry             = 2,
	neByteProperty‘IntProperty  = 3,
	EBodyState__Starving           = 4,
	ByteProperty‘IntProperty    = 5,
	EBodyState__WellHydrated       = 6,
	ByteProperty                   = 7,
	EBodyState__Hydrated           = 8,
	teProperty‘IntProperty        = 9,
	EBodyState__Thirsty            = 10,
	Property‘IntProperty          = 11,
	EBodyState__VeryThirsty        = 12,
	operty‘IntProperty            = 13,
	EBodyState__Dehydrated         = 14,
	erty‘IntProperty              = 15,
	EBodyState__UrinationNeeded    = 16,
	ty‘IntProperty                = 17,
	EBodyState__ForcedUrination    = 18,
	[Error]                        = 19,
	EBodyState__DefecationNeeded   = 20,
	IntProperty                    = 21,
	EBodyState__ForcedDefecation   = 22,
	tProperty                      = 23,
	EBodyState__Choking            = 24,
	roperty                        = 25,
	EBodyState__Unconsciousness    = 26,
	perty                          = 27,
	EBodyState__Coma               = 28,
	rty                            = 29,
	EBodyState__Death              = 30,
	y                              = 31,
	EBodyState__Headless           = 32,
	
                              = 33,
	EBodyState__LowBloodSugar      = 34,
	BoolProperty                   = 35,
	EBodyState__NoseBleeding       = 36,
	olPropertybFloatProperty      = 37,
	EBodyState__FeelingCold        = 38,
	PropertybFloatProperty        = 39,
	EBodyState__Fatigue            = 40,
	opertybFloatProperty          = 41,
	EBodyState__HeartPalpitations  = 42,
	ertybFloatProperty            = 43,
	EBodyState__RespiratoryProblems = 44,
	tybFloatProperty              = 45,
	EBodyState__RespiratoryFailure = 46,
	bFloatProperty                = 47,
	EBodyState__Confusion          = 48,
	FloatProperty                  = 49,
	EBodyState__Nausea             = 50,
	oatProperty                    = 51,
	EBodyState__BlurredVision      = 52,
	tProperty01                    = 53,
	EBodyState__NightBlindness     = 54,
	roperty01                      = 55,
	EBodyState__Pellagra           = 56,
	perty01                        = 57,
	EBodyState__PainfulJoints      = 58,
	rty01                          = 59,
	EBodyState__SkinProblems       = 60,
	y01                            = 61,
	EBodyState__MuscleWeakness     = 62,
	[Error]01                      = 63,
	EBodyState__ItchingFeet        = 64,
	ObjectProperty                 = 65,
	EBodyState__Headache           = 66,
	jectPropertyNameProperty     = 67,
	EBodyState__LightChestPain     = 68,
	ctPropertyNameProperty       = 69,
	EBodyState__SeriousChestPain   = 70,
	PropertyNameProperty         = 71,
	EBodyState__CardiacArrest      = 72
};


// Enum ConZ.ECharacterActionEndState
enum class ECharacterActionEndState : uint8_t
{
	ECharacterActionEndState__None = 0,
	None                           = 1,
	ECharacterActionEndState__Regular = 2,
	neByteProperty‘IntProperty  = 3,
	ECharacterActionEndState__ConditionNotMet = 4,
	ByteProperty‘IntProperty    = 5,
	ECharacterActionEndState__Canceled = 6,
	ByteProperty                   = 7,
	ECharacterActionEndState__Failed = 8,
	teProperty‘IntProperty        = 9,
	ECharacterActionEndState__Terminated = 10,
	Property‘IntProperty          = 11,
	ECharacterActionEndState__ECharacterActionEndState_MAX = 12,
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


// Enum ConZ.ECharacterActionAckType
enum class ECharacterActionAckType : uint8_t
{
	ECharacterActionAckType__None  = 0,
	None                           = 1,
	ECharacterActionAckType__Begin = 2,
	neByteProperty‘IntProperty  = 3,
	ECharacterActionAckType__End   = 4,
	ByteProperty‘IntProperty    = 5,
	ECharacterActionAckType__ECharacterActionAckType_MAX = 6,
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


// Enum ConZ.EPlayableInstrumentTone
enum class EPlayableInstrumentTone : uint8_t
{
	EPlayableInstrumentTone__C     = 0,
	None                           = 1,
	EPlayableInstrumentTone__Db    = 2,
	neByteProperty‘IntProperty  = 3,
	EPlayableInstrumentTone__D     = 4,
	ByteProperty‘IntProperty    = 5,
	EPlayableInstrumentTone__Eb    = 6,
	ByteProperty                   = 7,
	EPlayableInstrumentTone__E     = 8,
	teProperty‘IntProperty        = 9,
	EPlayableInstrumentTone__F     = 10,
	Property‘IntProperty          = 11,
	EPlayableInstrumentTone__Gb    = 12,
	operty‘IntProperty            = 13,
	EPlayableInstrumentTone__G     = 14,
	erty‘IntProperty              = 15,
	EPlayableInstrumentTone__Ab    = 16,
	ty‘IntProperty                = 17,
	EPlayableInstrumentTone__A     = 18,
	[Error]                        = 19,
	EPlayableInstrumentTone__Bb    = 20,
	IntProperty                    = 21,
	EPlayableInstrumentTone__B     = 22,
	tProperty                      = 23,
	EPlayableInstrumentTone__C2    = 24,
	roperty                        = 25,
	EPlayableInstrumentTone__Count = 26,
	perty                          = 27,
	EPlayableInstrumentTone__EPlayableInstrumentTone_MAX = 28,
	rty                            = 29,
	ApplyTattoos                   = 30,
	None01                         = 31,
	None02                         = 32,
	AreBreastsExposed              = 33,
	None03                         = 34,
	teProperty‘IntProperty01      = 35
};


// Enum ConZ.EWeaponCategory
enum class EWeaponCategory : uint8_t
{
	EWeaponCategory__ThrowingWeapons = 0,
	None                           = 1,
	EWeaponCategory__RangedWeapons = 2,
	neByteProperty‘IntProperty  = 3,
	EWeaponCategory__Handguns      = 4,
	ByteProperty‘IntProperty    = 5,
	EWeaponCategory__SubmachineGuns = 6,
	ByteProperty                   = 7,
	EWeaponCategory__Rifles        = 8,
	teProperty‘IntProperty        = 9,
	EWeaponCategory__Shotguns      = 10,
	Property‘IntProperty          = 11,
	EWeaponCategory__AutomaticRifles = 12,
	operty‘IntProperty            = 13,
	EWeaponCategory__SniperRifles  = 14,
	erty‘IntProperty              = 15,
	EWeaponCategory__Bow           = 16,
	ty‘IntProperty                = 17,
	EWeaponCategory__Count         = 18,
	[Error]                        = 19,
	EWeaponCategory__EWeaponCategory_MAX = 20,
	IntProperty                    = 21,
	None01                         = 22,
	PropertyŒMapProperty          = 23,
	xtProperty`InterfaceProperty  = 24,
	bject                          = 25,
	None02                         = 26,
	ctPropertyûSoftObjectPropertyÜUInt64PropertyàUInt32PropertyñUInt16PropertyBInt64Property = 27,
	ctPropertyÜUInt64PropertyàUInt32PropertyñUInt16PropertyBInt64Property = 28,
	None03                         = 29,
	Property`InterfaceProperty    = 30,
	ect                            = 31
};


// Enum ConZ.EWindSpeedCategory
enum class EWindSpeedCategory : uint8_t
{
	EWindSpeedCategory__Zero       = 0,
	None                           = 1,
	EWindSpeedCategory__Low        = 2,
	neByteProperty‘IntProperty  = 3,
	EWindSpeedCategory__Medium     = 4,
	ByteProperty‘IntProperty    = 5,
	EWindSpeedCategory__High       = 6,
	ByteProperty                   = 7,
	EWindSpeedCategory__EWindSpeedCategory_MAX = 8,
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


// Enum ConZ.EPrisonerPostTeleportBehavior
enum class EPrisonerPostTeleportBehavior : uint8_t
{
	EPrisonerPostTeleportBehavior__None = 0,
	None                           = 1,
	EPrisonerPostTeleportBehavior__ReviveIfDead = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerPostTeleportBehavior__GameEventLoadout = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerPostTeleportBehavior__EPrisonerPostTeleportBehavior_MAX = 6,
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


// Enum ConZ.EPrisonerCommonSpawnLocation
enum class EPrisonerCommonSpawnLocation : uint8_t
{
	EPrisonerCommonSpawnLocation__None = 0,
	None                           = 1,
	EPrisonerCommonSpawnLocation__Random = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerCommonSpawnLocation__Sector = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerCommonSpawnLocation__Home = 6,
	ByteProperty                   = 7,
	EPrisonerCommonSpawnLocation__Squad = 8,
	teProperty‘IntProperty        = 9,
	EPrisonerCommonSpawnLocation__Event = 10,
	Property‘IntProperty          = 11,
	EPrisonerCommonSpawnLocation__EPrisonerCommonSpawnLocation_MAX = 12,
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


// Enum ConZ.ECarryingItemState
enum class ECarryingItemState : uint8_t
{
	ECarryingItemState__None       = 0,
	None                           = 1,
	ECarryingItemState__Idle       = 2,
	neByteProperty‘IntProperty  = 3,
	ECarryingItemState__ECarryingItemState_MAX = 4,
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


// Enum ConZ.EPlayingInstrumentState
enum class EPlayingInstrumentState : uint8_t
{
	EPlayingInstrumentState__None  = 0,
	None                           = 1,
	EPlayingInstrumentState__Exiting = 2,
	neByteProperty‘IntProperty  = 3,
	EPlayingInstrumentState__Idle  = 4,
	ByteProperty‘IntProperty    = 5,
	EPlayingInstrumentState__Playing = 6,
	ByteProperty                   = 7,
	EPlayingInstrumentState__EPlayingInstrumentState_MAX = 8,
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


// Enum ConZ.EScopingWithItemInHandsState
enum class EScopingWithItemInHandsState : uint8_t
{
	EScopingWithItemInHandsState__None = 0,
	None                           = 1,
	EScopingWithItemInHandsState__Starting = 2,
	neByteProperty‘IntProperty  = 3,
	EScopingWithItemInHandsState__Scoping = 4,
	ByteProperty‘IntProperty    = 5,
	EScopingWithItemInHandsState__StoppingWithEffect = 6,
	ByteProperty                   = 7,
	EScopingWithItemInHandsState__StoppingNoEffect = 8,
	teProperty‘IntProperty        = 9,
	EScopingWithItemInHandsState__EScopingWithItemInHandsState_MAX = 10,
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


// Enum ConZ.EThrowingMode
enum class EThrowingMode : uint8_t
{
	EThrowingMode__None            = 0,
	None                           = 1,
	EThrowingMode__Cancelled       = 2,
	neByteProperty‘IntProperty  = 3,
	EThrowingMode__Aiming          = 4,
	ByteProperty‘IntProperty    = 5,
	EThrowingMode__Throwing        = 6,
	ByteProperty                   = 7,
	EThrowingMode__EThrowingMode_MAX = 8,
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


// Enum ConZ.EWeaponAimingType
enum class EWeaponAimingType : uint8_t
{
	EWeaponAimingType__None        = 0,
	None                           = 1,
	EWeaponAimingType__Hip         = 2,
	neByteProperty‘IntProperty  = 3,
	EWeaponAimingType__DownTheSights = 4,
	ByteProperty‘IntProperty    = 5,
	EWeaponAimingType__EWeaponAimingType_MAX = 6,
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


// Enum ConZ.EDodgeDirectionType
enum class EDodgeDirectionType : uint8_t
{
	EDodgeDirectionType__Front     = 0,
	None                           = 1,
	EDodgeDirectionType__Back      = 2,
	neByteProperty‘IntProperty  = 3,
	EDodgeDirectionType__Left      = 4,
	ByteProperty‘IntProperty    = 5,
	EDodgeDirectionType__Right     = 6,
	ByteProperty                   = 7,
	EDodgeDirectionType__EDodgeDirectionType_MAX = 8,
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


// Enum ConZ.EClothesType
enum class EClothesType : uint8_t
{
	EClothesType__None             = 0,
	None                           = 1,
	EClothesType__Back             = 2,
	neByteProperty‘IntProperty  = 3,
	EClothesType__HeadUpper        = 4,
	ByteProperty‘IntProperty    = 5,
	EClothesType__HeadUpperSkeletal = 6,
	ByteProperty                   = 7,
	EClothesType__HeadLower        = 8,
	teProperty‘IntProperty        = 9,
	EClothesType__Head             = 10,
	Property‘IntProperty          = 11,
	EClothesType__Eyes             = 12,
	operty‘IntProperty            = 13,
	EClothesType__Neck             = 14,
	erty‘IntProperty              = 15,
	EClothesType__Body_Armor       = 16,
	ty‘IntProperty                = 17,
	EClothesType__Body_LongSleeves = 18,
	[Error]                        = 19
};


// Enum ConZ.EBodySlot
enum class EBodySlot : uint8_t
{
	EBodySlot__Head                = 0,
	None                           = 1,
	EBodySlot__Chest               = 2,
	neByteProperty‘IntProperty  = 3,
	EBodySlot__Legs                = 4,
	ByteProperty‘IntProperty    = 5,
	EBodySlot__Feet                = 6,
	ByteProperty                   = 7,
	EBodySlot__Count               = 8,
	teProperty‘IntProperty        = 9,
	EBodySlot__EBodySlot_MAX       = 10,
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


// Enum ConZ.EClothesPart
enum class EClothesPart : uint8_t
{
	EClothesPart__None             = 0,
	None                           = 1,
	EClothesPart__BodyUpper        = 2,
	neByteProperty‘IntProperty  = 3,
	EClothesPart__BodyLower        = 4,
	ByteProperty‘IntProperty    = 5,
	EClothesPart__Head             = 6,
	ByteProperty                   = 7,
	EClothesPart__Eyes             = 8,
	teProperty‘IntProperty        = 9,
	EClothesPart__Neck             = 10,
	Property‘IntProperty          = 11
};


// Enum ConZ.EDiagnosedResult
enum class EDiagnosedResult : uint8_t
{
	EDiagnosedResult__None         = 0,
	None                           = 1,
	EDiagnosedResult__DeathDetected = 2,
	neByteProperty‘IntProperty  = 3,
	EDiagnosedResult__UnconsciousnessDetected = 4,
	ByteProperty‘IntProperty    = 5,
	EDiagnosedResult__NotBreathingDetected = 6,
	ByteProperty                   = 7,
	EDiagnosedResult__IncreasedBodyTempDetected = 8,
	teProperty‘IntProperty        = 9,
	EDiagnosedResult__DiarrheaDetected = 10,
	Property‘IntProperty          = 11,
	EDiagnosedResult__VomitingDetected = 12,
	operty‘IntProperty            = 13,
	EDiagnosedResult__PhysicalInjuryDetected = 14,
	erty‘IntProperty              = 15,
	EDiagnosedResult__BrokenLimbsInjuryDetected = 16,
	ty‘IntProperty                = 17,
	EDiagnosedResult__ChokingSicknessDetected = 18,
	[Error]                        = 19,
	EDiagnosedResult__OverdoseSicknessDetected = 20,
	IntProperty                    = 21,
	EDiagnosedResult__OvereatingSicknessDetected = 22,
	tProperty                      = 23,
	EDiagnosedResult__DehydrationSicknessDetected = 24,
	roperty                        = 25,
	EDiagnosedResult__StarvationSicknessDetected = 26,
	perty                          = 27,
	EDiagnosedResult__CarbonMonoxidePoisoningDetected = 28,
	rty                            = 29,
	EDiagnosedResult__DysenteryDiseaseDetected = 30,
	y                              = 31,
	EDiagnosedResult__HypothermiaDiseaseDetected = 32,
	
                              = 33,
	EDiagnosedResult__HyperthermiaDiseaseDetected = 34,
	BoolProperty                   = 35,
	EDiagnosedResult__HookwormsDiseaseDetected = 36,
	olPropertybFloatProperty      = 37,
	EDiagnosedResult__HepatitisADiseaseDetected = 38,
	PropertybFloatProperty        = 39,
	EDiagnosedResult__HeatstrokeDiseaseDetected = 40,
	opertybFloatProperty          = 41,
	EDiagnosedResult__HeartAttackDetected = 42,
	ertybFloatProperty            = 43,
	EDiagnosedResult__LeptospirosisDiseaseDetected = 44,
	tybFloatProperty              = 45,
	EDiagnosedResult__MalariaDiseaseDetected = 46,
	bFloatProperty                = 47,
	EDiagnosedResult__MeningitisDiseaseDetected = 48,
	FloatProperty                  = 49,
	EDiagnosedResult__RadiationSicknessDetected = 50,
	oatProperty                    = 51,
	EDiagnosedResult__SalmonellaDiseaseDetected = 52,
	tProperty01                    = 53,
	EDiagnosedResult__SunburnSicknessDetected = 54,
	roperty01                      = 55,
	EDiagnosedResult__ToothacheSicknessDetected = 56,
	perty01                        = 57,
	EDiagnosedResult__TrenchFootDiseaseDetected = 58,
	rty01                          = 59,
	EDiagnosedResult__CystitisDiseaseDetected = 60,
	y01                            = 61,
	EDiagnosedResult__CalciumDeficiencyDetected = 62,
	[Error]01                      = 63,
	EDiagnosedResult__CopperDeficiencyDetected = 64,
	ObjectProperty                 = 65,
	EDiagnosedResult__EnergyDeficiencyDetected = 66,
	jectPropertyNameProperty     = 67,
	EDiagnosedResult__FatDeficiencyDetected = 68,
	ctPropertyNameProperty       = 69,
	EDiagnosedResult__FiberDeficiencyDetected = 70,
	PropertyNameProperty         = 71,
	EDiagnosedResult__IronDeficiencyDetected = 72,
	opertyNameProperty           = 73,
	EDiagnosedResult__MagnesiumDeficiencyDetected = 74,
	ertyNameProperty             = 75,
	EDiagnosedResult__ManganeseDeficiencyDetected = 76,
	tyNameProperty               = 77,
	EDiagnosedResult__PhosphorusDeficiencyDetected = 78,
	NameProperty                 = 79,
	EDiagnosedResult__PotassiumDeficiencyDetected = 80,
	NameProperty                   = 81,
	EDiagnosedResult__ProteinDeficiencyDetected = 82,
	meProperty                     = 83,
	EDiagnosedResult__SeleniumDeficiencyDetected = 84
};


// Enum ConZ.EBleedingType
enum class EBleedingType : uint8_t
{
	EBleedingType__None            = 0,
	None                           = 1,
	EBleedingType__Scratch         = 2,
	neByteProperty‘IntProperty  = 3,
	EBleedingType__Small           = 4,
	ByteProperty‘IntProperty    = 5,
	EBleedingType__Large           = 6,
	ByteProperty                   = 7,
	EBleedingType__EBleedingType_MAX = 8,
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


// Enum ConZ.EPrisonerActionDifficulty
enum class EPrisonerActionDifficulty : uint8_t
{
	EPrisonerActionDifficulty__None = 0,
	None                           = 1,
	EPrisonerActionDifficulty__Easy = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerActionDifficulty__Demanding = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerActionDifficulty__VeryDemanding = 6,
	ByteProperty                   = 7,
	EPrisonerActionDifficulty__EPrisonerActionDifficulty_MAX = 8,
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


// Enum ConZ.EPrisonerECGRhythm
enum class EPrisonerECGRhythm : uint8_t
{
	EPrisonerECGRhythm__Normal     = 0,
	None                           = 1,
	EPrisonerECGRhythm__A          = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerECGRhythm__G          = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerECGRhythm__H          = 6,
	ByteProperty                   = 7,
	EPrisonerECGRhythm__I          = 8,
	teProperty‘IntProperty        = 9,
	EPrisonerECGRhythm__EPrisonerECGRhythm_MAX = 10,
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


// Enum ConZ.EMineral
enum class EMineral : uint8_t
{
	EMineral__Calcium              = 0,
	None                           = 1,
	EMineral__Iron                 = 2,
	neByteProperty‘IntProperty  = 3,
	EMineral__Magnesium            = 4,
	ByteProperty‘IntProperty    = 5,
	EMineral__Phosphorus           = 6,
	ByteProperty                   = 7,
	EMineral__Potassium            = 8,
	teProperty‘IntProperty        = 9,
	EMineral__Zinc                 = 10,
	Property‘IntProperty          = 11,
	EMineral__Copper               = 12,
	operty‘IntProperty            = 13,
	EMineral__Manganese            = 14,
	erty‘IntProperty              = 15,
	EMineral__Selenium             = 16,
	ty‘IntProperty                = 17,
	EMineral__Count                = 18,
	[Error]                        = 19,
	EMineral__EMineral_MAX         = 20,
	IntProperty                    = 21,
	ect                            = 22,
	Int8Property                   = 23,
	[Error]01                      = 24,
	t16Property                    = 25,
	MapProperty                    = 26,
	astDelegateProperty            = 27,
	None01                         = 28,
	rty                            = 29,
	TextProperty                   = 30,
	perty                          = 31
};


// Enum ConZ.EVitamin
enum class EVitamin : uint8_t
{
	EVitamin__A                    = 0,
	None                           = 1,
	EVitamin__B1                   = 2,
	neByteProperty‘IntProperty  = 3,
	EVitamin__B2                   = 4,
	ByteProperty‘IntProperty    = 5,
	EVitamin__B3                   = 6,
	ByteProperty                   = 7,
	EVitamin__B4                   = 8,
	teProperty‘IntProperty        = 9,
	EVitamin__B5                   = 10,
	Property‘IntProperty          = 11,
	EVitamin__B6                   = 12,
	operty‘IntProperty            = 13,
	EVitamin__B9                   = 14,
	erty‘IntProperty              = 15,
	EVitamin__B12                  = 16,
	ty‘IntProperty                = 17,
	EVitamin__C                    = 18,
	[Error]                        = 19,
	EVitamin__D                    = 20,
	IntProperty                    = 21,
	EVitamin__E                    = 22,
	tProperty                      = 23,
	EVitamin__K                    = 24,
	roperty                        = 25,
	EVitamin__Count                = 26,
	perty                          = 27,
	EVitamin__EVitamin_MAX         = 28,
	rty                            = 29,
	GetAge                         = 30,
	None01                         = 31,
	neByteProperty‘IntProperty01 = 32,
	GetAlcohol                     = 33,
	None02                         = 34,
	None03                         = 35
};


// Enum ConZ.EPrisonerTempCategory
enum class EPrisonerTempCategory : uint8_t
{
	EPrisonerTempCategory__Idle    = 0,
	None                           = 1,
	EPrisonerTempCategory__Low     = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerTempCategory__Medium  = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerTempCategory__High    = 6,
	ByteProperty                   = 7,
	EPrisonerTempCategory__EPrisonerTempCategory_MAX = 8,
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


// Enum ConZ.ETestMinMax
enum class ETestMinMax : uint8_t
{
	ETestMinMax__Normal            = 0,
	None                           = 1,
	ETestMinMax__Min               = 2
};


// Enum ConZ.EOptionalState
enum class EOptionalState : uint8_t
{
	EOptionalState__None           = 0,
	None                           = 1,
	EOptionalState__Add            = 2,
	neByteProperty‘IntProperty  = 3,
	EOptionalState__Remove         = 4,
	ByteProperty‘IntProperty    = 5,
	EOptionalState__EOptionalState_MAX = 6,
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


// Enum ConZ.ERecipeAvailabilityState
enum class ERecipeAvailabilityState : uint8_t
{
	ERecipeAvailabilityState__None = 0,
	None                           = 1,
	ERecipeAvailabilityState__SkillLow = 2,
	neByteProperty‘IntProperty  = 3,
	ERecipeAvailabilityState__NoIngredients = 4,
	ByteProperty‘IntProperty    = 5,
	ERecipeAvailabilityState__SomeIngredients = 6,
	ByteProperty                   = 7,
	ERecipeAvailabilityState__AllIngredients = 8,
	teProperty‘IntProperty        = 9,
	ERecipeAvailabilityState__ERecipeAvailabilityState_MAX = 10,
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
	[Error]                        = 23
};


// Enum ConZ.EInventoryNodeWidgetType
enum class EInventoryNodeWidgetType : uint8_t
{
	EInventoryNodeWidgetType__None = 0,
	None                           = 1,
	EInventoryNodeWidgetType__Inventory = 2,
	neByteProperty‘IntProperty  = 3,
	EInventoryNodeWidgetType__InventoryContainer = 4,
	ByteProperty‘IntProperty    = 5,
	EInventoryNodeWidgetType__HandsAndHolsters = 6,
	ByteProperty                   = 7,
	EInventoryNodeWidgetType__QuickAccess = 8,
	teProperty‘IntProperty        = 9
};


// Enum ConZ.EWeaponFiringMode
enum class EWeaponFiringMode : uint8_t
{
	EWeaponFiringMode__Automatic   = 0,
	None                           = 1,
	EWeaponFiringMode__SingleShot  = 2,
	neByteProperty‘IntProperty  = 3,
	EWeaponFiringMode__EWeaponFiringMode_MAX = 4,
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


// Enum ConZ.EWeaponMalfunctionEvent
enum class EWeaponMalfunctionEvent : uint8_t
{
	EWeaponMalfunctionEvent__RoundAdded = 0,
	None                           = 1,
	EWeaponMalfunctionEvent__ChamberOpened = 2,
	neByteProperty‘IntProperty  = 3,
	EWeaponMalfunctionEvent__ChamberOpenedCasingEjected = 4,
	ByteProperty‘IntProperty    = 5,
	EWeaponMalfunctionEvent__ChamberOpenedRoundEjected = 6,
	ByteProperty                   = 7,
	EWeaponMalfunctionEvent__ChamberClosed = 8,
	teProperty‘IntProperty        = 9,
	EWeaponMalfunctionEvent__ChamberClosedRoundLoaded = 10,
	Property‘IntProperty          = 11,
	EWeaponMalfunctionEvent__AttachmentAdded = 12,
	operty‘IntProperty            = 13,
	EWeaponMalfunctionEvent__EWeaponMalfunctionEvent_MAX = 14,
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


// Enum ConZ.EWeaponActionNotifyType
enum class EWeaponActionNotifyType : uint8_t
{
	EWeaponActionNotifyType__None  = 0,
	None                           = 1,
	EWeaponActionNotifyType__ChamberOpened = 2,
	neByteProperty‘IntProperty  = 3,
	EWeaponActionNotifyType__ChamberClosed = 4,
	ByteProperty‘IntProperty    = 5,
	EWeaponActionNotifyType__ChamberOpenedClosed = 6,
	ByteProperty                   = 7,
	EWeaponActionNotifyType__BowInsertArrow = 8,
	teProperty‘IntProperty        = 9,
	EWeaponActionNotifyType__BowRemoveArrow = 10,
	Property‘IntProperty          = 11,
	EWeaponActionNotifyType__CompoundBowTuneDrawWeight = 12,
	operty‘IntProperty            = 13,
	EWeaponActionNotifyType__StaminaDrained = 14,
	erty‘IntProperty              = 15,
	EWeaponActionNotifyType__DropMagazine = 16,
	ty‘IntProperty                = 17,
	EWeaponActionNotifyType__ClearMalfunction = 18,
	[Error]                        = 19,
	EWeaponActionNotifyType__EWeaponActionNotifyType_MAX = 20,
	IntProperty                    = 21,
	_CylinderÿBoxSphereBounds    = 22,
	ect                            = 23,
	P                              = 24,
	CoreUObject                    = 25,
	_64PropertyàUInt32PropertyñUInt16PropertyBInt64Property = 26,
	ty_CylinderÿBoxSphereBounds  = 27,
	t16Property                    = 28,
	tProperty                      = 29,
	None01                         = 30,
	[Error]01                      = 31
};


// Enum ConZ.EWeaponBehaviourMode
enum class EWeaponBehaviourMode : uint8_t
{
	EWeaponBehaviourMode__Default  = 0,
	None                           = 1,
	EWeaponBehaviourMode__Inspect  = 2,
	neByteProperty‘IntProperty  = 3,
	EWeaponBehaviourMode__EWeaponBehaviourMode_MAX = 4,
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


// Enum ConZ.EWeaponFiringStateType
enum class EWeaponFiringStateType : uint8_t
{
	EWeaponFiringStateType__Automatic = 0,
	None                           = 1,
	EWeaponFiringStateType__SemiAutomatic = 2,
	neByteProperty‘IntProperty  = 3,
	EWeaponFiringStateType__Manual = 4,
	ByteProperty‘IntProperty    = 5,
	EWeaponFiringStateType__EWeaponFiringStateType_MAX = 6,
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


// Enum ConZ.EAnimalStance
enum class EAnimalStance : uint8_t
{
	EAnimalStance__Breathing       = 0,
	None                           = 1,
	EAnimalStance__Idle            = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimalStance__Agressive       = 4,
	ByteProperty‘IntProperty    = 5,
	EAnimalStance__Alerted         = 6,
	ByteProperty                   = 7,
	EAnimalStance__EAnimalStance_MAX = 8,
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


// Enum ConZ.EAnimalActivityCycle
enum class EAnimalActivityCycle : uint8_t
{
	EAnimalActivityCycle__Diurnal  = 0,
	None                           = 1,
	EAnimalActivityCycle__Nocturnal = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimalActivityCycle__Both     = 4,
	ByteProperty‘IntProperty    = 5,
	EAnimalActivityCycle__EAnimalActivityCycle_MAX = 6,
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


// Enum ConZ.EAnimal2Sound
enum class EAnimal2Sound : uint8_t
{
	EAnimal2Sound__None            = 0,
	None                           = 1,
	EAnimal2Sound__Idle            = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimal2Sound__Angry           = 4,
	ByteProperty‘IntProperty    = 5,
	EAnimal2Sound__Attack          = 6,
	ByteProperty                   = 7,
	EAnimal2Sound__Kill            = 8,
	teProperty‘IntProperty        = 9,
	EAnimal2Sound__Scared          = 10,
	Property‘IntProperty          = 11,
	EAnimal2Sound__Alerted         = 12,
	operty‘IntProperty            = 13,
	EAnimal2Sound__EAnimal2Sound_MAX = 14,
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


// Enum ConZ.EAnimalSound
enum class EAnimalSound : uint8_t
{
	EAnimalSound__None             = 0,
	None                           = 1,
	EAnimalSound__Idle             = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimalSound__Angry            = 4,
	ByteProperty‘IntProperty    = 5,
	EAnimalSound__Attack           = 6,
	ByteProperty                   = 7,
	EAnimalSound__Kill             = 8,
	teProperty‘IntProperty        = 9,
	EAnimalSound__EAnimalSound_MAX = 10,
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


// Enum ConZ.EAnimalLearnLevel
enum class EAnimalLearnLevel : uint8_t
{
	EAnimalLearnLevel__Basic       = 0,
	None                           = 1,
	EAnimalLearnLevel__Medium      = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimalLearnLevel__Advanced    = 4,
	ByteProperty‘IntProperty    = 5,
	EAnimalLearnLevel__EAnimalLearnLevel_MAX = 6,
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


// Enum ConZ.EAnimalCommand
enum class EAnimalCommand : uint8_t
{
	EAnimalCommand__None           = 0,
	None                           = 1,
	EAnimalCommand__Follow         = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimalCommand__Unfollow       = 4,
	ByteProperty‘IntProperty    = 5,
	EAnimalCommand__StayStill      = 6,
	ByteProperty                   = 7,
	EAnimalCommand__MoveFreely     = 8,
	teProperty‘IntProperty        = 9,
	EAnimalCommand__FetchItem      = 10,
	Property‘IntProperty          = 11,
	EAnimalCommand__Attack         = 12,
	operty‘IntProperty            = 13,
	EAnimalCommand__Defend         = 14,
	erty‘IntProperty              = 15,
	EAnimalCommand__Guard          = 16,
	ty‘IntProperty                = 17,
	EAnimalCommand__Seek           = 18,
	[Error]                        = 19,
	EAnimalCommand__EAnimalCommand_MAX = 20,
	IntProperty                    = 21,
	UInt32Property                 = 22,
	t16Property                    = 23,
	None01                         = 24,
	PropertyÜUInt64PropertyàUInt32PropertyñUInt16PropertyBInt64Property = 25,
	ByteProperty‘IntProperty01  = 26,
	None02                         = 27,
	fArrayProperty                = 28,
	egateProperty                  = 29,
	erty                           = 30,
	rty                            = 31
};


// Enum ConZ.EAnimalHandlingStage
enum class EAnimalHandlingStage : uint8_t
{
	EAnimalHandlingStage__NotPacified = 0,
	None                           = 1,
	EAnimalHandlingStage__Pacified = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimalHandlingStage__Tamed    = 4,
	ByteProperty‘IntProperty    = 5,
	EAnimalHandlingStage__LearnedBasic = 6,
	ByteProperty                   = 7,
	EAnimalHandlingStage__LearnedMedium = 8,
	teProperty‘IntProperty        = 9,
	EAnimalHandlingStage__LearnedAdvanced = 10,
	Property‘IntProperty          = 11,
	EAnimalHandlingStage__EAnimalHandlingStage_MAX = 12,
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


// Enum ConZ.EAnimalHandlingLevel
enum class EAnimalHandlingLevel : uint8_t
{
	EAnimalHandlingLevel__SmallDomestic = 0,
	None                           = 1,
	EAnimalHandlingLevel__BigDomestic = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimalHandlingLevel__Wild     = 4,
	ByteProperty‘IntProperty    = 5,
	EAnimalHandlingLevel__Unhandleable = 6,
	ByteProperty                   = 7,
	EAnimalHandlingLevel__EAnimalHandlingLevel_MAX = 8,
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


// Enum ConZ.EAnimalPace
enum class EAnimalPace : uint8_t
{
	EAnimalPace__Idle              = 0,
	None                           = 1,
	EAnimalPace__Walking           = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimalPace__Running           = 4,
	ByteProperty‘IntProperty    = 5,
	EAnimalPace__EAnimalPace_MAX   = 6,
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


// Enum ConZ.EBlueprintItemActionType
enum class EBlueprintItemActionType : uint8_t
{
	EBlueprintItemActionType__BlueprintPlaced = 0,
	None                           = 1,
	EBlueprintItemActionType__BlueprintFilled = 2,
	neByteProperty‘IntProperty  = 3,
	EBlueprintItemActionType__BlueprintCompleted = 4,
	ByteProperty‘IntProperty    = 5,
	EBlueprintItemActionType__EBlueprintItemActionType_MAX = 6,
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


// Enum ConZ.ESplineAxis
enum class ESplineAxis : uint8_t
{
	ESplineAxis__X                 = 0,
	None                           = 1,
	ESplineAxis__Y                 = 2,
	neByteProperty‘IntProperty  = 3,
	ESplineAxis__Z                 = 4,
	ByteProperty‘IntProperty    = 5,
	ESplineAxis__ESplineAxis_MAX   = 6,
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


// Enum ConZ.EWireType
enum class EWireType : uint8_t
{
	EWireType__Green               = 0,
	None                           = 1,
	EWireType__Yellow              = 2,
	neByteProperty‘IntProperty  = 3,
	EWireType__Red                 = 4,
	ByteProperty‘IntProperty    = 5,
	EWireType__Count               = 6,
	ByteProperty                   = 7,
	EWireType__EWireType_MAX       = 8,
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


// Enum ConZ.EBoundBodyPart
enum class EBoundBodyPart : uint8_t
{
	EBoundBodyPart__Hands          = 0,
	None                           = 1,
	EBoundBodyPart__Feet           = 2,
	neByteProperty‘IntProperty  = 3,
	EBoundBodyPart__EBoundBodyPart_MAX = 4,
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


// Enum ConZ.EBrokenLimbsTreatment
enum class EBrokenLimbsTreatment : uint8_t
{
	EBrokenLimbsTreatment__Immobilize = 0,
	None                           = 1,
	EBrokenLimbsTreatment__MendBones = 2,
	neByteProperty‘IntProperty  = 3,
	EBrokenLimbsTreatment__EBrokenLimbsTreatment_MAX = 4,
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


// Enum ConZ.EBruiseZone
enum class EBruiseZone : uint8_t
{
	EBruiseZone__Left              = 0,
	None                           = 1,
	EBruiseZone__Middle            = 2,
	neByteProperty‘IntProperty  = 3,
	EBruiseZone__Right             = 4,
	ByteProperty‘IntProperty    = 5,
	EBruiseZone__Count             = 6,
	ByteProperty                   = 7,
	EBruiseZone__EBruiseZone_MAX   = 8,
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


// Enum ConZ.EBruiseLayer
enum class EBruiseLayer : uint8_t
{
	EBruiseLayer__Light            = 0,
	None                           = 1,
	EBruiseLayer__Medium           = 2,
	neByteProperty‘IntProperty  = 3,
	EBruiseLayer__Hard             = 4,
	ByteProperty‘IntProperty    = 5,
	EBruiseLayer__Count            = 6,
	ByteProperty                   = 7,
	EBruiseLayer__EBruiseLayer_MAX = 8,
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


// Enum ConZ.ECardinalDirection
enum class ECardinalDirection : uint8_t
{
	ECardinalDirection__None       = 0,
	None                           = 1,
	ECardinalDirection__North      = 2,
	neByteProperty‘IntProperty  = 3,
	ECardinalDirection__East       = 4,
	ByteProperty‘IntProperty    = 5,
	ECardinalDirection__South      = 6,
	ByteProperty                   = 7,
	ECardinalDirection__West       = 8,
	teProperty‘IntProperty        = 9,
	ECardinalDirection__ECardinalDirection_MAX = 10,
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


// Enum ConZ.ECharacterActionNotifyType
enum class ECharacterActionNotifyType : uint8_t
{
	ECharacterActionNotifyType__None = 0,
	None                           = 1,
	ECharacterActionNotifyType__AddMagazine = 2,
	neByteProperty‘IntProperty  = 3,
	ECharacterActionNotifyType__RemoveMagazine = 4,
	ByteProperty‘IntProperty    = 5,
	ECharacterActionNotifyType__InsertCartridge = 6,
	ByteProperty                   = 7,
	ECharacterActionNotifyType__SwapWeapons = 8,
	teProperty‘IntProperty        = 9,
	ECharacterActionNotifyType__Chop = 10,
	Property‘IntProperty          = 11,
	ECharacterActionNotifyType__CommitSuicide = 12,
	operty‘IntProperty            = 13,
	ECharacterActionNotifyType__IgniteFlare = 14,
	erty‘IntProperty              = 15,
	ECharacterActionNotifyType__BuryBreach = 16,
	ty‘IntProperty                = 17,
	ECharacterActionNotifyType__BuryDump = 18,
	[Error]                        = 19,
	ECharacterActionNotifyType__ECharacterActionNotifyType_MAX = 20,
	IntProperty                    = 21,
	_                              = 22,
	ertyNameProperty             = 23,
	EnumProperty                   = 24,
	roperty                        = 25,
	umProperty_CylinderÿBoxSphereBounds = 26,
	eProperty                      = 27,
	astDelegateProperty            = 28,
	PropertyÜUInt64PropertyàUInt32PropertyñUInt16PropertyBInt64Property = 29,
	t8PropertyŒMapProperty        = 30,
	Int8Property                   = 31
};


// Enum ConZ.ECharacterActionState
enum class ECharacterActionState : uint8_t
{
	ECharacterActionState__None    = 0,
	None                           = 1,
	ECharacterActionState__WaitingBeginOnServer = 2,
	neByteProperty‘IntProperty  = 3,
	ECharacterActionState__Executing = 4,
	ByteProperty‘IntProperty    = 5,
	ECharacterActionState__Ended   = 6,
	ByteProperty                   = 7,
	ECharacterActionState__ECharacterActionState_MAX = 8,
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


// Enum ConZ.ECharacterActionFlags
enum class ECharacterActionFlags : uint8_t
{
	ECharacterActionFlags__None    = 0,
	None                           = 1,
	ECharacterActionFlags__ClientWaitBeginOnServer = 2,
	neByteProperty‘IntProperty  = 3,
	ECharacterActionFlags__AllWaitEndOnOwningClient = 4,
	ByteProperty‘IntProperty    = 5,
	ECharacterActionFlags__CanBeAborted = 6,
	teProperty‘IntProperty        = 7,
	ECharacterActionFlags__ECharacterActionFlags_MAX = 8,
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


// Enum ConZ.ECharacterActionConstraint
enum class ECharacterActionConstraint : uint8_t
{
	ECharacterActionConstraint__None = 0,
	None                           = 1,
	ECharacterActionConstraint__Move = 2,
	neByteProperty‘IntProperty  = 3,
	ECharacterActionConstraint__Turn = 4,
	ByteProperty‘IntProperty    = 5,
	ECharacterActionConstraint__Stance = 6,
	ty‘IntProperty                = 7,
	ECharacterActionConstraint__ProneInOut = 8,
	
                              = 9,
	ECharacterActionConstraint__Lean = 10,
	ObjectProperty                 = 11,
	ECharacterActionConstraint__ECharacterActionConstraint_MAX = 12,
	jectPropertyNameProperty     = 13,
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


// Enum ConZ.ECharacterLegsImpactSoundCategory
enum class ECharacterLegsImpactSoundCategory : uint8_t
{
	ECharacterLegsImpactSoundCategory__Any = 0,
	None                           = 1,
	ECharacterLegsImpactSoundCategory__Bare = 2,
	neByteProperty‘IntProperty  = 3,
	ECharacterLegsImpactSoundCategory__Blocked = 4,
	ByteProperty‘IntProperty    = 5,
	ECharacterLegsImpactSoundCategory__LightlyClothed = 6,
	ByteProperty                   = 7,
	ECharacterLegsImpactSoundCategory__ECharacterLegsImpactSoundCategory_MAX = 8,
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


// Enum ConZ.ECharacterArmsImpactSoundCategory
enum class ECharacterArmsImpactSoundCategory : uint8_t
{
	ECharacterArmsImpactSoundCategory__Any = 0,
	None                           = 1,
	ECharacterArmsImpactSoundCategory__Bare = 2,
	neByteProperty‘IntProperty  = 3,
	ECharacterArmsImpactSoundCategory__Blocked = 4,
	ByteProperty‘IntProperty    = 5,
	ECharacterArmsImpactSoundCategory__LightlyClothed = 6,
	ByteProperty                   = 7,
	ECharacterArmsImpactSoundCategory__ECharacterArmsImpactSoundCategory_MAX = 8,
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


// Enum ConZ.ECharacterTorsoImpactSoundCategory
enum class ECharacterTorsoImpactSoundCategory : uint8_t
{
	ECharacterTorsoImpactSoundCategory__Any = 0,
	None                           = 1,
	ECharacterTorsoImpactSoundCategory__Bare = 2,
	neByteProperty‘IntProperty  = 3,
	ECharacterTorsoImpactSoundCategory__Blocked = 4,
	ByteProperty‘IntProperty    = 5,
	ECharacterTorsoImpactSoundCategory__LightlyClothed = 6,
	ByteProperty                   = 7,
	ECharacterTorsoImpactSoundCategory__ECharacterTorsoImpactSoundCategory_MAX = 8,
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


// Enum ConZ.ECharacterHeadImpactSoundCategory
enum class ECharacterHeadImpactSoundCategory : uint8_t
{
	ECharacterHeadImpactSoundCategory__Any = 0,
	None                           = 1,
	ECharacterHeadImpactSoundCategory__Bare = 2,
	neByteProperty‘IntProperty  = 3,
	ECharacterHeadImpactSoundCategory__Blocked = 4,
	ByteProperty‘IntProperty    = 5,
	ECharacterHeadImpactSoundCategory__Helmet = 6,
	ByteProperty                   = 7,
	ECharacterHeadImpactSoundCategory__ECharacterHeadImpactSoundCategory_MAX = 8,
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


// Enum ConZ.ECharacterPainSoundSeverity
enum class ECharacterPainSoundSeverity : uint8_t
{
	ECharacterPainSoundSeverity__Light = 0,
	None                           = 1,
	ECharacterPainSoundSeverity__Medium = 2,
	neByteProperty‘IntProperty  = 3,
	ECharacterPainSoundSeverity__Heavy = 4,
	ByteProperty‘IntProperty    = 5,
	ECharacterPainSoundSeverity__Stun = 6,
	ByteProperty                   = 7,
	ECharacterPainSoundSeverity__Knockout = 8,
	teProperty‘IntProperty        = 9,
	ECharacterPainSoundSeverity__Death = 10,
	Property‘IntProperty          = 11,
	ECharacterPainSoundSeverity__ECharacterPainSoundSeverity_MAX = 12,
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


// Enum ConZ.ECharacterSpawnerRange
enum class ECharacterSpawnerRange : uint8_t
{
	ECharacterSpawnerRange__Long   = 0,
	None                           = 1,
	ECharacterSpawnerRange__Short  = 2,
	neByteProperty‘IntProperty  = 3,
	ECharacterSpawnerRange__ECharacterSpawnerRange_MAX = 4,
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


// Enum ConZ.ESpawnType
enum class ESpawnType : uint8_t
{
	ESpawnType__POI                = 0,
	None                           = 1,
	ESpawnType__Exterior           = 2,
	neByteProperty‘IntProperty  = 3,
	ESpawnType__Interior           = 4,
	ByteProperty‘IntProperty    = 5,
	ESpawnType__ESpawnType_MAX     = 6,
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


// Enum ConZ.ECharacterStatsOrderByField
enum class ECharacterStatsOrderByField : uint8_t
{
	ECharacterStatsOrderByField__FamePoints = 0,
	None                           = 1,
	ECharacterStatsOrderByField__EventScore = 2,
	neByteProperty‘IntProperty  = 3,
	ECharacterStatsOrderByField__EventKills = 4,
	ByteProperty‘IntProperty    = 5,
	ECharacterStatsOrderByField__EventDeaths = 6,
	ByteProperty                   = 7,
	ECharacterStatsOrderByField__ECharacterStatsOrderByField_MAX = 8,
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


// Enum ConZ.EInteractionTargetType
enum class EInteractionTargetType : uint8_t
{
	EInteractionTargetType__Self   = 0,
	None                           = 1,
	EInteractionTargetType__HoveredInteractable = 2,
	neByteProperty‘IntProperty  = 3,
	EInteractionTargetType__Specified = 4,
	ByteProperty‘IntProperty    = 5,
	EInteractionTargetType__EInteractionTargetType_MAX = 6,
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


// Enum ConZ.ECompassType
enum class ECompassType : uint8_t
{
	ECompassType__None             = 0,
	None                           = 1,
	ECompassType__NorthOnly        = 2,
	neByteProperty‘IntProperty  = 3,
	ECompassType__CardinalOnly     = 4,
	ByteProperty‘IntProperty    = 5,
	ECompassType__CardinalAndIntercardinal = 6,
	ByteProperty                   = 7,
	ECompassType__Everything       = 8,
	teProperty‘IntProperty        = 9,
	ECompassType__Count            = 10,
	Property‘IntProperty          = 11,
	ECompassType__ECompassType_MAX = 12,
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


// Enum ConZ.EAnimalMovementPace
enum class EAnimalMovementPace : uint8_t
{
	EAnimalMovementPace__Sneak     = 0,
	None                           = 1,
	EAnimalMovementPace__Walk      = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimalMovementPace__Trot      = 4,
	ByteProperty‘IntProperty    = 5,
	EAnimalMovementPace__Run       = 6,
	ByteProperty                   = 7,
	EAnimalMovementPace__EAnimalMovementPace_MAX = 8,
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


// Enum ConZ.EAnimalAgressivness
enum class EAnimalAgressivness : uint8_t
{
	EAnimalAgressivness__Timid     = 0,
	None                           = 1,
	EAnimalAgressivness__Moderate  = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimalAgressivness__Agressive = 4,
	ByteProperty‘IntProperty    = 5,
	EAnimalAgressivness__EAnimalAgressivness_MAX = 6,
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


// Enum ConZ.EAnimalMode
enum class EAnimalMode : uint8_t
{
	EAnimalMode__None              = 0,
	None                           = 1,
	EAnimalMode__Roam              = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimalMode__Alert             = 4,
	ByteProperty‘IntProperty    = 5,
	EAnimalMode__Observe           = 6,
	ByteProperty                   = 7,
	EAnimalMode__TrotAway          = 8,
	teProperty‘IntProperty        = 9,
	EAnimalMode__Aggro             = 10,
	Property‘IntProperty          = 11,
	EAnimalMode__Flee              = 12,
	operty‘IntProperty            = 13,
	EAnimalMode__EAnimalMode_MAX   = 14,
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


// Enum ConZ.EConZBaseErrorMessage
enum class EConZBaseErrorMessage : uint8_t
{
	EConZBaseErrorMessage__None    = 0,
	None                           = 1,
	EConZBaseErrorMessage__CantPlaceMask = 2,
	neByteProperty‘IntProperty  = 3,
	EConZBaseErrorMessage__CantPlaceDuplicateFlag = 4,
	ByteProperty‘IntProperty    = 5,
	EConZBaseErrorMessage__CantPlaceEnemyFlag = 6,
	ByteProperty                   = 7,
	EConZBaseErrorMessage__CantPlaceMustBeOnFoundation = 8,
	teProperty‘IntProperty        = 9,
	EConZBaseErrorMessage__CantPlaceOnOtherElements = 10,
	Property‘IntProperty          = 11,
	EConZBaseErrorMessage__CantPlaceNoBase = 12,
	operty‘IntProperty            = 13,
	EConZBaseErrorMessage__EConZBaseErrorMessage_MAX = 14,
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


// Enum ConZ.EConZBaseEventType
enum class EConZBaseEventType : uint8_t
{
	EConZBaseEventType__None       = 0,
	None                           = 1,
	EConZBaseEventType__ElementConstructed = 2,
	neByteProperty‘IntProperty  = 3,
	EConZBaseEventType__ElementRepaired = 4,
	ByteProperty‘IntProperty    = 5,
	EConZBaseEventType__EConZBaseEventType_MAX = 6,
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


// Enum ConZ.EConZPlacementHeightType
enum class EConZPlacementHeightType : uint8_t
{
	EConZPlacementHeightType__LowestPointHeight = 0,
	None                           = 1,
	EConZPlacementHeightType__HighestPointHeight = 2,
	neByteProperty‘IntProperty  = 3,
	EConZPlacementHeightType__AveragePointHeight = 4,
	ByteProperty‘IntProperty    = 5,
	EConZPlacementHeightType__EConZPlacementHeightType_MAX = 6,
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


// Enum ConZ.FConZBaseFlagType
enum class EFConZBaseFlagType : uint8_t
{
	FConZBaseFlagType__None        = 0,
	None                           = 1,
	FConZBaseFlagType__Friendly    = 2,
	neByteProperty‘IntProperty  = 3,
	FConZBaseFlagType__Enemy       = 4,
	ByteProperty‘IntProperty    = 5,
	FConZBaseFlagType__FConZBaseFlagType_MAX = 6,
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


// Enum ConZ.ESnappingPosition
enum class ESnappingPosition : uint8_t
{
	ESnappingPosition__None        = 0,
	None                           = 1,
	ESnappingPosition__Left        = 2,
	neByteProperty‘IntProperty  = 3,
	ESnappingPosition__Right       = 4,
	ByteProperty‘IntProperty    = 5,
	ESnappingPosition__Front       = 6,
	teProperty‘IntProperty        = 7,
	ESnappingPosition__Back        = 8,
	ty‘IntProperty                = 9
};


// Enum ConZ.EBaseElementType
enum class EBaseElementType : uint8_t
{
	EBaseElementType__None         = 0,
	neByteProperty‘IntProperty  = 1,
	EBaseElementType__WoodenPalisade = 2,
	ByteProperty‘IntProperty    = 3,
	EBaseElementType__SandBox      = 4,
	teProperty‘IntProperty        = 5,
	EBaseElementType__Door         = 6,
	ty‘IntProperty                = 7,
	EBaseElementType__Well         = 8,
	
                              = 9,
	EBaseElementType__Platform     = 10,
	ObjectProperty                 = 11,
	EBaseElementType__Watchtower   = 12,
	ArrayProperty                  = 13,
	EBaseElementType__WatchtowerTop = 14,
	ateProperty                    = 15,
	EBaseElementType__Foundation   = 16,
	hereÊ                          = 17,
	EBaseElementType__Flag         = 18,
	raphDeviceIDRootStatBMoveActor = 19,
	EBaseElementType__WallOrnament = 20,
	utBEditorKeyBindings          = 21,
	EBaseElementType__CeilingOrnament = 22,
	[Error]                        = 23,
	EBaseElementType__Cabin        = 24,
	ReservationResponse            = 25,
	EBaseElementType__Stairs       = 26,
	tAkAudioEvent                  = 27,
	EBaseElementType__EBaseElementType_MAX = 28,
	kAudioEvent                    = 29,
	Client_SetLoadedVariables      = 30,
	None                           = 31,
	operty‘IntProperty            = 32,
	Client_SetupForEvent           = 33,
	None01                         = 34,
	None02                         = 35
};


// Enum ConZ.ECharacterHostileState
enum class ECharacterHostileState : uint8_t
{
	ECharacterHostileState__None   = 0,
	None                           = 1,
	ECharacterHostileState__Idle   = 2,
	neByteProperty‘IntProperty  = 3,
	ECharacterHostileState__AlertedWithoutLineOfSight = 4,
	ByteProperty‘IntProperty    = 5,
	ECharacterHostileState__AlertedWithLineOfSight = 6,
	ByteProperty                   = 7,
	ECharacterHostileState__ECharacterHostileState_MAX = 8,
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


// Enum ConZ.EPlayPreparationsState
enum class EPlayPreparationsState : uint8_t
{
	EPlayPreparationsState__StreamingCheck = 0,
	None                           = 1,
	EPlayPreparationsState__AuthSend = 2,
	neByteProperty‘IntProperty  = 3,
	EPlayPreparationsState__AuthReceive = 4,
	ByteProperty‘IntProperty    = 5,
	EPlayPreparationsState__InitialSyncSend = 6,
	ByteProperty                   = 7,
	EPlayPreparationsState__InitialSyncReceive = 8,
	teProperty‘IntProperty        = 9,
	EPlayPreparationsState__Succeeded = 10,
	Property‘IntProperty          = 11,
	EPlayPreparationsState__Failed = 12,
	operty‘IntProperty            = 13,
	EPlayPreparationsState__EPlayPreparationsState_MAX = 14,
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


// Enum ConZ.ECraftingItemCategory
enum class ECraftingItemCategory : uint8_t
{
	ECraftingItemCategory__None    = 0,
	None                           = 1,
	ECraftingItemCategory__ToolsAndWeapons = 2,
	neByteProperty‘IntProperty  = 3,
	ECraftingItemCategory__Items   = 4,
	ByteProperty‘IntProperty    = 5,
	ECraftingItemCategory__Food    = 6,
	ByteProperty                   = 7,
	ECraftingItemCategory__BaseBuilding = 8,
	teProperty‘IntProperty        = 9,
	ECraftingItemCategory__ECraftingItemCategory_MAX = 10,
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


// Enum ConZ.ECraftingType
enum class ECraftingType : uint8_t
{
	ECraftingType__Use             = 0,
	None                           = 1,
	ECraftingType__Assemble        = 2,
	neByteProperty‘IntProperty  = 3,
	ECraftingType__Destroy         = 4,
	ByteProperty‘IntProperty    = 5,
	ECraftingType__Attach          = 6,
	ByteProperty                   = 7,
	ECraftingType__ECraftingType_MAX = 8,
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


// Enum ConZ.EDbConnectionOpenMode
enum class EDbConnectionOpenMode : uint8_t
{
	EDbConnectionOpenMode__None    = 0,
	None                           = 1,
	EDbConnectionOpenMode__ReadOnly = 2,
	neByteProperty‘IntProperty  = 3,
	EDbConnectionOpenMode__ReadWrite = 4,
	ByteProperty‘IntProperty    = 5,
	EDbConnectionOpenMode__EDbConnectionOpenMode_MAX = 6,
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


// Enum ConZ.EDialogAnimationState
enum class EDialogAnimationState : uint8_t
{
	EDialogAnimationState__None    = 0,
	None                           = 1,
	EDialogAnimationState__Show    = 2,
	neByteProperty‘IntProperty  = 3,
	EDialogAnimationState__Hide    = 4,
	ByteProperty‘IntProperty    = 5,
	EDialogAnimationState__EDialogAnimationState_MAX = 6,
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


// Enum ConZ.EDoorType
enum class EDoorType : uint8_t
{
	EDoorType__Regular             = 0,
	None                           = 1,
	EDoorType__BaseDoor            = 2,
	neByteProperty‘IntProperty  = 3,
	EDoorType__EDoorType_MAX       = 4,
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


// Enum ConZ.EDroneSound
enum class EDroneSound : uint8_t
{
	EDroneSound__None              = 0,
	None                           = 1,
	EDroneSound__Idle              = 2,
	neByteProperty‘IntProperty  = 3,
	EDroneSound__Attack            = 4,
	ByteProperty‘IntProperty    = 5,
	EDroneSound__Kill              = 6,
	ByteProperty                   = 7,
	EDroneSound__EDroneSound_MAX   = 8,
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


// Enum ConZ.EDroneState
enum class EDroneState : uint8_t
{
	EDroneState__Initial           = 0,
	None                           = 1,
	EDroneState__Patrolling        = 2,
	neByteProperty‘IntProperty  = 3,
	EDroneState__Following         = 4,
	ByteProperty‘IntProperty    = 5,
	EDroneState__Fleeing           = 6,
	ByteProperty                   = 7,
	EDroneState__EDroneState_MAX   = 8,
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


// Enum ConZ.EDropZoneGameEventPhase
enum class EDropZoneGameEventPhase : uint8_t
{
	EDropZoneGameEventPhase__Warmup = 0,
	None                           = 1,
	EDropZoneGameEventPhase__Search = 2,
	neByteProperty‘IntProperty  = 3,
	EDropZoneGameEventPhase__Drop  = 4,
	ByteProperty‘IntProperty    = 5,
	EDropZoneGameEventPhase__Capture = 6,
	ByteProperty                   = 7,
	EDropZoneGameEventPhase__EDropZoneGameEventPhase_MAX = 8,
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


// Enum ConZ.EFlareIgniteState
enum class EFlareIgniteState : uint8_t
{
	EFlareIgniteState__None        = 0,
	None                           = 1,
	EFlareIgniteState__Start       = 2,
	neByteProperty‘IntProperty  = 3,
	EFlareIgniteState__Burning     = 4,
	ByteProperty‘IntProperty    = 5,
	EFlareIgniteState__Extinguish  = 6,
	ByteProperty                   = 7,
	EFlareIgniteState__Finished    = 8,
	teProperty‘IntProperty        = 9,
	EFlareIgniteState__EFlareIgniteState_MAX = 10,
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


// Enum ConZ.EDigestionGroup
enum class EDigestionGroup : uint8_t
{
	EDigestionGroup__Water         = 0,
	None                           = 1,
	EDigestionGroup__Juices        = 2,
	neByteProperty‘IntProperty  = 3,
	EDigestionGroup__SemiLiquid    = 4,
	ByteProperty‘IntProperty    = 5,
	EDigestionGroup__Fruits1       = 6,
	ByteProperty                   = 7,
	EDigestionGroup__Fruits3       = 8,
	teProperty‘IntProperty        = 9,
	EDigestionGroup__Fruits4       = 10,
	Property‘IntProperty          = 11,
	EDigestionGroup__Fruits5       = 12,
	operty‘IntProperty            = 13,
	EDigestionGroup__Vegetables1   = 14,
	erty‘IntProperty              = 15,
	EDigestionGroup__Vegetables2   = 16,
	ty‘IntProperty                = 17,
	EDigestionGroup__Vegetables3   = 18,
	[Error]                        = 19,
	EDigestionGroup__Vegetables4   = 20,
	IntProperty                    = 21,
	EDigestionGroup__SemiConcentratedCarbs = 22,
	tProperty                      = 23,
	EDigestionGroup__ConcentratedCarbs1 = 24,
	roperty                        = 25,
	EDigestionGroup__ConcentratedCarbs2 = 26,
	perty                          = 27,
	EDigestionGroup__ConcentratedCarbs3 = 28,
	rty                            = 29,
	EDigestionGroup__SeedsNuts1    = 30,
	y                              = 31
};


// Enum ConZ.EGameEventPlayerRoundResult
enum class EGameEventPlayerRoundResult : uint8_t
{
	EGameEventPlayerRoundResult__None = 0,
	None                           = 1,
	EGameEventPlayerRoundResult__Win = 2,
	neByteProperty‘IntProperty  = 3,
	EGameEventPlayerRoundResult__Lose = 4,
	ByteProperty‘IntProperty    = 5,
	EGameEventPlayerRoundResult__Draw = 6,
	ByteProperty                   = 7,
	EGameEventPlayerRoundResult__EGameEventPlayerRoundResult_MAX = 8,
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


// Enum ConZ.EGameEventNotificationType
enum class EGameEventNotificationType : uint8_t
{
	EGameEventNotificationType__EventStarted = 0,
	None                           = 1,
	EGameEventNotificationType__EventCanceled = 2,
	neByteProperty‘IntProperty  = 3,
	EGameEventNotificationType__EventEnded = 4,
	ByteProperty‘IntProperty    = 5,
	EGameEventNotificationType__NotEnoughParticipants = 6,
	ByteProperty                   = 7,
	EGameEventNotificationType__ParticipantJoined = 8,
	teProperty‘IntProperty        = 9,
	EGameEventNotificationType__ParticipantLeft = 10,
	Property‘IntProperty          = 11,
	EGameEventNotificationType__EGameEventNotificationType_MAX = 12,
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


// Enum ConZ.EGameEventParticipantState
enum class EGameEventParticipantState : uint8_t
{
	EGameEventParticipantState__Registered = 0,
	None                           = 1,
	EGameEventParticipantState__Spawning = 2,
	neByteProperty‘IntProperty  = 3,
	EGameEventParticipantState__Alive = 4,
	ByteProperty‘IntProperty    = 5,
	EGameEventParticipantState__Dead = 6,
	ByteProperty                   = 7,
	EGameEventParticipantState__Left = 8,
	teProperty‘IntProperty        = 9,
	EGameEventParticipantState__EGameEventParticipantState_MAX = 10,
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


// Enum ConZ.EGameEventState
enum class EGameEventState : uint8_t
{
	EGameEventState__Announced     = 0,
	None                           = 1,
	EGameEventState__RoundStarted  = 2,
	neByteProperty‘IntProperty  = 3,
	EGameEventState__RoundEnded    = 4,
	ByteProperty‘IntProperty    = 5,
	EGameEventState__Ended         = 6,
	ByteProperty                   = 7,
	EGameEventState__EGameEventState_MAX = 8,
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


// Enum ConZ.EGameEventBorderState
enum class EGameEventBorderState : uint8_t
{
	EGameEventBorderState__Off     = 0,
	None                           = 1,
	EGameEventBorderState__On      = 2,
	neByteProperty‘IntProperty  = 3,
	EGameEventBorderState__Bright  = 4,
	ByteProperty‘IntProperty    = 5,
	EGameEventBorderState__EGameEventBorderState_MAX = 6,
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


// Enum ConZ.EGameEventTransportState
enum class EGameEventTransportState : uint8_t
{
	EGameEventTransportState__StandBy = 0,
	None                           = 1,
	EGameEventTransportState__Travelling = 2,
	neByteProperty‘IntProperty  = 3,
	EGameEventTransportState__Leaving = 4,
	ByteProperty‘IntProperty    = 5,
	EGameEventTransportState__Landing = 6,
	ByteProperty                   = 7,
	EGameEventTransportState__LiftOff = 8,
	teProperty‘IntProperty        = 9,
	EGameEventTransportState__EGameEventTransportState_MAX = 10,
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


// Enum ConZ.ERagdollTransitionState
enum class ERagdollTransitionState : uint8_t
{
	ERagdollTransitionState__None  = 0,
	None                           = 1,
	ERagdollTransitionState__GoTo  = 2,
	neByteProperty‘IntProperty  = 3,
	ERagdollTransitionState__RecoverFrom = 4,
	ByteProperty‘IntProperty    = 5,
	ERagdollTransitionState__RecoverFromImmediately = 6,
	ByteProperty                   = 7,
	ERagdollTransitionState__ERagdollTransitionState_MAX = 8,
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


// Enum ConZ.EHitReactState
enum class EHitReactState : uint8_t
{
	EHitReactState__None           = 0,
	None                           = 1,
	EHitReactState__Hit            = 2,
	neByteProperty‘IntProperty  = 3,
	EHitReactState__Stun           = 4,
	ByteProperty‘IntProperty    = 5,
	EHitReactState__Knockout       = 6,
	ByteProperty                   = 7,
	EHitReactState__GettingUp      = 8,
	teProperty‘IntProperty        = 9,
	EHitReactState__Ragdoll        = 10,
	Property‘IntProperty          = 11,
	EHitReactState__EHitReactState_MAX = 12,
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


// Enum ConZ.EGoToRagdollCaller
enum class EGoToRagdollCaller : uint8_t
{
	EGoToRagdollCaller__Default    = 0,
	None                           = 1,
	EGoToRagdollCaller__Montage    = 2,
	neByteProperty‘IntProperty  = 3,
	EGoToRagdollCaller__EGoToRagdollCaller_MAX = 4,
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


// Enum ConZ.EWarningType
enum class EWarningType : uint8_t
{
	EWarningType__Danger           = 0,
	None                           = 1,
	EWarningType__Explosion        = 2,
	neByteProperty‘IntProperty  = 3,
	EWarningType__LifeThreat       = 4,
	ByteProperty‘IntProperty    = 5,
	EWarningType__Watching         = 6,
	ByteProperty                   = 7,
	EWarningType__Traps            = 8,
	teProperty‘IntProperty        = 9,
	EWarningType__EWarningType_MAX = 10,
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


// Enum ConZ.EHumanRace
enum class EHumanRace : uint8_t
{
	EHumanRace__Caucasian          = 0,
	None                           = 1,
	EHumanRace__Mongoloid          = 2,
	neByteProperty‘IntProperty  = 3,
	EHumanRace__Negroid            = 4,
	ByteProperty‘IntProperty    = 5,
	EHumanRace__EHumanRace_MAX     = 6,
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


// Enum ConZ.EImpactSeverity
enum class EImpactSeverity : uint8_t
{
	EImpactSeverity__Light         = 0,
	None                           = 1,
	EImpactSeverity__Medium        = 2,
	neByteProperty‘IntProperty  = 3,
	EImpactSeverity__Heavy         = 4,
	ByteProperty‘IntProperty    = 5,
	EImpactSeverity__Count         = 6,
	ByteProperty                   = 7,
	EImpactSeverity__EImpactSeverity_MAX = 8,
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


// Enum ConZ.EInteractionState
enum class EInteractionState : uint8_t
{
	EInteractionState__Busy        = 0,
	None                           = 1,
	EInteractionState__NoInteractionDefined = 2,
	neByteProperty‘IntProperty  = 3,
	EInteractionState__CanInteract = 4,
	ByteProperty‘IntProperty    = 5,
	EInteractionState__UnableToInteract = 6,
	ByteProperty                   = 7,
	EInteractionState__EInteractionState_MAX = 8,
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


// Enum ConZ.EHandsHolstersType
enum class EHandsHolstersType : uint8_t
{
	EHandsHolstersType__Hands      = 0,
	None                           = 1,
	EHandsHolstersType__HolsterLeft = 2,
	neByteProperty‘IntProperty  = 3,
	EHandsHolstersType__HolsterRight = 4,
	ByteProperty‘IntProperty    = 5,
	EHandsHolstersType__EHandsHolstersType_MAX = 6,
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


// Enum ConZ.EInventoryNodeWidgetDataType
enum class EInventoryNodeWidgetDataType : uint8_t
{
	EInventoryNodeWidgetDataType__Number = 0,
	None                           = 1,
	EInventoryNodeWidgetDataType__Text = 2,
	neByteProperty‘IntProperty  = 3,
	EInventoryNodeWidgetDataType__Icon = 4,
	ByteProperty‘IntProperty    = 5,
	EInventoryNodeWidgetDataType__Visibility = 6,
	ByteProperty                   = 7,
	EInventoryNodeWidgetDataType__EInventoryNodeWidgetDataType_MAX = 8,
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


// Enum ConZ.ETooltipPanelType
enum class ETooltipPanelType : uint8_t
{
	ETooltipPanelType__Overview    = 0,
	None                           = 1,
	ETooltipPanelType__Additional  = 2,
	neByteProperty‘IntProperty  = 3,
	ETooltipPanelType__ETooltipPanelType_MAX = 4,
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


// Enum ConZ.EMedicalDiagnosisType
enum class EMedicalDiagnosisType : uint8_t
{
	EMedicalDiagnosisType__CheckPulse = 0,
	None                           = 1,
	EMedicalDiagnosisType__FullDiagnosis = 2,
	neByteProperty‘IntProperty  = 3,
	EMedicalDiagnosisType__EMedicalDiagnosisType_MAX = 4,
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


// Enum ConZ.EDiagnosisLevel
enum class EDiagnosisLevel : uint8_t
{
	EDiagnosisLevel__TempOnly      = 0,
	None                           = 1,
	EDiagnosisLevel__Physical      = 2,
	neByteProperty‘IntProperty  = 3,
	EDiagnosisLevel__PhysicalSeverity = 4,
	ByteProperty‘IntProperty    = 5,
	EDiagnosisLevel__Everything    = 6,
	ByteProperty                   = 7,
	EDiagnosisLevel__EDiagnosisLevel_MAX = 8,
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


// Enum ConZ.EMedicationType
enum class EMedicationType : uint8_t
{
	EMedicationType__Painkillers   = 0,
	None                           = 1,
	EMedicationType__Sedatives     = 2,
	neByteProperty‘IntProperty  = 3,
	EMedicationType__Antibiotics   = 4,
	ByteProperty‘IntProperty    = 5,
	EMedicationType__Antiparasitics = 6,
	ByteProperty                   = 7,
	EMedicationType__Stimulants    = 8,
	teProperty‘IntProperty        = 9,
	EMedicationType__EMedicationType_MAX = 10,
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


// Enum ConZ.EMedicationUsage
enum class EMedicationUsage : uint8_t
{
	EMedicationUsage__Pills        = 0,
	None                           = 1,
	EMedicationUsage__Injections   = 2,
	neByteProperty‘IntProperty  = 3,
	EMedicationUsage__Infusions    = 4,
	ByteProperty‘IntProperty    = 5,
	EMedicationUsage__EMedicationUsage_MAX = 6,
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


// Enum ConZ.EMeleeActionType
enum class EMeleeActionType : uint8_t
{
	EMeleeActionType__None         = 0,
	None                           = 1,
	EMeleeActionType__Attack       = 2,
	neByteProperty‘IntProperty  = 3,
	EMeleeActionType__PrepareForBlockOrDodge = 4,
	ByteProperty‘IntProperty    = 5,
	EMeleeActionType__Block        = 6,
	ByteProperty                   = 7,
	EMeleeActionType__Dodge        = 8,
	teProperty‘IntProperty        = 9,
	EMeleeActionType__EMeleeActionType_MAX = 10,
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


// Enum ConZ.EMeleeState
enum class EMeleeState : uint8_t
{
	EMeleeState__Idle              = 0,
	None                           = 1,
	EMeleeState__Attacking         = 2,
	neByteProperty‘IntProperty  = 3,
	EMeleeState__PreparedForBlockOrDodge = 4,
	ByteProperty‘IntProperty    = 5,
	EMeleeState__Block             = 6,
	ByteProperty                   = 7,
	EMeleeState__Dodge             = 8,
	teProperty‘IntProperty        = 9,
	EMeleeState__HitReact          = 10,
	Property‘IntProperty          = 11,
	EMeleeState__EMeleeState_MAX   = 12,
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


// Enum ConZ.EHitDirectionType
enum class EHitDirectionType : uint8_t
{
	EHitDirectionType__Front       = 0,
	None                           = 1,
	EHitDirectionType__Left        = 2,
	neByteProperty‘IntProperty  = 3,
	EHitDirectionType__Back        = 4,
	ByteProperty‘IntProperty    = 5,
	EHitDirectionType__Right       = 6,
	ByteProperty                   = 7,
	EHitDirectionType__EHitDirectionType_MAX = 8,
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


// Enum ConZ.EAttackCollisionType
enum class EAttackCollisionType : uint8_t
{
	EAttackCollisionType__None     = 0,
	None                           = 1,
	EAttackCollisionType__WeaponLeftHand = 2,
	neByteProperty‘IntProperty  = 3,
	EAttackCollisionType__WeaponRightHand = 4,
	ByteProperty‘IntProperty    = 5,
	EAttackCollisionType__Head     = 6,
	ByteProperty                   = 7,
	EAttackCollisionType__LeftHand = 8,
	teProperty‘IntProperty        = 9,
	EAttackCollisionType__RightHand = 10,
	Property‘IntProperty          = 11,
	EAttackCollisionType__LeftLeg  = 12,
	operty‘IntProperty            = 13,
	EAttackCollisionType__RightLeg = 14,
	erty‘IntProperty              = 15,
	EAttackCollisionType__EAttackCollisionType_MAX = 16,
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


// Enum ConZ.EMinigameState
enum class EMinigameState : uint8_t
{
	EMinigameState__None           = 0,
	None                           = 1,
	EMinigameState__Intro          = 2,
	neByteProperty‘IntProperty  = 3,
	EMinigameState__WaitingForPlayer = 4,
	ByteProperty‘IntProperty    = 5,
	EMinigameState__Game           = 6,
	ByteProperty                   = 7,
	EMinigameState__Outro          = 8,
	teProperty‘IntProperty        = 9,
	EMinigameState__EMinigameState_MAX = 10,
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


// Enum ConZ.EEndMinigameReason
enum class EEndMinigameReason : uint8_t
{
	EEndMinigameReason__Succees    = 0,
	None                           = 1,
	EEndMinigameReason__Fail       = 2,
	neByteProperty‘IntProperty  = 3,
	EEndMinigameReason__Cancel     = 4,
	ByteProperty‘IntProperty    = 5,
	EEndMinigameReason__EEndMinigameReason_MAX = 6,
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


// Enum ConZ.EObjectiveAnimationState
enum class EObjectiveAnimationState : uint8_t
{
	EObjectiveAnimationState__None = 0,
	None                           = 1,
	EObjectiveAnimationState__Start = 2,
	neByteProperty‘IntProperty  = 3,
	EObjectiveAnimationState__Complete = 4,
	ByteProperty‘IntProperty    = 5,
	EObjectiveAnimationState__EObjectiveAnimationState_MAX = 6,
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


// Enum ConZ.EMissionManagerState
enum class EMissionManagerState : uint8_t
{
	EMissionManagerState__None     = 0,
	None                           = 1,
	EMissionManagerState__MainStorySuccess = 2,
	neByteProperty‘IntProperty  = 3,
	EMissionManagerState__SideStorySuccess = 4,
	ByteProperty‘IntProperty    = 5,
	EMissionManagerState__TutorialSuccess = 6,
	ByteProperty                   = 7,
	EMissionManagerState__MainStoryFailed = 8,
	teProperty‘IntProperty        = 9,
	EMissionManagerState__SideStoryFailed = 10,
	Property‘IntProperty          = 11,
	EMissionManagerState__TutorialFailed = 12,
	operty‘IntProperty            = 13,
	EMissionManagerState__EMissionManagerState_MAX = 14,
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


// Enum ConZ.EDialogType
enum class EDialogType : uint8_t
{
	EDialogType__Subtitle          = 0,
	None                           = 1,
	EDialogType__Action            = 2,
	neByteProperty‘IntProperty  = 3,
	EDialogType__Wait              = 4,
	ByteProperty‘IntProperty    = 5,
	EDialogType__EDialogType_MAX   = 6,
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


// Enum ConZ.EDialogEvent
enum class EDialogEvent : uint8_t
{
	EDialogEvent__Intro            = 0,
	None                           = 1,
	EDialogEvent__OpenInteface     = 2,
	neByteProperty‘IntProperty  = 3,
	EDialogEvent__OpenCraftingInterface = 4,
	ByteProperty‘IntProperty    = 5,
	EDialogEvent__ChooseKnife      = 6,
	ByteProperty                   = 7,
	EDialogEvent__OpenCraftingInterface_Bag = 8,
	teProperty‘IntProperty        = 9,
	EDialogEvent__EDialogEvent_MAX = 10,
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


// Enum ConZ.EFaction
enum class EFaction : uint8_t
{
	EFaction__None                 = 0,
	None                           = 1,
	EFaction__Rebel                = 2,
	neByteProperty‘IntProperty  = 3,
	EFaction__TEC                  = 4,
	ByteProperty‘IntProperty    = 5,
	EFaction__EFaction_MAX         = 6,
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


// Enum ConZ.EObjectiveState
enum class EObjectiveState : uint8_t
{
	EObjectiveState__None          = 0,
	None                           = 1,
	EObjectiveState__Initialized   = 2,
	neByteProperty‘IntProperty  = 3,
	EObjectiveState__Started       = 4,
	ByteProperty‘IntProperty    = 5,
	EObjectiveState__Completed     = 6,
	ByteProperty                   = 7,
	EObjectiveState__Failed        = 8,
	teProperty‘IntProperty        = 9,
	EObjectiveState__Belated       = 10,
	Property‘IntProperty          = 11,
	EObjectiveState__EObjectiveState_MAX = 12,
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


// Enum ConZ.EMissionType
enum class EMissionType : uint8_t
{
	EMissionType__None             = 0,
	None                           = 1,
	EMissionType__MainStory        = 2,
	neByteProperty‘IntProperty  = 3,
	EMissionType__SideStory        = 4,
	ByteProperty‘IntProperty    = 5,
	EMissionType__Tutorial         = 6,
	ByteProperty                   = 7,
	EMissionType__EMissionType_MAX = 8,
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


// Enum ConZ.EMissionState
enum class EMissionState : uint8_t
{
	EMissionState__Available       = 0,
	None                           = 1,
	EMissionState__Unavailable     = 2,
	neByteProperty‘IntProperty  = 3,
	EMissionState__Started         = 4,
	ByteProperty‘IntProperty    = 5,
	EMissionState__Completed       = 6,
	ByteProperty                   = 7,
	EMissionState__Failed          = 8,
	teProperty‘IntProperty        = 9,
	EMissionState__Belated         = 10,
	Property‘IntProperty          = 11,
	EMissionState__EMissionState_MAX = 12,
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


// Enum ConZ.ENotificationTarget
enum class ENotificationTarget : uint8_t
{
	ENotificationTarget__Everybody = 0,
	None                           = 1,
	ENotificationTarget__SingleClient = 2,
	neByteProperty‘IntProperty  = 3,
	ENotificationTarget__ENotificationTarget_MAX = 4,
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


// Enum ConZ.EMouseSensitivityMode
enum class EMouseSensitivityMode : uint8_t
{
	EMouseSensitivityMode__None    = 0,
	None                           = 1,
	EMouseSensitivityMode__ThirdPerson = 2,
	neByteProperty‘IntProperty  = 3,
	EMouseSensitivityMode__FirstPerson = 4,
	ByteProperty‘IntProperty    = 5,
	EMouseSensitivityMode__DownTheSight = 6,
	ByteProperty                   = 7,
	EMouseSensitivityMode__Scope   = 8,
	teProperty‘IntProperty        = 9,
	EMouseSensitivityMode__Drone   = 10,
	Property‘IntProperty          = 11,
	EMouseSensitivityMode__Lockpicking = 12,
	operty‘IntProperty            = 13,
	EMouseSensitivityMode__EMouseSensitivityMode_MAX = 14,
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


// Enum ConZ.EAnesthesiaType
enum class EAnesthesiaType : uint8_t
{
	EAnesthesiaType__Local         = 0,
	None                           = 1,
	EAnesthesiaType__General       = 2,
	neByteProperty‘IntProperty  = 3,
	EAnesthesiaType__EAnesthesiaType_MAX = 4,
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


// Enum ConZ.EPickupItemOperation
enum class EPickupItemOperation : uint8_t
{
	EPickupItemOperation__PickupOnly = 0,
	None                           = 1,
	EPickupItemOperation__PickupAndEat = 2,
	neByteProperty‘IntProperty  = 3,
	EPickupItemOperation__PickupAndEatAll = 4,
	ByteProperty‘IntProperty    = 5,
	EPickupItemOperation__EPickupItemOperation_MAX = 6,
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


// Enum ConZ.EPlacementState
enum class EPlacementState : uint8_t
{
	EPlacementState__Placing       = 0,
	None                           = 1,
	EPlacementState__PlacingSecondPoint = 2,
	neByteProperty‘IntProperty  = 3,
	EPlacementState__AdjustingHeight = 4,
	ByteProperty‘IntProperty    = 5,
	EPlacementState__PlacedPending = 6,
	ByteProperty                   = 7,
	EPlacementState__Placed        = 8,
	teProperty‘IntProperty        = 9,
	EPlacementState__EPlacementState_MAX = 10,
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


// Enum ConZ.EPlacementBaseBuildingState
enum class EPlacementBaseBuildingState : uint8_t
{
	EPlacementBaseBuildingState__Placing = 0,
	None                           = 1,
	EPlacementBaseBuildingState__PlacingSecondPoint = 2,
	neByteProperty‘IntProperty  = 3,
	EPlacementBaseBuildingState__Placed = 4,
	ByteProperty‘IntProperty    = 5,
	EPlacementBaseBuildingState__EPlacementBaseBuildingState_MAX = 6,
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


// Enum ConZ.EPlaceableIngredientType
enum class EPlaceableIngredientType : uint8_t
{
	EPlaceableIngredientType__Mandatory = 0,
	None                           = 1,
	EPlaceableIngredientType__Tool = 2,
	neByteProperty‘IntProperty  = 3,
	EPlaceableIngredientType__EPlaceableIngredientType_MAX = 4,
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


// Enum ConZ.EIngredientUsageRule
enum class EIngredientUsageRule : uint8_t
{
	EIngredientUsageRule__Quantity = 0,
	None                           = 1,
	EIngredientUsageRule__Usage    = 2,
	neByteProperty‘IntProperty  = 3,
	EIngredientUsageRule__Weight   = 4,
	ByteProperty‘IntProperty    = 5,
	EIngredientUsageRule__EIngredientUsageRule_MAX = 6,
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


// Enum ConZ.EPlacementAllowedStatus
enum class EPlacementAllowedStatus : uint8_t
{
	EPlacementAllowedStatus__None  = 0,
	None                           = 1,
	EPlacementAllowedStatus__Allowed = 2,
	neByteProperty‘IntProperty  = 3,
	EPlacementAllowedStatus__NotAllowedPlacementLineTraceFailed = 4,
	ByteProperty‘IntProperty    = 5,
	EPlacementAllowedStatus__NotAllowedNormalTestFailed = 6,
	ByteProperty                   = 7,
	EPlacementAllowedStatus__NotAllowedInteractionDistance = 8,
	teProperty‘IntProperty        = 9,
	EPlacementAllowedStatus__NotAllowedReachability = 10,
	Property‘IntProperty          = 11,
	EPlacementAllowedStatus__NotAllowedWater = 12,
	operty‘IntProperty            = 13,
	EPlacementAllowedStatus__NotAllowedAngle = 14,
	erty‘IntProperty              = 15,
	EPlacementAllowedStatus__NotAllowedMeshOverlap = 16,
	ty‘IntProperty                = 17,
	EPlacementAllowedStatus__NotAllowedTopOverlap = 18,
	[Error]                        = 19,
	EPlacementAllowedStatus__NotAllowedTopOverlapSimple = 20,
	IntProperty                    = 21,
	EPlacementAllowedStatus__NotAllowedBottomOverlap = 22,
	tProperty                      = 23,
	EPlacementAllowedStatus__NotAllowedFullBoxOverlap = 24,
	roperty                        = 25,
	EPlacementAllowedStatus__NotAllowedExtendedOverlap = 26,
	perty                          = 27,
	EPlacementAllowedStatus__NotAllowedFloating = 28,
	rty                            = 29,
	EPlacementAllowedStatus__NotAllowedTeleportSpot = 30,
	y                              = 31,
	EPlacementAllowedStatus__NotAllowedHitCharacter = 32,
	
                              = 33,
	EPlacementAllowedStatus__NotAllowedHitItem = 34,
	BoolProperty                   = 35,
	EPlacementAllowedStatus__NotAllowedHitVehicle = 36,
	olPropertybFloatProperty      = 37,
	EPlacementAllowedStatus__NotAllowedNotSnapping = 38,
	PropertybFloatProperty        = 39,
	EPlacementAllowedStatus__NotAllowedCantPlaceAtLocation = 40,
	opertybFloatProperty          = 41,
	EPlacementAllowedStatus__NotAllowedLocationMask = 42,
	ertybFloatProperty            = 43,
	EPlacementAllowedStatus__NotAllowedLocationDupFlag = 44,
	tybFloatProperty              = 45,
	EPlacementAllowedStatus__NotAllowedLocationEnemyFlag = 46,
	bFloatProperty                = 47,
	EPlacementAllowedStatus__NotAllowedLocationFoundation = 48,
	FloatProperty                  = 49,
	EPlacementAllowedStatus__NotAllowedLocationOtherElement = 50,
	oatProperty                    = 51,
	EPlacementAllowedStatus__NotAllowedLocationNoBase = 52,
	tProperty01                    = 53,
	EPlacementAllowedStatus__NotAllowedEnemyFlag = 54,
	roperty01                      = 55,
	EPlacementAllowedStatus__NotAllowedBaseBuildingMask = 56,
	perty01                        = 57,
	EPlacementAllowedStatus__NotAllowedTwoPointsConstaints = 58,
	rty01                          = 59,
	EPlacementAllowedStatus__NotAllowedHeightDifference = 60,
	y01                            = 61,
	EPlacementAllowedStatus__NotAllowedTopSweep = 62,
	[Error]01                      = 63,
	EPlacementAllowedStatus__NotAllowedMidSweep = 64,
	ObjectProperty                 = 65,
	EPlacementAllowedStatus__NotAllowedTilesNotGrounded = 66,
	jectPropertyNameProperty     = 67,
	EPlacementAllowedStatus__NotAllowedPlacedDistance = 68,
	ctPropertyNameProperty       = 69,
	EPlacementAllowedStatus__NotAllowedUnknown = 70,
	PropertyNameProperty         = 71,
	EPlacementAllowedStatus__EPlacementAllowedStatus_MAX = 72
};


// Enum ConZ.EPlacementAlgorithm
enum class EPlacementAlgorithm : uint8_t
{
	EPlacementAlgorithm__Classic   = 0,
	None                           = 1,
	EPlacementAlgorithm__New       = 2,
	neByteProperty‘IntProperty  = 3,
	EPlacementAlgorithm__EPlacementAlgorithm_MAX = 4,
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


// Enum ConZ.EPlacementBaseState
enum class EPlacementBaseState : uint8_t
{
	EPlacementBaseState__None      = 0,
	None                           = 1,
	EPlacementBaseState__Placing   = 2,
	neByteProperty‘IntProperty  = 3,
	EPlacementBaseState__Placed    = 4,
	ByteProperty‘IntProperty    = 5,
	EPlacementBaseState__HeightAdjustment = 6,
	ByteProperty                   = 7,
	EPlacementBaseState__EPlacementBaseState_MAX = 8,
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


// Enum ConZ.EPlayableInstrumentView
enum class EPlayableInstrumentView : uint8_t
{
	EPlayableInstrumentView__FirstPerson = 0,
	None                           = 1,
	EPlayableInstrumentView__ThirdPerson = 2,
	neByteProperty‘IntProperty  = 3,
	EPlayableInstrumentView__EPlayableInstrumentView_MAX = 4,
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


// Enum ConZ.EPlayableInstrumentChord
enum class EPlayableInstrumentChord : uint8_t
{
	EPlayableInstrumentChord__Count = 0,
	None                           = 1,
	EPlayableInstrumentChord__EPlayableInstrumentChord_MAX = 2,
	neByteProperty‘IntProperty  = 3,
	None01                         = 4,
	None02                         = 5,
	None03                         = 6,
	None04                         = 7,
	None05                         = 8,
	None06                         = 9,
	band_Christmas_Headband_C      = 10,
	None07                         = 11,
	None08                         = 12,
	dgear_Disposable_Mask_Disposable_Mask_C = 13,
	None09                         = 14,
	None10                         = 15,
	None11                         = 16,
	None12                         = 17
};


// Enum ConZ.EInstrumentEventType
enum class EInstrumentEventType : uint8_t
{
	EInstrumentEventType__PlayTone = 0,
	None                           = 1,
	EInstrumentEventType__StopTone = 2,
	neByteProperty‘IntProperty  = 3,
	EInstrumentEventType__EInstrumentEventType_MAX = 4,
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


// Enum ConZ.EStanceChangeFlag
enum class EStanceChangeFlag : uint8_t
{
	EStanceChangeFlag__Exact       = 0,
	None                           = 1,
	EStanceChangeFlag__Min         = 2
};


// Enum ConZ.ESwapItemsType
enum class ESwapItemsType : uint8_t
{
	ESwapItemsType__None           = 0,
	None                           = 1,
	ESwapItemsType__NotWeaponToNotWeapon = 2,
	neByteProperty‘IntProperty  = 3,
	ESwapItemsType__WeaponToWeapon = 4,
	ByteProperty‘IntProperty    = 5,
	ESwapItemsType__NotWeaponToWeapon = 6,
	ByteProperty                   = 7,
	ESwapItemsType__WeaponToNotWeapon = 8,
	teProperty‘IntProperty        = 9,
	ESwapItemsType__ESwapItemsType_MAX = 10,
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


// Enum ConZ.EPrisonerAnimationCurve
enum class EPrisonerAnimationCurve : uint8_t
{
	EPrisonerAnimationCurve__LegsPose = 0,
	None                           = 1,
	EPrisonerAnimationCurve__CanStartGoToLoop = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerAnimationCurve__CanStartGoToStopLU = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerAnimationCurve__CanStartGoToStopRU = 6,
	ByteProperty                   = 7,
	EPrisonerAnimationCurve__DistanceToPivot = 8,
	teProperty‘IntProperty        = 9,
	EPrisonerAnimationCurve__DistanceToApex = 10,
	Property‘IntProperty          = 11,
	EPrisonerAnimationCurve__CanLandGoToLoop = 12,
	operty‘IntProperty            = 13,
	EPrisonerAnimationCurve__CanFireWeapon = 14,
	erty‘IntProperty              = 15,
	EPrisonerAnimationCurve__LeftHandIK = 16,
	ty‘IntProperty                = 17,
	EPrisonerAnimationCurve__MoveInputScale = 18,
	[Error]                        = 19,
	EPrisonerAnimationCurve__MoveInputModifierScale = 20,
	IntProperty                    = 21,
	EPrisonerAnimationCurve__MoveInputModifierCourseAngle = 22,
	tProperty                      = 23,
	EPrisonerAnimationCurve__IgnoreMoveInput = 24,
	roperty                        = 25,
	EPrisonerAnimationCurve__IgnoreTurnInput = 26,
	perty                          = 27,
	EPrisonerAnimationCurve__IsStanceTransitionActive = 28,
	rty                            = 29,
	EPrisonerAnimationCurve__MeshOffsetWhenInWater = 30,
	y                              = 31,
	EPrisonerAnimationCurve__ViewRoll = 32,
	
                              = 33,
	EPrisonerAnimationCurve__ViewPitch = 34,
	BoolProperty                   = 35,
	EPrisonerAnimationCurve__ViewYaw = 36,
	olPropertybFloatProperty      = 37,
	EPrisonerAnimationCurve__Count = 38,
	PropertybFloatProperty        = 39,
	EPrisonerAnimationCurve__EPrisonerAnimationCurve_MAX = 40,
	opertybFloatProperty          = 41,
	None01                         = 42,
	None02                         = 43
};


// Enum ConZ.EPrisonerAnimationState
enum class EPrisonerAnimationState : uint8_t
{
	EPrisonerAnimationState__Unknown = 0,
	None                           = 1,
	EPrisonerAnimationState__Entry = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerAnimationState__StandIdle = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerAnimationState__StandIdleToCrouchIdle = 6,
	ByteProperty                   = 7,
	EPrisonerAnimationState__StandIdleToProneIdle = 8,
	teProperty‘IntProperty        = 9,
	EPrisonerAnimationState__StandWalkStart = 10,
	Property‘IntProperty          = 11,
	EPrisonerAnimationState__StandWalkLoop = 12,
	operty‘IntProperty            = 13,
	EPrisonerAnimationState__StandWalkStop = 14,
	erty‘IntProperty              = 15,
	EPrisonerAnimationState__StandJogStart = 16,
	ty‘IntProperty                = 17,
	EPrisonerAnimationState__StandJogLoop = 18,
	[Error]                        = 19,
	EPrisonerAnimationState__StandJogStop = 20,
	IntProperty                    = 21,
	EPrisonerAnimationState__StandRunStart = 22,
	tProperty                      = 23,
	EPrisonerAnimationState__StandRunLoop = 24,
	roperty                        = 25,
	EPrisonerAnimationState__StandRunStop = 26,
	perty                          = 27
};


// Enum ConZ.EPrisonerConsciousness
enum class EPrisonerConsciousness : uint8_t
{
	EPrisonerConsciousness__Conscious = 0,
	None                           = 1,
	EPrisonerConsciousness__Unconscious = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerConsciousness__Coma   = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerConsciousness__Death  = 6,
	ByteProperty                   = 7,
	EPrisonerConsciousness__EPrisonerConsciousness_MAX = 8,
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


// Enum ConZ.EBuryState
enum class EBuryState : uint8_t
{
	EBuryState__None               = 0,
	None                           = 1,
	EBuryState__Bury               = 2,
	neByteProperty‘IntProperty  = 3,
	EBuryState__ResumeBury         = 4,
	ByteProperty‘IntProperty    = 5,
	EBuryState__Rest               = 6,
	ByteProperty                   = 7,
	EBuryState__Finish             = 8,
	teProperty‘IntProperty        = 9,
	EBuryState__EBuryState_MAX     = 10,
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


// Enum ConZ.EPrisonerFacialExpression
enum class EPrisonerFacialExpression : uint8_t
{
	EPrisonerFacialExpression__None = 0,
	None                           = 1,
	EPrisonerFacialExpression__Angry1 = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerFacialExpression__Angry2 = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerFacialExpression__Hit = 6,
	ByteProperty                   = 7,
	EPrisonerFacialExpression__Punching = 8,
	teProperty‘IntProperty        = 9,
	EPrisonerFacialExpression__Fear1 = 10,
	Property‘IntProperty          = 11,
	EPrisonerFacialExpression__Fear2 = 12,
	operty‘IntProperty            = 13,
	EPrisonerFacialExpression__Fear3 = 14,
	erty‘IntProperty              = 15
};


// Enum ConZ.EPrisonerFirstPersonSubview
enum class EPrisonerFirstPersonSubview : uint8_t
{
	EPrisonerFirstPersonSubview__Standing = 0,
	None                           = 1,
	EPrisonerFirstPersonSubview__Crouching = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerFirstPersonSubview__Prone = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerFirstPersonSubview__StandingMelee = 6,
	ByteProperty                   = 7,
	EPrisonerFirstPersonSubview__StandingAiming = 8,
	teProperty‘IntProperty        = 9,
	EPrisonerFirstPersonSubview__CrouchingAiming = 10,
	Property‘IntProperty          = 11,
	EPrisonerFirstPersonSubview__ProneAiming = 12,
	operty‘IntProperty            = 13,
	EPrisonerFirstPersonSubview__StandingAimingDownTheSights = 14,
	erty‘IntProperty              = 15,
	EPrisonerFirstPersonSubview__CrouchingAimingDownTheSights = 16,
	ty‘IntProperty                = 17,
	EPrisonerFirstPersonSubview__ProneAimingDownTheSights = 18,
	[Error]                        = 19,
	EPrisonerFirstPersonSubview__ClimbingWindow = 20,
	IntProperty                    = 21,
	EPrisonerFirstPersonSubview__Mounted = 22,
	tProperty                      = 23,
	EPrisonerFirstPersonSubview__Lying = 24,
	roperty                        = 25,
	EPrisonerFirstPersonSubview__Count = 26,
	perty                          = 27,
	EPrisonerFirstPersonSubview__EPrisonerFirstPersonSubview_MAX = 28,
	rty                            = 29,
	EPlacementAllowedStatus__NotAllowedTeleportSpot = 30,
	y                              = 31,
	EPlacementAllowedStatus__NotAllowedHitCharacter = 32,
	
                              = 33,
	EPlacementAllowedStatus__NotAllowedHitItem = 34,
	BoolProperty                   = 35
};


// Enum ConZ.EPrisonerHUDMode
enum class EPrisonerHUDMode : uint8_t
{
	EPrisonerHUDMode__Normal       = 0,
	None                           = 1,
	EPrisonerHUDMode__DebugMain    = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerHUDMode__DebugSkills  = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerHUDMode__DebugMovement = 6,
	ByteProperty                   = 7,
	EPrisonerHUDMode__DebugMeleeSkill = 8,
	teProperty‘IntProperty        = 9
};


// Enum ConZ.EPrisonerDivingState
enum class EPrisonerDivingState : uint8_t
{
	EPrisonerDivingState__None     = 0,
	None                           = 1,
	EPrisonerDivingState__WantsToDive = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerDivingState__Diving   = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerDivingState__EPrisonerDivingState_MAX = 6,
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


// Enum ConZ.EPrisonerMovementMode
enum class EPrisonerMovementMode : uint8_t
{
	EPrisonerMovementMode__None    = 0,
	None                           = 1,
	EPrisonerMovementMode__Climbing_Anchoring = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerMovementMode__Climbing_PlayingMontage = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerMovementMode__ClimbingLadder = 6,
	ByteProperty                   = 7,
	EPrisonerMovementMode__ClimbingWindow_Anchoring = 8,
	teProperty‘IntProperty        = 9,
	EPrisonerMovementMode__ClimbingWindow_PlayingMontage = 10,
	Property‘IntProperty          = 11,
	EPrisonerMovementMode__EPrisonerMovementMode_MAX = 12,
	operty‘IntProperty            = 13,
	EPrisonerAnimationState__StandWalkStop = 14,
	erty‘IntProperty              = 15,
	EPrisonerAnimationState__StandJogStart = 16,
	ty‘IntProperty                = 17,
	EPrisonerAnimationState__StandJogLoop = 18,
	[Error]                        = 19,
	EPrisonerAnimationState__StandJogStop = 20,
	IntProperty                    = 21,
	EPrisonerAnimationState__StandRunStart = 22,
	tProperty                      = 23,
	EPrisonerAnimationState__StandRunLoop = 24,
	roperty                        = 25,
	EPrisonerAnimationState__StandRunStop = 26,
	perty                          = 27
};


// Enum ConZ.EPrisonerResponseIdle
enum class EPrisonerResponseIdle : uint8_t
{
	EPrisonerResponseIdle__None    = 0,
	None                           = 1,
	EPrisonerResponseIdle__Winded  = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerResponseIdle__Exhausted = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerResponseIdle__Cold    = 6,
	ByteProperty                   = 7,
	EPrisonerResponseIdle__Dirty   = 8,
	teProperty‘IntProperty        = 9,
	EPrisonerResponseIdle__NeedsToUrinate = 10,
	Property‘IntProperty          = 11,
	EPrisonerResponseIdle__NeedsToDefecate = 12,
	operty‘IntProperty            = 13,
	EPrisonerResponseIdle__Dizzy   = 14,
	erty‘IntProperty              = 15,
	EPrisonerResponseIdle__Drunk   = 16,
	ty‘IntProperty                = 17,
	EPrisonerResponseIdle__Num     = 18,
	[Error]                        = 19,
	EPrisonerResponseIdle__EPrisonerResponseIdle_MAX = 20,
	IntProperty                    = 21,
	EDigestionGroup__SemiConcentratedCarbs = 22,
	tProperty                      = 23,
	EDigestionGroup__ConcentratedCarbs1 = 24,
	roperty                        = 25,
	EDigestionGroup__ConcentratedCarbs2 = 26,
	perty                          = 27,
	EDigestionGroup__ConcentratedCarbs3 = 28,
	rty                            = 29,
	EDigestionGroup__SeedsNuts1    = 30,
	y                              = 31
};


// Enum ConZ.EPrisonerRestingMode
enum class EPrisonerRestingMode : uint8_t
{
	EPrisonerRestingMode__None     = 0,
	None                           = 1,
	EPrisonerRestingMode__Sitting  = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerRestingMode__Lying    = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerRestingMode__Count    = 6,
	ByteProperty                   = 7,
	EPrisonerRestingMode__EPrisonerRestingMode_MAX = 8,
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


// Enum ConZ.EPrisonerVisibilityFlag
enum class EPrisonerVisibilityFlag : uint8_t
{
	EPrisonerVisibilityFlag__None  = 0,
	None                           = 1,
	EPrisonerVisibilityFlag__Default = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerVisibilityFlag__View  = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerVisibilityFlag__Awareness = 6,
	teProperty‘IntProperty        = 7,
	EPrisonerVisibilityFlag__All   = 8,
	Sphere                         = 9,
	EPrisonerVisibilityFlag__EPrisonerVisibilityFlag_MAX = 10,
	hereÊ                          = 11,
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


// Enum ConZ.EPrisonerAimOffsetType
enum class EPrisonerAimOffsetType : uint8_t
{
	EPrisonerAimOffsetType__Standing = 0,
	None                           = 1,
	EPrisonerAimOffsetType__Crouching = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerAimOffsetType__Prone  = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerAimOffsetType__ProneMoving = 6,
	ByteProperty                   = 7,
	EPrisonerAimOffsetType__FirstPersonView = 8,
	teProperty‘IntProperty        = 9,
	EPrisonerAimOffsetType__FirstPersonViewProne = 10,
	Property‘IntProperty          = 11,
	EPrisonerAimOffsetType__AimingDownTheSights = 12,
	operty‘IntProperty            = 13,
	EPrisonerAimOffsetType__Count  = 14,
	erty‘IntProperty              = 15,
	EPrisonerAimOffsetType__EPrisonerAimOffsetType_MAX = 16,
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


// Enum ConZ.EPrisonerMontageBlendType
enum class EPrisonerMontageBlendType : uint8_t
{
	EPrisonerMontageBlendType__All = 0,
	None                           = 1,
	EPrisonerMontageBlendType__LeftHand = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerMontageBlendType__RightHand = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerMontageBlendType__EPrisonerMontageBlendType_MAX = 6,
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


// Enum ConZ.EPrisonerMontage
enum class EPrisonerMontage : uint8_t
{
	EPrisonerMontage__None         = 0,
	None                           = 1,
	EPrisonerMontage__WeaponEquipRifle = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerMontage__WeaponUnequipRifle = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerMontage__WeaponEquipHandgun = 6,
	ByteProperty                   = 7,
	EPrisonerMontage__WeaponUnequipHandgun = 8,
	teProperty‘IntProperty        = 9,
	EPrisonerMontage__Urinate      = 10,
	Property‘IntProperty          = 11,
	EPrisonerMontage__UrinateForced = 12,
	operty‘IntProperty            = 13,
	EPrisonerMontage__Defecate     = 14,
	erty‘IntProperty              = 15,
	EPrisonerMontage__DefecateForced = 16,
	ty‘IntProperty                = 17,
	EPrisonerMontage__Vomit        = 18,
	[Error]                        = 19,
	EPrisonerMontage__VomitForced  = 20,
	IntProperty                    = 21,
	EPrisonerMontage__SearchObject = 22,
	tProperty                      = 23,
	EPrisonerMontage__SearchPrisoner = 24,
	roperty                        = 25,
	EPrisonerMontage__SearchZombie = 26,
	perty                          = 27,
	EPrisonerMontage__PatchWounds  = 28,
	rty                            = 29,
	EPrisonerMontage__PatchWoundsEnd = 30,
	y                              = 31,
	EPrisonerMontage__DrinkInteraction = 32,
	
                              = 33,
	EPrisonerMontage__Eat          = 34,
	BoolProperty                   = 35,
	EPrisonerMontage__EatCan       = 36,
	olPropertybFloatProperty      = 37,
	EPrisonerMontage__Drink        = 38,
	PropertybFloatProperty        = 39,
	EPrisonerMontage__Throw        = 40,
	opertybFloatProperty          = 41,
	EPrisonerMontage__SwapWeapons  = 42,
	ertybFloatProperty            = 43,
	EPrisonerMontage__ChopTree     = 44,
	tybFloatProperty              = 45,
	EPrisonerMontage__ChopTreeEnd  = 46,
	bFloatProperty                = 47,
	EPrisonerMontage__ChopLog      = 48,
	FloatProperty                  = 49,
	EPrisonerMontage__ChopLogEnd   = 50,
	oatProperty                    = 51,
	EPrisonerMontage__SwapItemsNotWeaponToNotWeapon = 52,
	tProperty01                    = 53,
	EPrisonerMontage__SwapItemsWeaponToWeapon = 54,
	roperty01                      = 55,
	EPrisonerMontage__SwapItemsNotWeaponToWeapon = 56,
	perty01                        = 57,
	EPrisonerMontage__SwapItemsWeaponToNotWeapon = 58,
	rty01                          = 59,
	EPrisonerMontage__Craft        = 60,
	y01                            = 61,
	EPrisonerMontage__Uncraft      = 62,
	[Error]01                      = 63,
	EPrisonerMontage__CheckTime    = 64,
	ObjectProperty                 = 65,
	EPrisonerMontage__CheckTimeWhileItemInHands = 66,
	jectPropertyNameProperty     = 67,
	EPrisonerMontage__CheckTimeWhileWeaponInHands = 68,
	ctPropertyNameProperty       = 69,
	EPrisonerMontage__GestureShowFinger = 70,
	PropertyNameProperty         = 71,
	EPrisonerMontage__GestureStandSurrender = 72,
	opertyNameProperty           = 73,
	EPrisonerMontage__GestureWaveHi = 74,
	ertyNameProperty             = 75,
	EPrisonerMontage__GestureYouAreDead = 76,
	tyNameProperty               = 77,
	EPrisonerMontage__GestureFY    = 78,
	NameProperty                 = 79,
	EPrisonerMontage__GesturePoint = 80,
	NameProperty                   = 81,
	EPrisonerMontage__GestureHeart = 82,
	meProperty                     = 83,
	EPrisonerMontage__GestureBallpalm = 84
};


// Enum ConZ.EWeaponAnimationPose
enum class EWeaponAnimationPose : uint8_t
{
	EWeaponAnimationPose__None     = 0,
	None                           = 1,
	EWeaponAnimationPose__Relaxed  = 2,
	neByteProperty‘IntProperty  = 3,
	EWeaponAnimationPose__AimingHip = 4,
	ByteProperty‘IntProperty    = 5,
	EWeaponAnimationPose__AimingDownTheSights = 6,
	ByteProperty                   = 7,
	EWeaponAnimationPose__AimingDownTheSightsStill = 8,
	teProperty‘IntProperty        = 9,
	EWeaponAnimationPose__AimingDownTheSightsWalking = 10,
	Property‘IntProperty          = 11,
	EWeaponAnimationPose__AimingDownTheSightsLimpingWalking = 12,
	operty‘IntProperty            = 13,
	EWeaponAnimationPose__Count    = 14,
	erty‘IntProperty              = 15,
	EWeaponAnimationPose__EWeaponAnimationPose_MAX = 16,
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


// Enum ConZ.EPrisonerAnimationSet
enum class EPrisonerAnimationSet : uint8_t
{
	EPrisonerAnimationSet__Base    = 0,
	None                           = 1,
	EPrisonerAnimationSet__Rifle   = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerAnimationSet__RifleRelaxed = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerAnimationSet__UnarmedCombat = 6,
	ByteProperty                   = 7,
	EPrisonerAnimationSet__Handgun = 8,
	teProperty‘IntProperty        = 9,
	EPrisonerAnimationSet__BowRelaxed = 10,
	Property‘IntProperty          = 11,
	EPrisonerAnimationSet__Bow     = 12,
	operty‘IntProperty            = 13,
	EPrisonerAnimationSet__CarryingItem = 14,
	erty‘IntProperty              = 15,
	EPrisonerAnimationSet__HandsBound = 16,
	ty‘IntProperty                = 17,
	EPrisonerAnimationSet__BaseLimping = 18,
	[Error]                        = 19
};


// Enum ConZ.EPrisonerReplicatedComponent
enum class EPrisonerReplicatedComponent : uint8_t
{
	EPrisonerReplicatedComponent__LifeComponent = 0,
	None                           = 1,
	EPrisonerReplicatedComponent__SkillComponent = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerReplicatedComponent__InventoryComponent = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerReplicatedComponent__HitReactComponent = 6,
	ByteProperty                   = 7,
	EPrisonerReplicatedComponent__InteractionComponent = 8,
	teProperty‘IntProperty        = 9,
	EPrisonerReplicatedComponent__Count = 10,
	Property‘IntProperty          = 11,
	EPrisonerReplicatedComponent__EPrisonerReplicatedComponent_MAX = 12,
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


// Enum ConZ.EPrisonerThirdPersonSubview
enum class EPrisonerThirdPersonSubview : uint8_t
{
	EPrisonerThirdPersonSubview__Standing = 0,
	None                           = 1,
	EPrisonerThirdPersonSubview__Crouching = 2,
	neByteProperty‘IntProperty  = 3,
	EPrisonerThirdPersonSubview__Prone = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerThirdPersonSubview__StandingMelee = 6,
	ByteProperty                   = 7,
	EPrisonerThirdPersonSubview__StandingAiming = 8,
	teProperty‘IntProperty        = 9,
	EPrisonerThirdPersonSubview__CrouchingAiming = 10,
	Property‘IntProperty          = 11,
	EPrisonerThirdPersonSubview__ProneAiming = 12,
	operty‘IntProperty            = 13,
	EPrisonerThirdPersonSubview__Ragdoll = 14,
	erty‘IntProperty              = 15,
	EPrisonerThirdPersonSubview__NarrowLadder = 16,
	ty‘IntProperty                = 17,
	EPrisonerThirdPersonSubview__Swimming = 18,
	[Error]                        = 19,
	EPrisonerThirdPersonSubview__Diving = 20,
	IntProperty                    = 21,
	EPrisonerThirdPersonSubview__ClimbingWindow = 22,
	tProperty                      = 23,
	EPrisonerThirdPersonSubview__Defecating = 24,
	roperty                        = 25,
	EPrisonerThirdPersonSubview__Count = 26,
	perty                          = 27,
	EPrisonerThirdPersonSubview__EPrisonerThirdPersonSubview_MAX = 28,
	rty                            = 29,
	EPlacementAllowedStatus__NotAllowedTeleportSpot = 30,
	y                              = 31,
	EPlacementAllowedStatus__NotAllowedHitCharacter = 32,
	
                              = 33,
	EPlacementAllowedStatus__NotAllowedHitItem = 34,
	BoolProperty                   = 35
};


// Enum ConZ.EPlayerSideView
enum class EPlayerSideView : uint8_t
{
	EPlayerSideView__Left          = 0,
	None                           = 1,
	EPlayerSideView__Right         = 2,
	neByteProperty‘IntProperty  = 3,
	EPlayerSideView__Count         = 4,
	ByteProperty‘IntProperty    = 5,
	EPlayerSideView__EPlayerSideView_MAX = 6,
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


// Enum ConZ.EPenetrationType
enum class EPenetrationType : uint8_t
{
	EPenetrationType__None         = 0,
	None                           = 1,
	EPenetrationType__Entry        = 2,
	neByteProperty‘IntProperty  = 3,
	EPenetrationType__Exit         = 4,
	ByteProperty‘IntProperty    = 5,
	EPenetrationType__Both         = 6,
	ByteProperty                   = 7,
	EPenetrationType__EPenetrationType_MAX = 8,
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


// Enum ConZ.EBallisticDragModel
enum class EBallisticDragModel : uint8_t
{
	EBallisticDragModel__G1        = 0,
	None                           = 1,
	EBallisticDragModel__G2        = 2,
	neByteProperty‘IntProperty  = 3,
	EBallisticDragModel__G5        = 4,
	ByteProperty‘IntProperty    = 5,
	EBallisticDragModel__G6        = 6,
	ByteProperty                   = 7,
	EBallisticDragModel__G7        = 8,
	teProperty‘IntProperty        = 9,
	EBallisticDragModel__G8        = 10,
	Property‘IntProperty          = 11,
	EBallisticDragModel__EBallisticDragModel_MAX = 12,
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


// Enum ConZ.EQuiverActiveMesh
enum class EQuiverActiveMesh : uint8_t
{
	EQuiverActiveMesh__Static      = 0,
	None                           = 1,
	EQuiverActiveMesh__Skeletal    = 2,
	neByteProperty‘IntProperty  = 3,
	EQuiverActiveMesh__SkeletalAlternative = 4,
	ByteProperty‘IntProperty    = 5,
	EQuiverActiveMesh__EQuiverActiveMesh_MAX = 6,
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


// Enum ConZ.ERepairType
enum class ERepairType : uint8_t
{
	ERepairType__None              = 0,
	None                           = 1,
	ERepairType__RepairHealth      = 2,
	neByteProperty‘IntProperty  = 3,
	ERepairType__ERepairType_MAX   = 4,
	ByteProperty‘IntProperty    = 5,
	EPrisonerAnimationSet__UnarmedCombat = 6,
	ByteProperty                   = 7,
	EPrisonerAnimationSet__Handgun = 8,
	teProperty‘IntProperty        = 9,
	EPrisonerAnimationSet__BowRelaxed = 10,
	Property‘IntProperty          = 11,
	EPrisonerAnimationSet__Bow     = 12,
	operty‘IntProperty            = 13,
	EPrisonerAnimationSet__CarryingItem = 14,
	erty‘IntProperty              = 15,
	EPrisonerAnimationSet__HandsBound = 16,
	ty‘IntProperty                = 17,
	EPrisonerAnimationSet__BaseLimping = 18,
	[Error]                        = 19
};


// Enum ConZ.EScopingView
enum class EScopingView : uint8_t
{
	EScopingView__FirstPerson      = 0,
	None                           = 1,
	EScopingView__ThirdPerson      = 2,
	neByteProperty‘IntProperty  = 3,
	EScopingView__EScopingView_MAX = 4,
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


// Enum ConZ.EScopingStance
enum class EScopingStance : uint8_t
{
	EScopingStance__Standing       = 0,
	None                           = 1,
	EScopingStance__Crouching      = 2,
	neByteProperty‘IntProperty  = 3,
	EScopingStance__Prone          = 4,
	ByteProperty‘IntProperty    = 5,
	EScopingStance__EScopingStance_MAX = 6,
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


// Enum ConZ.ESentryAttackMode
enum class ESentryAttackMode : uint8_t
{
	ESentryAttackMode__None        = 0,
	None                           = 1,
	ESentryAttackMode__Melee       = 2,
	neByteProperty‘IntProperty  = 3,
	ESentryAttackMode__MediumRange = 4,
	ByteProperty‘IntProperty    = 5,
	ESentryAttackMode__LongRange   = 6,
	ByteProperty                   = 7,
	ESentryAttackMode__ESentryAttackMode_MAX = 8,
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


// Enum ConZ.ESentryStance
enum class ESentryStance : uint8_t
{
	ESentryStance__None            = 0,
	None                           = 1,
	ESentryStance__Relaxed         = 2,
	neByteProperty‘IntProperty  = 3,
	ESentryStance__Alerted         = 4,
	ByteProperty‘IntProperty    = 5,
	ESentryStance__Combat          = 6,
	ByteProperty                   = 7,
	ESentryStance__Offline         = 8,
	teProperty‘IntProperty        = 9,
	ESentryStance__ESentryStance_MAX = 10,
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


// Enum ConZ.ESentryMovementPace2
enum class ESentryMovementPace2 : uint8_t
{
	ESentryMovementPace2__Walking  = 0,
	None                           = 1,
	ESentryMovementPace2__Running  = 2,
	neByteProperty‘IntProperty  = 3,
	ESentryMovementPace2__Count    = 4,
	ByteProperty‘IntProperty    = 5,
	ESentryMovementPace2__ESentryMovementPace2_MAX = 6,
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


// Enum ConZ.ESentryState2
enum class ESentryState2 : uint8_t
{
	ESentryState2__None            = 0,
	None                           = 1,
	ESentryState2__Initial         = 2,
	neByteProperty‘IntProperty  = 3,
	ESentryState2__Patrolling_Walking = 4,
	ByteProperty‘IntProperty    = 5,
	ESentryState2__Patrolling_CheckSurroundings = 6,
	ByteProperty                   = 7,
	ESentryState2__InvestigatingLocation = 8,
	teProperty‘IntProperty        = 9,
	ESentryState2__InvestigatingBuilding = 10,
	Property‘IntProperty          = 11,
	ESentryState2__GuardLocation   = 12,
	operty‘IntProperty            = 13,
	ESentryState2__EnemySpotted    = 14,
	erty‘IntProperty              = 15,
	ESentryState2__Alerted         = 16,
	ty‘IntProperty                = 17,
	ESentryState2__ObserveEnemyMovement = 18,
	[Error]                        = 19,
	ESentryState2__Combat          = 20,
	IntProperty                    = 21,
	ESentryState2__Combat_LostSight = 22,
	tProperty                      = 23,
	ESentryState2__DestroyingVehicle = 24,
	roperty                        = 25,
	ESentryState2__Count           = 26,
	perty                          = 27,
	ESentryState2__ESentryState2_MAX = 28,
	rty                            = 29,
	None01                         = 30,
	None02                         = 31,
	None03                         = 32,
	None04                         = 33,
	None05                         = 34,
	None06                         = 35
};


// Enum ConZ.ESentryThirdPersonSubview
enum class ESentryThirdPersonSubview : uint8_t
{
	ESentryThirdPersonSubview__Standing = 0,
	None                           = 1,
	ESentryThirdPersonSubview__StandingAiming = 2,
	neByteProperty‘IntProperty  = 3,
	ESentryThirdPersonSubview__Count = 4,
	ByteProperty‘IntProperty    = 5,
	ESentryThirdPersonSubview__ESentryThirdPersonSubview_MAX = 6,
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


// Enum ConZ.ESortType
enum class ESortType : uint8_t
{
	ESortType__None                = 0,
	None                           = 1,
	ESortType__Host                = 2,
	neByteProperty‘IntProperty  = 3,
	ESortType__Password            = 4,
	ByteProperty‘IntProperty    = 5,
	ESortType__Mode                = 6,
	ByteProperty                   = 7,
	ESortType__Version             = 8,
	teProperty‘IntProperty        = 9
};


// Enum ConZ.EServerBrowserTab
enum class EServerBrowserTab : uint8_t
{
	EServerBrowserTab__Internet    = 0,
	None                           = 1,
	EServerBrowserTab__Favorites   = 2,
	neByteProperty‘IntProperty  = 3,
	EServerBrowserTab__LastPlayed  = 4,
	ByteProperty‘IntProperty    = 5,
	EServerBrowserTab__EServerBrowserTab_MAX = 6,
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


// Enum ConZ.ESicknessState
enum class ESicknessState : uint8_t
{
	ESicknessState__Sick           = 0,
	None                           = 1,
	ESicknessState__Cured          = 2,
	neByteProperty‘IntProperty  = 3,
	ESicknessState__Treated        = 4,
	ByteProperty‘IntProperty    = 5,
	ESicknessState__Untreated      = 6,
	ByteProperty                   = 7,
	ESicknessState__Done           = 8,
	teProperty‘IntProperty        = 9,
	ESicknessState__ESicknessState_MAX = 10,
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


// Enum ConZ.ESimpleAnimalMode
enum class ESimpleAnimalMode : uint8_t
{
	ESimpleAnimalMode__Wander      = 0,
	None                           = 1,
	ESimpleAnimalMode__Flee        = 2,
	neByteProperty‘IntProperty  = 3,
	ESimpleAnimalMode__ESimpleAnimalMode_MAX = 4,
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


// Enum ConZ.ESkillReplicationID
enum class ESkillReplicationID : uint8_t
{
	ESkillReplicationID__None      = 0,
	None                           = 1,
	ESkillReplicationID__EnduranceSkill = 2,
	neByteProperty‘IntProperty  = 3,
	ESkillReplicationID__ResistanceSkill = 4,
	ByteProperty‘IntProperty    = 5,
	ESkillReplicationID__RunningSkill = 6,
	ByteProperty                   = 7,
	ESkillReplicationID__SwimmingSkill = 8,
	teProperty‘IntProperty        = 9,
	ESkillReplicationID__MedicalSkill = 10,
	Property‘IntProperty          = 11,
	ESkillReplicationID__AwarenessSkill = 12,
	operty‘IntProperty            = 13,
	ESkillReplicationID__StealthSkill = 14,
	erty‘IntProperty              = 15,
	ESkillReplicationID__AnimalHandlingSkill = 16,
	ty‘IntProperty                = 17,
	ESkillReplicationID__CookingSkill = 18,
	[Error]                        = 19,
	ESkillReplicationID__SurvivalSkill = 20,
	IntProperty                    = 21,
	ESkillReplicationID__BioChemSkill = 22,
	tProperty                      = 23,
	ESkillReplicationID__BoxingSkill = 24,
	roperty                        = 25,
	ESkillReplicationID__MeleeWeaponsSkill = 26,
	perty                          = 27
};


// Enum ConZ.ESurvivalStatsSubcategory
enum class ESurvivalStatsSubcategory : uint8_t
{
	ESurvivalStatsSubcategory__General = 0,
	None                           = 1,
	ESurvivalStatsSubcategory__Food = 2,
	neByteProperty‘IntProperty  = 3,
	ESurvivalStatsSubcategory__Hunting = 4,
	ByteProperty‘IntProperty    = 5,
	ESurvivalStatsSubcategory__Travel = 6,
	ByteProperty                   = 7,
	ESurvivalStatsSubcategory__Metabolism = 8,
	teProperty‘IntProperty        = 9,
	ESurvivalStatsSubcategory__Crafting = 10,
	Property‘IntProperty          = 11,
	ESurvivalStatsSubcategory__Combat = 12,
	operty‘IntProperty            = 13,
	ESurvivalStatsSubcategory__Events = 14,
	erty‘IntProperty              = 15,
	ESurvivalStatsSubcategory__ESurvivalStatsSubcategory_MAX = 16,
	ty‘IntProperty                = 17,
	ESkillReplicationID__CookingSkill = 18,
	[Error]                        = 19,
	ESkillReplicationID__SurvivalSkill = 20,
	IntProperty                    = 21,
	ESkillReplicationID__BioChemSkill = 22,
	tProperty                      = 23,
	ESkillReplicationID__BoxingSkill = 24,
	roperty                        = 25,
	ESkillReplicationID__MeleeWeaponsSkill = 26,
	perty                          = 27
};


// Enum ConZ.ESurvivalStatsCategory
enum class ESurvivalStatsCategory : uint8_t
{
	ESurvivalStatsCategory__Survival = 0,
	None                           = 1,
	ESurvivalStatsCategory__Weapons = 2,
	neByteProperty‘IntProperty  = 3,
	ESurvivalStatsCategory__Combat = 4,
	ByteProperty‘IntProperty    = 5,
	ESurvivalStatsCategory__ESurvivalStatsCategory_MAX = 6,
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


// Enum ConZ.EItemThrowingBehavior
enum class EItemThrowingBehavior : uint8_t
{
	EItemThrowingBehavior__None    = 0,
	None                           = 1,
	EItemThrowingBehavior__Default = 2,
	neByteProperty‘IntProperty  = 3,
	EItemThrowingBehavior__Piercing = 4,
	ByteProperty‘IntProperty    = 5,
	EItemThrowingBehavior__Fragile = 6,
	ByteProperty                   = 7,
	EItemThrowingBehavior__Sticky  = 8,
	teProperty‘IntProperty        = 9,
	EItemThrowingBehavior__EItemThrowingBehavior_MAX = 10,
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


// Enum ConZ.EBleedingSeverity
enum class EBleedingSeverity : uint8_t
{
	EBleedingSeverity__NoBleeding  = 0,
	None                           = 1,
	EBleedingSeverity__VeryLight   = 2,
	neByteProperty‘IntProperty  = 3,
	EBleedingSeverity__Light       = 4,
	ByteProperty‘IntProperty    = 5,
	EBleedingSeverity__Moderate    = 6,
	ByteProperty                   = 7,
	EBleedingSeverity__Heavy       = 8,
	teProperty‘IntProperty        = 9,
	EBleedingSeverity__Severe      = 10,
	Property‘IntProperty          = 11,
	EBleedingSeverity__EBleedingSeverity_MAX = 12,
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


// Enum ConZ.ETrapTriggerType
enum class ETrapTriggerType : uint8_t
{
	ETrapTriggerType__None         = 0,
	None                           = 1,
	ETrapTriggerType__ProximityTrigger = 2,
	neByteProperty‘IntProperty  = 3,
	ETrapTriggerType__LaserTrigger = 4,
	ByteProperty‘IntProperty    = 5,
	ETrapTriggerType__TripwireTrigger = 6,
	ByteProperty                   = 7,
	ETrapTriggerType__ETrapTriggerType_MAX = 8,
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


// Enum ConZ.EUnarmedCombatInput
enum class EUnarmedCombatInput : uint8_t
{
	EUnarmedCombatInput__WalkForward = 0,
	None                           = 1,
	EUnarmedCombatInput__WalkBackward = 2,
	neByteProperty‘IntProperty  = 3,
	EUnarmedCombatInput__WalkRight = 4,
	ByteProperty‘IntProperty    = 5,
	EUnarmedCombatInput__WalkLeft  = 6,
	ByteProperty                   = 7,
	EUnarmedCombatInput__Punch     = 8,
	teProperty‘IntProperty        = 9,
	EUnarmedCombatInput__Kick      = 10,
	Property‘IntProperty          = 11
};


// Enum ConZ.EUserProfileType
enum class EUserProfileType : uint8_t
{
	EUserProfileType__Singleplayer = 0,
	None                           = 1,
	EUserProfileType__MultiplayerAuthority = 2,
	neByteProperty‘IntProperty  = 3,
	EUserProfileType__MultiplayerCache = 4,
	ByteProperty‘IntProperty    = 5,
	EUserProfileType__EUserProfileType_MAX = 6,
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


// Enum ConZ.EVehicleEngineState
enum class EVehicleEngineState : uint8_t
{
	EVehicleEngineState__Unavailable = 0,
	None                           = 1,
	EVehicleEngineState__TurnedOff = 2,
	neByteProperty‘IntProperty  = 3,
	EVehicleEngineState__StartingViaIgnition = 4,
	ByteProperty‘IntProperty    = 5,
	EVehicleEngineState__StartingViaMotion = 6,
	ByteProperty                   = 7,
	EVehicleEngineState__ReadyDelay = 8,
	teProperty‘IntProperty        = 9,
	EVehicleEngineState__Ready     = 10,
	Property‘IntProperty          = 11,
	EVehicleEngineState__FailedToStartDelay = 12,
	operty‘IntProperty            = 13,
	EVehicleEngineState__FailedToStart = 14,
	erty‘IntProperty              = 15,
	EVehicleEngineState__FailedToStartNoFuelDelay = 16,
	ty‘IntProperty                = 17,
	EVehicleEngineState__FailedToStartNoFuel = 18,
	[Error]                        = 19,
	EVehicleEngineState__FailedToStartNoBatteryDelay = 20,
	IntProperty                    = 21,
	EVehicleEngineState__FailedToStartNoBattery = 22,
	tProperty                      = 23,
	EVehicleEngineState__StalledDelay = 24,
	roperty                        = 25,
	EVehicleEngineState__Stalled   = 26,
	perty                          = 27,
	EVehicleEngineState__EVehicleEngineState_MAX = 28,
	rty                            = 29,
	None01                         = 30,
	None02                         = 31,
	None03                         = 32,
	None04                         = 33,
	None05                         = 34,
	None06                         = 35
};


// Enum ConZ.EVehicleSeatType
enum class EVehicleSeatType : uint8_t
{
	EVehicleSeatType__Driver       = 0,
	None                           = 1,
	EVehicleSeatType__Passenger    = 2,
	neByteProperty‘IntProperty  = 3,
	EVehicleSeatType__EVehicleSeatType_MAX = 4,
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


// Enum ConZ.EWaypointTraverseType
enum class EWaypointTraverseType : uint8_t
{
	EWaypointTraverseType__Clockwise = 0,
	None                           = 1,
	EWaypointTraverseType__CounterClockwise = 2,
	neByteProperty‘IntProperty  = 3,
	EWaypointTraverseType__Random  = 4,
	ByteProperty‘IntProperty    = 5,
	EWaypointTraverseType__EWaypointTraverseType_MAX = 6,
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


// Enum ConZ.EAnimalWaypointType
enum class EAnimalWaypointType : uint8_t
{
	EAnimalWaypointType__PassThrough = 0,
	None                           = 1,
	EAnimalWaypointType__Wait      = 2,
	neByteProperty‘IntProperty  = 3,
	EAnimalWaypointType__Rest      = 4,
	ByteProperty‘IntProperty    = 5,
	EAnimalWaypointType__Eat       = 6,
	ByteProperty                   = 7,
	EAnimalWaypointType__All       = 8,
	teProperty‘IntProperty        = 9,
	EAnimalWaypointType__EAnimalWaypointType_MAX = 10,
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


// Enum ConZ.EWeaponAnimationCurve
enum class EWeaponAnimationCurve : uint8_t
{
	EWeaponAnimationCurve__DrawAmount = 0,
	None                           = 1,
	EWeaponAnimationCurve__StrengthAmount = 2,
	neByteProperty‘IntProperty  = 3,
	EWeaponAnimationCurve__Count   = 4,
	ByteProperty‘IntProperty    = 5,
	EWeaponAnimationCurve__EWeaponAnimationCurve_MAX = 6,
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


// Enum ConZ.EBowAimingTestType
enum class EBowAimingTestType : uint8_t
{
	EBowAimingTestType__DotOnly    = 0,
	None                           = 1,
	EBowAimingTestType__ViewOnly   = 2,
	neByteProperty‘IntProperty  = 3,
	EBowAimingTestType__DotAndView = 4,
	ByteProperty‘IntProperty    = 5,
	EBowAimingTestType__EBowAimingTestType_MAX = 6,
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


// Enum ConZ.EBowDrawPercentage
enum class EBowDrawPercentage : uint8_t
{
	EBowDrawPercentage__Draw50percent = 0,
	None                           = 1,
	EBowDrawPercentage__Draw75percent = 2,
	neByteProperty‘IntProperty  = 3,
	EBowDrawPercentage__Draw100percent = 4,
	ByteProperty‘IntProperty    = 5,
	EBowDrawPercentage__Count      = 6,
	ByteProperty                   = 7,
	EBowDrawPercentage__EBowDrawPercentage_MAX = 8,
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


// Enum ConZ.EWeaponBowState
enum class EWeaponBowState : uint8_t
{
	EWeaponBowState__None          = 0,
	None                           = 1,
	EWeaponBowState__InsertArrow   = 2,
	neByteProperty‘IntProperty  = 3,
	EWeaponBowState__RemoveArrow   = 4,
	ByteProperty‘IntProperty    = 5,
	EWeaponBowState__Draw          = 6,
	ByteProperty                   = 7,
	EWeaponBowState__CancelFiring  = 8,
	teProperty‘IntProperty        = 9
};


// Enum ConZ.EWeaponKeyInput
enum class EWeaponKeyInput : uint8_t
{
	EWeaponKeyInput__ToggleLight   = 0,
	None                           = 1,
	EWeaponKeyInput__EWeaponKeyInput_MAX = 2,
	neByteProperty‘IntProperty  = 3,
	None01                         = 4,
	None02                         = 5,
	None03                         = 6,
	None04                         = 7,
	None05                         = 8,
	None06                         = 9,
	band_Christmas_Headband_C      = 10,
	None07                         = 11,
	None08                         = 12,
	dgear_Disposable_Mask_Disposable_Mask_C = 13,
	None09                         = 14,
	None10                         = 15,
	None11                         = 16,
	None12                         = 17
};


// Enum ConZ.EReloadWeaponSequence
enum class EReloadWeaponSequence : uint8_t
{
	EReloadWeaponSequence__None    = 0,
	None                           = 1,
	EReloadWeaponSequence__InsertMagazine = 2,
	neByteProperty‘IntProperty  = 3,
	EReloadWeaponSequence__RemoveMagazineInstertMagazine = 4,
	ByteProperty‘IntProperty    = 5,
	EReloadWeaponSequence__InstertCartridge = 6,
	ByteProperty                   = 7,
	EReloadWeaponSequence__RemoveMagazineInstertCartridge = 8,
	teProperty‘IntProperty        = 9,
	EReloadWeaponSequence__EReloadWeaponSequence_MAX = 10,
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


// Enum ConZ.EWeaponAttachmentActionType
enum class EWeaponAttachmentActionType : uint8_t
{
	EWeaponAttachmentActionType__Add = 0,
	None                           = 1,
	EWeaponAttachmentActionType__Remove = 2,
	neByteProperty‘IntProperty  = 3,
	EWeaponAttachmentActionType__Swap = 4,
	ByteProperty‘IntProperty    = 5,
	EWeaponAttachmentActionType__Count = 6,
	ByteProperty                   = 7,
	EWeaponAttachmentActionType__EWeaponAttachmentActionType_MAX = 8,
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


// Enum ConZ.EWeaponType
enum class EWeaponType : uint8_t
{
	EWeaponType__Rifle             = 0,
	None                           = 1,
	EWeaponType__Handgun           = 2,
	neByteProperty‘IntProperty  = 3,
	EWeaponType__Bow               = 4,
	ByteProperty‘IntProperty    = 5,
	EWeaponType__Count             = 6,
	ByteProperty                   = 7,
	EWeaponType__EWeaponType_MAX   = 8,
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


// Enum ConZ.EDayPeriod
enum class EDayPeriod : uint8_t
{
	EDayPeriod__Nighttime          = 0,
	None                           = 1,
	EDayPeriod__Dawn               = 2,
	neByteProperty‘IntProperty  = 3,
	EDayPeriod__Daytime            = 4,
	ByteProperty‘IntProperty    = 5,
	EDayPeriod__Dusk               = 6,
	ByteProperty                   = 7,
	EDayPeriod__EDayPeriod_MAX     = 8,
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


// Enum ConZ.EWidgetType
enum class EWidgetType : uint8_t
{
	EWidgetType__InteractionWidgetClass = 0,
	None                           = 1,
	EWidgetType__InteractionContainerWidgetClass = 2,
	neByteProperty‘IntProperty  = 3,
	EWidgetType__ItemWidgetClass   = 4,
	ByteProperty‘IntProperty    = 5,
	EWidgetType__InventoryWidgetClass = 6,
	ByteProperty                   = 7,
	EWidgetType__InventorySlotWidgetClass = 8,
	teProperty‘IntProperty        = 9,
	EWidgetType__WarningWidgetClass = 10,
	Property‘IntProperty          = 11,
	EWidgetType__HudWidgetClass    = 12,
	operty‘IntProperty            = 13,
	EWidgetType__LoadingWidgetClass = 14,
	erty‘IntProperty              = 15,
	EWidgetType__LoadingIconWidgetClass = 16,
	ty‘IntProperty                = 17,
	EWidgetType__SpawnScreenWidgetClass = 18,
	[Error]                        = 19,
	EWidgetType__WaypointScreenWidgetClass = 20,
	IntProperty                    = 21,
	EWidgetType__HoverPanelWidgetClass = 22,
	tProperty                      = 23,
	EWidgetType__ActionProgressWidgetClass = 24,
	roperty                        = 25,
	EWidgetType__ItemSelectionWidgetClass = 26,
	perty                          = 27,
	EWidgetType__ExamineWidgetClass = 28,
	rty                            = 29,
	EWidgetType__HandsInventoryWidgetClass = 30,
	y                              = 31,
	EWidgetType__GenericItemInventoryWidgetClass = 32,
	
                              = 33,
	EWidgetType__InventoryContainersWidgetClass = 34,
	BoolProperty                   = 35,
	EWidgetType__CombinedInventoryWidgetClass = 36,
	olPropertybFloatProperty      = 37,
	EWidgetType__TeamInvitationWidgetClass = 38,
	PropertybFloatProperty        = 39,
	EWidgetType__CraftingInfoWidgetClass = 40,
	opertybFloatProperty          = 41,
	EWidgetType__CraftingComponentWidgetClass = 42,
	ertybFloatProperty            = 43,
	EWidgetType__CraftingRecipeWidgetClass = 44,
	tybFloatProperty              = 45,
	EWidgetType__EmptySlotWidgetClass = 46,
	bFloatProperty                = 47,
	EWidgetType__TeamInfoWidgetClass = 48,
	FloatProperty                  = 49,
	EWidgetType__TeammateNameWidgetClass = 50,
	oatProperty                    = 51,
	EWidgetType__PreviousNextSwitchWidgetClass = 52,
	tProperty01                    = 53,
	EWidgetType__VicinityItemContainerWidgetClass = 54,
	roperty01                      = 55,
	EWidgetType__QuickAccessItemWidget = 56,
	perty01                        = 57,
	EWidgetType__GameEventPanelWidgetClass = 58,
	rty01                          = 59,
	EWidgetType__GameEventCardWidgetClass = 60,
	y01                            = 61,
	EWidgetType__GameEventScoreboardWidgetClass = 62
};


// Enum ConZ.EWolfAttackState
enum class EWolfAttackState : uint8_t
{
	EWolfAttackState__Peace        = 0,
	None                           = 1,
	EWolfAttackState__Chasing      = 2,
	neByteProperty‘IntProperty  = 3,
	EWolfAttackState__Attacking    = 4,
	ByteProperty‘IntProperty    = 5,
	EWolfAttackState__EWolfAttackState_MAX = 6,
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


// Enum ConZ.ECraftingMarkerMode
enum class ECraftingMarkerMode : uint8_t
{
	ECraftingMarkerMode__Marker    = 0,
	None                           = 1,
	ECraftingMarkerMode__FullInfo  = 2,
	neByteProperty‘IntProperty  = 3,
	ECraftingMarkerMode__ECraftingMarkerMode_MAX = 4,
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


// Enum ConZ.EZombieRagdollAutoRecoveryType
enum class EZombieRagdollAutoRecoveryType : uint8_t
{
	EZombieRagdollAutoRecoveryType__None = 0,
	None                           = 1,
	EZombieRagdollAutoRecoveryType__WhenAtRest = 2,
	neByteProperty‘IntProperty  = 3,
	EZombieRagdollAutoRecoveryType__AfterTimeSpan = 4,
	ByteProperty‘IntProperty    = 5,
	EZombieRagdollAutoRecoveryType__WhenAtRestAfterTimeSpan = 6,
	ByteProperty                   = 7,
	EZombieRagdollAutoRecoveryType__EZombieRagdollAutoRecoveryType_MAX = 8,
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


// Enum ConZ.EZombieTurnMontage
enum class EZombieTurnMontage : uint8_t
{
	EZombieTurnMontage__RelaxedIdle = 0,
	None                           = 1,
	EZombieTurnMontage__AlertedIdle = 2,
	neByteProperty‘IntProperty  = 3,
	EZombieTurnMontage__CombatIdle = 4,
	ByteProperty‘IntProperty    = 5,
	EZombieTurnMontage__RelaxedIdleToAlertedIdle = 6,
	ByteProperty                   = 7,
	EZombieTurnMontage__Count      = 8,
	teProperty‘IntProperty        = 9,
	EZombieTurnMontage__EZombieTurnMontage_MAX = 10,
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


// Enum ConZ.EZombieStance
enum class EZombieStance : uint8_t
{
	EZombieStance__Relaxed         = 0,
	None                           = 1,
	EZombieStance__Lying           = 2,
	neByteProperty‘IntProperty  = 3,
	EZombieStance__Alerted         = 4,
	ByteProperty‘IntProperty    = 5,
	EZombieStance__Combat          = 6,
	ByteProperty                   = 7,
	EZombieStance__EZombieStance_MAX = 8,
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

// ScriptStruct ConZ.AdminCommandArgumentDescription
// 0x0020
struct FAdminCommandArgumentDescription
{
	struct FString                                     Description;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               ShowCompletionValuesInHelpText;                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UClass*                                      Completion;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.AttachmentSocketDataItem
// 0x0018
struct FAttachmentSocketDataItem
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MountType;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      MountedItem;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.AttachmentSocket
// 0x0010
struct FAttachmentSocket
{
	TArray<struct FAttachmentSocketDataItem>           Items;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.AttachmentSocketOffset
// 0x0020
struct FAttachmentSocketOffset
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemLocation
// 0x000E
struct FItemLocation
{
	bool                                               Coastal;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Continantal;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Mountain;                                                 // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Urban;                                                    // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Rural;                                                    // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Industrial;                                               // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Police;                                                   // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MilitaryBasic;                                            // 0x0007(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MilitaryMedium;                                           // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MilitaryAdvanced;                                         // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               MilitaryWW2;                                              // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Sport;                                                    // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Market;                                                   // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               GasStation;                                               // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemMotionNoise
// 0x0008
struct FItemMotionNoise
{
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemInventoryHandlingSounds
// 0x0008
struct FItemInventoryHandlingSounds
{
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.VisibilityReplication
// 0x0008
struct FVisibilityReplication
{
	bool                                               Value;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                RepHelper;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.InventoryStackData
// 0x0080
struct FInventoryStackData
{
	class UClass*                                      _stackClass;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              _approximateCount;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              _approximateMaxCount;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              _weight;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<unsigned char>                              _data;                                                    // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
};

// ScriptStruct ConZ.WidgetDisplayInfo
// 0x000C
struct FWidgetDisplayInfo
{
	EWidgetDisplayInfoType                             DisplayType;                                              // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                First;                                                    // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Second;                                                   // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.HitEffects
// 0x0038
struct FHitEffects
{
	float                                              SpeedThreshold;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UParticleSystem*                             ParticleSystem;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ParticlesScale;                                           // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShake;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraShakeScale;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.EnvironmentDescription
// 0x0002
struct FEnvironmentDescription
{
	EEnvironmentClass                                  EnvironmentClass;                                         // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnderground;                                            // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.MeleeWeaponDesc
// 0x0028
struct FMeleeWeaponDesc
{
	float                                              Damage;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageAbsorptionMultiplier;                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Sharpness;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              KnockoutChance;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DamageMagnitudeChange;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ECharacterImpactSourceSoundCategory                ImpactSoundCategory;                                      // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	class UProjectileImpactEffects*                    ImpactEffects;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                HitReact;                                                 // 0x0020(0x0008) (Edit)
};

// ScriptStruct ConZ.MeleeAttackCapsule
// 0x0070
struct FMeleeAttackCapsule
{
	TWeakObjectPtr<class AActor>                       AttachParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Attachment;                                               // 0x0008(0x0008)
	struct FTransform                                  RelativeTransform;                                        // 0x0010(0x0030) (IsPlainOldData)
	float                                              UnscaledRadius;                                           // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              UnscaledHalfHeight;                                       // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FMeleeWeaponDesc                            WeaponDesc;                                               // 0x0048(0x0028)
};

// ScriptStruct ConZ.MeleeAttackCapsuleHitInfo
// 0x0100
struct FMeleeAttackCapsuleHitInfo
{
	struct FMeleeAttackCapsule                         MeleeAttackCapsule;                                       // 0x0000(0x0070)
	struct FHitResult                                  HitResult;                                                // 0x0070(0x0088) (IsPlainOldData)
	EDamageMagnitudeType                               DamageMagnitudeType;                                      // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.AnimalSpawnInfo
// 0x0008
struct FAnimalSpawnInfo
{
	int                                                MaxSpawnInstances;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SpawnProbability;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.AnimalManagementData
// 0x0030
struct FAnimalManagementData
{
	class UClass*                                      AnimalClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class AAnimal2*>                            AliveAnimals;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<class ACorpse*>                             DeadAnimals;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                VirtualAnimalAmount;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeHitDetectionMarker
// 0x0080
struct FMeleeHitDetectionMarker
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (Edit, IsPlainOldData)
	struct FTransform                                  RootMotion;                                               // 0x0040(0x0030) (Edit, IsPlainOldData)
	float                                              damageMultiplier;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelectionWeight;                                          // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ConZBaseBuildingSnappingData
// 0x0010
struct FConZBaseBuildingSnappingData
{
	bool                                               CanSnapLeft;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanSnapRight;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanSnapFront;                                             // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanSnapBack;                                              // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanSnapTop;                                               // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanSnapBottom;                                            // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              SnappingDistance;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreZCoordinate;                                        // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.BaseElementSnapMarker
// 0x0050
struct FBaseElementSnapMarker
{
	struct FTransform                                  SnapTransform;                                            // 0x0000(0x0030) (Edit, IsPlainOldData)
	EBaseElementType                                   ElementType;                                              // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0030(0x0001) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              SnappingDistance;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveAmountX;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveAmountY;                                              // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoveAmountZ;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ESnappingPosition                                  SnappingPosition;                                         // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanMoveOnXAxis;                                           // 0x0045(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanMoveOnYAxis;                                           // 0x0046(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanMoveOnZAxis;                                           // 0x0047(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.RepairableParams
// 0x0038
struct FRepairableParams
{
	struct FGameplayTagContainer                       RepairableTypes;                                          // 0x0000(0x0020) (Edit)
	float                                              HealthRepairedPerUse;                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExperienceAwardedPerHealthRepaired;                       // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinRepairDuration;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRepairDuration;                                        // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ESkillLevel                                        MinSkillLevelRequired;                                    // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.LadderMarker
// 0x00A0
struct FLadderMarker
{
	struct FTransform                                  FirstStep;                                                // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LastStep;                                                 // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FTransform                                  Edge;                                                     // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     CapsuleBias;                                              // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StepHeight;                                               // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StepWidth;                                                // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitDetectionExtraAboveLastStep;                           // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitDetectionExtraBelowFirstStep;                          // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitDetectionExtraOnTheSides;                              // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasEdge;                                                  // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsNarrow;                                                 // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      PhysicalSurfaceForSounds;                                 // 0x0092(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD];                                       // 0x0093(0x000D) MISSED OFFSET
};

// ScriptStruct ConZ.BaseElementDamageZone
// 0x0028
struct FBaseElementDamageZone
{
	struct FVector                                     BoundsMin;                                                // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoundsMax;                                                // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDamagePerSecond;                                       // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDamagePerSecond;                                       // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeedForDamage;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedForDamage;                                        // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.DbIntegerId
// 0x0008
struct FDbIntegerId
{
	int64_t                                            Value;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ScopeZoomLevelSettings
// 0x0540
struct FScopeZoomLevelSettings
{
	float                                              Magnification;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0010(0x0530) (Edit)
};

// ScriptStruct ConZ.DialogueInfo
// 0x0028
struct FDialogueInfo
{
	class UAkAudioEvent*                               VoiceOver;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // 0x0008(0x0028) (Edit)
	float                                              Duration;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDialogType                                        DialogType;                                               // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.WireDescription
// 0x000C
struct FWireDescription
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ConZ.SplineDescription
// 0x0030
struct FSplineDescription
{
	class USplineComponent*                            SplineComponent;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USplineMeshComponent*>                SplineMeshComponents;                                     // 0x0008(0x0010) (ExportObject, ZeroConstructor)
	class UStaticMeshComponent*                        SplineStartConnector;                                     // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SplineEndConnector;                                       // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeSkillExperienceAwards
// 0x0010
struct FMeleeSkillExperienceAwards
{
	float                                              Hit;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Kill;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ComboHitMultiplier;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SkillLevelBonus;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.BruisePatch
// 0x0038
struct FBruisePatch
{
	EBruiseLayer                                       Layer;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<EBruiseZone>                                AllowedZones;                                             // 0x0008(0x0010) (Edit, ZeroConstructor)
	int                                                Order;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UTexture2D*                                  Texture;                                                  // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Offset;                                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Mute;                                                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.WindowMarker
// 0x0050
struct FWindowMarker
{
	bool                                               IsVaultable;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFortifiable;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UWindowFortificationsType*                   WindowFortificationsType;                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        AdditionalMarkerIndicesToModify;                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DidIFailToCorrectlyPlaceWindowMarkers;                    // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FVector                                     Vertex1;                                                  // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vertex2;                                                  // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FortificationOffset;                                      // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionBoxVertBias;                                     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionBoxHorzBias;                                     // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.WindowMarkerModifier
// 0x0008
struct FWindowMarkerModifier
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsVaultable;                                              // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsFortifiable;                                            // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.BuildingsArray
// 0x0010
struct FBuildingsArray
{
	TArray<class ABuilding*>                           _buildings;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.DoorRepData
// 0x0020
struct FDoorRepData
{
	EDoorStateFlags                                    StateFlags;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FDbIntegerId                                OwningUserProfileId;                                      // 0x0008(0x0008)
	TArray<class UClass*>                              Locks;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.FortificationData
// 0x0020
struct FFortificationData
{
	int                                                MarkerIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      FortificationClass;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDbIntegerId                                OwnerUserProfileId;                                       // 0x0010(0x0008)
	float                                              health;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.BuildingData
// 0x0028
struct FBuildingData
{
	bool                                               IsCleared;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FWindowMarkerModifier>               WindowMarkerModifiers;                                    // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FFortificationData>                  Fortifications;                                           // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.BuryMaterialData
// 0x0028
struct FBuryMaterialData
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BreachActionParticles;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               BreachActionSound;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DumpActionParticles;                                      // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               DumpActionSound;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CamouflageSkillExperienceAwards
// 0x0004
struct FCamouflageSkillExperienceAwards
{
	float                                              BonusExperience;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CamouflageSkillParametersPerSkillLevel
// 0x0010
struct FCamouflageSkillParametersPerSkillLevel
{
	float                                              Modifier;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bonus;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FoliageAIPerceptionOuterRadius;                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FoliageAIPerceptionInnerRadius;                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.SpawnCharacterAroundInfo
// 0x0050
struct FSpawnCharacterAroundInfo
{
	TArray<class UClass*>                              AvailablePawns;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (Edit, IsPlainOldData)
	float                                              MinSpawnRadius;                                           // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpawnRadius;                                           // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumOfCharactersToSpawn;                                   // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreLimit;                                              // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.BodyWeaponAnimation
// 0x0010
struct FBodyWeaponAnimation
{
	class UAnimMontage*                                Body;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Weapon;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponAttachmentAnimations
// 0x0020
struct FWeaponAttachmentAnimations
{
	struct FBodyWeaponAnimation                        Add;                                                      // 0x0000(0x0010) (Edit)
	struct FBodyWeaponAnimation                        Remove;                                                   // 0x0010(0x0010) (Edit)
};

// ScriptStruct ConZ.WeaponSpreadItem
// 0x000C
struct FWeaponSpreadItem
{
	float                                              Idle;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Moving;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpeedTarget;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponSpreadData
// 0x0040
struct FWeaponSpreadData
{
	struct FWeaponSpreadItem                           ByStance[0x4];                                            // 0x0000(0x000C) (Edit)
	float                                              IncrementPerShot;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IncrementFromShotsMax;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IncrementSpeed;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecrementSpeed;                                           // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponViewKickData
// 0x0018
struct FWeaponViewKickData
{
	float                                              PitchMin;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchMax;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              YawMin;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              YawMax;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchDecrementSpeed;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              YawDecrementSpeed;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.FireAnimationData
// 0x00A8
struct FFireAnimationData
{
	struct FBodyWeaponAnimation                        BodyWeaponAnimation;                                      // 0x0000(0x0010) (Edit)
	struct FBodyWeaponAnimation                        BodyWeaponAnimationLastShot;                              // 0x0010(0x0010) (Edit)
	struct FRuntimeFloatCurve                          WeightCurve;                                              // 0x0020(0x0088) (Edit)
};

// ScriptStruct ConZ.WeaponMalfunctionChances
// 0x0028
struct FWeaponMalfunctionChances
{
	struct FFloatInterval                              Value[0x5];                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponReloadData
// 0x0028
struct FWeaponReloadData
{
	bool                                               IsQuick;                                                  // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AItem*                                       Item;                                                     // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AItem*                                       Item2;                                                    // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                count;                                                    // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UClass*                                      ReloadSequenceClass;                                      // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.FireShotProjectileData
// 0x0028
struct FFireShotProjectileData
{
	struct FVector                                     StartLocation;                                            // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   shootDirection;                                           // 0x000C(0x000C)
	int                                                zeroRange;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Windage;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RandomFactor;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ConeHalfAngle;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.FireShotDescription
// 0x0008
struct FFireShotDescription
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.WeaponMalfunctionEventDescription
// 0x0008
struct FWeaponMalfunctionEventDescription
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CharacterImpactSounds
// 0x0008
struct FCharacterImpactSounds
{
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CharacterHeadImpactSoundData
// 0x0028
struct FCharacterHeadImpactSoundData
{
	TArray<ECharacterImpactSourceSoundCategory>        ImpactSourceCategories;                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<ECharacterHeadImpactSoundCategory>          ImpactTargetCategories;                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      Sounds;                                                   // 0x0020(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterHeadImpactSoundsData
// 0x0018
struct FCharacterHeadImpactSoundsData
{
	TArray<struct FCharacterHeadImpactSoundData>       SoundsData;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      FallbackSounds;                                           // 0x0010(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterTorsoImpactSoundData
// 0x0028
struct FCharacterTorsoImpactSoundData
{
	TArray<ECharacterImpactSourceSoundCategory>        ImpactSourceCategories;                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<ECharacterTorsoImpactSoundCategory>         ImpactTargetCategories;                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      Sounds;                                                   // 0x0020(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterTorsoImpactSoundsData
// 0x0018
struct FCharacterTorsoImpactSoundsData
{
	TArray<struct FCharacterTorsoImpactSoundData>      SoundsData;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      FallbackSounds;                                           // 0x0010(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterArmsImpactSoundData
// 0x0028
struct FCharacterArmsImpactSoundData
{
	TArray<ECharacterImpactSourceSoundCategory>        ImpactSourceCategories;                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<ECharacterArmsImpactSoundCategory>          ImpactTargetCategories;                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      Sounds;                                                   // 0x0020(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterArmsImpactSoundsData
// 0x0018
struct FCharacterArmsImpactSoundsData
{
	TArray<struct FCharacterArmsImpactSoundData>       SoundsData;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      FallbackSounds;                                           // 0x0010(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterLegsImpactSoundData
// 0x0028
struct FCharacterLegsImpactSoundData
{
	TArray<ECharacterImpactSourceSoundCategory>        ImpactSourceCategories;                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<ECharacterLegsImpactSoundCategory>          ImpactTargetCategories;                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      Sounds;                                                   // 0x0020(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterLegsImpactSoundsData
// 0x0018
struct FCharacterLegsImpactSoundsData
{
	TArray<struct FCharacterLegsImpactSoundData>       SoundsData;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FCharacterImpactSounds                      FallbackSounds;                                           // 0x0010(0x0008) (Edit)
};

// ScriptStruct ConZ.CharacterSpawnerData2
// 0x0030
struct FCharacterSpawnerData2
{
	class UClass*                                      Character;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EPhysicalSurface>>              AllowedSurfaces;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                CharactersPerCell;                                        // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalCharacters;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinElevation;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxElevation;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CharacterSpawnerDataBasedOnPreset
// 0x0020
struct FCharacterSpawnerDataBasedOnPreset
{
	class UClass*                                      preset;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideCharacterClasses;                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<class UClass*>                              CharacterClasses;                                         // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.CharacterSpawnerMarker
// 0x0050
struct FCharacterSpawnerMarker
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, IsPlainOldData)
	struct FCharacterSpawnerDataBasedOnPreset          Spawner;                                                  // 0x0030(0x0020) (Edit)
};

// ScriptStruct ConZ.SpawnedPawnInfo
// 0x0014
struct FSpawnedPawnInfo
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct ConZ.PawnCharacterInfo
// 0x00B8
struct FPawnCharacterInfo
{
	class UClass*                                      SpawnablePawn;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              CharacterPreset;                                          // 0x0008(0x0010) (Edit, ZeroConstructor)
	float                                              PoiCharacterIdleThresholdTimeMP;                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorCharacterIdleThresholdTimeMP;                     // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InteriorCharacterIdleThresholdTimeMP;                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PoiCharacterIdleThresholdTimeSP;                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorCharacterIdleThresholdTimeSP;                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InteriorCharacterIdleThresholdTimeSP;                     // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinShortRangeSpawnDistance;                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxShortRangeSpawnDistance;                               // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinLongRangeSpawnDistance;                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLongRangeSpawnDistance;                                // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PawnCullDuration;                                         // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinWildCharactersPerPawnGroup;                            // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxWildCharactersPerPawnGroup;                            // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxExteriorCharactersPerPawnGroup;                        // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxInteriorCharactersPerPawnGroup;                        // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PawnFieldOfView;                                          // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawningFieldOfView;                                      // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxAllowedPawns;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxAllowedWildPawns;                                      // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0064(0x0008) MISSED OFFSET
	int                                                MaxAllowedExteriorPawns;                                  // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
	int                                                MaxAllowedInteriorPawns;                                  // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x007C(0x0008) MISSED OFFSET
	float                                              ExteriorPawnAmountModifier;                               // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	float                                              InteriorPawnAmountModifier;                               // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0094(0x0008) MISSED OFFSET
	float                                              WildPawnAmountModifier;                                   // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET
	TArray<struct FSpawnedPawnInfo>                    SpawnedPawns;                                             // 0x00A8(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.CharacterSpawnerData
// 0x0010
struct FCharacterSpawnerData
{
	TArray<class UClass*>                              CharacterClasses;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.LockData
// 0x0030
struct FLockData
{
	class UClass*                                      LockMinigameClass;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 LockMeshOuter;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 LockMeshInner;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExperienceOnSuccess;                                      // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExperienceOnFailure;                                      // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotatingTresholdAngle;                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngleTolerance;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PickBreakingMultiplier;                                   // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ChoppingIngredient
// 0x0028
struct FChoppingIngredient
{
	class UClass*                                      Item;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinQuantity;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxQuantity;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsQuantityAffectedByTool;                                 // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              InitialDamage;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeDamage;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideAutoDestructTime;                                 // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              AutoDestructTime;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ChoppingTool2
// 0x0030
struct FChoppingTool2
{
	TArray<class UBaseItemTag*>                        ItemTags;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      ItemTagClass;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideChoppingTime;                                     // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              ChoppingTimeMultiplier;                                   // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideIngredientsQuantity;                              // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                IngredientsQuantityBonus;                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PossibleChoppingTools
// 0x0010
struct FPossibleChoppingTools
{
	TArray<struct FChoppingTool2>                      PossibleTools;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.ExperienceDependentFloat
// 0x0008
struct FExperienceDependentFloat
{
	float                                              ValueWhenExperienceIsMinimal;                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ValueWhenExperienceIsMaximal;                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ChoppingParametersPerSkillLevel
// 0x000C
struct FChoppingParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   ChoppingTime;                                             // 0x0000(0x0008) (Edit)
	int                                                IngredientsQuantityBonus;                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ChoppingRecipe
// 0x0098
struct FChoppingRecipe
{
	struct FText                                       InteractionCaption;                                       // 0x0000(0x0028) (Edit)
	class UAkAudioEvent*                               ChopAudioEvent;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENoiseLevel                                        NoiseLevel;                                               // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FChoppingIngredient>                 Ingredients;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FPossibleChoppingTools                      ToolRequiredToBeInRightHand;                              // 0x0038(0x0010) (Edit)
	TArray<struct FPossibleChoppingTools>              AdditionalToolsRequired;                                  // 0x0048(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      Skill;                                                    // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExperiencePointsAwarded;                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FChoppingParametersPerSkillLevel            NoSkillLevelData;                                         // 0x0064(0x000C) (Edit)
	struct FChoppingParametersPerSkillLevel            BasicLevelData;                                           // 0x0070(0x000C) (Edit)
	struct FChoppingParametersPerSkillLevel            MediumLevelData;                                          // 0x007C(0x000C) (Edit)
	struct FChoppingParametersPerSkillLevel            AdvancedLevelData;                                        // 0x0088(0x000C) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.InteractionStruct
// 0x0068
struct FInteractionStruct
{
	EInteractionType                                   interactionType;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     InteractionCaption;                                       // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0018(0x0050) MISSED OFFSET
};

// ScriptStruct ConZ.CircularLayerData
// 0x0008
struct FCircularLayerData
{
	float                                              CenterCutoffPercentage;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CircularSegmentContainer
// 0x0018
struct FCircularSegmentContainer
{
	TArray<class UCircularMenuSegmentWidget*>          SegmentWidgets;                                           // 0x0000(0x0010) (ExportObject, ZeroConstructor)
	int                                                SegmentCountOverride;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ClearMalfunctionData
// 0x0018
struct FClearMalfunctionData
{
	bool                                               ShouldClearMalfunction;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FBodyWeaponAnimation                        Animations;                                               // 0x0008(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct ConZ.AnimalPaceSettings
// 0x0010
struct FAnimalPaceSettings
{
	float                                              RunSpeed;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TrotSpeed;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeed;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SneakSpeed;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.AnimalStationaryRotationRateSettings
// 0x003C
struct FAnimalStationaryRotationRateSettings
{
	struct FRotator                                    RunRotationRate;                                          // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TrotRotationRate;                                         // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    WalkRotationRate;                                         // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SneakRotationRate;                                        // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    StandRotationRate;                                        // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ChargeAttackData
// 0x0020
struct FChargeAttackData
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationModifier;                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              lengthOverride;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.CloseRangeAttackData
// 0x0018
struct FCloseRangeAttackData
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationModifier;                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalHalfAngleRange;                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.TurnMontages
// 0x0010
struct FTurnMontages
{
	class UAnimMontage*                                TurnInPlaceLeft;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                TurnInPlaceRight;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.AnimalActionMontageData
// 0x0018
struct FAnimalActionMontageData
{
	class UAnimMontage*                                SleepMontage;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                EatMontage;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                IntimidateMontage;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.RepActionData
// 0x0003
struct FRepActionData
{
	EAnimalAction                                      Action;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IndexParameter;                                           // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Version;                                                  // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ContainerItemDescriptorData
// 0x0040
struct FContainerItemDescriptorData
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              health;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              maxHealth;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                usage;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     DisplayUpperLeft;                                         // 0x0018(0x0010) (ZeroConstructor)
	int                                                DisplayAmountLeft;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DisplayAmountRight;                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               ShouldDisplayText;                                        // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UTexture2D*                                  Icon;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ImageAssetToLoad
// 0x0018
struct FImageAssetToLoad
{
	struct FGameplayTag                                Name;                                                     // 0x0000(0x0008) (Edit)
	struct FString                                     FilePath;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.InteractionData
// 0x0048
struct FInteractionData
{
	int                                                IntegerData;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UObject*                                     PointerData;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               BoolData;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FText                                       TextData;                                                 // 0x0018(0x0028)
	struct FVector                                     InteractionLocation;                                      // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     VectorData;                                               // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ConZBaseRepairAreaDuration
// 0x0008
struct FConZBaseRepairAreaDuration
{
	int                                                NumberOfBaseElementsTreshold;                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RepairDuration;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ConZBaseData
// 0x00F0
struct FConZBaseData
{
	int64_t                                            BaseId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BaseName;                                                 // 0x0008(0x0010) (ZeroConstructor)
	struct FVector2D                                   BaseSize;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaseLocation;                                             // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	int64_t                                            BaseOwnerPlayerId;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsOwnedByPlayer;                                          // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FVector2D                                   BaseBoundsMin;                                            // 0x003C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BaseBoundsMax;                                            // 0x0044(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xA4];                                      // 0x004C(0x00A4) MISSED OFFSET
};

// ScriptStruct ConZ.ConZBaseInteractionData
// 0x0018
struct FConZBaseInteractionData
{
	int64_t                                            BaseId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaseLocation;                                             // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ConZBaseElementInteractionData
// 0x0020
struct FConZBaseElementInteractionData
{
	int64_t                                            BaseElementId;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaseElementLocation;                                      // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              RepairValue;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int64_t                                            InteractionTimestamp;                                     // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ConZBaseElementIdentifier
// 0x0020
struct FConZBaseElementIdentifier
{
	int64_t                                            BaseId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ElementID;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.CommonMapNames
// 0x0018
struct FCommonMapNames
{
	struct FName                                       MainMenu;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharacterCreationMenu;                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Singleplayer;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CharacterCreationMenuContext
// 0x0030
struct FCharacterCreationMenuContext
{
	bool                                               IsPreferringMultiplayer;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     ServerIp;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ServerResponsePort;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ServerGameplayPort;                                       // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ServerAuthToken;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConZ.RespawnParameters
// 0x0040
struct FRespawnParameters
{
	int                                                RandomLocationPrice;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SectorLocationPrice;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShelterLocationPrice;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SquadLocationPrice;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RandomInitialTime;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SectorInitialTime;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShelterInitialTime;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SquadInitialTime;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RandomCooldownTime;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SectorCooldownTime;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShelterCooldownTime;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SquadCooldownTime;                                        // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RandomCooldownResetMultiplier;                            // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SectorCooldownResetMultiplier;                            // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShelterCooldownResetMultiplier;                           // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SquadCooldownResetMultiplier;                             // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.TeleportRequest
// 0x0028
struct FTeleportRequest
{
	TWeakObjectPtr<class AActor>                       Subject;                                                  // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0008(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x0014(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UTeleportUserData>            UserData;                                                 // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.GameplayRules
// 0x0010
struct FGameplayRules
{
	bool                                               AllowFirstperson;                                         // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowThirdperson;                                         // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowCrosshair;                                           // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowGlobalChat;                                          // 0x0003(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowLocalChat;                                           // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowSquadChat;                                           // 0x0005(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowMapScreen;                                           // 0x0006(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	float                                              TimeToRemainInGameAfterLeaveGameRequest;                  // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeToRemainInGameAfterLeaveGameRequestWhileCaptured;     // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PlayerLoginInfo
// 0x0060
struct FPlayerLoginInfo
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FDbIntegerId                                UserProfileId;                                            // 0x0010(0x0008) (BlueprintVisible)
	struct FString                                     UserProfileName;                                          // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               IsUserAdmin;                                              // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDeluxeUser;                                             // 0x0029(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayAsDrone;                                              // 0x002A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	struct FString                                     ServerName;                                               // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                ServerResponsePort;                                       // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FDbIntegerId                                ServerUserProfileId;                                      // 0x0048(0x0008) (BlueprintVisible)
	struct FGameplayRules                              GameplayRules;                                            // 0x0050(0x0010) (BlueprintVisible)
};

// ScriptStruct ConZ.SurvivalStats
// 0x0140
struct FSurvivalStats
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              HighestPositiveFamePoints;                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DoorsClaimed;                                             // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AnimalsKilled;                                            // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinutesSurvived;                                          // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Deaths;                                                   // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LocksPicked;                                              // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PuppetsKilled;                                            // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GunsCrafted;                                              // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AmmoCrafted;                                              // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BulletsCrafted;                                           // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArrowsCrafted;                                            // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ClothingCrafted;                                          // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LongestKillDistance;                                      // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MeleeKills;                                               // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ArcheryKills;                                             // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PlayersKnockedOut;                                        // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalDefecations;                                         // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalUrinations;                                          // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LightsFired;                                              // 0x0054(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ContainersLooted;                                         // 0x0058(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemsPutIntoContainers;                                   // 0x005C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DeathsByPrisoners;                                        // 0x0060(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AnimalsSkinned;                                           // 0x0064(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoodEaten;                                                // 0x0068(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceTravelledByFoot;                                  // 0x006C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WoundsPatched;                                            // 0x0070(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemsPickedUp;                                            // 0x0074(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LiquidDrank;                                              // 0x0078(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeethLost;                                                // 0x007C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalCaloriesIntake;                                      // 0x0080(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShotsFired;                                               // 0x0084(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShotsHit;                                                 // 0x0088(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RangeWeaponAccuracy;                                      // 0x008C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Headshots;                                                // 0x0090(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MeleeWeaponSwings;                                        // 0x0094(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MeleeWeaponHits;                                          // 0x0098(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeleeWeaponAccuracy;                                      // 0x009C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MeleeWeaponsCrafted;                                      // 0x00A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DroneKills;                                               // 0x00A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SentryKills;                                              // 0x00A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PrisonerKills;                                            // 0x00AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PuppetsKnockedOut;                                        // 0x00B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Diarrheas;                                                // 0x00B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Vomits;                                                   // 0x00B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceTravelledInVehicle;                               // 0x00BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MushroomsEaten;                                           // 0x00C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighestMuscleMass;                                        // 0x00C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighestFat;                                               // 0x00C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HeartAttacks;                                             // 0x00CC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Overdose;                                                 // 0x00D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Starvation;                                               // 0x00D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighestDamageTaken;                                       // 0x00D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighestWeightCarried;                                     // 0x00DC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventsWon;                                                // 0x00E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventsLost;                                               // 0x00E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LowestNegativeFamePoints;                                 // 0x00E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceTravelledSwimming;                                // 0x00EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventsEnemyKills;                                         // 0x00F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventsDeaths;                                             // 0x00F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlagCaptures;                                             // 0x00F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CrowsKilled;                                              // 0x00FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SeagullsKilled;                                           // 0x0100(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HorsesKilled;                                             // 0x0104(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BoarsKilled;                                              // 0x0108(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BearsKilled;                                              // 0x010C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GoatsKilled;                                              // 0x0110(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DeersKilled;                                              // 0x0114(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ChickensKilled;                                           // 0x0118(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RabbitsKilled;                                            // 0x011C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DonkeysKilled;                                            // 0x0120(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TimesMauledByABear;                                       // 0x0124(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LongestAnimalKillDistance;                                // 0x0128(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventTeamKills;                                           // 0x012C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KillDeathRatio;                                           // 0x0130(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EventsKillDeathRatio;                                     // 0x0134(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AlcoholDrank;                                             // 0x0138(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FoliageCut;                                               // 0x013C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.EventsRankingStats
// 0x0030
struct FEventsRankingStats
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              FamePoints;                                               // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FameLevel;                                                // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EventScore;                                               // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventKills;                                               // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventTeamKills;                                           // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventDeaths;                                              // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventSuicides;                                            // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventAssists;                                             // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventHeadshots;                                           // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBanned;                                                 // 0x002C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.EventsRankingStatsItem
// 0x0048
struct FEventsRankingStatsItem
{
	int                                                Rank;                                                     // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FEventsRankingStats                         CharacterStats;                                           // 0x0018(0x0030) (BlueprintVisible)
};

// ScriptStruct ConZ.ConZSquadEmblemElement
// 0x0004
struct FConZSquadEmblemElement
{
	unsigned char                                      ShapeIndex;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PrimaryColorIndex;                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SecondaryColorIndex;                                      // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TertiaryColorIndex;                                       // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ConZSquadEmblem
// 0x0008
struct FConZSquadEmblem
{
	struct FConZSquadEmblemElement                     Background;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FConZSquadEmblemElement                     Symbol;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ConZSquadMember
// 0x0010
struct FConZSquadMember
{
	struct FDbIntegerId                                UserProfileId;                                            // 0x0000(0x0008) (Edit, BlueprintVisible)
	EConZSquadMemberRank                               Rank;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               online;                                                   // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               InDanger;                                                 // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               IsAlive;                                                  // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleSpawnParameters
// 0x002C
struct FVehicleSpawnParameters
{
	struct FGameplayTag                                SpawnGroup;                                               // 0x0000(0x0008) (Edit)
	struct FVector                                     MinSpawnLocationOffset;                                   // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxSpawnLocationOffset;                                   // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AdminSpawnLocationOffset;                                 // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.VehicleMaterialParameterDescription
// 0x0010
struct FVehicleMaterialParameterDescription
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.VehicleDamagedEffectsParameters
// 0x0060
struct FVehicleDamagedEffectsParameters
{
	struct FFloatRange                                 HealthRatioRange;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (Edit, IsPlainOldData)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StartAudioEvent;                                          // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopAudioEvent;                                           // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DeactivationDelay;                                        // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleExhaustParticles
// 0x0018
struct FVehicleExhaustParticles
{
	struct FName                                       AttachSocketName;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleExhaustEffects
// 0x0048
struct FVehicleExhaustEffects
{
	TArray<struct FVehicleExhaustParticles>            particles;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              ThrottleImpulseMinValue;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleImpulseMaxValue;                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleImpulseSpeedTermMaxValue;                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleImpulseAttackDuration;                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleImpulseSustainDuration;                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleImpulseReleaseDuration;                           // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParticlesDestructionDelay;                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x002C(0x001C) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleTireEffectProperties
// 0x0014
struct FVehicleTireEffectProperties
{
	struct FVector                                     TireLocalOffset;                                          // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x000C(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleImpactEffects
// 0x0038
struct FVehicleImpactEffects
{
	float                                              HitImpulseThreshold;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UParticleSystem*                             ParticleSystem;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ParticlesScale;                                           // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShake;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraShakeScale;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleEngineStallingParameters
// 0x0058
struct FVehicleEngineStallingParameters
{
	float                                              MinDuration;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDuration;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StopEngineChance;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldStallingStopOnThrottleOrBreakRelease;               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldEngineStopOnThrottleOrBreakRelease;                 // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	class UCurveFloat*                                 ThrottleCurve;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleCurveFrequencyMultiplier;                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 BrakeCurve;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BrakeCurveFrequencyMultiplier;                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceMagnitudeScale;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ForceMagnitudeScaleCurve;                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceMagnitudeScaleCurveFrequencyMultiplier;              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceDirectionRandomizationAngle;                         // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      AudioEventTriggerTimeRatios;                              // 0x0048(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.MountSlotEntryPoint
// 0x000C
struct FMountSlotEntryPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ConZVehicleTireParticleData
// 0x0014
struct FConZVehicleTireParticleData
{
	float                                              MinLateralSlip;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLateralSlip;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinLongitudinalSlip;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLongitudinalSlip;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParticleScaleModifier;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemSpawningSettings
// 0x0058
struct FItemSpawningSettings
{
	bool                                               UseQuadTreeToDetermineRelevantSpawnerGroups;              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              RelevantSpawnerGroupsUpdateInterval;                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinPlayerLocationDeltaToUpdateRelevantSpawnerGroups;      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerGroupsCullDistance;                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerGroupsExpirationTimeInMinutes;                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExamineSpawnerExpirationTimeInMinutes;                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerTasksProcessingInterval;                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerTasksProcessingBudgetInMilliseconds;               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumberOfSpawnerTasksPerUpdate;                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldDestroySpawnedItemsIfNoPlayersAround;               // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	float                                              RarityRatio;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnerProbabilityMultiplier;                             // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExamineSpawnerProbabilityMultiplier;                      // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ItemHealthMultiplierWhenUnderwater;                       // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     SaveFileName;                                             // 0x0038(0x0010) (Edit, ZeroConstructor)
	bool                                               DisableSerialization;                                     // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreSpawnerProbability;                                 // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreItemLimit;                                          // 0x004A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreItemZone;                                           // 0x004B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreItemRarity;                                         // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DebugDrawItemSpawnTransforms;                             // 0x004D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	float                                              DebugDrawItemSpawnTransformsDuration;                     // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.CorpseSkeletalMeshRepData
// 0x0070
struct FCorpseSkeletalMeshRepData
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Mesh;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               Visibility;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CorpseStaticMeshRepData
// 0x0070
struct FCorpseStaticMeshRepData
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               Visibility;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0021(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CorpsePoseData
// 0x0080
struct FCorpsePoseData
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x003C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          Transforms;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FVector>                             LinearVelocities;                                         // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FVector>                             AngularVelocities;                                        // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingPair
// 0x0010
struct FCraftingPair
{
	class UClass*                                      CraftedItem;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CraftingItem;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PossibleItem
// 0x0030
struct FPossibleItem
{
	class UCraftingItemTag*                            CraftingTag;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Item;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                usage;                                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              usageWeight;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ECraftingType                                      CraftingType;                                             // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                QuantityVariation;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WeightVariation;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnHere;                                                // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingItem
// 0x0028
struct FCraftingItem
{
	struct FString                                     Description;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FPossibleItem>                       PossibleItems;                                            // 0x0010(0x0010) (Edit, ZeroConstructor)
	class UAkAudioEvent*                               FillSound;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CraftingSkillLevelData
// 0x0014
struct FCraftingSkillLevelData
{
	float                                              CraftingTime;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProcessingTime;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Points;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probability_Add;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probability_Multiply;                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemClassesArray
// 0x0010
struct FItemClassesArray
{
	TArray<class UClass*>                              ItemClasses;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.CraftingRecipeCraftableItem
// 0x0010
struct FCraftingRecipeCraftableItem
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EnoughSkill;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingRecipeCraftingItem
// 0x0010
struct FCraftingRecipeCraftingItem
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isOptional;                                               // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingRecipeCraftingIngredient
// 0x0018
struct FCraftingRecipeCraftingIngredient
{
	TArray<struct FCraftingRecipeCraftingItem>         CraftingItems;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IsTool;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isOptional;                                               // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingRecipe
// 0x0038
struct FCraftingRecipe
{
	TArray<struct FCraftingRecipeCraftableItem>        CraftableItems;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FCraftingRecipeCraftingIngredient>   CraftingIngredients;                                      // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      SkillNeeded;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESkillLevel                                        SkillLevelNeeded;                                         // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UCraftableItem*                              CraftableItem;                                            // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.GameEventParticipantInfo
// 0x0070
struct FGameEventParticipantInfo
{
	struct FString                                     UniqueId;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TWeakObjectPtr<class APrisoner>                    Prisoner;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	EGameEventParticipantState                         State;                                                    // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                TeamIndex;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class UGameEventParticipantStats*>          RoundStats;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class UGameEventParticipantStats*                  EventStats;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class APrisoner*>                           HurtBy;                                                   // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                RepHelper;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x005C(0x0014) MISSED OFFSET
};

// ScriptStruct ConZ.GameEventRewardPoints
// 0x000C
struct FGameEventRewardPoints
{
	int                                                Cash;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FamePoints;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.GameEventParameters
// 0x0188
struct FGameEventParameters
{
	float                                              AnnounceDuration;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CancelDuration;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RoundDuration;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RoundLimit;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WinLimit;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RespawnDelay;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeoutDuration;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinParticipants;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxParticipants;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowRespawn;                                             // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FriendlyFire;                                             // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	TArray<int>                                        TeamLimit;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                EntryFee;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameEventRewardPoints                      PointsPerEnemyKill;                                       // 0x003C(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerTeamKill;                                        // 0x0048(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerDeath;                                           // 0x0054(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerSuicide;                                         // 0x0060(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerAssist;                                          // 0x006C(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerHeadshot;                                        // 0x0078(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerRoundWin;                                        // 0x0084(0x000C) (Edit, BlueprintVisible)
	TArray<struct FGameEventRewardPoints>              PointsPerRank;                                            // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FGameEventRewardPoints                      PointsForParticipation;                                   // 0x00A0(0x000C) (Edit, BlueprintVisible)
	float                                              ScoreToFameConversionFactor;                              // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UItemSelection*>                      PossiblePrimaryWeapons;                                   // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleSecondaryWeapons;                                 // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleTertiaryWeapons;                                  // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleOutfits;                                          // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      PossibleSupportItems;                                     // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UItemSelection*>                      MandatoryGear;                                            // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       EventName;                                                // 0x0110(0x0028) (Edit, BlueprintVisible)
	struct FText                                       EventDescription;                                         // 0x0128(0x0028) (Edit, BlueprintVisible)
	struct FText                                       PrerequisitesText;                                        // 0x0140(0x0028) (Edit, BlueprintVisible)
	struct FText                                       WeaponText;                                               // 0x0158(0x0028) (Edit, BlueprintVisible)
	struct FText                                       RewardsText;                                              // 0x0170(0x0028) (Edit, BlueprintVisible)
};

// ScriptStruct ConZ.CTFParameters
// 0x0030
struct FCTFParameters
{
	float                                              FlagResetDuration;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowReturns;                                             // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                CaptureLimit;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameEventRewardPoints                      PointsPerPickup;                                          // 0x000C(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerCapture;                                         // 0x0018(0x000C) (Edit, BlueprintVisible)
	struct FGameEventRewardPoints                      PointsPerReturn;                                          // 0x0024(0x000C) (Edit, BlueprintVisible)
};

// ScriptStruct ConZ.SpawnArea
// 0x0014
struct FSpawnArea
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TeamIndex;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.DamageOverTimeUpdateGroup
// 0x0018
struct FDamageOverTimeUpdateGroup
{
	float                                              UpdateInterval;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct ConZ.TriggeredEventData
// 0x0010
struct FTriggeredEventData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.TrapTriggerParams
// 0x0010
struct FTrapTriggerParams
{
	class AActor*                                      TriggeredActor;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ProjectileImpulseMultiplier
// 0x0010
struct FProjectileImpulseMultiplier
{
	class UClass*                                      ActorClass;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.MultiplierByClass
// 0x0010
struct FMultiplierByClass
{
	class UClass*                                      ObjectClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.DamageMultipliers
// 0x0018
struct FDamageMultipliers
{
	class UClass*                                      DamageCauserClass;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiplierByClass>                  DamageMultipliers;                                        // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConZ.DeathmatchParameters
// 0x0014
struct FDeathmatchParameters
{
	int                                                RoundScoreLimit;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaRestrictionInterval;                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaRestrictionDuration;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaRestrictionStep;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BarrierHeatUpDuration;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.DemolitionSkillParametersPerSkillLevel
// 0x0028
struct FDemolitionSkillParametersPerSkillLevel
{
	float                                              TrapQuality;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefuseTime;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArmTrapXP;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DisarmOwnedTrapXP;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DisarmEnemyTrapXP;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AddTriggerXP;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CraftTrapXP;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfWires;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GreenWiresNumber;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RedWiresNumber;                                           // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.TooltipPanelData
// 0x0020
struct FTooltipPanelData
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WidgetClass;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ETooltipPanelType                                  PanelType;                                                // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                Layer;                                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsEditorOnly;                                             // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.DialogInfoContainer
// 0x0010
struct FDialogInfoContainer
{
	TArray<struct FDialogueInfo>                       DialogInfos;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConZ.DistantLevel
// 0x0020
struct FDistantLevel
{
	class AActor*                                      Level;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.DrivingSkillExperienceAwards
// 0x0008
struct FDrivingSkillExperienceAwards
{
	float                                              StartEngine;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PointsPerDrivenDistanceInKm;                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.DrivingSkillEngineStallingParameters
// 0x0040
struct FDrivingSkillEngineStallingParameters
{
	float                                              Chance;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDuration;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDuration;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StopEngineChance;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ThrottleCurve;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleCurveFrequencyMultiplier;                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 BrakeCurve;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BrakeCurveFrequencyMultiplier;                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceMagnitudeScale;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ForceMagnitudeScaleCurve;                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceMagnitudeScaleCurveFrequencyMultiplier;              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceDirectionRandomizationAngle;                         // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.DrivingSkillParametersPerSkillLevel
// 0x0100
struct FDrivingSkillParametersPerSkillLevel
{
	float                                              EngineStartDuration;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineStartFailureChance;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineStartViaMotionDuration;                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineStartViaMotionFailureChance;                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineReadyDelay;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineFailedToStartDelay;                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineFailedToStartNoFuelDelay;                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineFailedToStartNoBatteryDelay;                        // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EngineStalledDelay;                                       // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedModifier;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrottleModifier;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BrakeModifier;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GearboxSwitchTime;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GearboxLatency;                                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SteerRaiseRate;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SteerFallRate;                                            // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FDrivingSkillEngineStallingParameters       EngineStallingByAccelerationParameters;                   // 0x0040(0x0040) (Edit)
	struct FDrivingSkillEngineStallingParameters       EngineStallingByUpShiftParameters;                        // 0x0080(0x0040) (Edit)
	struct FDrivingSkillEngineStallingParameters       EngineStallingWhenStartingViaMotion;                      // 0x00C0(0x0040) (Edit)
};

// ScriptStruct ConZ.DropZoneParameters
// 0x002C
struct FDropZoneParameters
{
	float                                              IntroAnnouncementDelay;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WarmupPhaseDuration;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrateDropDuration;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SearchPhaseTimeLimit;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CargoDropDuration;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CapturePhaseTimeLimit;                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CargoOpeningDuration;                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SkipKeyPhase;                                             // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FGameEventRewardPoints                      PointsPerActivation;                                      // 0x0020(0x000C) (Edit, BlueprintVisible)
};

// ScriptStruct ConZ.EnduranceSkillParametersPerSkillLevel
// 0x0008
struct FEnduranceSkillParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   StaminaRecoveryMultiplier;                                // 0x0000(0x0008) (Edit)
};

// ScriptStruct ConZ.EngineeringSkillExperienceAwards
// 0x0010
struct FEngineeringSkillExperienceAwards
{
	float                                              RepairExperienceMultiplier;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FillFuelExperienceMultiplier;                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DrainFuelExperienceMultiplier;                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChargeBatteryExperienceMultiplier;                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.EngineeringSkillParametersPerSkillLevel
// 0x0020
struct FEngineeringSkillParametersPerSkillLevel
{
	float                                              RepairRadius;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RepairTimeMultiplier;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ResultQuality;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IngredientMultiplier;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ToolUsageMultiplier;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FillFuelDurationMultiplier;                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DrainFuelDurationMultiplier;                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChargeBatteryDurationMultiplier;                          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PossibleItemSickness
// 0x0010
struct FPossibleItemSickness
{
	class UClass*                                      Sickness;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Probability;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageProbability;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemSpawnerDataBasedOnPreset
// 0x0088
struct FItemSpawnerDataBasedOnPreset
{
	class UClass*                                      preset;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideItemClasses;                                      // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideItemSpawnTypes;                                   // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideProbability;                                      // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideUseItemZone;                                      // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideUseItemRarity;                                    // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideInitialDamage;                                    // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideRandomizeDamage;                                  // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideInitialUsage;                                     // 0x000F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideRandomizeUsage;                                   // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideInitialDirtiness;                                 // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideRandomizeDirtiness;                               // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideMinAmmoCount;                                     // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideMaxAmmoCount;                                     // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverridePossibleSicknesses;                               // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideUseCollisionTraceToAdjustSpawnLocation;           // 0x0016(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideUseCollisionTraceToAdjustSpawnRotation;           // 0x0017(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ItemClasses;                                              // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FGameplayTagContainer                       ItemSpawnTypes;                                           // 0x0028(0x0020) (Edit)
	float                                              Probability;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseItemZone;                                              // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseItemRarity;                                            // 0x004D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	float                                              InitialDamage;                                            // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeDamage;                                          // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialUsage;                                             // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeUsage;                                           // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialDirtiness;                                         // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeDirtiness;                                       // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinAmmoCount;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmmoCount;                                             // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FPossibleItemSickness>               PossibleSicknesses;                                       // 0x0070(0x0010) (Edit, ZeroConstructor)
	bool                                               UseCollisionTraceToAdjustSpawnLocation;                   // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseCollisionTraceToAdjustSpawnRotation;                   // 0x0081(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0082(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.ExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes
// 0x0028
struct FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes
{
	struct FGameplayTagContainer                       ItemSpawnTypes;                                           // 0x0000(0x0020) (Edit)
	int                                                MaxNumberOfOccurrences;                                   // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ExamineItemSpawnerData
// 0x00A8
struct FExamineItemSpawnerData
{
	int                                                MinQuantity;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxQuantity;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowDuplicates;                                          // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FItemSpawnerDataBasedOnPreset               Spawner;                                                  // 0x0010(0x0088) (Edit)
	TArray<struct FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes> MaxOccurrencesPerSpawnTypes;                              // 0x0098(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.ExamineDataPerItemGroup
// 0x0004
struct FExamineDataPerItemGroup
{
	int                                                MaxNumberOfOccurrences;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.DamageDescription
// 0x0004
struct FDamageDescription
{
	float                                              StructureDamageMultiplier;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.FillItemWithReplenishableResourceInteractionData
// 0x0048
struct FFillItemWithReplenishableResourceInteractionData
{
	struct FText                                       InteractionCaptionOverride;                               // 0x0000(0x0028) (Edit)
	float                                              BaseActionDuration;                                       // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ActionDurationPerAmountFilled;                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                PrisonerFillingMontage;                                   // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StartItemNoiseAudioEvent;                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopItemNoiseAudioEvent;                                  // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StartReplenishableResourceNoiseAudioEvent;                // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopReplenishableResourceNoiseAudioEvent;                 // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.HeatSourceParameters
// 0x0020
struct FHeatSourceParameters
{
	float                                              Temperature;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UCurveFloat*                                 TemperatureCurve;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BurningSpeed;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceScale;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.FishSpawnInfo
// 0x0008
struct FFishSpawnInfo
{
	int                                                SpawnInstances;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentlySpawned;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
};

// ScriptStruct ConZ.FoliageGeneralData
// 0x0010
struct FFoliageGeneralData
{
	float                                              CollisionBoundsScale;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CollisionBoundsOffset;                                    // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.FoliageEffectsData
// 0x0018
struct FFoliageEffectsData
{
	class UAkAudioEvent*                               StartMovingThroughFoliageAudioEvent;                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopMovingThroughFoliageAudioEvent;                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OneShotMovingThroughFoliageAudioEvent;                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.FoliageAIPerceptionData
// 0x0002
struct FFoliageAIPerceptionData
{
	bool                                               CanCoverPrisoner;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPrisonerStance                                    MaxUndetectedPrisonerStance;                              // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.GameEventTeamColours
// 0x0060
struct FGameEventTeamColours
{
	struct FLinearColor                                TeamName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParticipantStatsDarker;                                   // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParticipantStatsLighter;                                  // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParticipantStatsHighlighted;                              // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParticipantStatsDisabled;                                 // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParticipantStatsMini;                                     // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.GlobalAnimalSpawnInfo
// 0x001C
struct FGlobalAnimalSpawnInfo
{
	int                                                MaxSpawnInstances;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RespawnPeriod;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfExistingWaypointGroups;                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                WorldMaxSpawnInstances;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                CurrentlyAssigned;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                CurrentlySpawned;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	int                                                CurrentlyDead;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
};

// ScriptStruct ConZ.PhysicalHitReactData
// 0x0018
struct FPhysicalHitReactData
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PelvisBoneName;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialStrengthMultiplier;                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendDuration;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PhysicalAnimationDesc
// 0x0034
struct FPhysicalAnimationDesc
{
	unsigned char                                      UnknownData00[0x34];                                      // 0x0000(0x0034) MISSED OFFSET
};

// ScriptStruct ConZ.HitReactBodyPartDataItem
// 0x0040
struct FHitReactBodyPartDataItem
{
	class UAnimMontage*                                MontageToPlay;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                MontageToRespondTo;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       WeaponsToRespondTo;                                       // 0x0010(0x0020) (Edit)
	class UAnimMontage*                                FollowupMontage;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.HitReactDirectionData
// 0x0048
struct FHitReactDirectionData
{
	TArray<struct FHitReactBodyPartDataItem>           FrontHit;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FHitReactBodyPartDataItem>           LeftHit;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FHitReactBodyPartDataItem>           BackHit;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<struct FHitReactBodyPartDataItem>           RightHit;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)
	float                                              RegainControlDurationMultiplier;                          // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.HitReactMagnitudeData
// 0x0120
struct FHitReactMagnitudeData
{
	struct FHitReactDirectionData                      SmallHit;                                                 // 0x0000(0x0048) (Edit)
	struct FHitReactDirectionData                      MediumHit;                                                // 0x0048(0x0048) (Edit)
	struct FHitReactDirectionData                      LargeHit;                                                 // 0x0090(0x0048) (Edit)
	struct FHitReactDirectionData                      KnockoutHit;                                              // 0x00D8(0x0048) (Edit)
};

// ScriptStruct ConZ.HitReactLandingData
// 0x0028
struct FHitReactLandingData
{
	float                                              MinImpactSpeedToReact;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAnimMontage*                                MontageToPlay;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanEverGoToRagdoll;                                       // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              MinImpactSpeedForRagdoll;                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinRagdollDuration;                                       // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRagdollDuration;                                       // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RagdollDurationPerSpeedUnit;                              // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.SpawnedItems
// 0x0018
struct FSpawnedItems
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	EPickupItemOperation                               Operation;                                                // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<class AItem*>                               Items;                                                    // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.MeshInstanceId
// 0x0008
struct FMeshInstanceId
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ServerUsedItem
// 0x0018
struct FServerUsedItem
{
	class AItem*                                       Item;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                usage;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              usageWeight;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	ECraftingType                                      CraftingType;                                             // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               SpawnHere;                                                // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.ServerCraftableItem
// 0x0088
struct FServerCraftableItem
{
	uint32_t                                           ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      ItemClass;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FServerUsedItem>                     MandatoryItems;                                           // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FServerUsedItem>                     MandatoryParts;                                           // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FServerUsedItem>                     OptionalItems;                                            // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FServerUsedItem>                     OptionalParts;                                            // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FServerUsedItem>                     ToolsNeeded;                                              // 0x0050(0x0010) (ZeroConstructor)
	class UAnimMontage*                                CustomCraftingMontage;                                    // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StartCraftingAudioEvent;                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopCraftingAudioEvent;                                   // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0078(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.InventoryPositionDataRepHelper
// 0x0018
struct FInventoryPositionDataRepHelper
{
	class UClass*                                      _dataClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInventoryPositionData*                      _positionData;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     _owner;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.InventoryItemPositionPair
// 0x0020
struct FInventoryItemPositionPair
{
	struct FInventoryPositionDataRepHelper             Position;                                                 // 0x0000(0x0018)
	class UObject*                                     Item;                                                     // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.InventoryContainer2DRepData
// 0x0028
struct FInventoryContainer2DRepData
{
	TArray<struct FInventoryItemPositionPair>          ItemsData;                                                // 0x0000(0x0010) (ZeroConstructor)
	class UObject*                                     Parent;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SizeX;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SizeY;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RepCounter;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.InventoryContainerClothesData
// 0x0020
struct FInventoryContainerClothesData
{
	TArray<struct FInventoryItemPositionPair>          ItemsData;                                                // 0x0000(0x0010) (ZeroConstructor)
	class UObject*                                     Parent;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                RepCounter;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.InventoryContainerHandsHolstersData
// 0x0020
struct FInventoryContainerHandsHolstersData
{
	TArray<struct FInventoryItemPositionPair>          ItemsData;                                                // 0x0000(0x0010) (ZeroConstructor)
	class UObject*                                     Parent;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                RepCounter;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.InventoryContainerSelectionRepData
// 0x0028
struct FInventoryContainerSelectionRepData
{
	TArray<class UObject*>                             Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FInventoryItemPositionPair>          ItemsData;                                                // 0x0010(0x0010) (ZeroConstructor)
	class UObject*                                     Parent;                                                   // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ItemSpawnerMarker
// 0x00C0
struct FItemSpawnerMarker
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, IsPlainOldData)
	struct FItemSpawnerDataBasedOnPreset               Spawner;                                                  // 0x0030(0x0088) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ItemSpawnerData
// 0x0070
struct FItemSpawnerData
{
	TArray<class UClass*>                              ItemClasses;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGameplayTagContainer                       ItemSpawnTypes;                                           // 0x0010(0x0020) (Edit)
	float                                              Probability;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseItemZone;                                              // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseItemRarity;                                            // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	float                                              InitialDamage;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeDamage;                                          // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialUsage;                                             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeUsage;                                           // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialDirtiness;                                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomizeDirtiness;                                       // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinAmmoCount;                                             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmmoCount;                                             // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FPossibleItemSickness>               PossibleSicknesses;                                       // 0x0058(0x0010) (Edit, ZeroConstructor)
	bool                                               UseCollisionTraceToAdjustSpawnLocation;                   // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseCollisionTraceToAdjustSpawnRotation;                   // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x006A(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.InventoryNodeWidgetData
// 0x0038
struct FInventoryNodeWidgetData
{
	struct FName                                       Slot;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EInventoryNodeWidgetDataType                       Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              NumberData;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FText                                       TextData;                                                 // 0x0010(0x0028)
	class UTexture2D*                                  IconData;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   VisibilityData;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.ObjectiveData
// 0x0030
struct FObjectiveData
{
	struct FString                                     ObjectiveAssetId;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	EObjectiveState                                    ObjectiveState;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0018(0x0028) (Edit, EditConst)
};

// ScriptStruct ConZ.MissionReward
// 0x0018
struct FMissionReward
{
	TArray<class UClass*>                              RewardItems;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              RewardFamePoints;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RewardReceived;                                           // 0x0014(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.MissionData
// 0x00B8
struct FMissionData
{
	struct FText                                       MissionName;                                              // 0x0000(0x0028) (Edit, EditConst)
	struct FText                                       MissionCategory;                                          // 0x0018(0x0028) (Edit, EditConst)
	struct FText                                       MissionDescription;                                       // 0x0030(0x0028) (Edit, EditConst)
	EMissionType                                       MissionType;                                              // 0x0048(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                MissionOrdinalNumber;                                     // 0x004C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EMissionState                                      MissionState;                                             // 0x0050(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EFaction                                           MissionFaction;                                           // 0x0051(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0052(0x0010) UNKNOWN PROPERTY: ArrayProperty ConZ.MissionData.MissionStartingLocations
	int                                                IntendedNumberOfPlayers;                                  // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MissionCooldown;                                          // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
	struct FString                                     MissionAssetId;                                           // 0x0078(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FObjectiveData>                      ObjectivesData;                                           // 0x0088(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FMissionReward                              MissionReward;                                            // 0x0098(0x0018) (Edit, EditConst)
	class UTexture2D*                                  MissionBannerImage;                                       // 0x00B0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct ConZ.LandingEffectDataPerSeverity
// 0x0010
struct FLandingEffectDataPerSeverity
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnParticlesInDirectionOfVelocity;                      // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.LandingEffectDataPerPhysicalSurface
// 0x0030
struct FLandingEffectDataPerPhysicalSurface
{
	struct FLandingEffectDataPerSeverity               Light;                                                    // 0x0000(0x0010) (Edit)
	struct FLandingEffectDataPerSeverity               Medium;                                                   // 0x0010(0x0010) (Edit)
	struct FLandingEffectDataPerSeverity               Heavy;                                                    // 0x0020(0x0010) (Edit)
};

// ScriptStruct ConZ.MeleeSkillAttack
// 0x0070
struct FMeleeSkillAttack
{
	struct FGameplayTagContainer                       AttackTypes;                                              // 0x0000(0x0020) (Edit)
	struct FGameplayTagContainer                       IgnoreReason;                                             // 0x0020(0x0020) (Edit)
	class UAnimMontage*                                Montage;                                                  // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              PitchRange;                                               // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDistance;                                              // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinStamina;                                               // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OrientToTargetSpeedFactor;                                // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaminaDrainMultiplier;                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeUsedAsInitialAttack;                                 // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeUsedToCloseLargeDistanceToTarget;                    // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Solo;                                                     // 0x006A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Mute;                                                     // 0x006B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsAlwaysCandidate;                                        // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeSkillDodge
// 0x0018
struct FMeleeSkillDodge
{
	EDodgeDirectionType                                DodgeDirectionType;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAnimMontage*                                Montage;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeSkillAnimations
// 0x0098
struct FMeleeSkillAnimations
{
	class UAnimSequenceBase*                           PrimaryIdleAnimationTP;                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           PrimaryIdleAnimationFP;                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           TiredIdleAnimationTP;                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           TiredIdleAnimationFP;                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           WalkingIdleAnimationTP;                                   // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           WalkingIdleAnimationFP;                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           BlockIdleAnimationTP;                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           BlockIdleAnimationFP;                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 AimOffsetBlendSpaceTP;                                    // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 AimOffsetBlendSpaceFP;                                    // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                EnterCombatModeMontage;                                   // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                LeaveCombatModeMontage;                                   // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimSequenceBase*>                   InactivityIdleAnimations;                                 // 0x0060(0x0010) (Edit, ZeroConstructor)
	float                                              IdleToBlockBlendDuration;                                 // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockToIdleBlendDuration;                                 // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FMeleeSkillAttack>                   Attacks;                                                  // 0x0078(0x0010) (Edit, ZeroConstructor)
	TArray<struct FMeleeSkillDodge>                    Dodges;                                                   // 0x0088(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.MeleeSkillParametersPerSkillLevel
// 0x0098
struct FMeleeSkillParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   StartDelay;                                               // 0x0000(0x0008) (Edit)
	struct FExperienceDependentFloat                   StartDelayPenaltyPerStrengthShortage;                     // 0x0008(0x0008) (Edit)
	struct FExperienceDependentFloat                   AnimationPlayRateModifier;                                // 0x0010(0x0008) (Edit)
	struct FExperienceDependentFloat                   AnimationPlayRatePenaltyPerStrengthShortage;              // 0x0018(0x0008) (Edit)
	struct FExperienceDependentFloat                   RegainControlDurationModifier;                            // 0x0020(0x0008) (Edit)
	struct FExperienceDependentFloat                   DamageModifier;                                           // 0x0028(0x0008) (Edit)
	struct FExperienceDependentFloat                   staminaDrain;                                             // 0x0030(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaDrainPenaltyPerStrengthShortage;                   // 0x0038(0x0008) (Edit)
	struct FExperienceDependentFloat                   staminaRecoveryDelay;                                     // 0x0040(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaRecoveryDuration;                                  // 0x0048(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaInfluenceWindowMin;                                // 0x0050(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaInfluenceWindowMax;                                // 0x0058(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaInfluenceWindowLinearity;                          // 0x0060(0x0008) (Edit)
	struct FExperienceDependentFloat                   StartDelayWhenExhausted;                                  // 0x0068(0x0008) (Edit)
	struct FExperienceDependentFloat                   AnimationPlayRateModifierWhenExhausted;                   // 0x0070(0x0008) (Edit)
	struct FExperienceDependentFloat                   RegainControlDurationModifierWhenExhausted;               // 0x0078(0x0008) (Edit)
	struct FExperienceDependentFloat                   DamageModifierWhenExhausted;                              // 0x0080(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaMultiplierPerExcessGearWeight;                     // 0x0088(0x0008) (Edit)
	struct FExperienceDependentFloat                   ComboCooldownDuration;                                    // 0x0090(0x0008) (Edit)
};

// ScriptStruct ConZ.MissionItemInfo
// 0x0038
struct FMissionItemInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ConZ.MissionItemInfo.ItemLocation
	class UClass*                                      ItemClass;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldRemove;                                             // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              TimeToDestroy;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.NotificationDescriptionReplicationHelper
// 0x0018
struct FNotificationDescriptionReplicationHelper
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ConZ.PhysicalSurfaceData
// 0x0010
struct FPhysicalSurfaceData
{
	float                                              DirtinessFactor;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LandingImpactVelocityModifier;                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoiseLoudnessModifier;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootstepEnhancerChance;                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PhysicalSurfaceVehicleEffectsData
// 0x0020
struct FPhysicalSurfaceVehicleEffectsData
{
	class UParticleSystem*                             ParticleTrail;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParticleTrailSlipModifier;                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParticleTrailDestructionDelay;                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleWave;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParticleWaveSlipModifier;                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ParticleWaveDestructionDelay;                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PhysicalSurfaceEffectsData
// 0x0020
struct FPhysicalSurfaceEffectsData
{
	struct FPhysicalSurfaceVehicleEffectsData          Vehicle;                                                  // 0x0000(0x0020) (Edit)
};

// ScriptStruct ConZ.PlaceableIngredient
// 0x0058
struct FPlaceableIngredient
{
	TArray<class UCraftingItemTag*>                    Tags;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              SpecificItems;                                            // 0x0010(0x0010) (Edit, ZeroConstructor)
	EIngredientUsageRule                               UsageRule;                                                // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<ECraftingType>                              TagsCraftingTypes;                                        // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<ECraftingType>                              SpecificItemsCraftingTypes;                               // 0x0038(0x0010) (Edit, ZeroConstructor)
	EPlaceableIngredientType                           Type;                                                     // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              Required;                                                 // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Satisfied;                                                // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.PlaceableActorStateReplicationHelper
// 0x0008
struct FPlaceableActorStateReplicationHelper
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerMeleeAttackTypes
// 0x0080
struct FPrisonerMeleeAttackTypes
{
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenNotMoving;                      // 0x0000(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenWalking;                        // 0x0008(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenJogging;                        // 0x0010(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenRunning;                        // 0x0018(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                PrimaryMeleeAttackTypeWhenFalling;                        // 0x0020(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenNotMoving;                    // 0x0028(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenWalking;                      // 0x0030(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenJogging;                      // 0x0038(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenRunning;                      // 0x0040(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                SecondaryMeleeAttackTypeWhenFalling;                      // 0x0048(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenNotMoving;                        // 0x0050(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenWalking;                          // 0x0058(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenJogging;                          // 0x0060(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenRunning;                          // 0x0068(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                ComboMeleeAttackTypeWhenFalling;                          // 0x0070(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                BashMeleeAttackType;                                      // 0x0078(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct ConZ.SkillTemplate
// 0x0038
struct FSkillTemplate
{
	ESkillAttribute                                    Attribute;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0008(0x0028) (Edit, BlueprintVisible)
	struct FString                                     ClassName;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ESkillLevel                                        Level;                                                    // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              Experience;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CharacterTemplate
// 0x0088
struct FCharacterTemplate
{
	float                                              Strength;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Constitution;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Dexterity;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Intelligence;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Age;                                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGender                                            Gender;                                                   // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                AppearanceIndex;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TattooIndex;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BreastSize;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PenisSize;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeamIndex;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     BirthDate;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ArrestDate;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSkillTemplate>                      Skills;                                                   // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      Item0;                                                    // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Item1;                                                    // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Item2;                                                    // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PackedLocation
// 0x0008
struct FPackedLocation
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerNearbyFoliageInstanceInfo
// 0x0050
struct FPrisonerNearbyFoliageInstanceInfo
{
	class UInstancedStaticMeshComponent*               InstancedMeshComponent;                                   // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FPackedLocation                             PackedLocation;                                           // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly)
	struct FTransform                                  TransformZeroOrigin;                                      // 0x0010(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UFoliageAssetData*                           FoliageAssetData;                                         // 0x0040(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerNearbyFoliageInfo
// 0x0010
struct FPrisonerNearbyFoliageInfo
{
	TArray<struct FPrisonerNearbyFoliageInstanceInfo>  InstancesInfo;                                            // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConZ.PrisonerNearbyFoliageInstanceInfoReplicated
// 0x0010
struct FPrisonerNearbyFoliageInstanceInfoReplicated
{
	class UInstancedStaticMeshComponent*               InstancedMeshComponent;                                   // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FPackedLocation                             PackedLocation;                                           // 0x0008(0x0008)
};

// ScriptStruct ConZ.PrisonerMountReplication
// 0x0010
struct FPrisonerMountReplication
{
	bool                                               HasMountedSlot;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UObject*                                     MountedSlot;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerTeleportRequest
// 0x001C
struct FPrisonerTeleportRequest
{
	struct FVector                                     TargetLocation;                                           // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	EPrisonerPostTeleportBehavior                      PostTeleportBehavior;                                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.CharacterActionReplicationHelper
// 0x0018
struct FCharacterActionReplicationHelper
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ConZ.ProjectileArrowData
// 0x0018
struct FProjectileArrowData
{
	class UClass*                                      AmmunitionArrowClass;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ItemsHealth;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StiffnessFactor;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlightRotationCorrectionSpeed;                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeviationDegrees;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CharacterActionAck
// 0x000C
struct FCharacterActionAck
{
	int                                                ActionId;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubactionIndex;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	ECharacterActionAckType                            Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	ECharacterActionEndState                           EndState;                                                 // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.ProjectilePointDamageEvent
// 0x0050 (0x00F8 - 0x00A8)
struct FProjectilePointDamageEvent : public FPointDamageEvent
{
	bool                                               IsHeadUpperShot;                                          // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	float                                              EnergyLossPerClothesLayer[0x7];                           // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      KillerLocation;                                           // 0x00C8(0x000C)
	struct FVector_NetQuantize100                      VictimLocation;                                           // 0x00D4(0x000C)
	class UClass*                                      ProjectileClass;                                          // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsFirstHit;                                               // 0x00F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.SkillEventWeapon
// 0x0001
struct FSkillEventWeapon
{
	EWeaponCategory                                    WeaponCategory;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.SkillEventWeaponProjectileHitTarget
// 0x0027 (0x0028 - 0x0001)
struct FSkillEventWeaponProjectileHitTarget : public FSkillEventWeapon
{
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnergyRatio;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsHeadShot;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsKill;                                                   // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               WasSniping;                                               // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	EPrisonerStance                                    Stance;                                                   // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData)
	EWindSpeedCategory                                 WindSpeedCategory;                                        // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              ExperienceMultiplier;                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerWaterMovementParameters
// 0x000C
struct FPrisonerWaterMovementParameters
{
	float                                              MaxSpeed;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Deceleration;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerGroundMovementParameters
// 0x000C
struct FPrisonerGroundMovementParameters
{
	float                                              MaxSpeed;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Deceleration;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.BaseInteractionEvent
// 0x0008
struct FBaseInteractionEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerResponseIdleCompatibleAnimationSets
// 0x0005
struct FPrisonerResponseIdleCompatibleAnimationSets
{
	bool                                               Base;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Rifle;                                                    // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RifleRelaxed;                                             // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UnarmedCombat;                                            // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Handgun;                                                  // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerResponseIdleDescription
// 0x0028
struct FPrisonerResponseIdleDescription
{
	TArray<class UAnimMontage*>                        Montages;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              PreMontageDelay;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PostMontageDelay;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CooldownDuration;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeUsedWhenItemIsInHands;                               // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPrisonerResponseIdleCompatibleAnimationSets CombatibleAnimationsSets;                                 // 0x001D(0x0005) (Edit)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerAppearanceData
// 0x0014
struct FPrisonerAppearanceData
{
	EHumanRace                                         Race;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FGameplayTag                                MeshSet;                                                  // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FGameplayTag                                MaterialSet;                                              // 0x000C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ConZ.PrisonerAppearanceMeshSet
// 0x0048
struct FPrisonerAppearanceMeshSet
{
	class USkeletalMesh*                               HairMesh;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               FacialHairMesh;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               HeadMesh;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               TorsoMesh;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               ArmsMesh;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               HandsMesh;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               LegsMesh;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               FeetMesh;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               PenisMesh;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerAppearanceMaterialSet
// 0x0048
struct FPrisonerAppearanceMaterialSet
{
	class UMaterialInstance*                           HairMaterial;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           FacialHairMaterial;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           HeadMaterial;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           TorsoMaterial;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           ArmsMaterial;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           HandsMaterial;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           LegsMaterial;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           FeetMaterial;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           PenisMaterial;                                            // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerTattooMaterialSet
// 0x0020
struct FPrisonerTattooMaterialSet
{
	bool                                               DeluxeOnly;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UTexture2D*                                  HeadTattoo;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  TorsoTattoo;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  LimbTattoo;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ClothesPartSet
// 0x0050
struct FClothesPartSet
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty ConZ.ClothesPartSet.ClothesParts
};

// ScriptStruct ConZ.SicknessRecord
// 0x0004
struct FSicknessRecord
{
	EDiagnosedResult                                   Diagnose;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           Phase;                                                    // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.DigestionItemRecord
// 0x0038
struct FDigestionItemRecord
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Caption;                                                  // 0x0008(0x0010) (ZeroConstructor)
	class UClass*                                      ItemClass;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           RemainingWeight;                                          // 0x0020(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              Weight;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingVolume;                                          // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Water;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsWaterFromWorld;                                         // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.HealingItemRecord
// 0x0020
struct FHealingItemRecord
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Caption;                                                  // 0x0008(0x0010) (ZeroConstructor)
	uint16_t                                           quantity;                                                 // 0x0018(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerBCUMonitorData
// 0x0128
struct FPrisonerBCUMonitorData
{
	unsigned char                                      Age;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LifeTime;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeethNumber;                                              // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Strength;                                                 // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Constitution;                                             // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Dexterity;                                                // 0x000B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Intelligence;                                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      StrengthGain;                                             // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ConstitutionGain;                                         // 0x000E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DexterityGain;                                            // 0x000F(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      StrengthRate;                                             // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ConstitutionRate;                                         // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DexterityRate;                                            // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
	uint16_t                                           Weight;                                                   // 0x0014(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           InitialWeight;                                            // 0x0016(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           StorageFat;                                               // 0x0018(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      BFP;                                                      // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	uint16_t                                           MuscleMass;                                               // 0x001C(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WeightLoad;                                               // 0x001E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	uint16_t                                           FoodWeight;                                               // 0x0020(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           MaxFoodWeight;                                            // 0x0022(0x0002) (ZeroConstructor, IsPlainOldData)
	float                                              StomachVolumeOccupied;                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StomachVolumeMax;                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StomachWater;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IntestineVolumeOccupied;                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IntestineVolumeMax;                                       // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              IntestineWater;                                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ColonVolumeOccupied;                                      // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ColonVolumeMax;                                           // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BladderVolumeOccupied;                                    // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BladderVolumeMax;                                         // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           gearWeight;                                               // 0x004C(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WLT;                                                      // 0x004E(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WLTEasy;                                                  // 0x0050(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WLTDemanding;                                             // 0x0052(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WLTVeryDemanding;                                         // 0x0054(0x0002) (ZeroConstructor, IsPlainOldData)
	int8_t                                             BodyTempCategory;                                         // 0x0056(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             BodyTempIncrease;                                         // 0x0057(0x0001) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Blood;                                                    // 0x0058(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           MinBlood;                                                 // 0x005A(0x0002) (ZeroConstructor, IsPlainOldData)
	float                                              Calories;                                                 // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           DailyCaloriesIntake;                                      // 0x0060(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CaloriesUsageSpeed;                                       // 0x0062(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0063(0x0001) MISSED OFFSET
	uint16_t                                           CaloriesIdle;                                             // 0x0064(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           CaloriesWalking;                                          // 0x0066(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           CaloriesJogging;                                          // 0x0068(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           CaloriesRunning;                                          // 0x006A(0x0002) (ZeroConstructor, IsPlainOldData)
	float                                              EnergyIntake;                                             // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnergyUsage;                                              // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MetabolicCalories;                                        // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Water;                                                    // 0x0078(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	float                                              WaterIntake;                                              // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WaterUsage;                                               // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           DailyWaterIntake;                                         // 0x0084(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeFat;                                                // 0x0086(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeSaturatedFat;                                       // 0x0088(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeSugar;                                              // 0x008A(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeSodium;                                             // 0x008C(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeCarbs;                                              // 0x008E(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeFiber;                                              // 0x0090(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeProteins;                                           // 0x0092(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            IntakeAlcohol;                                            // 0x0094(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0096(0x0002) MISSED OFFSET
	float                                              DailyFatCalories;                                         // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DailySugarCalories;                                       // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DailyCarbsCalories;                                       // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DailyProteinsCalories;                                    // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DailyAlcoholCalories;                                     // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<int16_t>                                    IntakeVitamins;                                           // 0x00B0(0x0010) (ZeroConstructor)
	TArray<int16_t>                                    IntakeMinerals;                                           // 0x00C0(0x0010) (ZeroConstructor)
	unsigned char                                      MSR;                                                      // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x00D1(0x0001) MISSED OFFSET
	int16_t                                            CurrentStaminaChange;                                     // 0x00D2(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            SCRIdle;                                                  // 0x00D4(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            SCRWalking;                                               // 0x00D6(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           CurrentWaterConsumption;                                  // 0x00D8(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WCRIdle;                                                  // 0x00DA(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WCRWalking;                                               // 0x00DC(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WCRJogging;                                               // 0x00DE(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WCRRunning;                                               // 0x00E0(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           CurrentCaloriesConsumption;                               // 0x00E2(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HealingSpeed;                                             // 0x00E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ViewRange;                                                // 0x00E5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PerformanceFailure;                                       // 0x00E6(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SpeedModifier;                                            // 0x00E7(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      StaminaRecoveryModifier;                                  // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      StaminaConsumptionModifier;                               // 0x00E9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WCRModifier;                                              // 0x00EA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CaloriesBurntModifier;                                    // 0x00EB(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HoldingBreathModifier;                                    // 0x00EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HealingSpeedModifier;                                     // 0x00ED(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HealthPointsModifier;                                     // 0x00EE(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ResistPoisonsModifier;                                    // 0x00EF(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<struct FSicknessRecord>                     Sicknesses;                                               // 0x00F0(0x0010) (ZeroConstructor)
	TArray<struct FDigestionItemRecord>                DigestionItems;                                           // 0x0100(0x0010) (ZeroConstructor)
	TArray<struct FHealingItemRecord>                  HealingItems;                                             // 0x0110(0x0010) (ZeroConstructor)
	uint16_t                                           AirTemp;                                                  // 0x0120(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           WindSpeed;                                                // 0x0122(0x0002) (ZeroConstructor, IsPlainOldData)
	bool                                               BCUDataInitializedOnServer;                               // 0x0124(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerClimbAnimationInfo
// 0x0040
struct FPrisonerClimbAnimationInfo
{
	float                                              MinEdgeHeight;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxEdgeHeight;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VaultDistance;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxVaultLandHeightError;                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AnchorOffset;                                             // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           AnchoringAnimation;                                       // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnchoringAnimationTime;                                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnchoringDuration;                                        // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbingMontage;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              staminaDrain;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresEmptyLHand;                                       // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresEmptyRHand;                                       // 0x003D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.WindowClimbingAnimationInfo
// 0x0048
struct FWindowClimbingAnimationInfo
{
	struct FVector                                     AnchorOffset;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           AnchoringAnimation;                                       // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnchoringAnimationTime;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnchoringDuration;                                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ClimbingMontage;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinWindowWidth;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinWindowHeight;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpacingToLeftWindowEdge;                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpacingToRightWindowEdge;                              // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinWindowDistanceToFloor;                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWindowDistanceToFloor;                                 // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              staminaDrain;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.LadderInfoRepData
// 0x0050
struct FLadderInfoRepData
{
	struct FTransform                                  LadderTransform;                                          // 0x0000(0x0030) (IsPlainOldData)
	struct FVector                                     CapsuleBias;                                              // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RootBoneOffset;                                           // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              StepHeight;                                               // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      PhysicalSurfaceForSounds;                                 // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NumberOfSteps;                                            // 0x004D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.WindowInfo
// 0x00D0
struct FWindowInfo
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  TransformInverse;                                         // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Anchor;                                                   // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FWindowClimbingAnimationInfo                AnimationInfo;                                            // 0x0078(0x0048) (Edit, BlueprintVisible)
	int                                                AnimationIndex;                                           // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00C4(0x000C) MISSED OFFSET
};

// ScriptStruct ConZ.LadderInfo
// 0x00B0
struct FLadderInfo
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  TransformInverse;                                         // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  Edge;                                                     // 0x0060(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     CapsuleBias;                                              // 0x0090(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StepHeight;                                               // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StepWidth;                                                // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasEdge;                                                  // 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsNarrow;                                                 // 0x00A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      PhysicalSurfaceForSounds;                                 // 0x00A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00A7(0x0001) MISSED OFFSET
	int                                                NumberOfSteps;                                            // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HitStepIndex;                                             // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ClimbableObstacleInfo
// 0x0080
struct FClimbableObstacleInfo
{
	struct FVector                                     EdgeLocation;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeHeight;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HWallNormal;                                              // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VWallNormal;                                              // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CapsuleLocationAtAnchor;                                  // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CapsuleRotationAtAnchor;                                  // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FPrisonerClimbAnimationInfo                 AnimationInfo;                                            // 0x0040(0x0040) (Edit, BlueprintVisible)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Walking
// 0x0030
struct FPrisonerMovementSettings_Ground_Standing_Walking
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           MeleeCombat;                                              // 0x000C(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                             // 0x0018(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAimingDownTheSights;                                // 0x0024(0x000C) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Jogging
// 0x0024
struct FPrisonerMovementSettings_Ground_Standing_Jogging
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           MeleeCombat;                                              // 0x000C(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                             // 0x0018(0x000C) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing_Running
// 0x000C
struct FPrisonerMovementSettings_Ground_Standing_Running
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Standing
// 0x00B4
struct FPrisonerMovementSettings_Ground_Standing
{
	struct FPrisonerMovementSettings_Ground_Standing_Walking Walking;                                                  // 0x0000(0x0030) (Edit)
	struct FPrisonerMovementSettings_Ground_Standing_Walking WalkLimping;                                              // 0x0030(0x0030) (Edit)
	struct FPrisonerMovementSettings_Ground_Standing_Jogging Jogging;                                                  // 0x0060(0x0024) (Edit)
	struct FPrisonerMovementSettings_Ground_Standing_Jogging JogLimping;                                               // 0x0084(0x0024) (Edit)
	struct FPrisonerMovementSettings_Ground_Standing_Running Running;                                                  // 0x00A8(0x000C) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Crouching_Walking
// 0x0024
struct FPrisonerMovementSettings_Ground_Crouching_Walking
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                             // 0x000C(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAimingDownTheSights;                                // 0x0018(0x000C) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Crouching
// 0x006C
struct FPrisonerMovementSettings_Ground_Crouching
{
	struct FPrisonerMovementSettings_Ground_Crouching_Walking Walking;                                                  // 0x0000(0x0024) (Edit)
	struct FPrisonerMovementSettings_Ground_Crouching_Walking WalkingFaster;                                            // 0x0024(0x0024) (Edit)
	struct FPrisonerMovementSettings_Ground_Crouching_Walking WalkLimping;                                              // 0x0048(0x0024) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Prone_Walking
// 0x0024
struct FPrisonerMovementSettings_Ground_Prone_Walking
{
	struct FPrisonerGroundMovementParameters           Default;                                                  // 0x0000(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAiming;                                             // 0x000C(0x000C) (Edit)
	struct FPrisonerGroundMovementParameters           WeaponAimingDownTheSights;                                // 0x0018(0x000C) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground_Prone
// 0x0024
struct FPrisonerMovementSettings_Ground_Prone
{
	struct FPrisonerMovementSettings_Ground_Prone_Walking Walking;                                                  // 0x0000(0x0024) (Edit)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Ground
// 0x016C
struct FPrisonerMovementSettings_Ground
{
	struct FPrisonerMovementSettings_Ground_Standing   Standing;                                                 // 0x0000(0x00B4) (Edit)
	struct FPrisonerMovementSettings_Ground_Crouching  Crouching;                                                // 0x00B4(0x006C) (Edit)
	struct FPrisonerMovementSettings_Ground_Prone      Prone;                                                    // 0x0120(0x0024) (Edit)
	float                                              MaxSpeedMultiplierWhenDexterityIsMinimal;                 // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedMultiplierWhenDexterityIsMaximal;                 // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMinimal;             // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMaximal;             // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMinimal;             // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMaximal;             // 0x0158(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedWhenImmersedInWaterAndDexterityIsMinimal;         // 0x015C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedWhenImmersedInWaterAndDexterityIsMaximal;         // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenImmersedInWater;                // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenImmersedInWater;                // 0x0168(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Air
// 0x000C
struct FPrisonerMovementSettings_Air
{
	float                                              JumpZVelocity;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpZVelocityMultiplierWhenDexterityIsMinimal;            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpZVelocityMultiplierWhenDexterityIsMaximal;            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerMovementSettings_Water
// 0x0054
struct FPrisonerMovementSettings_Water
{
	struct FPrisonerWaterMovementParameters            Slow;                                                     // 0x0000(0x000C) (Edit)
	struct FPrisonerWaterMovementParameters            Medium;                                                   // 0x000C(0x000C) (Edit)
	struct FPrisonerWaterMovementParameters            Fast;                                                     // 0x0018(0x000C) (Edit)
	struct FPrisonerWaterMovementParameters            DivingSlow;                                               // 0x0024(0x000C) (Edit)
	struct FPrisonerWaterMovementParameters            DivingMedium;                                             // 0x0030(0x000C) (Edit)
	float                                              MaxSpeedMultiplierWhenDexterityIsMinimal;                 // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedMultiplierWhenDexterityIsMaximal;                 // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMinimal;             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplierWhenDexterityIsMaximal;             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMinimal;             // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplierWhenDexterityIsMaximal;             // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerRestingData
// 0x0010
struct FPrisonerRestingData
{
	EPrisonerRestingMode                               Mode;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsRestingOnGround;                                        // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               HasChangedTransform;                                      // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               HasDisabledCapsuleCollision;                              // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAnimSequenceBase>            RestingAnimation;                                         // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FeetIKOffset;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerRestingDataAutonomous
// 0x001C
struct FPrisonerRestingDataAutonomous
{
	bool                                               HasDisabledMovement;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector_NetQuantize                         Location;                                                 // 0x0004(0x000C)
	struct FVector_NetQuantize                         EulerRotation;                                            // 0x0010(0x000C)
};

// ScriptStruct ConZ.PrisonerInitialSkillInfo
// 0x0010
struct FPrisonerInitialSkillInfo
{
	class USkill*                                      Skill;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESkillLevel                                        InitialLevel;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              InitialExperiencePoints;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.MedicalRecord
// 0x0028
struct FMedicalRecord
{
	uint32_t                                           ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class APrisoner*                                   Patient;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               CheckSuccessful;                                          // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<uint32_t>                                   Diagnoses;                                                // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.SkillRecord
// 0x000C
struct FSkillRecord
{
	ESkillReplicationID                                ID;                                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ExperiencePoints;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESkillLevel                                        Level;                                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int8_t                                             counter;                                                  // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.ActiveMovingThroughFoliageSounds
// 0x0020
struct FActiveMovingThroughFoliageSounds
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UAkAudioEvent*                               StartAudioEvent;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopAudioEvent;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.LocalOffsetCurves
// 0x0020
struct FLocalOffsetCurves
{
	class UCurveLinearColor*                           YawIdle;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           YawMoving;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           PitchIdle;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           PitchMoving;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ProjectileData
// 0x0048
struct FProjectileData
{
	struct FText                                       Caption;                                                  // 0x0000(0x0028) (Edit, DisableEditOnInstance)
	float                                              Caliber;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weight;                                                   // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MuzzleVelocity;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BallisticCoefficient;                                     // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EBallisticDragModel                                BallisticDragModel;                                       // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              InitialDamage;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PenetrationFactor;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlancingAngle;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowGlanceOrForceBounce;                                 // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              BounceAngle;                                              // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ConZ.FiredShotDescriptionRep
// 0x0004
struct FFiredShotDescriptionRep
{
	uint32_t                                           PackedData;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ImpactEffectData
// 0x0010
struct FImpactEffectData
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   Decal;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.RadioStationTrackData
// 0x0028
struct FRadioStationTrackData
{
	class URadioTrack*                                 Track;                                                    // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAkAudioEvent*>                       StartEvents;                                              // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<class UAkAudioEvent*>                       StopEvents;                                               // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConZ.RadioProgramData
// 0x0018
struct FRadioProgramData
{
	class UClass*                                      ProgramClass;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class URadioProgram*                               Program;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Chance;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.RepairToolItemParams
// 0x0040
struct FRepairToolItemParams
{
	struct FGameplayTagContainer                       RepairableItemTypes;                                      // 0x0000(0x0020) (Edit)
	class UAkAudioEvent*                               StartRepairSound;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopRepairSound;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                StartRepairMontage;                                       // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                StopRepairMontage;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ReplenishableResourceDescription
// 0x0030
struct FReplenishableResourceDescription
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FGameplayTag                                Type;                                                     // 0x0008(0x0008) (Edit)
	float                                              InitialAmount;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAmount;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReplenishInterval;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReplenishAmount;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.RestorableMeshInstanceId
// 0x0018
struct FRestorableMeshInstanceId
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ConZ.RunningSkillParametersPerSkillLevel
// 0x0010
struct FRunningSkillParametersPerSkillLevel
{
	struct FExperienceDependentFloat                   MaxSpeedMultiplier;                                       // 0x0000(0x0008) (Edit)
	struct FExperienceDependentFloat                   StaminaConsumptionMultiplier;                             // 0x0008(0x0008) (Edit)
};

// ScriptStruct ConZ.SearchPerItemData
// 0x0028
struct FSearchPerItemData
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UPhysicalMaterial*>                   NeededMaterials;                                          // 0x0008(0x0010) (Edit, ZeroConstructor)
	float                                              Probability;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinQuantity;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxQuantity;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.BodyPartData
// 0x0014
struct FBodyPartData
{
	float                                              ProjectileDamageMultiplierPerBodyPart;                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionDamageMultiplierPerBodyPart;                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BodyPartMaxHealth;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x000C(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.SentryPatrolPoint
// 0x0020
struct FSentryPatrolPoint
{
	struct FVector                                     LocationRelativeToSentry;                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x000C(0x0014) MISSED OFFSET
};

// ScriptStruct ConZ.DetectionDelayTimerData
// 0x0010
struct FDetectionDelayTimerData
{
	float                                              MinDetectionDelayBasedOnDistance;                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDetectionDelayBasedOnDistance;                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDetectionDelayBasedOnVisibility;                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDetectionDelayBasedOnVisibility;                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ServerInfo
// 0x0050
struct FServerInfo
{
	struct FString                                     Address;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Port;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      PlayerCount;                                              // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxPlayerCount;                                           // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PasswordProtected;                                        // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x002B(0x0001) MISSED OFFSET
	float                                              ping;                                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InGameTime;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     Version;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsComplete;                                               // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.ParticleCollisionDecalData
// 0x0018
struct FParticleCollisionDecalData
{
	class UMaterialInterface*                          Decal;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSize;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSize;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinLifetime;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLifetime;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CompassSkillParametersPerSkillLevel
// 0x0001
struct FCompassSkillParametersPerSkillLevel
{
	unsigned char                                      CompassSkillLevel;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.HandsPoseCorrections
// 0x0040
struct FHandsPoseCorrections
{
	class UAnimSequenceBase*                           RightHand;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RightFist;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RightFistInCombatMode;                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightHandToIdleBlendAlpha;                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           LeftHand;                                                 // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           LeftFist;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           LeftFistInCombatMode;                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeftHandToIdleBlendAlpha;                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.TeamDeathmatchParameters
// 0x0014
struct FTeamDeathmatchParameters
{
	int                                                RoundScoreLimit;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaRestrictionInterval;                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaRestrictionDuration;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AreaRestrictionStep;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BarrierHeatUpDuration;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.TeleportUserDataReplicator
// 0x0008
struct FTeleportUserDataReplicator
{
	class UTeleportUserData*                           UserData;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.TeleportRepData
// 0x0030
struct FTeleportRepData
{
	unsigned char                                      RequestID;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsInProgress;                                             // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       Subject;                                                  // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FTeleportUserDataReplicator                 UserDataReplicator;                                       // 0x0028(0x0008)
};

// ScriptStruct ConZ.TireSurfaceAudioEntry
// 0x0018
struct FTireSurfaceAudioEntry
{
	class UAkAudioEvent*                               SoundGroup;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EPhysicalSurface>>              RelatedPhysicalSurfaces;                                  // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.Tractor4WAnimWheelData
// 0x0008
struct FTractor4WAnimWheelData
{
	float                                              RollAngle;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SteerAngle;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.VehicleCorpseBurningParticles
// 0x0070
struct FVehicleCorpseBurningParticles
{
	class UParticleSystem*                             particles;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  ParticlesTransform;                                       // 0x0010(0x0030) (Edit, IsPlainOldData)
	struct FHeatSourceParameters                       HeatSourceParameters;                                     // 0x0040(0x0020) (Edit)
	struct FDbIntegerId                                HeatSourceId;                                             // 0x0060(0x0008)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleSpawnerDataBasedOnPreset
// 0x0028
struct FVehicleSpawnerDataBasedOnPreset
{
	class UClass*                                      preset;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideVehicleClasses;                                   // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideProbability;                                      // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x000A(0x0010) UNKNOWN PROPERTY: ArrayProperty ConZ.VehicleSpawnerDataBasedOnPreset.VehicleClasses
	float                                              Probability;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleSpawnerMarker
// 0x0060
struct FVehicleSpawnerMarker
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, IsPlainOldData)
	struct FVehicleSpawnerDataBasedOnPreset            Spawner;                                                  // 0x0030(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ExpirableVehicleSpawner
// 0x0028
struct FExpirableVehicleSpawner
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int64_t                                            ExpirationTime;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPrimaryAssetId                             VehicleAssetId;                                           // 0x0014(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleSpawnerData
// 0x0018
struct FVehicleSpawnerData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty ConZ.VehicleSpawnerData.VehicleClasses
	float                                              Probability;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ClassesArray
// 0x0020
struct FClassesArray
{
	TArray<class UClass*>                              Classes;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              ProhibitedClasses;                                        // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.WashItemData
// 0x0010
struct FWashItemData
{
	class UClass*                                      CleanItem;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WashItemUsage;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.Waypoint
// 0x0030
struct FWaypoint
{
	EAnimalWaypointType                                Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Center;                                                   // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                AnimalsSpawnedNum;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<TWeakObjectPtr<class AAnimal2>>             SpawnedAnimals;                                           // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.WeaponBowAimOffsets
// 0x0018
struct FWeaponBowAimOffsets
{
	class UBlendSpace*                                 DrawPercentage[0x3];                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponBowArmsShake
// 0x0030
struct FWeaponBowArmsShake
{
	class UAnimSequenceBase*                           ThirdPerson[0x3];                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           FirstPerson[0x3];                                         // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponBowStateDataReplicated
// 0x000C
struct FWeaponBowStateDataReplicated
{
	EBowDrawPercentage                                 BowDrawPercentage;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              HoldTimeInFullDraw;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	EWeaponBowState                                    WeaponBowState;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieMeshVariation2
// 0x0010
struct FZombieMeshVariation2
{
	class USkeletalMesh*                               DressedMesh;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               StrippedMesh;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ZombieRelaxedStanceAnimations
// 0x0008
struct FZombieRelaxedStanceAnimations
{
	class UAnimSequenceBase*                           WalkLoopAnimation;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ZombieRelaxedStanceVariation2
// 0x0020
struct FZombieRelaxedStanceVariation2
{
	struct FZombieRelaxedStanceAnimations              Animations;                                               // 0x0000(0x0008) (Edit)
	float                                              WalkAcceleration;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkDeceleration;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeed;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeedInAnimation;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkTurnRate;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieCombatStanceAnimations
// 0x0018
struct FZombieCombatStanceAnimations
{
	class UAnimSequenceBase*                           RunStartAnimation;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RunLoopAnimation;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RunStopAnimation;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ZombieCombatStanceVariation2
// 0x0030
struct FZombieCombatStanceVariation2
{
	struct FZombieCombatStanceAnimations               Animations;                                               // 0x0000(0x0018) (Edit)
	float                                              RunAcceleration;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunDeceleration;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunSpeedInAnimation;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunTurnRate;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieTurnMontageDescription
// 0x0040
struct FZombieTurnMontageDescription
{
	class UAnimSequenceBase*                           AnimationL90;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AnimationL180;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AnimationR90;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AnimationR180;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       TurnAngleCurveName;                                       // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTriggerTime;                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ZombieAttackDescription
// 0x0020
struct FZombieAttackDescription
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              PitchRange;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDistance;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlMultiplier;                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieRagdollAutoRecovery
// 0x0008
struct FZombieRagdollAutoRecovery
{
	EZombieRagdollAutoRecoveryType                     Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Timespan;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ZombieMeshVariation
// 0x0020
struct FZombieMeshVariation
{
	struct FGameplayTag                                Name;                                                     // 0x0000(0x0008) (Edit)
	class USkeletalMesh*                               DressedMesh;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               StrippedMesh;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EGender                                            Gender;                                                   // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieAttributesVariation
// 0x0040
struct FZombieAttributesVariation
{
	struct FGameplayTagContainer                       CompatibleMeshVariations;                                 // 0x0000(0x0020) (Edit)
	float                                              HitPoints;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReceivedMeleeDamageMultiplier;                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReceivedMeleeDamageKnockoutChanceMultiplier;              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InflictedMeleeDamageMultiplier;                           // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinConsecutiveReceivedDamageRatioToBeKnockedOut;          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxConsecutiveReceivedDamageRatioToBeKnockedOut;          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinNumConsecutiveReceivedMeleeHitsToBeKnockedOut;         // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumConsecutiveReceivedMeleeHitsToBeKnockedOut;         // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ZombieRelaxedStanceVariation
// 0x0040
struct FZombieRelaxedStanceVariation
{
	struct FGameplayTagContainer                       CompatibleMeshVariations;                                 // 0x0000(0x0020) (Edit)
	class UAnimSequenceBase*                           WalkLoopAnimation;                                        // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkAcceleration;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkDeceleration;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeed;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkSpeedInAnimation;                                     // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WalkTurnRate;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ZombieCombatStanceVariation
// 0x0050
struct FZombieCombatStanceVariation
{
	struct FGameplayTagContainer                       CompatibleMeshVariations;                                 // 0x0000(0x0020) (Edit)
	class UAnimSequenceBase*                           RunStartAnimation;                                        // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RunLoopAnimation;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RunStopAnimation;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunAcceleration;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunDeceleration;                                          // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunSpeedInAnimation;                                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RunTurnRate;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ZombiesVariations
// 0x0040
struct FZombiesVariations
{
	TArray<struct FZombieMeshVariation>                MeshVariations;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FZombieAttributesVariation>          AttributesVariations;                                     // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FZombieRelaxedStanceVariation>       RelaxedStanceVariations;                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<struct FZombieCombatStanceVariation>        CombatStanceVariations;                                   // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.AchievementStats
// 0x0001
struct FAchievementStats
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ConZ.Achievements
// 0x0001
struct FAchievements
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ConZ.AnimalData
// 0x0028
struct FAnimalData
{
	class UClass*                                      AnimalClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class AAnimal2*>                            AliveAnimals;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<class ACorpse*>                             DeadAnimals;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct ConZ.BaseDamageInteractionEvent
// 0x0008 (0x0010 - 0x0008)
struct FBaseDamageInteractionEvent : public FBaseInteractionEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.HitByMeleeImpactSoundsInfo
// 0x0010
struct FHitByMeleeImpactSoundsInfo
{
	ECharacterImpactSourceSoundCategory                ImpactSourceSoundCategory;                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDamageMagnitudeType                               DamageMagnitudeType;                                      // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDetectHitCollisionType                            ImpactBodyPart;                                           // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FVector                                     ImpactPoint;                                              // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CharacterSpawneeInfo
// 0x0010
struct FCharacterSpawneeInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.CharacterStats
// 0x0030
struct FCharacterStats
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              FamePoints;                                               // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FameLevel;                                                // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EventScore;                                               // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventKills;                                               // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventTeamKills;                                           // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventDeaths;                                              // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventSuicides;                                            // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventAssists;                                             // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventHeadshots;                                           // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBanned;                                                 // 0x002C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.CharacterStatsItem
// 0x0048
struct FCharacterStatsItem
{
	int                                                Rank;                                                     // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FCharacterStats                             CharacterStats;                                           // 0x0018(0x0030) (BlueprintVisible)
};

// ScriptStruct ConZ.SelectedChoppingTool
// 0x0040
struct FSelectedChoppingTool
{
	class AItem*                                       Item;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FChoppingTool2                              Tool;                                                     // 0x0008(0x0030)
	bool                                               IsRequiredToBeInHands;                                    // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct ConZ.ConZOnDemandElementData
// 0x0030
struct FConZOnDemandElementData
{
	struct FConZBaseElementIdentifier                  ElementIdentifier;                                        // 0x0000(0x0020)
	struct FString                                     OwnerName;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.ConZPlacementQueryParams
// 0x0010
struct FConZPlacementQueryParams
{
	bool                                               IsSnapping;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               MustBePlacedOnFoundations;                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               CanEverBePlacedOnFoundations;                             // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               CanBePlacedOnOtherBaseElements;                           // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class APrisoner*                                   User;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ConZBaseElementSnappingPoints
// 0x0078
struct FConZBaseElementSnappingPoints
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct ConZ.ConZBaseElementSnappingPoint
// 0x002C
struct FConZBaseElementSnappingPoint
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0000(0x002C) MISSED OFFSET
};

// ScriptStruct ConZ.ConZBaseElementDescription
// 0x0180
struct FConZBaseElementDescription
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	int64_t                                            ElementID;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ElementName;                                              // 0x0018(0x0010) (ZeroConstructor)
	int64_t                                            OwnerUserId;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     OwnerName;                                                // 0x0030(0x0010) (ZeroConstructor)
	struct FTransform                                  Transform;                                                // 0x0040(0x0030) (IsPlainOldData)
	class UClass*                                      ElementClass;                                             // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	EBaseElementType                                   ElementType;                                              // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0078(0x0001) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0x2];                                       // 0x007A(0x0002) MISSED OFFSET
	struct FVector                                     BoundingBoxMin;                                           // 0x007C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoundingBoxMax;                                           // 0x0088(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HeightLevel;                                              // 0x0094(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxHeightLevel;                                           // 0x0095(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NeighboursFlags;                                          // 0x0096(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0097(0x0001) MISSED OFFSET
	struct FConZBaseElementSnappingPoints              SnappingPoints;                                           // 0x0098(0x0078)
	struct FConZBaseBuildingSnappingData               SnappingData;                                             // 0x0110(0x0010)
	TArray<struct FBaseElementSnapMarker>              SnapMarkers;                                              // 0x0120(0x0010) (ZeroConstructor)
	TArray<struct FConZBaseElementSnappingPoint>       SnappingPointArray;                                       // 0x0130(0x0010) (ZeroConstructor)
	float                                              HealthPointsPercentage;                                   // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxHealthPoints;                                          // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               CanBeDamaged;                                             // 0x0148(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	float                                              HoursToDecay;                                             // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RadialDamageMultiplier;                                   // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               ShouldRemoveIntersectingElementsOnDestroy;                // 0x0154(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0155(0x0003) MISSED OFFSET
	TWeakObjectPtr<class ADoor>                        DoorActor;                                                // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               QueuedDestroy;                                            // 0x0160(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0161(0x0003) MISSED OFFSET
	float                                              Quality;                                                  // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FBaseElementDamageZone>              DamageZones;                                              // 0x0168(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0178(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ConZFlagElementDescription
// 0x0010 (0x0190 - 0x0180)
struct FConZFlagElementDescription : public FConZBaseElementDescription
{
	int64_t                                            OvertakeEndTime;                                          // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDbIntegerId                                OvertakerId;                                              // 0x0180(0x0008)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ConZFlagElementData
// 0x0010
struct FConZFlagElementData
{
	int64_t                                            OvertakeEndTime;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDbIntegerId                                OvertakerId;                                              // 0x0008(0x0008)
};

// ScriptStruct ConZ.ConZBaseElementData
// 0x0070
struct FConZBaseElementData
{
	int64_t                                            ElementID;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            OwnerPlayerId;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	class UClass*                                      ElementClass;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              HealthPoints;                                             // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Quality;                                                  // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DoorElementStateFlags;                                    // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TArray<class UClass*>                              DoorUpgrades;                                             // 0x0058(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ConZMapLocationProperties
// 0x0004
struct FConZMapLocationProperties
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.RecipeAvailabilityState
// 0x00C8
struct FRecipeAvailabilityState
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0000(0x00C8) MISSED OFFSET
};

// ScriptStruct ConZ.RecipeItemState
// 0x001C
struct FRecipeItemState
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct ConZ.CraftingPart
// 0x0030
struct FCraftingPart
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct ConZ.ExplosionRadialDamageEvent
// 0x0010 (0x0050 - 0x0040)
struct FExplosionRadialDamageEvent : public FRadialDamageEvent
{
	struct FRadialDamageParams                         Params;                                                   // 0x0010(0x0014)
	struct FVector                                     Origin;                                                   // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          ComponentHits;                                            // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.BuildingsReplicationHelper
// 0x00E0
struct FBuildingsReplicationHelper
{
	TMap<struct FString, struct FBuildingData>         BuildingsData;                                            // 0x0000(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0050(0x0020) MISSED OFFSET
	TMap<struct FString, struct FDoorRepData>          DoorRepData;                                              // 0x0070(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00C0(0x0020) MISSED OFFSET
};

// ScriptStruct ConZ.FortificationMarkerParams
// 0x0030
struct FFortificationMarkerParams
{
	bool                                               IsValid;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MarkerIndex;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.PlayerPawnBirdInfo
// 0x0010
struct FPlayerPawnBirdInfo
{
	int                                                CoastalBirdsinProximity;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                ContinetalBirdsinProximity;                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                VirtualAssignedCoastalBirds;                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                VirtualAssignedContinentalBirds;                          // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct ConZ.HeatSource
// 0x0040
struct FHeatSource
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FHeatSourceParameters                       parameters;                                               // 0x0010(0x0020) (Edit)
	float                                              FuelDuration;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FuelCapacity;                                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TimesUpdatedWithoutMoving;                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.HitReactResult
// 0x0018
struct FHitReactResult
{
	class UAnimMontage*                                MontageToPlay;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FollowupMontage;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationMultiplier;                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.InstanceManager
// 0x0058
struct FInstanceManager
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct ConZ.InteractionQueryParameters
// 0x0010
struct FInteractionQueryParameters
{
	struct FVector                                     InteractionLocation;                                      // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               IsInDroneMode;                                            // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.InventoryStackMemberData
// 0x0008
struct FInventoryStackMemberData
{
	int                                                Position;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.VirtualizedItemDescription
// 0x0008
struct FVirtualizedItemDescription
{
	TWeakObjectPtr<class AItem>                        Item;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.LandingDamageEvent
// 0x0010 (0x00B8 - 0x00A8)
struct FLandingDamageEvent : public FPointDamageEvent
{
	struct FVector                                     ImpactVelocity;                                           // 0x00A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeAction
// 0x0020
struct FMeleeAction
{
	EMeleeActionType                                   ActionType;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UAnimMontage>                 Montage;                                                  // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StartDelay;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlockDuration;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OrientToTargetSpeedFactor;                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RegainControlDurationModifier;                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.MeleeDodge
// 0x0010
struct FMeleeDodge
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.MeleeAttack
// 0x0018
struct FMeleeAttack
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ConZ.MeleePointDamageEvent
// 0x0058 (0x0100 - 0x00A8)
struct FMeleePointDamageEvent : public FPointDamageEvent
{
	struct FMeleeWeaponDesc                            WeaponDesc;                                               // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FGameplayTag                                AttackCapsuleAttachment;                                  // 0x00D0(0x0008) (Edit, BlueprintVisible)
	EDetectHitCollisionType                            DetectHitCollisionType;                                   // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	class UAnimMontage*                                AttackMontage;                                            // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDamageMagnitudeType                               DamageMagnitudeType;                                      // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	float                                              KnockoutChance;                                           // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EHitDirectionType                                  HitDirectionType;                                         // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	class AItem*                                       Weapon;                                                   // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.CheckMeleeAttackCapsuleCollisionData
// 0x00D0
struct FCheckMeleeAttackCapsuleCollisionData
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0000(0x00D0) MISSED OFFSET
};

// ScriptStruct ConZ.AttackedByMeleeData
// 0x0018
struct FAttackedByMeleeData
{
	TWeakObjectPtr<class AActor>                       attacker;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAnimMontage>                 Montage;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.MeshInstancesMap
// 0x0050
struct FMeshInstancesMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct ConZ.MeshInstances
// 0x0050
struct FMeshInstances
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct ConZ.MeshInstance
// 0x0038
struct FMeshInstance
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct ConZ.MeshItemData
// 0x0058
struct FMeshItemData
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct ConZ.MissionLevelInfo
// 0x0010
struct FMissionLevelInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.ActiveManagers
// 0x0010
struct FActiveManagers
{
	TArray<class AMissionManager*>                     MissionManagers;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ConZ.ObjectiveDataGroup
// 0x0018
struct FObjectiveDataGroup
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty ConZ.ObjectiveDataGroup.RewardItems
	float                                              RewardFamePoints;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ObjectiveTrackableData
// 0x0008
struct FObjectiveTrackableData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.BodyPartInjury
// 0x0008
struct FBodyPartInjury
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ReplicatedState
// 0x0028
struct FReplicatedState
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlacedLocation;                                           // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               IsPlacementAllowed;                                       // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct ConZ.InstrumentEvent
// 0x0010
struct FInstrumentEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.WindowDetectionParams
// 0x0038
struct FWindowDetectionParams
{
	struct FVector                                     CharacterHeadLocation;                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CharacterFeetLocation;                                    // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CharacterForwardVector;                                   // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              MaxHorzDistanceToWindow;                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxCharacterToWindowAngle;                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HorzHitDetectionBias;                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HitDetectionBiasBelowWindow;                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HitDetectionBiasAboveWindow;                              // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.LadderDetectionParams
// 0x0020
struct FLadderDetectionParams
{
	struct FVector                                     RayOrigin;                                                // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RayDirection;                                             // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              MaxHorzDistanceToLadder;                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxRayToLadderAngle;                                      // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerRestingParameters
// 0x0060
struct FPrisonerRestingParameters
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerDistanceTravelledContext
// 0x0018
struct FPrisonerDistanceTravelledContext
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ConZ.PrisonerViolation
// 0x0010
struct FPrisonerViolation
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ConZ.SkillExperienceChange
// 0x0008
struct FSkillExperienceChange
{
	float                                              ExperienceChange;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.PrisonerViewInfo
// 0x0010 (0x05D0 - 0x05C0)
struct FPrisonerViewInfo : public FMinimalViewInfo
{
	float                                              MinViewYaw;                                               // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxViewYaw;                                               // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinViewPitch;                                             // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxViewPitch;                                             // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ProjectileRadialDamageEvent
// 0x0010 (0x0050 - 0x0040)
struct FProjectileRadialDamageEvent : public FRadialDamageEvent
{
	struct FVector_NetQuantizeNormal                   ShotDirection;                                            // 0x0040(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.EngineeringEventData
// 0x0004
struct FEngineeringEventData
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.ReplenishableResource
// 0x0048
struct FReplenishableResource
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct ConZ.ReplenishableResourceSlotDescription
// 0x001C
struct FReplenishableResourceSlotDescription
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct ConZ.RequestSpamFilter
// 0x0014
struct FRequestSpamFilter
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct ConZ.MeshInstancesRestoreOptions
// 0x0004
struct FMeshInstancesRestoreOptions
{
	float                                              RestoreInterval;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.SkillEventThrownItemHitTarget
// 0x0008
struct FSkillEventThrownItemHitTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.SkillEventItemThrown
// 0x0001
struct FSkillEventItemThrown
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ConZ.SkillEventWeaponReload
// 0x0000 (0x0001 - 0x0001)
struct FSkillEventWeaponReload : public FSkillEventWeapon
{
	EWeaponCategory                                    WeaponCategory;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.SkillEventWeaponFireShot
// 0x0000 (0x0001 - 0x0001)
struct FSkillEventWeaponFireShot : public FSkillEventWeapon
{
	EWeaponCategory                                    WeaponCategory;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.ObjectiveItem
// 0x0010
struct FObjectiveItem
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.ThrowingPointDamageEvent
// 0x0018 (0x00C0 - 0x00A8)
struct FThrowingPointDamageEvent : public FPointDamageEvent
{
	TWeakObjectPtr<class AActor>                       ThrownActor;                                              // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitVelocity;                                              // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               IsHeadUpperShot;                                          // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               DidPierce;                                                // 0x00BD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00BE(0x0002) MISSED OFFSET
};

// ScriptStruct ConZ.UsableObjectiveItem
// 0x0010
struct FUsableObjectiveItem
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ConZ.UserProfileAuthorityInfo
// 0x0040
struct FUserProfileAuthorityInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Ip;                                                       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ResponsePort;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GameplayPort;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDbIntegerId                                UserProfileId;                                            // 0x0028(0x0008) (Edit, BlueprintVisible)
	struct FString                                     AuthToken;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ConZ.UserServerHistoryItem
// 0x0028
struct FUserServerHistoryItem
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Host;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ConZ.VehiclePartDescription
// 0x000C
struct FVehiclePartDescription
{
	struct FGameplayTag                                PartType;                                                 // 0x0000(0x0008) (Edit)
	float                                              health;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.VehicleExhaustEffectsParameters
// 0x0070
struct FVehicleExhaustEffectsParameters
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (Edit, IsPlainOldData)
	class UParticleSystem*                             EngineStartedParticleSystem;                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             EngineIdleParticleSystem;                                 // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ThrottlePressedParticleSystem;                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ThrottlePressedAudioEvent;                                // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDurationBetweenThrottlePressedEffects;                 // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DeactivationDelay;                                        // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET
};

// ScriptStruct ConZ.VehicleSpawnerInfo
// 0x0050
struct FVehicleSpawnerInfo
{
	struct FPrimaryAssetId                             VehicleAssetId;                                           // 0x0000(0x0010) (ZeroConstructor)
	struct FTransform                                  VehicleTransform;                                         // 0x0010(0x0030) (IsPlainOldData)
	int64_t                                            VehicleLastAccessTime;                                    // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       VehicleActor;                                             // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.Version
// 0x0010
struct FVersion
{
	int                                                Major;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Minor;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Build;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Revision;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConZ.WeaponBowDrawData
// 0x000C
struct FWeaponBowDrawData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ConZ.MalfunctionData
// 0x0020
struct FMalfunctionData
{
	bool                                               UseCustomChance;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FFloatInterval                              Chance;                                                   // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              ClearMalfunctionSequences;                                // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ConZ.WeaponSyncData
// 0x000C
struct FWeaponSyncData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ConZ.WorldEventDrawData
// 0x0050
struct FWorldEventDrawData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

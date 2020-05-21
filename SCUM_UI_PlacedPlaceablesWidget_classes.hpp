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

// WidgetBlueprintGeneratedClass UI_PlacedPlaceablesWidget.UI_PlacedPlaceablesWidget_C
// 0x0014 (0x02B4 - 0x02A0)
class UUI_PlacedPlaceablesWidget_C : public UPlacedPlaceableWidget
{
public:
	TArray<class UUI_PlacedPlaceableIcon_C*>           _icons;                                                   // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                _placeableIndex;                                          // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PlacedPlaceablesWidget.UI_PlacedPlaceablesWidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

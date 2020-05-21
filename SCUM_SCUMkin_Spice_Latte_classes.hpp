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

// BlueprintGeneratedClass SCUMkin_Spice_Latte.SCUMkin_Spice_Latte_C
// 0x0000 (0x07B8 - 0x07B8)
class ASCUMkin_Spice_Latte_C : public ADrinkItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SCUMkin_Spice_Latte.SCUMkin_Spice_Latte_C");
		return ptr;
	}


	void OnRep_Temperature();
	void OnRep_ItemOpened();
	void OnRep_IsCooking();
	void OnAudioComponentExpired();
	bool IsCooking();
	float GetVolume();
	float GetThermalConductivityFactor();
	float GetTemperature();
	float GetEnvironmentTemperature();
	float GetCookingAmount();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
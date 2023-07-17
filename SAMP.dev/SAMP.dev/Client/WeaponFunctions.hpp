#pragma once
#include "Client.hpp"

namespace Client
{
	namespace WeaponFunctions
	{
		EXPORT int HasWeaponIDClip(int weaponID);
		EXPORT int GetPlayerWeaponID();
		EXPORT int GetPlayerWeaponType();
		EXPORT int GetPlayerWeaponSlot();
		EXPORT int GetPlayerWeaponName(int dwWeapSlot, char* &_szWeapName, int max_len);
		EXPORT int GetPlayerWeaponClip(int dwWeapSlot);
		EXPORT int GetPlayerWeaponTotalClip(int dwWeapSlot);
		EXPORT int GetPlayerWeaponState();
		EXPORT int GetPlayerWeaponAmmo(int weaponType);
		EXPORT int GetPlayerWeaponAmmoInClip(int weaponType);
	}
}
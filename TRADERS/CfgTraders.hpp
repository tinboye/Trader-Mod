	/**
	 * Weapons, scopes, silencers, ammo
	 */
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
			"PointerAttachments",
			"CUPPointerAttachments",
			"MASPointerAttachments",
			"R3FPointerAttachments",
			"RHSPointerAttachments",
			"BipodAttachments",
			"APEXBipodAttachments",
			"R3FBipodAttachments",
			"RHSBipodAttachments",
			"MuzzleAttachments",
			"APEXMuzzleAttachments",
			"HLCMuzzleAttachments",
			"CUPMuzzleAttachments",
			"MASMuzzleAttachments",
			"R3FMuzzleAttachments",
			"RHSMuzzleAttachments",
			"OpticAttachments",
			"APEXOpticAttachments",
			"HLCOpticAttachments",
			"CUPOpticAttachments",
			"MASOpticAttachments",
			"R3FOpticAttachments",
			"RHSOpticAttachments",
			"Ammunition",
			"APEXAmmunition",
			"HLCAmmunition",
			"CUPAmmunition",
			"MASAmmunition",
			"R3FAmmunition",
			"RHSAmmunition",
			"Pistols",
			"APEXPistols",
			"CUPPistols",
			"MASPistols",
			"R3FPistols",
			"RHSPistols",
			"Shotguns",
			"SubMachineGuns",
			"APEXSubMachineGuns",
			"CUPSubMachineGuns",
			"MASSubMachineGuns",
			"R3FSubMachineGuns",
			"LightMachineGuns",
			"APEXLightMachineGuns",
			"HLCLightMachineGuns",
			"CUPLightMachineGuns",
			"MASLightMachineGuns",
			"R3FLightMachineGuns",
			"RHSLightMachineGuns",
			"AssaultRifles",
			"APEXAssaultRifles",
			"HAPASSAULTRIFLES",
			"HLCAssaultRifles",
			"CUPAssaultRifles",
			"MASAssaultRifles",
			"R3FAssaultRifles",
			"RHSAssaultRifles",
			"SniperRifles",
			"APEXSniperRifles",
			"HAPSNIPERRIFLES",
			"HLCSniperRifles",
			"HWPweapons",
			"CUPSniperRifles",
			"MASSniperRifles",
			"R3FSniperRifles",
			"RHSSniperRifles"
		};
	};

	/**
	 * Satchels, nades, UAVs, static MGs
	 */
	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] = 
		{
			"Flares",
			"Smokes",
			"UAVs",
			"StaticMGs",
			"Navigation",
			"ExplosiveWeapons",
			"Explosives",
			"A3Launchers",
			"CUPLaunchers",
			"MASLaunchers",
			"R3FLaunchers",
			"RHSLaunchers",
			"CUPLauncherAmmo",
			"MASLauncherAmmo",
			"R3FLauncherAmmo",
			"RHSLauncherAmmo",
			"A3LauncherAmmo",	
			"CUPExplosive",
			"MASExplosive",
			"RHSMines"
		};
	};

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{	
		name = "EQUIPMENT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Headgear",
			"APEXHeadgear",
			"HAPHEADGEAR",
			"MASHeadgear",
			"RHSHeadgear",
			"TRYKHeadgear",
			"Uniforms",
			"APEXUniforms",
			"HAPUNIFORMS",
			"RHSUniforms",
			"TRYKUniforms",
			"Vests",
			"APEXVests",
			"HAPVESTS",
			"RHSVests",
			"TRYKVests",
			"Backpacks",
			"APEXBackpacks",
			"A3Backpacks",
			"HAPBACKPACKS",
			"MASBackpacks",
			"TRYKBackpacks",
			"Tools",
			"APEXTools",
			"MASTools",
			"FirstAid"
		};
	};

	/**
	 * Cans, cans, cans
	 */
	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Food",
			"Drinks"
		};
	};

	/**
	 * Light bulbs, metal, etc.
	 */
	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware",
			//"R3FTools",
			"CBuilding"
		};
	};

	/**
	 * Sells cars and general vehicles
	 */
	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Bikes",
			"Cars",
			"A3Cars",
			"HAPCARS",
			"HVPCars",
			"JonzieCars",
			"MASCars",
			"CUPUnarmed",
			"HAPTRUCKS",
			"MASTrucks",
			"CUPArmed",
			"MASArmed",
			"A3Armed",
			"RHSVehicles",
			"CTrucks",
			"Trucks",
			"A3Trucks",
			"CUGVs"
			//"MASTanks"
			//"A3Tanks"	
			//"UGV"	
			//"A3UGVs"				
		};
	};

	/**
	 * Sells choppers and planes
	 */
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Choppers", 
			"CChoppers",			
			"CUPChoppers",
			"MASChoppers",
			"RHSChoppers",
			"A3unarmedChoppers",
			"A3armedChoppers",
			"Planes",
			"A3Planes",
			"CPlanes",
			"HVPPlanes",
			"MASPlanes",
			"RHSPlanes",
			//"CUAVs",
			//"A3UAVs",
			"Pods"		
		};
	};

	/**
	 * Sells ships and boats
	 */ 
	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats",
			"A3Boats",
		};
	};

	class Exile_Trader_Diving
	{
		name = "DIVERS";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Diving"
		};
	};	
	
	/**
	 * Sells Community Items
	 */ 
	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community"
		};
	};
	class Exile_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community2"
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community3"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community5"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community7"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	};
class CfgPatches
{
	class Azkaban_dm
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Gear_Tools","DZ_Gear_Containers","DZ_Weapons_Melee"};
	};
};
class CfgMods
{
	class Azkaban_dm
	{
		dir = "Azkaban_dm";
		//picture = "Deron\DM_furniture\gui\dmp.paa";
		action = "";
		hideName = 0;
		hidePicture = 0;
		//name = "DMF_Scripts";
		credits = "Deron";
		author = "Deron";
		authorID = "https://steamcommunity.com/profiles/76561198974718264";
		version = "1.28.1";
		extra = 0;
		type = "mod";
		dependencies[] = {"World","Game","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"Azkaban_dm/scripts/3_game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"Azkaban_dm/scripts/4_world"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Azkaban_dm/scripts/5_mission"};
			};
			class imageSets
			{
				files[] = {"Azkaban_dm\gui\dmp_tools.imageset"};
			};
		};
	};
};
class CfgVehicles
{
	class Container_Base;
	class WoodenCrate;
	class BarrelHoles_ColorBase;
	class DMP_Furniture_Base: Container_Base
	{
		scope = 0;
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		quantityBar = 1;
		carveNavmesh = 1;
		// bounding = "BSphere";
		bounding = "BBox";
		overrideDrawArea = "3.0";
		visibilityModifier = 0.95;
		canBeDigged = 0;
		alignHologramToTerain = 1;
		heavyItem = 1;
		weight = 10;
		itemBehaviour = 1;
		physLayer = "item_large";
		simulation = "inventoryItem";
		simpleHiddenSelections[]=
		{
			"hide"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]=
					{
						{1,{}},{0.69999999,{}},{0.5,{}},{0.30000001,{}},{0,{}}
					};
				};
			};
			class GlobalArmor {
				class Projectile {
					class Health {
						damage = 0.022;
					};
					
					class Blood {
						damage = 0;
					};
					
					class Shock {
						damage = 0;
					};
				};
				
				class Melee {
					class Health {
						damage = 0.3;
					};
					
					class Blood {
						damage = 0;
					};
					
					class Shock {
						damage = 0;
					};
				};
				
				class Infected {
					class Health {
						damage = 0;
					};
					
					class Blood {
						damage = 0;
					};
					
					class Shock {
						damage = 0;
					};
				};
				
				class FragGrenade {
					class Health {
						damage = 0.25;
					};
					
					class Blood {
						damage = 0;
					};
					
					class Shock {
						damage = 0;
					};
				};
			};
		};
	};
	class DMP_OpenableFurniture : DMP_Furniture_Base
	{
		class AnimationSources
		{
			class Doors1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
			class Doors2
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
			class Doors3
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
			class Doors4
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
			class Doors5
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
			class Doors6
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};			
		};
	};
	class DMP_UnOpenableFurniture : DMP_Furniture_Base
	{
	};
//####################
//---------KIT--------
//####################
	class DMP_Base_Kit : WoodenCrate
	{
		scope = 0;
		displayName = "$STR_dmpkit0";
		descriptionShort = "$STR_dmpkit0";
		model = "Azkaban_dm\kitbox\dmp_kitbox.p3d";
		itemSize[] = {5,6};
		carveNavmesh = 1;
		canBeDigged = 0;
		simulation = "inventoryItem";
		physLayer = "item_small";
		SingleUseActions[] = {527};
		ContinuousActions[] = {231};
		rotationFlags = 2;
		InteractActions[] = {};
		weight = 280;
		itemBehaviour = 2;
		inventorySlot[] = {""};
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
		class Cargo{};
	};
	class dmp_cratelocker_az_blue_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_cratelocker_az_kit0";
		descriptionShort = "$STR_dmp_cratelocker_az1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_cratelocker_az_green_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_cratelocker_az_kit0";
		descriptionShort = "$STR_dmp_cratelocker_az1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_cratelocker_az_grey_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_cratelocker_az_kit0";
		descriptionShort = "$STR_dmp_cratelocker_az1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_cratelocker_az_red_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_cratelocker_az_kit0";
		descriptionShort = "$STR_dmp_cratelocker_az1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_cratelocker_az_yellow_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_cratelocker_az_kit0";
		descriptionShort = "$STR_dmp_cratelocker_az1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
//	
	class dmp_gear_locker_blue_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gear_locker_az_kit0";
		descriptionShort = "$STR_dmp_gear_locker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gear_locker_green_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gear_locker_az_kit0";
		descriptionShort = "$STR_dmp_gear_locker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gear_locker_grey_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gear_locker_az_kit0";
		descriptionShort = "$STR_dmp_gear_locker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gear_locker_red_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gear_locker_az_kit0";
		descriptionShort = "$STR_dmp_gear_locker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gear_locker_yellow_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gear_locker_az_kit0";
		descriptionShort = "$STR_dmp_gear_locker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
//
	class dmp_gear_lockerV2_blue_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gear_lockerV2_az_kit0";
		descriptionShort = "$STR_dmp_gear_lockerV2_1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gear_lockerV2_green_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gear_lockerV2_az_kit0";
		descriptionShort = "$STR_dmp_gear_lockerV2_1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gear_lockerV2_grey_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gear_lockerV2_az_kit0";
		descriptionShort = "$STR_dmp_gear_lockerV2_1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gear_lockerV2_red_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gear_lockerV2_az_kit0";
		descriptionShort = "$STR_dmp_gear_lockerV2_1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gear_lockerV2_yellow_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gear_lockerV2_az_kit0";
		descriptionShort = "$STR_dmp_gear_lockerV2_1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
//	
	class dmp_gear_lockerV3_blue_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gear_lockerV2_az_kit0";
		descriptionShort = "$STR_dmp_gear_lockerV2_1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gear_lockerV3_green_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gear_lockerV2_az_kit0";
		descriptionShort = "$STR_dmp_gear_lockerV2_1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gear_lockerV3_grey_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gear_lockerV2_az_kit0";
		descriptionShort = "$STR_dmp_gear_lockerV2_1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gear_lockerV3_red_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gear_lockerV2_az_kit0";
		descriptionShort = "$STR_dmp_gear_lockerV2_1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gear_lockerV3_yellow_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gear_lockerV2_az_kit0";
		descriptionShort = "$STR_dmp_gear_lockerV2_1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
//
	class dmp_gunwall_az_blue_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gunwall_az_kit0";
		descriptionShort = "$STR_gunwall_az1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gunwall_az_green_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gunwall_az_kit0";
		descriptionShort = "$STR_gunwall_az1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gunwall_az_grey_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gunwall_az_kit0";
		descriptionShort = "$STR_gunwall_az1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gunwall_az_red_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gunwall_az_kit0";
		descriptionShort = "$STR_gunwall_az1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gunwall_az_yellow_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gunwall_az_kit0";
		descriptionShort = "$STR_gunwall_az1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
//	
	class dmp_gunwall_az_small_blue_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gunwall_az_small_kit0";
		descriptionShort = "$STR_gunwall_az1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gunwall_az_small_green_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gunwall_az_small_kit0";
		descriptionShort = "$STR_gunwall_az1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gunwall_az_small_grey_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gunwall_az_small_kit0";
		descriptionShort = "$STR_gunwall_az1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gunwall_az_small_red_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gunwall_az_small_kit0";
		descriptionShort = "$STR_gunwall_az1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gunwall_az_small_yellow_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gunwall_az_kit0";
		descriptionShort = "$STR_gunwall_az1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
//	
	class dmp_woodencrate100_az_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_woodencrate100_kit0";
		descriptionShort = "$STR_dmp_woodencrate100_1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_woodencrate200_az_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_woodencrate200_kit0";
		descriptionShort = "$STR_dmp_woodencrate200_1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_woodencrate300_az_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_woodencrate300_kit0";
		descriptionShort = "$STR_dmp_woodencrate300_1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_woodencrate400_az_kit: DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_woodencrate400_kit0";
		descriptionShort = "$STR_dmp_woodencrate400_1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
//
	class dmp_tools_locker_blue_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_tools_locker_kit0";
		descriptionShort = "$STR_dmp_tools_locker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_tools_locker_green_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_tools_locker_kit0";
		descriptionShort = "$STR_dmp_tools_locker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_tools_locker_grey_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_tools_locker_kit0";
		descriptionShort = "$STR_dmp_tools_locker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_tools_locker_red_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_tools_locker_kit0";
		descriptionShort = "$STR_dmp_tools_locker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_tools_locker_yellow_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_tools_locker_kit0";
		descriptionShort = "$STR_dmp_tools_locker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
//
	class dmp_repairkit_locker_blue_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_tire_repair_kit_kit0";
		descriptionShort = "$dmp_tire_repair_kit1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_repairkit_locker_green_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_tire_repair_kit_kit0";
		descriptionShort = "$dmp_tire_repair_kit1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_repairkit_locker_grey_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_tire_repair_kit_kit0";
		descriptionShort = "$dmp_tire_repair_kit1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_repairkit_locker_red_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_tire_repair_kit_kit0";
		descriptionShort = "$dmp_tire_repair_kit1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_repairkit_locker_yellow_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_tire_repair_kit_kit0";
		descriptionShort = "$dmp_tire_repair_kit1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
//
	class dmp_gunrack_green_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gunrack_green_kit0";
		descriptionShort = "$STR_dmp_gunrack1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
//
	class dmp_locker_blue_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_locker_kit0";
		descriptionShort = "$STR_dmp_locker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_locker_green_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_locker_kit0";
		descriptionShort = "$STR_dmp_locker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_locker_grey_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_locker_kit0";
		descriptionShort = "$STR_dmp_locker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_locker_red_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_locker_kit0";
		descriptionShort = "$STR_dmp_locker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_locker_yellow_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_locker_kit0";
		descriptionShort = "$STR_dmp_locker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
//
	class dmp_gearstand_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gearstand_kit0";
		descriptionShort = "$STR_dmp_gearstand1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
//
	class dmp_gunlocker_blue_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gunlocker_kit0";
		descriptionShort = "$STR_dmp_gunlocker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gunlocker_green_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gunlocker_kit0";
		descriptionShort = "$STR_dmp_gunlocker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gunlocker_grey_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gunlocker_kit0";
		descriptionShort = "$STR_dmp_gunlocker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gunlocker_red_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gunlocker_kit0";
		descriptionShort = "$STR_dmp_gunlocker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_gunlocker_yellow_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_gunlocker_kit0";
		descriptionShort = "$STR_dmp_gunlocker1";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};	
//
	class dmp_stove_blue_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_stove_kit0";
		descriptionShort = "$";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_stove_green_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_stove_kit0";
		descriptionShort = "$";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_stove_grey_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_stove_kit0";
		descriptionShort = "$";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_stove_red_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_stove_kit0";
		descriptionShort = "$";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_stove_yellow_kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$STR_dmp_stove_kit0";
		descriptionShort = "$";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class dmp_maneken_kit:dmp_gearstand_kit
	{
	};
	/*class kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$";
		descriptionShort = "$";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$";
		descriptionShort = "$";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$";
		descriptionShort = "$";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};
	class kit:DMP_Base_Kit
	{
		scope = 2;
		displayName = "$";
		descriptionShort = "$";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\kitbox\data\dmp_kitbox_co.paa"};
	};*/
	
	
//#####################
//------FURNITURE------
//#####################
	class dmp_cratelocker_az_Base : DMP_OpenableFurniture
	{
		scope=0;
		displayName="#STR_dmp_cratelocker_az0";
		descriptionShort="#STR_dmp_cratelocker_az1";
		model="Azkaban_dm\models\dmp_cratelocker_az.p3d";
		bounding = "BBox";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		handheld = "true";
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 50000;
		// itemBehaviour = 0;
		physLayer="item_large";
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_crate_locker_co.paa"};
		rotationFlags = 0;
		attachments[]=
		{
			"dmp_woodencrate1",
			"dmp_woodencrate2",
			"dmp_woodencrate3",
			"dmp_woodencrate4",
			"dmp_woodencrate5",
			"dmp_woodencrate6",
			"dmp_woodencrate7",
			"dmp_woodencrate8",
			"dmp_woodencrate9",
			"dmp_woodencrate10"
		};
		class GUIInventoryAttachmentsProps
		{
			class dmpCrate
			{
				name = "$STR_CfgCrate0";
				description = "";
				attachmentSlots[] = 
				{
					"dmp_woodencrate1",
					"dmp_woodencrate2",
					"dmp_woodencrate3",
					"dmp_woodencrate4",
					"dmp_woodencrate5",
					"dmp_woodencrate6",
					"dmp_woodencrate7",
					"dmp_woodencrate8",
					"dmp_woodencrate9",
					"dmp_woodencrate10"
				};
				icon = "set:dayz_inventory image:woodcrate";
				view_index = 1;
			};
		};
	};
	class dmp_cratelocker_az_blue: dmp_cratelocker_az_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_crate_locker_blue_co.paa"};
	};
	class dmp_cratelocker_az_green: dmp_cratelocker_az_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_crate_locker_green_co.paa"};
	};
	class dmp_cratelocker_az_grey: dmp_cratelocker_az_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_crate_locker_grey_co.paa"};
	};
	class dmp_cratelocker_az_red: dmp_cratelocker_az_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_crate_locker_red_co.paa"};
	};
	class dmp_cratelocker_az_yellow: dmp_cratelocker_az_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_crate_locker_yellow_co.paa"};
	};
	class dmp_gear_locker_Base : DMP_OpenableFurniture
	{
		scope = 0;
		displayName = "$STR_dmp_gear_locker0";
		descriptionShort = "$STR_dmp_gear_locker1";
		model = "Azkaban_dm\models\dmp_gear_locker.p3d";
		bounding = "BBox";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		handheld = "true";
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 50000;
		clothingType = "male";
		physLayer = "item_large";
		attachments[] = 
		{
			"Headgear",				
			"Mask",				
			"Eyewear",				
			"Vest",			
			"Body",				
			"Hips",				
			"Gloves",				
			"dmp_back_m1",				
			"Legs",				
			"Feet",				
			"Armband",
			"dmp_vest_m1",
			"dmp_vest_m2",
			"dmp_headgear_m1",
			"dmp_headgear_m2",			
			"dmp_headgear_m3",			
			"dmp_feet1",			
			"dmp_feet2",
			"dmp_weapons1",
			"dmp_weapons2",
			"dmp_weapons3",
			"dmp_weapons4",
			"dmp_ammobox1",
			"dmp_ammobox2",
			"dmp_ammobox3",
			"dmp_ammobox4",
			"dmp_ammobox5",
			"dmp_ammobox6",
			"dmp_ammobox7",
			"dmp_ammobox8"
		};
		rotationFlags = 0;
		hiddenSelections[] = {"Deron","gear"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_co.paa","Azkaban_dm\data\dmp_gear_co.paa"};
		/*class AnimationSources
		{
			class doors1
			{
				source = "user";
				soundSet = "doorMetalSmallOpen";
				initPhase = 0;
				animPeriod = 0.8;
			};
			class doors2
			{
				source = "user";
				soundSet = "doorMetalSmallOpen";
				initPhase = 0;
				animPeriod = 0.8;
			};
		};*/
		/*class Cargo
		{
			itemsCargoSize[] = {10,10};
			openable = 0;
			allowOwnedCargoManipulation = 0;
		};*/
		class GUIInventoryAttachmentsProps
		{
			class InventoryGear
			{
				name= "$STR_DMP_InventoryGearGUI";
				description = "";
				attachmentSlots[] = 
				{
					"Headgear",				
					"Mask",				
					"Eyewear",				
					"Vest",			
					"Body",				
					"Hips",				
					"Gloves",				
					"dmp_back_m1",				
					"Legs",				
					"Feet",				
					"Armband"			
				};
				icon = "set:dayz_inventory image:cat_common_cargo";
				view_index = 1;
			};
			class dmp_gears
			{
				name= "$STR_DMP_InventoryGearGUI";
				description = "";
				attachmentSlots[] = 
				{
					"dmp_vest_m1",
					"dmp_vest_m2",
					"dmp_headgear_m1",
					"dmp_headgear_m2",			
					"dmp_headgear_m3",			
					"dmp_feet1",			
					"dmp_feet2"		
				};
				icon = "set:dayz_inventory image:cat_common_cargo";
				view_index = 1;
			};
			class dmp_doors
			{
				name= "$STR_DMP_WeaponsGUI";
				description = "";
				attachmentSlots[] = 
				{
					"dmp_weapons1",
					"dmp_weapons2",
					"dmp_weapons3",
					"dmp_weapons4"				
				};
				icon = "set:dayz_inventory image:cat_common_cargo";
				view_index = 1;
			};
			class dmp_ammobox
			{
				name = "$STR_DMP_AmmoBoxGUI";
				description = "";
				attachmentSlots[] = 
				{
					"dmp_ammobox1",
					"dmp_ammobox2",
					"dmp_ammobox3",
					"dmp_ammobox4",
					"dmp_ammobox5",
					"dmp_ammobox6",
					"dmp_ammobox7",
					"dmp_ammobox8"
				};
				icon = "set:dmp_tools image:dmp_ammobox";
				view_index = 2;
			};
		};
	};
	class dmp_gear_locker_blue:dmp_gear_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_blue_co.paa","Azkaban_dm\data\dmp_gear_co.paa"};
	};
	class dmp_gear_locker_green:dmp_gear_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_green_co.paa","Azkaban_dm\data\dmp_gear_co.paa"};
	};
	class dmp_gear_locker_grey:dmp_gear_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_grey_co.paa","Azkaban_dm\data\dmp_gear_co.paa"};
	};
	class dmp_gear_locker_red:dmp_gear_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_red_co.paa","Azkaban_dm\data\dmp_gear_co.paa"};
	};
	class dmp_gear_locker_yellow:dmp_gear_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_yellow_co.paa","Azkaban_dm\data\dmp_gear_co.paa"};
	};
	class dmp_gear_lockerV2_Base : DMP_OpenableFurniture
	{
		scope = 0;
		displayName = "$STR_dmp_gear_lockerV2_0";
		descriptionShort = "$STR_dmp_gear_lockerV2_1";
		model = "Azkaban_dm\models\dmp_gear_lockerV2.p3d";
		bounding = "BBox";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		handheld = "true";
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 50000;
		clothingType = "male";
		physLayer = "item_large";
		attachments[] = 
		{
			"Headgear",				
			"Mask",				
			"Eyewear",				
			"Vest",			
			"Body",				
			"Hips",				
			"Gloves",				
			"dmp_back_m1",				
			"Legs",				
			"Feet",				
			"Armband",
			"dmp_vest_m1",
			"dmp_vest_m2",
			"dmp_vest_m3",
			"dmp_vest_m4",
			"dmp_weapons1",
			"dmp_weapons2",
			"dmp_weapons3",
			"dmp_weapons4"
		};
		rotationFlags = 0;
		hiddenSelections[] = {"Deron","gear"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_co.paa","Azkaban_dm\data\dmp_gear_co.paa"};
		/*class AnimationSources
		{
			class doors1
			{
				source = "user";
				soundSet = "doorMetalSmallOpen";
				initPhase = 0;
				animPeriod = 0.8;
			};
			class doors2
			{
				source = "user";
				soundSet = "doorMetalSmallOpen";
				initPhase = 0;
				animPeriod = 0.8;
			};
		};*/
		/*class Cargo
		{
			itemsCargoSize[] = {10,10};
			openable = 0;
			allowOwnedCargoManipulation = 0;
		};*/
		class GUIInventoryAttachmentsProps
		{
			class InventoryGear
			{
				name= "$STR_DMP_InventoryGearGUI";
				description = "";
				attachmentSlots[] = 
				{
					"Headgear",				
					"Mask",				
					"Eyewear",				
					"Vest",			
					"Body",				
					"Hips",				
					"Gloves",				
					"dmp_back_m1",				
					"Legs",				
					"Feet",				
					"Armband"			
				};
				icon = "set:dayz_inventory image:cat_common_cargo";
				view_index = 1;
			};
			class dmp_gears
			{
				name= "$STR_DMP_InventoryGearGUI";
				description = "";
				attachmentSlots[] = 
				{
					"dmp_vest_m1",
					"dmp_vest_m2",
					"dmp_vest_m3",
					"dmp_vest_m4"	
				};
				icon = "set:dayz_inventory image:cat_common_cargo";
				view_index = 1;
			};
			class dmp_doors
			{
				name= "$STR_DMP_WeaponsGUI";
				description = "";
				attachmentSlots[] = 
				{
					"dmp_weapons1",
					"dmp_weapons2",
					"dmp_weapons3",
					"dmp_weapons4"				
				};
				icon = "set:dayz_inventory image:cat_common_cargo";
				view_index = 1;
			};
		};
	};
	class dmp_gear_lockerV2_blue:dmp_gear_lockerV2_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_blue_co.paa","Azkaban_dm\data\dmp_gear_co.paa"};
	};
	class dmp_gear_lockerV2_green:dmp_gear_lockerV2_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_green_co.paa","Azkaban_dm\data\dmp_gear_co.paa"};
	};
	class dmp_gear_lockerV2_grey:dmp_gear_lockerV2_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_grey_co.paa","Azkaban_dm\data\dmp_gear_co.paa"};
	};
	class dmp_gear_lockerV2_red:dmp_gear_lockerV2_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_red_co.paa","Azkaban_dm\data\dmp_gear_co.paa"};
	};
	class dmp_gear_lockerV2_yellow:dmp_gear_lockerV2_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_yellow_co.paa","Azkaban_dm\data\dmp_gear_co.paa"};
	};
	class dmp_gear_lockerV3_Base : DMP_OpenableFurniture
	{
		scope = 0;
		displayName = "$STR_dmp_gear_lockerV3_0";
		descriptionShort = "$STR_dmp_gear_lockerV3_1";
		model = "Azkaban_dm\models\dmp_gear_lockerV3.p3d";
		bounding = "BBox";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		handheld = "true";
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 50000;
		clothingType = "male";
		physLayer = "item_large";
		attachments[] = 
		{
			"Headgear",				
			"Mask",				
			"Eyewear",				
			"Vest",			
			"Body",				
			"Hips",				
			"Gloves",				
			"dmp_back_m1",				
			"Legs",				
			"Feet",				
			"Armband",
			"dmp_weapons1",
			"dmp_weapons2"
		};
		rotationFlags = 0;
		hiddenSelections[] = {"Deron","gear"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_co.paa","Azkaban_dm\data\dmp_gear_co.paa"};
		class GUIInventoryAttachmentsProps
		{
			class InventoryGear
			{
				name= "$STR_DMP_InventoryGearGUI";
				description = "";
				attachmentSlots[] = 
				{
					"Headgear",				
					"Mask",				
					"Eyewear",				
					"Vest",			
					"Body",				
					"Hips",				
					"Gloves",				
					"dmp_back_m1",				
					"Legs",				
					"Feet",				
					"Armband"			
				};
				icon = "set:dayz_inventory image:cat_common_cargo";
				view_index = 1;
			};
			class dmp_doors
			{
				name= "$STR_DMP_WeaponsGUI";
				description = "";
				attachmentSlots[] = 
				{
					"dmp_weapons1",
					"dmp_weapons2"				
				};
				icon = "set:dayz_inventory image:cat_common_cargo";
				view_index = 1;
			};
		};
	};
	class dmp_gear_lockerV3_blue:dmp_gear_lockerV3_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_blue_co.paa","Azkaban_dm\data\dmp_gear_co.paa"};
	};
	class dmp_gear_lockerV3_green:dmp_gear_lockerV3_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_green_co.paa","Azkaban_dm\data\dmp_gear_co.paa"};
	};
	class dmp_gear_lockerV3_grey:dmp_gear_lockerV3_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_grey_co.paa","Azkaban_dm\data\dmp_gear_co.paa"};
	};
	class dmp_gear_lockerV3_red:dmp_gear_lockerV3_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_red_co.paa","Azkaban_dm\data\dmp_gear_co.paa"};
	};
	class dmp_gear_lockerV3_yellow:dmp_gear_lockerV3_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_yellow_co.paa","Azkaban_dm\data\dmp_gear_co.paa"};
	};
	class dmp_gunwall_az_Base : DMP_OpenableFurniture
	{
		scope = 0;
		displayName = "$STR_dmp_gunwall_az0";
		descriptionShort = "$STR_dmp_gunwall_az1";
		model = "Azkaban_dm\models\dmp_gunwall_az.p3d";
		bounding = "BBox";
		overrideDrawArea = "3.0";
		// forceFarBubble = "true";
		slopeTolerance = 0.4;
		// handheld = "true";
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 50000;
		yawPitchRollLimit[] = {45,45,45};
		// clothingType = "male";
		physLayer = "item_large";
		attachments[] = 
		{
			"dmp_weapons1",
			"dmp_weapons2",
			"dmp_weapons3",
			"dmp_weapons4",
			"dmp_weapons5",
			"dmp_weapons6",
			"dmp_weapons7",
			"dmp_weapons8",
			"dmp_weapons9",
			"dmp_weapons10",
			"dmp_weapons11",
			"dmp_weapons12",
			"dmp_weapons13",
			"dmp_weapons14",
			"dmp_ammobox1",
			"dmp_ammobox2",
			"dmp_ammobox3",
			"dmp_ammobox4",
			"dmp_ammobox5",
			"dmp_ammobox6",
			"dmp_ammobox7",
			"dmp_ammobox8",
			"dmp_ammobox9",
			"dmp_ammobox10"
		};
		rotationFlags = 0;
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_co.paa"};
		class GUIInventoryAttachmentsProps
		{
			class dmp_weapons
			{
				name= "$STR_DMP_WeaponsGUI";
				description = "";
				attachmentSlots[] = 
				{
					"dmp_weapons1",
					"dmp_weapons2",
					"dmp_weapons3",
					"dmp_weapons4",
					"dmp_weapons5",
					"dmp_weapons6",
					"dmp_weapons7",
					"dmp_weapons8",
					"dmp_weapons9",
					"dmp_weapons10",
					"dmp_weapons11",
					"dmp_weapons12",
					"dmp_weapons13",
					"dmp_weapons14"				
				};
				icon = "set:dayz_inventory image:cat_common_cargo";
				view_index = 1;
			};
			class dmp_ammobox
			{
				name = "$STR_DMP_AmmoBoxGUI";
				description = "";
				attachmentSlots[] = 
				{
					"dmp_ammobox1",
					"dmp_ammobox2",
					"dmp_ammobox3",
					"dmp_ammobox4",
					"dmp_ammobox5",
					"dmp_ammobox6",
					"dmp_ammobox7",
					"dmp_ammobox8"
				};
				icon = "set:dmp_tools image:dmp_ammobox";
				view_index = 2;
			};
		};
		/*class Cargo
		{
			itemsCargoSize[] = {10,10};
			openable = 0;
			allowOwnedCargoManipulation = 0;
		};*/
	};
	class dmp_gunwall_az_blue:dmp_gunwall_az_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gunwall_blue_co.paa"};
	};
	class dmp_gunwall_az_green:dmp_gunwall_az_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gunwall_green_co.paa"};
	};
	class dmp_gunwall_az_grey:dmp_gunwall_az_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gunwall_grey_co.paa"};
	};
	class dmp_gunwall_az_red:dmp_gunwall_az_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gunwall_red_co.paa"};
	};
	class dmp_gunwall_az_yellow:dmp_gunwall_az_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gunwall_yellow_co.paa"};
	};
	class dmp_gunwall_az_small_Base : DMP_OpenableFurniture
	{
		scope = 0;
		displayName = "$STR_dmp_gunwall_az_small0";
		descriptionShort = "$STR_dmp_gunwall_az_small1";
		model ="Azkaban_dm\models\dmp_gunwall_az_small.p3d";
		bounding = "BBox";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		handheld = "true";
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 50000;
		clothingType = "male";
		physLayer = "item_large";
		attachments[] = 
		{
			"dmp_weapons1",
			"dmp_weapons2",
			"dmp_weapons3",
			"dmp_weapons4",
			"dmp_weapons5",
			"dmp_weapons6",
			"dmp_weapons7",
			"dmp_ammobox1",
			"dmp_ammobox2",
			"dmp_ammobox3",
			"dmp_ammobox4",
			"dmp_ammobox5"
		};
		rotationFlags = 0;
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gear_locker_co.paa"};
		class GUIInventoryAttachmentsProps
		{
			class dmp_weapons
			{
				name= "$STR_DMP_WeaponsGUI";
				description = "";
				attachmentSlots[] = 
				{
					"dmp_weapons1",
					"dmp_weapons2",
					"dmp_weapons3",
					"dmp_weapons4",
					"dmp_weapons5",
					"dmp_weapons6",
					"dmp_weapons7"				
				};
				icon = "set:dayz_inventory image:cat_common_cargo";
				view_index = 1;
			};
			class dmp_ammobox
			{
				name = "$STR_DMP_AmmoBoxGUI";
				description = "";
				attachmentSlots[] = 
				{
					"dmp_ammobox1",
					"dmp_ammobox2",
					"dmp_ammobox3",
					"dmp_ammobox4",
					"dmp_ammobox5"
				};
				icon = "set:dmp_tools image:dmp_ammobox";
				view_index = 2;
			};
		};
		/*class Cargo
		{
			itemsCargoSize[] = {10,10};
			openable = 0;
			allowOwnedCargoManipulation = 0;
		};*/
	};
	class dmp_gunwall_az_small_blue:dmp_gunwall_az_small_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gunwall_blue_co.paa"};
	};
	class dmp_gunwall_az_small_green:dmp_gunwall_az_small_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gunwall_green_co.paa"};
	};
	class dmp_gunwall_az_small_grey:dmp_gunwall_az_small_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gunwall_grey_co.paa"};
	};
	class dmp_gunwall_az_small_red:dmp_gunwall_az_small_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gunwall_red_co.paa"};
	};
	class dmp_gunwall_az_small_yellow:dmp_gunwall_az_small_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gunwall_yellow_co.paa"};
	};
	class dmp_woodencrate_Base: DMP_OpenableFurniture
	{
		scope = 0;
		bounding = "BBox";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		handheld = "true";
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 15000;
		// itemBehaviour = 0;
		physLayer = "item_large";
		hiddenSelections[] = {"Deron","palette"};
		// simpleHiddenSelections[] = {"iscrate"};
		rotationFlags = 0;	
	};
	class dmp_woodencrate100_az:dmp_woodencrate_Base
	{
		scope=2;
		displayName="$STR_dmp_woodencrate100_0";
		descriptionShort="$STR_dmp_woodencrate100_1";
		model="Azkaban_dm\models\dmp_woodencrate1.p3d";
		hiddenSelections[] = {"Deron","palette"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_woodencrate_CO.paa","Azkaban_dm\data\dmp_palette_co.paa"};
		hiddenSelectionsMaterials[]={"Azkaban_dm\data\dmp_woodencrate.rvmat","Azkaban_dm\data\dmp_palette.rvmat"};
		class Cargo
		{
			itemsCargoSize[] = {10,10};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
	};
	class dmp_woodencrate200_az:dmp_woodencrate_Base
	{
		scope=2;
		displayName="$STR_dmp_woodencrate200_0";
		descriptionShort="$STR_dmp_woodencrate200_1";
		model="Azkaban_dm\models\dmp_woodencrate2.p3d";
		hiddenSelections[] = {"Deron","palette"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_woodencrate_CO.paa","Azkaban_dm\data\dmp_palette_co.paa"};
		hiddenSelectionsMaterials[]={"Azkaban_dm\data\dmp_woodencrate.rvmat","Azkaban_dm\data\dmp_palette.rvmat"};
		class Cargo
		{
			itemsCargoSize[] = {10,20};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
	};
	class dmp_woodencrate300_az:dmp_woodencrate_Base
	{
		scope=2;
		displayName="$STR_dmp_woodencrate300_0";
		descriptionShort="$STR_dmp_woodencrate300_1";
		model="Azkaban_dm\models\dmp_woodencrate3.p3d";
		hiddenSelections[] = {"Deron","palette"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_woodencrate_CO.paa","Azkaban_dm\data\dmp_palette_co.paa"};
		hiddenSelectionsMaterials[]={"Azkaban_dm\data\dmp_woodencrate.rvmat","Azkaban_dm\data\dmp_palette.rvmat"};
		class Cargo
		{
			itemsCargoSize[] = {10,30};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
	};
	class dmp_woodencrate400_az:dmp_woodencrate_Base
	{
		scope=2;
		displayName="$STR_dmp_woodencrate400_0";
		descriptionShort="$STR_dmp_woodencrate400_1";
		model="Azkaban_dm\models\dmp_woodencrate4.p3d";
		hiddenSelections[] = {"Deron","palette"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_woodencrate_CO.paa","Azkaban_dm\data\dmp_palette_co.paa"};
		hiddenSelectionsMaterials[]={"Azkaban_dm\data\dmp_woodencrate.rvmat","Azkaban_dm\data\dmp_palette.rvmat"};
		class Cargo
		{
			itemsCargoSize[] = {10,40};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
	};
	class dmp_tools_locker_Base :DMP_OpenableFurniture
	{
		scope=0;
		displayName="$STR_dmp_tools_locker0";
		descriptionShort="$STR_dmp_tools_locker1";
		model="Azkaban_dm\models\dmp_tools_locker_az.p3d";
		bounding = "BBox";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		handheld = "true";
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 15000;
		itemBehaviour = 0;
		physLayer = "item_large";
		rotationFlags = 0;	
		hiddenSelections[] = {"Deron"};
		attachments[]=
		{
			"dmp_ducttape1",
			"dmp_ducttape2",
			"dmp_ducttape3",
			"dmp_ducttape4",
			"dmp_ducttape5",
			"dmp_ducttape6",
			"dmp_ducttape7",
			"dmp_rope1",
			"dmp_rope2",
			"dmp_rope3",
			"dmp_rope4",
			"dmp_hatchet1",
			"dmp_hatchet2",
			"dmp_hatchet3",
			"dmp_hatchet4",
			"dmp_hatchet5",
			"dmp_hatchet6",
			"dmp_hatchet7",
			"dmp_hatchet8",
			"dmp_hatchet9",
			"dmp_nails_box1",
			"dmp_nails_box2",
			"dmp_nails_box3",
			"dmp_nails_box4",
			"dmp_nails_box5",
			"dmp_nails_box6",
			"dmp_nails_box7",
			"dmp_nails_box8",
			"dmp_nails_box9",
			"dmp_nails_box10",
			"dmp_nails_box11",
			"dmp_nails_box12",
			"dmp_nails_box13",
			"dmp_nails_box14",
			"dmp_nails_box15",
			"dmp_nails_box16",
			"dmp_nails_box17",
			"dmp_pliers1",
			"dmp_pliers2",
			"dmp_pliers3",
			"dmp_pliers4",
			"dmp_screwdriver1",
			"dmp_screwdriver2",
			"dmp_screwdriver3",
			"dmp_screwdriver4",
			"dmp_metalwire1",
			"dmp_metalwire2",
			"dmp_metalwire3",
			"dmp_metalwire4",
			"dmp_metalwire5",
			"dmp_hammer1",
			"dmp_hammer2",
			"dmp_hammer3",
			"dmp_hammer4",
			"dmp_hammer5",
			"dmp_hammer6",
			"dmp_hammer7",
			"dmp_woodencrate1",
			"dmp_woodencrate2",
			"dmp_hacksaw1",
			"dmp_hacksaw2",
			"dmp_hacksaw3",
			"dmp_hacksaw4",
			"dmp_hacksaw5",
			"dmp_hacksaw6",
			"dmp_protector_case1",
			"dmp_protector_case2",
			"dmp_shovel1",
			"dmp_shovel2",
			"dmp_shovel3",
			"dmp_woodaxe1",
			"dmp_woodaxe2",
			"dmp_woodaxe3",
			"dmp_planks"
		};
		class AnimationSources
		{
			class Doors1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
			class Doors2
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
			class AnimSourceHidden
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class dmp_plank_s1: AnimSourceHidden{};
			class dmp_plank_s2: AnimSourceHidden{};
			class dmp_plank_s3: AnimSourceHidden{};
			class dmp_plank_s4: AnimSourceHidden{};			
			class dmp_plank_s5: AnimSourceHidden{};			
			class dmp_plank_s6: AnimSourceHidden{};			
		};
		class GUIInventoryAttachmentsProps
		{
			class dmp_tools
			{
				name= "$STR_dmp_toolsGUI";
				description = "";
				attachmentSlots[] = 
				{	
					"dmp_ducttape1",
					"dmp_ducttape2",
					"dmp_ducttape3",
					"dmp_ducttape4",
					"dmp_ducttape5",
					"dmp_ducttape6",
					"dmp_ducttape7",
					"dmp_rope1",
					"dmp_rope2",
					"dmp_rope3",
					"dmp_rope4",
					"dmp_hatchet1",
					"dmp_hatchet2",
					"dmp_hatchet3",
					"dmp_hatchet4",
					"dmp_hatchet5",
					"dmp_hatchet6",
					"dmp_hatchet7",
					"dmp_hatchet8",
					"dmp_hatchet9",
					"dmp_nails_box1",
					"dmp_nails_box2",
					"dmp_nails_box3",
					"dmp_nails_box4",
					"dmp_nails_box5",
					"dmp_nails_box6",
					"dmp_nails_box7",
					"dmp_nails_box8",
					"dmp_nails_box9",
					"dmp_nails_box10",
					"dmp_nails_box11",
					"dmp_nails_box12",
					"dmp_nails_box13",
					"dmp_nails_box14",
					"dmp_nails_box15",
					"dmp_nails_box16",
					"dmp_nails_box17",
					"dmp_pliers1",
					"dmp_pliers2",
					"dmp_pliers3",
					"dmp_pliers4",
					"dmp_screwdriver1",
					"dmp_screwdriver2",
					"dmp_screwdriver3",
					"dmp_screwdriver4",
					"dmp_metalwire1",
					"dmp_metalwire2",
					"dmp_metalwire3",
					"dmp_metalwire4",
					"dmp_metalwire5",
					"dmp_hammer1",
					"dmp_hammer2",
					"dmp_hammer3",
					"dmp_hammer4",
					"dmp_hammer5",
					"dmp_hammer6",
					"dmp_hammer7",
					"dmp_woodencrate1",
					"dmp_woodencrate2",
					"dmp_hacksaw1",
					"dmp_hacksaw2",
					"dmp_hacksaw3",
					"dmp_hacksaw4",
					"dmp_planks"
				};
				icon = "set:dayz_inventory image:cat_common_cargo";
				view_index = 1;
			};
			class dmp_RightDoor
			{
				name= "$STR_dmp_RightDoorGUI";
				description = "";
				attachmentSlots[] = 
				{	
					"dmp_protector_case1",
					"dmp_protector_case2",
					"dmp_shovel1",
					"dmp_shovel2",
					"dmp_shovel3"
				};
				icon = "set:dayz_inventory image:cat_common_cargo";
				view_index = 1;
			};
			class dmp_LeftDoor
			{
				name = "$STR_dmp_LeftDoorGUI";
				description = "";
				attachmentSlots[] = 
				{
					"dmp_hacksaw5",
					"dmp_hacksaw6",
					"dmp_woodaxe1",
					"dmp_woodaxe2",
					"dmp_woodaxe3"
				};
				icon = "set:dayz_inventory image:cat_common_cargo";
				view_index = 2;
			};
		};
	};
	class dmp_tools_locker_blue:dmp_tools_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_tools_locker_blue_co.paa"};
	};
	class dmp_tools_locker_green:dmp_tools_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_tools_locker_green_co.paa"};
	};
	class dmp_tools_locker_grey:dmp_tools_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_tools_locker_grey_co.paa"};
	};
	class dmp_tools_locker_red:dmp_tools_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_tools_locker_red_co.paa"};
	};
	class dmp_tools_locker_yellow:dmp_tools_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_tools_locker_yellow_co.paa"};
	};
	class dmp_repairkit_locker_Base:DMP_OpenableFurniture
	{
		scope=0;
		displayName="$STR_dmp_repairkit_locker0";
		descriptionShort="$STR_dmp_repairkit_locker1";
		model="Azkaban_dm\models\dmp_repairkit_locker.p3d";
		bounding = "BBox";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		handheld = "true";
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 15000;
		itemBehaviour = 0;
		physLayer = "item_large";
		rotationFlags = 0;	
		hiddenSelections[] = {"Deron"};
		attachments[]=
		{
			"dmp_ducttape1",
			"dmp_ducttape2",
			"dmp_ducttape3",
			"dmp_ducttape4",
			"dmp_ducttape5",
			"dmp_weaponcleaningkit1",
			"dmp_weaponcleaningkit2",
			"dmp_weaponcleaningkit3",
			"dmp_weaponcleaningkit4",
			"dmp_weaponcleaningkit5",
			"dmp_sewing_kit1",
			"dmp_sewing_kit2",
			"dmp_sewing_kit3",
			"dmp_sewing_kit4",
			"dmp_sewing_kit5",
			"dmp_leather_sewing_kit1",
			"dmp_leather_sewing_kit2",
			"dmp_leather_sewing_kit3",
			"dmp_leather_sewing_kit4",
			"dmp_leather_sewing_kit5",
			"dmp_electronicCase1",
			"dmp_electronicCase2",
			"dmp_electronicCase3",
			"dmp_electronicCase4",
			"dmp_electronicCase5",
			"dmp_epoxy_putty1",
			"dmp_epoxy_putty2",
			"dmp_epoxy_putty3",
			"dmp_epoxy_putty4",
			"dmp_epoxy_putty5",
			"dmp_whetstone1",
			"dmp_whetstone2",
			"dmp_whetstone3",
			"dmp_whetstone4",
			"dmp_whetstone5",
			// "dmp_blowtorch1",
			// "dmp_blowtorch2",
			// "dmp_blowtorch3",
			// "dmp_blowtorch4",
			// "dmp_blowtorch5",
			"dmp_tire_repair_kit1",
			"dmp_tire_repair_kit2",
			"dmp_tire_repair_kit3",
			"dmp_tire_repair_kit4",
			"dmp_tire_repair_kit5"
		};
		class GUIInventoryAttachmentsProps
		{
			class dmp_tools
			{
				name= "$STR_dmp_toolsGUI";
				description = "";
				attachmentSlots[] = 
				{	
					"dmp_ducttape1",
					"dmp_ducttape2",
					"dmp_ducttape3",
					"dmp_ducttape4",
					"dmp_ducttape5",
					"dmp_weaponcleaningkit1",
					"dmp_weaponcleaningkit2",
					"dmp_weaponcleaningkit3",
					"dmp_weaponcleaningkit4",
					"dmp_weaponcleaningkit5",
					"dmp_electronicCase1",
					"dmp_electronicCase2",
					"dmp_electronicCase3",
					"dmp_electronicCase4",
					"dmp_electronicCase5",
					"dmp_sewing_kit1",
					"dmp_sewing_kit2",
					"dmp_sewing_kit3",
					"dmp_sewing_kit4",
					"dmp_sewing_kit5",
					"dmp_epoxy_putty1",
					"dmp_epoxy_putty2",
					"dmp_epoxy_putty3",
					"dmp_epoxy_putty4",
					"dmp_epoxy_putty5",
					"dmp_whetstone1",
					"dmp_whetstone2",
					"dmp_whetstone3",
					"dmp_whetstone4",
					"dmp_whetstone5",
					"dmp_leather_sewing_kit1",
					"dmp_leather_sewing_kit2",
					"dmp_leather_sewing_kit3",
					"dmp_leather_sewing_kit4",
					"dmp_leather_sewing_kit5",
					"dmp_tire_repair_kit1",
					"dmp_tire_repair_kit2",
					"dmp_tire_repair_kit3",
					"dmp_tire_repair_kit4",
					"dmp_tire_repair_kit5"
				};
				icon = "set:dayz_inventory image:cat_common_cargo";
				view_index = 1;
			};
		};		
	};
	class dmp_repairkit_locker_blue:dmp_repairkit_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_repairkit_locker_blue_co.paa"};
	};
	class dmp_repairkit_locker_green:dmp_repairkit_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_repairkit_locker_green_co.paa"};
	};
	
	class dmp_repairkit_locker_grey:dmp_repairkit_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_repairkit_locker_grey_co.paa"};
	};
	class dmp_repairkit_locker_red:dmp_repairkit_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_repairkit_locker_red_co.paa"};
	};
	class dmp_repairkit_locker_yellow:dmp_repairkit_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_repairkit_locker_yellow_co.paa"};
	};
	class dmp_gunrack_Base:DMP_OpenableFurniture
	{
		scope=0;
		displayName="$STR_dmp_gunrack0";
		descriptionShort="$STR_dmp_gunrack1";
		model="Azkaban_dm\models\dmp_gunrack.p3d";
		bounding = "BBox";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		handheld = "true";
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 15000;
		itemBehaviour = 0;
		physLayer = "item_large";
		rotationFlags = 0;	
		// simpleHiddenSelections[] = {"coverdmp_c"};
		hiddenSelections[] = {"Deron"};
		attachments[]=
		{
			"dmp_weapons1",
			"dmp_weapons2",
			"dmp_weapons3",
			"dmp_weapons4",
			"dmp_weapons5",
			"dmp_weapons6",
			"dmp_weapons7",
			"dmp_weapons8",
			"dmp_weapons9",
			"dmp_weapons10"
		};
		class GUIInventoryAttachmentsProps
		{
			class dmp_weapons
			{
				name= "$STR_DMP_WeaponsGUI";
				description = "";
				attachmentSlots[] = 
				{	
					"dmp_weapons1",
					"dmp_weapons2",
					"dmp_weapons3",
					"dmp_weapons4",
					"dmp_weapons5",
					"dmp_weapons6",
					"dmp_weapons7",
					"dmp_weapons8",
					"dmp_weapons9",
					"dmp_weapons10"
				};
				icon = "set:dayz_inventory image:cat_common_cargo";
				view_index = 1;
			};
		};	
		class AnimationSources
		{
			class coverdmp_c
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
			// class roll_up
			// {
				// source="user";
				// initPhase=1;
				// animPeriod=0.0099999998;
			// };
		};
	};
	class dmp_gunrack_green:dmp_gunrack_Base
	{
		scope=2;
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[]={"Azkaban_dm\data\dmp_gunrack_CO.paa"};
	};
	class dmp_locker_Base : DMP_OpenableFurniture
	{
		scope = 0;
		displayName = "$STR_dmp_locker0";
		descriptionShort = "$STR_dmp_locker1";
		model = "Azkaban_dm\models\dmp_locker.p3d";
		bounding = "BBox";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		handheld = "true";
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 50000;
		physLayer = "item_large";
		attachments[] = 
		{
			"dmp_weapons1",
			"dmp_weapons2",
			"dmp_weapons3",
			"dmp_weapons4",				
			"dmp_weapons5",				
			"dmp_weapons6",
			"Headgear",				
			"Mask",				
			"Eyewear",				
			"Vest",			
			"Body",				
			"Hips",				
			"Gloves",				
			"dmp_back_m1",				
			"Legs",				
			"Feet",				
			"Armband"
		};
		rotationFlags = 0;
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_locker_CO.paa"};
		class Cargo
		{
			itemsCargoSize[] = {10,15};
			openable = 0;
			allowOwnedCargoManipulation = 0;
		};
		class GUIInventoryAttachmentsProps
		{
			/*class CodeLock
			{
				name = "$STR_DMP_CodeLockGUI";
				description = "";
				attachmentSlots[] = {"Att_CombinationLock"};
				icon = "cat_bb_attachments";
				view_index = 3;
			};*/
			class Clothing
			{
				name = "$STR_DMP_ClothingGUI";
				description = "";
				attachmentSlots[] = 
				{
					"Headgear",				
					"Mask",				
					"Eyewear",				
					"Vest",			
					"Body",				
					"Hips",				
					"Gloves",				
					"dmp_back_m1",				
					"Legs",				
					"Feet",				
					"Armband"			
				};
				icon = "set:dayz_inventory image:back";
				view_index = 2;
			};
			class Weapons
			{
				name= "$STR_DMP_WeaponsGUI";
				description = "";
				attachmentSlots[] = 
				{
					"dmp_weapons1",
					"dmp_weapons2",
					"dmp_weapons3",
					"dmp_weapons4",				
					"dmp_weapons5",				
					"dmp_weapons6"				
				};
				icon = "set:dayz_inventory image:shoulderleft";
				view_index = 1;
			};
		};
	};
	class dmp_locker_blue: dmp_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_locker_blue_co.paa"};
	};
	class dmp_locker_green: dmp_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_locker_green_co.paa"};
	};
	
	class dmp_locker_grey: dmp_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_locker_grey_co.paa"};
	};
	class dmp_locker_red: dmp_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_locker_red_co.paa"};
	};
	class dmp_locker_yellow: dmp_locker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_locker_yellow_co.paa"};
	};
	class dmp_gearstand: DMP_UnopenableFurniture
	{
		scope = 2;
		displayName = "$STR_dmp_gearstand0";
		descriptionShort = "$STR_dmp_gearstand1";
		model ="Azkaban_dm\models\dmp_armor_stand.p3d";
		bounding = "BBox";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		handheld = "true";
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 5000;
		physLayer = "item_large";
		clothingType = "male";
		attachments[] = {"dmp_weapons1","dmp_weapons2","Head","Headgear","Mask","Eyewear","Gloves","Armband","Vest","Body","Back","Hips","Legs","Feet"};
		hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_armor_stand_co.paa"};
		class GUIInventoryAttachmentsProps
		{
			class Clothing
			{
				name = "Clothing";
				description = "";
				attachmentSlots[] = {"dmp_weapons1","dmp_weapons2","Head","Headgear","Mask","Eyewear","Gloves","Armband","Vest","Body","Back","Hips","Legs","Feet"};
				icon = "set:dayz_inventory image:back";
				view_index = 3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet = "barrel_movement_SoundSet";
					id = 1;
				};
				class pickUpItem_Light
				{
					soundSet = "pickUpBarrelLight_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpBarrel_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "barrel_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class dmp_maneken: dmp_gearstand
	{
		model = "Azkaban_dm\models\dmp_maneken.p3d";
		hiddenSelections[] = {"Deron","gear"};
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_armor_stand_co.paa","Azkaban_dm\data\dmp_gear_co.paa"};
		hiddenSelectionsMaterials[]= {"Azkaban_dm\data\dmp_armor_stand.rvmat","Azkaban_dm\data\dmp_gear.rvmat"};
	};
	class dmp_gunlocker_Base : DMP_OpenableFurniture
	{
		scope = 0;
		displayName = "$STR_dmp_gunlocker0";
		descriptionShort = "$STR_dmp_gunlocker1";
		model = "Azkaban_dm\models\dmp_gunlocker.p3d";
		bounding = "BBox";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		handheld = "true";
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 50000;
		physLayer = "item_large";
		attachments[] = 
		{
			"dmp_weapons1",
			"dmp_weapons2",
			"dmp_weapons3",
			"dmp_weapons4",
			"dmp_weapons5",
			"dmp_weapons6",
			"dmp_weapons7",
			"dmp_weapons8",
			"dmp_weapons9",
			"dmp_weapons10",
			"dmp_weapons11",
			"dmp_weapons12",
			"dmp_weapons13",
			"dmp_weapons14",
			"dmp_weapons15",
			"dmp_ammobox1",
			"dmp_ammobox2",
			"dmp_ammobox3",
			"dmp_ammobox4",
			"dmp_ammobox5",
			"dmp_ammobox6",
			"dmp_ammobox7",
			"dmp_ammobox8"
		};
		rotationFlags = 0;
		hiddenSelections[] = {"Deron"};
		// hiddenSelectionsTextures[] = {"Deron\DM_furniture\gunlocker\data\dmp_gunlocker_co.paa"};
		class Cargo
		{
			itemsCargoSize[] = {10,10};
			openable = 0;
			allowOwnedCargoManipulation = 0;
		};
		class GUIInventoryAttachmentsProps
		{
			/*class CodeLock
			{
				name = "$STR_DMP_CodeLockGUI";
				description = "";
				attachmentSlots[] = {"Att_CombinationLock"};
				icon = "cat_bb_attachments";
				view_index = 3;
			};*/
			class Weapons_Row1
			{
				name= "$STR_DMP_WeaponsGUI";
				description = "";
				attachmentSlots[] = 
				{
					"dmp_weapons1",
					"dmp_weapons2",
					"dmp_weapons3",
					"dmp_weapons4",
					"dmp_weapons5",
					"dmp_weapons6",
					"dmp_weapons7",
					"dmp_weapons8"				
				};
				icon = "set:dayz_inventory image:shoulderleft";
				view_index = 1;
			};
			class Weapons_Row2
			{
				name= "$STR_DMP_WeaponsGUI";
				description = "";
				attachmentSlots[] = 
				{
					"dmp_weapons9",
					"dmp_weapons10",
					"dmp_weapons11",
					"dmp_weapons12",
					"dmp_weapons13",
					"dmp_weapons14",
					"dmp_weapons15"			
				};
				icon = "set:dayz_inventory image:shoulderleft";
				view_index = 1;
			};
			class dmp_ammobox
			{
				name = "$STR_DMP_AmmoBoxGUI";
				description = "";
				attachmentSlots[] = 
				{
					"dmp_ammobox1",
					"dmp_ammobox2",
					"dmp_ammobox3",
					"dmp_ammobox4",
					"dmp_ammobox5",
					"dmp_ammobox6",
					"dmp_ammobox7",
					"dmp_ammobox8"
				};
				icon = "set:dayz_inventory image:back";
				view_index = 2;
			};
		};
	};
	class dmp_gunlocker_blue:dmp_gunlocker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gunlocker_blue_co.paa"};
	};
	class dmp_gunlocker_green:dmp_gunlocker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gunlocker_green_co.paa"};
	};
	class dmp_gunlocker_grey:dmp_gunlocker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gunlocker_grey_co.paa"};
	};
	class dmp_gunlocker_red:dmp_gunlocker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gunlocker_red_co.paa"};
	};
	class dmp_gunlocker_yellow:dmp_gunlocker_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"Azkaban_dm\data\dmp_gunlocker_yellow_co.paa"};
	};
	class dmp_stove_Base: BarrelHoles_ColorBase//DMP_OpenableFurniture
	{
		scope = 2;
		displayName = "$STR_dmp_stove0";
		descriptionShort = "";
		itemSize[]={6,5};
		model = "Azkaban_dm\models\dmp_stove.p3d";		
		hiddenSelections[] = {"","Deron"};
		attachments[] = {"Firewood","WoodenStick","Rags","MedicalBandage","Paper","Bark","SmokingA","SmokingB","SmokingC","SmokingD","DirectCookingA","DirectCookingB","DirectCookingC"};
		hiddenSelectionsTextures[] = {"","Azkaban_dm\data\dmp_stove_green_co.paa"};
		inventorySlot[]=
		{
		};
		class Cargo
		{
		};
		class GUIInventoryAttachmentsProps
		{
			class Smoking
			{
				name = "$STR_attachment_Smoking";
				description = "";
				attachmentSlots[] = {"SmokingA","SmokingB","SmokingC","SmokingD"};
				icon = "set:dayz_inventory image:cookingequipment";
			};
			class CookingEquipment
			{
				name = "$STR_attachment_CookingEquipment0";
				description = "";
				attachmentSlots[] = {"DirectCookingA","DirectCookingB","DirectCookingC"};
				icon = "set:dayz_inventory image:cookingequipment";
			};
			class Fuel
			{
				name = "$STR_attachment_Fuel0";
				description = "";
				attachmentSlots[] = {"Firewood","WoodenStick"};
				icon = "set:dayz_inventory image:cat_fp_fuel";
			};
			class Kindling
			{
				name = "$STR_attachment_Kindling0";
				description = "";
				attachmentSlots[] = {"Rags","MedicalBandage","Paper","Bark"};
				icon = "set:dayz_inventory image:cat_fp_kindling";
			};
		};
		class AnimationSources
		{
			class Doors1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};						
		};
	};
	class dmp_stove_blue: dmp_stove_Base
	{
		scope = 2;
		displayName = "$STR_dmp_stove0";
		descriptionShort = "";
		model = "Azkaban_dm\models\dmp_stove.p3d";
		// hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"","Azkaban_dm\data\dmp_stove_blue_co.paa"};
	};
	class dmp_stove_green: dmp_stove_Base
	{
		scope = 2;
		displayName = "$STR_dmp_stove0";
		descriptionShort = "";
		model = "Azkaban_dm\models\dmp_stove.p3d";
		// hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"","Azkaban_dm\data\dmp_stove_green_co.paa"};
	};
	class dmp_stove_grey: dmp_stove_Base
	{
		scope = 2;
		displayName = "$STR_dmp_stove0";
		descriptionShort = "";
		model = "Azkaban_dm\models\dmp_stove.p3d";
		// hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"","Azkaban_dm\data\dmp_stove_grey_co.paa"};
	};
	class dmp_stove_red: dmp_stove_Base
	{
		scope = 2;
		displayName = "$STR_dmp_stove0";
		descriptionShort = "";
		model = "Azkaban_dm\models\dmp_stove.p3d";
		// hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"","Azkaban_dm\data\dmp_stove_red_co.paa"};
	};
	class dmp_stove_yellow: dmp_stove_Base
	{
		scope = 2;
		displayName = "$STR_dmp_stove0";
		descriptionShort = "";
		model = "Azkaban_dm\models\dmp_stove.p3d";
		// hiddenSelections[] = {"Deron"};
		hiddenSelectionsTextures[] = {"","Azkaban_dm\data\dmp_stove_yellow_co.paa"};
	};	
//end class #!
};
class CfgSoundSets
{
	class base_SoundSet
	{
		sound3DProcessingType = "defaultLFECurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		volume = 30;
	};
	class base_SoundSetLoop
	{
		sound3DProcessingType = "defaultLFECurve";
		spatial = 1;
		doppler = 0;
		loop = 1;
	};
	//GunWall
	class DMP_doorWoodSlideOpen_SoundSet: base_SoundSet
	{
		soundShaders[] = {"DMP_doorWoodSlideOpen_SoundShader"};
	};
	class DMP_doorWoodSlideClose_SoundSet: base_SoundSet
	{
		soundShaders[] = {"DMP_doorWoodSlideClose_SoundShader"};
	};
	//ContainerMedium
	class DMP_doorMetalContainerOpen_SoundSet: base_SoundSet
	{
		soundShaders[] = {"DMP_doorMetalContainerOpen_SoundShader"};
	};
	class DMP_doorMetalContainerClose_SoundSet: base_SoundSet
	{
		soundShaders[] = {"DMP_doorMetalContainerClose_SoundShader"};
	};
	//Locker
	class DMP_doorWoodGreenhouseOpen_SoundSet: base_SoundSet
	{
		soundShaders[] = {"DMP_doorWoodGreenhouseOpen_SoundShader"};
	};
	class DMP_doorWoodGreenhouseClose_SoundSet: base_SoundSet
	{
		soundShaders[] = {"DMP_doorWoodGreenhouseClose_SoundShader"};
	};
	//Safe
	class DMP_doorMetalSmallOpenABit_SoundSet: base_SoundSet
	{
		soundShaders[] = {"DMP_doorMetalSmallOpenABit_SoundShader"};
	};
	class DMP_doorMetalTwinClose_SoundSet: base_SoundSet
	{
		soundShaders[] = {"DMP_doorMetalTwinClose_SoundShader"};
	};
	//Place Furniture
	class DMP_PlaceFurniture_SoundSet: base_SoundSet
	{
		soundShaders[] = {"DMP_PlaceFurniture_SoundShader"};
	};
};
class CfgSoundShaders
{
	class base_SoundShaderFlies
	{
		range = 20;
		rangeCurve = "defaultLFECurve";
		volume = 3;
	};
	//GunWall
	class DMP_doorWoodSlideOpen_SoundShader: base_SoundShaderFlies
	{
		samples[] = {{"\DZ\sounds\environment\buildings\doors\WoodSlide\doorWoodSlideOpen_1",1},{"\DZ\sounds\environment\buildings\doors\WoodSlide\doorWoodSlideOpen_2",1},{"\DZ\sounds\environment\buildings\doors\WoodSlide\doorWoodSlideOpen_3",1},{"\DZ\sounds\environment\buildings\doors\WoodSlide\doorWoodSlideOpen_4",1}};
	};
	class DMP_doorWoodSlideClose_SoundShader: base_SoundShaderFlies
	{
		samples[] = {{"\DZ\sounds\environment\buildings\doors\WoodSlide\doorWoodSlideOpen_1",1},{"\DZ\sounds\environment\buildings\doors\WoodSlide\doorWoodSlideOpen_2",1},{"\DZ\sounds\environment\buildings\doors\WoodSlide\doorWoodSlideOpen_3",1},{"\DZ\sounds\environment\buildings\doors\WoodSlide\doorWoodSlideOpen_4",1}};
	};
	//LockerOld
	class DMP_doorWoodGreenhouseOpen_SoundShader: base_SoundShaderFlies
	{
		samples[] = {{"\DZ\sounds\environment\buildings\doors\WoodGreenhouse\doorWoodGreenhouseOpen_1",1},{"\DZ\sounds\environment\buildings\doors\WoodGreenhouse\doorWoodGreenhouseOpen_2",1}};
	};
	class DMP_doorWoodGreenhouseClose_SoundShader: base_SoundShaderFlies
	{
		samples[] = {{"\DZ\sounds\environment\buildings\doors\WoodGreenhouse\doorWoodGreenhouseClose_1",1},{"\DZ\sounds\environment\buildings\doors\WoodGreenhouse\doorWoodGreenhouseClose_2",1},{"\DZ\sounds\environment\buildings\doors\WoodGreenhouse\doorWoodGreenhouseClose_3",1}};
	};
	//ContainerMedium
	class DMP_doorMetalContainerOpen_SoundShader: base_SoundShaderFlies
	{
		samples[] = {{"\DZ\sounds\environment\buildings\doors\MetalContainer\doorMetalContainerOpen_1",1},{"\DZ\sounds\environment\buildings\doors\MetalContainer\doorMetalContainerOpen_2",1}};
	};
	class DMP_doorMetalContainerClose_SoundShader: base_SoundShaderFlies
	{
		samples[] = {{"\DZ\sounds\environment\buildings\doors\MetalContainer\doorMetalContainerClose_1",1},{"DZ\sounds\environment\buildings\doors\MetalContainer\doorMetalContainerClose_2",1}};
	};
	//Safe
	class DMP_doorMetalSmallOpenABit_SoundShader: base_SoundShaderFlies
	{
		samples[] = {{"\DZ\sounds\environment\buildings\doors\metal\doorMetalSmallOpenABit_1",1},{"\DZ\sounds\environment\buildings\doors\metal\doorMetalSmallOpenABit_3",1},{"\DZ\sounds\environment\buildings\doors\metal\doorMetalSmallOpenABit_2",1}};
	};
	class DMP_doorMetalTwinClose_SoundShader: base_SoundShaderFlies
	{
		samples[] = {{"\DZ\sounds\environment\buildings\doors\MetalTwin\doorMetalTwinClose_1",1},{"\DZ\sounds\environment\buildings\doors\MetalTwin\doorMetalTwinClose_2",1},{"\DZ\sounds\environment\buildings\doors\MetalTwin\doorMetalTwinClose_3",1}};
	};
	//Place Furniture
	/*class DMP_PlaceFurniture_SoundShader: base_SoundShaderFlies
	{
		samples[] = {"\Deron\Infected\InfectedFurniture\InfectedPlaceFurniture",1};
	};*/
	//
	/*class DMP__SoundShader: base_SoundShaderFlies
	{
		samples[] = {{"",1},{"",1},{"",1}};
	};
	class DMP__SoundShader: base_SoundShaderFlies
	{
		samples[] = {{"",1},{"",1},{"",1}};
	};*/
};
class CfgSlots
{
	class Slot_dmp_ammobox1
	{
		name="dmp_ammobox1";
		displayName = "#str_cfgvehicles_ammobox0";
		ghostIcon = "set:dmp_tools image:dmp_ammobox";
	};
	class Slot_dmp_ammobox10
	{
		name="dmp_ammobox10";
		displayName = "#str_cfgvehicles_ammobox0";
		ghostIcon = "set:dmp_tools image:dmp_ammobox";
	};
	class Slot_dmp_ammobox2
	{
		name="dmp_ammobox2";
		displayName = "#str_cfgvehicles_ammobox0";
		ghostIcon = "set:dmp_tools image:dmp_ammobox";
	};
	class Slot_dmp_ammobox3
	{
		name="dmp_ammobox3";
		displayName = "#str_cfgvehicles_ammobox0";
		ghostIcon = "set:dmp_tools image:dmp_ammobox";
	};
	class Slot_dmp_ammobox4
	{
		name="dmp_ammobox4";
		displayName = "#str_cfgvehicles_ammobox0";
		ghostIcon = "set:dmp_tools image:dmp_ammobox";
	};
	class Slot_dmp_ammobox5
	{
		name="dmp_ammobox5";
		displayName = "#str_cfgvehicles_ammobox0";
		ghostIcon = "set:dmp_tools image:dmp_ammobox";
	};
	class Slot_dmp_ammobox6
	{
		name="dmp_ammobox6";
		displayName = "#str_cfgvehicles_ammobox0";
		ghostIcon = "set:dmp_tools image:dmp_ammobox";
	};
	class Slot_dmp_ammobox7
	{
		name="dmp_ammobox7";
		displayName = "#str_cfgvehicles_ammobox0";
		ghostIcon = "set:dmp_tools image:dmp_ammobox";
	};
	class Slot_dmp_ammobox8
	{
		name="dmp_ammobox8";
		displayName = "#str_cfgvehicles_ammobox0";
		ghostIcon = "set:dmp_tools image:dmp_ammobox";
	};
	class Slot_dmp_ammobox9
	{
		name="dmp_ammobox9";
		displayName = "#str_cfgvehicles_ammobox0";
		ghostIcon = "set:dmp_tools image:dmp_ammobox";
	};
	class Slot_dmp_ducttape1
	{
		name="dmp_ducttape1";
		displayName = "#str_cfgvehicles_ducttape0";
		ghostIcon = "set:dmp_tools image:dmp_ducttape";
	};
	class Slot_dmp_ducttape2
	{
		name="dmp_ducttape2";
		displayName = "#str_cfgvehicles_ducttape0";
		ghostIcon = "set:dmp_tools image:dmp_ducttape";
	};
	class Slot_dmp_ducttape3
	{
		name="dmp_ducttape3";
		displayName = "#str_cfgvehicles_ducttape0";
		ghostIcon = "set:dmp_tools image:dmp_ducttape";
	};
	class Slot_dmp_ducttape4
	{
		name="dmp_ducttape4";
		displayName = "#str_cfgvehicles_ducttape0";
		ghostIcon = "set:dmp_tools image:dmp_ducttape";
	};
	class Slot_dmp_ducttape5
	{
		name="dmp_ducttape5";
		displayName = "#str_cfgvehicles_ducttape0";
		ghostIcon = "set:dmp_tools image:dmp_ducttape";
	};
	class Slot_dmp_ducttape6
	{
		name="dmp_ducttape6";
		displayName = "#str_cfgvehicles_ducttape0";
		ghostIcon = "set:dmp_tools image:dmp_ducttape";
	};
	class Slot_dmp_ducttape7
	{
		name="dmp_ducttape7";
		displayName = "#str_cfgvehicles_ducttape0";
		ghostIcon = "set:dmp_tools image:dmp_ducttape";
	};
	class Slot_dmp_hacksaw1
	{
		name="dmp_hacksaw1";
		displayName = "#STR_CfgVehicles_HandSaw0";
		ghostIcon = "set:dmp_tools image:dmp_hacksaw";
	};
	class Slot_dmp_hacksaw2
	{
		name="dmp_hacksaw2";
		displayName = "#STR_CfgVehicles_HandSaw0";
		ghostIcon = "set:dmp_tools image:dmp_hacksaw";
	};
	class Slot_dmp_hacksaw3
	{
		name="dmp_hacksaw3";
		displayName = "#STR_CfgVehicles_HandSaw0";
		ghostIcon = "set:dmp_tools image:dmp_hacksaw";
	};
	class Slot_dmp_hacksaw4
	{
		name="dmp_hacksaw4";
		displayName = "#STR_CfgVehicles_HandSaw0";
		ghostIcon = "set:dmp_tools image:dmp_hacksaw";
	};
	class Slot_dmp_hacksaw5
	{
		name="dmp_hacksaw5";
		displayName = "#STR_CfgVehicles_HandSaw0";
		ghostIcon = "set:dmp_tools image:dmp_hacksaw";
	};
	class Slot_dmp_hacksaw6
	{
		name="dmp_hacksaw6";
		displayName = "#STR_CfgVehicles_HandSaw0";
		ghostIcon = "set:dmp_tools image:dmp_hacksaw";
	};
	class Slot_dmp_hammer1
	{
		name="dmp_hammer1";
		displayName = "#str_cfgvehicles_hammer0";
		ghostIcon = "set:dmp_tools image:dmp_hammer";
	};
	class Slot_dmp_hammer2
	{
		name="dmp_hammer2";
		displayName = "#str_cfgvehicles_hammer0";
		ghostIcon = "set:dmp_tools image:dmp_hammer";
	};
	class Slot_dmp_hammer3
	{
		name="dmp_hammer3";
		displayName = "#str_cfgvehicles_hammer0";
		ghostIcon = "set:dmp_tools image:dmp_hammer";
	};
	class Slot_dmp_hammer4
	{
		name="dmp_hammer4";
		displayName = "#str_cfgvehicles_hammer0";
		ghostIcon = "set:dmp_tools image:dmp_hammer";
	};
	class Slot_dmp_hammer5
	{
		name="dmp_hammer5";
		displayName = "#str_cfgvehicles_hammer0";
		ghostIcon = "set:dmp_tools image:dmp_hammer";
	};
	class Slot_dmp_hammer6
	{
		name="dmp_hammer6";
		displayName = "#str_cfgvehicles_hammer0";
		ghostIcon = "set:dmp_tools image:dmp_hammer";
	};
	class Slot_dmp_hammer7
	{
		name="dmp_hammer7";
		displayName = "#str_cfgvehicles_hammer0";
		ghostIcon = "set:dmp_tools image:dmp_hammer";
	};
	class Slot_dmp_hatchet1
	{
		name="dmp_hatchet1";
		displayName = "#str_cfgvehicles_hatchet0";
		ghostIcon = "set:dmp_tools image:dmp_hatchet";
	};
	class Slot_dmp_hatchet2
	{
		name="dmp_hatchet2";
		displayName = "#str_cfgvehicles_hatchet0";
		ghostIcon = "set:dmp_tools image:dmp_hatchet";
	};
	class Slot_dmp_hatchet3
	{
		name="dmp_hatchet3";
		displayName = "#str_cfgvehicles_hatchet0";
		ghostIcon = "set:dmp_tools image:dmp_hatchet";
	};
	class Slot_dmp_hatchet4
	{
		name="dmp_hatchet4";
		displayName = "#str_cfgvehicles_hatchet0";
		ghostIcon = "set:dmp_tools image:dmp_hatchet";
	};
	class Slot_dmp_hatchet5
	{
		name="dmp_hatchet5";
		displayName = "#str_cfgvehicles_hatchet0";
		ghostIcon = "set:dmp_tools image:dmp_hatchet";
	};
	class Slot_dmp_hatchet6
	{
		name="dmp_hatchet6";
		displayName = "#str_cfgvehicles_hatchet0";
		ghostIcon = "set:dmp_tools image:dmp_hatchet";
	};
	class Slot_dmp_hatchet7
	{
		name="dmp_hatchet7";
		displayName = "#str_cfgvehicles_hatchet0";
		ghostIcon = "set:dmp_tools image:dmp_hatchet";
	};
	class Slot_dmp_hatchet8
	{
		name="dmp_hatchet8";
		displayName = "#str_cfgvehicles_hatchet0";
		ghostIcon = "set:dmp_tools image:dmp_hatchet";
	};
	class Slot_dmp_hatchet9
	{
		name="dmp_hatchet9";
		displayName = "#str_cfgvehicles_hatchet0";
		ghostIcon = "set:dmp_tools image:dmp_hatchet";
	};
	class Slot_dmp_metalwire1
	{
		name="dmp_metalwire1";
		displayName = "#STR_CfgMetalWire0";
		ghostIcon = "set:dayz_inventory image:metalwire";
	};
	class Slot_dmp_metalwire2
	{
		name="dmp_metalwire2";
		displayName = "#STR_CfgMetalWire0";
		ghostIcon = "set:dayz_inventory image:metalwire";
	};
	class Slot_dmp_metalwire3
	{
		name="dmp_metalwire3";
		displayName = "#STR_CfgMetalWire0";
		ghostIcon = "set:dayz_inventory image:metalwire";
	};
	class Slot_dmp_metalwire4
	{
		name="dmp_metalwire4";
		displayName = "#STR_CfgMetalWire0";
		ghostIcon = "set:dayz_inventory image:metalwire";
	};
	class Slot_dmp_metalwire5
	{
		name="dmp_metalwire5";
		displayName = "#STR_CfgMetalWire0";
		ghostIcon = "set:dayz_inventory image:metalwire";
	};
	class Slot_dmp_nails_box1
	{
		name="dmp_nails_box1";
		displayName = "#str_cfgvehicles_nailbox0";
		ghostIcon = "set:dmp_tools image:dmp_nails_box";
	};
	class Slot_dmp_nails_box10
	{
		name="dmp_nails_box10";
		displayName = "#str_cfgvehicles_nailbox0";
		ghostIcon = "set:dmp_tools image:dmp_nails_box";
	};
	class Slot_dmp_nails_box11
	{
		name="dmp_nails_box11";
		displayName = "#str_cfgvehicles_nailbox0";
		ghostIcon = "set:dmp_tools image:dmp_nails_box";
	};
	class Slot_dmp_nails_box12
	{
		name="dmp_nails_box12";
		displayName = "#str_cfgvehicles_nailbox0";
		ghostIcon = "set:dmp_tools image:dmp_nails_box";
	};
	class Slot_dmp_nails_box13
	{
		name="dmp_nails_box13";
		displayName = "#str_cfgvehicles_nailbox0";
		ghostIcon = "set:dmp_tools image:dmp_nails_box";
	};
	class Slot_dmp_nails_box14
	{
		name="dmp_nails_box14";
		displayName = "#str_cfgvehicles_nailbox0";
		ghostIcon = "set:dmp_tools image:dmp_nails_box";
	};
	class Slot_dmp_nails_box15
	{
		name="dmp_nails_box15";
		displayName = "#str_cfgvehicles_nailbox0";
		ghostIcon = "set:dmp_tools image:dmp_nails_box";
	};
	class Slot_dmp_nails_box16
	{
		name="dmp_nails_box16";
		displayName = "#str_cfgvehicles_nailbox0";
		ghostIcon = "set:dmp_tools image:dmp_nails_box";
	};
	class Slot_dmp_nails_box17
	{
		name="dmp_nails_box17";
		displayName = "#str_cfgvehicles_nailbox0";
		ghostIcon = "set:dmp_tools image:dmp_nails_box";
	};
	class Slot_dmp_nails_box2
	{
		name="dmp_nails_box2";
		displayName = "#str_cfgvehicles_nailbox0";
		ghostIcon = "set:dmp_tools image:dmp_nails_box";
	};
	class Slot_dmp_nails_box3
	{
		name="dmp_nails_box3";
		displayName = "#str_cfgvehicles_nailbox0";
		ghostIcon = "set:dmp_tools image:dmp_nails_box";
	};
	class Slot_dmp_nails_box4
	{
		name="dmp_nails_box4";
		displayName = "#str_cfgvehicles_nailbox0";
		ghostIcon = "set:dmp_tools image:dmp_nails_box";
	};
	class Slot_dmp_nails_box5
	{
		name="dmp_nails_box5";
		displayName = "#str_cfgvehicles_nailbox0";
		ghostIcon = "set:dmp_tools image:dmp_nails_box";
	};
	class Slot_dmp_nails_box6
	{
		name="dmp_nails_box6";
		displayName = "#str_cfgvehicles_nailbox0";
		ghostIcon = "set:dmp_tools image:dmp_nails_box";
	};
	class Slot_dmp_nails_box7
	{
		name="dmp_nails_box7";
		displayName = "#str_cfgvehicles_nailbox0";
		ghostIcon = "set:dmp_tools image:dmp_nails_box";
	};
	class Slot_dmp_nails_box8
	{
		name="dmp_nails_box8";
		displayName = "#str_cfgvehicles_nailbox0";
		ghostIcon = "set:dmp_tools image:dmp_nails_box";
	};
	class Slot_dmp_nails_box9
	{
		name="dmp_nails_box9";
		displayName = "#str_cfgvehicles_nailbox0";
		ghostIcon = "set:dmp_tools image:dmp_nails_box";
	};
	class Slot_dmp_pliers1
	{
		name="dmp_pliers1";
		displayName = "#str_cfgvehicles_pliers0";
		ghostIcon = "set:dmp_tools image:dmp_pliers";
	};
	class Slot_dmp_pliers2
	{
		name="dmp_pliers2";
		displayName = "#str_cfgvehicles_pliers0";
		ghostIcon = "set:dmp_tools image:dmp_pliers";
	};
	class Slot_dmp_pliers3
	{
		name="dmp_pliers3";
		displayName = "#str_cfgvehicles_pliers0";
		ghostIcon = "set:dmp_tools image:dmp_pliers";
	};
	class Slot_dmp_pliers4
	{
		name="dmp_pliers4";
		displayName = "#str_cfgvehicles_pliers0";
		ghostIcon = "set:dmp_tools image:dmp_pliers";
	};
	class Slot_dmp_protector_case1
	{
		name="dmp_protector_case1";
		displayName = "#str_cfgvehicles_smallprotectorcase0";
		ghostIcon = "set:dmp_tools image:dmp_protector_case";
	};
	class Slot_dmp_protector_case2
	{
		name="dmp_protector_case2";
		displayName = "#str_cfgvehicles_smallprotectorcase0";
		ghostIcon = "set:dmp_tools image:dmp_protector_case";
	};
	class Slot_dmp_rope1
	{
		name="dmp_rope1";
		displayName = "#str_cfgvehicles_rope0";
		ghostIcon = "set:dayz_inventory image:rope";
	};
	class Slot_dmp_rope2
	{
		name="dmp_rope2";
		displayName = "#str_cfgvehicles_rope0";
		ghostIcon = "set:dayz_inventory image:rope";
	};
	class Slot_dmp_rope3
	{
		name="dmp_rope3";
		displayName = "#str_cfgvehicles_rope0";
		ghostIcon = "set:dayz_inventory image:rope";
	};
	class Slot_dmp_rope4
	{
		name="dmp_rope4";
		displayName = "#str_cfgvehicles_rope0";
		ghostIcon = "set:dayz_inventory image:rope";
	};
	class Slot_dmp_screwdriver1
	{
		name="dmp_screwdriver1";
		displayName = "#str_cfgvehicles_screwdriver0";
		ghostIcon = "set:dmp_tools image:dmp_screwdriver";
	};
	class Slot_dmp_screwdriver2
	{
		name="dmp_screwdriver2";
		displayName = "#str_cfgvehicles_screwdriver0";
		ghostIcon = "set:dmp_tools image:dmp_screwdriver";
	};
	class Slot_dmp_screwdriver3
	{
		name="dmp_screwdriver3";
		displayName = "#str_cfgvehicles_screwdriver0";
		ghostIcon = "set:dmp_tools image:dmp_screwdriver";
	};
	class Slot_dmp_screwdriver4
	{
		name="dmp_screwdriver4";
		displayName = "#str_cfgvehicles_screwdriver0";
		ghostIcon = "set:dmp_tools image:dmp_screwdriver";
	};
	class Slot_dmp_shovel1
	{
		name="dmp_shovel1";
		displayName = "#str_cfgvehicles_shovel0";
		ghostIcon = "set:dmp_tools image:dmp_shovel";
	};
	class Slot_dmp_shovel2
	{
		name="dmp_shovel2";
		displayName = "#str_cfgvehicles_shovel0";
		ghostIcon = "set:dmp_tools image:dmp_shovel";
	};
	class Slot_dmp_shovel3
	{
		name="dmp_shovel3";
		displayName = "#str_cfgvehicles_shovel0";
		ghostIcon = "set:dmp_tools image:dmp_shovel";
	};
	class Slot_dmp_weapons1
	{
		name="dmp_weapons1";
		displayName = "#str_dmp_weapons0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_dmp_weapons10
	{
		name="dmp_weapons10";
		displayName = "#str_dmp_weapons0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_dmp_weapons11
	{
		name="dmp_weapons11";
		displayName = "#str_dmp_weapons0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_dmp_weapons12
	{
		name="dmp_weapons12";
		displayName = "#str_dmp_weapons0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_dmp_weapons13
	{
		name="dmp_weapons13";
		displayName = "#str_dmp_weapons0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_dmp_weapons14
	{
		name="dmp_weapons14";
		displayName = "#str_dmp_weapons0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_dmp_weapons15
	{
		name="dmp_weapons15";
		displayName = "#str_dmp_weapons0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_dmp_weapons16
	{
		name="dmp_weapons16";
		displayName = "#str_dmp_weapons0";
		ghostIcon = "set:dayz_inventory image:shoulderleft//";
	};	
	class Slot_dmp_weapons2
	{
		name="dmp_weapons2";
		displayName = "#str_dmp_weapons0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_dmp_weapons3
	{
		name="dmp_weapons3";
		displayName = "#str_dmp_weapons0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_dmp_weapons4
	{
		name="dmp_weapons4";
		displayName = "#str_dmp_weapons0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_dmp_weapons5
	{
		name="dmp_weapons5";
		displayName = "#str_dmp_weapons0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_dmp_weapons6
	{
		name="dmp_weapons6";
		displayName = "#str_dmp_weapons0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_dmp_weapons7
	{
		name="dmp_weapons7";
		displayName = "#str_dmp_weapons0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_dmp_weapons8
	{
		name="dmp_weapons8";
		displayName = "#str_dmp_weapons0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_dmp_weapons9
	{
		name="dmp_weapons9";
		displayName = "#str_dmp_weapons0";
		ghostIcon = "set:dayz_inventory image:shoulderleft";
	};
	class Slot_dmp_woodaxe1
	{
		name="dmp_woodaxe1";
		displayName = "#STR_CfgVehicles_WoodAxe0";
		ghostIcon = "set:dmp_tools image:dmp_woodaxe";
	};
	class Slot_dmp_woodaxe2
	{
		name="dmp_woodaxe2";
		displayName = "#STR_CfgVehicles_WoodAxe0";
		ghostIcon = "set:dmp_tools image:dmp_woodaxe";
	};
	class Slot_dmp_woodaxe3
	{
		name="dmp_woodaxe3";
		displayName = "#STR_CfgVehicles_WoodAxe0";
		ghostIcon = "set:dmp_tools image:dmp_woodaxe";
	};
	//Kits
	class Slot_dmp_weaponcleaningkit1
	{
		name="dmp_weaponcleaningkit1";
		displayName = "#STR_CfgVehicles_WeaponCleaningKit0";
		ghostIcon = "set:dmp_tools image:dmp_weaponcleaningkit";
	};
	class Slot_dmp_weaponcleaningkit2
	{
		name="dmp_weaponcleaningkit2";
		displayName = "#STR_CfgVehicles_WeaponCleaningKit0";
		ghostIcon = "set:dmp_tools image:dmp_weaponcleaningkit";
	};
	class Slot_dmp_weaponcleaningkit3
	{
		name="dmp_weaponcleaningkit3";
		displayName = "#STR_CfgVehicles_WeaponCleaningKit0";
		ghostIcon = "set:dmp_tools image:dmp_weaponcleaningkit";
	};
	class Slot_dmp_weaponcleaningkit4
	{
		name="dmp_weaponcleaningkit4";
		displayName = "#STR_CfgVehicles_WeaponCleaningKit0";
		ghostIcon = "set:dmp_tools image:dmp_weaponcleaningkit";
	};
	class Slot_dmp_weaponcleaningkit5
	{
		name="dmp_weaponcleaningkit5";
		displayName = "#STR_CfgVehicles_WeaponCleaningKit0";
		ghostIcon = "set:dmp_tools image:dmp_weaponcleaningkit";
	};
	class Slot_dmp_sewing_kit1
	{
		name="dmp_sewing_kit1";
		displayName = "#STR_CfgVehicles_SewingKit0";
		ghostIcon = "set:dmp_tools image:dmp_sewing_kit";
	};
	class Slot_dmp_sewing_kit2
	{
		name="dmp_sewing_kit2";
		displayName = "#STR_CfgVehicles_SewingKit0";
		ghostIcon = "set:dmp_tools image:dmp_sewing_kit";
	};
	class Slot_dmp_sewing_kit3
	{
		name="dmp_sewing_kit3";
		displayName = "#STR_CfgVehicles_SewingKit0";
		ghostIcon = "set:dmp_tools image:dmp_sewing_kit";
	};
	class Slot_dmp_sewing_kit4
	{
		name="dmp_sewing_kit4";
		displayName = "#STR_CfgVehicles_SewingKit0";
		ghostIcon = "set:dmp_tools image:dmp_sewing_kit";
	};
	class Slot_dmp_sewing_kit5
	{
		name="dmp_sewing_kit5";
		displayName = "#STR_CfgVehicles_SewingKit0";
		ghostIcon = "set:dmp_tools image:dmp_sewing_kit";
	};
	class Slot_dmp_leather_sewing_kit1
	{
		name="dmp_leather_sewing_kit1";
		displayName = "#STR_CfgVehicles_LeatherSewingKit0";
		ghostIcon = "set:dmp_tools image:dmp_leather_sewing_kit";
	};
	class Slot_dmp_leather_sewing_kit2
	{
		name="dmp_leather_sewing_kit2";
		displayName = "#STR_CfgVehicles_LeatherSewingKit0";
		ghostIcon = "set:dmp_tools image:dmp_leather_sewing_kit";
	};
	class Slot_dmp_leather_sewing_kit3
	{
		name="dmp_leather_sewing_kit3";
		displayName = "#STR_CfgVehicles_LeatherSewingKit0";
		ghostIcon = "set:dmp_tools image:dmp_leather_sewing_kit";
	};
	class Slot_dmp_leather_sewing_kit4
	{
		name="dmp_leather_sewing_kit4";
		displayName = "#STR_CfgVehicles_LeatherSewingKit0";
		ghostIcon = "set:dmp_tools image:dmp_leather_sewing_kit";
	};
	class Slot_dmp_leather_sewing_kit5
	{
		name="dmp_leather_sewing_kit5";
		displayName = "#STR_CfgVehicles_LeatherSewingKit0";
		ghostIcon = "set:dmp_tools image:dmp_leather_sewing_kit";
	};
	class Slot_dmp_electronicCase1
	{
		name="dmp_electronicCase1";
		displayName = "#STR_CfgVehicles_ElectronicRepairKit0";
		ghostIcon = "set:dmp_tools image:dmp_electronicCase";
	};
	class Slot_dmp_electronicCase2
	{
		name="dmp_electronicCase2";
		displayName = "#STR_CfgVehicles_ElectronicRepairKit0";
		ghostIcon = "set:dmp_tools image:dmp_electronicCase";
	};
	class Slot_dmp_electronicCase3
	{
		name="dmp_electronicCase3";
		displayName = "#STR_CfgVehicles_ElectronicRepairKit0";
		ghostIcon = "set:dmp_tools image:dmp_electronicCase";
	};
	class Slot_dmp_electronicCase4
	{
		name="dmp_electronicCase4";
		displayName = "#STR_CfgVehicles_ElectronicRepairKit0";
		ghostIcon = "set:dmp_tools image:dmp_electronicCase";
	};
	class Slot_dmp_electronicCase5
	{
		name="dmp_electronicCase5";
		displayName = "#STR_CfgVehicles_ElectronicRepairKit0";
		ghostIcon = "set:dmp_tools image:dmp_electronicCase";
	};
	class Slot_dmp_epoxy_putty1
	{
		name="dmp_epoxy_putty1";
		displayName = "#STR_CfgVehicles_EpoxyPutty0";
		ghostIcon = "set:dmp_tools image:dmp_epoxy_putty";
	};
	class Slot_dmp_epoxy_putty2
	{
		name="dmp_epoxy_putty2";
		displayName = "#STR_CfgVehicles_EpoxyPutty0";
		ghostIcon = "set:dmp_tools image:dmp_epoxy_putty";
	};
	class Slot_dmp_epoxy_putty3
	{
		name="dmp_epoxy_putty3";
		displayName = "#STR_CfgVehicles_EpoxyPutty0";
		ghostIcon = "set:dmp_tools image:dmp_epoxy_putty";
	};
	class Slot_dmp_epoxy_putty4
	{
		name="dmp_epoxy_putty4";
		displayName = "#STR_CfgVehicles_EpoxyPutty0";
		ghostIcon = "set:dmp_tools image:dmp_epoxy_putty";
	};
	class Slot_dmp_epoxy_putty5
	{
		name="dmp_epoxy_putty5";
		displayName = "#STR_CfgVehicles_EpoxyPutty0";
		ghostIcon = "set:dmp_tools image:dmp_epoxy_putty";
	};
	class Slot_dmp_whetstone1
	{
		name="dmp_whetstone1";
		displayName = "#STR_CfgVehicles_Whetstone0";
		ghostIcon = "set:dmp_tools image:dmp_whetstone";
	};
	class Slot_dmp_whetstone2
	{
		name="dmp_whetstone2";
		displayName = "#STR_CfgVehicles_Whetstone0";
		ghostIcon = "set:dmp_tools image:dmp_whetstone";
	};
	class Slot_dmp_whetstone3
	{
		name="dmp_whetstone3";
		displayName = "#STR_CfgVehicles_Whetstone0";
		ghostIcon = "set:dmp_tools image:dmp_whetstone";
	};
	class Slot_dmp_whetstone4
	{
		name="dmp_whetstone4";
		displayName = "#STR_CfgVehicles_Whetstone0";
		ghostIcon = "set:dmp_tools image:dmp_whetstone";
	};
	class Slot_dmp_whetstone5
	{
		name="dmp_whetstone5";
		displayName = "#STR_CfgVehicles_Whetstone0";
		ghostIcon = "set:dmp_tools image:dmp_whetstone";
	};
	class Slot_dmp_blowtorch1
	{
		name="dmp_blowtorch1";
		displayName = "#dmp_blowtorch0";
		ghostIcon = "set:dmp_tools image:dmp_blowtorch";
	};
	class Slot_dmp_blowtorch2
	{
		name="dmp_blowtorch2";
		displayName = "#dmp_blowtorch0";
		ghostIcon = "set:dmp_tools image:dmp_blowtorch";
	};
	class Slot_dmp_blowtorch3
	{
		name="dmp_blowtorch3";
		displayName = "#dmp_blowtorch0";
		ghostIcon = "set:dmp_tools image:dmp_blowtorch";
	};
	class Slot_dmp_blowtorch4
	{
		name="dmp_blowtorch4";
		displayName = "#dmp_blowtorch0";
		ghostIcon = "set:dmp_tools image:dmp_blowtorch";
	};
	class Slot_dmp_blowtorch5
	{
		name="dmp_blowtorch5";
		displayName = "#dmp_blowtorch0";
		ghostIcon = "set:dmp_tools image:dmp_blowtorch";
	};
	class Slot_dmp_tire_repair_kit1
	{
		name="dmp_tire_repair_kit1";
		displayName = "#STR_CfgVehicles_TireRepairKit0";
		ghostIcon = "set:dmp_tools image:dmp_tire_repair_kit";
	};	
	class Slot_dmp_tire_repair_kit2
	{
		name="dmp_tire_repair_kit2";
		displayName = "#STR_CfgVehicles_TireRepairKit0";
		ghostIcon = "set:dmp_tools image:dmp_tire_repair_kit";
	};	
	class Slot_dmp_tire_repair_kit3
	{
		name="dmp_tire_repair_kit3";
		displayName = "#STR_CfgVehicles_TireRepairKit0";
		ghostIcon = "set:dmp_tools image:dmp_tire_repair_kit";
	};	
	class Slot_dmp_tire_repair_kit4
	{
		name="dmp_tire_repair_kit4";
		displayName = "#STR_CfgVehicles_TireRepairKit0";
		ghostIcon = "set:dmp_tools image:dmp_tire_repair_kit";
	};	
	class Slot_dmp_tire_repair_kit5
	{
		name="dmp_tire_repair_kit5";
		displayName = "#STR_CfgVehicles_TireRepairKit0";
		ghostIcon = "set:dmp_tools image:dmp_tire_repair_kit";
	};
	class Slot_dmp_planks
	{
		name="dmp_planks";
		displayName = "#STR_CfgPlanks0";
		// selection = "dmp_planks_test";
		ghostIcon = "set:dayz_inventory image:planks";
		stackMax = 100;
	};
	//end Kits
	class Slot_dmp_woodencrate1
	{
		name="dmp_woodencrate1";
		displayName = "#STR_CfgCrate0";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_dmp_woodencrate10
	{
		name="dmp_woodencrate10";
		displayName = "#STR_CfgCrate0";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_dmp_woodencrate2
	{
		name="dmp_woodencrate2";
		displayName = "#STR_CfgCrate0";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_dmp_woodencrate3
	{
		name="dmp_woodencrate3";
		displayName = "#STR_CfgCrate0";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_dmp_woodencrate4
	{
		name="dmp_woodencrate4";
		displayName = "#STR_CfgCrate0";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_dmp_woodencrate5
	{
		name="dmp_woodencrate5";
		displayName = "#STR_CfgCrate0";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_dmp_woodencrate6
	{
		name="dmp_woodencrate6";
		displayName = "#STR_CfgCrate0";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_dmp_woodencrate7
	{
		name="dmp_woodencrate7";
		displayName = "#STR_CfgCrate0";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_dmp_woodencrate8
	{
		name="dmp_woodencrate8";
		displayName = "#STR_CfgCrate0";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_dmp_woodencrate9
	{
		name="dmp_woodencrate9";
		displayName = "#STR_CfgCrate0";
		ghostIcon = "set:dayz_inventory image:woodcrate";
	};
	class Slot_dmp_vest_m1
	{
		name="dmp_vest_m1"; 
		displayName = "#STR_CfgVest0"; 
		ghostIcon = "set:dayz_inventory image:vest"; 
	};
	class Slot_dmp_vest_m2
	{
		name="dmp_vest_m2"; 
		displayName = "#STR_CfgVest0"; 
		ghostIcon = "set:dayz_inventory image:vest"; 
	};
	class Slot_dmp_vest_m3
	{
		name="dmp_vest_m3"; 
		displayName = "#STR_CfgVest0"; 
		ghostIcon = "set:dayz_inventory image:vest"; 
	};
	class Slot_dmp_vest_m4
	{
		name="dmp_vest_m4"; 
		displayName = "#STR_CfgVest0"; 
		ghostIcon = "set:dayz_inventory image:vest"; 
	};
	class Slot_dmp_vest_m5
	{
		name="dmp_vest_m5"; 
		displayName = "#STR_CfgVest0"; 
		ghostIcon = "set:dayz_inventory image:vest"; 
	};
	class Slot_dmp_headgear_m1
	{
		name="dmp_headgear_m1"; 
		displayName = "#STR_CfgHeadgear0"; 
		ghostIcon = "set:dayz_inventory image:headgear"; 
	};
	class Slot_dmp_headgear_m2
	{
		name="dmp_headgear_m2"; 
		displayName = "#STR_CfgHeadgear0"; 
		ghostIcon = "set:dayz_inventory image:headgear"; 
	};
	class Slot_dmp_headgear_m3
	{
		name="dmp_headgear_m3"; 
		displayName = "#STR_CfgHeadgear0"; 
		ghostIcon = "set:dayz_inventory image:headgear"; 
	};
	class Slot_dmp_feet1
	{
		name="dmp_feet1"; 
		displayName = "#STR_CfgFeet0"; 
		ghostIcon = "set:dayz_inventory image:feet";
	};
	class Slot_dmp_feet2
	{
		name="dmp_feet2"; 
		displayName = "#STR_CfgFeet0"; 
		ghostIcon = "set:dayz_inventory image:feet";
	};
	class Slot_dmp_back_m1
	{
		name="dmp_back_m1"; 
		displayName = "#STR_CfgBack0"; 
		ghostIcon = "set:dayz_inventory image:back";
	};
};
//###################################################################################################################
//###################################################################################################################

//###################################################################################################################
//###################################################################################################################
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxydmp_ammobox1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_ammobox1";
		model="Azkaban_dm\proxy\dmp_ammobox1";
	};
	class Proxydmp_ammobox10: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_ammobox10";
		model="Azkaban_dm\proxy\dmp_ammobox10";
	};
	class Proxydmp_ammobox2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_ammobox2";
		model="Azkaban_dm\proxy\dmp_ammobox2";
	};
	class Proxydmp_ammobox3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_ammobox3";
		model="Azkaban_dm\proxy\dmp_ammobox3";
	};
	class Proxydmp_ammobox4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_ammobox4";
		model="Azkaban_dm\proxy\dmp_ammobox4";
	};
	class Proxydmp_ammobox5: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_ammobox5";
		model="Azkaban_dm\proxy\dmp_ammobox5";
	};
	class Proxydmp_ammobox6: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_ammobox6";
		model="Azkaban_dm\proxy\dmp_ammobox6";
	};
	class Proxydmp_ammobox7: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_ammobox7";
		model="Azkaban_dm\proxy\dmp_ammobox7";
	};
	class Proxydmp_ammobox8: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_ammobox8";
		model="Azkaban_dm\proxy\dmp_ammobox8";
	};
	class Proxydmp_ammobox9: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_ammobox9";
		model="Azkaban_dm\proxy\dmp_ammobox9";
	};
	class Proxydmp_ducttape1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_ducttape1";
		model="Azkaban_dm\proxy\dmp_ducttape1";
	};
	class Proxydmp_ducttape2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_ducttape2";
		model="Azkaban_dm\proxy\dmp_ducttape2";
	};
	class Proxydmp_ducttape3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_ducttape3";
		model="Azkaban_dm\proxy\dmp_ducttape3";
	};
	class Proxydmp_ducttape4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_ducttape4";
		model="Azkaban_dm\proxy\dmp_ducttape4";
	};
	class Proxydmp_ducttape5: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_ducttape5";
		model="Azkaban_dm\proxy\dmp_ducttape5";
	};
	class Proxydmp_ducttape6: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_ducttape6";
		model="Azkaban_dm\proxy\dmp_ducttape6";
	};
	class Proxydmp_ducttape7: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_ducttape7";
		model="Azkaban_dm\proxy\dmp_ducttape7";
	};
	class Proxydmp_hacksaw1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hacksaw1";
		model="Azkaban_dm\proxy\dmp_hacksaw1";
	};
	class Proxydmp_hacksaw2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hacksaw2";
		model="Azkaban_dm\proxy\dmp_hacksaw2";
	};
	class Proxydmp_hacksaw3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hacksaw3";
		model="Azkaban_dm\proxy\dmp_hacksaw3";
	};
	class Proxydmp_hacksaw4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hacksaw4";
		model="Azkaban_dm\proxy\dmp_hacksaw4";
	};
	class Proxydmp_hacksaw5: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hacksaw5";
		model="Azkaban_dm\proxy\dmp_hacksaw5";
	};
	class Proxydmp_hacksaw6: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hacksaw6";
		model="Azkaban_dm\proxy\dmp_hacksaw6";
	};
	class Proxydmp_hammer1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hammer1";
		model="Azkaban_dm\proxy\dmp_hammer1";
	};
	class Proxydmp_hammer2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hammer2";
		model="Azkaban_dm\proxy\dmp_hammer2";
	};
	class Proxydmp_hammer3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hammer3";
		model="Azkaban_dm\proxy\dmp_hammer3";
	};
	class Proxydmp_hammer4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hammer4";
		model="Azkaban_dm\proxy\dmp_hammer4";
	};
	class Proxydmp_hammer5: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hammer5";
		model="Azkaban_dm\proxy\dmp_hammer5";
	};
	class Proxydmp_hammer6: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hammer6";
		model="Azkaban_dm\proxy\dmp_hammer6";
	};
	class Proxydmp_hammer7: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hammer7";
		model="Azkaban_dm\proxy\dmp_hammer7";
	};
	class Proxydmp_hatchet1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hatchet1";
		model="Azkaban_dm\proxy\dmp_hatchet1";
	};
	class Proxydmp_hatchet2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hatchet2";
		model="Azkaban_dm\proxy\dmp_hatchet2";
	};
	class Proxydmp_hatchet3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hatchet3";
		model="Azkaban_dm\proxy\dmp_hatchet3";
	};
	class Proxydmp_hatchet4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hatchet4";
		model="Azkaban_dm\proxy\dmp_hatchet4";
	};
	class Proxydmp_hatchet5: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hatchet5";
		model="Azkaban_dm\proxy\dmp_hatchet5";
	};
	class Proxydmp_hatchet6: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hatchet6";
		model="Azkaban_dm\proxy\dmp_hatchet6";
	};
	class Proxydmp_hatchet7: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hatchet7";
		model="Azkaban_dm\proxy\dmp_hatchet7";
	};
	class Proxydmp_hatchet8: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hatchet8";
		model="Azkaban_dm\proxy\dmp_hatchet8";
	};
	class Proxydmp_hatchet9: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_hatchet9";
		model="Azkaban_dm\proxy\dmp_hatchet9";
	};
	class Proxydmp_metalwire1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_metalwire1";
		model="Azkaban_dm\proxy\dmp_metalwire1";
	};
	class Proxydmp_metalwire2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_metalwire2";
		model="Azkaban_dm\proxy\dmp_metalwire2";
	};
	class Proxydmp_metalwire3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_metalwire3";
		model="Azkaban_dm\proxy\dmp_metalwire3";
	};
	class Proxydmp_metalwire4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_metalwire4";
		model="Azkaban_dm\proxy\dmp_metalwire4";
	};
	class Proxydmp_metalwire5: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_metalwire5";
		model="Azkaban_dm\proxy\dmp_metalwire5";
	};
	class Proxydmp_nails_box1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_nails_box1";
		model="Azkaban_dm\proxy\dmp_nails_box1";
	};
	class Proxydmp_nails_box10: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_nails_box10";
		model="Azkaban_dm\proxy\dmp_nails_box10";
	};
	class Proxydmp_nails_box11: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_nails_box11";
		model="Azkaban_dm\proxy\dmp_nails_box11";
	};
	class Proxydmp_nails_box12: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_nails_box12";
		model="Azkaban_dm\proxy\dmp_nails_box12";
	};
	class Proxydmp_nails_box13: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_nails_box13";
		model="Azkaban_dm\proxy\dmp_nails_box13";
	};
	class Proxydmp_nails_box14: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_nails_box14";
		model="Azkaban_dm\proxy\dmp_nails_box14";
	};
	class Proxydmp_nails_box15: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_nails_box15";
		model="Azkaban_dm\proxy\dmp_nails_box15";
	};
	class Proxydmp_nails_box16: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_nails_box16";
		model="Azkaban_dm\proxy\dmp_nails_box16";
	};
	class Proxydmp_nails_box17: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_nails_box17";
		model="Azkaban_dm\proxy\dmp_nails_box17";
	};
	class Proxydmp_nails_box2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_nails_box2";
		model="Azkaban_dm\proxy\dmp_nails_box2";
	};
	class Proxydmp_nails_box3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_nails_box3";
		model="Azkaban_dm\proxy\dmp_nails_box3";
	};
	class Proxydmp_nails_box4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_nails_box4";
		model="Azkaban_dm\proxy\dmp_nails_box4";
	};
	class Proxydmp_nails_box5: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_nails_box5";
		model="Azkaban_dm\proxy\dmp_nails_box5";
	};
	class Proxydmp_nails_box6: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_nails_box6";
		model="Azkaban_dm\proxy\dmp_nails_box6";
	};
	class Proxydmp_nails_box7: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_nails_box7";
		model="Azkaban_dm\proxy\dmp_nails_box7";
	};
	class Proxydmp_nails_box8: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_nails_box8";
		model="Azkaban_dm\proxy\dmp_nails_box8";
	};
	class Proxydmp_nails_box9: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_nails_box9";
		model="Azkaban_dm\proxy\dmp_nails_box9";
	};
	class Proxydmp_pliers1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_pliers1";
		model="Azkaban_dm\proxy\dmp_pliers1";
	};
	class Proxydmp_pliers2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_pliers2";
		model="Azkaban_dm\proxy\dmp_pliers2";
	};
	class Proxydmp_pliers3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_pliers3";
		model="Azkaban_dm\proxy\dmp_pliers3";
	};
	class Proxydmp_pliers4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_pliers4";
		model="Azkaban_dm\proxy\dmp_pliers4";
	};
	class Proxydmp_protector_case1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_protector_case1";
		model="Azkaban_dm\proxy\dmp_protector_case1";
	};
	class Proxydmp_protector_case2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_protector_case2";
		model="Azkaban_dm\proxy\dmp_protector_case2";
	};
	class Proxydmp_rope1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_rope1";
		model="Azkaban_dm\proxy\dmp_rope1";
	};
	class Proxydmp_rope2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_rope2";
		model="Azkaban_dm\proxy\dmp_rope2";
	};
	class Proxydmp_rope3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_rope3";
		model="Azkaban_dm\proxy\dmp_rope3";
	};
	class Proxydmp_rope4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_rope4";
		model="Azkaban_dm\proxy\dmp_rope4";
	};
	class Proxydmp_screwdriver1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_screwdriver1";
		model="Azkaban_dm\proxy\dmp_screwdriver1";
	};
	class Proxydmp_screwdriver2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_screwdriver2";
		model="Azkaban_dm\proxy\dmp_screwdriver2";
	};
	class Proxydmp_screwdriver3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_screwdriver3";
		model="Azkaban_dm\proxy\dmp_screwdriver3";
	};
	class Proxydmp_screwdriver4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_screwdriver4";
		model="Azkaban_dm\proxy\dmp_screwdriver4";
	};
	class Proxydmp_shovel1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_shovel1";
		model="Azkaban_dm\proxy\dmp_shovel1";
	};
	class Proxydmp_shovel2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_shovel2";
		model="Azkaban_dm\proxy\dmp_shovel2";
	};
	class Proxydmp_shovel3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_shovel3";
		model="Azkaban_dm\proxy\dmp_shovel3";
	};
	class Proxydmp_weapons1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weapons1";
		model="Azkaban_dm\proxy\dmp_weapons1";
	};
	class Proxydmp_weapons10: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weapons10";
		model="Azkaban_dm\proxy\dmp_weapons10";
	};
	class Proxydmp_weapons11: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weapons11";
		model="Azkaban_dm\proxy\dmp_weapons11";
	};
	class Proxydmp_weapons12: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weapons12";
		model="Azkaban_dm\proxy\dmp_weapons12";
	};
	class Proxydmp_weapons13: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weapons13";
		model="Azkaban_dm\proxy\dmp_weapons13";
	};
	class Proxydmp_weapons14: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weapons14";
		model="Azkaban_dm\proxy\dmp_weapons14";
	};
	class Proxydmp_weapons15: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weapons15";
		model="Azkaban_dm\proxy\dmp_weapons15";
	};
	class Proxydmp_weapons16: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weapons16";
		model="Azkaban_dm\proxy\dmp_weapons16";
	};
	
	class Proxydmp_weapons2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weapons2";
		model="Azkaban_dm\proxy\dmp_weapons2";
	};
	class Proxydmp_weapons3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weapons3";
		model="Azkaban_dm\proxy\dmp_weapons3";
	};
	class Proxydmp_weapons4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weapons4";
		model="Azkaban_dm\proxy\dmp_weapons4";
	};
	class Proxydmp_weapons5: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weapons5";
		model="Azkaban_dm\proxy\dmp_weapons5";
	};
	class Proxydmp_weapons6: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weapons6";
		model="Azkaban_dm\proxy\dmp_weapons6";
	};
	class Proxydmp_weapons7: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weapons7";
		model="Azkaban_dm\proxy\dmp_weapons7";
	};
	class Proxydmp_weapons8: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weapons8";
		model="Azkaban_dm\proxy\dmp_weapons8";
	};
	class Proxydmp_weapons9: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weapons9";
		model="Azkaban_dm\proxy\dmp_weapons9";
	};
	class Proxydmp_woodaxe1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_woodaxe1";
		model="Azkaban_dm\proxy\dmp_woodaxe1";
	};
	class Proxydmp_woodaxe2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_woodaxe2";
		model="Azkaban_dm\proxy\dmp_woodaxe2";
	};
	class Proxydmp_woodaxe3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_woodaxe3";
		model="Azkaban_dm\proxy\dmp_woodaxe3";
	};
	//Kits
	class Proxydmp_weaponcleaningkit1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weaponcleaningkit1";
		model="Azkaban_dm\proxy\dmp_weaponcleaningkit1";
	};
	class Proxydmp_weaponcleaningkit2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weaponcleaningkit2";
		model="Azkaban_dm\proxy\dmp_weaponcleaningkit2";
	};
	class Proxydmp_weaponcleaningkit3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weaponcleaningkit3";
		model="Azkaban_dm\proxy\dmp_weaponcleaningkit3";
	};
	class Proxydmp_weaponcleaningkit4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weaponcleaningkit4";
		model="Azkaban_dm\proxy\dmp_weaponcleaningkit4";
	};
	class Proxydmp_weaponcleaningkit5: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_weaponcleaningkit5";
		model="Azkaban_dm\proxy\dmp_weaponcleaningkit5";
	};
	class Proxydmp_sewing_kit1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_sewing_kit1";
		model="Azkaban_dm\proxy\dmp_sewing_kit1";
	};
	class Proxydmp_sewing_kit2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_sewing_kit2";
		model="Azkaban_dm\proxy\dmp_sewing_kit2";
	};
	class Proxydmp_sewing_kit3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_sewing_kit3";
		model="Azkaban_dm\proxy\dmp_sewing_kit3";
	};
	class Proxydmp_sewing_kit4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_sewing_kit4";
		model="Azkaban_dm\proxy\dmp_sewing_kit4";
	};
	class Proxydmp_sewing_kit5: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_sewing_kit5";
		model="Azkaban_dm\proxy\dmp_sewing_kit5";
	};
	class Proxydmp_leather_sewing_kit1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_leather_sewing_kit1";
		model="Azkaban_dm\proxy\dmp_leather_sewing_kit1";
	};
	class Proxydmp_leather_sewing_kit2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_leather_sewing_kit2";
		model="Azkaban_dm\proxy\dmp_leather_sewing_kit2";
	};
	class Proxydmp_leather_sewing_kit3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_leather_sewing_kit3";
		model="Azkaban_dm\proxy\dmp_leather_sewing_kit3";
	};
	class Proxydmp_leather_sewing_kit4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_leather_sewing_kit4";
		model="Azkaban_dm\proxy\dmp_leather_sewing_kit4";
	};
	class Proxydmp_leather_sewing_kit5: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_leather_sewing_kit5";
		model="Azkaban_dm\proxy\dmp_leather_sewing_kit5";
	};
	class Proxydmp_electronicCase1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_electronicCase1";
		model="Azkaban_dm\proxy\dmp_electronicCase1";
	};
	class Proxydmp_electronicCase2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_electronicCase2";
		model="Azkaban_dm\proxy\dmp_electronicCase2";
	};
	class Proxydmp_electronicCase3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_electronicCase3";
		model="Azkaban_dm\proxy\dmp_electronicCase3";
	};
	class Proxydmp_electronicCase4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_electronicCase4";
		model="Azkaban_dm\proxy\dmp_electronicCase4";
	};
	class Proxydmp_electronicCase5: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_electronicCase5";
		model="Azkaban_dm\proxy\dmp_electronicCase5";
	};
	class Proxydmp_epoxy_putty1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_epoxy_putty1";
		model="Azkaban_dm\proxy\dmp_epoxy_putty1";
	};
	class Proxydmp_epoxy_putty2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_epoxy_putty2";
		model="Azkaban_dm\proxy\dmp_epoxy_putty2";
	};
	class Proxydmp_epoxy_putty3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_epoxy_putty3";
		model="Azkaban_dm\proxy\dmp_epoxy_putty3";
	};
	class Proxydmp_epoxy_putty4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_epoxy_putty4";
		model="Azkaban_dm\proxy\dmp_epoxy_putty4";
	};
	class Proxydmp_epoxy_putty5: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_epoxy_putty5";
		model="Azkaban_dm\proxy\dmp_epoxy_putty5";
	};
	class Proxydmp_whetstone1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_whetstone1";
		model="Azkaban_dm\proxy\dmp_whetstone1";
	};
	class Proxydmp_whetstone2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_whetstone2";
		model="Azkaban_dm\proxy\dmp_whetstone2";
	};
	class Proxydmp_whetstone3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_whetstone3";
		model="Azkaban_dm\proxy\dmp_whetstone3";
	};
	class Proxydmp_whetstone4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_whetstone4";
		model="Azkaban_dm\proxy\dmp_whetstone4";
	};
	class Proxydmp_whetstone5: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_whetstone5";
		model="Azkaban_dm\proxy\dmp_whetstone5";
	};
	class Proxydmp_tire_repair_kit1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_tire_repair_kit1";
		model="Azkaban_dm\proxy\dmp_tire_repair_kit1";
	};
	class Proxydmp_tire_repair_kit2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_tire_repair_kit2";
		model="Azkaban_dm\proxy\dmp_tire_repair_kit2";
	};
	class Proxydmp_tire_repair_kit3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_tire_repair_kit3";
		model="Azkaban_dm\proxy\dmp_tire_repair_kit3";
	};
	class Proxydmp_tire_repair_kit4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_tire_repair_kit4";
		model="Azkaban_dm\proxy\dmp_tire_repair_kit4";
	};
	class Proxydmp_tire_repair_kit5: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_tire_repair_kit5";
		model="Azkaban_dm\proxy\dmp_tire_repair_kit5";
	};
	//end Kits
	class Proxydmp_woodencrate1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_woodencrate1";
		model="Azkaban_dm\proxy\dmp_woodencrate1";
	};
	class Proxydmp_woodencrate10: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_woodencrate10";
		model="Azkaban_dm\proxy\dmp_woodencrate10";
	};
	class Proxydmp_woodencrate2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_woodencrate2";
		model="Azkaban_dm\proxy\dmp_woodencrate2";
	};
	class Proxydmp_woodencrate3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_woodencrate3";
		model="Azkaban_dm\proxy\dmp_woodencrate3";
	};
	class Proxydmp_woodencrate4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_woodencrate4";
		model="Azkaban_dm\proxy\dmp_woodencrate4";
	};
	class Proxydmp_woodencrate5: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_woodencrate5";
		model="Azkaban_dm\proxy\dmp_woodencrate5";
	};
	class Proxydmp_woodencrate6: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_woodencrate6";
		model="Azkaban_dm\proxy\dmp_woodencrate6";
	};
	class Proxydmp_woodencrate7: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_woodencrate7";
		model="Azkaban_dm\proxy\dmp_woodencrate7";
	};
	class Proxydmp_woodencrate8: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_woodencrate8";
		model="Azkaban_dm\proxy\dmp_woodencrate8";
	};
	class Proxydmp_woodencrate9: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_woodencrate9";
		model="Azkaban_dm\proxy\dmp_woodencrate9";
	};
	class Proxydmp_planks: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_planks";
		model="Azkaban_dm\proxy\dmp_planks.p3d";
	};
	class Proxydmp_vest_m1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_vest_m1";
		model="\Azkaban_dm\proxy\dmp_vest_m1.p3d";
	};
	class Proxydmp_vest_m2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_vest_m2";
		model="\Azkaban_dm\proxy\dmp_vest_m2.p3d";
	};
	class Proxydmp_vest_m3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_vest_m3";
		model="\Azkaban_dm\proxy\dmp_vest_m3.p3d";
	};
	class Proxydmp_vest_m4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_vest_m4";
		model="\Azkaban_dm\proxy\dmp_vest_m4.p3d";
	};
	class Proxydmp_vest_m5: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_vest_m5";
		model="\Azkaban_dm\proxy\dmp_vest_m5.p3d";
	};
	class Proxydmp_headgear_m1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_headgear_m1";
		model="\Azkaban_dm\proxy\dmp_headgear_m1.p3d";
	};
	class Proxydmp_headgear_m2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_headgear_m2";
		model="\Azkaban_dm\proxy\dmp_headgear_m2.p3d";
	};
	class Proxydmp_headgear_m3: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_headgear_m3";
		model="\Azkaban_dm\proxy\dmp_headgear_m3.p3d";
	};
	class Proxydmp_headgear_m4: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_headgear_m4";
		model="\Azkaban_dm\proxy\dmp_headgear_m4.p3d";
	};
	class Proxydmp_headgear_m5: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_headgear_m5";		
		model="\Azkaban_dm\proxy\dmp_headgear_m5.p3d";
	};
	class Proxydmp_feet1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_feet1";
		model="\Azkaban_dm\proxy\dmp_feet1.p3d";
	};
	class Proxydmp_feet2: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_feet2";
		model="\Azkaban_dm\proxy\dmp_feet2.p3d";
	};
	class Proxydmp_back_m1: ProxyAttachment
	{
		scope=2;
		inventorySlot="dmp_back_m1";
		model="\Azkaban_dm\proxy\dmp_back_m1.p3d";
	};
	class ProxydmpHeadgear: ProxyAttachment
	{
		scope=2;
		inventorySlot="Headgear";
		model="\Azkaban_dm\proxy\dmpHeadgear.p3d";
	};
	class ProxydmpMask: ProxyAttachment
	{
		scope=2;
		inventorySlot="Mask";
		model="\Azkaban_dm\proxy\dmpMask.p3d";
	};
	class ProxydmpEyewear: ProxyAttachment
	{
		scope=2;
		inventorySlot="Eyewear";
		model="\Azkaban_dm\proxy\dmpEyewear.p3d";
	};
	class ProxydmpGloves: ProxyAttachment
	{
		scope=2;
		inventorySlot="Gloves";
		model="\Azkaban_dm\proxy\dmpGloves.p3d";
	};
	class ProxydmpArmband: ProxyAttachment
	{
		scope=2;
		inventorySlot="Armband";
		model="\Azkaban_dm\proxy\dmpArmband.p3d";
	};
	class ProxydmpVest: ProxyAttachment
	{
		scope=2;
		inventorySlot="Vest";
		model="\Azkaban_dm\proxy\dmpVest.p3d";
	};
	class ProxydmpBody: ProxyAttachment
	{
		scope=2;
		inventorySlot="Body";
		model="\Azkaban_dm\proxy\dmpBody.p3d";
	};
	class ProxydmpBack: ProxyAttachment
	{
		scope=2;
		inventorySlot="Back";
		model="\Azkaban_dm\proxy\dmpBack.p3d";
	};
	class ProxydmpHips: ProxyAttachment
	{
		scope=2;
		inventorySlot="Hips";
		model="\Azkaban_dm\proxy\dmpHips.p3d";
	};
	class ProxydmpLegs: ProxyAttachment
	{
		scope=2;
		inventorySlot="Legs";
		model="\Azkaban_dm\proxy\dmpLegs.p3d";
	};
	class ProxydmpFeet: ProxyAttachment
	{
		scope=2;
		inventorySlot="Feet";
		model="\Azkaban_dm\proxy\dmpFeet.p3d";
	};
};

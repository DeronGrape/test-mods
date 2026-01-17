class CfgPatches
{
	class Azkaban_dm_slots
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Gear_Tools","DZ_Gear_Containers","DZ_Weapons_Melee"};
	};
};
class cfgWeapons
{
	class RifleCore;
	class Rifle_Base: RifleCore
	{
		inventorySlot[] +=
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
			"dmp_weapons16"
		};
	};
};
/*class CfgVehicleClasses
{
	class ExplosivesBase;
	class Grenade_Base: ExplosivesBase
	{
		inventorySlot[]+=
		{
			"GranadeCaseA",
			"GranadeCaseB",
			"GranadeCaseC",
			"GranadeCaseD",
			"GranadeCaseE",
			"GranadeCaseF",
			"GranadeCaseG",
			"GranadeCaseH",
			"GranadeCaseI",
			"GranadeCaseJ",
			"GranadeCaseK",
			"GranadeCaseL",
			"GranadeCaseM",
			"GranadeCaseN",
			"GranadeCaseO",
			"GranadeCaseP",
			"GranadeCaseQ",
			"GranadeCaseR",
			"GranadeCaseS",
			"GranadeCaseT"
			
		};
	};
};*/
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class WoodenCrate: Container_Base
	{
		inventorySlot[] += 
		{
			"dmp_woodencrate1","dmp_woodencrate2",
			"dmp_woodencrate3","dmp_woodencrate4",
			"dmp_woodencrate5","dmp_woodencrate6",
			"dmp_woodencrate7","dmp_woodencrate8",
			"dmp_woodencrate9","dmp_woodencrate10"
		};
	};
	class WoodenPlank: Inventory_Base
	{
		inventorySlot[] += {"dmp_planks","dmp_planks_test"};
	};
	class AmmoBox: Container_Base
	{
		inventorySlot[]= 
		{
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
	};
	class Box_Base;
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	//################
	//##--HEADGEAR--##
	//################
	//Vanilla
	class BallisticHelmet_ColorBase: Clothing 
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class HeadCover_Improvised: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class BaseballCap_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class ZSh3PilotHelmet: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class ConstructionHelmet_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class BurlapSackCover: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class BeanieHat_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class Ushanka_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class PumpkinHelmet: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class MotoHelmet_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class DarkMotoHelmet_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class Bandana_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class Shemag_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class RadarCap_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class MilitaryBeret_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class FlatCap_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class ZmijovkaCap_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class CowboyHat_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class BoonieHat_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class OfficerHat: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class PoliceCap: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class PilotkaCap: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class TankerHelmet: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class GorkaHelmet: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class FirefightersHelmet_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class SkateHelmet_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class WeldingMask: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class PrisonerCap: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class GhillieHood_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class LeatherHat_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class MedicalScrubsHat_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class GreatHelm: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class Ssh68Helmet: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class DirtBikeHelmet_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class NBCHoodBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class HockeyHelmet_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class SantasHat: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class WitchHood_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class WitchHoodCoif_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class WitchHat: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class Mich2001Helmet: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class NorseHelm: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class Chainmail_Coif: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class MorozkoHat: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class WinterCoif_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class OKZKCap_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class PetushokHat_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class ChristmasHeadband_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class Headdress_Colorbase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class SnowstormUshanka_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class BudenovkaHat_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class SherpaHat_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};	
	//MMG
	class tactical_helmet_base: Mich2001Helmet
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class striker_helmet_base: Mich2001Helmet
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class mmg_armored_helmet_base: Mich2001Helmet
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	class mmg_boonie_base: BoonieHat_ColorBase
	{
		inventorySlot[]+={"dmp_headgear_m1","dmp_headgear_m2","dmp_headgear_m3","dmp_headgear_m4","dmp_headgear_m5"};
	};
	//################
	//####--VEST--####
	//################
	//Vanilla
	class PlateCarrierVest: Clothing
	{
		inventorySlot[]+={"dmp_vest_m1","dmp_vest_m2","dmp_vest_m3","dmp_vest_m4","dmp_vest_m5"};
	};
	class SmershVest: Clothing
	{
		inventorySlot[]+={"dmp_vest_m1","dmp_vest_m2","dmp_vest_m3","dmp_vest_m4","dmp_vest_m5"};
	};
	class PressVest_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_vest_m1","dmp_vest_m2","dmp_vest_m3","dmp_vest_m4","dmp_vest_m5"};
	};
	class UKAssVest_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_vest_m1","dmp_vest_m2","dmp_vest_m3","dmp_vest_m4","dmp_vest_m5"};
	};
	class PoliceVest: Clothing
	{
		inventorySlot[]+={"dmp_vest_m1","dmp_vest_m2","dmp_vest_m3","dmp_vest_m4","dmp_vest_m5"};
	};
	class ChestHolster: Clothing	
	{
		inventorySlot[]+={"dmp_vest_m1","dmp_vest_m2","dmp_vest_m3","dmp_vest_m4","dmp_vest_m5"};
	};
	class HighCapacityVest_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_vest_m1","dmp_vest_m2","dmp_vest_m3","dmp_vest_m4","dmp_vest_m5"};
	};
	class LeatherStorageVest_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_vest_m1","dmp_vest_m2","dmp_vest_m3","dmp_vest_m4","dmp_vest_m5"};
	};
	class HuntingVest: Clothing
	{
		inventorySlot[]+={"dmp_vest_m1","dmp_vest_m2","dmp_vest_m3","dmp_vest_m4","dmp_vest_m5"};
	};
	class ReflexVest: Clothing
	{
		inventorySlot[]+={"dmp_vest_m1","dmp_vest_m2","dmp_vest_m3","dmp_vest_m4","dmp_vest_m5"};
	};
	class Chestplate: Clothing
	{
		inventorySlot[]+={"dmp_vest_m1","dmp_vest_m2","dmp_vest_m3","dmp_vest_m4","dmp_vest_m5"};
	};
	//MMG
	class JPC_Vest_Base: Clothing
	{
		inventorySlot[]+={"dmp_vest_m1","dmp_vest_m2","dmp_vest_m3","dmp_vest_m4","dmp_vest_m5"};
	};
	class tt_vest_Base: Clothing
	{
		inventorySlot[]+={"dmp_vest_m1","dmp_vest_m2","dmp_vest_m3","dmp_vest_m4","dmp_vest_m5"};
	};
	class mmg_chestrig_Base: Clothing
	{
		inventorySlot[]+={"dmp_vest_m1","dmp_vest_m2","dmp_vest_m3","dmp_vest_m4","dmp_vest_m5"};
	};
	class heavyvest_base: Clothing
	{
		inventorySlot[]+={"dmp_vest_m1","dmp_vest_m2","dmp_vest_m3","dmp_vest_m4","dmp_vest_m5"};
	};
	class mk5_vest_base: Clothing
	{
		inventorySlot[]+={"dmp_vest_m1","dmp_vest_m2","dmp_vest_m3","dmp_vest_m4","dmp_vest_m5"};
	};
	//################
	//####--BACK--####
	//################
	//Vanilla
	class TaloonBag_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class TortillaBag: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class CourierBag: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class FurCourierBag: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class ImprovisedBag: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class FurImprovisedBag: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class DryBag_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class HuntingBag: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class MountainBag_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class SmershBag: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class ChildBag_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class GhillieBushrag_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class GhillieTop_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class GhillieSuit_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class LeatherSack_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class AssaultBag_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class CoyoteBag_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class AliceBag_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class LargeTentBackPack: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class SlingBag_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class ArmyPouch_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class DuffelBagSmall_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class CanvasBag_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class DrysackBag_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	//MMG
	class carrier_backpack_base: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class supplybag_base: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class assault_pack_base: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class camelback_base: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	class mmps_bag_base: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
	//ReDos
#ifdef ReDos_6sh118_Bag
	class MR_6sh118_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
#endif
#ifdef ReDoS_F2bergan
	class MR_F2bergan_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
#endif
#ifdef Redos_RifleBags
	class MR_RifleBag_Base: Clothing_Base
	{
		inventorySlot[]+={"dmp_back_m1"};
	};
#endif
	//################
	//####--FEET--####
	//################
	//Vanilla
	class AthleticShoes_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_feet1","dmp_feet2"};
	};
	class HikingBoots_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_feet1","dmp_feet2"};
	};
	class HikingBootsLow_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_feet1","dmp_feet2"};
	};
	class Wellies_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_feet1","dmp_feet2"};
	};
	class WorkingBoots_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_feet1","dmp_feet2"};
	};
	class JungleBoots_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_feet1","dmp_feet2"};
	};
	class DressShoes_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_feet1","dmp_feet2"};
	};
	class MilitaryBoots_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_feet1","dmp_feet2"};
	};
	class CombatBoots_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_feet1","dmp_feet2"};
	};
	class JoggingShoes_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_feet1","dmp_feet2"};
	};
	class LeatherShoes_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_feet1","dmp_feet2"};
	};
	class Sneakers_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_feet1","dmp_feet2"};
	};
	class NBCBootsBase: Clothing
	{
		inventorySlot[]+={"dmp_feet1","dmp_feet2"};
	};
	class Ballerinas_ColorBase: Clothing
	{
		inventorySlot[]+={"dmp_feet1","dmp_feet2"};
	};
	class FeetCover_Improvised: Clothing
	{
		inventorySlot[]+={"dmp_feet1","dmp_feet2"};
	};
	class TTSKOBoots: Clothing
	{
		inventorySlot[]+={"dmp_feet1","dmp_feet2"};
	};
	class MedievalBoots: Clothing
	{
		inventorySlot[]+={"dmp_feet1","dmp_feet2"};
	};
	//MMG
	// TOOLS 
	class DuctTape: Inventory_Base
	{
		inventorySlot[]={"dmp_ducttape1","dmp_ducttape2","dmp_ducttape3","dmp_ducttape4","dmp_ducttape5","dmp_ducttape6","dmp_ducttape7"};
	};
	class Hacksaw: Inventory_Base
	{
		inventorySlot[]={"dmp_hacksaw1","dmp_hacksaw2","dmp_hacksaw3","dmp_hacksaw4","dmp_hacksaw5","dmp_hacksaw6"};
	};
	class HandSaw: Inventory_Base
	{
		inventorySlot[]={"dmp_hacksaw1","dmp_hacksaw2","dmp_hacksaw3","dmp_hacksaw4","dmp_hacksaw5","dmp_hacksaw6"};
	};
	class Hammer: Inventory_Base
	{
		inventorySlot[]={"dmp_hammer1","dmp_hammer2","dmp_hammer3","dmp_hammer4","dmp_hammer5","dmp_hammer6","dmp_hammer7"};
	};
	class Hatchet: Inventory_Base
	{
		inventorySlot[]+={"dmp_hatchet1","dmp_hatchet2","dmp_hatchet3","dmp_hatchet4","dmp_hatchet5","dmp_hatchet6","dmp_hatchet7","dmp_hatchet8","dmp_hatchet9"};
	};
	class MetalWire: Inventory_Base
	{
		inventorySlot[]+={"dmp_metalwire1","dmp_metalwire2","dmp_metalwire3","dmp_metalwire4","dmp_metalwire5"};
	};
	class NailBox: Box_Base
	{
		inventorySlot[]={"dmp_nails_box1","dmp_nails_box2","dmp_nails_box3","dmp_nails_box4","dmp_nails_box5","dmp_nails_box6","dmp_nails_box7","dmp_nails_box8","dmp_nails_box9","dmp_nails_box10","dmp_nails_box11","dmp_nails_box12","dmp_nails_box13","dmp_nails_box14","dmp_nails_box15","dmp_nails_box16","dmp_nails_box17"};
	};
	class Pliers: Inventory_Base
	{
		inventorySlot[]={"dmp_pliers1","dmp_pliers2","dmp_pliers3","dmp_pliers4"};
	};
	class SmallProtectorCase: Container_Base
	{
		inventorySlot[]={"dmp_protector_case1","dmp_protector_case2"};
	};
	class Rope: Inventory_Base
	{
		inventorySlot[]+={"dmp_rope1","dmp_rope2","dmp_rope3","dmp_rope4"};
	};
	class Screwdriver: Inventory_Base
	{
		inventorySlot[]={"dmp_screwdriver1","dmp_screwdriver2","dmp_screwdriver3","dmp_screwdriver4"};
	};
	class Shovel: Inventory_Base
	{
		inventorySlot[]+={"dmp_shovel1","dmp_shovel2","dmp_shovel3"};
	};
	class FieldShovel: Inventory_Base
	{
		inventorySlot[]+={"dmp_shovel1","dmp_shovel2","dmp_shovel3"};
	};
	class WoodAxe: Inventory_Base
	{
		inventorySlot[]+={"dmp_woodaxe1","dmp_woodaxe2","dmp_woodaxe3"};
	};
	class FirefighterAxe: Inventory_Base
	{
		inventorySlot[]+={"dmp_woodaxe1","dmp_woodaxe2","dmp_woodaxe3"};
	};
	class WeaponCleaningKit: Inventory_Base
	{
		inventorySlot[]={"dmp_weaponcleaningkit1","dmp_weaponcleaningkit2","dmp_weaponcleaningkit3","dmp_weaponcleaningkit4","dmp_weaponcleaningkit5"};
	};
	class SewingKit: Inventory_Base
	{
		inventorySlot[]={"dmp_sewing_kit1","dmp_sewing_kit2","dmp_sewing_kit3","dmp_sewing_kit4","dmp_sewing_kit5"};
	};
	class LeatherSewingKit: Inventory_Base
	{
		inventorySlot[]={"dmp_leather_sewing_kit1","dmp_leather_sewing_kit2","dmp_leather_sewing_kit3","dmp_leather_sewing_kit4","dmp_leather_sewing_kit5"};
	};
	class ElectronicRepairKit: Inventory_Base
	{
		inventorySlot[]={"dmp_electronicCase1","dmp_electronicCase2","dmp_electronicCase3","dmp_electronicCase4","dmp_electronicCase5"};
	};
	class EpoxyPutty: Inventory_Base
	{
		inventorySlot[]={"dmp_epoxy_putty1","dmp_epoxy_putty2","dmp_epoxy_putty3","dmp_epoxy_putty4","dmp_epoxy_putty5"};
	};
	class Whetstone: Inventory_Base
	{
		inventorySlot[]={"dmp_whetstone1","dmp_whetstone2","dmp_whetstone3","dmp_whetstone4","dmp_whetstone5"};
	};
	class Blowtorch: Inventory_Base
	{
		inventorySlot[]={"dmp_blowtorch1","dmp_blowtorch2","dmp_blowtorch3","dmp_blowtorch4","dmp_blowtorch5"};
	};
	class TireRepairKit: Inventory_Base
	{
		inventorySlot[]={"dmp_tire_repair_kit1","dmp_tire_repair_kit2","dmp_tire_repair_kit3","dmp_tire_repair_kit4","dmp_tire_repair_kit5"};
	};
};
//_ inventorySlot[]={"","","","",""};
//_ inventorySlot[]={"","","","","","","","","","","","","","",""};
//_ inventorySlot[]+={"","","","","","","","","","","","","","",""};
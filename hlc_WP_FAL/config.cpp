#include "\hlc_core\script_macros.hpp"

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"

class CfgPatches {
    class hlcweapons_falpocalypse {
        requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","asdg_jointrails","hlcweapons_core"};
        units[] = {"HLC_FAL_ammobox","Weapon_hlc_rifle_SLRchopmod","Weapon_hlc_rifle_LAR","Weapon_hlc_rifle_c1A1","Weapon_hlc_rifle_FAL5061","Weapon_hlc_rifle_STG58F","Weapon_hlc_rifle_SLR","Weapon_hlc_rifle_L1A1slr","Weapon_hlc_rifle_osw_GL","Weapon_hlc_rifle_falosw","weapon_hlc_rifle_FAL5061Rail"};
        weapons[] = {"hlc_rifle_SLRchopmod","hlc_rifle_LAR","hlc_rifle_c1A1","hlc_rifle_FAL5061","hlc_rifle_STG58F","hlc_rifle_SLR","hlc_rifle_L1A1slr","hlc_rifle_osw_GL","hlc_rifle_falosw","hlc_muzzle_snds_fal","hlc_optic_suit","hlc_optic_PVS4FAL"};
        magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_t_fal","hlc_50rnd_762x51_M_FAL","hlc_20Rnd_762x51_S_fal"};
        version="v1.95";
        author="toadie";
    };
};

class cfgMods {
    class Mod_Base;
    class Niarms_FAL : Mod_Base {
        name = "NIArsenal: FAL Rifles";
        picture = "hlc_wp_fal\tex\ui\NIArms1_ca.paa";
        dir = "@NIArsenal";
        hideName = 1;
        hidePicture = 0;
        action = "http://credmo.updatedtuesdays.com/tier1";
        author = "Toadie";
        logo = "hlc_wp_fal\tex\ui\NIArms1_ca.paa";
        logoOver = "hlc_wp_fal\tex\ui\NIArms1_ca.paa";
        logoSmall = "hlc_wp_fal\tex\ui\NIArms1_ca.paa";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_UnderSlot;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762: asdg_MuzzleSlot {
    class compatibleItems{
        hlc_muzzle_snds_fal = 1;
    };
};

class CfgVehicles {
    class NATO_Box_Base;
    class Weapon_Base_F;

    class HLC_FAL_ammobox : NATO_Box_Base {
        scope = 2;
        vehicleClass = "Ammo";
        displayName = "HLC FAL Supply Box";
        model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
        dlc = "Niarms_FAL";
        icon = "iconCrateWpns";
        transportMaxWeapons = 25;
        transportMaxMagazines = 250;
        class TransportMagazines {
            __M_MAG(hlc_20Rnd_762x51_B_fal,30);
            __M_MAG(hlc_20Rnd_762x51_mk316_fal,30);
            __M_MAG(hlc_20Rnd_762x51_barrier_fal,30);
            __M_MAG(hlc_20Rnd_762x51_t_fal,30);
            __M_MAG(hlc_50rnd_762x51_M_FAL,30);
            __M_MAG(hlc_20Rnd_762x51_S_fal,30);
        };
        class TransportWeapons {
            __M_WEP(hlc_rifle_falosw,20);
            __M_WEP(hlc_rifle_osw_GL,20);
            __M_WEP(hlc_rifle_L1A1slr,20);
            __M_WEP(hlc_rifle_SLR,20);
            __M_WEP(hlc_rifle_STG58F,20);
            __M_WEP(hlc_rifle_FAL5061,20);
            __M_WEP(hlc_rifle_c1A1,20);
            __M_WEP(hlc_rifle_LAR,20);
            __M_WEP(hlc_rifle_SLRchopmod,20);
        };
        class TransportItems {
            __M_ITM(hlc_optic_suit,10);
            __M_ITM(hlc_optic_PVS4FAL,10);
            __M_ITM(optic_Holosight,10);
            __M_ITM(optic_hamr,10);
            __M_ITM(optic_rco,10);
            __M_ITM(optic_ACO_grn,10);
        };
    };
    __WEAPONHOLDER(hlc_rifle_falosw, hlc_20Rnd_762x51_B_fal, DSArms FAL OSW, Niarms_FAL, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_osw_GL, hlc_20Rnd_762x51_B_fal, DSArms FAL OSW(GL), Niarms_FAL, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_SLR, hlc_20Rnd_762x51_B_fal, Lithgow SLR, Niarms_FAL, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_STG58F, hlc_20Rnd_762x51_B_fal, Steyr STG.58, Niarms_FAL, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_FAL5061Rail, hlc_20Rnd_762x51_B_fal, FN FAL 50.61'Para' (RIS), Niarms_FAL, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_FAL5061, hlc_20Rnd_762x51_B_fal, FN FAL 50.61'Para', Niarms_FAL, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_FAL5000, hlc_20Rnd_762x51_B_fal, FN FAL 50.00, Niarms_FAL, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_FAL5000Rail, hlc_20Rnd_762x51_B_fal, FN FAL 50.00 (RIS), Niarms_FAL, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_FAL5000_RH, hlc_20Rnd_762x51_B_fal, FN FAL 50.00(Rhod.Spraycam), Niarms_FAL, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_L1A1SLR, hlc_20Rnd_762x51_B_fal, Enfield L1A1 SLR, Niarms_FAL, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_c1A1, hlc_20Rnd_762x51_B_fal, CAL C1A1, Niarms_FAL, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_LAR, hlc_20Rnd_762x51_B_fal, FN LAR, Niarms_FAL, Toadie, AssaultRifles);
    __WEAPONHOLDER(hlc_rifle_SLRchopmod, hlc_20Rnd_762x51_B_fal, Lithgow SLR Chopmod, Niarms_FAL, Toadie, AssaultRifles);

};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;

    class hlc_20Rnd_762x51_B_fal : 30Rnd_556x45_Stanag {
        dlc = "Niarms_FAL";
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_ball";
        count = 20;
        descriptionshort = "Caliber: 7.62x51mm NATO M80A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 20";
        displayname = "FAL Mag (Ball) 20rnd 7.62mm";
        initspeed = 908.4;
        mass = 13;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        model = "\hlc_wp_FAL\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "M80A1 EPR";
    };
    class hlc_20Rnd_762x51_mk316_fal : hlc_20Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_MK316_20in";
        count = 20;
        descriptionshort = "Caliber: 7.62x51mm NATO MK316 Mod 0 SBLR<br />Type: Type: Open Tip Match (Special Ball Long Range)<br />Rounds: 20";
        displayname = "FAL Mag (SBLR) 20rnd 7.62mm";
        initspeed = 731;
        mass = 13;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        model = "\hlc_wp_FAL\mesh\magazine\magazine.p3d";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "MK316 SBLR";
    };
    class hlc_20Rnd_762x51_barrier_fal : hlc_20Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_Barrier";
        count = 20;
        descriptionshort = "Caliber: 7.62x51mm NATO MK319 Mod 0 SOST <br />Type: Type: Reverse-Drawn Open Tip Match <br />Rounds: 20";
        displayname = "FAL Mag (SOST) 20rnd 7.62mm";
        model = "\hlc_wp_FAL\mesh\magazine\magazine.p3d";
        initspeed = 890.4;
        mass = 13;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "MK319 OTM";
    };
    class hlc_20Rnd_762x51_T_fal : hlc_20Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_tracer";
        descriptionshort = "Caliber: 7.62x51mm NATO M62A1 Tracer <br />Type: Incendiary Tracer <br />Rounds: 20";
        displayname = "FAL Mag (Tracer) 20rnd 7.62mm";
        model = "\hlc_wp_FAL\mesh\magazine\magazine.p3d";
        lastroundstracer = 0;
        scope = 2;
        mass = 13;
        tracersevery = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falTracer_ca.paa";
        displaynameshort = "M62A1 Tracer";
    };
    class hlc_20Rnd_762x51_TDim_fal : hlc_20Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        ammo = "HLC_B_762x51_Tracer_Dim";
        descriptionshort = "Caliber: 7.62x51mm NATO M276<br />Type: IR Incendiary Tracer<br />Rounds: 20";
        displayname = "FAL Mag (IR-DIM) 20rnd 7.62mm";
        model = "\hlc_wp_FAL\mesh\magazine\magazine.p3d";
        lastroundstracer = 0;
        scope = 2;
        mass = 13;
        tracersevery = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falTracer_ca.paa";
        displaynameshort = "IR-DIM";
    };
    class hlc_50rnd_762x51_MDIM_FAL : hlc_20Rnd_762x51_B_fal {
        ammo = "HLC_B_762x51_Tracer_Dim";
        author = "Toadie, Spartan0536";
        count = 50;
        descriptionshort = "Caliber: 7.62x51mm NATO M80A1-M276<br />Type: EPFMJ/Incendiary Tracer<br />Rounds: 50";
        displayname = "X-FAL Magazine (EPR-IRDIM) 50rnd 7.62mm";
        model = "\hlc_wp_FAL\mesh\magazine\magazine.p3d";
        initspeed = 908.4;
        mass = 17;
        lastroundstracer = 3;
        picture = "\hlc_core\tex\ui\ammo\m_x91_mixed_ca.paa";
        scope = 2;
        tracersevery = 4;
        displaynameshort = "EPR/IR-DIM";
    };
    class hlc_20Rnd_762x51_S_fal : hlc_20Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_BTSub";
        descriptionshort = "Caliber: 7.62x51mm NATO Lapua FMJ-BT Subsonic<br />Type: Full Metal Jacket with Boat Tail<br />Rounds: 20";
        displayname = "FAL Mag (SubSonic) 20rnd 7.62mm";
        model = "\hlc_wp_FAL\mesh\magazine\magazine.p3d";
        lastroundstracer = 0;
        scope = 2;
        mass = 13;
        tracersevery = 0;
        initspeed = 325;
        displaynameshort = "FMJ Subsonic";
        picture = "\hlc_core\tex\ui\ammo\m_falsubsonic_ca.paa";
    };
    class hlc_50rnd_762x51_M_FAL : hlc_20Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        mass = 17;
        descriptionshort = "Caliber: 7.62x51mm NATO M80A1-M62A1<br />Type: EPFMJ/Incendiary Tracer<br />Rounds: 50";
        displayname = "X-FAL Magazine (EPR-Tracer) 50rnd 7.62mm";
        model = "\hlc_wp_FAL\mesh\magazine\magazine.p3d";
        initspeed = 908.4;
        lastroundstracer = 3;
        picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
        scope = 2;
        tracersevery = 4;
        displaynameshort = "EPR/Tracer";
    };
};

class CfgWeapons {

//optics

    class InventoryOpticsItem_Base_F;

    class optic_Arco;
    class hlc_optic_suit : optic_arco {
        dlc = "Niarms_FAL";
        scope= public;
        author = "Pete, Acid Snake, Toadie";
        descriptionshort = "Single Unit, Infantry, Trilux Optic<br />Magnification: 4x";
        displayname = "SUIT";
        picture = "\hlc_wp_FAL\tex\ui\gear_suit_x_ca";
        model = "\hlc_wp_FAL\mesh\SUIT\scope.p3d";
        class ItemInfo : InventoryOpticsItem_Base_F {
            __OPTIC_DMR;
            mass = 17;
            modelOptics = "\hlc_wp_fal\mesh\suit\suit_optics";
            class OpticsModes {
                class Snip {
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
                    opticsZoomMin = 0.0625;
                    opticsZoomMax = 0.0625;
                    opticsZoomInit = 0.0625;
                    discreteDistance[] = {200,300,400,500,600};
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 300;
                    distanceZoomMax = 600;
                    memoryPointCamera = "eye";
                    modelOptics[] = {"\hlc_wp_fal\mesh\suit\suit_optics"};
                    visionMode[] = {"Normal"};
                    opticsFlare = 1;
                    opticsid = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Kolimator {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "AOTT";
                    opticsdisableperipherialvision = 0;
                    opticsflare = 0;
                    opticsid = 2;
                    opticsppeffects[] = { "", "" };
                    __OPTICSZOOM_1X;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
		tmr_optics_enhanced = 0; //prevent tmr_optics ARCO overlay from displaying
		inertia = 0.03;
    };

    class hlc_optic_PVS4FAL : hlc_optic_suit {
        dlc = "Niarms_FAL";
        author = "Pete, Enron, Bohemia Interactive, Toadie";
        descriptionshort = "Night Vision Optic<br />Magnification: 4x";
        displayname = "AN/PVS4(FAL-Mount)";
        picture = "\hlc_wp_FAL\tex\ui\gear_PVS4_x_ca";
        model = "\hlc_wp_FAL\mesh\PVS4\scope.p3d";
        class ItemInfo : InventoryOpticsItem_Base_F {
            __OPTIC_DMR;
            mass = 12 + 36;
            modelOptics = "\hlc_wp_FAL\mesh\PVS4\NV_anpvs4_optic";
            class OpticsModes {
                class Snip {
                    useModelOptics = 1;
                    opticsPPEffects[] = {};
                    opticsZoomMin = 0.0625;
                    opticsZoomMax = 0.0625;
                    opticsZoomInit = 0.0625;
                    discreteDistance[] = {200,300,400,500,600};
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 300;
                    distanceZoomMax = 600;
                    memoryPointCamera = "eye";
                    modelOptics[] = {"\hlc_wp_FAL\mesh\PVS4\NV_anpvs4_optic"};
                    visionMode[] = {"NVG"};
                    opticsFlare = 1;
                    opticsid = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Snip2 {
                    useModelOptics = 1;
                    opticsPPEffects[] = {};
                    opticsZoomMin = 0.0625;
                    opticsZoomMax = 0.0625;
                    opticsZoomInit = 0.0625;
                    discreteDistance[] = { 200, 300, 400, 500, 600 };
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 300;
                    distanceZoomMax = 600;
                    memoryPointCamera = "eye";
                    modelOptics[] = { "\hlc_wp_FAL\mesh\PVS4\pvs4-daysight" };
                    visionMode[] = { "NVG" };
                    opticsFlare = 1;
                    opticsid = 2;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Kolimator {
                    cameradir = "";
                    distancezoommax = 100;
                    distancezoommin = 100;
                    memorypointcamera = "AOTT";
                    opticsdisableperipherialvision = 0;
                    opticsflare = 0;
                    opticsid = 3;
                    opticsppeffects[] = {};
                    __OPTICSZOOM_1X;
                    usemodeloptics = 0;
                    visionmode[] = {};
                };
            };
        };
		inertia = 0.18;
    };

//muzzles

    class muzzle_snds_H;
    class hlc_muzzle_snds_fal : muzzle_snds_H {
        scope = 1;
        author = "Pete, Acid Snake, Toadie";
        displayName = "FAL Suppressor";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "hlc_wp_fal\mesh\SUP_308HK\hk308";
    };

//weapons

    class Rifle;
    class Rifle_Base_F : Rifle  {
        class WeaponSlotsInfo;
        class GunParticles;
    };

    class hlc_fal_base : Rifle_Base_F {
        dlc = "Niarms_FAL";
        recoil = "recoil_ebr";
        maxZeroing = 1600;
        magazineReloadSwitchPhase = 0.5;
        scope = protected;
        deployedpivot = "deploypivot";
        hasBipod = false;
        magazines[] = { __762FAL_MAGS };
        class Library {
            libTextDesc = "FN FAL";
        };
        __AI_DISPERSION_COEF;
        reloadAction = "GestureReloadEBR";
        bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.398107, 1, 15};
        bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.281838, 1, 15};
        bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.281838, 1, 15};
        bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.281838, 1, 15};
        bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.398107, 1, 15};
        bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.398107, 1, 15};
        bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.398107, 1, 15};
        bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.281838, 1, 15};
        bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.281838, 1, 15};
        bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.281838, 1, 15};
        bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.281838, 1, 15};
        bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.281838, 1, 15};
        distancezoommax = 300;
        distancezoommin = 300;
        drysound[] = {"hlc_core\sound\empty_assaultrifles", 1.01, 1, 10};
        handanim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\LongRangeRifles\EBR\Data\Anim\ebr.rtm"};
        reloadmagazinesound[] = {"hlc_WP_FAL\snd\sa58_reload", 0.630957, 1, 35};
        soundbullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
        changeFiremodeSound[] = { "hlc_wp_fal\snd\ak_selector", 1, 1, 8 };
        UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";

        class WeaponSlotsInfo : WeaponSlotsInfo {
            class CowsSlot {};
            class PointerSlot {};
            class MuzzleSlot : asdg_MuzzleSlot_762 {};
        };

        modes[] = {"Single", "FullAuto", "single_medium_optics1", "single_far_optics1", "fullauto_medium"};

        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";

                closure1[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
                closure2[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "fal_Shot_SoundSet", "fal_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
            };
            dispersion = 0.000555596;
            reloadtime = 0.086;

            __AI_ROF_RIFLE_MEDIUM_SINGLE;
        };
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound","SilencedSound"};

            class BaseSoundModeType { /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
                weaponSoundEffect  = "DefaultRifle";
                closure1[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
                closure2[]={"\hlc_WP_FAL\snd\fal_first", 1, 1,10};
                soundClosure[]={closure1,0.5, closure2,0.5};
            };

            class StandardSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "fal_Shot_SoundSet", "fal_Tail_SoundSet" };
            };

            class SilencedSound : BaseSoundModeType { /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
                soundSetShot[] = { "FAL_silencerShot_SoundSet", "FAL_silencerTail_SoundSet" };
            };
            dispersion = 0.000555596;
            reloadtime = 0.086;

            __AI_ROF_RIFLE_MEDIUM_FULLAUTO;
        };
        class single_medium_optics1 : Single {
            showToPlayer = 0;
            requiredoptictype = 1;
            __AI_ROF_RIFLE_MEDIUM_MSCOPE_SINGLE;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredoptictype = 2;
            __AI_ROF_RIFLE_MEDIUM_HSCOPE_SINGLE;
        };
        class fullauto_medium : FullAuto {
            
                showToPlayer = 0; 
                aiBurstTerminable = 1; 
                burst = 4; 
                __AI_ROF_RIFLE_MEDIUM_CLOSE_BURST; 
        }; 
    };

    class hlc_rifle_falosw : hlc_fal_base {
        author = "Pete, Enron, Toadie";
        AB_barrelTwist=12;
        AB_barrelLength=13;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 330.2;
        initspeed = -0.868;
        scope = public;
        displayName = "DSArms FAL OSW";
        handAnim[] = {"OFP2_ManSkeleton", "\hlc_wp_fal\gesture\newgesture\hands_osw.rtm"};
        descriptionShort = "Short-Barreled Rifle<br/>Caliber: 7.62x51mm NATO";
        reloadAction = "HLC_GestureReloadOSW";
        model = "\hlc_wp_FAL\mesh\sa58\osw.p3d";
        picture = "\hlc_wp_FAL\tex\ui\gear_osw_x_ca";
        
        hiddenSelections[] = { "Reciever", "Barrel", "Frontsight", "Foregrip", "Grip", "Rearsight", "Stock", "Magazine", "Rails", "VFG" };
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\sa58\barrel-match_co.tga", "hlc_wp_fal\tex\fsight_co.tga", "hlc_wp_fal\tex\sa58\foregrip-dsa_co.tga", "hlc_wp_fal\tex\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\sa58\foldingstock_co.tga", "hlc_wp_fal\tex\mag-20_co.tga", "hlc_wp_fal\tex\dsatoprails_co.tga", "hlc_wp_fal\tex\sa58\verticalgrip_co.tga" };
        discretedistance[] = {/*100,*/200,300,400,500,600,700/*,800,900*/};
        discretedistanceinitindex = 0;
        cameradir = "look";
        discreteDistanceCameraPoint[]={/*"eye",*/"eye2","eye3","eye4","eye5","eye6","eye7"/*,"eye8","eye9"*/}; /// the angle of gun changes with zeroing
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 88;
            class CowsSlot : asdg_OpticRail1913 {};
            class PointerSlot : asdg_FrontSideRail {};
            class UnderBarrelSlot : asdg_UnderSlot {};
        };
		inertia = 0.48;
        __DEXTERITY(4.8 + 0.1, 1);
        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "OSW_Shot_SoundSet", "OSW_Tail_SoundSet" };
            };
        };
        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "OSW_Shot_SoundSet", "OSW_Tail_SoundSet" };
            };
        };
        class single_medium_optics1 : Single {
            showToPlayer = 0;
            requiredoptictype = 1;
            __AI_ROF_RIFLE_MEDIUM_MSCOPE_SINGLE;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredoptictype = 2;
            __AI_ROF_RIFLE_MEDIUM_HSCOPE_SINGLE;
        };
        class fullauto_medium : FullAuto {

            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 4;
            __AI_ROF_RIFLE_MEDIUM_CLOSE_BURST;
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_falosw_XMAG";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_falosw_XMAG";
            default = "hlc_rifle_falosw";

        };
    };
    class hlc_rifle_falosw_XMAG : hlc_rifle_falosw
    {
        scopeArsenal = 0;
        author = "Pete, Enron, Toadie";
        model = "\hlc_wp_FAL\mesh\sa58\osw_xmag.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\sa58\barrel-match_co.tga", "hlc_wp_fal\tex\fsight_co.tga", "hlc_wp_fal\tex\sa58\foregrip-dsa_co.tga", "hlc_wp_fal\tex\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\sa58\foldingstock_co.tga", "hlc_core\tex\magazines\XMags_co.tga", "hlc_wp_fal\tex\dsatoprails_co.tga", "hlc_wp_fal\tex\sa58\verticalgrip_co.tga" };
    };

    class UGL_F;
    class hlc_rifle_osw_GL : hlc_rifle_falosw {
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 130; 
            class UnderBarrelSlot {};
        };
		inertia = 0.77;
        __DEXTERITY(4.8 + 1.36, 0);
        author = "Pete, Enron, Tigg, Bohemia Interactive, Toadie";
        displayName = "DSArms FAL OSW(GL)";
        model = "\hlc_wp_FAL\mesh\sag58gl\osw_gl.p3d";
        picture = "\hlc_wp_FAL\tex\ui\gear_oswgl_x_ca";
        hiddenSelections[] = { "Reciever", "Barrel", "Frontsight", "Foregrip", "Grip", "Rearsight", "Stock", "Magazine", "Rails", "M203" };
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\sa58\barrel-match_co.tga", "hlc_wp_fal\tex\fsight_co.tga", "hlc_wp_fal\tex\sa58\foregrip-dsa_co.tga", "hlc_wp_fal\tex\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\sa58\foldingstock_co.tga", "hlc_wp_fal\tex\mag-20_co.tga", "hlc_wp_fal\tex\dsatoprails_co.tga", "hlc_wp_fal\tex\tigg_m203\m203_co.tga" };
        muzzles[] = {"this", "hlc_M203_OSW"};
        handAnim[] = {"OFP2_ManSkeleton", "\hlc_wp_fal\gesture\newgesture\osw_gl_hands.rtm"};
        class hlc_M203_OSW : UGL_F {
            cameradir = "GL Look";
            discreteDistance[] = {50,100,150,200,250,300,350,400};
            discreteDistanceCameraPoint[] = {"GL Eye05","GL Eye1","GL Eye15", "GL Eye2","GL Eye25", "GL Eye3","gl eye35", "GL Eye4"}; /// the angle of gun changes with zeroing
            discreteDistanceInitIndex = 1;
            displayname = "M203";
            useModelOptics = false;
            useExternalOptic = false;
            optics = 1;
            cursoraim = "gl";
            magazinereloadtime = 0;
            reloadAction = "GestureReloadTrgUGL";
            reloadtime = 0.1;
            __AI_ROF_GL_SINGLE;
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_osw_GL_XMAG";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_osw_GL_XMAG";
            default = "hlc_rifle_osw_GL";
        };
    };
    class hlc_rifle_osw_GL_XMAG : hlc_rifle_osw_GL
    {
        scopeArsenal = 0;
        author = "Pete, Enron, Tigg, Bohemia Interactive, Toadie";
        model = "\hlc_wp_FAL\mesh\SAG58GL\OSW_GL_xmag.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\sa58\barrel-match_co.tga", "hlc_wp_fal\tex\fsight_co.tga", "hlc_wp_fal\tex\sa58\foregrip-dsa_co.tga", "hlc_wp_fal\tex\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\sa58\foldingstock_co.tga", "hlc_core\tex\magazines\XMags_co.tga", "hlc_wp_fal\tex\dsatoprails_co.tga", "hlc_wp_fal\tex\tigg_m203\m203_co.tga" };
    };

    class hlc_rifle_SLR : hlc_fal_base {
        author = "Pete, Enron, Toadie, Clifton Vlodhammer";
        AB_barrelTwist=12;
        AB_barrelLength=21.7;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 551.18;
        scope = public;
        displayName = "Lithgow SLR";
        descriptionShort = "Infantry Rifle<br/>Caliber: 7.62x51mm NATO";
        recoil = "recoil_ebr";
        maxZeroing = 1600;
        reloadAction = "HLC_GestureReloadFALLONG";
        handanim[] = {"OFP2_ManSkeleton", "hlc_WP_FAL\gesture\l1a1_hands.rtm"};
        reloadmagazinesound[] = {"hlc_WP_FAL\snd\fal_reload", 0.630957, 1, 35};
        model = "\hlc_wp_FAL\mesh\slr\l1a1_1.p3d";
        picture = "\hlc_wp_FAL\tex\ui\gear_slr_x_ca";
        hiddenSelections[] = { "Reciever", "Barrel", "Frontsight", "GasBlock", "Foregrip", "Grip", "Rearsight", "Stock", "Magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\lithgow\barrel-slr_co.tga", "hlc_wp_fal\tex\israeli\frontsight-1_co.tga", "hlc_wp_fal\tex\lithgow\fsight2_co.tga", "hlc_wp_fal\tex\lithgow\fore-slr_co.tga", "hlc_wp_fal\tex\c1\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\lithgow\stock-solid_co.tga", "hlc_wp_fal\tex\israeli\mag-20_co.tga" };
        __DEXTERITY(4.5, 0);
        discretedistance[] = {/*100,*/200,300,400,500,600,700/*,800*/};
        discretedistanceinitindex = 0;
        cameradir = "look";
        discreteDistanceCameraPoint[]={/*"eye"*/"eye2","eye3","eye4","eye5","eye6","eye7"/*,"eye8"*/}; /// the angle of gun changes with zeroing

        modes[] = {"Single", "single_medium_optics1", "single_far_optics1"};

        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "FAL2_Shot_SoundSet", "FAL2_tail_SoundSet" };
            };
            minrange = 0;
            dispersion = 0.0013;
        };
        class single_medium_optics1 : Single {
            showToPlayer = 0;
            requiredoptictype = 1;
            __AI_ROF_RIFLE_MEDIUM_MSCOPE_SINGLE;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredoptictype = 2;
            __AI_ROF_RIFLE_MEDIUM_HSCOPE_SINGLE;
        };
        class fullauto_medium : FullAuto {

            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 4;
            __AI_ROF_RIFLE_MEDIUM_CLOSE_BURST;
        };

        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 91;
            class CowsSlot: asdg_OpticRail {
                class compatibleItems {
                    hlc_optic_suit = 1;
                    hlc_optic_PVS4FAL = 1;
                };
            };
        };
		inertia = 0.43;
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_SLR_XMAG";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_SLR_XMAG";
            default = "hlc_rifle_SLR";
        };
    };
    class hlc_rifle_SLR_XMAG : hlc_rifle_SLR
    {
        scopeArsenal = 0;
        author = "Pete, Enron, Toadie, Clifton Vlodhammer";
        model = "\hlc_wp_FAL\mesh\slr\l1a1_1_xmag.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\lithgow\barrel-slr_co.tga", "hlc_wp_fal\tex\israeli\frontsight-1_co.tga", "hlc_wp_fal\tex\lithgow\fsight2_co.tga", "hlc_wp_fal\tex\lithgow\fore-slr_co.tga", "hlc_wp_fal\tex\c1\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\lithgow\stock-solid_co.tga", "hlc_core\tex\magazines\XMags_co.tga" };
    };

    class hlc_rifle_STG58F : hlc_fal_base {
        author = "Pete, Enron, Bohemia Interactive, Toadie, Clifton Vlodhammer";
        AB_barrelTwist=12;
        AB_barrelLength=21;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 533.4;
        scope = public;
        displayName = "Steyr STG.58";
        descriptionShort = "Infantry Rifle<br/>Caliber: 7.62x51mm NATO";
        reloadAction = "HLC_GestureReloadFALLONG";
        reloadmagazinesound[] = {"hlc_WP_FAL\snd\fal_reload", 0.630957, 1, 35};
        handanim[] = {"OFP2_ManSkeleton", "hlc_WP_FAL\gesture\l1a1_hands.rtm"};
        model = "\hlc_wp_FAL\mesh\stg58\stg58.p3d";
        picture = "\hlc_wp_FAL\tex\ui\gear_stg58_x_ca";
        hiddenSelections[] = { "Reciever", "Barrel", "Frontsight", "GasBlock", "Foregrip", "Grip", "Rearsight", "Stock", "Magazine", "Rail", "Muzzle" };
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\rec_co.tga", "hlc_wp_fal\tex\barrel-slr_co.tga", "hlc_wp_fal\tex\fsight_co.tga", "hlc_wp_fal\tex\fsight2_co.tga", "hlc_wp_fal\tex\fore-grooved_co.tga", "hlc_wp_fal\tex\grip-enfield_co.tga", "hlc_wp_fal\tex\rsight-modern_co.tga", "hlc_wp_fal\tex\stock-solid_co.tga", "hlc_wp_fal\tex\mag-20_co.tga","hlc_wp_fal\tex\dsatoprails_co.tga","hlc_wp_fal\tex\bis_falpara\fnfal_co.tga" };
        discretedistance[] = {/*100,*/200,300,400,500,600,700/*,800,900*/};
        discretedistanceinitindex = 2;
        cameradir = "look";
        __DEXTERITY(5.1, 0);
        discreteDistanceCameraPoint[]={/*"eye",*/"eye2","eye3","eye4","eye5","eye6","eye7"/*,"eye8","eye9"*/}; /// the angle of gun changes with zeroing
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 89;
            class CowsSlot: asdg_OpticRail1913 {};
        };
		inertia = 0.45;
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_STG58F_XMAG";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_STG58F_XMAG";
            default = "hlc_rifle_STG58F";
        };
    };
    class hlc_rifle_STG58F_XMAG : hlc_rifle_STG58F
    {
        scopeArsenal = 0;
        author = "Pete, Enron, Bohemia Interactive, Toadie, Clifton Vlodhammer";
        model = "\hlc_wp_FAL\mesh\stg58\stg58_xmag.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\rec_co.tga", "hlc_wp_fal\tex\barrel-slr_co.tga", "hlc_wp_fal\tex\fsight_co.tga", "hlc_wp_fal\tex\fsight2_co.tga", "hlc_wp_fal\tex\fore-grooved_co.tga", "hlc_wp_fal\tex\grip-enfield_co.tga", "hlc_wp_fal\tex\rsight-modern_co.tga", "hlc_wp_fal\tex\stock-solid_co.tga", "hlc_core\tex\magazines\XMags_co.tga", "hlc_wp_fal\tex\dsatoprails_co.tga", "hlc_wp_fal\tex\bis_falpara\fnfal_co.tga" };
    };

    class hlc_rifle_FAL5061Rail : hlc_fal_base {
        scope = public;
        author = "Bohemia Interactive, Arby25, Toadie";
        displayName = "FN FAL 50.61'Para' (RIS)";
        model = "\hlc_wp_FAL\mesh\FN_FAL\fnFal_rails.p3d";
        picture = "\hlc_wp_FAL\tex\ui\gear_para_x_ca";
        descriptionShort = "Infantry Rifle<br/>Caliber: 7.62x51mm NATO";
        reloadAction = "HLC_GestureReloadFALLONG";
        reloadmagazinesound[] = { "hlc_WP_FAL\snd\fal_reload", 0.630957, 1, 35 };
        hiddenSelections[] = { "Main", "Magazine", "Rail"};
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\bis_falpara\fnfal_co.tga", "hlc_wp_fal\tex\arby25_fal\fnfal2_co.tga", "hlc_wp_fal\tex\bis_pvs4\anpvs4_co.tga" };
        handanim[] = { "OFP2_ManSkeleton", "hlc_WP_FAL\gesture\l1a1_hands.rtm" };
        discretedistance[] = {  200, 300, 400, 500, 600, 700 };
        discretedistanceinitindex = 2;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 95;
            class CowsSlot : asdg_OpticRail1913 {};
        };
		inertia = 0.45;
        __DEXTERITY(4.5, 0);
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_FAL5061Rail_XMAG";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_FAL5061Rail_XMAG";
            default = "hlc_rifle_FAL5061Rail";
        };
    };
    class hlc_rifle_FAL5061Rail_XMAG : hlc_rifle_FAL5061Rail
    {
        scopeArsenal = 0;
        author = "Bohemia Interactive, Arby25, Toadie";
        model = "\hlc_wp_FAL\mesh\FN_FAL\fnFal_rails_xmag.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\bis_falpara\fnfal_co.tga", "hlc_core\tex\magazines\XMags_co.tga", "hlc_wp_fal\tex\bis_pvs4\anpvs4_co.tga" };
    };

    class hlc_rifle_FAL5061 : hlc_fal_base {
        scope = public;
        author = "Bohemia Interactive, Arby25, Toadie";
        AB_barrelTwist=12;
        AB_barrelLength=18;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 457.2;
        displayName = "FN FAL 50.61'Para'";
        descriptionShort = "Battle Rifle<br/>Caliber: 7.62x51mm NATO";
        reloadAction = "HLC_GestureReloadFALLONG";
        reloadmagazinesound[] = {"hlc_WP_FAL\snd\fal_reload", 0.630957, 1, 35};
        handanim[] = {"OFP2_ManSkeleton", "hlc_WP_FAL\gesture\l1a1_hands.rtm"};
        model = "\hlc_wp_FAL\mesh\FN_FAL\FNFAL.p3d";
        picture = "\hlc_wp_FAL\tex\ui\gear_para_x_ca";
        hiddenSelections[] = { "Main", "Magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\bis_falpara\fnfal_co.tga", "hlc_wp_fal\tex\arby25_fal\fnfal2_co.tga"};
        discretedistance[] = {200,300,400,500,600,700};
        discretedistanceinitindex = 2;
        inertia = 0.39;
        __DEXTERITY(3.9, 0);
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 82;
            class CowsSlot: asdg_OpticRail {
                class compatibleItems {
                    hlc_optic_suit = 1;
                    hlc_optic_PVS4FAL = 1;
                };
            };
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_FAL5061_XMAG";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_FAL5061_XMAG";
            default = "hlc_rifle_FAL5061";
        };
    };
    class hlc_rifle_FAL5061_XMAG : hlc_rifle_FAL5061
    {
        scopeArsenal = 0;
        author = "Bohemia Interactive, Arby25, Toadie";
        model = "\hlc_wp_FAL\mesh\FN_FAL\fnFal_xmag.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\bis_falpara\fnfal_co.tga", "hlc_core\tex\magazines\XMags_co.tga" };
    };

    class hlc_rifle_FAL5000 : hlc_rifle_FAL5061 {
        scope = public;
        author = "Bohemia Interactive, Arby25, Toadie, Clifton Vlodhammer";
        AB_barrelTwist = 12;
        AB_barrelLength = 18;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 457.2;
        displayName = "FN FAL 50.00";
        descriptionShort = "Battle Rifle<br/>Caliber: 7.62x51mm NATO";
        reloadAction = "HLC_GestureReloadFALLONG";
        reloadmagazinesound[] = { "hlc_WP_FAL\snd\fal_reload", 0.630957, 1, 35 };
        handanim[] = { "OFP2_ManSkeleton", "hlc_WP_FAL\gesture\l1a1_hands.rtm" };
        model = "\hlc_wp_FAL\mesh\FN_FAL\FNFAL_full.p3d";
        picture = "\hlc_wp_FAL\tex\ui\gear_fal_ca";
        hiddenSelections[] = { "Main", "Stock", "Barrel" };
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\bis_falpara\fnfal_co.tga", "hlc_wp_fal\tex\arby25_fal\fnfal2_co.tga", "hlc_wp_fal\tex\lithgow\barrel-slr_co.tga"};
        discretedistance[] = {  200, 300, 400, 500, 600, 700 };
        discretedistanceinitindex = 2;
        inertia = 0.43;
        __DEXTERITY(4.3, 0);
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 90;
        };
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_FAL5000_XMAG";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_FAL5000_XMAG";
            default = "hlc_rifle_FAL5000";
        };
    };
    class hlc_rifle_FAL5000_XMAG : hlc_rifle_FAL5000
    {
        scopeArsenal = 0;
        author = "Bohemia Interactive, Arby25, Toadie";
        model = "\hlc_wp_FAL\mesh\FN_FAL\FNFAL_full_xmag.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\bis_falpara\fnfal_co.tga", "hlc_core\tex\magazines\XMags_co.tga", "hlc_wp_fal\tex\lithgow\barrel-slr_co.tga" };
    };

    class hlc_rifle_FAL5000Rail : hlc_rifle_FAL5061Rail {
        scope = public;
        displayName = "FN FAL 50.00 (RIS)";
        author = "Bohemia Interactive, Arby25, Toadie, Clifton Vlodhammer";
        model = "\hlc_wp_FAL\mesh\FN_FAL\fnFal_full_rails.p3d";
        picture = "\hlc_wp_FAL\tex\ui\gear_fal_ca";
        hiddenSelections[] = { "Main", "Stock", "Barrel", "Rail" };
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\bis_falpara\fnfal_co.tga", "hlc_wp_fal\tex\arby25_fal\fnfal2_co.tga", "hlc_wp_fal\tex\lithgow\barrel-slr_co.tga", "hlc_wp_fal\tex\bis_pvs4\anpvs4_co.tga" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 99;
        };
		inertia = 0.5;
        __DEXTERITY(4.6, 0);
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_FAL5000Rail_XMAG";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_FAL5000Rail_XMAG";
            default = "hlc_rifle_FAL5000Rail";
        };
    };
    class hlc_rifle_FAL5000Rail_XMAG : hlc_rifle_FAL5000Rail
    {
        scopeArsenal = 0;
        author = "Bohemia Interactive, Arby25, Toadie";
        model = "\hlc_wp_FAL\mesh\FN_FAL\fnFal_full_rails_xmag.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\bis_falpara\fnfal_co.tga", "hlc_core\tex\magazines\XMags_co.tga", "hlc_wp_fal\tex\lithgow\barrel-slr_co.tga", "hlc_wp_fal\tex\bis_pvs4\anpvs4_co.tga" };
    };

    class hlc_rifle_FAL5000_RH : hlc_rifle_FAL5000
    {
        author = "Bohemia Interactive, Arby25, Toadie, Clifton Vlodhammer";
        displayName = "FN FAL 50.00(Rhod. Spraycam)";
        picture = "\hlc_wp_FAL\tex\ui\gear_falRH_ca";
        hiddenSelections[] = { "Main", "Stock", "Barrel" };
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\bis_falpara\fnfal_Rhodie_co.tga", "hlc_wp_fal\tex\arby25_fal\fnfal2_Rhodie_co.tga", "hlc_wp_fal\tex\lithgow\barrel-slr_Rhodie_co.tga" };
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_FAL5000_RH_XMAG";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_FAL5000_RH_XMAG";
            default = "hlc_rifle_FAL5000_RH";
        };
    };
    class hlc_rifle_FAL5000_RH_XMAG : hlc_rifle_FAL5000_RH
    {
        scopeArsenal = 0;
        author = "Bohemia Interactive, Arby25, Toadie";
        model = "\hlc_wp_FAL\mesh\FN_FAL\fnFal_full_xmag.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\bis_falpara\fnfal_Rhodie_co.tga", "hlc_core\tex\magazines\XMags_co.tga", "hlc_wp_fal\tex\lithgow\barrel-slr_Rhodie_co.tga" };
    };

    class hlc_rifle_L1A1SLR : hlc_rifle_SLR {
        author = "Pete, Enron, Toadie, Clifton Vlodhammer";
        AB_barrelTwist=12;
        AB_barrelLength=21.7;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 551.18;
        scope = public;
        displayName = "Enfield L1A1 SLR";
        descriptionShort = "Battle Rifle<br/>Caliber: 7.62x51mm NATO";
        model = "\hlc_wp_FAL\mesh\l1a1\L1A1.p3d";
        picture = "\hlc_wp_FAL\tex\ui\gear_l1a1_x_ca";
        hiddenSelections[] = { "Reciever", "Barrel", "Frontsight", "GasBlock", "Foregrip", "Grip", "Rearsight", "Stock", "Magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\lithgow\barrel-slr_co.tga", "hlc_wp_fal\tex\israeli\frontsight-1_co.tga", "hlc_wp_fal\tex\lithgow\fsight2_co.tga", "hlc_wp_fal\tex\c1\foregrip-vented_co.tga", "hlc_wp_fal\tex\c1\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\lithgow\stock-solid_co.tga", "hlc_wp_fal\tex\israeli\mag-20_co.tga" };
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_L1A1SLR_XMAG";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_L1A1SLR_XMAG";
            default = "hlc_rifle_L1A1SLR";
        };
    };
    class hlc_rifle_L1A1SLR_XMAG : hlc_rifle_L1A1SLR
    {
        scopeArsenal = 0;
        author = "Pete, Enron, Toadie, Clifton Vlodhammer";
        model = "\hlc_wp_FAL\mesh\l1a1\L1A1_xmag.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\lithgow\barrel-slr_co.tga", "hlc_wp_fal\tex\israeli\frontsight-1_co.tga", "hlc_wp_fal\tex\lithgow\fsight2_co.tga", "hlc_wp_fal\tex\c1\foregrip-vented_co.tga", "hlc_wp_fal\tex\c1\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\lithgow\stock-solid_co.tga", "hlc_core\tex\magazines\XMags_co.tga" };

    };

    class hlc_rifle_c1A1 : hlc_rifle_SLR {
        author = "Pete, Enron, Toadie, Clifton Vlodhammer";
        AB_barrelTwist=12;
        AB_barrelLength=21.7;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 551.18;
        scope = public;
        displayName = "CAL C1A1";
        hiddenSelections[] = { "Reciever", "Barrel", "Frontsight", "GasBlock", "Foregrip", "Grip", "Rearsight", "Stock", "Magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\c1\rec_co.tga", "hlc_wp_fal\tex\barrel-slr_co.tga", "hlc_wp_fal\tex\fsight_co.tga", "hlc_wp_fal\tex\fsight2_co.tga", "hlc_wp_fal\tex\c1\foregrip-vented_co.tga","hlc_wp_fal\tex\c1\grip-enfield_co.tga","hlc_wp_fal\tex\israeli\rearsight-slr_co.tga","hlc_wp_fal\tex\c1\stock-solid_co.tga","hlc_wp_fal\tex\mag-20_co.tga" };
        descriptionShort = "Battle Rifle<br/>Caliber: 7.62x51mm NATO";
        model = "\hlc_wp_FAL\mesh\C1A1\C1A1.p3d";
        picture = "\hlc_wp_FAL\tex\ui\gear_c1_x_ca";
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_c1A1_XMAG";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_c1A1_XMAG";
            default = "hlc_rifle_c1A1";
        };
    };
    class hlc_rifle_c1A1_XMAG : hlc_rifle_c1A1
    {
        scopeArsenal = 0;
        author = "Pete, Enron, Toadie, Clifton Vlodhammer";
        model = "\hlc_wp_FAL\mesh\C1A1\C1A1_xmag.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\c1\rec_co.tga", "hlc_wp_fal\tex\barrel-slr_co.tga", "hlc_wp_fal\tex\fsight_co.tga", "hlc_wp_fal\tex\fsight2_co.tga", "hlc_wp_fal\tex\c1\foregrip-vented_co.tga", "hlc_wp_fal\tex\c1\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\c1\stock-solid_co.tga", "hlc_core\tex\magazines\XMags_co.tga" };
    };

    class hlc_rifle_LAR : hlc_rifle_FAL5061 {
        author = "Pete, Enron, Acid Snake, Toadie, Clifton Vlodhammer";
        AB_barrelTwist=12;
        AB_barrelLength=21;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 533.4;
        scope = public;
        displayName = "FN LAR";
        descriptionShort = "Battle Rifle<br/>Caliber: 7.62x51mm NATO";
        reloadAction = "HLC_GestureReloadFALLONG";
        reloadmagazinesound[] = {"hlc_WP_FAL\snd\fal_reload", 0.630957, 1, 35};
        handanim[] = {"OFP2_ManSkeleton", "hlc_WP_FAL\gesture\l1a1_hands.rtm"};
        model = "\hlc_wp_FAL\mesh\FN_LAR\L1A1.p3d";
        picture = "\hlc_wp_FAL\tex\ui\gear_izzy_x_ca";
        hiddenSelections[] = { "Reciever", "Barrel", "Frontsight", "Foregrip", "Grip", "Rearsight", "Stock", "Magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\israeli\barrel-izzy.tga", "hlc_wp_fal\tex\israeli\frontsight-1_co.tga",  "hlc_wp_fal\tex\israeli\foregrip-izzy_co.tga", "hlc_wp_fal\tex\c1\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\c1\stock-solid_co.tga", "hlc_wp_fal\tex\mag-20_co.tga" };
        discretedistance[] = {/*100,*/200,300,400,500,600,700/*,800,900*/};
        discretedistanceinitindex = 2;
        cameradir = "look";
        discreteDistanceCameraPoint[]={/*"eye",*/"eye2","eye3","eye4","eye5","eye6","eye7"/*,"eye8","eye9"*/}; /// the angle of gun changes with zeroing
        class Single : Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "FAL2_Shot_SoundSet", "FAL2_tail_SoundSet" };
            };
            __MOA(1.9);
        };
        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "FAL2_Shot_SoundSet", "FAL2_tail_SoundSet" };
            };
            __MOA(2.4);
        };       
        class single_medium_optics1 : Single {
            showToPlayer = 0;
            requiredoptictype = 1;
            __AI_ROF_RIFLE_MEDIUM_MSCOPE_SINGLE;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredoptictype = 2;
            __AI_ROF_RIFLE_MEDIUM_HSCOPE_SINGLE;
        };
        class fullauto_medium : FullAuto {

            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 4;
            __AI_ROF_RIFLE_MEDIUM_CLOSE_BURST;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 119;
        };
		inertia = 0.43;
        __DEXTERITY(4.3, 0);
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_LAR_XMAG";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_LAR_XMAG";
            default = "hlc_rifle_LAR";
        };
    };
    class hlc_rifle_LAR_XMAG : hlc_rifle_LAR
    {
        scopeArsenal = 0;
        author = "Pete, Enron, Toadie, Clifton Vlodhammer";
        model = "\hlc_wp_FAL\mesh\FN_LAR\L1A1_xmag.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\israeli\barrel-izzy.tga", "hlc_wp_fal\tex\israeli\frontsight-1_co.tga", "hlc_wp_fal\tex\israeli\foregrip-izzy_co.tga", "hlc_wp_fal\tex\c1\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\c1\stock-solid_co.tga","hlc_core\tex\magazines\XMags_co.tga" };

    };

    class hlc_rifle_SLRchopmod : hlc_rifle_FAL5061 {
        author = "Pete, Enron, Toadie, Clifton Vlodhammer";
        AB_barrelTwist=12;
        AB_barrelLength=18;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 457.2;
        scope = public;
        initspeed = -0.868;
        displayName = "Lithgow SLR Chopmod";
        descriptionShort = "Butchered AOW<br/>Caliber: 7.62x51mm NATO";
        reloadAction = "HLC_GestureReloadFALLONG";
        reloadmagazinesound[] = {"hlc_WP_FAL\snd\fal_reload", 0.630957, 1, 35};
        handAnim[] = {"OFP2_ManSkeleton", "\hlc_wp_fal\gesture\newgesture\chopmod_hands.rtm"};
        model = "\hlc_wp_FAL\mesh\Suchka-LR\L1A1_1.p3d";
        picture = "\hlc_wp_FAL\tex\ui\gear_bitch_x_ca";
        hiddenSelections[] = { "Reciever", "Barrel", "Frontsight", "GasBlock", "Foregrip", "Grip", "Rearsight", "Stock", "Magazine" };
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\sa58\barrel-match_co.tga", "hlc_wp_fal\tex\israeli\frontsight-1_co.tga", "hlc_wp_fal\tex\lithgow\fsight2_co.tga", "hlc_wp_fal\tex\lithgow\fore-slr_co.tga", "hlc_wp_fal\tex\c1\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\lithgow\stock-solid_co.tga", "hlc_wp_fal\tex\israeli\mag-20_co.tga" };
        discretedistance[] = {200,300,400,500,600,700};
        discretedistanceinitindex = 2;
        cameradir = "look";
        discreteDistanceCameraPoint[]={"eye2","eye3","eye4","eye5","eye6","eye7"}; /// the angle of gun changes with zeroing
        class Single: Single {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "OSW_Shot_SoundSet", "OSW_Tail_SoundSet" };
            };
            __MOA(2.3);
        };
        class FullAuto : FullAuto {
            class StandardSound : StandardSound { /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
                soundSetShot[] = { "OSW_Shot_SoundSet", "OSW_Tail_SoundSet" };
            };
            __MOA(2.7);
        };
        class single_medium_optics1 : Single {
            showToPlayer = 0;
            requiredoptictype = 1;
            __AI_ROF_RIFLE_MEDIUM_MSCOPE_SINGLE;
        };
        class single_far_optics1 : single_medium_optics1 {
            requiredoptictype = 2;
            __AI_ROF_RIFLE_MEDIUM_HSCOPE_SINGLE;
        };
        class fullauto_medium : FullAuto {

            showToPlayer = 0;
            aiBurstTerminable = 1;
            burst = 4;
            __AI_ROF_RIFLE_MEDIUM_CLOSE_BURST;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 85;
        };
		inertia = 0.39;
        __DEXTERITY(3.9, 1);
        class __MAGSWITCHCLASS {
            hlc_50rnd_762x51_M_FAL = "hlc_rifle_SLRchopmod_XMAG";
            hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_SLRchopmod_XMAG";
            default = "hlc_rifle_SLRchopmod";
        };
    };
    class hlc_rifle_SLRchopmod_XMAG : hlc_rifle_SLRchopmod
    {
        scopeArsenal = 0;
        author = "Pete, Enron, Toadie, Clifton Vlodhammer";
        model = "\hlc_wp_FAL\mesh\Suchka-LR\L1A1_1_xmag.p3d";
        hiddenSelectionsTextures[] = { "hlc_wp_fal\tex\israeli\rec_sanitary_co.tga", "hlc_wp_fal\tex\sa58\barrel-match_co.tga", "hlc_wp_fal\tex\israeli\frontsight-1_co.tga", "hlc_wp_fal\tex\lithgow\fsight2_co.tga", "hlc_wp_fal\tex\lithgow\fore-slr_co.tga", "hlc_wp_fal\tex\c1\grip-enfield_co.tga", "hlc_wp_fal\tex\israeli\rearsight-slr_co.tga", "hlc_wp_fal\tex\lithgow\stock-solid_co.tga", "hlc_core\tex\magazines\XMags_co.tga"  };
    };
};

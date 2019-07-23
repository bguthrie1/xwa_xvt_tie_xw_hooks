#pragma once
#include "XWATypes.h"


const auto currentPlayerIndex = (int*)0x8C1CC8;
const auto dword_7827E4 = (int*)0x7827E4;
const auto KeyPressed = (short*)0x8053C0;

const auto PlaySoundFromObject = (signed int(*)(unsigned int SoundIndex, int objectIndexToPlaySoundFrom, unsigned int playerIndex))0x43BF90;

#pragma pack(push, 1)

struct RotationMatrix3D
{
	__int16 Front_X;
	__int16 Front_Y;
	__int16 Front_Z;
	__int16 Right_X;
	__int16 Right_Y;
	__int16 Right_Z;
	__int16 Up_X;
	__int16 Up_Y;
	__int16 Up_Z;
};


struct PlayerCamera
{
	int PositionX;
	int PositionY;
	int PositionZ;
	int CraftIndex;
	int RelatedToMap;
	__int16 CraftPitch;
	__int16 CraftYaw;
	__int16 CraftRoll;
	__int16 Roll;
	__int16 Pitch;
	__int16 Yaw;
	int ShakeX;
	int ShakeY;
	int ShakeZ;
	__int16 PitchShakeUNK;
	__int16 YawShakeUNK;
	__int16 RollShakeUNK;
	__int16 field_32;
	char ViewMode1;
	char ViewMode2;
	char field_36;
	char S0x08B94E0_B48_m37;
	char unk38;
	__int16 S0x08B94E0_B48_m39;
	__int16 S0x08B94E0_B48_m3B;
	__int16 MapMode;
	__int16 S0x08B94E0_B48_m3F;
	__int16 ExternalCamera;
	int ExternalCameraZoomDist;
	__int16 S0x08B94E0_B48_m47;
	__int16 S0x08B94E0_B48_m49;
	char unk4B[2];
};


struct Player
{
	int ObjectIndex;
	int JumpNextCraftID;
	__int16 PilotRating;
	__int16 IFF;
	__int16 Team;
	__int16 FGIndex;
	char Region;
	char ParticipationState;
	char IsEjecting;
	char AutopilotAction;
	char EnginesCount;
	char MapState;
	char Autopilot;
	char HyperspacePhase;
	char HyperingToRegion;
	char HyperspaceCooldown;
	char HyperedToRegion[5];
	int TimeInHyperspace;
	char ShowTargetBox;
	char WarheadLockState;
	__int16 CurrentTargetIndex;
	char TargetTimeTargetedSeconds;
	char TargetTimeTargetedMinutes;
	__int16 LastTargetIndex;
	__int16 CraftMemory1;
	__int16 CraftMemory2;
	__int16 CraftMemory3;
	__int16 CraftMemory4;
	char PrimarySecondaryArmed;
	char WarheadArmed;
	__int16 ComponentTargetIndex;
	__int16 field_37;
	__int16 EngineWashCraftIndex;
	__int16 EngineWashAmount;
	__int16 ThrottlePreset[2];
	char ElsPresetLasers[2];
	char ElsPresetShields[2];
	char ElsPresetBeam[2];
	__int16 EngineThrottleInput;
	char ElsLasers;
	char ElsShields;
	char ElsBeam;
	char ShieldDirection;
	char PrimaryLaserLinkStatus;
	__int16 SecondaryLaserLinkStatus;
	__int16 TiertiaryLaserLinkStatus;
	char CriticalMessageType;
	__int16 CriticalMessageTargetObjectIndex;
	char field_55;
	char field_56;
	char JoystickRollHeld;
	char field_58;
	__int16 JoystickYawDrift;
	__int16 JoystickPitchDrift;
	__int16 JoystickRollDrift;
	char JoystickTriggerFlags;
	char field_60;
	__int16 JoystickRollDelayTimer;
	char SwapXR;
	char HudActive1;
	char HudActive2;
	char SimpleHUD;
	char BottomLeftPanel;
	char BottomRightPanel;
	char ActiveWeapon;
	char field_6A;
	char ConsoleActivated;
	char PanelSelected;
	char PanelSelected2;
	char HudMfdType[3];
	char field_71[3];
	char FlightCommandSelected;
	char FlightCommandSelection;
	char field_76;
	char field_77;
	char FlightCommandNumWingmenSelectable;
	char FlightCommandWingmanSelected;
	char field_7A[7];
	int field_81[7];
	int field_9D[7];
	char field_B9[12];
	char field_C5;
	__int16 field_C6[7];
	__int16 field_D4[7];
	char field_E2[6];
	char field_E8;
	char ConsoleString[256];
	char field_1E9;
	__int16 ConsoleCharacterCount;
	int AiObjectIndex;
	char field_1F0;
	char field_1F1[8];
	char CockpitDisplayed;
	char HasCockpitOpt;
	char HasTurretOpt;
	char field_1FC;
	__int16 MousePositionX;
	__int16 MousePositionY;
	float Pitch_UNK;
	float Yaw_UNK;
	float Roll_UNK;
	float field_20D;
	float field_211;
	float field_215;
	__int16 TurretIndexActive;
	__int16 NumberOfGunnerHardpoints;
	char CurrentGunnerHardpointActive;
	RotationMatrix3D GunnerRotationMatrix;
	int Score;
	int PromoPoints;
	int WorsePromoPoints;
	int field_23C;
	int field_240;
	int field_244;
	int field_248;
	__int16 EnergyWeapon1Fired;
	__int16 EnergyWeapon1Hits;
	__int16 EnergyWeapon2Fired;
	__int16 EnergyWeapon2Hits;
	__int16 WarheadsFired;
	__int16 WarheadHits;
	__int16 NumOfCraftInspected;
	__int16 NumOfSpecialCraftInspected;
	__int16 KillsOnFG[192];
	__int16 KillsSharedOnFG[192];
	__int16 KillsAssistOnFG[192];
	__int16 KillsFullOnPlayerRating[25];
	__int16 KillsSharedOnPlayerRating[25];
	__int16 KillsAssistOnPlayerRating[25];
	__int16 KillsFullOnAIRating[6];
	__int16 KillsSharedOnAIRating[6];
	__int16 KillsAssistOnAIRating[6];
	__int16 KillsFullOnPlayer[8];
	__int16 KillsSharedOnPlayer[8];
	__int16 FriendliesKilled;
	__int16 TotalLosses;
	__int16 TotalLossesByCollision;
	__int16 TotalLossesByStarship;
	__int16 TotalLossesByMine;
	__int16 KilledByFullFromPlayer[8];
	__int16 KilledBySharedFromPlayer[8];
	__int16 KilledFullByFG[192];
	__int16 KilledSharedByFG[192];
	__int16 KilledByPlayerRating[25];
	__int16 KilledByAI;
	char ChatString[50];
	char ChatStringLength;
	char MultiChatMode;
	PlayerCamera Camera;
	__int16 FlightScreenRes;
	int DirectPlayID;
	int MissionTime;
	int PosX;
	int PosY;
	int PosZ;
	__int16 Roll2;
	__int16 Pitch2;
	__int16 Yaw2;
	int Duration;
	__int16 CurrentSpeed;
	__int16 SpeedRelease;
	__int16 CurrentSpeedFraction;
	__int16 ObjectID;
	char IsEjectingDelta;
	int CriticalMessageTimer;
	int field_BC2;
	int field_BC6;
	int TimeInMissionDelta;
	char CoPilotControlled;
};


static_assert(sizeof(Player) == 3023, "size of Player must be 3023");

#pragma pack(pop)

int TargetboxToggleHook(int* params);


enum KeyEnum16 : __int16
{
	Key_None = 0x0,
	Key_BACK = 0x8,
	Key_TAB = 0x9,
	Key_RETURN = 0xD,
	Key_ESCAPE = 0x1B,
	Key_SPACE = 0x20,
	Key_SHIFT_1 = 0x21,
	Key_SHIFT_APOSTROPHE = 0x22,
	Key_SHIFT_3 = 0x23,
	Key_SHIFT_4 = 0x24,
	Key_SHIFT_5 = 0x25,
	Key_SHIFT_7 = 0x26,
	Key_APOSTROPHE = 0x27,
	Key_SHIFT_9 = 0x28,
	Key_SHIFT_0 = 0x29,
	Key_SHIFT_8 = 0x2A,
	Key_SHIFT_EQUALS = 0x2B,
	Key_COMMA = 0x2C,
	Key_MINUS = 0x2D,
	Key_PERIOD = 0x2E,
	Key_SLASH = 0x2F,
	Key_0 = 0x30,
	Key_1 = 0x31,
	Key_2 = 0x32,
	Key_3 = 0x33,
	Key_4 = 0x34,
	Key_5 = 0x35,
	Key_6 = 0x36,
	Key_7 = 0x37,
	Key_8 = 0x38,
	Key_9 = 0x39,
	Key_SHIFT_SEMICOLON = 0x3A,
	Key_SEMICOLON = 0x3B,
	Key_SHIFT_COMMA = 0x3C,
	Key_EQUALS = 0x3D,
	Key_SHIFT_PERIOD = 0x3E,
	Key_SHIFT_SLASH = 0x3F,
	Key_SHIFT_2 = 0x40,
	Key_SHIFT_A = 0x41,
	Key_SHIFT_B = 0x42,
	Key_SHIFT_C = 0x43,
	Key_SHIFT_D = 0x44,
	Key_SHIFT_E = 0x45,
	Key_SHIFT_F = 0x46,
	Key_SHIFT_G = 0x47,
	Key_SHIFT_H = 0x48,
	Key_SHIFT_I = 0x49,
	Key_SHIFT_J = 0x4A,
	Key_SHIFT_K = 0x4B,
	Key_SHIFT_L = 0x4C,
	Key_SHIFT_M = 0x4D,
	Key_SHIFT_N = 0x4E,
	Key_SHIFT_O = 0x4F,
	Key_SHIFT_P = 0x50,
	Key_SHIFT_Q = 0x51,
	Key_SHIFT_R = 0x52,
	Key_SHIFT_S = 0x53,
	Key_SHIFT_T = 0x54,
	Key_SHIFT_U = 0x55,
	Key_SHIFT_V = 0x56,
	Key_SHIFT_W = 0x57,
	Key_SHIFT_X = 0x58,
	Key_SHIFT_Y = 0x59,
	Key_SHIFT_Z = 0x5A,
	Key_LBRACKET = 0x5B,
	Key_BACKSLASH = 0x5C,
	Key_RBRACKET = 0x5D,
	Key_SHIFT_6 = 0x5E,
	Key_SHIFT_MINUS = 0x5F,
	Key_GRAVE = 0x60,
	Key_A = 0x61,
	Key_B = 0x62,
	Key_C = 0x63,
	Key_D = 0x64,
	Key_E = 0x65,
	Key_F = 0x66,
	Key_G = 0x67,
	Key_H = 0x68,
	Key_I = 0x69,
	Key_J = 0x6A,
	Key_K = 0x6B,
	Key_L = 0x6C,
	Key_M = 0x6D,
	Key_N = 0x6E,
	Key_O = 0x6F,
	Key_P = 0x70,
	Key_Q = 0x71,
	Key_R = 0x72,
	Key_S = 0x73,
	Key_T = 0x74,
	Key_U = 0x75,
	Key_V = 0x76,
	Key_W = 0x77,
	Key_X = 0x78,
	Key_Y = 0x79,
	Key_Z = 0x7A,
	Key_SHIFT_LBRACKET = 0x7B,
	Key_SHIFT_BACKSLASH = 0x7C,
	Key_SHIFT_RBRACKET = 0x7D,
	Key_SHIFT_GRAVE = 0x7E,
	Key_ALT_A = 0x80,
	Key_ALT_B = 0x81,
	Key_ALT_C = 0x82,
	Key_ALT_D = 0x83,
	Key_ALT_E = 0x84,
	Key_ALT_F = 0x85,
	Key_ALT_G = 0x86,
	Key_ALT_H = 0x87,
	Key_ALT_I = 0x88,
	Key_ALT_J = 0x89,
	Key_ALT_K = 0x8A,
	Key_ALT_L = 0x8B,
	Key_ALT_M = 0x8C,
	Key_ALT_N = 0x8D,
	Key_ALT_O = 0x8E,
	Key_ALT_P = 0x8F,
	Key_ALT_Q = 0x90,
	Key_ALT_R = 0x91,
	Key_ALT_S = 0x92,
	Key_ALT_T = 0x93,
	Key_ALT_U = 0x94,
	Key_ALT_V = 0x95,
	Key_ALT_W = 0x96,
	Key_ALT_X = 0x97,
	Key_ALT_Y = 0x98,
	Key_ALT_Z = 0x99,
	Key_ALT_0 = 0x9A,
	Key_ALT_1 = 0x9B,
	Key_ALT_2 = 0x9C,
	Key_ALT_3 = 0x9D,
	Key_ALT_4 = 0x9E,
	Key_ALT_5 = 0x9F,
	Key_ALT_6 = 0xA0,
	Key_ALT_7 = 0xA1,
	Key_ALT_8 = 0xA2,
	Key_ALT_9 = 0xA3,
	Key_LEFT = 0xA4,
	Key_RIGHT = 0xA5,
	Key_UP = 0xA6,
	Key_DOWN = 0xA7,
	Key_INSERT = 0xA8,
	Key_DELETE = 0xA9,
	Key_HOME = 0xAA,
	Key_END = 0xAB,
	Key_PRIOR = 0xAC,
	Key_NEXT = 0xAD,
	Key_SYSRQ = 0xAE,
	Key_SCROLL = 0xAF,
	Key_PAUSE = 0xB0,
	Key_CAPITAL = 0xB1,
	Key_NUMPAD0 = 0xB2,
	Key_NUMPAD1 = 0xB3,
	Key_NUMPAD2 = 0xB4,
	Key_NUMPAD3 = 0xB5,
	Key_NUMPAD4 = 0xB6,
	Key_NUMPAD5 = 0xB7,
	Key_NUMPAD6 = 0xB8,
	Key_NUMPAD7 = 0xB9,
	Key_NUMPAD8 = 0xBA,
	Key_NUMPAD9 = 0xBB,
	Key_NUMLOCK = 0xBC,
	Key_DIVIDE = 0xBD,
	Key_MULTIPLY = 0xBE,
	Key_SUBTRACT = 0xBF,
	Key_ADD = 0xC0,
	Key_NUMPADENTER = 0xC1,
	Key_DECIMAL = 0xC2,
	Key_F1 = 0xC3,
	Key_F2 = 0xC4,
	Key_F3 = 0xC5,
	Key_F4 = 0xC6,
	Key_F5 = 0xC7,
	Key_F6 = 0xC8,
	Key_F7 = 0xC9,
	Key_F8 = 0xCA,
	Key_F9 = 0xCB,
	Key_F10 = 0xCC,
	Key_F11 = 0xCD,
	Key_F12 = 0xCE,
	Key_SHIFT_F1 = 0xCF,
	Key_SHIFT_F2 = 0xD0,
	Key_SHIFT_F3 = 0xD1,
	Key_SHIFT_F4 = 0xD2,
	Key_SHIFT_F5 = 0xD3,
	Key_SHIFT_F6 = 0xD4,
	Key_SHIFT_F7 = 0xD5,
	Key_SHIFT_F8 = 0xD6,
	Key_SHIFT_F9 = 0xD7,
	Key_SHIFT_F10 = 0xD8,
	Key_SHIFT_F11 = 0xD9,
	Key_SHIFT_F12 = 0xDA,
	Key_CONTROL_OR_ALT_SYSRQ = 0xE8,
	Key_CONTROL_SCROLL = 0xE9,
	Key_ALT_GRAVE = 0xEA,
	Key_SHIFT_PAUSE = 0xEB,
	Key_ALT_NUMPAD6 = 0xF0,
	Key_ALT_ADD = 0xF1,
	Key_ALT_NUMPAD1 = 0xF2,
	Key_ALT_NUMPAD2 = 0xF3,
	Key_ALT_NUMPAD3 = 0xF4,
	Key_ALT_NUMPAD0 = 0xF5,
	Key_ALT_DECIMAL = 0xF6,
	Key_ALT_OEM_102 = 0xF9,
	Key_ALT_F11 = 0xFA,
	Key_ALT_F12 = 0xFB,
	Key_SHIFT = 0xFD,
	Key_CONTROL = 0xFE,
	Key_ALT = 0xFF,
	Key_CONTROL_0 = 0x105,
	Key_CONTROL_1 = 0x106,
	Key_CONTROL_2 = 0x107,
	Key_CONTROL_3 = 0x108,
	Key_CONTROL_4 = 0x109,
	Key_CONTROL_5 = 0x10A,
	Key_CONTROL_6 = 0x10B,
	Key_CONTROL_7 = 0x10C,
	Key_CONTROL_8 = 0x10D,
	Key_CONTROL_9 = 0x10E,
	Key_CONTROL_A = 0x10F,
	Key_CONTROL_B = 0x110,
	Key_CONTROL_C = 0x111,
	Key_CONTROL_D = 0x112,
	Key_CONTROL_E = 0x113,
	Key_CONTROL_F = 0x114,
	Key_CONTROL_G = 0x115,
	Key_CONTROL_H = 0x116,
	Key_CONTROL_I = 0x117,
	Key_CONTROL_J = 0x118,
	Key_CONTROL_K = 0x119,
	Key_CONTROL_L = 0x11A,
	Key_CONTROL_M = 0x11B,
	Key_CONTROL_N = 0x11C,
	Key_CONTROL_O = 0x11D,
	Key_CONTROL_P = 0x11E,
	Key_CONTROL_Q = 0x11F,
	Key_CONTROL_R = 0x120,
	Key_CONTROL_S = 0x121,
	Key_CONTROL_T = 0x122,
	Key_CONTROL_U = 0x123,
	Key_CONTROL_V = 0x124,
	Key_CONTROL_W = 0x125,
	Key_CONTROL_X = 0x126,
	Key_CONTROL_Y = 0x127,
	Key_CONTROL_Z = 0x128,
	Key_CONTROL_END = 0x12C,
	Key_ALT_PERIOD = 0x12D,
};

enum SoundIndex
{
	Sound_RebelLaser = 0x4,
	Sound_RebelLaserTurbo = 0x5,
	Sound_EmpireLaser = 0x6,
	Sound_EmpireLaserTurbo = 0x7,
	Sound_IonCannon = 0x8,
	Sound_IonCannonTurbo = 0x9,
	Sound_TorpedoFire = 0xA,
	Sound_MissileFire = 0xB,
	Sound_RebelLaserStarship = 0xC,
	Sound_EmpireLaserStarship = 0xD,
	Sound_IonCannonStarship = 0xE,
	Sound_FalconLaser = 0xF,
	Sound_FalconLaserTurbo = 0x10,
	Sound_BombFire = 0x11,
	Sound_RocketFire = 0x12,
	Sound_MagPulseFire = 0x13,
	Sound_EmpireLaserChChChhh = 0x14,
	Sound_ChaffStart = 0x15,
	Sound_ChaffLoop = 0x16,
	Sound_FlareFire = 0x17,
	Sound_ExplosionBig1 = 0x18,
	Sound_ExplosionSml1 = 0x19,
	Sound_ExplosionSml2 = 0x1A,
	Sound_ExplosionSml3 = 0x1B,
	Sound_ExplosionSml4 = 0x1C,
	Sound_ExplosionSml5 = 0x1D,
	Sound_ExplosionSml6 = 0x1E,
	Sound_ExplosionSml7 = 0x1F,
	Sound_ExplosionSml8 = 0x20,
	Sound_ExplosionBreak1 = 0x21,
	Sound_ExplosionSparks1 = 0x22,
	Sound_ExplosionContainer1 = 0x23,
	Sound_ExplosionFighter1 = 0x24,
	Sound_ExplosionFreighter1 = 0x25,
	Sound_ExplosionStarship1 = 0x26,
	Sound_ExplosionStarship2 = 0x27,
	Sound_HitShield1 = 0x28,
	Sound_HitShield2 = 0x29,
	Sound_HitShield3 = 0x2A,
	Sound_HitInstruments1 = 0x2B,
	Sound_HitInstruments2 = 0x2C,
	Sound_HitHull1 = 0x2D,
	Sound_HitHull2 = 0x2E,
	Sound_HitHull3 = 0x2F,
	Sound_HitSystem1 = 0x30,
	Sound_HitSystem2 = 0x31,
	Sound_Collision1 = 0x32,
	Sound_Collision2 = 0x33,
	Sound_OtherShield1 = 0x34,
	Sound_OtherShield2 = 0x35,
	Sound_LaserImpactHull1 = 0x36,
	Sound_LaserTurboImpactHull1 = 0x37,
	Sound_IonImpactHull1 = 0x38,
	Sound_IonImpactHull2 = 0x39,
	Sound_AlarmEject = 0x3A,
	Sound_AlarmTime1 = 0x3B,
	Sound_Alarm = 0x3C,
	Sound_AlarmDanger = 0x3D,
	Sound_AlarmProximity = 0x3E,
	Sound_AlarmMissile1 = 0x3F,
	Sound_AlarmMissile2 = 0x40,
	Sound_AlarmMissile3 = 0x41,
	Sound_Ejected = 0x42,
	Sound_Beep1 = 0x43,
	Sound_Click1 = 0x44,
	Sound_Identify = 0x45,
	Sound_SetPowerLevel0 = 0x46,
	Sound_SetPowerLevel1 = 0x47,
	Sound_SetPowerLevel2 = 0x48,
	Sound_SetPowerLevel3 = 0x49,
	Sound_SetPowerLevel4 = 0x4A,
	Sound_TargetSelect = 0x4B,
	Sound_TargetTrack = 0x4C,
	Sound_TargetLock = 0x4D,
	Sound_TargetLinedUp = 0x4E,
	Sound_TractorFire = 0x4F,
	Sound_TractorLoop = 0x50,
	Sound_TractorLock = 0x51,
	Sound_JamFire = 0x52,
	Sound_JamLoop = 0x53,
	Sound_JamLock = 0x54,
	Sound_DecoyFire = 0x55,
	Sound_DecoyLoop = 0x56,
	Sound_EnergyFire = 0x57,
	Sound_EnergyLoop1 = 0x58,
	Sound_TractorHit = 0x59,
	Sound_TractorLoop2 = 0x5A,
	Sound_TractorGroan1 = 0x5B,
	Sound_TractorGroan2 = 0x5C,
	Sound_JamHitLoop = 0x5D,
	Sound_EngineIntXW = 0x5E,
	Sound_EngineIntYW = 0x5F,
	Sound_EngineIntAW = 0x60,
	Sound_EngineIntTI = 0x61,
	Sound_EngineIntAG = 0x62,
	Sound_EngineIntCort = 0x63,
	Sound_EngineIntFalc = 0x64,
	Sound_FlyByTI3D = 0x66,
	Sound_FlyByAG3D = 0x68,
	Sound_FlyByXW3D = 0x6A,
	Sound_FlyByYW3D = 0x6C,
	Sound_FlyByAW3D = 0x6E,
	Sound_FlyByCort3D = 0x70,
	Sound_EngineWashSD = 0x71,
	Sound_EngineWash = 0x72,
	Sound_HyperStartImp = 0x73,
	Sound_HyperZoomImp = 0x74,
	Sound_HyperEnd = 0x75,
	Sound_HyperStartReb = 0x76,
	Sound_HyperAbort = 0x77,
	Sound_S_Foil = 0x78,
	Sound_r2happy = 0x79,
	Sound_r2warn = 0x7A,
	Sound_r2danger = 0x7B,
	Sound_r2hit = 0x7C,
	Sound_r2repair = 0x7D,
	Sound_PlayerComm = 0x7E,
	Sound_PlayerUrgent = 0x7F,
	Sound_AlarmTime2 = 0x80,
	Sound_unused_0x81 = 0x81,
	Sound_unused_0x82 = 0x82,
	Sound_LandingGearDown = 0x83,
	Sound_LandingGearUp = 0x84,
	Sound_TurretMotorStart = 0x85,
	Sound_HyperBuoy = 0x86,
	Sound_EnterShip = 0x87,
	Sound_ReloadBig = 0x88,
	Sound_ReloadSmall = 0x89,
	Sound_Aaaaaa = 0x8A,
	Sound_MfTakeOff = 0x8B,
	Sound_HangarCrane1 = 0x8C,
	Sound_HangarCrane2 = 0x8D,
	Sound_HangarDroid1 = 0x8E,
	Sound_HangarDroid2 = 0x8F,
	Sound_HangarDroid3 = 0x90,
	Sound_HangarDroid4 = 0x91,
	Sound_ImperialShuttleBlastOff = 0x92,
	Sound_ImperialShuttleFlaps = 0x93,
	Sound_ImperialShuttleShutDown = 0x94,
	Sound_ImperialShuttleTakeOff = 0x95,
	Sound_ImperialSEngineLoop = 0x96,
	Sound_HngrAmb0 = 0x97,
	Sound_HngrAmb1 = 0x98,
	Sound_HngrAmb2 = 0x99,
	Sound_HngrAmb3 = 0x9A,
	Sound_HngrAmb4 = 0x9B,
	Sound_HngrAmb5 = 0x9C,
	Sound_HngrAmb6 = 0x9D,
	Sound_HngrAmb7 = 0x9E,
	Sound_HngrAmb8 = 0x9F,
	Sound_HngrAmb9 = 0xA0,
	Sound_Rebel_Pilot8_G4P8001 = 0xA3A,
	Sound_Rebel_Pilot8_G4P8002 = 0xA3B,
	Sound_Rebel_Pilot8_G4P8003 = 0xA3C,
	Sound_Rebel_Pilot8_G4P8004 = 0xA3D,
	Sound_Rebel_Pilot8_G4P8005 = 0xA3E,
	Sound_Rebel_Pilot8_G4P8006 = 0xA3F,
	Sound_unused_0xA40 = 0xA40,
	Sound_Rebel_Pilot8_G4P8008 = 0xA41,
	Sound_Rebel_Pilot8_G4P8009 = 0xA42,
	Sound_Rebel_Pilot8_G4P8010 = 0xA43,
	Sound_Rebel_Pilot8_G4P8011 = 0xA44,
	Sound_Rebel_Pilot8_G4P8012 = 0xA45,
	Sound_Rebel_Pilot8_G4P8013 = 0xA46,
	Sound_unused_0xA47 = 0xA47,
	Sound_Rebel_Pilot8_G4P8015 = 0xA48,
	Sound_Rebel_Pilot8_G4P8016 = 0xA49,
	Sound_Rebel_Pilot8_G4P8017 = 0xA4A,
	Sound_Rebel_Pilot8_G4P8018 = 0xA4B,
	Sound_Rebel_Pilot8_G4P8019 = 0xA4C,
	Sound_Rebel_Pilot8_G4P8020 = 0xA4D,
	Sound_unused_0xA4E = 0xA4E,
	Sound_Rebel_Pilot8_G4P8022 = 0xA4F,
	Sound_Rebel_Pilot8_G4P8023 = 0xA50,
	Sound_Rebel_Pilot8_G4P8024 = 0xA51,
	Sound_Rebel_Pilot8_G4P8025 = 0xA52,
	Sound_Rebel_Pilot8_G4P8026 = 0xA53,
	Sound_Rebel_Pilot8_G4P8027 = 0xA54,
	Sound_unused_0xA55 = 0xA55,
	Sound_unused_Used_To_Be_001 = 0xA56,
	Sound_devers_G0DE002 = 0xA57,
	Sound_devers_G0DE003 = 0xA58,
	Sound_devers_G0DE004 = 0xA59,
	Sound_devers_G0DE005 = 0xA5A,
	Sound_devers_G0DE006 = 0xA5B,
	Sound_devers_G0DE007 = 0xA5C,
	Sound_devers_G0DE008 = 0xA5D,
	Sound_devers_G0DE009 = 0xA5E,
	Sound_devers_G0DE010 = 0xA5F,
	Sound_devers_G0DE011 = 0xA60,
	Sound_devers_G0DE012 = 0xA61,
	Sound_devers_G0DE013 = 0xA62,
	Sound_devers_G0DE014 = 0xA63,
	Sound_devers_G0DE015 = 0xA64,
	Sound_devers_G0DE016 = 0xA65,
	Sound_devers_G0DE017 = 0xA66,
	Sound_devers_G0DE018 = 0xA67,
	Sound_devers_G0DE019 = 0xA68,
	Sound_devers_G0DE020 = 0xA69,
	Sound_devers_G0DE021 = 0xA6A,
	Sound_devers_G0DE022 = 0xA6B,
	Sound_devers_G0DE023 = 0xA6C,
	Sound_devers_G0DE024 = 0xA6D,
	Sound_devers_G0DE025 = 0xA6E,
	Sound_devers_G0DE026 = 0xA6F,
	Sound_devers_G0DE027 = 0xA70,
	Sound_devers_G0DE028 = 0xA71,
	Sound_devers_G0DE029 = 0xA72,
	Sound_devers_G0DE030 = 0xA73,
	Sound_devers_G0DE031 = 0xA74,
	Sound_devers_G0DE032 = 0xA75,
	Sound_devers_G0DE033 = 0xA76,
	Sound_devers_G0DE034 = 0xA77,
	Sound_devers_G0DE035 = 0xA78,
	Sound_devers_G0DE036 = 0xA79,
	Sound_devers_G0DE037 = 0xA7A,
	Sound_devers_G0DE038 = 0xA7B,
	Sound_devers_G0DE039 = 0xA7C,
	Sound_devers_G0DE040 = 0xA7D,
	Sound_devers_G0DE041 = 0xA7E,
	Sound_devers_G0DE042 = 0xA7F,
	Sound_devers_G0DE043 = 0xA80,
	Sound_devers_G0DE044 = 0xA81,
	Sound_devers_G0DE045 = 0xA82,
	Sound_devers_G0DE046 = 0xA83,
	Sound_devers_G0DE047 = 0xA84,
	Sound_devers_G0DE048 = 0xA85,
	Sound_devers_G0DE049 = 0xA86,
	Sound_devers_G0DE050 = 0xA87,
	Sound_devers_G0DE051 = 0xA88,
	Sound_devers_G0DE052 = 0xA89,
	Sound_devers_G0DE053 = 0xA8A,
	Sound_devers_G0DE054 = 0xA8B,
	Sound_devers_G0DE055 = 0xA8C,
	Sound_devers_G0DE056 = 0xA8D,
	Sound_devers_G0DE057 = 0xA8E,
	Sound_devers_G0DE058 = 0xA8F,
	Sound_devers_G0DE059 = 0xA90,
	Sound_devers_G0DE060 = 0xA91,
	Sound_devers_G0DE061 = 0xA92,
	Sound_devers_G0DE062 = 0xA93,
	Sound_devers_G0DE063 = 0xA94,
	Sound_devers_G0DE064 = 0xA95,
	Sound_devers_G0DE065 = 0xA96,
	Sound_devers_G0DE066 = 0xA97,
	Sound_devers_G0DE067 = 0xA98,
	Sound_devers_G0DE068 = 0xA99,
	Sound_devers_G0DE069 = 0xA9A,
	Sound_devers_G0DE070 = 0xA9B,
	Sound_devers_G0DE071 = 0xA9C,
	Sound_devers_G0DE072 = 0xA9D,
	Sound_devers_G0DE073 = 0xA9E,
	Sound_devers_G0DE074 = 0xA9F,
	Sound_devers_G0DE075 = 0xAA0,
	Sound_devers_G0DE076 = 0xAA1,
	Sound_devers_G0DE077 = 0xAA2,
	Sound_devers_G0DE078 = 0xAA3,
	Sound_devers_G0DE079 = 0xAA4,
	Sound_devers_G0DE080 = 0xAA5,
	Sound_devers_G0DE081 = 0xAA6,
	Sound_devers_G0DE082 = 0xAA7,
	Sound_devers_G0DE083 = 0xAA8,
	Sound_devers_G0DE084 = 0xAA9,
	Sound_devers_G0DE085 = 0xAAA,
	Sound_devers_G0DE086 = 0xAAB,
	Sound_devers_G0DE087 = 0xAAC,
	Sound_devers_G0DE088 = 0xAAD,
	Sound_devers_G0DE089 = 0xAAE,
	Sound_devers_G0DE090 = 0xAAF,
	Sound_devers_G0DE091 = 0xAB0,
	Sound_devers_G0DE092 = 0xAB1,
	Sound_devers_G0DE093 = 0xAB2,
	Sound_devers_G0DE094 = 0xAB3,
	Sound_devers_G0DE095 = 0xAB4,
	Sound_devers_G0DE096 = 0xAB5,
	Sound_devers_G0DE097 = 0xAB6,
	Sound_devers_G0DE098 = 0xAB7,
	Sound_devers_G0DE099 = 0xAB8,
	Sound_devers_G0DE100 = 0xAB9,
	Sound_devers_G0DE101 = 0xABA,
	Sound_devers_G0DE102 = 0xABB,
	Sound_devers_G0DE103 = 0xABC,
	Sound_devers_G0DE104 = 0xABD,
	Sound_devers_G0DE105 = 0xABE,
	Sound_devers_G0DE106 = 0xABF,
	Sound_devers_G0DE107 = 0xAC0,
	Sound_devers_G0DE108 = 0xAC1,
	Sound_devers_G0DE109 = 0xAC2,
	Sound_devers_G0DE110 = 0xAC3,
	Sound_devers_G0DE111 = 0xAC4,
	Sound_devers_G0DE112 = 0xAC5,
	Sound_devers_G0DE113 = 0xAC6,
	Sound_devers_G0DE114 = 0xAC7,
	Sound_devers_G0DE115 = 0xAC8,
	Sound_devers_G0DE116 = 0xAC9,
	Sound_devers_G0DE117 = 0xACA,
	Sound_devers_G0DE118 = 0xACB,
	Sound_devers_G0DE119 = 0xACC,
	Sound_devers_G0DE120 = 0xACD,
	Sound_devers_G0DE121 = 0xACE,
	Sound_devers_G0DE122 = 0xACF,
	Sound_devers_G0DE123 = 0xAD0,
	Sound_devers_G0DE124 = 0xAD1,
	Sound_devers_G0DE125 = 0xAD2,
	Sound_devers_G0DE126 = 0xAD3,
	Sound_devers_G0DE127 = 0xAD4,
	Sound_devers_G0DE128 = 0xAD5,
	Sound_devers_G0DE129 = 0xAD6,
	Sound_devers_G0DE130 = 0xAD7,
	Sound_devers_G0DE131 = 0xAD8,
	Sound_devers_G0DE132 = 0xAD9,
	Sound_devers_G0DE132_A = 0xADA,
	Sound_devers_G0DE132_B = 0xADB,
	Sound_devers_G0DE135 = 0xADC,
	Sound_devers_G0DE136 = 0xADD,
	Sound_devers_G0DE137 = 0xADE,
	Sound_devers_G0DE138 = 0xADF,
	Sound_devers_G0DE139 = 0xAE0,
	Sound_devers_G0DE140 = 0xAE1,
	Sound_devers_G0DE141 = 0xAE2,
	Sound_devers_G0DE142 = 0xAE3,
	Sound_devers_G0DE143 = 0xAE4,
	Sound_devers_G0DE144 = 0xAE5,
	Sound_devers_G0DE145 = 0xAE6,
	Sound_devers_G0DE146 = 0xAE7,
	Sound_devers_G0DE147 = 0xAE8,
	Sound_devers_G0DE148 = 0xAE9,
	Sound_devers_G0DE149 = 0xAEA,
	Sound_devers_G0DE150 = 0xAEB,
	Sound_devers_G0DE151 = 0xAEC,
	Sound_devers_G0DE152 = 0xAED,
	Sound_devers_G0DE153 = 0xAEE,
	Sound_devers_G0DE154 = 0xAEF,
	Sound_devers_G0DE155 = 0xAF0,
	Sound_devers_G0DE156 = 0xAF1,
	Sound_devers_G0DE157 = 0xAF2,
	Sound_devers_G0DE158 = 0xAF3,
	Sound_devers_G0DE159 = 0xAF4,
	Sound_unused_Used_To_Be_160 = 0xAF5,
	Sound_devers_G0DE161 = 0xAF6,
	Sound_devers_G0DE162 = 0xAF7,
	Sound_devers_G0DE163 = 0xAF8,
	Sound_devers_G0DE164 = 0xAF9,
	Sound_devers_G0DE165 = 0xAFA,
	Sound_devers_G0DE166 = 0xAFB,
	Sound_devers_G0DE167 = 0xAFC,
	Sound_devers_G0DE168 = 0xAFD,
	Sound_devers_G0DE169 = 0xAFE,
	Sound_devers_G0DE170 = 0xAFF,
	Sound_devers_G0DE171 = 0xB00,
	Sound_devers_G0DE172 = 0xB01,
	Sound_devers_G0DE173 = 0xB02,
	Sound_devers_G0DE174 = 0xB03,
	Sound_devers_G0DE175 = 0xB04,
	Sound_devers_G0DE176 = 0xB05,
	Sound_devers_G0DE177 = 0xB06,
	Sound_devers_G0DE178 = 0xB07,
	Sound_devers_G0DE179 = 0xB08,
	Sound_devers_G0DE180 = 0xB09,
	Sound_devers_G0DE181 = 0xB0A,
	Sound_devers_G0DE182 = 0xB0B,
	Sound_devers_G0DE183 = 0xB0C,
	Sound_devers_G0DE184 = 0xB0D,
	Sound_devers_G0DE185 = 0xB0E,
	Sound_devers_G0DE186 = 0xB0F,
	Sound_devers_G0DE187 = 0xB10,
	Sound_devers_G0DE188 = 0xB11,
	Sound_devers_G0DE189 = 0xB12,
	Sound_devers_G0DE190 = 0xB13,
	Sound_devers_G0DE191 = 0xB14,
	Sound_devers_G0DE192 = 0xB15,
};
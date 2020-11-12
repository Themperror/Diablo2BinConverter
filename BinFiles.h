#pragma once
#include <cstdint>


static const char* const ArenaNames[] =
{
	"Suicide",
	"PlayerKill",
	"PkPercent",
	"MonsterKill",
	"PlayerDeath",
	"PlayerDeathPercent",
	"MonsterDeath",
};

struct ArenaTxt
{
	uint32_t dwSuicide;
	uint32_t dwPlayerKill;
	uint32_t dwPKPercent;
	uint32_t dwMonsterKill;
	uint32_t dwPlayerDeath;
	uint32_t dwPlayerDeathPercent;
	uint32_t dwMonsterDeath;
};

#pragma pack(push,1)

struct LvlMazeTxt
{
	uint32_t dwLevelId;                //0x00
	uint32_t dwRooms[3];               //0x04
	uint32_t dwSizeX;                  //0x10
	uint32_t dwSizeY;                  //0x14
	uint32_t dwMerge;                  //0x18
};

struct LvlWarpTxt
{
	uint32_t dwLevelId;
	uint32_t dwSelectX;
	uint32_t dwSelectY;
	uint32_t dwSelectDX;
	uint32_t dwSelectDY;
	uint32_t dwExitWalkX;
	uint32_t dwExitWalkY;
	uint32_t dwOffsetX;
	uint32_t dwOffsetY;
	uint32_t dwLitVersion;
	uint32_t dwTiles;
	uint32_t dwDirection;
};


struct PropertiesTxt
{
	uint16_t wProp;                   //0x00
	uint8_t nSet[8];                 //0x02
	uint16_t wVal[7];                 //0x0A
	uint8_t nFunc[8];                //0x18
	uint16_t wStat[7];                //0x20
};

struct ItemsTxtStat
{
	uint32_t dwProp;                 //0x00
	uint32_t dwPar;                  //0x04
	int dwMin;					  //0x08
	int dwMax;			          //0x0C
};

/*
	Valid for Automagic.txt, MagicSuffix.txt, MagicPrefix.txt
*/
struct AutoMagicTxt
{
	char szName[31];                //0x00
	uint8_t _1;						//0x1F
	uint16_t wIndex;	                //0x20
	uint16_t wVersion;                  //0x22
	ItemsTxtStat hMods[3];          //0x24
	uint16_t wSpawnable;                //0x54
	uint16_t wTransformColor;           //0x56
	uint32_t dwLevel;                  //0x58
	uint32_t dwGroup;                  //0x5C
	uint32_t dwMaxLevel;               //0x60
	uint8_t nRare;                     //0x64
	uint8_t nLevelReq;                 //0x65
	uint8_t nClassSpecific;            //0x66
	uint8_t nClass;                    //0x67
	uint16_t wClassLevelReq;            //0x68
	uint16_t wIType[7];                 //0x6A
	uint16_t wEType[5];                 //0x78
	uint8_t bFrequency;                //0x82
	uint8_t _2;						//0x83
	uint32_t dwDivide;                 //0x84
	uint32_t dwMultiply;               //0x88
	uint32_t dwAdd;                    //0x8C
};


struct UniqueItemsTxt
{
	uint16_t _1;	                  //0x00
	char szName[34];              //0x02
	uint32_t dwVersion;              //0x24
	union
	{
		uint32_t dwCode;
		char szCode[4];
	};							  //0x28
	uint32_t dwUniqueItemFlags;      //0x2C
	uint32_t dwRarity;               //0x30
	uint16_t wLvl;                    //0x34
	uint16_t wLvlReq;                 //0x36
	uint8_t nChrTransform;           //0x38
	uint8_t nInvTransform;           //0x39
	char szFlippyFile[32];        //0x3A
	char szInvFile[34];           //0x5A
	uint32_t dwCostMult;             //0x7C
	uint32_t dwCostAdd;              //0x80
	uint16_t wDropSound;              //0x84
	uint16_t wUseSound;               //0x86
	uint32_t dwDropSfxFrame;         //0x88   
	ItemsTxtStat hStats[12];      //0x90
};

struct SetItemsTxt
{
	uint16_t wSetItemId;               //0x00
	char szName[32];               //0x02
	uint16_t _1;	                   //0x22
	uint32_t dwTblIndex;              //0x24
	union
	{
		uint32_t dwCode;
		char szCode[4];
	};							   //0x28
	uint32_t _2;	                   //0x2C
	uint16_t wLvl;                     //0x30
	uint16_t wLvlReq;                  //0x32
	uint32_t dwRarity;                //0x34
	uint32_t dwCostMult;              //0x38
	uint32_t dwCostAdd;               //0x3C
	uint8_t nChrTransform;            //0x40
	uint8_t nInvTransform;            //0x41
	char szFlippyFile[32];         //0x42
	char szInvFile[32];            //0x62
	uint16_t wDropSound;               //0x82
	uint16_t wUseSound;                //0x84
	uint8_t nDropSfxFrame;            //0x86
	uint8_t nAddFunc;                 //0x87
	ItemsTxtStat hStats[9];        //0x88
	ItemsTxtStat hGreenStats[10];   //0x118
};

struct RunesTxt
{
	char szName[64];					 //0x00
	char szRuneName[64];                 //0x40
	uint8_t bComplete;                      //0x80
	uint8_t bServer;                        //0x81
	uint32_t dwRwId;						 //0x82
	uint16_t dwIType[6];                     //0x86
	uint16_t dwEType[3];                     //0x92
	uint32_t dwRune[6];                     //0x98
	ItemsTxtStat hStats[7];              //0xB0
};

struct PetTypesTxt
{
	uint16_t pet_type; // 0x0
	struct {
		uint8_t warp : 1; // 0x4
		uint8_t range : 1; // 0x4
		uint8_t partysend : 1; // 0x4
		uint8_t unsummon : 1; // 0x4
		uint8_t automap : 1; // 0x4
		uint8_t drawhp : 1; // 0x4
	} dwFlags;
	uint8_t _pad[5];
	uint16_t group; // 0x8
	uint16_t basemax; // 0xa
	uint16_t name; // 0xc
	uint8_t icontype; // 0xe
	char baseicon[32]; // 0xf
	char micon1[32]; // 0x2f
	char micon2[32]; // 0x4f
	char micon3[32]; // 0x6f
	char micon4[32]; // 0x8f
	uint8_t _1[3];
	uint16_t mclass1; // 0xb2
	uint16_t mclass2; // 0xb4
	uint16_t mclass3; // 0xb6
	uint16_t mclass4; // 0xb8
};

/*
	Time-saving credit goes to Mnw1995
	http://d2mods.info/forum/viewtopic.php?f=8&t=61189
	Isn't simpler now?
*/

struct InventoryLayout //sizeof 0x14
{
	uint32_t dwLeft;		//0x00
	uint32_t dwRight;		//0x04
	uint32_t dwTop;		//0x08
	uint32_t dwBottom;		//0x0C
	union
	{
		struct
		{
			uint8_t nGridX;		//0x10
			uint8_t nGridY;		//0x11
		};
		struct
		{
			uint8_t nWidth;	//0x10
			uint8_t nHeight;	//0x11
		};
	};
	uint16_t _align;		//0x12
};

struct InventoryTxt //sizeof 0xF0
{
	InventoryLayout Inventory;		//0x00
	InventoryLayout Grid;			//0x14
	union
	{
		struct
		{
			InventoryLayout RightArm;		//0x28
			InventoryLayout Torso;			//0x3C
			InventoryLayout LeftArm;		//0x50
			InventoryLayout Head;			//0x64
			InventoryLayout Neck;			//0x78
			InventoryLayout RightHand;		//0x8C
			InventoryLayout LeftHand;		//0xA0
			InventoryLayout Belt;			//0xB4
			InventoryLayout Feet;			//0xC8
			InventoryLayout Gloves;			//0xDC
		};
		InventoryLayout hItem[9];
	};
};

struct BeltBox
{
	uint32_t dwBoxLeft;			//0x00
	uint32_t dwBoxRight;			//0x04
	uint32_t dwBoxTop;				//0x08
	uint32_t dwBoxBottom;			//0x0C
};

struct BeltsTxt //sizeof 0x108
{
	uint32_t _unusedName;			    //0x00 placeholder for name field
	uint32_t dwNumBoxes;               //0x04
	BeltBox hBox[16];				//0x08
};

struct AutomapTxt
{
	char szLevelName[16];            //0x00
	char szTileName[8];               //0x10
	uint8_t nStyle;                  //0x18
	uint8_t nStartSequence;            //0x19
	uint16_t wEndSequence;               //0x1A
	uint32_t dwCel1;                  //0x1C
	uint32_t dwCel2;                  //0x20
	uint32_t dwCel3;                  //0x24
	uint32_t dwCel4;                  //0x28
};

struct BodyLocsTxt
{
	union
	{
		uint32_t dwCode;               //0x00
		char szCode[4];               //0x00
	};
};

struct StatesTxt
{
	uint16_t wState;                  //0x00
	uint16_t wOverlay[4];               //0x02
	uint16_t wCastOverlay;               //0x0A
	uint16_t wRemoveOverlay;            //0x0C
	uint16_t wPrgOverlay;               //0x0E
	struct {
		uint8_t	bNosend : 1;	//1
		uint8_t	bAura : 1;	//2
		uint8_t	bHide : 1;	//3
		uint8_t	bTransform : 1;	//4
		uint8_t	bPgsv : 1;	//5
		uint8_t	bActive : 1;	//6
		uint8_t	bRemhit : 1;	//7
		uint8_t	bDamblue : 1;	//8
		uint8_t	bDamred : 1;	//9
		uint8_t	bAttblue : 1;	//10
		uint8_t	bAttred : 1;	//11
		uint8_t	bCurse : 1;	//12
		uint8_t	bCurable : 1;	//13
		uint8_t	bPlrstaydeath : 1;	//14
		uint8_t	bMonstaydeath : 1;	//15
		uint8_t	bBossstaydeath : 1;	//16
		uint8_t	bDisguise : 1;	//17
		uint8_t	bRestrict : 1;	//18
		uint8_t	bBlue : 1;	//19
		uint8_t	bArmblue : 1;	//20
		uint8_t	bRfblue : 1;	//21
		uint8_t	bRcblue : 1;	//22
		uint8_t	bRlblue : 1;	//23
		uint8_t	bRpblue : 1;	//24
		uint8_t	bStambarblue : 1;	//25
		uint8_t	bArmred : 1;	//26
		uint8_t	bRfred : 1;	//27
		uint8_t	bRcred : 1;	//28
		uint8_t	bRlred : 1;	//29
		uint8_t	bRpred : 1;	//30
		uint8_t	bExp : 1;	//31
		uint8_t	bShatter : 1;	//32
	} bStateFlags; //0x10
	struct {
		uint8_t	bLife : 1;	//1
		uint8_t	bUdead : 1;	//2
		uint8_t	bGreen : 1;	//3
		uint8_t	bNooverlays : 1;	//4
		uint8_t	bNoclear : 1;	//5
		uint8_t	bBossinv : 1;	//6
		uint8_t	bMeleeonly : 1;	//7
		uint8_t	bNotondead : 1;	//8
	} bStateFlagsEx; //0x14
	uint8_t _1[3];	//0x15
	uint16_t wStat;                     //0x18
	uint16_t wSetFunc;                  //0x1A
	uint16_t wRemFunc;                  //0x1C
	uint16_t wGroup;                  //0x1E
	uint8_t nColorPri;                  //0x20
	uint8_t nColorShift;               //0x21
	uint8_t nLightRGB[4];               //0x22
	uint16_t wOnSound;                  //0x26
	uint16_t wOffSound;                  //0x28
	uint16_t wItemType;                  //0x2A
	uint8_t nItemTrans;               //0x2C
	uint8_t nGfxType;                  //0x2D
	uint16_t wGfxClass;                  //0x2E
	uint16_t wCltEvent;                  //0x30
	uint16_t wCltEventFunc;               //0x32
	uint16_t wCltActiveFunc;            //0x34
	uint16_t wSrvActiveFunc;            //0x36
	uint16_t wSkill;                  //0x38
	uint16_t wMissile;                  //0x3A
};

struct ObjectTxt
{
	char szName[0x40];				//0x00
	wchar_t wszName[0x40];			//0x40
	uint8_t _1[4];						//0xC0
	uint8_t nSelectable0;				//0xC4
	uint8_t _2[0x87];					//0xC5
	uint8_t nOrientation;				//0x14C
	uint8_t _2b[0x19];					//0x14D
	uint8_t nSubClass;					//0x166
	uint8_t _3[0x11];					//0x167
	uint8_t nParm0;					//0x178
	uint8_t _4[0x39];					//0x179
	uint8_t nPopulateFn;				//0x1B2
	uint8_t nOperateFn;				//0x1B3
	uint8_t _5[8];						//0x1B4
	uint32_t nAutoMap;					//0x1BB
};

struct LevelsTxt
{
	uint16_t wLevelNo;
	uint8_t nPal;
	uint8_t nAct;
	uint8_t nTeleport;
	uint8_t nRain;
	uint8_t nMud;
	uint8_t nNoPer;
	uint8_t nIsInside;
	uint8_t nDrawEdges;
	uint16_t unk0x0A;
	uint32_t dwWarpDist;
	uint16_t wMonLvl1;
	uint16_t wMonLvl2;
	uint16_t wMonLvl3;
	uint16_t wMonLvl1Ex;
	uint16_t wMonLvl2Ex;
	uint16_t wMonLvl3Ex;
	uint32_t dwMonDen[3];
	uint8_t nMonUMin[3];
	uint8_t nMonUMax[3];
	uint8_t nMonWndr;
	uint8_t nMonSpcWalk;
	uint8_t nQuest;
	uint8_t nRangedSpawn;
	uint32_t dwNumMon;
	uint16_t wMon[25];
	uint16_t wNMon[25];
	uint16_t wUMon[25];
	uint16_t wCMon[4];
	uint16_t wCPct[4];
	uint16_t wCAmt[4];
	uint8_t nWaypoint;
	uint8_t nObjGroup[8];
	uint8_t nObjPrb[8];
	char szLevelName[40];
	char szLevelWarp[40];
	char szEntryFile[41];
	wchar_t wszLevelName[40];
	wchar_t wszLevelWarp[41];
	uint32_t dwThemes;
	uint32_t dwFloorFilter;
	uint32_t dwBlankScreen;
	uint32_t dwSoundEnv;
};

struct ItemStatCostTxt  //size 0x144
{
	uint16_t	wStat;				//0x00
	uint16_t 	_1;					//0x02
	struct {
		uint8_t	bSendOther : 1;			//1
		uint8_t	bSigned : 1;			//2
		uint8_t	bDamageRelated : 1;		//3
		uint8_t	bItemSpecific : 1;		//4
		uint8_t	bDirect : 1;			//5
		uint8_t	_1 : 1;					//6
		uint8_t    _2 : 1;					//7
		uint8_t    _3 : 1;					//8
		uint8_t    _4 : 1;					//9	
		uint8_t	bUpdateanimrate : 1;	//10
		uint8_t	bFmin : 1;				//11
		uint8_t	bFcallback : 1;			//12
		uint8_t	bSaved : 1;				//13
		uint8_t	bCsvsigned : 1;			//14
		uint8_t	_6 : 1;					//15
		uint8_t	_7 : 1;					//16
	} bItemStatFlags; 		 //0x04
	uint16_t 	_2;			  		 //0x06
	uint8_t	bSendBits;			//0x08
	uint8_t	bSendParamBits;		//0x09
	uint8_t	bCsvBits;			//0x0A
	uint8_t	bCsvParam;			//0x0B
	uint32_t	dwDivide;			//0x0C
	uint32_t	dwMultiply;			//0x10
	uint32_t	dwAdd;				//0x14
	uint8_t	bValShift;			//0x18
	uint8_t	bSaveBits;			//0x19
	uint8_t	b09SaveBits;		//0x1A
	uint8_t	_3;					//0x1B
	uint32_t	dwSaveAdd;			//0x1C
	uint32_t	dw09SaveAdd;		//0x20
	uint32_t	dwSaveParamBits;	//0x24
	uint32_t 	_4;					//0x28
	uint32_t	dwMinAccr;			//0x2C
	uint8_t	bEncode;			//0x30
	uint8_t	_5;					//0x31
	uint16_t	wMaxAtat;			//0x32
	uint16_t	wDescPriority;		//0x34
	uint8_t	bDescFunc;			//0x36
	uint8_t	bDescVal;			//0x37
	uint16_t	wDescStrPos;		//0x38
	uint16_t	wDescStrNeg;		//0x3A
	uint16_t	wDescStr2;			//0x3C
	uint16_t	wDGrp;				//0x3E
	uint8_t	bDGrpFunc;			//0x40
	uint8_t	bDGrpVal;			//0x41
	uint16_t	wDGrpStrPos;		//0x42
	uint16_t	wDGrpStrNeg;		//0x44
	uint16_t	wDGrpStr2;			//0x46
	uint16_t	wItemEvent1;		//0x48
	uint16_t	wItemEvent2;		//0x4A
	uint16_t	wItemEventFunc1;	//0x4C
	uint16_t	wItemEventFunc2;	//0x4E
	uint32_t	bKeepZero;			//0x50
	uint8_t	bOp;				//0x54
	uint8_t	bOpParam;			//0x55
	uint16_t	wOpBase;			//0x56
	uint16_t	wOpStat1;			//0x58
	uint16_t	wOpStat2;			//0x5A
	uint16_t	wOpStat3;			//0x5C
	uint8_t 	_Stuff[230];		//0x5E
};

struct MissilesTxt
{
	uint32_t dwId;                     //0x00
	uint32_t dwMissileFlags;            //0x04
	uint16_t wCltDoFunc;               //0x08
	uint16_t wCltHitFunc;               //0x0A
	uint16_t wSrvDoFunc;               //0x0C
	uint16_t wSrvHitFunc;               //0x0E
	uint16_t wSrvDmgFunc;               //0x10
	uint16_t wTravelSound;               //0x12
	uint16_t wHitSound;                  //0x14
	uint16_t wExplosionMissile;            //0x16
	uint16_t wSubMissile[3];            //0x18
	uint16_t wCltSubMissile[3];            //0x1E
	uint16_t wHitSubMissile[4];            //0x24
	uint16_t wCltHitSubMissile[4];         //0x2C
	uint16_t wProgSound;               //0x34
	uint16_t wProgOverlay;               //0x36
	uint32_t dwParam[5];               //0x38
	uint32_t dwHitPar[3];               //0x4C
	uint32_t dwCltParam[5];            //0x58
	uint32_t dwCltHitPar[3];            //0x6C
	uint32_t dwDmgParam[2];            //0x78
	uint32_t dwSrvCalc;               //0x80
	uint32_t dwCltCalc;               //0x84
	uint32_t dwHitCalc;               //0x88
	uint32_t dwCltHitCalc;               //0x8C
	uint32_t dwDmgCalc;               //0x90
	uint16_t wHitClass;                  //0x94
	uint16_t wRange;                  //0x96
	uint16_t wLevRange;                  //0x98
	uint8_t nVel;                     //0x9A
	uint8_t nVelLev;                  //0x9B
	uint16_t wMaxVel;                  //0x9C
	uint16_t wAccel;                  //0x9E
	uint16_t wAnimRate;                  //0xA0
	uint16_t wXoffset;                  //0xA2
	uint16_t wYoffset;                  //0xA4
	uint16_t wZoffset;                  //0xA6
	uint32_t dwHitFlags;               //0xA8
	uint16_t wResultFlags;               //0xAC
	uint16_t wKnockBack;               //0xAE
	uint32_t dwMinDamage;               //0xB0
	uint32_t dwMaxDamage;               //0xB4
	uint32_t dwMinLevDam[5];            //0xB8
	uint32_t dwMaxLevDam[5];            //0xCC
	uint32_t dwDmgSymPerCalc;            //0xE0
	uint32_t dwElemType;               //0xE4
	uint32_t dwElemMin;               //0xE8
	uint32_t dwElemMax;               //0xEC
	uint32_t dwMinElemLev[5];            //0xF0
	uint32_t dwMaxElemLev[5];            //0x104
	uint32_t dwElemDmgSymPerCalc;         //0x118
	uint32_t dwElemLen;               //0x11C
	uint32_t dwElemLevLen[3];            //0x120
	uint8_t unk0x12C;                  //0x12C
	uint8_t nSrcDamage;               //0x12D
	uint8_t nSrcMissDmg;               //0x12E
	uint8_t nHoly;                     //0x12F
	uint8_t nLight;                  //0x130
	uint8_t nFlicker;                  //0x131
	uint8_t nRGB[3];                  //0x132
	uint8_t nInitSteps;               //0x135
	uint8_t nActivate;                  //0x136
	uint8_t nLoopAnim;                  //0x137
	char szCelFile[64];               //0x138
	uint32_t dwAnimLen;               //0x178
	uint32_t dwRandStart;               //0x17C
	uint8_t nSubLoop;                  //0x180
	uint8_t nSubStart;                  //0x181
	uint8_t nSubStop;                  //0x182
	uint8_t nCollideType;               //0x183
	uint8_t nCollision;               //0x184
	uint8_t nClientCol;               //0x185
	uint8_t nCollideKill;               //0x186
	uint8_t nCollideFriend;            //0x187
	uint8_t nNextHit;                  //0x188
	uint8_t nNextDelay;               //0x189
	uint8_t nSize;                     //0x18A
	uint8_t nToHit;                  //0x18B
	uint8_t nAlwaysExplode;            //0x18C
	uint8_t nTrans;                  //0x18D
	uint16_t wQty;                     //0x18E
	uint32_t dwSpecialSetup;            //0x190
	uint16_t wSkill;                  //0x194
	uint8_t nHitShift;                  //0x196
	uint8_t unk0x197[5];               //0x197
	uint32_t dwDamageRate;               //0x19C
	uint8_t nNumDirections;            //0x1A0
	uint8_t nAnimSpeed;               //0x1A1
	uint8_t nLocalBlood;               //0x1A2
	uint8_t unk;                     //0x1A3
};

#pragma pack(pop)

struct DifficultyLevelsTxt //size 0x58
{
	uint32_t ResistPenalty;			//0x00
	uint32_t DeathExpPenalty;			//0x04
	uint32_t UberCodeOddsNorm;			//0x08
	uint32_t UberCodeOddsGood;			//0x0C
	uint32_t MonsterSkillBonus;		//0x10
	uint32_t MonsterFreezeDiv;			//0x14
	uint32_t MonsterColdDiv;			//0x18
	uint32_t AiCurseDiv;				//0x1C
	uint32_t UltraCodeOddsNorm;		//0x20
	uint32_t UltraCodeOddsGood;		//0x24
	uint32_t LifeStealDiv;				//0x28
	uint32_t ManaStealDiv;				//0x2C
	uint32_t UniqueDmgBonus;			//0x30
	uint32_t ChampionDmgBonus;			//0x34
	uint32_t HireableBossDmgPercent;	//0x38
	uint32_t MonsterCEDmgPercent;		//0x3C
	uint32_t StaticFieldMin;			//0x40
	uint32_t GambleRare;				//0x44
	uint32_t GambleSet;				//0x48
	uint32_t GambleUniq;				//0x4C
	uint32_t GambleUber;				//0x50
	uint32_t GambleUltra;				//0x54
};

struct CubeInputItem		//size (0x08)
{
	struct {
		uint8_t	bCodeFlag : 1;			//1
		uint8_t	bClassFlag : 1;			//2
		uint8_t	bAnyFlag : 1;				//3
		uint8_t	bSocketFlag : 1;			//4
		uint8_t	bNoEtherealFlag : 1;		//5
		uint8_t	bRepairFlag : 1;			//6
		uint8_t	bUniqueItemNameFlag : 1;	//7
		uint8_t	bUpgFlag : 1;				//8
	} bInputFlags; 				//0x00
	uint8_t	ItemType;			//0x01
	uint16_t	Item;				//0x02
	uint16_t	ItemID;				//0x04
	uint8_t	Quality;			//0x06
	uint8_t	Quantity;			//0x07
};

struct CubeOutputItem //size 0x54
{
	uint8_t	bItemFlags;			//0x00
	uint8_t	ItemType;			//0x01
	uint16_t	Item;				//0x02
	uint16_t	ItemID;				//0x04
	union
	{
		struct
		{
			uint8_t nQuality;
			uint8_t nQuantity;
		};
		struct
		{
			uint8_t nLevel;
			uint8_t nAct;
		};						   //for CUBE_OUTPUT_PORTAL
		uint16_t nParam;               //0x06
	};
	uint8_t	Type;				//0x08
	uint8_t	Lvl;				//0x09
	uint8_t	PLvl;				//0x0A
	uint8_t	ILvl;				//0x0B
	uint16_t	PrefixId[3];		//0x0C
	uint16_t	SuffixId[3];		//0x12
	struct {							//size 0x0C
		uint32_t	dwMod;				//0x00
		uint16_t	wModParam;			//0x04
		uint16_t	wModMin;			//0x06
		uint16_t	wModMax;			//0x08
		uint16_t	bModChance;			//0x0A
	} sMods[5]; 			//0x18	
};

struct CubeMainTxt		//size 0x148
{
	uint8_t	bEnabled;			//0x00
	uint8_t	bLadder;			//0x01
	uint8_t	bMindiff;			//0x02
	uint8_t	bClass;				//0x03
	uint8_t	bOp;				//0x04
	uint8_t	_1[3];				//0x05
	uint32_t	dwParam;			//0x08
	uint32_t	dwValue;			//0x0C
	uint16_t	bNuminputs;			//0x10
	uint16_t	wVersion;			//0x12
	CubeInputItem InputItem[7];	//0x14
	CubeOutputItem OutputItem[3];//0x4C
};

struct CharStatsTxt
{
	char	szwClass[32];	//0x0
	char	szClass[15];	//0x20
	uint8_t	bStr;	//0x30
	uint8_t	bDex;	//0x31
	uint8_t	bEne;	//0x32
	uint8_t	bVita;	//0x33
	uint8_t	bStamina;	//0x34
	uint8_t	bHpAdd;	//0x35
	uint8_t	bPercentStr;	//0x36
	uint8_t	bPercentInt;	//0x37
	uint8_t	bPercentDex;	//0x38
	uint8_t	bPercentVit;	//0x39
	uint8_t	bManaRegen;	//0x3A
	uint8_t 	_1;			//0x3B
	uint32_t	dwToHitFactor;	//0x3C
	uint8_t	bWalkVelocity;	//0x40
	uint8_t	bRunVelocity;	//0x41
	uint8_t	bRunDrain;	//0x42
	uint8_t	bLifePerLevel;	//0x43
	uint8_t	bStaminaPerLevel;	//0x44
	uint8_t	bManaPerLevel;	//0x45
	uint8_t	bLifePerVitality;	//0x46
	uint8_t	bStaminaPerVitality;	//0x47
	uint8_t	bManaPerMagic;	//0x48
	uint8_t	bBlockFactor;	//0x49
	uint8_t	_2[2];			//0x4A
	uint32_t	dwBaseWClass;	//0x4C
	uint8_t	bStatPerLevel;	//0x50
	uint8_t	_3;				//0x51
	uint16_t	wStrAllSkills;	//0x52
	uint16_t	wStrSkillTab1;	//0x54
	uint16_t	wStrSkillTab2;	//0x56
	uint16_t	wStrSkillTab3;	//0x58
	uint16_t	wStrClassOnly;	//0x5A
	uint32_t	dwItem1;	//0x5C
	uint8_t	bItem1loc;	//0x60
	uint8_t	bItem1count;	//0x61
	uint8_t	_4[2];			//0x62
	uint32_t	dwItem2;	//0x64
	uint8_t	bItem2loc;	//0x68
	uint8_t	bItem2count;	//0x69
	uint8_t	_5[2];			//0x6A
	uint32_t	dwItem3;	//0x6C
	uint8_t	bItem3loc;	//0x70
	uint8_t	bItem3count;	//0x71
	uint8_t	_6[2];			//0x72
	uint32_t	dwItem4;	//0x74
	uint8_t	bItem4loc;	//0x78
	uint8_t	bItem4count;	//0x79
	uint8_t	_7[2];			//0x7A
	uint32_t	dwItem5;	//0x7C
	uint8_t	bItem5loc;	//0x80
	uint8_t	bItem5count;	//0x81
	uint8_t	_8[2];			//0x82
	uint32_t	dwItem6;	//0x84
	uint8_t	bItem6loc;	//0x88
	uint8_t	bItem6count;	//0x89
	uint8_t	_9[2];			//0x8A
	uint32_t	dwItem7;	//0x8C
	uint8_t	bItem7loc;	//0x90
	uint8_t	bItem7count;	//0x91
	uint8_t	_10[2];			//0x92
	uint32_t	dwItem8;	//0x94
	uint8_t	bItem8loc;	//0x98
	uint8_t	bItem8count;	//0x99
	uint8_t	_11[2];			//0x9A
	uint32_t	dwItem9;	//0x9C
	uint8_t	bItem9loc;	//0xA0
	uint8_t	bItem9count;	//0xA1
	uint8_t	_12[2];			//0xA2
	uint32_t	dwItem10;	//0xA4
	uint8_t	bItem10loc;	//0xA8
	uint8_t	bItem10count;	//0xA9
	uint8_t	_13[2];			//0xAA
	uint16_t	wStartSkill;	//0xAC
	uint16_t	wSkill1;	//0xAE
	uint16_t	wSkill2;	//0xB0
	uint16_t	wSkill3;	//0xB2
	uint16_t	wSkill4;	//0xB4
	uint16_t	wSkill5;	//0xB6
	uint16_t	wSkill6;	//0xB8
	uint16_t	wSkill7;	//0xBA
	uint16_t	wSkill8;	//0xBC
	uint16_t	wSkill9;	//0xBE
	uint16_t	wSkill10;	//0xC0
};



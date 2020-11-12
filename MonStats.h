#pragma once
#include "util.h"


struct MonStatsTxt // size 0x1A8
{
	uint16_t	wId;						//0x00
	uint16_t	wBaseId;					//0x02
	uint16_t	wNextInClass;				//0x04
	uint16_t	wNameStr;					//0x06
	uint16_t	wDescStr;					//0x08
	uint16_t	_1a;						//0x0A
	struct {
		uint8_t	bisSpawn : 1;						//1
		uint8_t	bisMelee : 1;						//2
		uint8_t	bnoRatio : 1;						//3
		uint8_t	bOpenDoors : 1;					//4
		uint8_t	bSetBoss : 1;						//5
		uint8_t	bBossXfer : 1;					//6
		uint8_t	bBossXfer2 : 1;					//7
		uint8_t	bPrimeEvil : 1;					//8
		uint8_t	bNPC : 1;							//9
		uint8_t	bInteract : 1;					//10
		uint8_t	binTown : 1;						//11
		uint8_t	blUndead : 1;						//12
		uint8_t	bhUndead : 1;						//13
		uint8_t	bDemon : 1;						//14
		uint8_t	bFlying : 1;						//15
		uint8_t	bKillable : 1;					//16
		uint8_t	bSwitchAI : 1;					//17
		uint8_t	bNoMultiShot : 1;					//18
		uint8_t	bNeverCount : 1;					//19
		uint8_t	bPetIgnore : 1;					//20
		uint8_t	bDeathDmg : 1;					//21
		uint8_t	bGenericSpawn : 1;				//22
		uint8_t	bZoo : 1;							//23
		uint8_t	bPlaceSpawn : 1;					//24
		uint8_t	bInventory : 1;					//25
		uint8_t	bEnabled : 1;						//26
		uint8_t	bNoShldBlock : 1;					//27
		uint8_t	bNoAura : 1;						//28
		uint8_t	bRangedType : 1;					//29
	} dwFlags;								//0x0C
	uint32_t	dwCode;						//0x10
	uint16_t	wMonSound;					//0x14
	uint16_t	wUMonSound;					//0x16
	uint16_t	wMonStatsEx;				//0x18
	uint16_t	wMonProp;					//0x1A
	uint16_t	wMonType;					//0x1C
	uint16_t	wAI;						//0x1E
	uint16_t	wSpawn;						//0x20
	uint8_t		bSpawnX;					//0x22
	uint8_t		bSpawnY;					//0x23
	uint16_t	bSpawnMode;					//0x24
	uint16_t	wMinion1;					//0x26
	uint16_t	wMinion2;					//0x28
	uint16_t	_1;							//0x2A
	uint8_t		bPartyMin;					//0x2C
	uint8_t		bPartyMax;					//0x2D
	uint8_t		bRarity;					//0x2E
	uint8_t		bMinGrp;					//0x2F
	uint8_t		bMaxGrp;					//0x30
	uint8_t		bSparsePopulate;			//0x31
	uint16_t	wVelocity;					//0x32
	uint16_t	wRun;						//0x34
	uint16_t	_2;							//0x36
	uint16_t	_2b;						//0x38
	uint16_t	wMissA1;					//0x3A
	uint16_t	wMissA2;					//0x3C
	uint16_t	wMissS1;					//0x3E
	uint16_t	wMissS2;					//0x40
	uint16_t	wMissS3;					//0x42
	uint16_t	wMissS4;					//0x44
	uint16_t	wMissC;						//0x46
	uint16_t	wMissSQ;					//0x48
	uint16_t	_3;							//0x4A
	uint8_t		bAlign;						//0x4C
	uint8_t		bTransLvl;					//0x4D
	uint8_t		bThreat;					//0x4E
	uint8_t		bAIdel;						//0x4F
	uint8_t		bAIdel_N;					//0x50
	uint8_t		bAIdel_H;					//0x51
	uint8_t		bAiDist;					//0x52
	uint8_t		bAiDist_N;					//0x53
	uint16_t	bAiDist_H;					//0x54
	uint16_t	wAiP1;						//0x56
	uint16_t	wAiP1_N;					//0x58
	uint16_t	wAiP1_H;					//0x5A
	uint16_t	wAiP2;						//0x5C
	uint16_t	wAiP2_N;					//0x5E
	uint16_t	wAiP2_H;					//0x60
	uint16_t	wAiP3;						//0x62
	uint16_t	wAiP3_N;					//0x64
	uint16_t	wAiP3_H;					//0x66
	uint16_t	wAiP4;						//0x68
	uint16_t	wAiP4_N;					//0x6A
	uint16_t	wAiP4_H;					//0x6C
	uint16_t	wAiP5;						//0x6E
	uint16_t	wAiP5_N;					//0x70
	uint16_t	wAiP5_H;					//0x72
	uint16_t	wAiP6;						//0x74
	uint16_t	wAiP6_N;					//0x76
	uint16_t	wAiP6_H;					//0x78
	uint16_t	wAiP7;						//0x7A
	uint16_t	wAiP7_N;					//0x7C
	uint16_t	wAiP7_H;					//0x7E
	uint16_t	wAiP8;						//0x80
	uint16_t	wAiP8_N;					//0x82
	uint16_t	wAiP8_H;					//0x84
	uint16_t	wTreasureClass1;			//0x86
	uint16_t	wTreasureClass2;			//0x88
	uint16_t	wTreasureClass3;			//0x8A
	uint16_t	wTreasureClass4;			//0x8C
	uint16_t	wTreasureClass1_N;			//0x8E
	uint16_t	wTreasureClass2_N;			//0x90
	uint16_t	wTreasureClass3_N;			//0x92
	uint16_t	wTreasureClass4_N;			//0x94
	uint16_t	wTreasureClass1_H;			//0x96
	uint16_t	wTreasureClass2_H;			//0x98
	uint16_t	wTreasureClass3_H;			//0x9A
	uint16_t	wTreasureClass4_H;			//0x9C
	uint8_t		bTCQuestId;					//0x9E
	uint8_t		bTCQuestCP;					//0x9F
	uint8_t		bDrain;						//0xA0
	uint8_t		bDrain_N;					//0xA1
	uint8_t		bDrain_H;					//0xA2
	uint8_t		bToBlock;					//0xA3
	uint8_t		bToBlock_N;					//0xA4
	uint8_t		bToBlock_H;					//0xA5
	uint16_t	bCrit;						//0xA6
	uint16_t	wSkillDamage;				//0xA8
	uint16_t	wLevel;						//0xAA
	uint16_t	wLevel_N;					//0xAC
	uint16_t	wLevel_H;					//0xAE
	uint16_t	wMinHP;						//0xB0
	uint16_t	wMinHP_N;					//0xB2
	uint16_t	wMinHP_H;					//0xB4
	uint16_t	wMaxHP;						//0xB6
	uint16_t	wMaxHP_N;					//0xB8
	uint16_t	wMaxHP_H;					//0xBA
	uint16_t	wAC;						//0xBC
	uint16_t	wAC_N;						//0xBE
	uint16_t	wAC_H;						//0xC0
	uint16_t	wA1TH;						//0xC2
	uint16_t	wA1TH_N;					//0xC4
	uint16_t	wA1TH_H;					//0xC6
	uint16_t	wA2TH;						//0xC8
	uint16_t	wA2TH_N;					//0xCA
	uint16_t	wA2TH_H;					//0xCC
	uint16_t	wS1TH;						//0xCE
	uint16_t	wS1TH_N;					//0xD0
	uint16_t	wS1TH_H;					//0xD2
	uint16_t	wExp;						//0xD4
	uint16_t	wExp_N;						//0xD6
	uint16_t	wExp_H;						//0xD8
	uint16_t	wA1MinD;					//0xDA
	uint16_t	wA1MinD_N;					//0xDC
	uint16_t	wA1MinD_H;					//0xDE
	uint16_t	wA1MaxD;					//0xE0
	uint16_t	wA1MaxD_N;					//0xE2
	uint16_t	wA1MaxD_H;					//0xE4
	uint16_t	wA2MinD;					//0xE6
	uint16_t	wA2MinD_N;					//0xE8
	uint16_t	wA2MinD_H;					//0xEA
	uint16_t	wA2MaxD;					//0xEC
	uint16_t	wA2MaxD_N;					//0xEE
	uint16_t	wA2MaxD_H;					//0xF0
	uint16_t	wS1MinD;					//0xF2
	uint16_t	wS1MinD_N;					//0xF4
	uint16_t	wS1MinD_H;					//0xF6
	uint16_t	wS1MaxD;					//0xF8
	uint16_t	wS1MaxD_N;					//0xFA
	uint16_t	wS1MaxD_H;					//0xFC
	uint8_t		bEl1Mode;					//0xFE
	uint8_t		bEl2Mode;					//0xFF
	uint8_t		bEl3Mode;					//0x100
	uint8_t		bEl1Type;					//0x101
	uint8_t		bEl2Type;					//0x102
	uint8_t		bEl3Type;					//0x103
	uint8_t		bEl1Pct;					//0x104
	uint8_t		bEl1Pct_N;					//0x105
	uint8_t		bEl1Pct_H;					//0x106
	uint8_t		bEl2Pct;					//0x107
	uint8_t		bEl2Pct_N;					//0x108
	uint8_t		bEl2Pct_H;					//0x109
	uint8_t		bEl3Pct;					//0x10A
	uint8_t		bEl3Pct_N;					//0x10B
	uint8_t		bEl3Pct_H;					//0x10C
	uint8_t		_4;							//0x10D
	uint16_t	wEl1MinD;					//0x10E
	uint16_t	wEl1MinD_N;					//0x110
	uint16_t	wEl1MinD_H;					//0x112
	uint16_t	wEl2MinD;					//0x114
	uint16_t	wEl2MinD_N;					//0x116
	uint16_t	wEl2MinD_H;					//0x118
	uint16_t	wEl3MinD;					//0x11A
	uint16_t	wEl3MinD_N;					//0x11C
	uint16_t	wEl3MinD_H;					//0x11E
	uint16_t	wEl1MaxD;					//0x120
	uint16_t	wEl1MaxD_N;					//0x122
	uint16_t	wEl1MaxD_H;					//0x124
	uint16_t	wEl2MaxD;					//0x126
	uint16_t	wEl2MaxD_N;					//0x128
	uint16_t	wEl2MaxD_H;					//0x12A
	uint16_t	wEl3MaxD;					//0x12C
	uint16_t	wEl3MaxD_N;					//0x12E
	uint16_t	wEl3MaxD_H;					//0x130
	uint16_t	wEl1Dur;					//0x132
	uint16_t	wEl1Dur_N;					//0x134
	uint16_t	wEl1Dur_H;					//0x136
	uint16_t	wEl2Dur;					//0x138
	uint16_t	wEl2Dur_N;					//0x13A
	uint16_t	wEl2Dur_H;					//0x13C
	uint16_t	wEl3Dur;					//0x13E
	uint16_t	wEl3Dur_N;					//0x140
	uint16_t	wEl3Dur_H;					//0x142
	uint16_t	wResDmg;					//0x144
	uint16_t	wResDmg_N;					//0x146
	uint16_t	wResDmg_H;					//0x148
	uint16_t	wResMagic;					//0x14A
	uint16_t	wResMagic_N;				//0x14C
	uint16_t	wResMagic_H;				//0x14E
	uint16_t	wResFire;					//0x150
	uint16_t	wResFire_N;					//0x152
	uint16_t	wResFire_H;					//0x154
	uint16_t	wResLight;					//0x156
	uint16_t	wResLight_N;				//0x158
	uint16_t	wResLight_H;				//0x15A
	uint16_t	wResCold;					//0x15C
	uint16_t	wResCold_N;					//0x15E
	uint16_t	wResCold_H;					//0x160
	uint16_t	wResPoison;					//0x162
	uint16_t	wResPoison_N;				//0x164
	uint16_t	wResPoiosn_H;				//0x166
	int8_t		bColdEffect;				//0x168
	int8_t		bColdEffect_N;				//0x169
	int16_t		bColdEffect_H;				//0x16A
	uint32_t	dwSendSkills;				//0x16C
	uint16_t	wSkill1;					//0x170
	uint16_t	wSkill2;					//0x172
	uint16_t	wSkill3;					//0x174
	uint16_t	wSkill4;					//0x176
	uint16_t	wSkill5;					//0x178
	uint16_t	wSkill6;					//0x17A
	uint16_t	wSkill7;					//0x17C
	uint16_t	wSkill8;					//0x17E
	uint8_t		bSkillMode1;				//0x180
	uint8_t		bSkillMode2;				//
	uint8_t		bSkillMode3;				//
	uint8_t		bSkillMode4;				//
	uint8_t		bSkillMode5;				//
	uint8_t		bSkillMode6;				//
	uint8_t		bSkillMode7;				//
	uint8_t		bSkillMode8;				//
	uint16_t	wSkillLevel1;				//0x188
	uint16_t	wSkillLevel2;				//
	uint16_t	wSkillLevel3;				//
	uint16_t	wSkillLevel4;				//
	uint16_t	wSkillLevel5;				//
	uint16_t	wSkillLevel6;				//
	uint16_t	wSkillLevel7;				//
	uint16_t	wSkillLevel8;				//
	uint8_t		bSk1lvl;					//0x198
	uint8_t		bSk2lvl;					//0x199
	uint8_t		bSk3lvl;					//0x19A
	uint8_t		bSk4lvl;					//0x19B
	uint8_t		bSk5lvl;					//0x19C
	uint8_t		bSk6lvl;					//0x19D
	uint8_t		bSk7lvl;					//0x19E
	uint8_t		bSk8lvl;					//0x19F
	uint32_t	dwDamageRegen;				//0x1A0
	uint8_t		bSplEndDeath;				//0x1A4
	uint8_t		bSplGetModeChart;			//0x1A5
	uint8_t		bSplEndGeneric;				//0x1A6
	uint8_t		bSplClientEnd;				//0x1A7
};






std::string UnpackMonStats(char* data, size_t fileSize)
{
	std::stringstream stream;
	int amountRows = 0;
	memcpy(&amountRows, data, sizeof(int));

	if (fileSize - 4 != (sizeof(MonStatsTxt) * amountRows))
	{
		std::cout << "Data size doesnt match amount of items! Wanted: " << sizeof(MonStatsTxt) * amountRows << "  Got: " << fileSize - 4 << std::endl;
		PauseExit();
	}
	else
	{
		stream << "wId" << '\t';
		stream << "wBaseId" << '\t';
		stream << "wNextInClass" << '\t';
		stream << "wNameStr" << '\t';
		stream << "wDescStr" << '\t';
		stream << "_1a" << '\t';
		stream << "bisSpawn" << '\t';
		stream << "bisMelee" << '\t';
		stream << "bnoRatio" << '\t';
		stream << "bOpenDoors" << '\t';
		stream << "bSetBoss" << '\t';
		stream << "bBossXfer" << '\t';
		stream << "bBossXfer2" << '\t';
		stream << "bPrimeEvil" << '\t';
		stream << "bNPC" << '\t';
		stream << "bInteract" << '\t';
		stream << "binTown" << '\t';
		stream << "blUndead" << '\t';
		stream << "bhUndead" << '\t';
		stream << "bDemon" << '\t';
		stream << "bFlying" << '\t';
		stream << "bKillable" << '\t';
		stream << "bSwitchAI" << '\t';
		stream << "bNoMultiShot" << '\t';
		stream << "bNeverCount" << '\t';
		stream << "bPetIgnore" << '\t';
		stream << "bDeathDmg" << '\t';
		stream << "bGenericSpawn" << '\t';
		stream << "bZoo" << '\t';
		stream << "bPlaceSpawn" << '\t';
		stream << "bInventory" << '\t';
		stream << "bEnabled" << '\t';
		stream << "bNoShldBlock" << '\t';
		stream << "bNoAura" << '\t';
		stream << "bRangedType" << '\t';
		stream << "dwCode" << '\t';
		stream << "wMonSound" << '\t';
		stream << "wUMonSound" << '\t';
		stream << "wMonStatsEx" << '\t';
		stream << "wMonProp" << '\t';
		stream << "wMonType" << '\t';
		stream << "wAI" << '\t';
		stream << "wSpawn" << '\t';
		stream << "bSpawnX" << '\t';
		stream << "bSpawnY" << '\t';
		stream << "bSpawnMode" << '\t';
		stream << "wMinion1" << '\t';
		stream << "wMinion2" << '\t';
		stream << "_1" << '\t';
		stream << "bPartyMin" << '\t';
		stream << "bPartyMax" << '\t';
		stream << "bRarity" << '\t';
		stream << "bMinGrp" << '\t';
		stream << "bMaxGrp" << '\t';
		stream << "bSparsePopulate" << '\t';
		stream << "wVelocity" << '\t';
		stream << "wRun" << '\t';
		stream << "_2" << '\t';
		stream << "_2b" << '\t';
		stream << "wMissA1" << '\t';
		stream << "wMissA2" << '\t';
		stream << "wMissS1" << '\t';
		stream << "wMissS2" << '\t';
		stream << "wMissS3" << '\t';
		stream << "wMissS4" << '\t';
		stream << "wMissC" << '\t';
		stream << "wMissSQ" << '\t';
		stream << "_3" << '\t';
		stream << "bAlign" << '\t';
		stream << "bTransLvl" << '\t';
		stream << "bThreat" << '\t';
		stream << "bAIdel" << '\t';
		stream << "bAIdel_N" << '\t';
		stream << "bAIdel_H" << '\t';
		stream << "bAiDist" << '\t';
		stream << "bAiDist_N" << '\t';
		stream << "bAiDist_H" << '\t';
		stream << "wAiP1" << '\t';
		stream << "wAiP1_N" << '\t';
		stream << "wAiP1_H" << '\t';
		stream << "wAiP2" << '\t';
		stream << "wAiP2_N" << '\t';
		stream << "wAiP2_H" << '\t';
		stream << "wAiP3" << '\t';
		stream << "wAiP3_N" << '\t';
		stream << "wAiP3_H" << '\t';
		stream << "wAiP4" << '\t';
		stream << "wAiP4_N" << '\t';
		stream << "wAiP4_H" << '\t';
		stream << "wAiP5" << '\t';
		stream << "wAiP5_N" << '\t';
		stream << "wAiP5_H" << '\t';
		stream << "wAiP6" << '\t';
		stream << "wAiP6_N" << '\t';
		stream << "wAiP6_H" << '\t';
		stream << "wAiP7" << '\t';
		stream << "wAiP7_N" << '\t';
		stream << "wAiP7_H" << '\t';
		stream << "wAiP8" << '\t';
		stream << "wAiP8_N" << '\t';
		stream << "wAiP8_H" << '\t';
		stream << "wTreasureClass1" << '\t';
		stream << "wTreasureClass2" << '\t';
		stream << "wTreasureClass3" << '\t';
		stream << "wTreasureClass4" << '\t';
		stream << "wTreasureClass1_N" << '\t';
		stream << "wTreasureClass2_N" << '\t';
		stream << "wTreasureClass3_N" << '\t';
		stream << "wTreasureClass4_N" << '\t';
		stream << "wTreasureClass1_H" << '\t';
		stream << "wTreasureClass2_H" << '\t';
		stream << "wTreasureClass3_H" << '\t';
		stream << "wTreasureClass4_H" << '\t';
		stream << "bTCQuestId" << '\t';
		stream << "bTCQuestCP" << '\t';
		stream << "bDrain" << '\t';
		stream << "bDrain_N" << '\t';
		stream << "bDrain_H" << '\t';
		stream << "bToBlock" << '\t';
		stream << "bToBlock_N" << '\t';
		stream << "bToBlock_H" << '\t';
		stream << "bCrit" << '\t';
		stream << "wSkillDamage" << '\t';
		stream << "wLevel" << '\t';
		stream << "wLevel_N" << '\t';
		stream << "wLevel_H" << '\t';
		stream << "wMinHP" << '\t';
		stream << "wMinHP_N" << '\t';
		stream << "wMinHP_H" << '\t';
		stream << "wMaxHP" << '\t';
		stream << "wMaxHP_N" << '\t';
		stream << "wMaxHP_H" << '\t';
		stream << "wAC" << '\t';
		stream << "wAC_N" << '\t';
		stream << "wAC_H" << '\t';
		stream << "wA1TH" << '\t';
		stream << "wA1TH_N" << '\t';
		stream << "wA1TH_H" << '\t';
		stream << "wA2TH" << '\t';
		stream << "wA2TH_N" << '\t';
		stream << "wA2TH_H" << '\t';
		stream << "wS1TH" << '\t';
		stream << "wS1TH_N" << '\t';
		stream << "wS1TH_H" << '\t';
		stream << "wExp" << '\t';
		stream << "wExp_N" << '\t';
		stream << "wExp_H" << '\t';
		stream << "wA1MinD" << '\t';
		stream << "wA1MinD_N" << '\t';
		stream << "wA1MinD_H" << '\t';
		stream << "wA1MaxD" << '\t';
		stream << "wA1MaxD_N" << '\t';
		stream << "wA1MaxD_H" << '\t';
		stream << "wA2MinD" << '\t';
		stream << "wA2MinD_N" << '\t';
		stream << "wA2MinD_H" << '\t';
		stream << "wA2MaxD" << '\t';
		stream << "wA2MaxD_N" << '\t';
		stream << "wA2MaxD_H" << '\t';
		stream << "wS1MinD" << '\t';
		stream << "wS1MinD_N" << '\t';
		stream << "wS1MinD_H" << '\t';
		stream << "wS1MaxD" << '\t';
		stream << "wS1MaxD_N" << '\t';
		stream << "wS1MaxD_H" << '\t';
		stream << "bEl1Mode" << '\t';
		stream << "bEl2Mode" << '\t';
		stream << "bEl3Mode" << '\t';
		stream << "bEl1Type" << '\t';
		stream << "bEl2Type" << '\t';
		stream << "bEl3Type" << '\t';
		stream << "bEl1Pct" << '\t';
		stream << "bEl1Pct_N" << '\t';
		stream << "bEl1Pct_H" << '\t';
		stream << "bEl2Pct" << '\t';
		stream << "bEl2Pct_N" << '\t';
		stream << "bEl2Pct_H" << '\t';
		stream << "bEl3Pct" << '\t';
		stream << "bEl3Pct_N" << '\t';
		stream << "bEl3Pct_H" << '\t';
		stream << "_4" << '\t';
		stream << "wEl1MinD" << '\t';
		stream << "wEl1MinD_N" << '\t';
		stream << "wEl1MinD_H" << '\t';
		stream << "wEl2MinD" << '\t';
		stream << "wEl2MinD_N" << '\t';
		stream << "wEl2MinD_H" << '\t';
		stream << "wEl3MinD" << '\t';
		stream << "wEl3MinD_N" << '\t';
		stream << "wEl3MinD_H" << '\t';
		stream << "wEl1MaxD" << '\t';
		stream << "wEl1MaxD_N" << '\t';
		stream << "wEl1MaxD_H" << '\t';
		stream << "wEl2MaxD" << '\t';
		stream << "wEl2MaxD_N" << '\t';
		stream << "wEl2MaxD_H" << '\t';
		stream << "wEl3MaxD" << '\t';
		stream << "wEl3MaxD_N" << '\t';
		stream << "wEl3MaxD_H" << '\t';
		stream << "wEl1Dur" << '\t';
		stream << "wEl1Dur_N" << '\t';
		stream << "wEl1Dur_H" << '\t';
		stream << "wEl2Dur" << '\t';
		stream << "wEl2Dur_N" << '\t';
		stream << "wEl2Dur_H" << '\t';
		stream << "wEl3Dur" << '\t';
		stream << "wEl3Dur_N" << '\t';
		stream << "wEl3Dur_H" << '\t';
		stream << "wResDmg" << '\t';
		stream << "wResDmg_N" << '\t';
		stream << "wResDmg_H" << '\t';
		stream << "wResMagic" << '\t';
		stream << "wResMagic_N" << '\t';
		stream << "wResMagic_H" << '\t';
		stream << "wResFire" << '\t';
		stream << "wResFire_N" << '\t';
		stream << "wResFire_H" << '\t';
		stream << "wResLight" << '\t';
		stream << "wResLight_N" << '\t';
		stream << "wResLight_H" << '\t';
		stream << "wResCold" << '\t';
		stream << "wResCold_N" << '\t';
		stream << "wResCold_H" << '\t';
		stream << "wResPoison" << '\t';
		stream << "wResPoison_N" << '\t';
		stream << "wResPoiosn_H" << '\t';
		stream << "bColdEffect" << '\t';
		stream << "bColdEffect_N" << '\t';
		stream << "bColdEffect_H" << '\t';
		stream << "dwSendSkills" << '\t';
		stream << "wSkill1" << '\t';
		stream << "wSkill2" << '\t';
		stream << "wSkill3" << '\t';
		stream << "wSkill4" << '\t';
		stream << "wSkill5" << '\t';
		stream << "wSkill6" << '\t';
		stream << "wSkill7" << '\t';
		stream << "wSkill8" << '\t';
		stream << "wSkillMode1" << '\t';
		stream << "wSkillMode2" << '\t';
		stream << "wSkillMode3" << '\t';
		stream << "wSkillMode4" << '\t';
		stream << "wSkillMode5" << '\t';
		stream << "wSkillMode6" << '\t';
		stream << "wSkillMode7" << '\t';
		stream << "wSkillMode8" << '\t';
		stream << "wSkillLevel1" << '\t';
		stream << "wSkillLevel2" << '\t';
		stream << "wSkillLevel3" << '\t';
		stream << "wSkillLevel4" << '\t';
		stream << "wSkillLevel5" << '\t';
		stream << "wSkillLevel6" << '\t';
		stream << "wSkillLevel7" << '\t';
		stream << "wSkillLevel8" << '\t';
		stream << "bSk1lvl" << '\t';
		stream << "bSk2lvl" << '\t';
		stream << "bSk3lvl" << '\t';
		stream << "bSk4lvl" << '\t';
		stream << "bSk5lvl" << '\t';
		stream << "bSk6lvl" << '\t';
		stream << "bSk7lvl" << '\t';
		stream << "bSk8lvl" << '\t';
		stream << "dwDamageRegen" << '\t';
		stream << "bSplEndDeath" << '\t';
		stream << "bSplGetModeChart" << '\t';
		stream << "bSplEndGeneric" << '\t';
		stream << "bSplClientEnd" << '\t';


		stream << '\n';


		std::vector<MonStatsTxt> items;
		items.resize(amountRows);
		memcpy(items.data(), &data[4], sizeof(MonStatsTxt) * amountRows);
		for (auto& item : items)
		{
			stream << (uint32_t)item.wId << '\t';
			stream << (uint32_t)item.wBaseId << '\t';
			stream << (uint32_t)item.wNextInClass << '\t';
			stream << (uint32_t)item.wNameStr << '\t';
			stream << (uint32_t)item.wDescStr << '\t';
			stream << (uint32_t)item._1a << '\t';
			stream << (uint32_t)item.dwFlags.bisSpawn << '\t';
			stream << (uint32_t)item.dwFlags.bisMelee << '\t';
			stream << (uint32_t)item.dwFlags.bnoRatio << '\t';
			stream << (uint32_t)item.dwFlags.bOpenDoors << '\t';
			stream << (uint32_t)item.dwFlags.bSetBoss << '\t';
			stream << (uint32_t)item.dwFlags.bBossXfer << '\t';
			stream << (uint32_t)item.dwFlags.bBossXfer2 << '\t';
			stream << (uint32_t)item.dwFlags.bPrimeEvil << '\t';
			stream << (uint32_t)item.dwFlags.bNPC << '\t';
			stream << (uint32_t)item.dwFlags.bInteract << '\t';
			stream << (uint32_t)item.dwFlags.binTown << '\t';
			stream << (uint32_t)item.dwFlags.blUndead << '\t';
			stream << (uint32_t)item.dwFlags.bhUndead << '\t';
			stream << (uint32_t)item.dwFlags.bDemon << '\t';
			stream << (uint32_t)item.dwFlags.bFlying << '\t';
			stream << (uint32_t)item.dwFlags.bKillable << '\t';
			stream << (uint32_t)item.dwFlags.bSwitchAI << '\t';
			stream << (uint32_t)item.dwFlags.bNoMultiShot << '\t';
			stream << (uint32_t)item.dwFlags.bNeverCount << '\t';
			stream << (uint32_t)item.dwFlags.bPetIgnore << '\t';
			stream << (uint32_t)item.dwFlags.bDeathDmg << '\t';
			stream << (uint32_t)item.dwFlags.bGenericSpawn << '\t';
			stream << (uint32_t)item.dwFlags.bZoo << '\t';
			stream << (uint32_t)item.dwFlags.bPlaceSpawn << '\t';
			stream << (uint32_t)item.dwFlags.bInventory << '\t';
			stream << (uint32_t)item.dwFlags.bEnabled << '\t';
			stream << (uint32_t)item.dwFlags.bNoShldBlock << '\t';
			stream << (uint32_t)item.dwFlags.bNoAura << '\t';
			stream << (uint32_t)item.dwFlags.bRangedType << '\t';
			stream << (uint32_t)item.dwCode << '\t';
			stream << (uint32_t)item.wMonSound << '\t';
			stream << (uint32_t)item.wUMonSound << '\t';
			stream << (uint32_t)item.wMonStatsEx << '\t';
			stream << (uint32_t)item.wMonProp << '\t';
			stream << (uint32_t)item.wMonType << '\t';
			stream << (uint32_t)item.wAI << '\t';
			stream << (uint32_t)item.wSpawn << '\t';
			stream << (uint32_t)item.bSpawnX << '\t';
			stream << (uint32_t)item.bSpawnY << '\t';
			stream << (uint32_t)item.bSpawnMode << '\t';
			stream << (uint32_t)item.wMinion1 << '\t';
			stream << (uint32_t)item.wMinion2 << '\t';
			stream << (uint32_t)item._1 << '\t';
			stream << (uint32_t)item.bPartyMin << '\t';
			stream << (uint32_t)item.bPartyMax << '\t';
			stream << (uint32_t)item.bRarity << '\t';
			stream << (uint32_t)item.bMinGrp << '\t';
			stream << (uint32_t)item.bMaxGrp << '\t';
			stream << (uint32_t)item.bSparsePopulate << '\t';
			stream << (uint32_t)item.wVelocity << '\t';
			stream << (uint32_t)item.wRun << '\t';
			stream << (uint32_t)item._2 << '\t';
			stream << (uint32_t)item._2b << '\t';
			stream << (uint32_t)item.wMissA1 << '\t';
			stream << (uint32_t)item.wMissA2 << '\t';
			stream << (uint32_t)item.wMissS1 << '\t';
			stream << (uint32_t)item.wMissS2 << '\t';
			stream << (uint32_t)item.wMissS3 << '\t';
			stream << (uint32_t)item.wMissS4 << '\t';
			stream << (uint32_t)item.wMissC << '\t';
			stream << (uint32_t)item.wMissSQ << '\t';
			stream << (uint32_t)item._3 << '\t';
			stream << (uint32_t)item.bAlign << '\t';
			stream << (uint32_t)item.bTransLvl << '\t';
			stream << (uint32_t)item.bThreat << '\t';
			stream << (uint32_t)item.bAIdel << '\t';
			stream << (uint32_t)item.bAIdel_N << '\t';
			stream << (uint32_t)item.bAIdel_H << '\t';
			stream << (uint32_t)item.bAiDist << '\t';
			stream << (uint32_t)item.bAiDist_N << '\t';
			stream << (uint32_t)item.bAiDist_H << '\t';
			stream << (uint32_t)item.wAiP1 << '\t';
			stream << (uint32_t)item.wAiP1_N << '\t';
			stream << (uint32_t)item.wAiP1_H << '\t';
			stream << (uint32_t)item.wAiP2 << '\t';
			stream << (uint32_t)item.wAiP2_N << '\t';
			stream << (uint32_t)item.wAiP2_H << '\t';
			stream << (uint32_t)item.wAiP3 << '\t';
			stream << (uint32_t)item.wAiP3_N << '\t';
			stream << (uint32_t)item.wAiP3_H << '\t';
			stream << (uint32_t)item.wAiP4 << '\t';
			stream << (uint32_t)item.wAiP4_N << '\t';
			stream << (uint32_t)item.wAiP4_H << '\t';
			stream << (uint32_t)item.wAiP5 << '\t';
			stream << (uint32_t)item.wAiP5_N << '\t';
			stream << (uint32_t)item.wAiP5_H << '\t';
			stream << (uint32_t)item.wAiP6 << '\t';
			stream << (uint32_t)item.wAiP6_N << '\t';
			stream << (uint32_t)item.wAiP6_H << '\t';
			stream << (uint32_t)item.wAiP7 << '\t';
			stream << (uint32_t)item.wAiP7_N << '\t';
			stream << (uint32_t)item.wAiP7_H << '\t';
			stream << (uint32_t)item.wAiP8 << '\t';
			stream << (uint32_t)item.wAiP8_N << '\t';
			stream << (uint32_t)item.wAiP8_H << '\t';
			stream << (uint32_t)item.wTreasureClass1 << '\t';
			stream << (uint32_t)item.wTreasureClass2 << '\t';
			stream << (uint32_t)item.wTreasureClass3 << '\t';
			stream << (uint32_t)item.wTreasureClass4 << '\t';
			stream << (uint32_t)item.wTreasureClass1_N << '\t';
			stream << (uint32_t)item.wTreasureClass2_N << '\t';
			stream << (uint32_t)item.wTreasureClass3_N << '\t';
			stream << (uint32_t)item.wTreasureClass4_N << '\t';
			stream << (uint32_t)item.wTreasureClass1_H << '\t';
			stream << (uint32_t)item.wTreasureClass2_H << '\t';
			stream << (uint32_t)item.wTreasureClass3_H << '\t';
			stream << (uint32_t)item.wTreasureClass4_H << '\t';
			stream << (uint32_t)item.bTCQuestId << '\t';
			stream << (uint32_t)item.bTCQuestCP << '\t';
			stream << (uint32_t)item.bDrain << '\t';
			stream << (uint32_t)item.bDrain_N << '\t';
			stream << (uint32_t)item.bDrain_H << '\t';
			stream << (uint32_t)item.bToBlock << '\t';
			stream << (uint32_t)item.bToBlock_N << '\t';
			stream << (uint32_t)item.bToBlock_H << '\t';
			stream << (uint32_t)item.bCrit << '\t';
			stream << (uint32_t)item.wSkillDamage << '\t';
			stream << (uint32_t)item.wLevel << '\t';
			stream << (uint32_t)item.wLevel_N << '\t';
			stream << (uint32_t)item.wLevel_H << '\t';
			stream << (uint32_t)item.wMinHP << '\t';
			stream << (uint32_t)item.wMinHP_N << '\t';
			stream << (uint32_t)item.wMinHP_H << '\t';
			stream << (uint32_t)item.wMaxHP << '\t';
			stream << (uint32_t)item.wMaxHP_N << '\t';
			stream << (uint32_t)item.wMaxHP_H << '\t';
			stream << (uint32_t)item.wAC << '\t';
			stream << (uint32_t)item.wAC_N << '\t';
			stream << (uint32_t)item.wAC_H << '\t';
			stream << (uint32_t)item.wA1TH << '\t';
			stream << (uint32_t)item.wA1TH_N << '\t';
			stream << (uint32_t)item.wA1TH_H << '\t';
			stream << (uint32_t)item.wA2TH << '\t';
			stream << (uint32_t)item.wA2TH_N << '\t';
			stream << (uint32_t)item.wA2TH_H << '\t';
			stream << (uint32_t)item.wS1TH << '\t';
			stream << (uint32_t)item.wS1TH_N << '\t';
			stream << (uint32_t)item.wS1TH_H << '\t';
			stream << (uint32_t)item.wExp << '\t';
			stream << (uint32_t)item.wExp_N << '\t';
			stream << (uint32_t)item.wExp_H << '\t';
			stream << (uint32_t)item.wA1MinD << '\t';
			stream << (uint32_t)item.wA1MinD_N << '\t';
			stream << (uint32_t)item.wA1MinD_H << '\t';
			stream << (uint32_t)item.wA1MaxD << '\t';
			stream << (uint32_t)item.wA1MaxD_N << '\t';
			stream << (uint32_t)item.wA1MaxD_H << '\t';
			stream << (uint32_t)item.wA2MinD << '\t';
			stream << (uint32_t)item.wA2MinD_N << '\t';
			stream << (uint32_t)item.wA2MinD_H << '\t';
			stream << (uint32_t)item.wA2MaxD << '\t';
			stream << (uint32_t)item.wA2MaxD_N << '\t';
			stream << (uint32_t)item.wA2MaxD_H << '\t';
			stream << (uint32_t)item.wS1MinD << '\t';
			stream << (uint32_t)item.wS1MinD_N << '\t';
			stream << (uint32_t)item.wS1MinD_H << '\t';
			stream << (uint32_t)item.wS1MaxD << '\t';
			stream << (uint32_t)item.wS1MaxD_N << '\t';
			stream << (uint32_t)item.wS1MaxD_H << '\t';
			stream << (uint32_t)item.bEl1Mode << '\t';
			stream << (uint32_t)item.bEl2Mode << '\t';
			stream << (uint32_t)item.bEl3Mode << '\t';
			stream << (uint32_t)item.bEl1Type << '\t';
			stream << (uint32_t)item.bEl2Type << '\t';
			stream << (uint32_t)item.bEl3Type << '\t';
			stream << (uint32_t)item.bEl1Pct << '\t';
			stream << (uint32_t)item.bEl1Pct_N << '\t';
			stream << (uint32_t)item.bEl1Pct_H << '\t';
			stream << (uint32_t)item.bEl2Pct << '\t';
			stream << (uint32_t)item.bEl2Pct_N << '\t';
			stream << (uint32_t)item.bEl2Pct_H << '\t';
			stream << (uint32_t)item.bEl3Pct << '\t';
			stream << (uint32_t)item.bEl3Pct_N << '\t';
			stream << (uint32_t)item.bEl3Pct_H << '\t';
			stream << (uint32_t)item._4 << '\t';
			stream << (uint32_t)item.wEl1MinD << '\t';
			stream << (uint32_t)item.wEl1MinD_N << '\t';
			stream << (uint32_t)item.wEl1MinD_H << '\t';
			stream << (uint32_t)item.wEl2MinD << '\t';
			stream << (uint32_t)item.wEl2MinD_N << '\t';
			stream << (uint32_t)item.wEl2MinD_H << '\t';
			stream << (uint32_t)item.wEl3MinD << '\t';
			stream << (uint32_t)item.wEl3MinD_N << '\t';
			stream << (uint32_t)item.wEl3MinD_H << '\t';
			stream << (uint32_t)item.wEl1MaxD << '\t';
			stream << (uint32_t)item.wEl1MaxD_N << '\t';
			stream << (uint32_t)item.wEl1MaxD_H << '\t';
			stream << (uint32_t)item.wEl2MaxD << '\t';
			stream << (uint32_t)item.wEl2MaxD_N << '\t';
			stream << (uint32_t)item.wEl2MaxD_H << '\t';
			stream << (uint32_t)item.wEl3MaxD << '\t';
			stream << (uint32_t)item.wEl3MaxD_N << '\t';
			stream << (uint32_t)item.wEl3MaxD_H << '\t';
			stream << (uint32_t)item.wEl1Dur << '\t';
			stream << (uint32_t)item.wEl1Dur_N << '\t';
			stream << (uint32_t)item.wEl1Dur_H << '\t';
			stream << (uint32_t)item.wEl2Dur << '\t';
			stream << (uint32_t)item.wEl2Dur_N << '\t';
			stream << (uint32_t)item.wEl2Dur_H << '\t';
			stream << (uint32_t)item.wEl3Dur << '\t';
			stream << (uint32_t)item.wEl3Dur_N << '\t';
			stream << (uint32_t)item.wEl3Dur_H << '\t';
			stream << (uint32_t)item.wResDmg << '\t';
			stream << (uint32_t)item.wResDmg_N << '\t';
			stream << (uint32_t)item.wResDmg_H << '\t';
			stream << (uint32_t)item.wResMagic << '\t';
			stream << (uint32_t)item.wResMagic_N << '\t';
			stream << (uint32_t)item.wResMagic_H << '\t';
			stream << (uint32_t)item.wResFire << '\t';
			stream << (uint32_t)item.wResFire_N << '\t';
			stream << (uint32_t)item.wResFire_H << '\t';
			stream << (uint32_t)item.wResLight << '\t';
			stream << (uint32_t)item.wResLight_N << '\t';
			stream << (uint32_t)item.wResLight_H << '\t';
			stream << (uint32_t)item.wResCold << '\t';
			stream << (uint32_t)item.wResCold_N << '\t';
			stream << (uint32_t)item.wResCold_H << '\t';
			stream << (uint32_t)item.wResPoison << '\t';
			stream << (uint32_t)item.wResPoison_N << '\t';
			stream << (uint32_t)item.wResPoiosn_H << '\t';
			stream << (int32_t)item.bColdEffect << '\t';
			stream << (int32_t)item.bColdEffect_N << '\t';
			stream << (int32_t)(int8_t)item.bColdEffect_H << '\t';
			stream << (uint32_t)item.dwSendSkills << '\t';
			stream << (uint32_t)item.wSkill1 << '\t';
			stream << (uint32_t)item.wSkill2 << '\t';
			stream << (uint32_t)item.wSkill3 << '\t';
			stream << (uint32_t)item.wSkill4 << '\t';
			stream << (uint32_t)item.wSkill5 << '\t';
			stream << (uint32_t)item.wSkill6 << '\t';
			stream << (uint32_t)item.wSkill7 << '\t';
			stream << (uint32_t)item.wSkill8 << '\t';
			stream << (uint32_t)item.bSkillMode1 << '\t';
			stream << (uint32_t)item.bSkillMode2 << '\t';
			stream << (uint32_t)item.bSkillMode3 << '\t';
			stream << (uint32_t)item.bSkillMode4 << '\t';
			stream << (uint32_t)item.bSkillMode5 << '\t';
			stream << (uint32_t)item.bSkillMode6 << '\t';
			stream << (uint32_t)item.bSkillMode7 << '\t';
			stream << (uint32_t)item.bSkillMode8 << '\t';
			stream << (uint32_t)item.wSkillLevel1 << '\t';
			stream << (uint32_t)item.wSkillLevel2 << '\t';
			stream << (uint32_t)item.wSkillLevel3 << '\t';
			stream << (uint32_t)item.wSkillLevel4 << '\t';
			stream << (uint32_t)item.wSkillLevel5 << '\t';
			stream << (uint32_t)item.wSkillLevel6 << '\t';
			stream << (uint32_t)item.wSkillLevel7 << '\t';
			stream << (uint32_t)item.wSkillLevel8 << '\t';
			stream << (uint32_t)item.bSk1lvl << '\t';
			stream << (uint32_t)item.bSk2lvl << '\t';
			stream << (uint32_t)item.bSk3lvl << '\t';
			stream << (uint32_t)item.bSk4lvl << '\t';
			stream << (uint32_t)item.bSk5lvl << '\t';
			stream << (uint32_t)item.bSk6lvl << '\t';
			stream << (uint32_t)item.bSk7lvl << '\t';
			stream << (uint32_t)item.bSk8lvl << '\t';
			stream << (uint32_t)item.dwDamageRegen << '\t';
			stream << (uint32_t)item.bSplEndDeath << '\t';
			stream << (uint32_t)item.bSplGetModeChart << '\t';
			stream << (uint32_t)item.bSplEndGeneric << '\t';
			stream << (uint32_t)item.bSplClientEnd << '\t';



			stream << '\n';
		}
		return stream.str();

	}
	return stream.str();
}
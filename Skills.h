#pragma once
#include "util.h"


struct SkillsTxt //size 0x23C
{
	uint32_t				wSkillId; 				//0x00
	struct
	{
		uint8_t				bDecquant : 1;			//0
		uint8_t				bLob : 1;				//1
		uint8_t				bProgressive : 1;		//2
		uint8_t				bFinishing : 1;			//3
		uint8_t				bPassive : 1;			//4
		uint8_t				bAura : 1;				//5
		uint8_t				bPeriodic : 1;			//6
		uint8_t				bPrgStack : 1;			//7
		uint8_t				bInTown : 1;			//8
		uint8_t				bKick : 1;				//9
		uint8_t				bInGame : 1;			//10
		uint8_t				bRepeat : 1;			//11
		uint8_t				bStSuccessOnly : 1;		//12
		uint8_t				bStSoundDelay : 1;		//13
		uint8_t				bWeaponSnd : 1;			//14
		uint8_t				bImmediate : 1;			//15
		uint8_t				bNoAmmo : 1;			//16
		uint8_t				bEnhanceable : 1;		//17
		uint8_t				bDurability : 1;		//18
		uint8_t				bUseAttackRating : 1;	//19
		uint8_t				bTargetableOnly : 1;	//20
		uint8_t				bSearchEnemyXY : 1;		//21
		uint8_t				bSearchEnemyNear : 1;	//22
		uint8_t				bSearchOpenXY : 1;		//23
		uint8_t				bTargetCorpse : 1;		//24
		uint8_t				bTargetPet : 1;			//25
		uint8_t				bTargetAlly : 1;		//26
		uint8_t				bTargetItem : 1;		//27
		uint8_t				bAttackNoMana : 1;		//28
		uint8_t				bItemTgtDo : 1;			//29
		uint8_t				bLeftSkill : 1;			//30
		uint8_t				bInterrupt : 1;			//31
		uint8_t				bTgtPlaceCheck : 1;		//32
		uint8_t				bItemCheckStart : 1;	//33
		uint8_t				bItemCltCheckStart : 1;	//34
		uint8_t				bGeneral : 1;			//35
		uint8_t				bScroll : 1;			//36
		uint8_t				bUseManaOnDo : 1;		//37
		uint8_t				bWarp : 1;				//38
	} dwFlags;										//0x04 (5 uint8_ts)
	uint32_t				bClassId;				//0x0C
	uint8_t					bAnim;					//0x10
	uint8_t					bMonAnim;				//0x11
	uint8_t					bSeqTrans;				//0x12
	uint8_t					bSeqNum;				//0x13
	uint8_t					bRange;					//0x14
	uint8_t					bSelectProc;			//0x15
	uint8_t					bSeqInput;				//0x16
	uint8_t					_1;						//0x17
	uint16_t				wITypeA1;				//0x18
	uint16_t				wITypeA2;				//0x1A
	uint16_t				wITypeA3;				//0x1C
	uint16_t				wITypeB1;				//0x1E
	uint16_t				wITypeB2;				//0x20
	uint16_t				wITypeB3;				//0x22
	uint16_t				wETypeA1;				//0x24
	uint16_t				wETypeA2;				//0x26
	uint16_t				wETypeB1;				//0x28
	uint16_t				wETypeB2;				//0x2A
	uint16_t				wSrvStartFunc;			//0x2C
	uint16_t				wSrvDoFunc;				//0x2E
	uint16_t				wSrvPrgFunc1;			//0x30
	uint16_t				wSrvPrgFunc2;			//0x32
	uint16_t				wSrvPrgFunc3;			//0x34
	uint16_t				_2;						//0x36
	uint32_t				dwPrgCalc1;				//0x38
	uint32_t				dwPrgCalc2;				//0x3C
	uint32_t				dwPrgCalc3;				//0x40
	uint16_t				bPrgDamage;				//0x44
	uint16_t				wSrvMissile;			//0x46
	uint16_t				wSrvMissileA;			//0x48
	uint16_t				wSrvMissileB;			//0x4A
	uint16_t				wSrvMissileC;			//0x4C
	uint16_t				wSrvOverlay;			//0x4E
	uint32_t				dwAuraFilter;			//0x50
	uint16_t				wAuraStat1;				//0x54
	uint16_t				wAuraStat2;				//0x56
	uint16_t				wAuraStat3;				//0x58
	uint16_t				wAuraStat4;				//0x5A
	uint16_t				wAuraStat5;				//0x5C
	uint16_t				wAuraStat6;				//0x5E
	uint32_t				dwAuraLenCalc;			//0x60
	uint32_t				dwAuraRangeCalc;		//0x64
	uint32_t				dwAuraStatCalc1;		//0x68
	uint32_t				dwAuraStatCalc2;		//0x6C
	uint32_t				dwAuraStatCalc3;		//0x70
	uint32_t				dwAuraStatCalc4;		//0x74
	uint32_t				dwAuraStatCalc5;		//0x78
	uint32_t				dwAuraStatCalc6;		//0x7C
	uint16_t				wAuraState;				//0x80
	uint16_t				wAuraTargetState;		//0x82
	uint16_t				wAuraEvent1;			//0x84
	uint16_t				wAuraEvent2;			//0x86
	uint16_t				wAuraEvent3;			//0x88
	uint16_t				wAuraEventFunc1;		//0x8A
	uint16_t				wAuraEventFunc2;		//0x8C
	uint16_t				wAuraEventFunc3;		//0x8E
	uint16_t				wAuraTgtEvent;			//0x90
	uint16_t				wAuraTgtEventFunc;		//0x92
	uint16_t				wPassiveState;			//0x94
	uint16_t				wPassiveiType;			//0x96
	uint16_t				wPassiveStat1;			//0x98
	uint16_t				wPassiveStat2;			//0x9A
	uint16_t				wPassiveStat3;			//0x9C
	uint16_t				wPassiveStat4;			//0x9E
	uint16_t				wPassiveStat5;			//0xA0
	uint16_t				_3;						//0xA2
	uint32_t				dwPassiveCalc1;			//0xA4
	uint32_t				dwPassiveCalc2;			//0xA8
	uint32_t				dwPassiveCalc3;			//0xAC
	uint32_t				dwPassiveCalc4;			//0xB0
	uint32_t				dwPassiveCalc5;			//0xB4
	uint16_t				wPassiveEvent;			//0xB8
	uint16_t				wPassiveEventFunc;		//0xBA
	uint16_t				wSummon;				//0xBC
	uint8_t					wPetType;				//0xBE
	uint8_t					bSumMode;				//0xBF
	uint32_t				dwPetMax;				//0xC0
	uint16_t				wSumSkill1;				//0xC4
	uint16_t				wSumSkill2;				//0xC6
	uint16_t				wSumSkill3;				//0xC8
	uint16_t				wSumSkill4;				//0xCA
	uint16_t				wSumSkill5;				//0xCC
	uint16_t				_4;						//0xCE
	uint32_t				dwSumSkCalc1;			//0xD0
	uint32_t				dwSumSkCalc2;			//0xD4
	uint32_t				dwSumSkCalc3;			//0xD8
	uint32_t				dwSumSkCalc4;			//0xDC
	uint32_t				dwSumSkCalc5;			//0xE0
	uint16_t				wSumUMod;				//0xE4
	uint16_t				wSumOverlay;			//0xE6
	uint16_t				wCltMissile;			//0xE8
	uint16_t				wCltMissileA;			//0xEA
	uint16_t				wCltMissileB;			//0xEC
	uint16_t				wCltMissileC;			//0xEE
	uint16_t				wCltMissileD;			//0xF0
	uint16_t				wCltStFunc;				//0xF2
	uint16_t				wCltDoFunc;				//0xF4
	uint16_t				wCltPrgFunc1;			//0xF6
	uint16_t				wCltPrgFunc2;			//0xF8
	uint16_t				wCltPrgFunc3;			//0xFA
	uint16_t				wStSound;				//0xFC
	uint16_t				_5;						//0xFE
	uint16_t				wDoSound;				//0x100
	uint16_t				wDoSoundA;				//0x102
	uint16_t				wDoSoundB;				//0x104
	uint16_t				wCastOverlay;			//0x106
	uint16_t				wTgtOverlay;			//0x108
	uint16_t				wTgtSound;				//0x10A
	uint16_t				wPrgOverlay;			//0x10C
	uint16_t				wPrgSound;				//0x10E
	uint16_t				wCltOverlayA;			//0x110
	uint16_t				wCltOverlayB;			//0x112
	uint32_t				dwCltCalc1;				//0x114
	uint32_t				dwCltCalc2;				//0x118
	uint32_t				dwCltCalc3;				//0x11C
	uint16_t				bItemTarget;			//0x120
	uint16_t				wItemCastSound;			//0x122
	uint32_t				wItemCastOverlay;		//0x124
	uint32_t				dwPerDelay;				//0x128
	uint16_t				wMaxLvl;				//0x12C
	uint16_t				wResultFlags;			//0x12E
	uint32_t				dwHitFlags;				//0x130
	uint32_t				dwHitClass;				//0x134
	uint32_t				dwCalc1;				//0x138
	uint32_t				dwCalc2;				//0x13C
	uint32_t				dwCalc3;				//0x140
	uint32_t				dwCalc4;				//0x144
	uint32_t				dwParam1;				//0x148
	uint32_t				dwParam2;				//0x14C
	uint32_t				dwParam3;				//0x150
	uint32_t				dwParam4;				//0x154
	uint32_t				dwParam5;				//0x158
	uint32_t				dwParam6;				//0x15C
	uint32_t				dwParam7;				//0x160
	uint32_t				dwParam8;				//0x164
	uint16_t				bWeapSel;				//0x168
	uint16_t				wItemEffect;			//0x16A
	uint32_t				wItemCltEffect;			//0x16C
	uint32_t				dwSkPoints;				//0x170
	uint16_t				wReqLevel;				//0x174
	uint16_t				wReqStr;				//0x176
	uint16_t				wReqDex;				//0x178
	uint16_t				wReqInt;				//0x17A
	uint16_t				wReqVit;				//0x17C
	uint16_t				wReqSkill1;				//0x17E
	uint16_t				wReqSkill2;				//0x180
	uint16_t				wReqSkill3;				//0x182
	uint16_t				wStartMana;				//0x184
	uint16_t				wMinMana;				//0x186
	uint16_t				wManaShift;				//0x188
	uint16_t				wMana;					//0x18A
	uint16_t				wLevelMana;				//0x18C
	uint8_t					bAttackRank;			//0x18E
	uint8_t					bLineOfSight;			//0x18F
	uint32_t				dwDelay;				//0x190
	uint32_t				wSkillDesc;				//0x194
	uint32_t				dwToHit;				//0x198
	uint32_t				dwLevToHit;				//0x19C
	uint32_t				dwToHitCalc;			//0x1A0
	uint8_t					bToHitShift;			//0x1A4
	uint8_t					bSrcDam;				//0x1A5
	uint16_t				_6;						//0x1A6
	uint32_t				dwMinDam;				//0x1A8
	uint32_t				dwMaxDam;				//0x1AC
	uint32_t				dwMinLvlDam1;			//0x1B0
	uint32_t				dwMinLvlDam2;			//0x1B4
	uint32_t				dwMinLvlDam3;			//0x1B8
	uint32_t				dwMinLvlDam4;			//0x1BC
	uint32_t				dwMinLvlDam5;			//0x1C0
	uint32_t				dwMaxLvlDam1;			//0x1C4
	uint32_t				dwMaxLvlDam2;			//0x1C8
	uint32_t				dwMaxLvlDam3;			//0x1CC
	uint32_t				dwMaxLvlDam4;			//0x1D0
	uint32_t				dwMaxLvlDam5;			//0x1D4
	uint32_t				dwDmgSymPerCalc;		//0x1D8
	uint16_t				bEType;					//0x1DC
	uint16_t				_7;						//0x1DE
	uint32_t				dwEMin;					//0x1E0
	uint32_t				dwEMax;					//0x1E4
	uint32_t				dwEMinLev1;				//0x1E8
	uint32_t				dwEMinLev2;				//0x1EC
	uint32_t				dwEMinLev3;				//0x1F0
	uint32_t				dwEMinLev4;				//0x1F4
	uint32_t				dwEMinLev5;				//0x1F8
	uint32_t				dwEMaxLev1;				//0x1FC
	uint32_t				dwEMaxLev2;				//0x200
	uint32_t				dwEMaxLev3;				//0x204
	uint32_t				dwEMaxLev4;				//0x208
	uint32_t				dwEMaxLev5;				//0x20C
	uint32_t				dwEDmgSymPerCalc;		//0x210
	uint32_t				dwELen;					//0x214
	uint32_t				dwELevLen1;				//0x218
	uint32_t				dwELevLen2;				//0x21C
	uint32_t				dwELevLen3;				//0x220
	uint32_t				dwELenSymPerCalc;		//0x224
	uint16_t				bRestrict;				//0x228
	uint16_t				wState1;				//0x22A
	uint16_t				wState2;				//0x22C
	uint16_t				wState3;				//0x22E
	uint16_t				bAiType;				//0x230
	uint16_t				wAiBonus;				//0x232
	uint32_t				dwCostMult;				//0x234
	uint32_t				dwCostAdd;				//0x238
};


std::string UnpackSkills(char* data, size_t fileSize)
{
	std::stringstream stream;
	int amountRows = 0;
	memcpy(&amountRows, data, sizeof(int));

	if (fileSize - 4 != (sizeof(SkillsTxt) * amountRows))
	{
		std::cout << "Data size doesnt match amount of items! Wanted: " << sizeof(SkillsTxt) * amountRows << "  Got: " << fileSize - 4 << std::endl;
		PauseExit();
	}
	else
	{
		stream << "wSkillId" << '\t';
		stream << "bDecquant" << '\t';
		stream << "bLob" << '\t';
		stream << "bProgressive" << '\t';
		stream << "bFinishing" << '\t';
		stream << "bPassive" << '\t';
		stream << "bAura" << '\t';
		stream << "bPeriodic" << '\t';
		stream << "bPrgStack" << '\t';
		stream << "bInTown" << '\t';
		stream << "bKick" << '\t';
		stream << "bInGame" << '\t';
		stream << "bRepeat" << '\t';
		stream << "bStSuccessOnly" << '\t';
		stream << "bStSoundDelay" << '\t';
		stream << "bWeaponSnd" << '\t';
		stream << "bImmediate" << '\t';
		stream << "bNoAmmo" << '\t';
		stream << "bEnhanceable" << '\t';
		stream << "bDurability" << '\t';
		stream << "bUseAttackRating" << '\t';
		stream << "bTargetableOnly" << '\t';
		stream << "bSearchEnemyXY" << '\t';
		stream << "bSearchEnemyNear" << '\t';
		stream << "bSearchOpenXY" << '\t';
		stream << "bTargetCorpse" << '\t';
		stream << "bTargetPet" << '\t';
		stream << "bTargetAlly" << '\t';
		stream << "bTargetItem" << '\t';
		stream << "bAttackNoMana" << '\t';
		stream << "bItemTgtDo" << '\t';
		stream << "bLeftSkill" << '\t';
		stream << "bInterrupt" << '\t';
		stream << "bTgtPlaceCheck" << '\t';
		stream << "bItemCheckStart" << '\t';
		stream << "bItemCltCheckStart" << '\t';
		stream << "bGeneral" << '\t';
		stream << "bScroll" << '\t';
		stream << "bUseManaOnDo" << '\t';
		stream << "bWarp " << '\t';
		stream << "bClassId" << '\t';
		stream << "bAnim" << '\t';
		stream << "bMonAnim" << '\t';
		stream << "bSeqTrans" << '\t';
		stream << "bSeqNum" << '\t';
		stream << "bRange" << '\t';
		stream << "bSelectProc" << '\t';
		stream << "bSeqInput" << '\t';
		stream << "_1" << '\t';
		stream << "wITypeA1" << '\t';
		stream << "wITypeA2" << '\t';
		stream << "wITypeA3" << '\t';
		stream << "wITypeB1" << '\t';
		stream << "wITypeB2" << '\t';
		stream << "wITypeB3" << '\t';
		stream << "wETypeA1" << '\t';
		stream << "wETypeA2" << '\t';
		stream << "wETypeB1" << '\t';
		stream << "wETypeB2" << '\t';
		stream << "wSrvStartFunc" << '\t';
		stream << "wSrvDoFunc" << '\t';
		stream << "wSrvPrgFunc1" << '\t';
		stream << "wSrvPrgFunc2" << '\t';
		stream << "wSrvPrgFunc3" << '\t';
		stream << "_2" << '\t';
		stream << "dwPrgCalc1" << '\t';
		stream << "dwPrgCalc2" << '\t';
		stream << "dwPrgCalc3" << '\t';
		stream << "bPrgDamage" << '\t';
		stream << "wSrvMissile" << '\t';
		stream << "wSrvMissileA" << '\t';
		stream << "wSrvMissileB" << '\t';
		stream << "wSrvMissileC" << '\t';
		stream << "wSrvOverlay" << '\t';
		stream << "dwAuraFilter" << '\t';
		stream << "wAuraStat1" << '\t';
		stream << "wAuraStat2" << '\t';
		stream << "wAuraStat3" << '\t';
		stream << "wAuraStat4" << '\t';
		stream << "wAuraStat5" << '\t';
		stream << "wAuraStat6" << '\t';
		stream << "dwAuraLenCalc" << '\t';
		stream << "dwAuraRangeCalc" << '\t';
		stream << "dwAuraStatCalc1" << '\t';
		stream << "dwAuraStatCalc2" << '\t';
		stream << "dwAuraStatCalc3" << '\t';
		stream << "dwAuraStatCalc4" << '\t';
		stream << "dwAuraStatCalc5" << '\t';
		stream << "dwAuraStatCalc6" << '\t';
		stream << "wAuraState" << '\t';
		stream << "wAuraTargetState" << '\t';
		stream << "wAuraEvent1" << '\t';
		stream << "wAuraEvent2" << '\t';
		stream << "wAuraEvent3" << '\t';
		stream << "wAuraEventFunc1" << '\t';
		stream << "wAuraEventFunc2" << '\t';
		stream << "wAuraEventFunc3" << '\t';
		stream << "wAuraTgtEvent" << '\t';
		stream << "wAuraTgtEventFunc" << '\t';
		stream << "wPassiveState" << '\t';
		stream << "wPassiveiType" << '\t';
		stream << "wPassiveStat1" << '\t';
		stream << "wPassiveStat2" << '\t';
		stream << "wPassiveStat3" << '\t';
		stream << "wPassiveStat4" << '\t';
		stream << "wPassiveStat5" << '\t';
		stream << "_3" << '\t';
		stream << "dwPassiveCalc1" << '\t';
		stream << "dwPassiveCalc2" << '\t';
		stream << "dwPassiveCalc3" << '\t';
		stream << "dwPassiveCalc4" << '\t';
		stream << "dwPassiveCalc5" << '\t';
		stream << "wPassiveEvent" << '\t';
		stream << "wPassiveEventFunc" << '\t';
		stream << "wSummon" << '\t';
		stream << "wPetType" << '\t';
		stream << "bSumMode" << '\t';
		stream << "dwPetMax" << '\t';
		stream << "wSumSkill1" << '\t';
		stream << "wSumSkill2" << '\t';
		stream << "wSumSkill3" << '\t';
		stream << "wSumSkill4" << '\t';
		stream << "wSumSkill5" << '\t';
		stream << "_4" << '\t';
		stream << "dwSumSkCalc1" << '\t';
		stream << "dwSumSkCalc2" << '\t';
		stream << "dwSumSkCalc3" << '\t';
		stream << "dwSumSkCalc4" << '\t';
		stream << "dwSumSkCalc5" << '\t';
		stream << "wSumUMod" << '\t';
		stream << "wSumOverlay" << '\t';
		stream << "wCltMissile" << '\t';
		stream << "wCltMissileA" << '\t';
		stream << "wCltMissileB" << '\t';
		stream << "wCltMissileC" << '\t';
		stream << "wCltMissileD" << '\t';
		stream << "wCltStFunc" << '\t';
		stream << "wCltDoFunc" << '\t';
		stream << "wCltPrgFunc1" << '\t';
		stream << "wCltPrgFunc2" << '\t';
		stream << "wCltPrgFunc3" << '\t';
		stream << "wStSound" << '\t';
		stream << "_5" << '\t';
		stream << "wDoSound" << '\t';
		stream << "wDoSoundA" << '\t';
		stream << "wDoSoundB" << '\t';
		stream << "wCastOverlay" << '\t';
		stream << "wTgtOverlay" << '\t';
		stream << "wTgtSound" << '\t';
		stream << "wPrgOverlay" << '\t';
		stream << "wPrgSound" << '\t';
		stream << "wCltOverlayA" << '\t';
		stream << "wCltOverlayB" << '\t';
		stream << "dwCltCalc1" << '\t';
		stream << "dwCltCalc2" << '\t';
		stream << "dwCltCalc3" << '\t';
		stream << "bItemTarget" << '\t';
		stream << "wItemCastSound" << '\t';
		stream << "wItemCastOverlay" << '\t';
		stream << "dwPerDelay" << '\t';
		stream << "wMaxLvl" << '\t';
		stream << "wResultFlags" << '\t';
		stream << "dwHitFlags" << '\t';
		stream << "dwHitClass" << '\t';
		stream << "dwCalc1" << '\t';
		stream << "dwCalc2" << '\t';
		stream << "dwCalc3" << '\t';
		stream << "dwCalc4" << '\t';
		stream << "dwParam1" << '\t';
		stream << "dwParam2" << '\t';
		stream << "dwParam3" << '\t';
		stream << "dwParam4" << '\t';
		stream << "dwParam5" << '\t';
		stream << "dwParam6" << '\t';
		stream << "dwParam7" << '\t';
		stream << "dwParam8" << '\t';
		stream << "bWeapSel" << '\t';
		stream << "wItemEffect" << '\t';
		stream << "wItemCltEffect" << '\t';
		stream << "dwSkPoints" << '\t';
		stream << "wReqLevel" << '\t';
		stream << "wReqStr" << '\t';
		stream << "wReqDex" << '\t';
		stream << "wReqInt" << '\t';
		stream << "wReqVit" << '\t';
		stream << "wReqSkill1" << '\t';
		stream << "wReqSkill2" << '\t';
		stream << "wReqSkill3" << '\t';
		stream << "wStartMana" << '\t';
		stream << "wMinMana" << '\t';
		stream << "wManaShift" << '\t';
		stream << "wMana" << '\t';
		stream << "wLevelMana" << '\t';
		stream << "bAttackRank" << '\t';
		stream << "bLineOfSight" << '\t';
		stream << "dwDelay" << '\t';
		stream << "wSkillDesc" << '\t';
		stream << "dwToHit" << '\t';
		stream << "dwLevToHit" << '\t';
		stream << "dwToHitCalc" << '\t';
		stream << "bToHitShift" << '\t';
		stream << "bSrcDam" << '\t';
		stream << "_6" << '\t';
		stream << "dwMinDam" << '\t';
		stream << "dwMaxDam" << '\t';
		stream << "dwMinLvlDam1" << '\t';
		stream << "dwMinLvlDam2" << '\t';
		stream << "dwMinLvlDam3" << '\t';
		stream << "dwMinLvlDam4" << '\t';
		stream << "dwMinLvlDam5" << '\t';
		stream << "dwMaxLvlDam1" << '\t';
		stream << "dwMaxLvlDam2" << '\t';
		stream << "dwMaxLvlDam3" << '\t';
		stream << "dwMaxLvlDam4" << '\t';
		stream << "dwMaxLvlDam5" << '\t';
		stream << "dwDmgSymPerCalc" << '\t';
		stream << "bEType" << '\t';
		stream << "_7" << '\t';
		stream << "dwEMin" << '\t';
		stream << "dwEMax" << '\t';
		stream << "dwEMinLev1" << '\t';
		stream << "dwEMinLev2" << '\t';
		stream << "dwEMinLev3" << '\t';
		stream << "dwEMinLev4" << '\t';
		stream << "dwEMinLev5" << '\t';
		stream << "dwEMaxLev1" << '\t';
		stream << "dwEMaxLev2" << '\t';
		stream << "dwEMaxLev3" << '\t';
		stream << "dwEMaxLev4" << '\t';
		stream << "dwEMaxLev5" << '\t';
		stream << "dwEDmgSymPerCalc" << '\t';
		stream << "dwELen" << '\t';
		stream << "dwELevLen1" << '\t';
		stream << "dwELevLen2" << '\t';
		stream << "dwELevLen3" << '\t';
		stream << "dwELenSymPerCalc" << '\t';
		stream << "bRestrict" << '\t';
		stream << "wState1" << '\t';
		stream << "wState2" << '\t';
		stream << "wState3" << '\t';
		stream << "bAiType" << '\t';
		stream << "wAiBonus" << '\t';
		stream << "dwCostMult" << '\t';
		stream << "dwCostAdd" << '\t';

		stream << '\n';


		std::vector<SkillsTxt> items;
		items.resize(amountRows);
		memcpy(items.data(), &data[4], sizeof(SkillsTxt) * amountRows);
		for (auto& item : items)
		{
			stream << (uint32_t)item.wSkillId << '\t';
			stream << (uint32_t)item.dwFlags.bDecquant << '\t';
			stream << (uint32_t)item.dwFlags.bLob << '\t';
			stream << (uint32_t)item.dwFlags.bProgressive << '\t';
			stream << (uint32_t)item.dwFlags.bFinishing << '\t';
			stream << (uint32_t)item.dwFlags.bPassive << '\t';
			stream << (uint32_t)item.dwFlags.bAura << '\t';
			stream << (uint32_t)item.dwFlags.bPeriodic << '\t';
			stream << (uint32_t)item.dwFlags.bPrgStack << '\t';
			stream << (uint32_t)item.dwFlags.bInTown << '\t';
			stream << (uint32_t)item.dwFlags.bKick << '\t';
			stream << (uint32_t)item.dwFlags.bInGame << '\t';
			stream << (uint32_t)item.dwFlags.bRepeat << '\t';
			stream << (uint32_t)item.dwFlags.bStSuccessOnly << '\t';
			stream << (uint32_t)item.dwFlags.bStSoundDelay << '\t';
			stream << (uint32_t)item.dwFlags.bWeaponSnd << '\t';
			stream << (uint32_t)item.dwFlags.bImmediate << '\t';
			stream << (uint32_t)item.dwFlags.bNoAmmo << '\t';
			stream << (uint32_t)item.dwFlags.bEnhanceable << '\t';
			stream << (uint32_t)item.dwFlags.bDurability << '\t';
			stream << (uint32_t)item.dwFlags.bUseAttackRating << '\t';
			stream << (uint32_t)item.dwFlags.bTargetableOnly << '\t';
			stream << (uint32_t)item.dwFlags.bSearchEnemyXY << '\t';
			stream << (uint32_t)item.dwFlags.bSearchEnemyNear << '\t';
			stream << (uint32_t)item.dwFlags.bSearchOpenXY << '\t';
			stream << (uint32_t)item.dwFlags.bTargetCorpse << '\t';
			stream << (uint32_t)item.dwFlags.bTargetPet << '\t';
			stream << (uint32_t)item.dwFlags.bTargetAlly << '\t';
			stream << (uint32_t)item.dwFlags.bTargetItem << '\t';
			stream << (uint32_t)item.dwFlags.bAttackNoMana << '\t';
			stream << (uint32_t)item.dwFlags.bItemTgtDo << '\t';
			stream << (uint32_t)item.dwFlags.bLeftSkill << '\t';
			stream << (uint32_t)item.dwFlags.bInterrupt << '\t';
			stream << (uint32_t)item.dwFlags.bTgtPlaceCheck << '\t';
			stream << (uint32_t)item.dwFlags.bItemCheckStart << '\t';
			stream << (uint32_t)item.dwFlags.bItemCltCheckStart << '\t';
			stream << (uint32_t)item.dwFlags.bGeneral << '\t';
			stream << (uint32_t)item.dwFlags.bScroll << '\t';
			stream << (uint32_t)item.dwFlags.bUseManaOnDo << '\t';
			stream << (uint32_t)item.dwFlags.bWarp  << '\t';
			stream << (uint32_t)item.bClassId << '\t';
			stream << (uint32_t)item.bAnim << '\t';
			stream << (uint32_t)item.bMonAnim << '\t';
			stream << (uint32_t)item.bSeqTrans << '\t';
			stream << (uint32_t)item.bSeqNum << '\t';
			stream << (uint32_t)item.bRange << '\t';
			stream << (uint32_t)item.bSelectProc << '\t';
			stream << (uint32_t)item.bSeqInput << '\t';
			stream << (uint32_t)item._1 << '\t';
			stream << (uint32_t)item.wITypeA1 << '\t';
			stream << (uint32_t)item.wITypeA2 << '\t';
			stream << (uint32_t)item.wITypeA3 << '\t';
			stream << (uint32_t)item.wITypeB1 << '\t';
			stream << (uint32_t)item.wITypeB2 << '\t';
			stream << (uint32_t)item.wITypeB3 << '\t';
			stream << (uint32_t)item.wETypeA1 << '\t';
			stream << (uint32_t)item.wETypeA2 << '\t';
			stream << (uint32_t)item.wETypeB1 << '\t';
			stream << (uint32_t)item.wETypeB2 << '\t';
			stream << (uint32_t)item.wSrvStartFunc << '\t';
			stream << (uint32_t)item.wSrvDoFunc << '\t';
			stream << (uint32_t)item.wSrvPrgFunc1 << '\t';
			stream << (uint32_t)item.wSrvPrgFunc2 << '\t';
			stream << (uint32_t)item.wSrvPrgFunc3 << '\t';
			stream << (uint32_t)item._2 << '\t';
			stream << (uint32_t)item.dwPrgCalc1 << '\t';
			stream << (uint32_t)item.dwPrgCalc2 << '\t';
			stream << (uint32_t)item.dwPrgCalc3 << '\t';
			stream << (uint32_t)item.bPrgDamage << '\t';
			stream << (uint32_t)item.wSrvMissile << '\t';
			stream << (uint32_t)item.wSrvMissileA << '\t';
			stream << (uint32_t)item.wSrvMissileB << '\t';
			stream << (uint32_t)item.wSrvMissileC << '\t';
			stream << (uint32_t)item.wSrvOverlay << '\t';
			stream << (uint32_t)item.dwAuraFilter << '\t';
			stream << (uint32_t)item.wAuraStat1 << '\t';
			stream << (uint32_t)item.wAuraStat2 << '\t';
			stream << (uint32_t)item.wAuraStat3 << '\t';
			stream << (uint32_t)item.wAuraStat4 << '\t';
			stream << (uint32_t)item.wAuraStat5 << '\t';
			stream << (uint32_t)item.wAuraStat6 << '\t';
			stream << (uint32_t)item.dwAuraLenCalc << '\t';
			stream << (uint32_t)item.dwAuraRangeCalc << '\t';
			stream << (uint32_t)item.dwAuraStatCalc1 << '\t';
			stream << (uint32_t)item.dwAuraStatCalc2 << '\t';
			stream << (uint32_t)item.dwAuraStatCalc3 << '\t';
			stream << (uint32_t)item.dwAuraStatCalc4 << '\t';
			stream << (uint32_t)item.dwAuraStatCalc5 << '\t';
			stream << (uint32_t)item.dwAuraStatCalc6 << '\t';
			stream << (uint32_t)item.wAuraState << '\t';
			stream << (uint32_t)item.wAuraTargetState << '\t';
			stream << (uint32_t)item.wAuraEvent1 << '\t';
			stream << (uint32_t)item.wAuraEvent2 << '\t';
			stream << (uint32_t)item.wAuraEvent3 << '\t';
			stream << (uint32_t)item.wAuraEventFunc1 << '\t';
			stream << (uint32_t)item.wAuraEventFunc2 << '\t';
			stream << (uint32_t)item.wAuraEventFunc3 << '\t';
			stream << (uint32_t)item.wAuraTgtEvent << '\t';
			stream << (uint32_t)item.wAuraTgtEventFunc << '\t';
			stream << (uint32_t)item.wPassiveState << '\t';
			stream << (uint32_t)item.wPassiveiType << '\t';
			stream << (uint32_t)item.wPassiveStat1 << '\t';
			stream << (uint32_t)item.wPassiveStat2 << '\t';
			stream << (uint32_t)item.wPassiveStat3 << '\t';
			stream << (uint32_t)item.wPassiveStat4 << '\t';
			stream << (uint32_t)item.wPassiveStat5 << '\t';
			stream << (uint32_t)item._3 << '\t';
			stream << (uint32_t)item.dwPassiveCalc1 << '\t';
			stream << (uint32_t)item.dwPassiveCalc2 << '\t';
			stream << (uint32_t)item.dwPassiveCalc3 << '\t';
			stream << (uint32_t)item.dwPassiveCalc4 << '\t';
			stream << (uint32_t)item.dwPassiveCalc5 << '\t';
			stream << (uint32_t)item.wPassiveEvent << '\t';
			stream << (uint32_t)item.wPassiveEventFunc << '\t';
			stream << (uint32_t)item.wSummon << '\t';
			stream << (uint32_t)item.wPetType << '\t';
			stream << (uint32_t)item.bSumMode << '\t';
			stream << (uint32_t)item.dwPetMax << '\t';
			stream << (uint32_t)item.wSumSkill1 << '\t';
			stream << (uint32_t)item.wSumSkill2 << '\t';
			stream << (uint32_t)item.wSumSkill3 << '\t';
			stream << (uint32_t)item.wSumSkill4 << '\t';
			stream << (uint32_t)item.wSumSkill5 << '\t';
			stream << (uint32_t)item._4 << '\t';
			stream << (uint32_t)item.dwSumSkCalc1 << '\t';
			stream << (uint32_t)item.dwSumSkCalc2 << '\t';
			stream << (uint32_t)item.dwSumSkCalc3 << '\t';
			stream << (uint32_t)item.dwSumSkCalc4 << '\t';
			stream << (uint32_t)item.dwSumSkCalc5 << '\t';
			stream << (uint32_t)item.wSumUMod << '\t';
			stream << (uint32_t)item.wSumOverlay << '\t';
			stream << (uint32_t)item.wCltMissile << '\t';
			stream << (uint32_t)item.wCltMissileA << '\t';
			stream << (uint32_t)item.wCltMissileB << '\t';
			stream << (uint32_t)item.wCltMissileC << '\t';
			stream << (uint32_t)item.wCltMissileD << '\t';
			stream << (uint32_t)item.wCltStFunc << '\t';
			stream << (uint32_t)item.wCltDoFunc << '\t';
			stream << (uint32_t)item.wCltPrgFunc1 << '\t';
			stream << (uint32_t)item.wCltPrgFunc2 << '\t';
			stream << (uint32_t)item.wCltPrgFunc3 << '\t';
			stream << (uint32_t)item.wStSound << '\t';
			stream << (uint32_t)item._5 << '\t';
			stream << (uint32_t)item.wDoSound << '\t';
			stream << (uint32_t)item.wDoSoundA << '\t';
			stream << (uint32_t)item.wDoSoundB << '\t';
			stream << (uint32_t)item.wCastOverlay << '\t';
			stream << (uint32_t)item.wTgtOverlay << '\t';
			stream << (uint32_t)item.wTgtSound << '\t';
			stream << (uint32_t)item.wPrgOverlay << '\t';
			stream << (uint32_t)item.wPrgSound << '\t';
			stream << (uint32_t)item.wCltOverlayA << '\t';
			stream << (uint32_t)item.wCltOverlayB << '\t';
			stream << (uint32_t)item.dwCltCalc1 << '\t';
			stream << (uint32_t)item.dwCltCalc2 << '\t';
			stream << (uint32_t)item.dwCltCalc3 << '\t';
			stream << (uint32_t)item.bItemTarget << '\t';
			stream << (uint32_t)item.wItemCastSound << '\t';
			stream << (uint32_t)item.wItemCastOverlay << '\t';
			stream << (uint32_t)item.dwPerDelay << '\t';
			stream << (uint32_t)item.wMaxLvl << '\t';
			stream << (uint32_t)item.wResultFlags << '\t';
			stream << (uint32_t)item.dwHitFlags << '\t';
			stream << (uint32_t)item.dwHitClass << '\t';
			stream << (uint32_t)item.dwCalc1 << '\t';
			stream << (uint32_t)item.dwCalc2 << '\t';
			stream << (uint32_t)item.dwCalc3 << '\t';
			stream << (uint32_t)item.dwCalc4 << '\t';
			stream << (uint32_t)item.dwParam1 << '\t';
			stream << (uint32_t)item.dwParam2 << '\t';
			stream << (uint32_t)item.dwParam3 << '\t';
			stream << (uint32_t)item.dwParam4 << '\t';
			stream << (uint32_t)item.dwParam5 << '\t';
			stream << (uint32_t)item.dwParam6 << '\t';
			stream << (uint32_t)item.dwParam7 << '\t';
			stream << (uint32_t)item.dwParam8 << '\t';
			stream << (uint32_t)item.bWeapSel << '\t';
			stream << (uint32_t)item.wItemEffect << '\t';
			stream << (uint32_t)item.wItemCltEffect << '\t';
			stream << (uint32_t)item.dwSkPoints << '\t';
			stream << (uint32_t)item.wReqLevel << '\t';
			stream << (uint32_t)item.wReqStr << '\t';
			stream << (uint32_t)item.wReqDex << '\t';
			stream << (uint32_t)item.wReqInt << '\t';
			stream << (uint32_t)item.wReqVit << '\t';
			stream << (uint32_t)item.wReqSkill1 << '\t';
			stream << (uint32_t)item.wReqSkill2 << '\t';
			stream << (uint32_t)item.wReqSkill3 << '\t';
			stream << (uint32_t)item.wStartMana << '\t';
			stream << (uint32_t)item.wMinMana << '\t';
			stream << (uint32_t)item.wManaShift << '\t';
			stream << (uint32_t)item.wMana << '\t';
			stream << (uint32_t)item.wLevelMana << '\t';
			stream << (uint32_t)item.bAttackRank << '\t';
			stream << (uint32_t)item.bLineOfSight << '\t';
			stream << (uint32_t)item.dwDelay << '\t';
			stream << (uint32_t)item.wSkillDesc << '\t';
			stream << (uint32_t)item.dwToHit << '\t';
			stream << (uint32_t)item.dwLevToHit << '\t';
			stream << (uint32_t)item.dwToHitCalc << '\t';
			stream << (uint32_t)item.bToHitShift << '\t';
			stream << (uint32_t)item.bSrcDam << '\t';
			stream << (uint32_t)item._6 << '\t';
			stream << (uint32_t)item.dwMinDam << '\t';
			stream << (uint32_t)item.dwMaxDam << '\t';
			stream << (uint32_t)item.dwMinLvlDam1 << '\t';
			stream << (uint32_t)item.dwMinLvlDam2 << '\t';
			stream << (uint32_t)item.dwMinLvlDam3 << '\t';
			stream << (uint32_t)item.dwMinLvlDam4 << '\t';
			stream << (uint32_t)item.dwMinLvlDam5 << '\t';
			stream << (uint32_t)item.dwMaxLvlDam1 << '\t';
			stream << (uint32_t)item.dwMaxLvlDam2 << '\t';
			stream << (uint32_t)item.dwMaxLvlDam3 << '\t';
			stream << (uint32_t)item.dwMaxLvlDam4 << '\t';
			stream << (uint32_t)item.dwMaxLvlDam5 << '\t';
			stream << (uint32_t)item.dwDmgSymPerCalc << '\t';
			stream << (uint32_t)item.bEType << '\t';
			stream << (uint32_t)item._7 << '\t';
			stream << (uint32_t)item.dwEMin << '\t';
			stream << (uint32_t)item.dwEMax << '\t';
			stream << (uint32_t)item.dwEMinLev1 << '\t';
			stream << (uint32_t)item.dwEMinLev2 << '\t';
			stream << (uint32_t)item.dwEMinLev3 << '\t';
			stream << (uint32_t)item.dwEMinLev4 << '\t';
			stream << (uint32_t)item.dwEMinLev5 << '\t';
			stream << (uint32_t)item.dwEMaxLev1 << '\t';
			stream << (uint32_t)item.dwEMaxLev2 << '\t';
			stream << (uint32_t)item.dwEMaxLev3 << '\t';
			stream << (uint32_t)item.dwEMaxLev4 << '\t';
			stream << (uint32_t)item.dwEMaxLev5 << '\t';
			stream << (uint32_t)item.dwEDmgSymPerCalc << '\t';
			stream << (uint32_t)item.dwELen << '\t';
			stream << (uint32_t)item.dwELevLen1 << '\t';
			stream << (uint32_t)item.dwELevLen2 << '\t';
			stream << (uint32_t)item.dwELevLen3 << '\t';
			stream << (uint32_t)item.dwELenSymPerCalc << '\t';
			stream << (uint32_t)item.bRestrict << '\t';
			stream << (uint32_t)item.wState1 << '\t';
			stream << (uint32_t)item.wState2 << '\t';
			stream << (uint32_t)item.wState3 << '\t';
			stream << (uint32_t)item.bAiType << '\t';
			stream << (uint32_t)item.wAiBonus << '\t';
			stream << (uint32_t)item.dwCostMult << '\t';
			stream << (uint32_t)item.dwCostAdd << '\t';
			stream << '\n';
		}
		return stream.str();

	}
	return stream.str();
}
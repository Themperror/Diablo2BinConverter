#pragma once
#include "util.h"

#pragma pack(push,1)
struct SkillDescTxt
{
	uint16_t	wSkillDesc;               //0x00
	uint8_t		bSkillPage;               //0x02
	uint8_t		bSkillRow;                  //0x03
	uint8_t		bSkillColumn;               //0x04
	uint8_t		bListRow;                  //0x05
	uint8_t		bListPool;                  //0x06
	uint8_t		bIconCel;                  //0x07
	uint16_t	wStrName;                  //0x08
	uint16_t	wStrShort;                  //0x0A
	uint16_t	wStrLong;                  //0x0C
	uint16_t	wStrAlt;                  //0x0E
	uint16_t	wStrMana;                  //0x10
	uint16_t	wDescDam;                  //0x12
	uint16_t	wDescAtt;                  //0x14
	uint16_t	_1;					  //0x16
	uint32_t	dwDamCalc[2];               //0x18
	uint8_t		bPrgDamElem[4];            //0x20
	uint32_t	dwProgDmgMin[3];            //0x24
	uint32_t	dwProgDmgMax[3];            //0x30
	uint16_t	wDescMissile[3];            //0x3C
	uint8_t		bDescLine[18];               //0x42
	uint16_t	wDescTextA[17];            //0x54
	uint16_t	wDescTextB[17];            //0x76
	uint32_t	dwDescCalcA[17];            //0x98
	uint32_t	dwDescCalcB[17];            //0xDC
};
#pragma pack(pop)



std::string UnpackSkillsDesc(char* data, size_t fileSize)
{
	std::stringstream stream;
	int amountRows = 0;
	memcpy(&amountRows, data, sizeof(int));

	if (fileSize - 4 != (sizeof(SkillDescTxt) * amountRows))
	{
		std::cout << "Data size doesnt match amount of items! Wanted: " << sizeof(SkillDescTxt) * amountRows << "  Got: " << fileSize - 4 << std::endl;
		PauseExit();
	}
	else
	{
		
		stream << "wSkillDesc" << '\t';
		stream << "bSkillPage" << '\t';
		stream << "bSkillRow" << '\t';
		stream << "bSkillColumn" << '\t';
		stream << "bListRow" << '\t';
		stream << "bListPool" << '\t';
		stream << "bIconCel" << '\t';
		stream << "wStrName" << '\t';
		stream << "wStrShort" << '\t';
		stream << "wStrLong" << '\t';
		stream << "wStrAlt" << '\t';
		stream << "wStrMana" << '\t';
		stream << "wDescDam" << '\t';
		stream << "wDescAtt" << '\t';
		stream << "_1" << '\t';

		//fuck it, I'm not going to write small forloops for every damn structure I'll encounter, making it a macro so I can keep the general code look intact..
		FORSTR(stream << , "dwDamCalc", << '\t'; , 2)
		FORSTR(stream << , "bPrgDamElem", << '\t'; , 4)
		FORSTR(stream << , "dwProgDmgMin", << '\t'; , 3)
		FORSTR(stream << , "dwProgDmgMax", << '\t'; , 3)
		FORSTR(stream << , "wDescMissile", << '\t';, 3)
		FORSTR(stream << , "bDescLine", << '\t';, 18)
		FORSTR(stream << , "wDescTextA", << '\t'; , 17)
		FORSTR(stream << , "wDescTextB", << '\t'; , 17)
		FORSTR(stream << , "dwDescCalcA", << '\t';, 17)
		FORSTR(stream << , "dwDescCalcB", << '\t'; , 17)
		stream << '\n';


		std::vector<SkillDescTxt> items;
		items.resize(amountRows);
		memcpy(items.data(), &data[4], sizeof(SkillDescTxt) * amountRows);
		for (auto& item : items)
		{
			stream << (uint32_t)item.wSkillDesc << '\t';
			stream << (uint32_t)item.bSkillPage << '\t';
			stream << (uint32_t)item.bSkillRow << '\t';
			stream << (uint32_t)item.bSkillColumn << '\t';
			stream << (uint32_t)item.bListRow << '\t';
			stream << (uint32_t)item.bListPool << '\t';
			stream << (uint32_t)item.bIconCel << '\t';
			stream << (uint32_t)item.wStrName << '\t';
			stream << (uint32_t)item.wStrShort << '\t';
			stream << (uint32_t)item.wStrLong << '\t';
			stream << (uint32_t)item.wStrAlt << '\t';
			stream << (uint32_t)item.wStrMana << '\t';
			stream << (uint32_t)item.wDescDam << '\t';
			stream << (uint32_t)item.wDescAtt << '\t';
			stream << (uint32_t)item._1 << '\t';

			//fuck it, I'm not going to write small forloops for every damn structure I'll encounter, making it a macro so I can keep the general code look intact..
			FOR(stream << (uint32_t)item., dwDamCalc, << '\t';, 2)
			FOR(stream << (uint32_t)item., bPrgDamElem, << '\t';, 4)
			FOR(stream << (uint32_t)item., dwProgDmgMin, << '\t';, 3)
			FOR(stream << (uint32_t)item., dwProgDmgMax, << '\t';, 3)
			FOR(stream << (uint32_t)item., wDescMissile, << '\t'; , 3)
			FOR(stream << (uint32_t)item., bDescLine, << '\t'; , 18)
			
			//No clue whats in these fields but the value's here make no sense in the output
			//lots of 0x1506  (5382), they don't seem to be wchar's, or ints.. but some fields are different so they must be SOMETHING..
			FOR(stream << (uint32_t)item., wDescTextA, << '\t';, 17)
			FOR(stream << (uint32_t)item., wDescTextB, << '\t';, 17)
			//////

			FOR(stream << (uint32_t)item., dwDescCalcA, << '\t'; , 17)
			FOR(stream << (uint32_t)item., dwDescCalcB, << '\t';, 17)

			stream << '\n';
		}
		return stream.str();

	}
	return stream.str();
}
// D2BinExtractor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "util.h"

#include "D2BinExtractor.h"
#include "BinFiles.h"
#include "Items.h"
#include "Skills.h"
#include "SkillsDesc.h"
#include "MonStats.h"
#include "ManualRead.h"

std::string AutoUnpack(char* data, size_t fileSize, FileType type)
{
	switch (type)
	{
	case FileType::Items:
		return UnpackItem(data, fileSize);
		break;
	case FileType::Skills:
		return UnpackSkills(data, fileSize);
		break;
	case FileType::SkillDesc:
		return UnpackSkillsDesc(data, fileSize);
		break;
	case FileType::MonStats:
		return UnpackMonStats(data, fileSize);
		break;
	}

	return "";
}

int main(int argc, char** argv)
{
	if (argc != 3)
	{
		std::cout << "need 2 arguments! either input file + format!  OR  input file + \"auto\"" << std::endl;
		PauseExit();
	}
	std::cout << "opening: " << argv[1] << std::endl;
	FILE* file = fopen(argv[1], "rb");
	if (file)
	{
		fseek(file, 0, SEEK_END);
		size_t fileSize = ftell(file);
		fseek(file, 0, SEEK_SET);
		void* data = malloc(fileSize);
		fread(data, fileSize, 1, file);
		fclose(file);

		std::string output;

		if (argc == 3 && !strcmp(argv[2], "auto"))
		{
			std::string fileName = argv[1];

			auto foundBackSlash = fileName.find_last_of('\\');
			auto foundForwardSlash = fileName.find_last_of('/');
			if (foundBackSlash != std::string::npos)
			{
				fileName = fileName.substr(foundBackSlash + 1, fileName.size() - foundBackSlash);
			}
			else if (foundForwardSlash != std::string::npos)
			{
				fileName = fileName.substr(foundForwardSlash + 1, fileName.size() - foundForwardSlash);
			}

			FileType fType;
			auto it = matchingFiles.find(fileName);
			if (it != matchingFiles.end())
			{
				output = AutoUnpack((char*)data, fileSize, it->second);
			}
			else
			{
				std::cout << "file: " << fileName.c_str() << " has no auto unpack functionality" << std::endl;
				PauseExit();
			}
		}
		else
		{
			output = ManualConvertFile((char*)data, fileSize, argv[2]);
		}

		FILE* converted = fopen((std::string(argv[1]) + "_CNV.txt").c_str(), "w+");
		if (converted)
		{
			fwrite(output.c_str(), output.size(), 1, converted);
			fclose(converted);
		}

	}
}


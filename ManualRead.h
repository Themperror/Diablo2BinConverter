#pragma once

#include "util.h"

class FormatDescriptor
{
public:
	enum class CommandType
	{
		s8,
		u8,
		s16,
		u16,
		s32,
		u32,
		chararray,
		ignore,
	};

	FormatDescriptor(const std::string& format);
	int GetNextCommand(CommandType& outType);
	int GetTotalCommandSize();

private:
	int GetArgSize();
	std::string m_format = "";
	int m_formatIndex = 0;
};



FormatDescriptor::FormatDescriptor(const std::string& format)
{
	m_format = format;
	m_formatIndex = 0;
}

int FormatDescriptor::GetArgSize()
{
	std::string num = "";
	m_formatIndex++;
	while (isdigit(m_format[m_formatIndex]) || isupper(m_format[m_formatIndex]))
	{
		num += m_format[m_formatIndex];
		m_formatIndex++;
	}

	m_formatIndex--;
	return strtol(num.c_str(), nullptr, 16);
}
int FormatDescriptor::GetNextCommand(CommandType& outType)
{
	if (m_formatIndex >= m_format.size())
	{
		outType = CommandType::ignore;
		m_formatIndex = 0;
		return 0;
	}

	int cmdSize = 0;
	switch (m_format[m_formatIndex])
	{
	case 'c':
	{
		outType = CommandType::s8;
		cmdSize = sizeof(int8_t);
	}
	break;
	case 'b':
	{
		outType = CommandType::u8;
		cmdSize = sizeof(uint8_t);
	}
	break;
	case 's':
	{
		outType = CommandType::s16;
		cmdSize = sizeof(int16_t);
	}
	break;
	case 'w':
	{
		outType = CommandType::u16;
		cmdSize = sizeof(uint16_t);
	}
	break;
	case 'i':
	{
		outType = CommandType::s32;
		cmdSize = sizeof(int32_t);
	}
	break;
	case 'u':
	{
		outType = CommandType::s32;
		cmdSize = sizeof(uint32_t);
	}
	break;
	case 'a':
	{
		outType = CommandType::chararray;
		cmdSize = GetArgSize();
	}
	break;
	case 'x':
	{
		outType = CommandType::ignore;
		cmdSize = GetArgSize();
	}
	break;
	default:
		std::cout << "Invalid command found: " << m_format[m_formatIndex] << std::endl;
		PauseExit();
		break;
	}

	m_formatIndex++;

	return cmdSize;
}

int FormatDescriptor::GetTotalCommandSize()
{
	int currentIndex = m_formatIndex;
	m_formatIndex = 0;
	int size = 0;
	while (true)
	{
		CommandType cmd;
		int currentCommandSize = GetNextCommand(cmd);
		if (currentCommandSize == 0)
		{
			break;
		}
		else
		{
			size += currentCommandSize;
		}
	}
	m_formatIndex = currentIndex;
	return size;
}



std::string ManualConvertFile(char* data, size_t length, std::string format)
{
	//format follows:
	//'c' = signed char
	//'b' = byte
	//'s' = short
	//'w' = wide short
	//'i' = int
	//'u' = unsigned int
	//'aXX' = char array where XX is the amount of characters in hex
	//'xXX' = ignore data, where XX is the amount of bytes in hex
	size_t i = 0;
	int currentFormat = 0;

	FormatDescriptor formatDesc(format);

	std::string output;
	output.reserve(512 * 1024 * 16);


	int amountFormats = 0;
	memcpy(&amountFormats, data, sizeof(int));
	i += 4;

	int formatSize = formatDesc.GetTotalCommandSize();

	if (amountFormats * formatSize != length - 4)
	{
		std::cout << "Format doesn't fit:  " << "Size: " << formatSize << "  Amount: " << amountFormats << "   File Size: " << length << "   Total Format Size: " << (amountFormats * formatSize) << std::endl;
		system("pause");
		std::quick_exit(0);
	}

	char buf[512];
	while (i < length)
	{
		FormatDescriptor::CommandType outCmd;
		int commandSize = formatDesc.GetNextCommand(outCmd);
		if (commandSize == 0)
		{
			output += "\n";
			continue;
		}
		switch (outCmd)
		{
		case FormatDescriptor::CommandType::s8:
		{
			char val = 0;
			memcpy(&val, &data[i], sizeof(char));
			output += _itoa(val, buf, 10);
		}
		break;
		case FormatDescriptor::CommandType::u8:
		{
			unsigned char val = 0;
			memcpy(&val, &data[i], sizeof(unsigned char));
			output += _itoa(val, buf, 10);
		}
		break;
		case FormatDescriptor::CommandType::s16:
		{
			short val = 0;
			memcpy(&val, &data[i], sizeof(short));
			output += _itoa(val, buf, 10);
		}
		break;
		case FormatDescriptor::CommandType::u16:
		{
			unsigned short val = 0;
			memcpy(&val, &data[i], sizeof(unsigned short));
			output += _itoa(val, buf, 10);
		}
		break;
		case FormatDescriptor::CommandType::s32:
		{
			int val = 0;
			memcpy(&val, &data[i], sizeof(int));
			output += _itoa(val, buf, 10);
		}
		break;
		case FormatDescriptor::CommandType::u32:
		{
			unsigned int val = 0;
			memcpy(&val, &data[i], sizeof(unsigned int));
			output += _itoa(val, buf, 10);
		}
		break;
		case FormatDescriptor::CommandType::chararray:
		{
			int stringLength = strlen(&data[i]);
			if (stringLength == 0)
			{
				output.append("_");
			}
			else
			{
				output.append(&data[i], stringLength);
			}
		}
		break;
		case FormatDescriptor::CommandType::ignore:
		{

		}
		break;
		}
		i += commandSize;

		if (outCmd != FormatDescriptor::CommandType::ignore)
		{
			output += "\t";
		}
	}
	std::cout << output.c_str() << std::endl;
	return output;
}

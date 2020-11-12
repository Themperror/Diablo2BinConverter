#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <vector>


#define FOR(statementBegin, item,  statementEnd ,size)for(int i=0;i<size;i++)statementBegin item[i] statementEnd
#define FORSTR(statementBegin, name,  statementEnd ,size)for(int i=0;i<size;i++)statementBegin name << i statementEnd
void PauseExit()
{
	system("pause");
	std::quick_exit(0);
}

#ifndef PROMPT_H
#define PROMPT_H

#include <Windows.h>
#include<WinUser.h>

class Prompt
{
public:
	static int Open(const char* description, const char* title, unsigned int type);
};
#endif
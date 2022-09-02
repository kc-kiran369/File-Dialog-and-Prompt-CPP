#ifndef FILEDIALOG_H
#define FILEDIALOG_H

#include <Windows.h>
#include <string>
#include <commdlg.h>

class FileDialog
{
public:
	static std::string OpenFile(const char* filter);
	static std::string SaveFile(const char* filter);
};
#endif
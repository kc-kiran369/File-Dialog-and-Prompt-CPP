#include"FileDialog.h"

std::string FileDialog::OpenFile(const char* filter)
{
	OPENFILENAMEA ofn;
	char szFile[260] = { 0 };
	ZeroMemory(&ofn, sizeof(OPENFILENAME));
	ofn.lStructSize = sizeof(OPENFILENAME);
	ofn.hwndOwner = GetActiveWindow();
	ofn.lpstrFile = szFile;
	ofn.nMaxFile = sizeof(szFile);
	ofn.lpstrFilter = filter;
	ofn.nFilterIndex = 1;
	ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST | OFN_NOCHANGEDIR;
	if (GetOpenFileNameA(&ofn) == TRUE)
	{
		return ofn.lpstrFile;
	}
	return std::string();
}

std::string FileDialog::SaveFile(const char* filter)
{
	OPENFILENAMEA ofn;
	char szFile[260] = { 0 };
	ZeroMemory(&ofn, (sizeof(OPENFILENAME)));
	ofn.lStructSize = sizeof(OPENFILENAME);
	ofn.hwndOwner = GetActiveWindow();
	ofn.lpstrFile = szFile;
	ofn.nMaxFile = sizeof(szFile);
	ofn.lpstrFilter = filter;
	ofn.nFilterIndex = 1;
	ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST | OFN_NOCHANGEDIR;
	if (GetSaveFileNameA(&ofn) == TRUE)
	{
		return ofn.lpstrFile;
	}
	return std::string();
}

///How to use
/// Header File : #include <commdlg.h>
///
///Additional Includes: #include <Windows.h>
///						#include <string>

///  lStructSize
///- The length, in bytes, of the structure.Use sizeof(OPENFILENAME) for this parameter.
/// 
/// lpstrFilter
///- A buffer containing pairs of null - terminated filter strings.The last string in the buffer must be terminated by two NULL characters.
///
///  nFilterIndex
///- The index of the currently selected filter in the File Types control.
/// 
///  lpstrFile
///- The file name used to initialize the File Name edit control.The first character of this buffer must be NULL if initialization is not necessary.

///For More Information 
///Visit : https://docs.microsoft.com/en-us/windows/win32/api/commdlg/ns-commdlg-openfilenamea
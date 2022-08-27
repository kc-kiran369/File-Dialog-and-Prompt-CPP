#ifndef FILEDIALOG_H
#define FILEDIALOG_H

#include <Windows.h>
#include <string>
#include <commdlg.h>
#include <glfw3.h>
#define GLFW_EXPOSE_NATIVE_WIN32
#include <glfw3native.h>

class FileDialog
{
public:
	static std::string OpenFile(const char* filter, GLFWwindow* window);
	static std::string SaveFile(const char* filter, GLFWwindow* window);
};
#endif
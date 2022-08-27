#include"Prompt.h"

int Prompt::Open(GLFWwindow* window, const char* description, const char* title, unsigned int type)
{
	int result = MessageBoxA(glfwGetWin32Window(window), description, title, type);
	return result;
}

///		How To Use
/// Header File : #include<WinUser.h>
/// Additional Includes : #include <Windows.h>
///						  #include <glfw3.h>
///						  #define GLFW_EXPOSE_NATIVE_WIN32
///						  #include <glfw3native.h>
/// 
/// Function : MessageBoxA
///		First Parameter : Parent window of the message box
///		Second Parameter : The message to be displayed
///		Third Parameter : The title of the prompt dialog
///		Fourth Parameter : TYPE 
///					1) MB_ABORTRETRYIGNORE 
///					2) MB_CANCELTRYCONTINUE
///					3) MB_HELP
///					4) MB_OK
///					5) MB_OKCALCEL
///					6) MB_RETRYCANCEL
///					7) MB_YESNO
///					8) MB_YESNOCANCEL
///				
///				Icons
///					1) MB_ICONERROR
///					2) MB_ICONQUESTION
///					3) MB_ICONWARNING
///					4) MB_ICONINFORMATION
/// 
/// For More Information
/// VISIT : https://docs.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-messageboxa
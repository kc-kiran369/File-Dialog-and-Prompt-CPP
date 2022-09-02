#include<iostream>

#include"FileDialog.h"
#include"Prompt.h"

int main()
{
	FileDialog::OpenFile(".png\0");
	FileDialog::SaveFile(".png\0");
	//For More Information Goto FileDialog.cpp

	int result = Prompt::Open("This is description", "Title Here", MB_OKCANCEL | MB_ICONINFORMATION);
	//For More Information Goto Prompt.cpp

	switch (result)
	{
	case IDOK:
		std::cout << "OK clicked\n";
		break;
	case IDCANCEL:
		std::cout << "Cancel clicked\n";
		break;
	case IDABORT:
		std::cout << "Abort clicked\n";
		break;
	case IDRETRY:
		std::cout << "Retry clicked\n";
		break;
	default:
		std::cout << "Default\n";
		break;
	}

	return EXIT_SUCCESS;
}
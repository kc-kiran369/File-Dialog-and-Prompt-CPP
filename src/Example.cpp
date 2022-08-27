#include<iostream>

#include"FileDialog.h"
#include"Prompt.h"

#include<glfw3.h>

int main()
{
	glfwInit();
	GLFWwindow* window = glfwCreateWindow(600, 600, "File Dialog And Prompt Window", nullptr, nullptr);
	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);

	FileDialog::OpenFile(".png\0", window);
	//For More Information Goto FileDialog.cpp

	Prompt::Open(window, "This is description", "Title Here", MB_OKCANCEL | MB_ICONINFORMATION);
	//For More Information Goto Prompt.cpp

	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0.2f, 0.1f, 0.1f, 1.0f);

		glfwPollEvents();
		glfwSwapBuffers(window);
	}

	glfwTerminate();
	return EXIT_SUCCESS;
}
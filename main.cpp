#define GLFW_DLL
#include <iostream>
#include <GLFW/glfw3.h>
#include <string>
using namespace std;

int main()
{

	if(!glfwInit) {
		std::cout << "Something failed succesfully!" << std::endl;
	} else {
		std::cout << "GLFW Successfully initialized!" << std::endl;
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

	GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
	if (!window)
	{
		// Window or OpenGL context creation failed
		std::cout << "Something failed." << std::endl;
	}

	glfwTerminate();

	return 0;
}
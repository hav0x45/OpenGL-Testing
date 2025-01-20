#define GLFW_DLL
#include <iostream>
#include <GLFW/glfw3.h>
#include <string>
using namespace std;

int main()
{

	// Check for GLFW init
	if(!glfwInit) {
		std::cout << "Something failed succesfully!" << std::endl;
	} else {
		std::cout << "GLFW Successfully initialized!" << std::endl;
	}

    // Create a window
    GLFWwindow* window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    
	// Check for the window
	if (!window)
    {
        glfwTerminate();
        return -1;
    }

	// Terminate the program
	glfwTerminate();

	return 0;
}
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

    /* Create a windowed mode window and its OpenGL context */
    GLFWwindow* window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    
	if (!window)
    {
        glfwTerminate();
        return -1;
    }

	glfwTerminate();

	return 0;
}
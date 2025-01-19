#define GLFW_DLL
#include <iostream>
#include <GLFW/glfw3.h>
using namespace std;

int main(void)
{

    std::cout << "Hello Terminal!" << std::endl;

	if(!glfwInit) {
		std::cout << "Something failed but, init system is working #rep +rep aki röps höps!" << std::endl;
	} else {
		std::cout << "Something is successfully wrong!" << std::endl;
	}

	GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", glfwGetPrimaryMonitor(), NULL);

	return 0;
}
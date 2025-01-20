#define GLFW_DLL
#include <iostream>
#include <GLFW/glfw3.h>
using namespace std;

int main(void)
{

    std::cout << "Hello Terminal!" << std::endl;

	if(!glfwInit) {
		std::cout << "Something failed succesfully!" << std::endl;
	} else {
		std::cout << "GLFW Successfully initialized!" << std::endl;
	}

	return 0;
}
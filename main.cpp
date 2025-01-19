#define GLFW_DLL
#include <iostream>
#include <GLFW/glfw3.h>
using namespace std;

int main(void)
{

    std::cout << "Hello Terminal!" << std::endl;

	GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", glfwGetPrimaryMonitor(), NULL);

	return 0;
}
#define GLFW_DLL
#include <iostream>
#include <GLFW/glfw3.h>
using namespace std;

int main(void)
{
	GLFWwindow *window;

	if (!glfwInit()) {
		perror("glfwInit Error");
		return -1;
	}

	window = glfwCreateWindow(640, 400, "Hello GLFW", NULL, NULL);
	if (!window) {
		perror("glfwCreatewindow Error");
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	while (!glfwWindowShouldClose(window)) {
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

    std::cout << "Hello!" << std::endl;

	glfwTerminate();
	return 0;
}
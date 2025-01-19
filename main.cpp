#define GLFW_DLL
#include <iostream>
#include <GLFW/glfw3.h>
using namespace std;

int main() {

    bool init = true;

    if(init) {
        std::cout << "Failed to initialize GLFW" << std::endl;
    } else {
        std::cout << "Successfully initialized OpenGL!" << std::endl;
    }

    double time = glfwGetTime();

    std::cout << time;

    std::cout << "Hello OpenGL Program!" << std::endl;

    return 0;
}
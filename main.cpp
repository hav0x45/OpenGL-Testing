#include <iostream>
#include <GLFW/glfw3.h>
using namespace std;

int main() {

    if(!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    } else {
        std::cout << "Successfully initialized OpenGL!" << std::endl;
    }

    return 0;
}
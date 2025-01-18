#define GLFW_DLL
#include <iostream>
#include <GLFW/glfw3.h>
using namespace std;

int main() {

    /*
    if(!glfwInit()) {
        std::cout << "Failed to initialize GLFW" << std::endl;
    } else {
        std::cout << "Successfully initialized OpenGL!" << std::endl;
    }
    */

    std::cout << "Hello OpenGL Program!" << std::endl;

    return 0;
}
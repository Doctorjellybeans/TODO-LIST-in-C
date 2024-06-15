#include <stdio.h>
#include <GLFW/glfw3.h>

int main() {
    if (!glfwInit()) {
        // Fallo la inicializacion de glfw
        return -1;
    }

    // Proceso para crear una ventana
    GLFWwindow* window = glfwCreateWindow(1280, 720, "TODO",NULL,NULL); 
    if (!window) {
        return -2;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0.1f,0.1f,0.1f,0.1f);

        glfwPollEvents();
        glfwSwapBuffers(window);
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
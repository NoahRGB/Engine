#include "engine.h"

#include <iostream>

const int WIDTH = 500, HEIGHT = 500;

Engine::Engine(int width, int height) {
    WIDTH = width;
    HEIGHT = height;

    window = nullptr;
}

Engine::~Engine() {
    glfwTerminate();
}

int Engine::init() {

    // GLFW init
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // create GLFW window
    window = glfwCreateWindow(WIDTH, HEIGHT, "Window", NULL, NULL);
    if (window == NULL) {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    // init GLAD
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cout << "Failed to initialise GLAD" << std::endl;
        return -1;
    }

    glViewport(0, 0, WIDTH, HEIGHT);

    return 0;
}

void Engine::input() {

}

void Engine::update() {

}

void Engine::render() {

    //render

    // check for events, swap buffers
    glfwSwapBuffers(window);
    glfwPollEvents();
}

void Engine::run() {

    // render loop
    while (!glfwWindowShouldClose(window)) {
        input();
        update();
        render();
    }
}
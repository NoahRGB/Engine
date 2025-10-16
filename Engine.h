#pragma once

#include <glad/glad.h>
#include <glfw3.h>

class Engine {
public:
	Engine(int width, int height);
	~Engine();

	int init();
	void run();

	void input();
	void update();
	void render();

private:
	int WIDTH, HEIGHT;

	GLFWwindow* window;

};
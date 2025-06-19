#include "Init.h"

#include "GLFW/glfw3.h"

#include <iostream>

void Obsn::setup()
{
  if (glfwInit() == GLFW_FALSE)
  {
    std::cerr << "Failed to initialize GLFW\n";
  }
}

void Obsn::cleanup()
{
  glfwTerminate();
}

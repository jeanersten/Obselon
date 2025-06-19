#include "Window.h"

#include <glad/gl.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include <string>

Obsn::Graphics::Window::Window(int width, int height, const char* title)
  : m_width(width)
  , m_height(height)
  , m_title(title)
  , m_object(nullptr)
{}

Obsn::Graphics::Window::~Window()
{
  glfwDestroyWindow(m_object);
}

bool Obsn::Graphics::Window::create()
{
  m_object = glfwCreateWindow(m_width, m_height, m_title, nullptr, nullptr);

  if (m_object == nullptr)
  {
    std::cerr << "Failed to create GLFW window!\n";

    return false;
  }

  glfwMakeContextCurrent(m_object);

  if (!gladLoadGL(glfwGetProcAddress))
  {
    std::cerr << "Failed to load OpenGL with GLAD!\n";
  }

  glfwSwapInterval(1);

  glClearColor(0.36f, 0.51f, 0.63f, 1.0f);
  glClearDepth(1.0f);


  return true;
}

bool Obsn::Graphics::Window::closed()
{
  return glfwWindowShouldClose(m_object);
}

void Obsn::Graphics::Window::update()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  glfwPollEvents();
  glfwSwapBuffers(m_object);
}

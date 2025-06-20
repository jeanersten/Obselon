#pragma once

#include <GLFW/glfw3.h>

#include <string>

namespace Obsn
{
  namespace Graphics
  {
    class Window
    {
    private:
      int m_width;
      int m_height;
      const char* m_title;

      GLFWwindow* m_object;

    public:
      Window(int width, int height, const char* title);
      ~Window();

      bool create();

      bool closed();

      void clear();
      void update();
    };
  }
}

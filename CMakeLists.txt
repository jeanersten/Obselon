cmake_minimum_required (VERSION 3.10)

project (Obselon LANGUAGES CXX)

add_subdirectory ("vendor/GLAD")
add_subdirectory ("vendor/GLFW")

add_executable (Obsn
  "source/Graphics/Window.cpp"
  "source/Game.cpp"
  "source/Init.cpp"
  "source/Main.cpp"

  "source/Graphics/Window.h"
  "source/Game.h"
  "source/Init.h"
)

add_definitions (-DGLFW_INCLUDE_NONE)

target_link_libraries (Obsn glad glfw)

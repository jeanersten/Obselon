cmake_minimum_required (VERSION 3.10)

project (Obselon LANGUAGES CXX)

add_subdirectory ("vendor/GLFW")

add_executable (Obsn
  "source/Main.cpp"
)

target_link_libraries (Obsn glfw)

cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)

project("program")
find_package("pybind11")

include_directories("include")
set(EXECUTABLE_OUTPUT_PATH "../")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable("program" 
  src/main.cpp
  src/python_script.cpp
  src/dummy.cpp
  include/python_script.h
  include/dummy.h
)
target_link_libraries("program" PRIVATE 
-static
-static-libgcc 
-static-libstdc++
pybind11::embed
)


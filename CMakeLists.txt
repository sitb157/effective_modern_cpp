cmake_minimum_required(VERSION 3.11)

project(
  EffectiveModernCPP 
  VERSION 0.1
  DESCRIPTION "To Practice"
  LANGUAGES CXX)

add_subdirectory(lib)

add_executable (main main.cpp)

target_link_libraries(main shape)

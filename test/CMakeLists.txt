cmake_minimum_required(VERSION 3.11)

project(
  UnitTest 
  VERSION 0.1
  DESCRIPTION "To Practice"
  LANGUAGES CXX
)

include_directories(../lib)
add_executable(test_1 test_1.cpp)
add_executable(test_2 test_2.cpp)
add_dependencies(test_1 shape)
add_dependencies(test_2 namespaces)
target_link_libraries(test_1 shape)
target_link_libraries(test_2 namespaces)




cmake_minimum_required(VERSION 3.11)

project(
  EffectiveModernCPP 
  VERSION 0.1
  DESCRIPTION "To Practice"
  LANGUAGES CXX)

add_subdirectory(lib)
add_subdirectory(test)

add_executable (main main.cpp)

target_link_libraries(main shape namespaces)

include (CTest)
add_test(test_1 test/test_1)
add_test(test_2 test/test_2)

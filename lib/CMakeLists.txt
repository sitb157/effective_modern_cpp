add_library(shape STATIC shape.cpp)
add_library(namespaces STATIC namespaces.cpp)

target_include_directories(shape PUBLIC ${CMAKE_SOURCE_DIR}/includes)
target_include_directories(namespaces PUBLIC ${CMAKE_SOURCE_DIR}/includes)

target_compile_options(shape PRIVATE -Wall -Werror)
target_compile_options(namespaces PRIVATE -Wall -Werror)

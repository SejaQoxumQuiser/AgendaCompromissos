cmake_minimum_required(VERSION 3.6)
project(teste)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
#set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets)

include_directories({Qt5Widgets_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES main.cpp)


add_executable(main main.cpp)

target_link_libraries(main Qt5::Widgets)


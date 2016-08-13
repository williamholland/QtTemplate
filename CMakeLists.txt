cmake_minimum_required(VERSION 3.0)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Core)
find_package(Qt5Widgets)
find_package(Qt5Gui)
find_package(Qt5DBus)

set(myqt_SOURCES main.cpp mainWindow.cpp child.cpp)

add_executable(qt-template ${myqt_SOURCES})
target_link_libraries(qt-template Qt5::Core Qt5::Widgets Qt5::DBus)

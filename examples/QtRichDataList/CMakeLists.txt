cmake_minimum_required(VERSION 3.1.0)

project(QtDemo)

if(WIN32)
message("WARNING: On Windows, please set the Qt5_DIR to the Qt5 CMake configuration path")
set(Qt5_DIR C:/Qt/5.13.1/msvc2017_64/lib/cmake/Qt5)
endif()

include_directories(../../project/qtextrawidgets/headers)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(project_sources
../../project/qtextrawidgets/sources/ActiveLabel.cpp
../../project/qtextrawidgets/sources/Button.cpp
../../project/qtextrawidgets/sources/CentralWidget.cpp
../../project/qtextrawidgets/sources//HorizontalLine.cpp 
../../project/qtextrawidgets/sources/IndicatorBar.cpp
../../project/qtextrawidgets/sources/IndicatorCircular.cpp
../../project/qtextrawidgets/sources/PictureBox.cpp 
../../project/qtextrawidgets/sources/RichDataList.cpp
../../project/qtextrawidgets/sources/RichLabel.cpp
../../project/qtextrawidgets/sources//ThemeHandler.cpp 
../../project/qtextrawidgets/sources//VerticalLine.cpp 
sources/QtDemo.cpp 
sources/MainWindow.cpp 
sources/main.cpp
)

set(project_headers 
../../project/qtextrawidgets/headers/ActiveLabel.hpp
../../project/qtextrawidgets/headers/Button.hpp
../../project/qtextrawidgets/headers/CentralWidget.hpp
../../project/qtextrawidgets/headers//HorizontalLine.hpp
../../project/qtextrawidgets/headers/IndicatorBar.hpp
../../project/qtextrawidgets/headers/IndicatorCircular.hpp
../../project/qtextrawidgets/headers/PictureBox.hpp
../../project/qtextrawidgets/headers/RichDataList.hpp
../../project/qtextrawidgets/headers/RichLabel.hpp
../../project/qtextrawidgets/headers//ThemeHandler.hpp
../../project/qtextrawidgets/headers//VerticalLine.hpp
sources/QtDemo.h 
sources/MainWindow.h 
)

if(WIN32)
add_executable(QtDemo WIN32 ${project_sources} ${project_headers} ${project_resources})
else()
add_executable(QtDemo ${project_sources} ${project_headers} ${project_resources})
link_libraries(rt pthread dl)
endif()

target_link_libraries(QtDemo Qt5::Widgets Qt5::Core)

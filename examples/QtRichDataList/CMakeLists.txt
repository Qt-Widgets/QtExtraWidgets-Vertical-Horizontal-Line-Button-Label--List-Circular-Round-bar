cmake_minimum_required(VERSION 3.1.0)

project(QtDemo)

if(WIN32)
message("WARNING: On Windows, please set the Qt5_DIR to the Qt5 CMake configuration path")
set(Qt5_DIR C:/Qt/5.13.1/msvc2017_64/lib/cmake/Qt5)
endif()

include_directories(../../project/include)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(project_sources
../../project/src/ActiveLabel.cpp
../../project/src/Button.cpp
../../project/src/CentralWidget.cpp
../../project/src/HorizontalLine.cpp
../../project/src/IndicatorBar.cpp
../../project/src/IndicatorCircular.cpp
../../project/src/PictureBox.cpp
../../project/src/RichDataList.cpp
../../project/src/RichLabel.cpp
../../project/src/ThemeHandler.cpp
../../project/src/VerticalLine.cpp
src/QtDemo.cpp
src/MainWindow.cpp
src/main.cpp
)

set(project_headers 
../../project/include/ActiveLabel.hpp
../../project/include/Button.hpp
../../project/include/CentralWidget.hpp
../../project/include/HorizontalLine.hpp
../../project/include/IndicatorBar.hpp
../../project/include/IndicatorCircular.hpp
../../project/include/PictureBox.hpp
../../project/include/RichDataList.hpp
../../project/include/RichLabel.hpp
../../project/include/ThemeHandler.hpp
../../project/include/VerticalLine.hpp
src/QtDemo.h
src/MainWindow.h
)

if(WIN32)
add_executable(QtDemo WIN32 ${project_sources} ${project_headers} ${project_resources})
else()
add_executable(QtDemo ${project_sources} ${project_headers} ${project_resources})
link_libraries(rt pthread dl)
endif()

target_link_libraries(QtDemo Qt5::Widgets Qt5::Core)

cmake_minimum_required(VERSION 3.8)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(QtExtraWidgets)

if(WIN32)
message("WARNING: On Windows, please set the Qt5_DIR to the Qt5 CMake configuration path")
set(Qt5_DIR C:/Qt/5.13.1/msvc2017_64/lib/cmake/Qt5)
endif()

include_directories(./headers)

find_package(Qt5 COMPONENTS Core Widgets Gui REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(PROJECT_SOURCE_DIR ./sources)
set(PROJECT_HEADER_DIR ./headers)

set(project_sources
${PROJECT_SOURCE_DIR}/ActiveLabel.cpp 
${PROJECT_SOURCE_DIR}/Button.cpp 
${PROJECT_SOURCE_DIR}/CentralWidget.cpp 
${PROJECT_SOURCE_DIR}/HorizontalLine.cpp 
${PROJECT_SOURCE_DIR}/IndicatorBar.cpp 
${PROJECT_SOURCE_DIR}/IndicatorCircular.cpp 
${PROJECT_SOURCE_DIR}/PictureBox.cpp 
${PROJECT_SOURCE_DIR}/RichDataList.cpp 
${PROJECT_SOURCE_DIR}/RichOptionList.cpp 
${PROJECT_SOURCE_DIR}/RichLabel.cpp 
${PROJECT_SOURCE_DIR}/ThemeHandler.cpp 
${PROJECT_SOURCE_DIR}/VerticalLine.cpp 
)

set(project_headers 
${PROJECT_HEADER_DIR}/ActiveLabel.hpp 
${PROJECT_HEADER_DIR}/Button.hpp 
${PROJECT_HEADER_DIR}/CentralWidget.hpp 
${PROJECT_HEADER_DIR}/HorizontalLine.hpp 
${PROJECT_HEADER_DIR}/IndicatorBar.hpp 
${PROJECT_HEADER_DIR}/IndicatorCircular.hpp 
${PROJECT_HEADER_DIR}/PictureBox.hpp 
${PROJECT_HEADER_DIR}/RichDataList.hpp 
${PROJECT_HEADER_DIR}/RichOptionList.hpp 
${PROJECT_HEADER_DIR}/RichLabel.hpp 
${PROJECT_HEADER_DIR}/ThemeHandler.hpp 
${PROJECT_HEADER_DIR}/VerticalLine.hpp 
)

add_library(QtExtraWidgets ${project_sources} ${project_headers})
target_link_libraries(QtExtraWidgets Qt5::Widgets Qt5::Core)

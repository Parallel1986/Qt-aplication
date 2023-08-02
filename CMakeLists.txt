cmake_minimum_required(VERSION 3.5)
project(ColorCircle VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PREFIX_PATH "D:\\Qt\\5.15.2\\mingw81_64\\lib\\cmake")
#set(CMAKE_PREFIX_PATH "D:\\Qt\\5.15.2\\msvc2019_64\\lib\\cmake")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(PROJECT_SOURCES
        main.cpp
        ColorCircle.h ColorCircle.cpp
)


find_package(Qt5 COMPONENTS
        Core
	Gui
	Widgets
	REQUIRED
)

add_executable(ColorCircle WIN32 ${PROJECT_SOURCES})

target_link_libraries(ColorCircle
    Qt5::Core
	Qt5::Gui
	Qt5::Widgets
)
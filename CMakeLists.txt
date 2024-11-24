cmake_minimum_required(VERSION 3.5)


project(SimpleFileManager)


set(CMAKE_CXX_STANDARD 11)


find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)


add_executable(SimpleFileManager src/main.cpp src/mainwindow.cpp)


target_link_libraries(SimpleFileManager Qt5::Core Qt5::Gui Qt5::Widgets)


set_target_properties(SimpleFileManager PROPERTIES

    AUTOMOC ON

    AUTOUIC ON

    AUTORCC ON

)

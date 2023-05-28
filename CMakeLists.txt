cmake_minimum_required(VERSION 3.5)

project(ToDoList VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE DEBUG)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_PREFIX_PATH "C:/Qt/6.5.0/mingw_64/lib/cmake")
set(WINDEPLOYQT_EXECUTABLE "C:/Qt/6.5.0/mingw_64/bin/windeployqt.exe")

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Qt6 REQUIRED COMPONENTS Sql)
find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Test)

set(PROJECT_SOURCES
    src/main.cpp
    src/mainwindow.cpp
    src/includes/mainwindow.h
    src/mainwindow.ui
    src/test/test.cpp
    src/includes/test.h
    src/includes/ui_mainwindow.h
)

enable_language("RC")
set(WIN32_RESOURCES ${CMAKE_CURRENT_SOURCE_DIR}/res/ToDoList.rc)


if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(ToDoList
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        ${WIN32_RESOURCES}
    )
endif()

target_link_libraries(ToDoList PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(ToDoList PRIVATE Qt6::Test)

target_include_directories(ToDoList PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src/includes
)

install(TARGETS ToDoList
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

target_link_libraries(ToDoList PRIVATE Qt6::Sql)
target_link_libraries(ToDoList PRIVATE Qt6::Core)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(ToDoList)
endif()

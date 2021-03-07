cmake_minimum_required(VERSION 3.10)

project("Menu_toolbars" VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

message("Looking for Qt...")
find_package(Qt5 COMPONENTS Core Widgets REQUIRED) # for QtCore, qtWidgets
if ( ${Qt5_FOUND})
    message("Found Qt : " ${Qt5_VERSION})
else()
    message("Couldnot find Qt5")
endif()

set(SRC_DIR src)
set(INCLUDE include)
set(SOURCES 
    ${SRC_DIR}/simple_menu.cpp 
    ${SRC_DIR}/simple_menu_main.cpp 
    )
set(EXE main)

message("The name of the executable is main.")

add_executable(${EXE} ${SOURCES})


target_include_directories(${EXE} PRIVATE ${INCLUDE})


target_link_libraries(
    ${EXE}
    Qt5::Widgets
    Qt5::Core
)
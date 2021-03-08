cmake_minimum_required(VERSION 3.10)

project("date_time" VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

message("Looking for Qt...")
find_package(Qt5 COMPONENTS Core REQUIRED) # for QtCore, qtWidgets
if ( ${Qt5_FOUND})
    message("Found Qt : " ${Qt5_VERSION})
else()
    message("Couldnot find Qt5")
endif()

set(SRC_DIR src)
set(SOURCES ${SRC_DIR}/date_01.cpp)
set(EXE main)

message("The name of the executable is main.")

add_executable(${EXE} ${SOURCES})

target_link_libraries(
    main
    Qt5::Core
)
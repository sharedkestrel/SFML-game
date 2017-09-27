cmake_minimum_required(VERSION 3.6)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build (Debug or Release)" FORCE)
endif()

project(Undefined)

link_directories(SFML/bin)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp config.h Game.cpp Game.h Window.cpp Window.h)
set(EXECUTABLE_NAME "Game")
add_executable(${EXECUTABLE_NAME} ${SOURCE_FILES})

# Set version information in a config.h file
set(myproject_VERSION_MAJOR 0)
set(myproject_VERSION_MINOR 1)
configure_file(
        "${PROJECT_SOURCE_DIR}/config.h.in"
        "${PROJECT_BINARY_DIR}/config.h"
)
include_directories("${PROJECT_BINARY_DIR}")

#find SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
set(SFML_ROOT "SFML")
set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML 2 REQUIRED network audio graphics window system)
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
endif()

#install packages
install(TARGETS ${EXECUTABLE_NAME} DESTINATION bin)

include(InstallRequiredSystemLibraries)
set(CPACK_PACKAGE_VERSION_MAJOR "${myproject_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${myproject_VERSION_MINOR}")
include(CPack)
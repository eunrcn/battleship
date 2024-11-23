cmake_minimum_required(VERSION 3.14)

project(Battleship)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5 REQUIRED graphics window system)

# Add the source files
add_executable(Battleship
    src/main.cpp
    src/Grid.cpp
    src/Ship.cpp
    src/Constants.hpp
)

# Link SFML libraries
target_link_libraries(Battleship sfml-graphics sfml-window sfml-system)

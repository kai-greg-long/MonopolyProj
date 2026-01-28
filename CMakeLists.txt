cmake_minimum_required(VERSION 4.1)
project(MonopolyProj)

set(CMAKE_CXX_STANDARD 20)

add_executable(MonopolyProj

        src/main.cpp
        src/Tile.cpp
        include/Tile.h
        src/PropertyTile.cpp
        include/PropertyTile.h
        include/PropertyTile.h
        include/PropertyTile.h
        include/PropertyTile.h
)

target_include_directories(MonopolyProj PRIVATE include)

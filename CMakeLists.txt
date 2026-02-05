cmake_minimum_required(VERSION 4.1)
project(MonopolyProj)

set(CMAKE_CXX_STANDARD 20)

add_executable(MonopolyProj

        src/main.cpp
        src/tiles/Tile.cpp
        include/tiles/Tile.h
        src/tiles/PropertyTile.cpp
        include/tiles/PropertyTile.h
        src/tiles/DrawTile.cpp
        include/tiles/DrawTile.h
        src/Card.cpp
        include/Card.h
)

target_include_directories(MonopolyProj PRIVATE include)

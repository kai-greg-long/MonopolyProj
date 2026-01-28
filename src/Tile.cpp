#include "Tile.h"
#include <string>

Tile::Tile(const std::string& name)
    : name(name)
{
}

std::string Tile::getName() const {
    return name;
}
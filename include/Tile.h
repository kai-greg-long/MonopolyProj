

#ifndef MONOPOLYPROJ_TILE_H
#define MONOPOLYPROJ_TILE_H

#include <string>

class Player;
class GameState;

class Tile {
public:
    Tile(const std::string& name);
    virtual ~Tile() = default;

    virtual void onLand(Player& player, GameState& gameState) = 0;

    std::string getName() const;

private:
    std::string name;
};

#endif //MONOPOLYPROJ_TILE_H
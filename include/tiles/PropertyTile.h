
#ifndef MONOPOLYPROJ_PROPERTYTILE_H
#define MONOPOLYPROJ_PROPERTYTILE_H
#include "Tile.h"



class PropertyTile : public Tile  {
public:
    PropertyTile(const int& price, const int& rent, const Player* owner, const std::string& name);

    int getPrice();
    int getRent();
    const Player* getOwner();

private: int price;
         int rent;
         const Player* owner;

};

#endif //MONOPOLYPROJ_PROPERTYTILE_H

#ifndef MONOPOLYPROJ_PROPERTYTILE_H
#define MONOPOLYPROJ_PROPERTYTILE_H
#include "Tile.h"



class PropertyTile : public Tile  {
    public:

private: int price;
         int rent;
         Player *owner;

};


#endif //MONOPOLYPROJ_PROPERTYTILE_H
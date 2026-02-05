#include "PropertyTile.h"
#include <string>


PropertyTile::PropertyTile(const int& price, const int& rent,const Player* owner, const std::string& name)
    : Tile(name), price(price), rent(rent), owner(owner) {

};

int PropertyTile::getRent() {
    return rent;
}
int PropertyTile::getPrice() {
    return price;
}

const Player* PropertyTile::getOwner() {
    return owner;
}
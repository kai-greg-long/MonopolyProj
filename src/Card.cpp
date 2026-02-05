
#include "Card.h"

Card::Card(std::string description, Effect cardEffect)
    :description(description),
     cardEffect(cardEffect)
{}

const std::string Card::getDescription() const {
    return description;
}
const Effect Card::getEffect() const {
    return cardEffect;
}
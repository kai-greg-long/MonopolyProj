
#include "Card.h"

Card::Card(std::string description, Effect cardEffect)
    :description(description),
     cardEffect(cardEffect)
{}

std::string Card::getDescription() const {
    return description;
}
Card::Effect Card::getcardEffect() {
    return cardEffect;
}
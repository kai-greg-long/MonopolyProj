
#ifndef MONOPOLYPROJ_CARD_H
#define MONOPOLYPROJ_CARD_H

#include <string>

class Card {

    public:
    enum Effect {MoveTo, GainMoney, LoseMoney, GiveMoney,GoToJail, MovePOS };
    Card(std::string description, Effect cardEffect );

    private: std::string description;
             Effect cardEffect;

    public:
    std::string getDescription() const;
    Effect getcardEffect() const;

};


#endif //MONOPOLYPROJ_CARD_H
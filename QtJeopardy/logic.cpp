#include "logic.h"

Logic::Logic()
{

}

void Logic::PlayerSetNames(QString PlayerInputOne, QString PlayerInputTwo)
{
    Logic::PlayerOne = PlayerInputOne;
    Logic::PlayerTwo = PlayerInputTwo;
}

Logic::PlayerNames Logic::PlayerGetNames() {
    Logic::PlayerGetNames().playerone = Logic::PlayerOne;
    Logic::PlayerGetNames().playertwo = Logic::PlayerTwo;
    return Logic::PlayerGetNames();
}

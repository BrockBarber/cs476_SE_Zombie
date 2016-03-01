//
// Created by horvste on 2/29/16.
//

#include "Survivor.h"

void Survivor::decreaseHealth(int increment) {
    health -= increment;
}

bool Survivor::isAlive() {
    return health > 0;
}

void Survivor::attack(IZombie *zombie) {
    zombie->decreaseHealth(10);
}

Survivor::Survivor() {
    this->health = 100;
}

int Survivor::getHealth() {
    return health;
}

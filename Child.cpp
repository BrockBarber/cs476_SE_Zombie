//
// Created by horvste on 2/29/16.
//

#include "Child.h"
#include "CharacterFactory.h"

void Child::attack(IZombie *zombie) {
    zombie->decreaseHealth(2);
}

std::string Child::getName() {
    return CharacterFactory::CHILD;
}

Child::Child() {
    this->health = 20;
}

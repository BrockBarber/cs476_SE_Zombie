//
// Created by horvste on 2/29/16.
//

#include "Soldier.h"
#include "CharacterFactory.h"

void Soldier::attack(IZombie *zombie) {
    zombie->decreaseHealth(100);
}

std::string Soldier::getName() {
    return CharacterFactory::SOLDIER;
}

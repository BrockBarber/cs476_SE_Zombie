//
// Created by horvste on 2/29/16.
//

#include "Teacher.h"
#include "CharacterFactory.h"

void Teacher::attack(IZombie *zombie) {
    zombie->decreaseHealth(50);
}

std::string Teacher::getName() {
    return CharacterFactory::TEACHER;
}

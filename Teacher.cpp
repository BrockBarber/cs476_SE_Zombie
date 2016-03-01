//
// Created by horvste on 2/29/16.
//

#include "Teacher.h"
#include "CharacterFactory.h"

void Teacher::attack(IZombie *zombie) {
    zombie->decreaseHealth(5);
}

std::string Teacher::getName() {
    return CharacterFactory::TEACHER;
}

Teacher::Teacher() {
    this->health = 50;
}

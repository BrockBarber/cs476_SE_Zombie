//
// Created by ruppjj29 on 3/01/16.
//

#include "Doctor.h"
#include "CharacterFactory.h"

void Doctor::attack(IZombie *zombie) {
    zombie->decreaseHealth(2);
}

std::string Doctor::getName() {
    return CharacterFactory::DOCTOR;
}

Doctor::Doctor() {
    this->health = 75;
}

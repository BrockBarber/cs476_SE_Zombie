#include "Lawyer.h"
#include "CharacterFactory.h"

void Lawyer::attack(IZombie *zombie) {
    zombie->decreaseHealth(5);
}

std::string Lawyer::getName() {
    return CharacterFactory::LAWYER;
}

Lawyer::Lawyer() {
    this->health = 40;
}
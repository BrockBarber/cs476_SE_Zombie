//
// Created by horvste on 2/29/16.
//

#include <bits/stringfwd.h>
#include "Zombie.h"
#include "CharacterFactory.h"

void Zombie::decreaseHealth(int increment) {
    health -= increment;
}

bool Zombie::isAlive() {
    return health > 0;
}

void Zombie::attack(ISurvivor *survivor) {
    survivor->decreaseHealth(10);
}

std::string Zombie::getName() {
    return CharacterFactory::ZOMBIE;
}

Zombie::Zombie() {
    this->health = 100;
}

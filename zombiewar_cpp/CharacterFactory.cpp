//
// Created by horvste on 2/29/16.
//

#include "CharacterFactory.h"
#include "Zombie.h"
#include "CommonInfected.h"
#include "Soldier.h"
#include "Teacher.h"
#include "Child.h"
#include "Tank.h"

const std::string CharacterFactory::ZOMBIE = "Zombie";
const std::string CharacterFactory::COMMON_INFECTED = "CommonInfected";
const std::string CharacterFactory::TANK = "Tank";

const std::string CharacterFactory::CHILD = "Child";
const std::string CharacterFactory::TEACHER = "Teacher";
const std::string CharacterFactory::SOLDIER = "Soldier";


CharacterFactory* CharacterFactory::i = NULL;

CharacterFactory::CharacterFactory() {

}

CharacterFactory::CharacterFactory(const CharacterFactory &orig) {

}

ICharacter *CharacterFactory::makeCharacter(std::string type) {
    if(type == ZOMBIE)
        return (ICharacter *) new Zombie();
    if(type == COMMON_INFECTED)
        return (ICharacter *) new CommonInfected();
    if(type == TANK)
        return (ICharacter *) new Tank();
    if(type == CHILD)
        return (ICharacter *) new Child();
    if(type == TEACHER)
        return (ICharacter *) new Teacher();
    if(type == SOLDIER)
        return (ICharacter *) new Soldier();


    throw;
}

CharacterFactory *CharacterFactory::instance() {
    if (!CharacterFactory::i) CharacterFactory::i = new CharacterFactory();
    return CharacterFactory::i;
}

CharacterFactory::~CharacterFactory() {
}

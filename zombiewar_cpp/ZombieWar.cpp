/* 
 * File:   ZombieWar.cpp
 * Author: thaoc
 * 
 * Created on May 21, 2015, 1:54 PM
 */

#include <iostream>
#include "ZombieWar.h"
#include "CharacterFactory.h"


ZombieWar::ZombieWar() {
}

ZombieWar::ZombieWar(const ZombieWar& orig) {
}

ZombieWar::~ZombieWar() {
}

/**
 * Generates a random number of zombies.
 * @return a pointer to an array of zombies
 */
IZombie * ZombieWar::randomZombies(){
    
    CharacterFactory *f = CharacterFactory::instance();
    return 0;
}

/**
 * Generates a random set of survivors
 * @return a pointer to an array of survivors
 */
ISurvivor * ZombieWar::randomSurvivors(){
   
    CharacterFactory *f = CharacterFactory::instance();
    return 0;
}

/**
 * Check if all characters in the array are all dead.
 * @param array the array of characters
 * @return true if none is alive.
 */
bool ZombieWar::allDead(ICharacter * array){
    return false;
}

void ZombieWar::start(){
    std::cout << "Welcome to ZombieWar" << std::endl;
    IZombie * zombies = this->randomZombies();
    ISurvivor * survivors = this->randomSurvivors();
    
    //for each survivor, make it attack each zombie in the zombies array
    //for each zombie, make it attack each survivor.
    //repeat this process until one side is all dead.
    //make sure dead character does not attack
    //print the number of survivors that are still alive.
    

    
}
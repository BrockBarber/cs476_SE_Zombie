/*
* File:   ZombieWar.h
* Author: Thao, Brock
*
* Created on May 21, 2015, 1:54 PM
*/

#ifndef ZOMBIEWAR_H
#define	ZOMBIEWAR_H

#include "CharacterFactory.h"
#include "ICharacter.h"
#include "ISurvivor.h"
#include "IZombie.h"
#include <memory>
#include <vector>

const int NUM_ZOMBIE_TYPE = 1;
const int NUM_SURVIVOR_TYPE = 1;
void randomZombies();
void randomSurvivors();
bool allDead(std::vector<std::unique_ptr<ICharacter>>);
void start();

#endif	/* ZOMBIEWAR_H */

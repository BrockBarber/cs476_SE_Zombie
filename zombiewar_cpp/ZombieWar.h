/* 
 * File:   ZombieWar.h
 * Author: thaoc
 *
 * Created on May 21, 2015, 1:54 PM
 */

#ifndef ZOMBIEWAR_H
#define	ZOMBIEWAR_H

#include "ICharacter.h"
#include "ISurvivor.h"
#include "IZombie.h"


class ZombieWar {
private:
    IZombie * randomZombies();
    ISurvivor * randomSurvivors();
    bool allDead(ICharacter * array);
public:
    ZombieWar();
    ZombieWar(const ZombieWar& orig);
    virtual ~ZombieWar();
    void start();
private:

};

#endif	/* ZOMBIEWAR_H */

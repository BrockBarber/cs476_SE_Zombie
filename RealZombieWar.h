//
// Created by horvste on 2/29/16.
//

#ifndef ZOMBIEWAR_REALZOMBIEWAR_H
#define ZOMBIEWAR_REALZOMBIEWAR_H

#include <vector>
#include<cstdlib>
#include<ctime>
#include "ICharacter.h"
#include "ISurvivor.h"
#include "CharacterFactory.h"


class RealZombieWar {
private:
    static int numZombie;
    static int numCommonInfected;
    static int numTank;
    static int numChild;
    static int numTeacher;
    static int numSoldier;
    static int numDoctor;

    IZombie * randomZombies();
    ISurvivor * randomSurvivors();
    int randomNumber(bool isZombie);
    bool allDead(std::vector<ICharacter> characterVector);
public:
    RealZombieWar();
    virtual ~RealZombieWar();
    void start();
};


#endif //ZOMBIEWAR_REALZOMBIEWAR_H

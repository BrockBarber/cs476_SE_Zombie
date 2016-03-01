//
// Created by horvste on 2/29/16.
//

#ifndef ZOMBIEWAR_TANK_H
#define ZOMBIEWAR_TANK_H


#include "Zombie.h"

class Tank : public Zombie {

public:
    virtual void attack(ISurvivor *survivor) override;
};


#endif //ZOMBIEWAR_TANK_H

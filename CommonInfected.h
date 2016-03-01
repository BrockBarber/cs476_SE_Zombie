//
// Created by horvste on 2/29/16.
//

#ifndef ZOMBIEWAR_COMMONINFECTED_H
#define ZOMBIEWAR_COMMONINFECTED_H


#include "Zombie.h"

class CommonInfected : public Zombie {

public:
    virtual void attack(ISurvivor *survivor) override;
};


#endif //ZOMBIEWAR_COMMONINFECTED_H

//
// Created by horvste on 2/29/16.
//

#ifndef ZOMBIEWAR_SURVIVOR_H
#define ZOMBIEWAR_SURVIVOR_H


#include "ISurvivor.h"

class Survivor : public ISurvivor{
protected:
    int health;
public:

    Survivor();


    virtual ~Survivor() { }

    virtual void decreaseHealth(int increment);

    virtual bool isAlive();

    virtual void attack(IZombie *zombie);


    virtual int getHealth();
};


#endif //ZOMBIEWAR_SURVIVOR_H

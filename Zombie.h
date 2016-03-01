//
// Created by horvste on 2/29/16.
//

#ifndef ZOMBIEWAR_ZOMBIE_H
#define ZOMBIEWAR_ZOMBIE_H


#include "IZombie.h"

class Zombie : public IZombie{
protected:
    int health;
public:

    Zombie();


    virtual ~Zombie() { }

    virtual void decreaseHealth(int increment) override;

    virtual bool isAlive() override;

    virtual void attack(ISurvivor *survivor) override;


    virtual std::string getName() override;
};


#endif //ZOMBIEWAR_ZOMBIE_H

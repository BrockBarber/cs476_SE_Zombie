//
// Created by horvste on 2/29/16.
//

#ifndef ZOMBIEWAR_SOLDIER_H
#define ZOMBIEWAR_SOLDIER_H


#include "Survivor.h"

class Soldier : public Survivor {


public:
    virtual std::string getName() override;

    virtual void attack(IZombie *zombie) override;
};


#endif //ZOMBIEWAR_SOLDIER_H

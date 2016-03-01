//
// Created by horvste on 2/29/16.
//

#ifndef ZOMBIEWAR_CHILD_H
#define ZOMBIEWAR_CHILD_H


#include "Survivor.h"

class Child : public Survivor {

    virtual void attack(IZombie *zombie) override;

public:

    Child();

    virtual std::string getName() override;
};


#endif //ZOMBIEWAR_CHILD_H

//
// Created by ruppjj29 on 3/1/16.
//

#ifndef ZOMBIEWAR_DOCTOR_H
#define ZOMBIEWAR_DOCTOR_H


#include "Survivor.h"

class Doctor : public Survivor {


public:

    Doctor();


    virtual void attack(IZombie *zombie) override;

    virtual std::string getName() override;
};


#endif //ZOMBIEWAR_DOCTOR_H
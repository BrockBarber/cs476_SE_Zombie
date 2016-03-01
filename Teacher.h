//
// Created by horvste on 2/29/16.
//

#ifndef ZOMBIEWAR_TEACHER_H
#define ZOMBIEWAR_TEACHER_H


#include "Survivor.h"

class Teacher : public Survivor {


public:

    Teacher();


    virtual void attack(IZombie *zombie) override;

    virtual std::string getName() override;
};


#endif //ZOMBIEWAR_TEACHER_H

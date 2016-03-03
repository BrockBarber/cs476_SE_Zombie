#ifndef ZOMBIEWAR_LAWYER_H
#define ZOMBIEWAR_LAWYER_H


#include "Survivor.h"

class Lawyer : public Survivor {


public:

    Lawyer();


    virtual void attack(IZombie *zombie) override;

    virtual std::string getName() override;
};


#endif //ZOMBIEWAR_TEACHER_H
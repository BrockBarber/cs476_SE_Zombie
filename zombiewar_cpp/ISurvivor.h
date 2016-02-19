/* 
 * File:   ISurvival.h
 * Author: thaoc
 *
 * Created on May 20, 2015, 8:08 PM
 */

#ifndef ISURVIVAL_H
#define	ISURVIVAL_H

#include "ICharacter.h"
#include "IZombie.h"

class IZombie;

class ISurvivor: ICharacter{
public:
    virtual void attack(IZombie* zombie) = 0;
};

#endif	/* ISURVIVAL_H */


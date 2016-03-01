/* 
 * File:   ICharacter.h
 * Author: thaoc
 *
 * Created on May 20, 2015, 8:10 PM
 */

#ifndef ICHARACTER_H
#define ICHARACTER_H

#include <string>

class ICharacter {
public:
    virtual void decreaseHealth(int increment = 0) = 0;

    virtual bool isAlive() = 0;

    virtual std::string getName() = 0;
};

#endif	/* ICHARACTER_H */


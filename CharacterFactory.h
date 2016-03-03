/* 
 * File:   CharacterFactory.h
 * Author: thaoc
 *
 * Created on May 21, 2015, 1:31 PM
 * 
 * A character factory for creating different characters.
 * The factory encapsulation the character implementations.
 * 
 */

#ifndef CHARACTERFACTORY_H
#define	CHARACTERFACTORY_H

#include<string>
#include "ICharacter.h"

class CharacterFactory {
private:
    static CharacterFactory *i;
public:
    static const std::string ZOMBIE;
    static const std::string COMMON_INFECTED;
    static const std::string TANK;

    static const std::string CHILD;
    static const std::string TEACHER;
    static const std::string SOLDIER;
    static const std::string DOCTOR;
    static const std::string LAWYER;

    CharacterFactory();
    CharacterFactory(const CharacterFactory& orig);
    ICharacter* makeCharacter(std::string type);
    static CharacterFactory* instance();
    virtual ~CharacterFactory();


};

#endif	/* CHARACTERFACTORY_H */


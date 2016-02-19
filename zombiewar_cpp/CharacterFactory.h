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
    static CharacterFactory* i;
public:
    CharacterFactory();
    CharacterFactory(const CharacterFactory& orig);
    ICharacter* makeCharacter(std::string type);
    static CharacterFactory* instance();
    virtual ~CharacterFactory();


};

#endif	/* CHARACTERFACTORY_H */


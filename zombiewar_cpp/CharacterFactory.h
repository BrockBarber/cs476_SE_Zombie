/* 
 * File:   CharacterFactory.h
 * Author: Thao, Brock
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
#include "CommonInfected.h"

class CharacterFactory {
    unique_ptr<ICharacter> makeCharacter(std::string type);
};

#endif	/* CHARACTERFACTORY_H */


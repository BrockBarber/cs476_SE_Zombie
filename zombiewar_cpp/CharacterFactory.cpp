/* 
 * File:   CharacterFactory.cpp
 * Author: Thao, Brock
 * 
 * Created on May 21, 2015, 1:31 PM
 */

#include "CharacterFactory.h"

CharacterFactory::CharacterFactory() {
}

std::unique_ptr<ICharacter> CharacterFactory::makeCharacter(std::string type){

    //make a character based on type
    //e.g. if type is "common infected", make CommonInfect
	switch(type){
		case "child":
			return std::unique_ptr<ICharacter> = make_unique<Child>();
			break;
		case "Zombie":
			return std::unique_ptr<ICharacter> = make_unique<Zombie>();
			break;
		default:
			//do nothing yet
			break;
	}
    return NULL;
}
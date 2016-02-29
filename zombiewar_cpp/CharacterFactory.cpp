/*
* File:   CharacterFactory.cpp
* Author: Thao, Brock
*
* Created on May 21, 2015, 1:31 PM
*/
#include "CharacterFactory.h"
CharacterFactory::CharacterFactory() {
}

ICharacter* CharacterFactory::makeCharacter(std::string type){

	//make a character based on type
	//e.g. if type is "common infected", make CommonInfect
	if (type == "child"){
		return &Child();
	}
	if(type == "zombie")
		return &Zombie();
	}
	return NULL;
}

/* 
 * File:   CharacterFactory.cpp
 * Author: thaoc
 * 
 * Created on May 21, 2015, 1:31 PM
 */

#include "CharacterFactory.h"

CharacterFactory::CharacterFactory() {
}

CharacterFactory::CharacterFactory(const CharacterFactory& orig) {
}

CharacterFactory::~CharacterFactory() {
    i = new CharacterFactory();
}

ICharacter* CharacterFactory::makeCharacter(std::string type){

    //make a character based on type
    //e.g. if type is "common infected", make CommonInfect
    
    return NULL;
}

CharacterFactory * CharacterFactory::i = 0;

CharacterFactory* CharacterFactory::instance(){
    if (!i) i = new CharacterFactory();
    return i;
}

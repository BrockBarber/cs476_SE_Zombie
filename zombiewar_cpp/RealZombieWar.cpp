//
// Created by horvste on 2/29/16.
//

#include <iostream>
#include "RealZombieWar.h"

int RealZombieWar::numZombie = 0;
int RealZombieWar::numCommonInfected = 0;
int RealZombieWar::numTank = 0;
int RealZombieWar::numChild = 0;
int RealZombieWar::numTeacher = 0;
int RealZombieWar::numSoldier = 0;

RealZombieWar::RealZombieWar() {

}

RealZombieWar::~RealZombieWar() {

}

void RealZombieWar::start() {
    // http://stackoverflow.com/questions/5019393/random-number-generator-c
    std::srand(std::time(0));  // needed once per program run

    std::vector<IZombie *> zombieVector;
    std::vector<ISurvivor *> survivorVector;
    int numberOfRandomZombies = rand() % 10;
    int numberOfRandomSurvivors = rand() % 10;

    for (int i = 0; i < numberOfRandomZombies; i++) {
        zombieVector.push_back(randomZombies());
    }
    for (int i = 0; i < numberOfRandomSurvivors; i++) {
        survivorVector.push_back(randomSurvivors());
    }
    std::cout << "We have " << numberOfRandomSurvivors << " of survivors trying to make it to safety (" <<
            RealZombieWar::numChild << " childeren, " << RealZombieWar::numTeacher << " teachers, " <<
            RealZombieWar::numSoldier <<" soldiers)";

    std::cout << "\nBut there are " << numberOfRandomZombies << " zombies waiting for them (" <<
            RealZombieWar::numZombie << " regular zombies, " << RealZombieWar::numCommonInfected << " common-infected zombies, "
            << RealZombieWar::numTank <<" tank zombies)";

    for (int i = 0; i < numberOfRandomSurvivors; i++) {
        for (int j = 0; j < numberOfRandomZombies; j++) {
            ISurvivor *s = survivorVector[i];
            IZombie *zombie = zombieVector[j];
            s->attack(zombie);
            if (!zombie->isAlive()) {
                std::cout << "\n\t" << s->getName() << " " << i << " killed " << zombie->getName() << " " << j;
            }
        }
    }

    for (int i = 0; i < numberOfRandomZombies; i++) {
        for (int j = 0; j < numberOfRandomSurvivors; j++) {
            IZombie *zombie = zombieVector[i];
            ISurvivor *s = survivorVector[j];
            if (!s->isAlive())
                continue;
            //should move to attack method but don't have time right now
            if (zombie->isAlive())
                zombie->attack(s);
            if (!s->isAlive()) {
                std::cout << "\n\t" << zombie->getName() << " " << i << " killed " << s->getName() << " " << j;
            }
        }
    }

    int numMadeToSafety = 0;
    for (int i = 0; i < numberOfRandomSurvivors; i++) {
        ISurvivor *s = survivorVector[i];
        if (s->isAlive())
            numMadeToSafety++;
    }
    std::cout << "\n";
    if (numMadeToSafety == 0)
        std::cout << "None of the survivors made it to safety";
    else
        std::cout << numMadeToSafety << " survivors made it to safety";

    for (int i = 0; i < survivorVector.size(); i++) {
        delete survivorVector[i];
    }
    for (int i = 0; i < zombieVector.size(); i++) {
        delete zombieVector[i];
    }
    delete CharacterFactory::instance();
}

IZombie *RealZombieWar::randomZombies() {
    CharacterFactory *characterFactory = CharacterFactory::instance();
    int randomNumber = this->randomNumber(true);
    if (randomNumber == 0) {
        RealZombieWar::numZombie++;
        return (IZombie *) characterFactory->makeCharacter(CharacterFactory::ZOMBIE);
    }
    else if (randomNumber == 1) {
        RealZombieWar::numCommonInfected++;
        return (IZombie *) characterFactory->makeCharacter(CharacterFactory::COMMON_INFECTED);
    }
    else if (randomNumber == 2) {
        RealZombieWar::numTank++;
        return (IZombie *) characterFactory->makeCharacter(CharacterFactory::TANK);
    }
    throw;
}

ISurvivor *RealZombieWar::randomSurvivors() {
    CharacterFactory *characterFactory = CharacterFactory::instance();
    int randomNumber = this->randomNumber(false);
    if (randomNumber == 3) {
        RealZombieWar::numChild++;
        return (ISurvivor *) characterFactory->makeCharacter(CharacterFactory::CHILD);
    }
    else if (randomNumber == 4) {
        RealZombieWar::numTeacher++;
        return (ISurvivor *) characterFactory->makeCharacter(CharacterFactory::TEACHER);
    }
    else if (randomNumber == 5) {
        RealZombieWar::numSoldier++;
        return (ISurvivor *) characterFactory->makeCharacter(CharacterFactory::SOLDIER);
    }

    throw;
}

bool RealZombieWar::allDead(std::vector<ICharacter> characterVector) {
    for (int i = 0; i < characterVector.size(); i++) {
        if (characterVector[i].isAlive())
            return false;
    }
    return true;
}

int random(int min, int max) //range : [min, max). Got this function from stackoverflow
{
    return min + rand() % (max - min);
}

int RealZombieWar::randomNumber(bool isZombie) {
    if (isZombie)
        return random(0, 3); //returns 0 to 2

    return random(3, 6); //returns 5-10
}




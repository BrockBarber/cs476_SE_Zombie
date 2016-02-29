/* 
 * File:   ZombieWar.cpp
 * Author: thaoc, Brock Barber
 * 
 * Created on May 21, 2015, 1:54 PM
 */

#include <iostream>
#include <ctime>
#include <cstdlib> 
#include <vector>
#include "ZombieWar.h"
#include "CharacterFactory.h"

/**
 * Generates a random number of zombies.
 * @return a pointer to an array of zombies
 */
void randomZombies(std::vector<std::std::unique_ptr<ICharacter>> & zombies){
	std::srand( time(0)); 
	int nZombie= std::rand()%15+5; // Randomizing the number between 5-20 zombies.
	
	for(nZombie;nZombie>0;nZombie--){
		int choice = std::rand()%NUM_ZOMBIE_TYPE;
		switch(choice){
			case 0:
					zombies.add(characterFactory("Zombie");
				break;
			case 1:
					//zombies.add(make_shared<Child>());
				break;
		}
	}
	return;
}

/**
 * Generates a random set of survivors
 * @return a pointer to an array of survivors
 */
void randomSurvivors(std::vector<std::std::unique_ptr<ICharacter>> & survivor){
	std::srand( time(0)); // This will ensure a really randomized number by help of time.
	int std::nSurvivor=rand()%15+5; // Randomizing the number between 5-20 survivors.
	CharacterFactor characterFactory();
	for(nZombie;nZombie>0;nZombie--){
		int choice = rand()%NUM_SURVIVOR_TYPE;
		switch(choice){
			case 0:
					survivors.add(characterFactory("child");
				break;
			case 1:
					//zombies.add(make_shared<Child>());
				break;
		}
	}
	return;
}
void removeDead(vector<unique_ptr<ICharacter>> & characters){
	int i=0;
	for(it=characters.begin() ; it < characters.end(); it++,i++ ) {
		if(it->isDead()) {
			characters[i].reset();
			characters.remove[i]
		}
	}
}
/**
 * Check if all characters in the array are all dead.
 * @param array the array of characters
 * @return true if none is alive.
 */
bool allDead(vector<unique_ptr<ICharacter>> & characters){
	if(characters.size() == 0){
		return true;
	}
    return false;
}

void start(){
    std::cout << "Welcome to ZombieWar" << std::endl;
	// Vector of zombies
	std::vector<std::std::unique_ptr<ICharacter>> zombies;
	randomZombies(zombies);
	// Vector of Survivors
	std::vector<std::std::unique_ptr<ICharacter>> survivors;
	randomSurvivors(survivors);
    
    //for each survivor, make it attack each zombie in the zombies array
    //for each zombie, make it attack each survivor.
    //repeat this process until one side is all dead.
    //make sure dead character does not attack
    //print the number of survivors that are still alive.
	int initialZombies = zombies.size();
	int initialSurvivors = survivors.size();
	//Game Loop
	while(true){
		for(sur=survivors.begin() ; sur < survivors.end(); sur++){
			for(zomb=zombies.begin() ; zomb < zombies.end(); zomb++){
				zomb->decreaseHealth(sur->attack());
			}
		}
		allDead(zombies);
		
		
		
		if(allDead(survivors){
			std::string resolution = "No one made it.";
			break;
		}
		else if(allDead(zombies)){
			std::string resolution = "It seems " + survivors.size() + " have made it to safety.";
			break;
		}
	}
	
	
	/*
	*	Sample Output:
	*	We have 17 survivors trying to make it to safety.
	*	But there are 8 zombies waiting for them.
	*	It seems 6 have made it to safety.
	*/
	
	std::cout << "We have " << initialSurvivors << " survivors trying to make it to safety.\n";
	std::cout << "But there are " << initialZombies << " zombies waiting for them.\n";
	std::cout << resolution;
	
	//free memory
	zombies.clear();
	survivors.clear();
	return;
    
}

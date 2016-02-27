//Character Class
//Author: Alyssa H.

#include<iostream>
#include "ICharacter.h"
#include "ISurvivor.h"
#include "IZombie.h"
#include "CharacterFactory.h"
using namespace std;

class Character : public CharacterFactory{
	public int health;
	
	Character(int health){
		this.health = health;
	}
	
	public void decreaseHealth(int increment){
		health -= increment;
	}
	
	public boolean isAlive(){
		return (health > 0);
	}
}

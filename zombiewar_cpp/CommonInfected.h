//Author: Steven Horvatin
//CommonInfected class

#include<iostream>
#include "ICharacter.h"
#include "ISurvivor.h"
#include "IZombie.h"

using namespace std;

class CommonInfected : public Zombie{
	public Tank();
	
	int health = 150;
	
	public Tank(int health){
		this.health = health;
	}
	
	public void attack(ISurvivor* survivor){
		survivor.decreaseHealth(50);
	}
}
//Tank Class
//Author: Amber T.

#include<iostream>
#include "ICharacter.h"
#include "ISurvivor.h"
#include "IZombie.h"

using namespace std;

class Tank : public Zombie{
	public Tank();
	
	int health = 150;
	
	public Tank(int health){
		this.health = health;
	}
	
	public void attack(ISurvivor* survivor){
		survivor.decreaseHealth(20);
	}
}

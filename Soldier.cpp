//Soldier Class
//Author: Danielle Otto

#include<iostream>
#include "ICharacter.h"
#include "ISurvivor.h"
#include "IZombie.h"

using namespace std;

class Soldier : public Character{
	public Soldier();
	
	int health = 150;
	
	public Soldier(int health){
		this.health = health;
	}
	
	public void attack(IZombie* zombie){
		zombie.decreaseHealth(20);
	}
}

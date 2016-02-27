//Child Class
//Author: Alyssa H.

#include<iostream>
#include "ICharacter.h"
#include "ISurvivor.h"
#include "IZombie.h"
using namespace std;

class Child : public Character{
	public Child(){}
	
	int health = 20;
	
	public Child(int health){
		this.health = health;
	}
	
	public void attack(IZombie* zombie){
		zombie.decreaseHealth(2);
	}
}

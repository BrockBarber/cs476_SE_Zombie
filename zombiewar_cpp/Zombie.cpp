//Zombie Class
//Author: Amber T.

#include <iostream>
#include "ICharacter.h"
#include "ISurvivor.h"
#include "IZombie.h"
#include "CharacterFactory.h"

using namespace std;

Class Zombie: public Zombie {
  public int health;
  Zombie(int health) {
    this.health = health;
  }
}

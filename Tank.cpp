//Tank Class
//Author: Amber T.

#include <iostream>
#include "IZombie.h"
#include "ICharacter.h"
#include "ISurvivor.h"

using namespace std;

Class Tank: public Zombie {
  public Tank();
  int health = 150;
  public Tank(int health) {
    this.health = health;
  }
  public void attack(ISurvivor* survivor) {
    survivor.decreaseHealth(20);
  }
}

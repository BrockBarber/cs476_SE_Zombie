//Zombie Class
//Auther: Amber T.

#include <iostream>
#include "ICharacter.h"
#include "ISuvivor.h"
#include "IZombie.h"
#include "CharacterFactory.h"

using namespace std;

Class Zombie: public Zombie {
  public int health;
  Zombie(int health) {
    this.health = health;
  }
  public int attack;
  Zombie(int attack) {
    this.attack = attack;
    }
  public boolean isAlive() {
    return (health > 0);
  }
}

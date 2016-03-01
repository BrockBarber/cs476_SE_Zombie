//
// Created by horvste on 2/29/16.
//

#include "Tank.h"

void Tank::attack(ISurvivor *survivor) {
    survivor->decreaseHealth(1000);
}

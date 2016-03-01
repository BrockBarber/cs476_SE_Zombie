//
// Created by horvste on 2/29/16.
//

#include "CommonInfected.h"


void CommonInfected::attack(ISurvivor *survivor) {
    survivor->decreaseHealth(5);
}

CommonInfected::CommonInfected() {
    this->health = 30;
}

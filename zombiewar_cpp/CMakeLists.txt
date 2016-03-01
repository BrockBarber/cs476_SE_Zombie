cmake_minimum_required(VERSION 3.3)
project(zombiewar)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp RealZombieWar.cpp RealZombieWar.h Zombie.cpp Zombie.h CharacterFactory.cpp Survivor.cpp Survivor.h CommonInfected.cpp CommonInfected.h Tank.cpp Tank.h Child.cpp Child.h Soldier.cpp Soldier.h Teacher.cpp Teacher.h)
add_executable(zombiewar ${SOURCE_FILES})
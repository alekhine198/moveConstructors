/*
 * Player.cpp
 *
 *  Created on: 8 abr 2020
 *      Author: tropi
 */

#include "Player.h"
#include <iostream>
namespace o{
Player::Player(): name(""), health(0), xp(0) {

}

Player::Player(std::string name): name (name){
	health = 0;
	xp = 0;
}

Player::Player(std::string name, int health, int xp): name(name), health(health), xp(xp){

}
void Player::set_name(std::string name){
	this->name = name;
}

std::string Player::get_name() const{
	return name;
}

void Player::displayName(const Player &p){
	std::cout << p.get_name() << std::endl;
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

}


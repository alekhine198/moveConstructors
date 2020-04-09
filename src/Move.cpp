/*
 * Move.cpp
 *
 *  Created on: 7 abr 2020
 *      Author: tropi
 */

#include "Move.h"
#include <iostream>

namespace other{
Move::Move(int p){
	ptr= new int;
	*ptr = p;
	std::cout << "constructor for " << p << "\n";
}

Move::Move(const Move &source):Move(*source.ptr){
	std::cout << "copy constructor for " << *ptr << "\n";
}

Move::Move(Move &&source): ptr(nullptr){
	ptr = source.ptr;
	source.ptr = nullptr;
	std::cout << "move constructor for " << *ptr << "\n";
}

int Move::getPtr(){
	return *ptr;
}

Move::~Move() {
	if (ptr != nullptr)
		delete ptr;
	std::cout << "destructor \n";
}
}


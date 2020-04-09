/*
 * Move.h
 *
 *  Created on: 7 abr 2020
 *      Author: tropi
 */

#ifndef MOVE_H_
#define MOVE_H_
namespace other{
class Move {
private:
	int * ptr;
public:
	Move(int p);
	Move(const Move &source);
	Move(Move &&source);
	int getPtr();
	virtual ~Move();
};
}
#endif /* MOVE_H_ */

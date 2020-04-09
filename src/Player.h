/*
 * Player.h
 *
 *  Created on: 8 abr 2020
 *      Author: tropi
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>
namespace o{
class Player {
private:
	std::string name;
	int health;
	int xp;
public:
	Player();
	Player(std::string name_val);
	Player(std::string name_val, int health_val, int xp_val);
	virtual ~Player();
	void set_name(std::string name_val);
	std::string get_name() const;
	void displayName(const Player &p);
};
}
#endif /* PLAYER_H_ */

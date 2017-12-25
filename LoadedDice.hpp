#ifndef LOADEDDICE_HPP
#define LOADEDDICE_HPP

#include "Dice.hpp"

using namespace std;

class LoadedDice : public Dice {
public:
	
	int roll();
	LoadedDice(int y);

};
#endif // !LOADEDDICE_HPP

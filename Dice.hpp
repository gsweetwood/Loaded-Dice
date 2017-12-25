#ifndef DICE_HPP
#define DICE_HPP
#include <iostream>
using namespace std;

class Dice {
protected:
	int sides;
public:
	int roll();
	Dice();
	Dice(int);


};
#endif // !DICE_HPP

#include "Dice.hpp"
#include <cstdlib>

int Dice::roll()
{

	int result = 0;
	
		result = rand() % sides + 1;
		//cout << result << endl;
		return result;
	
}

Dice::Dice()
{
	sides = 6;
}

Dice::Dice(int numsides)
{
	sides = numsides;
}

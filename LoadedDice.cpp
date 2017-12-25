#include "Dice.hpp"
#include "LoadedDice.hpp"
#include <cstdlib>




int LoadedDice::roll()
{
	int result = 0;
		
		result = rand() % sides + 1;
	//	cout << "the random number is " << result << endl;
		if (result < sides) {
			int chance;
			chance = rand() % 20 + 1;
		//	cout << " the chance number is " << chance << endl;
				if (chance == 10) {
					result += 1;
		}
	}
	//	cout << "the result is " << result << endl;
	
		return result;
}

LoadedDice::LoadedDice(int y)
{
	sides = y;
}

/***********************************************
Author:		Garret Sweetwood
Class:		CS 162_400
Assignment:	Lab B

Program:  Regular and loaded dice (Inheritance).
Description:  Created 2 classes, a parent Dice class and a child LoadedDice class.  
The roll function for the loaded dice is overloaded to give a 5% higher chance of getting a +1.  
This also used the rand and srandfunctions.  
It's important to seed rand in the main funciton and using ctime allows for more randomness.
This prints to a file so that analysis can be done externally.
***************************************************/




#include "Dice.hpp"
#include "LoadedDice.hpp"
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	
	cout << "********************" << endl;
	cout << "    LOADED DICE " << endl;
	cout << "********************" << endl << endl;

	
	ofstream diceStream;
	diceStream.open("dieStats.txt");
	
	int x;
	cout << "How many sides do the dice have? ";
	cin >> x;


	cout << "How many rolls would you like? ";
	int n;
	cin >> n;
	srand(time(0));
	
	cout << "Are these loaded dice? yes or no? ";
	//validation for the yes or no answer
	string answer;
	cin >> answer;
	bool valid = false;
	if (answer == "yes" || answer == "no") {
		valid = true;

	}
	while(valid == false)
	if (answer != "yes" && answer != "y") {
		if (answer != "no") {
			cout << "please enter yes or no  ";
			cin >> answer;
		}
	} else {
		valid = true;
	
	};

	
	
	int sum =0;
	int testSum = 0;
	Dice d1 (x) ;
	Dice d2 (x) ;
	LoadedDice ld1 (x);
	LoadedDice ld2 (x);


		if (answer == "no") {
			
			
			for (int i = 0; i < n; i++) {
				
				testSum = (d1.roll() + d2.roll());
				sum += testSum;
			//	diceStream << sum << "\t";
				diceStream << testSum << "\n";
			}
		}
		if (answer == "yes") {
			for (int i = 0; i < n; i++) {


				testSum = (ld1.roll() + ld2.roll());
				sum += testSum;
			//	diceStream << sum << "\t";
				diceStream << testSum << "\n";
			}
		};	
	
		cout << "Result sum of those rolls is  " << sum << endl;
	
	diceStream.close();
	cin.get();
	cin.get();

	return 0;
}
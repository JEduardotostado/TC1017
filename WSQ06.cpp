#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main() {

int secretnumber, userguess, counter=0;

srand (time(NULL)); // permite que se use un número diferente cada vez
secretnumber = rand() % 100 + 1; //determina el rango en el que se puede elegir el número random


cout << "I have chosen a number between 1 and 100" <<endl;

do {

cout <<"I dare you to discover it: ";
	cin >> userguess;

if (userguess>secretnumber) 
	{ cout << "Sorry, your number is too high, try again." <<endl;}

if (userguess<secretnumber) 
	{ cout << "Sorry your number is too low, try again." <<endl;}

if (userguess==secretnumber) 
	{ cout << "Congratulations, you did it. "<< secretnumber <<" is the right number." << endl;}

counter++;
}
while (secretnumber!=userguess);
cout <<"The number of guesses is: " <<counter <<endl;
return 0;
}
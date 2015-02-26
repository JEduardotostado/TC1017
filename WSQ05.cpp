// Temperature 
#include <iostream>
using namespace std;

int main() {

int x;
cout <<"What is the temperature in Fahrenheit? ";
cin >> x;
cout <<"A temperature of " << x <<" degrees Fahrenheit is: " << (x-32)/1.8 <<" in Celsius" <<endl;
if (x<212)
{cout <<"Water dos not boil at this temperature (under typical conditions)" << endl;}
	if (x>212)
		{ cout << "Water does boil at this temperature (under typical conditions)" << endl;}
	if (x==212)
		{ cout << "Water does boil at this temperature (under typical condistions)" << endl;}
	return 0;
}
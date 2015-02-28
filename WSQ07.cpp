#include <iostream>
using namespace std;

int main() {

int x,y;
do {
	cout <<"Please introduce the lower bound: ";
	cin >> x;

	cout << "Please introduce the upper bound: ";
	cin>> y;

	if(x>y)
		{cout<<" Not valid. Lower bound has to be LOWER than upper bound"<< endl;}
} 
while (x>y);

int sumofnumbers=0;

for(int n=x; n<=y; n++)
{
	sumofnumbers= sumofnumbers+n;
}
cout << "The sum from "<<x<<" to "<<y<<" (inclusive) is: "<<sumofnumbers;

	return 0;
}
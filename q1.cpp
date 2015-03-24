#include <iostream>
#include <cmath>
using namespace std;

int gcd (int x, int y) {

int rem;

do {
	rem=remainder (x,y);
	if(rem<0){ rem=rem*-1; };
	x=y;
	y=rem;
	} while(rem!=0);

return x;
}

int recursion (int x, int y){
	if (x==y)
		return x;
	if (x>y)
		return recursion(x-y,y);
	if(x<y)
		return recursion(x,y-x);
}

int main (){

int x,y;

cout<<"Please give me the largest value: ";
cin>>x;

cout<<"Please give me the lowest value: ";
cin>>y;

cout<<"The greatest common divisor of those two numbers is: "<<recursion(x,y)<<endl;
}


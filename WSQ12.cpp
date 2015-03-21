#include <iostream>
#include <math.h>
using namespace std;

int Euclidean (int a, int b){

	int x=a,y=b, rem;
	 do{
		 rem=remainder(x,y); // x % y
		 // x=division*(y)+rem;
		 if(rem<0)
		 	{rem=rem*-1;}
		 x=y;
		 y=rem;
	 } while(rem!=0);

 return x;
}

int gcd(int a, int b){
	if (a==b){
		return a;
	} else {
		if (a > b){
			return gcd(a-b,b);
		} else {
			return gcd(a,b-a);
		}
	}
}

int main() {

float x,y;

cout<<"Give me the largest value: ";
cin>>x;

cout<<"Give me the lowest value: ";
cin>> y;

cout<<"The greatest common divisor of the two values is: "<<Euclidean(x,y)<<endl;
return 0;
}
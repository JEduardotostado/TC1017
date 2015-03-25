#include <iostream>
#include <cmath>
using namespace std;


float raiz (float x) {
float est=x/2;
int counter=0;
float y;
		do{
		y=(0.5)*(est+(x/est));
		est=y;
		counter++;
	      } while (counter!=15);
		
return y;
}

int main(){

float x;
cout<<"Please give me a value and I'll calculate its square root: ";
cin>>x;

cout<<"The square root of "<<x<<" is "<<raiz(x)<<endl;
return 0;
}
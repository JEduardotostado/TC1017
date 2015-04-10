#include <iostream>
#include <cmath>
using namespace std;

double ceil(double i, int q)
{
  i *= pow(10, q);
  i = ceil(i);
  i /= pow(10, q);
return i;
}

double factorial(double precision){
double factorial=1;

for(int n=precision; n>0; n--)
  {
    factorial=factorial*n;
  }
return factorial;
}

double calculate_e(double precision){
double last = 0.0;

  for (int n=0; n<30; n++)
  {
    last=(1/factorial(n))+last;
  }
double e = last;

e=ceil(e,precision);
  
return e;
}

int main() {
int precision;

cout<<"I will estimate the mathematical constant e"<<endl<<endl;
cout<<"How many decimal points of accuracy do you want: ";
cin>>precision;

cout<<"Here´s the number: "<<calculate_e(precision)<<endl;
return 0;  
}
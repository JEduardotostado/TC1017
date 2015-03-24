#include <iostream>
#include <math.h>
using namespace std;

float average (float array[], int size)
{
  float sum;
  sum = 0.0;
  for (int n=0; n<size; n++)
  {
    sum=array[n]+sum;
  }
 
 return sum/size;
}

float deviation (float array[], int size)
{
   float sum, prom;
  sum = 0.0;
  for (int n=0; n<size; n++)
  {
    sum=array[n]+sum;
  }
  prom=sum/size;

  float first=0.0;

  for (int n=0; n<size; n++)
  {
    first=(array[n]-prom)*(array[n]-prom)+first;
  }
  first=first/size;

  float dev;
  dev=sqrt (first);
  return dev;
}


int main () {
int size;
cout<<"Please give me the number of values you will use: ";
cin>>size;

float firstarray[size];

  for (int n=0; n<size; n++)
  {
    cout<<"Please give me a value: "<<endl;
    cin>>firstarray[n];
  }

cout<<"The average of the values is: "<<average(firstarray,size)<<endl;
cout<<"The standard deviation of the values is: "<<deviation(firstarray, size)<<endl;

return 0;
}
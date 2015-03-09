
#include <iostream>
#include <math.h>
using namespace std;

int main() {

int y;
int x, sum=0;

cout<<"Please introduce the number of values you will use: ";
cin>>y;

float array [y]; //Los números que va a introducir el usuario
int z=0;

do {
cout<<"Please give me a value: "<<endl;
cin>> array[z]; ++z;
}

while (z<(y-1));

cout<<"Please give me your last value: "<<endl;
cin>> array[z];

for (x=0; x<y; ++x)
{
    sum = array[x]+sum;
}

cout<<"The total of the numbers is: "<<sum<<endl;

//Average

float ave = (sum/y);

cout<<"The average value of the numbers is: "<<ave<<endl;

//standard deviation

int t;
float dev;

for (t=0; t<y; ++t) 
{
 dev=(array[t]-ave)*(array[t]-ave)+dev;
}

float stddev = sqrt(dev/y);

cout<<"The standard deviation is: "<<stddev<<endl;

    return 0;
}

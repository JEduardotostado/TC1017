#include <iostream>
using namespace std;

int main() {

int n;

cout<<"This program will calculate the factorial of a given number."<<endl;
do {

	cout<<"Please introduce a non-negative number: ";
	cin>>n;

	if(n<0)
		{cout<<"Not valid!"<<endl;}
}

while (n<0);

int y,factorial=1;

for(y=n; y>1; y--)
{
	factorial= factorial*y;
}

cout<<"The factorial of "<<n<<" is "<<factorial<<endl;

char x;

do{

cout<<"Would you like to try another number? Y/N: ";
cin>>x;

if(x=='Y')
{ do {

	cout<<"Please introduce a non-negative number: ";
	cin>>n;

	if(n<0)
		{cout<<"Not valid!"<<endl;}
}

while (n<0);

int y,factorial=1;

for(y=n; y>1; y--)
{
	factorial= factorial*y;
}

cout<<"The factorial of "<<n<<" is "<<factorial<<endl; }

if (x=='N')
{cout<<"It´s all right. Have a nice day"<<endl;}
}

while(x=='Y');

	return 0;
}
#include <iostream>
using namespace std;

void triangles (int size)
{
string a;

for (int b=0; b<=size; b++)
	{ 
		a=a+"T";
		cout<<a<<endl;
	}

for(int b=size-1; b>=1; b--)
	{
		a=a.substr(0,b);
		cout<<a<<endl;
	}
}

int main() {

int a;

cout<<"How many T´s do you want in the largest line of your triangle: ";
cin>>a;

triangles(a);

return 0;
}
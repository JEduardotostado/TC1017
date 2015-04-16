#include <iostream>
using namespace std;

long superpower (long x, long y){
long t=x;

if(y==0)
	{t=1;}
else {
	for (int n=1; n<y; n++)
		{t=t*x;}
}

return t;
}

int main() {
int x, y;

cout<<"Give me a number: ";
cin>>x;

cout<<"To which power do you want to raise the number? ";
cin>>y;

cout<<"The result is: "<<superpower(x,y)<<endl;
return 0;
}

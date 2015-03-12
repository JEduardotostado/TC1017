#include <iostream> //Using functions for the first time
using namespace std;

int addition ( int x, int y)
{ 
int result;
result=x+y;
return result;
}

int difference ( int x, int y)
{ 
int result;
result=x-y;
return result;
}

int multiplication ( int x, int y)
{ 
int result;
result=x*y;
return result;
}

int division ( int x, int y)
{ 
int result;
result=x/y;
return result;
}

int remainder ( int x, int y)
{ 
int result;
result=x%y;
return result;
}

int main() {

int a,b,c;

cout<<"Please introduce a numerical value: ";
cin>>a;

cout<<"Please introduce another numerical value: ";
cin>>b;

c = addition (a,b);

cout<<" The sum of the two numbers is: "<<c<<endl;

c = difference (a,b);

cout<<" The difference of the two numbers is: "<<c<<endl;

c = multiplication (a,b);

cout<<" The product of the two numbers is: "<<c<<endl;

c = division (a,b);

cout<<" The integer based division of the two numbers is: "<<c<<endl;

c = remainder (a,b);

cout<<" The remainder of integer division of the two numbers is: "<<c<<endl;

return 0;

}




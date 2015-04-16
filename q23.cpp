#include <iostream>
using namespace std;

int fibonacci( long n){
int x=0, y=1, result, counter=1;

if(n==0||n==1)
{return n;}

do {
result=x+y;
x=y;
y=result;
counter++;
} while (counter!=n);

return result;
}

int main() {
int x;

cout<<"Which element of the Fibonacci sequence do you want? ";
cin>>x;

cout<<"The "<<x<<" element of the sequence is: "<<fibonacci(x)<<endl;
return 0;
}
#include <iostream>
using namespace std;

int Fibonacci (int z)
{
  int x=0, y=1, counter=1, result;

if(z==0 || z==1)
  {return z;}

do {
    result=x+y;
    x=y;
    y=result;
    counter++;
  }
  while(z>counter);
  return result;
}

int main() {

int n;

cout<<"Which element of the Fibonacci sequence do you want?: ";
cin>>n;

cout<<"The "<<n<<" element of the Fibonacci sequence is "<<Fibonacci(n)<<endl;

char b;

do{ 

cout<<"Would you like another element of the Fibonaci sequence? (Y/N): ";
cin>>b;

  if (b=='Y')
  {
    
    int n;

cout<<"Which element of the Fibonacci sequence do you want?: ";
cin>>n;

cout<<"The "<<n<<" element of the Fibonacci sequence is "<<Fibonacci(n)<<endl;
      
    }


  if (b=='N')
    { cout<<"Have a good day then"<<endl;}
}
while (b=='Y');

  return 0;
}
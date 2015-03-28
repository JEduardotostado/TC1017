#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#include "BigIntegerLibrary.hh"

bool checking (BigInteger c){

  string d=bigIntegerToString(c);
  reverse (d.begin(), d.end());
  BigInteger e=stringToBigInteger(d);
//  cout << c << " " << d << endl;
  return (c == e);
} 

BigInteger notPalindrome(BigInteger c){

  for(int n=0; n<=30 && checking(c) == false; n++)
  { 
//    cout << "checking " << c << endl;
    string a=bigIntegerToString(c);
    reverse(a.begin(), a.end());
    BigInteger b=stringToBigInteger(a);
    c=c+b;
  }
    
return c;
}

int main (){

int counterpalindromes=0, counterlicherel=0, counterbecome=0;

int x,y;

BigInteger num;

cout<<"I need you to introduce a range of values"<<endl<<endl;

cout<<"Please give me the lower bound: ";
cin>>x;

cout<<endl;

cout<<"Please give me the upper bound: ";
cin>>y;

cout<<endl;

  for (BigInteger n=x; n<=y; n = n + 1){
    if(checking(n)==true){
//      cout << n << "is palindrome" << endl;
      counterpalindromes++;
    } else {
      num = notPalindrome(n);
      if(checking(num)==true) {
//      cout << n << "is nonLych" << endl;
        counterbecome++;
      } else {
      cout <<"Hey! I found a Lycherel number " <<n<< " is Lychrel." << endl<<endl;
        counterlicherel++;
      }
    }

  }
cout<<"Here´s the analysis of the range you gave me: "<<endl<<endl;
cout<<"I found "<<counterpalindromes<<" natural palindromes."<<endl<<endl;
cout<<"I found "<<counterbecome<<" numbers that eventually become palindromes."<<endl<<endl;
cout<<"I found "<<counterlicherel<<" lycherel numbers."<<endl;
  return 0;
} 
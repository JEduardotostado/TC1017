#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool ispalindrome(string x){

string y = x;
reverse(x.begin(), x.end());

if (x==y){return true;}
if (x!=y){return false;}
}

int main() {
string x;

cout<<"I´ll tell you whether the word you give me is a string or not."<<endl;

cout<<"Give me a word: ";
cin>>x;

cout<<"The word is a palindrome: "<<ispalindrome(x);
return 0;
}
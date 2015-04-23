#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int findThrees(vector<int>vec){
int rem;
int sum=0;
int n=0;

do{
	rem= vec[n]%3;
	if(rem==0)
		{sum=vec[n]+sum;}
	n++;
} while(n < vec.size());

return sum;
}

int main() {

vector<int>vec;
int size;
int x;

cout<<"I´ll sum all the numbers that are divisible by three of the ones you give me."<<endl;

cout<<"Please give me the number of values you´ll use: ";
cin>>size;

for (int n=0; n<size; n++)
{
	cout<<"Please give me a value: ";
	cin>>x;
	vec.push_back(x);
}

cout<<"The result is: "<<findThrees(vec)<<endl;
return 0;
}
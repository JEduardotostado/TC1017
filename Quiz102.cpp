#include <iostream>
#include <vector>
using namespace std;

float dotProduct(vector<float>vec1, vector<float>vec2){
float result=0.0;

for (int n=0; n<vec1.size(); n++)
{
	result=vec1[n]*vec2[n]+result;
}

return result;
}

int main(){

vector<float>vec1;
vector<float>vec2;
int size;
float x;

cout<<"Give me the number of values you´ll use for your vectors."<<endl;
cin>>size;


cout<<"Give me the values of the first vector."<<endl;

for (int n=0; n<size; n++)
{
	cout<<"Give me a value: ";
	cin>>x;
	vec1.push_back(x);
}

cout<<"Give me the values of the second vector."<<endl;


for (int n=0; n<size; n++)
{
	cout<<"Give me a value: ";
	cin>>x;
	vec2.push_back(x);
}

cout<<"The dot product of your vectors is: "<<dotProduct(vec1, vec2)<<endl;

return 0;
}
#include <iostream>
using namespace std;

void triangles (int size){
string a;

for(int n=0; n<size; n++)
{
	a=a+'T';
	cout<<a<<endl;
}

for (int x=size; x>0; x--)
{
 a=a.substr(0,x);
 cout<<a<<endl;	
}

}

int main(){
int size;

cout<<"How many T´s do you want in your triangle: ";
cin>>size;

triangles(size);
return 0;
}
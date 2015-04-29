#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

void check_banana(string filename){
string line1;
string ban("banana");
int counter = 0.0;

ifstream myfile (filename.c_str());
myfile.is_open();

while(getline(myfile,line1)){

transform(line1.begin(), line1.end(), line1.begin(), :: tolower);

if(line1.find(ban)!=string::npos)
{counter++;}

}

cout<<"The world Banana appears "<<counter<<" times in the file."<<endl;

}

int main() {

check_banana("Banana.txt");
return 0;
}


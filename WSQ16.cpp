#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]){

string line1;

string midrange, cityMPG, HighwayMPG;
int counter=0;
float mid_range=0.0, city_MPG=0.0, Highway_MPG=0.0, sumrange=0.0, sumcity=0.0, sumhighway=0.0;

ifstream myfile("93cars.dat.txt");

myfile.is_open();


while(getline(myfile,line1)){
	if((counter%2)==0){
		midrange=line1.substr(43, 46);

		mid_range=atoi(midrange.c_str());

		cityMPG=line1.substr(53, 54);

		city_MPG=atoi(cityMPG.c_str());

		HighwayMPG=line1.substr(56, 57);

		Highway_MPG=atoi(HighwayMPG.c_str());

		sumrange=sumrange+mid_range;

		sumcity=sumcity+city_MPG;

		sumhighway=sumhighway+Highway_MPG;
	}

	counter++;
}

cout<<"The average gas mileage in city is:"<<sumcity/93<<endl;

cout<<"The average gas mileage on highway is: "<<sumhighway/93<<endl;

cout<<"The average midrange price of the vehicles in the set is: "<<sumrange/93<<endl;

return 0;
}
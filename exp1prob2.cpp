#include <iostream>
#include <conio.h>
#include<iomanip>
using namespace std;

int main()

{ 
double mass;
double density;
double volume;
	cout<<"Input the following:\n";
	cout<<"Mass in grams:\n";
	cin>>mass;
	cout<<"Density in grams per cubic centimeter/s:\n";
	cin>>density;
volume=(mass/density)/4;
cout<<setprecision(2)<<fixed;
cout<<"The total volume is"<<" "<<volume<<" "<<"cubic centimeter/s."<<endl;
	getch();
	return 0;
	
}

#include <iostream>
#include <conio.h>
#include<iomanip>
using namespace std;

int main()

{ 

double netBalance;
double payment;
double d1;
double d2;
double averageDailyBalance;
double interest;
	cout<<"Input the following:\n";
	cout<<"Balance shown ni bill (Net Balance) in $:\n";
	cin>>netBalance;
	cout<<"Payment made in $:\n";
	cin>>payment;
	cout<<"Number of days in the billing cycle:\n";
	cin>>d1;
	cout<<"Number of days payment is made before billing cylce:\n";
	cin>>d2;
	averageDailyBalance = (netBalance*d1-payment*d2)/d1;
	interest = (averageDailyBalance * 0.0152);
	cout<<setprecision(2)<<fixed;
	cout<<"The interest is"<<" "<<"$"<<interest<<"."<<endl;
	

	getch();
	return 0;
	
}

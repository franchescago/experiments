#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
int box = 250, sideline = 100, premium = 50, genad = 25;
int a = 5750, b = 28000, c =35750, d = 18750;    
int sum;
	cout<<"The total amount sold in box is"<<" "<<"$"<<box*a<<"."<<endl;
	cout<<"The total amount sold in sideline is"<<" "<<"$"<<sideline*b<<"."<<endl;
	cout<<"The total amount sold in premium is"<<" "<<"$"<<premium*c<<"."<<endl;
	cout<<"The total amount sold in general admission is"<<" "<<"$"<<genad*d<<"."<<endl;
	sum=(box*a)+(sideline*b)+(premium*c)+(genad*d);
	cout << "The total sale amount is"<<" "<<"$"<<sum<<"."<<endl;
        getch();
        return 0;
}

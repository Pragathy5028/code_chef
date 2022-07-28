// Recently Chef joined a new company.
//  In this company, the employees have to work for XX hours each day from Monday to Thursday. 
//  Also, in this company, Friday is called Chill Day — employees only have to work for Y hours (Y<X) on Friday.
//  Saturdays and Sundays are holidays.

// Determine the total number of working hours in one week.



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int X,Y;
	    cin>>X>>Y;
	    cout<<4*X+Y<<endl;
	}
	return 0;
}

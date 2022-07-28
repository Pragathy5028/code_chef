// Chef is making a dish that consists of exactly two ingredients.
// He has four ingredients A, B, C and D with tastiness a, b, c and d respectively.
// He can use either A or B as the first ingredient and either C or D as the second ingredient.
// The tastiness of a dish is the sum of tastiness of its ingredients.
// Find the maximum possible tastiness of the dish that the chef can prepare.

#include <iostream>
using namespace std;

// int main() {
// 	// your code goes here
// 	int T;
// 	cin>>T;
// 	while(T--)
// 	{
// 	    int a,b,c,d;
// 	    cin>>a>>b>>c>>d;
// 	    if(a+c>b+c)
// 	    {
// 	        if(a+c>a+d)
// 	        {
// 	            cout<<a+c<<endl;
// 	        }
// 	        else
// 	        {
// 	            cout<<a+d<<endl;
// 	        }
	        
// 	    }
// 	    else
// 	    {
// 	        if(b+c>b+d)
// 	        {
// 	            cout<<b+c<<endl;
// 	        }
// 	        else
// 	        {
// 	            cout<<b+d<<endl;
// 	        }
	        
// 	    }
// 	}

// 	return 0;
// }  //hard way



int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int a,b,c,d,big;
	    cin>>a>>b>>c>>d;
	    if(a+c>b+c)
	    {
	        big=a+c; 
	    }
	    else
	    {
	        big=b+c; 
	    }
		if(a+d>big)
		{
			big=a+d;
		}
		if(b+d>big)
		{
			big=b+d;
		}
	}

	return 0;
}


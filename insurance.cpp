// Chef bought car insurance. The policy of the insurance is:

// The maximum rebatable amount for any damage is Rs XX lakhs.
// If the amount required for repairing the damage is \leq X≤X lakhs, that amount is rebated in full.
// Chef's car meets an accident and required Rs YY lakhs for repairing.

// Determine the amount that will be rebated by the insurance company.

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
	    if(Y>X)
	    {
	        cout<<X<<endl;
	        
	    }
	    else
	    {
	        cout<<Y<<endl;
	    }
	}
	return 0;
}

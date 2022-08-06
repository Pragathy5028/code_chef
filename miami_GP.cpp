// Chef has finally got the chance of his lifetime to drive in the F1 tournament.
// But, there is one problem.
// Chef did not know about the 107% rule
// and now he is worried whether he will be allowed to race in the main event or not.
// Given the fastest finish time as X seconds and Chef's finish time as YY seconds,
// determine whether Chef will be allowed to race in the main event or not.
// Note that, Chef will only be allowed to race if his finish time is within 107% of the fastest finish time.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float x,y;
	    cin>>x>>y;
	    if(y<=x*1.07){
	        cout<<"YES\n";
	    }else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}

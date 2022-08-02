// Chef has X 5 rupee coins and Y 10 rupee coins.
// Chef goes to a shop to buy chocolates for Chefina where each chocolate costs Z rupees.
// Find the maximum number of chocolates that Chef can buy for Chefina.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(5*x+10*y>=z){
	        cout<<(5*x+10*y)/z<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}

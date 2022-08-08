// The summer is at its peak in Chefland.
// Chef is planning to purchase a water cooler to keep his room cool.He has two options available:

// Rent a cooler at the cost of X coins per month.
// Purchase a cooler for Y coins.
// Given that the summer season will last for M months in Chefland,
// help Chef in finding whether he should rent the cooler or not.

// Chef rents the cooler only if the cost of renting the cooler is strictly less than the cost of purchasing it.
// Otherwise, he purchases the cooler.
// Print YES if Chef should rent the cooler, otherwise print NO.


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,m;
	    cin>>x>>y>>m;
	    if(x*m<y){
	        cout<<"YES\n";
	    }else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}

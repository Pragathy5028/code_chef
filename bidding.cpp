// Alice, Bob and Charlie are bidding for an artifact at an auction.
// Alice bids A rupees, Bob bids BBrupees, and Charlie bids C rupees (where AA, BB, and CC are distinct).
// According to the rules of the auction, the person who bids the highest amount will win the auction.
// Determine who will win the auction.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b && a>c){
	        cout<<"Alice\n";
	    }
	    else if(b>a && b>c){
	        cout<<"Bob\n";
	    }
	    else{
	        cout<<"Charlie\n";
	    }
	}
	return 0;
}

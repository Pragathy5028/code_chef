// Chef's son wants to go on a roller coaster ride.
// The height of Chef's son is X inches while the minimum height required to go on the ride is H inches.
// Determine whether he can go on the ride or not.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X,H;
	    cin>>X>>H;
	    if(X>=H){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}

// Alice and Bob are very good friends and they always distribute all the eatables equally among themselves.
// Alice has A chocolates and Bob has B chocolates.
// Determine whether Alice and Bob can distribute all the chocolates equally among themselves.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if((a+b)%2==0){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
